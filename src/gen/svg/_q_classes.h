// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

class LGraphicsSvgItem : public QGraphicsSvgItem {
    Q_OBJECT
    friend class Q78;
public:
    LGraphicsSvgItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsSvgItem(x1), unique(u) {}
    LGraphicsSvgItem(uint u, const QString& x1, QGraphicsItem* x2 = 0) : QGraphicsSvgItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { quint64 id = LObjects::override_id(unique, 240); void* fun = LObjects::overrideFun(id); QRectF ret; if(fun && (LObjects::calling != id)) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 240, 0, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsSvgItem::boundingRect(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { quint64 id = LObjects::override_id(unique, 211); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 211, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsSvgItem::paint(x1, x2, x3); }}
    int type() const { quint64 id = LObjects::override_id(unique, 213); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { ret = callOverrideFun(fun, 213, 0, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsSvgItem::type(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QGraphicsSvgItem::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsSvgItem::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsSvgItem::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsSvgItem::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsSvgItem::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QGraphicsSvgItem::timerEvent(x1); }}
};

class LSvgRenderer : public QSvgRenderer {
    Q_OBJECT
    friend class Q177;
public:
    LSvgRenderer(uint u, QObject* x1 = 0) : QSvgRenderer(x1), unique(u) {}
    LSvgRenderer(uint u, const QString& x1, QObject* x2 = 0) : QSvgRenderer(x1, x2), unique(u) {}
    LSvgRenderer(uint u, const QByteArray& x1, QObject* x2 = 0) : QSvgRenderer(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSvgRenderer::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgRenderer::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgRenderer::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgRenderer::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgRenderer::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgRenderer::timerEvent(x1); }}
};

class LSvgWidget : public QSvgWidget {
    Q_OBJECT
    friend class Q178;
public:
    LSvgWidget(uint u, QWidget* x1 = 0) : QSvgWidget(x1), unique(u) {}
    LSvgWidget(uint u, const QString& x1, QWidget* x2 = 0) : QSvgWidget(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { quint64 id = LObjects::override_id(unique, 26); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = qVariantValue<QSize>(callOverrideFun(fun, 26, 0, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSvgWidget::sizeHint(); } return ret; }
    void paintEvent(QPaintEvent* x1) { quint64 id = LObjects::override_id(unique, 22); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 22, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::paintEvent(x1); }}
    int heightForWidth(int x1) const { quint64 id = LObjects::override_id(unique, 23); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSvgWidget::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { quint64 id = LObjects::override_id(unique, 24); void* fun = LObjects::overrideFun(id); QVariant ret; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 24, args, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSvgWidget::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { quint64 id = LObjects::override_id(unique, 25); void* fun = LObjects::overrideFun(id); QSize ret; if(fun && (LObjects::calling != id)) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0, id)); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSvgWidget::minimumSizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { quint64 id = LObjects::override_id(unique, 27); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::actionEvent(x1); }}
    void changeEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 14); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { quint64 id = LObjects::override_id(unique, 28); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { quint64 id = LObjects::override_id(unique, 29); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { quint64 id = LObjects::override_id(unique, 30); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { quint64 id = LObjects::override_id(unique, 31); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 32); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { quint64 id = LObjects::override_id(unique, 33); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::dropEvent(x1); }}
    void enterEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 34); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 34, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::enterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 15); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { quint64 id = LObjects::override_id(unique, 35); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 35, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSvgWidget::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { quint64 id = LObjects::override_id(unique, 16); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::focusOutEvent(x1); }}
    void hideEvent(QHideEvent* x1) { quint64 id = LObjects::override_id(unique, 36); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::hideEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { quint64 id = LObjects::override_id(unique, 37); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 17); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { quint64 id = LObjects::override_id(unique, 18); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 38); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 39); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 19); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 20); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { quint64 id = LObjects::override_id(unique, 21); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { quint64 id = LObjects::override_id(unique, 40); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::moveEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { quint64 id = LObjects::override_id(unique, 41); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::resizeEvent(x1); }}
    void showEvent(QShowEvent* x1) { quint64 id = LObjects::override_id(unique, 42); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { quint64 id = LObjects::override_id(unique, 43); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { quint64 id = LObjects::override_id(unique, 44); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 44, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::wheelEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { quint64 id = LObjects::override_id(unique, 45); void* fun = LObjects::overrideFun(id); int ret = 0; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, id).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSvgWidget::metric(x1); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { quint64 id = LObjects::override_id(unique, 5); void* fun = LObjects::overrideFun(id); bool ret = false; if(fun && (LObjects::calling != id)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, id).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { ret = QSvgWidget::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { quint64 id = LObjects::override_id(unique, 6); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::childEvent(x1); }}
    void connectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 7); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::connectNotify(x1); }}
    void customEvent(QEvent* x1) { quint64 id = LObjects::override_id(unique, 8); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::customEvent(x1); }}
    void disconnectNotify(const char* x1) { quint64 id = LObjects::override_id(unique, 9); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { quint64 id = LObjects::override_id(unique, 10); void* fun = LObjects::overrideFun(id); if(fun && (LObjects::calling != id)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, id); } if(!fun || LObjects::call_default || (LObjects::calling == id)) { QSvgWidget::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
