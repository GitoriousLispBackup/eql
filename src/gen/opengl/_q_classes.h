// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

class LGLShader : public QGLShader {
    Q_OBJECT
    friend class Q63;
public:
    LGLShader(uint u, QGLShader::ShaderType x1, QObject* x2 = 0) : QGLShader(x1, x2), unique(u) {}
    LGLShader(uint u, QGLShader::ShaderType x1, const QGLContext* x2, QObject* x3 = 0) : QGLShader(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QGLShader::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QGLShader::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QGLShader::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QGLShader::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QGLShader::timerEvent(x1); }
};

class LGLShaderProgram : public QGLShaderProgram {
    Q_OBJECT
    friend class Q64;
public:
    LGLShaderProgram(uint u, QObject* x1 = 0) : QGLShaderProgram(x1), unique(u) {}
    LGLShaderProgram(uint u, const QGLContext* x1, QObject* x2 = 0) : QGLShaderProgram(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool link() { void* fun = LObjects::overrideFun(unique, 190); if(fun) { return callOverrideFun(fun, 190, 0).toBool(); } return QGLShaderProgram::link(); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QGLShaderProgram::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QGLShaderProgram::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QGLShaderProgram::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QGLShaderProgram::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QGLShaderProgram::timerEvent(x1); }
};

class LGLWidget : public QGLWidget {
    Q_OBJECT
    friend class Q65;
public:
    LGLWidget(uint u, QWidget* x1 = 0, const QGLWidget* x2 = 0, Qt::WindowFlags x3 = 0) : QGLWidget(x1, x2, x3), unique(u) {}
    LGLWidget(uint u, QGLContext* x1, QWidget* x2 = 0, const QGLWidget* x3 = 0, Qt::WindowFlags x4 = 0) : QGLWidget(x1, x2, x3, x4), unique(u) {}
    LGLWidget(uint u, const QGLFormat& x1, QWidget* x2 = 0, const QGLWidget* x3 = 0, Qt::WindowFlags x4 = 0) : QGLWidget(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void glDraw() { void* fun = LObjects::overrideFun(unique, 191); if(fun) { if(callOverrideFun(fun, 191, 0).toBool()) return; } QGLWidget::glDraw(); }
    void glInit() { void* fun = LObjects::overrideFun(unique, 192); if(fun) { if(callOverrideFun(fun, 192, 0).toBool()) return; } QGLWidget::glInit(); }
    void initializeGL() { void* fun = LObjects::overrideFun(unique, 193); if(fun) { if(callOverrideFun(fun, 193, 0).toBool()) return; } QGLWidget::initializeGL(); }
    void initializeOverlayGL() { void* fun = LObjects::overrideFun(unique, 194); if(fun) { if(callOverrideFun(fun, 194, 0).toBool()) return; } QGLWidget::initializeOverlayGL(); }
    void paintGL() { void* fun = LObjects::overrideFun(unique, 195); if(fun) { if(callOverrideFun(fun, 195, 0).toBool()) return; } QGLWidget::paintGL(); }
    void paintOverlayGL() { void* fun = LObjects::overrideFun(unique, 196); if(fun) { if(callOverrideFun(fun, 196, 0).toBool()) return; } QGLWidget::paintOverlayGL(); }
    void resizeGL(int x1, int x2) { void* fun = LObjects::overrideFun(unique, 197); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 197, args).toBool()) return; } QGLWidget::resizeGL(x1, x2); }
    void resizeOverlayGL(int x1, int x2) { void* fun = LObjects::overrideFun(unique, 198); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 198, args).toBool()) return; } QGLWidget::resizeOverlayGL(x1, x2); }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 21, args).toBool()) return; } QGLWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 40, args).toBool()) return; } QGLWidget::resizeEvent(x1); }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 22, args).toInt(); } return QGLWidget::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QGLWidget::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } return QGLWidget::minimumSizeHint(); }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return QGLWidget::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 26, args).toBool()) return; } QGLWidget::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 13, args).toBool()) return; } QGLWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 27, args).toBool()) return; } QGLWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 28, args).toBool()) return; } QGLWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 29, args).toBool()) return; } QGLWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 30, args).toBool()) return; } QGLWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 31, args).toBool()) return; } QGLWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 32, args).toBool()) return; } QGLWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 33, args).toBool()) return; } QGLWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QGLWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 34, args).toBool(); } return QGLWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QGLWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 35, args).toBool()) return; } QGLWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QGLWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QGLWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QGLWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 37, args).toBool()) return; } QGLWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 38, args).toBool()) return; } QGLWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 18, args).toBool()) return; } QGLWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 19, args).toBool()) return; } QGLWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 20, args).toBool()) return; } QGLWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 39, args).toBool()) return; } QGLWidget::moveEvent(x1); }
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 41, args).toBool()) return; } QGLWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 42, args).toBool()) return; } QGLWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 43, args).toBool()) return; } QGLWidget::wheelEvent(x1); }
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QGLWidget::metric(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QGLWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QGLWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QGLWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QGLWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QGLWidget::timerEvent(x1); }
};

#endif
