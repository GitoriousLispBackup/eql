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

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLShader::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLShader::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLShader::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLShader::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLShader::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLShader::timerEvent(x1); }}
};

class LGLShaderProgram : public QGLShaderProgram {
    Q_OBJECT
    friend class Q64;
public:
    LGLShaderProgram(uint u, QObject* x1 = 0) : QGLShaderProgram(x1), unique(u) {}
    LGLShaderProgram(uint u, const QGLContext* x1, QObject* x2 = 0) : QGLShaderProgram(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool link() { quint64 id = LObjects::override_id(unique, 199); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 199, 0, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLShaderProgram::link(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLShaderProgram::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLShaderProgram::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLShaderProgram::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLShaderProgram::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLShaderProgram::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLShaderProgram::timerEvent(x1); }}
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

    void glDraw() { quint64 id = LObjects::override_id(unique, 200); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 200, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::glDraw(); }}
    void glInit() { quint64 id = LObjects::override_id(unique, 201); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 201, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::glInit(); }}
    void initializeGL() { quint64 id = LObjects::override_id(unique, 202); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 202, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::initializeGL(); }}
    void initializeOverlayGL() { quint64 id = LObjects::override_id(unique, 203); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 203, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::initializeOverlayGL(); }}
    void paintGL() { quint64 id = LObjects::override_id(unique, 204); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 204, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::paintGL(); }}
    void paintOverlayGL() { quint64 id = LObjects::override_id(unique, 205); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { callOverrideFun(fun, 205, 0, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::paintOverlayGL(); }}
    void resizeGL(int x1, int x2) { quint64 id = LObjects::override_id(unique, 206); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 206, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::resizeGL(x1, x2); }}
    void resizeOverlayGL(int x1, int x2) { quint64 id = LObjects::override_id(unique, 207); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 207, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::resizeOverlayGL(x1, x2); }}
    void paintEvent(QPaintEvent* x1) { quint64 id = LObjects::override_id(unique, 22); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 22, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::paintEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { quint64 id = LObjects::override_id(unique, 41); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::resizeEvent(x1); }}
    int heightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLWidget::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 24); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 24, args, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLWidget::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { quint64 id = LObjects::override_id(unique, 25); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLWidget::minimumSizeHint(); } return ret; }
    QSize sizeHint() const { quint64 id = LObjects::override_id(unique, 26); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = qVariantValue<QSize>(callOverrideFun(fun, 26, 0, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLWidget::sizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { quint64 id = LObjects::override_id(unique, 27); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::actionEvent(x1); }}
    void changeEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { quint64 id = LObjects::override_id(unique, 28); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { quint64 id = LObjects::override_id(unique, 29); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { quint64 id = LObjects::override_id(unique, 30); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { quint64 id = LObjects::override_id(unique, 31); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 32); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { quint64 id = LObjects::override_id(unique, 33); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::dropEvent(x1); }}
    void enterEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 34); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 34, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::enterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { quint64 id = LObjects::override_id(unique, 35); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 35, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLWidget::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::focusOutEvent(x1); }}
    void hideEvent(QHideEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::hideEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 37); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 17); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 18); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 38); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 39); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 19); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 20); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 21); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 40); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::moveEvent(x1); }}
    void showEvent(QShowEvent* x1) { quint64 id = LObjects::override_id(unique, 42); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { quint64 id = LObjects::override_id(unique, 43); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 44); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 44, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::wheelEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 45); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLWidget::metric(x1); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGLWidget::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGLWidget::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
