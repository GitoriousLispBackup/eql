#ifndef QT_APPLICATION_H
#define QT_APPLICATION_H

#include <QMainWindow>
#include <QLibrary>

QT_BEGIN_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

    QLibrary plugin;
    QDockWidget* pluginWidget;

public slots:
    void loadPlugin();
    void unloadPlugin();
};

QT_END_NAMESPACE

#endif
