// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

class LGLShader : public QGLShader {
    Q_OBJECT
    friend class Q63;
public:
    LGLShader(uint u, QGLShader::ShaderType x1, QObject* x2 = 0) : QGLShader(x1, x2), unique(u) {}
    LGLShader(uint u, QGLShader::ShaderType x1, const QGLContext* x2, QObject* x3 = 0) : QGLShader(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGLShader::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLShader::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLShader::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLShader::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLShader::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLShader::timerEvent(x1); }}
};

class LGLShaderProgram : public QGLShaderProgram {
    Q_OBJECT
    friend class Q64;
public:
    LGLShaderProgram(uint u, QObject* x1 = 0) : QGLShaderProgram(x1), unique(u) {}
    LGLShaderProgram(uint u, const QGLContext* x1, QObject* x2 = 0) : QGLShaderProgram(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool link() { void* fun = LObjects::overrideFun(unique, 199); bool ret = false; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 199, 0, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGLShaderProgram::link(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGLShaderProgram::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLShaderProgram::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLShaderProgram::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLShaderProgram::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLShaderProgram::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLShaderProgram::timerEvent(x1); }}
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

    void glDraw() { void* fun = LObjects::overrideFun(unique, 200); if(fun && (LObjects::calling != unique)) { callOverrideFun(fun, 200, 0, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::glDraw(); }}
    void glInit() { void* fun = LObjects::overrideFun(unique, 201); if(fun && (LObjects::calling != unique)) { callOverrideFun(fun, 201, 0, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::glInit(); }}
    void initializeGL() { void* fun = LObjects::overrideFun(unique, 202); if(fun && (LObjects::calling != unique)) { callOverrideFun(fun, 202, 0, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::initializeGL(); }}
    void initializeOverlayGL() { void* fun = LObjects::overrideFun(unique, 203); if(fun && (LObjects::calling != unique)) { callOverrideFun(fun, 203, 0, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::initializeOverlayGL(); }}
    void paintGL() { void* fun = LObjects::overrideFun(unique, 204); if(fun && (LObjects::calling != unique)) { callOverrideFun(fun, 204, 0, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::paintGL(); }}
    void paintOverlayGL() { void* fun = LObjects::overrideFun(unique, 205); if(fun && (LObjects::calling != unique)) { callOverrideFun(fun, 205, 0, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::paintOverlayGL(); }}
    void resizeGL(int x1, int x2) { void* fun = LObjects::overrideFun(unique, 206); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 206, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::resizeGL(x1, x2); }}
    void resizeOverlayGL(int x1, int x2) { void* fun = LObjects::overrideFun(unique, 207); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 207, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::resizeOverlayGL(x1, x2); }}
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 22); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 22, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::paintEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::resizeEvent(x1); }}
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 23); int ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, unique).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGLWidget::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 24); QVariant ret; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 24, args, unique)); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGLWidget::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun && (LObjects::calling != unique)) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0, unique)); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGLWidget::minimumSizeHint(); } return ret; }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 26); QSize ret; if(fun && (LObjects::calling != unique)) { ret = qVariantValue<QSize>(callOverrideFun(fun, 26, 0, unique)); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGLWidget::sizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::actionEvent(x1); }}
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::dropEvent(x1); }}
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 34, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::enterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 35); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 35, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGLWidget::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::focusOutEvent(x1); }}
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::hideEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::moveEvent(x1); }}
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 44); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 44, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::wheelEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 45); int ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, unique).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGLWidget::metric(x1); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGLWidget::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGLWidget::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
