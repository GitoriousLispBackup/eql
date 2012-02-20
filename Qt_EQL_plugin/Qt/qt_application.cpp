#include <QtGui>
#include <QLibrary>
#include <QtDebug>

#include "qt_application.h"

typedef void (*OnLoadPlugin)(QWidget*);
typedef void (*OnUnloadPlugin)();

static OnLoadPlugin   onLoadPlugin   = 0;
static OnUnloadPlugin onUnloadPlugin = 0;

MainWindow::MainWindow() : pluginWidget(0)
{
    setWindowTitle("Qt Application");

    QWidget* central = new QWidget;
    QLabel* label = new QLabel;
    label->setText(tr("<h3>QMainWindow with a dockable plugin widget.</h3>"));
    QPushButton* load = new QPushButton(tr("load plugin"));
    QPushButton* unload = new QPushButton(tr("unload plugin"));
    setCentralWidget(central);

    QHBoxLayout* layout = new QHBoxLayout(central);
    QVBoxLayout* buttonLayout = new QVBoxLayout;
    buttonLayout->addWidget(load);
    buttonLayout->addWidget(unload);
    buttonLayout->addStretch();
    layout->addWidget(label);
    layout->addLayout(buttonLayout);

    connect(load, SIGNAL(clicked()), SLOT(loadPlugin()));
    connect(unload, SIGNAL(clicked()), SLOT(unloadPlugin()));

    QString prefix, postfix;
#ifdef Q_OS_LINUX
    prefix = "lib"; postfix = ".so.1";
#endif
#ifdef Q_OS_DARWIN
    prefix = "lib"; postfix = ".1.dylib";
#endif
    plugin.setFileName("./" + prefix + "qt_plugin" + postfix);
}

void MainWindow::loadPlugin()
{
    if(!plugin.isLoaded()) {
        if(plugin.load()) {
            onLoadPlugin   = (OnLoadPlugin)plugin.resolve("onLoadPlugin");
            onUnloadPlugin = (OnUnloadPlugin)plugin.resolve("onUnloadPlugin");

            if(onLoadPlugin && onUnloadPlugin) {
                pluginWidget = new QDockWidget(this);
                addDockWidget(Qt::TopDockWidgetArea, pluginWidget);
                onLoadPlugin(pluginWidget);
            }
        }
    }
}

void MainWindow::unloadPlugin()
{
    if(plugin.isLoaded()) {
        onUnloadPlugin();
        plugin.unload();
        onLoadPlugin = 0;
        onUnloadPlugin = 0;
        delete pluginWidget; pluginWidget = 0;
    }
}

