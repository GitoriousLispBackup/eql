#include <QtGui>
#include <QLibrary>
#include <QtDebug>

#include "qt_application.h"

typedef void (*OnShowPlugin)(QWidget*);
typedef void (*OnHidePlugin)();

static OnShowPlugin onShowPlugin = 0;
static OnHidePlugin onHidePlugin = 0;

MainWindow::MainWindow() : pluginWidget(0)
{
    setWindowTitle("Qt Application");

    QWidget* central = new QWidget;
    QLabel* label = new QLabel;
    label->setText(tr("<h3>QMainWindow with a dockable plugin widget.</h3>"));
    QPushButton* buttonShow = new QPushButton(tr("show plugin"));
    QPushButton* buttonHide = new QPushButton(tr("hide plugin"));
    setCentralWidget(central);

    QHBoxLayout* layout = new QHBoxLayout(central);
    QVBoxLayout* buttonLayout = new QVBoxLayout;
    buttonLayout->addWidget(buttonShow);
    buttonLayout->addWidget(buttonHide);
    buttonLayout->addStretch();
    layout->addWidget(label);
    layout->addLayout(buttonLayout);

    connect(buttonShow, SIGNAL(clicked()), SLOT(showPlugin()));
    connect(buttonHide, SIGNAL(clicked()), SLOT(hidePlugin()));
}

void MainWindow::showPlugin()
{
    static bool loaded = false;
    if(!loaded) {
        loaded = true;
        QString prefix, postfix;
    #ifdef Q_OS_LINUX
        prefix = "lib"; postfix = ".so.1";
    #endif
    #ifdef Q_OS_DARWIN
        prefix = "lib"; postfix = ".1.dylib";
    #endif
        QLibrary plugin("./" + prefix + "qt_plugin" + postfix);
        onShowPlugin = (OnShowPlugin)plugin.resolve("onShowPlugin");
        onHidePlugin = (OnHidePlugin)plugin.resolve("onHidePlugin");
        pluginWidget = new QDockWidget(this);
        addDockWidget(Qt::TopDockWidgetArea, pluginWidget);
    }

    if(onShowPlugin) {
        onShowPlugin(pluginWidget);
    }

    pluginWidget->show();
}

void MainWindow::hidePlugin()
{
    pluginWidget->hide();

    if(onHidePlugin) {
        onHidePlugin();
    }
}
