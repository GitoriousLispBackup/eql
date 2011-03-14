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

    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QGLShader::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QGLShader::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QGLShader::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QGLShader::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QGLShader::timerEvent(x1); }}
};

class LGLShaderProgram : public QGLShaderProgram {
    Q_OBJECT
    friend class Q64;
public:
    LGLShaderProgram(uint u, QObject* x1 = 0) : QGLShaderProgram(x1), unique(u) {}
    LGLShaderProgram(uint u, const QGLContext* x1, QObject* x2 = 0) : QGLShaderProgram(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool link() { void* fun = LObjects::overrideFun(unique, 198); bool ret = false; if(fun) { ret = callOverrideFun(fun, 198, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QGLShaderProgram::link(); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QGLShaderProgram::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QGLShaderProgram::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QGLShaderProgram::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QGLShaderProgram::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QGLShaderProgram::timerEvent(x1); }}
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

    void glDraw() { void* fun = LObjects::overrideFun(unique, 199);  if(fun) { callOverrideFun(fun, 199, 0); } if(!fun || LObjects::call_default) { QGLWidget::glDraw(); }}
    void glInit() { void* fun = LObjects::overrideFun(unique, 200);  if(fun) { callOverrideFun(fun, 200, 0); } if(!fun || LObjects::call_default) { QGLWidget::glInit(); }}
    void initializeGL() { void* fun = LObjects::overrideFun(unique, 201);  if(fun) { callOverrideFun(fun, 201, 0); } if(!fun || LObjects::call_default) { QGLWidget::initializeGL(); }}
    void initializeOverlayGL() { void* fun = LObjects::overrideFun(unique, 202);  if(fun) { callOverrideFun(fun, 202, 0); } if(!fun || LObjects::call_default) { QGLWidget::initializeOverlayGL(); }}
    void paintGL() { void* fun = LObjects::overrideFun(unique, 203);  if(fun) { callOverrideFun(fun, 203, 0); } if(!fun || LObjects::call_default) { QGLWidget::paintGL(); }}
    void paintOverlayGL() { void* fun = LObjects::overrideFun(unique, 204);  if(fun) { callOverrideFun(fun, 204, 0); } if(!fun || LObjects::call_default) { QGLWidget::paintOverlayGL(); }}
    void resizeGL(int x1, int x2) { void* fun = LObjects::overrideFun(unique, 205);  if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 205, args); } if(!fun || LObjects::call_default) { QGLWidget::resizeGL(x1, x2); }}
    void resizeOverlayGL(int x1, int x2) { void* fun = LObjects::overrideFun(unique, 206);  if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 206, args); } if(!fun || LObjects::call_default) { QGLWidget::resizeOverlayGL(x1, x2); }}
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args); } if(!fun || LObjects::call_default) { QGLWidget::paintEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args); } if(!fun || LObjects::call_default) { QGLWidget::resizeEvent(x1); }}
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args).toInt(); } if(!fun || LObjects::call_default) { ret = QGLWidget::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QGLWidget::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } if(!fun || LObjects::call_default) { ret = QGLWidget::minimumSizeHint(); } return ret; }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } if(!fun || LObjects::call_default) { ret = QGLWidget::sizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 26, args); } if(!fun || LObjects::call_default) { QGLWidget::actionEvent(x1); }}
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args); } if(!fun || LObjects::call_default) { QGLWidget::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args); } if(!fun || LObjects::call_default) { QGLWidget::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args); } if(!fun || LObjects::call_default) { QGLWidget::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args); } if(!fun || LObjects::call_default) { QGLWidget::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args); } if(!fun || LObjects::call_default) { QGLWidget::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args); } if(!fun || LObjects::call_default) { QGLWidget::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args); } if(!fun || LObjects::call_default) { QGLWidget::dropEvent(x1); }}
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args); } if(!fun || LObjects::call_default) { QGLWidget::enterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QGLWidget::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGLWidget::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QGLWidget::focusOutEvent(x1); }}
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args); } if(!fun || LObjects::call_default) { QGLWidget::hideEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QGLWidget::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QGLWidget::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QGLWidget::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args); } if(!fun || LObjects::call_default) { QGLWidget::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args); } if(!fun || LObjects::call_default) { QGLWidget::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args); } if(!fun || LObjects::call_default) { QGLWidget::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args); } if(!fun || LObjects::call_default) { QGLWidget::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args); } if(!fun || LObjects::call_default) { QGLWidget::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args); } if(!fun || LObjects::call_default) { QGLWidget::moveEvent(x1); }}
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args); } if(!fun || LObjects::call_default) { QGLWidget::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args); } if(!fun || LObjects::call_default) { QGLWidget::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args); } if(!fun || LObjects::call_default) { QGLWidget::wheelEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QGLWidget::metric(x1); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QGLWidget::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QGLWidget::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QGLWidget::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QGLWidget::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9);  if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QGLWidget::timerEvent(x1); }}
};

#endif
