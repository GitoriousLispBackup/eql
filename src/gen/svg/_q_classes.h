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

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 240); QRectF ret; if(fun && !LObjects::calling) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QGraphicsSvgItem::boundingRect(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 211); if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 211, args); } if(!fun || LObjects::call_default || LObjects::calling) { QGraphicsSvgItem::paint(x1, x2, x3); }}
    int type() const { void* fun = LObjects::overrideFun(unique, 213); int ret = 0; if(fun && !LObjects::calling) { ret = callOverrideFun(fun, 213, 0).toInt(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QGraphicsSvgItem::type(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QGraphicsSvgItem::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QGraphicsSvgItem::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QGraphicsSvgItem::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QGraphicsSvgItem::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QGraphicsSvgItem::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QGraphicsSvgItem::timerEvent(x1); }}
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

    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QSvgRenderer::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgRenderer::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgRenderer::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgRenderer::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgRenderer::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgRenderer::timerEvent(x1); }}
};

class LSvgWidget : public QSvgWidget {
    Q_OBJECT
    friend class Q178;
public:
    LSvgWidget(uint u, QWidget* x1 = 0) : QSvgWidget(x1), unique(u) {}
    LSvgWidget(uint u, const QString& x1, QWidget* x2 = 0) : QSvgWidget(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 26); QSize ret; if(fun && !LObjects::calling) { ret = qVariantValue<QSize>(callOverrideFun(fun, 26, 0)); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QSvgWidget::sizeHint(); } return ret; }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 22); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 22, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::paintEvent(x1); }}
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 23); int ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args).toInt(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QSvgWidget::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 24); QVariant ret; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 24, args)); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QSvgWidget::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun && !LObjects::calling) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QSvgWidget::minimumSizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::actionEvent(x1); }}
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::dropEvent(x1); }}
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 34, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::enterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 35); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 35, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QSvgWidget::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::focusOutEvent(x1); }}
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::hideEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::moveEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::resizeEvent(x1); }}
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 44); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 44, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::wheelEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 45); int ret = 0; if(fun && !LObjects::calling) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args).toInt(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QSvgWidget::metric(x1); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && !LObjects::calling) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args).toBool(); } if(!fun || LObjects::call_default || LObjects::calling) { ret = QSvgWidget::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && !LObjects::calling) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args); } if(!fun || LObjects::call_default || LObjects::calling) { QSvgWidget::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
