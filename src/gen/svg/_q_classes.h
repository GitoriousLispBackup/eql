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

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 240); QRectF ret; if(fun && (LObjects::calling != unique)) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 240, 0, unique)); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGraphicsSvgItem::boundingRect(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 211); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 211, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGraphicsSvgItem::paint(x1, x2, x3); }}
    int type() const { void* fun = LObjects::overrideFun(unique, 213); int ret = 0; if(fun && (LObjects::calling != unique)) { ret = callOverrideFun(fun, 213, 0, unique).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGraphicsSvgItem::type(); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QGraphicsSvgItem::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGraphicsSvgItem::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGraphicsSvgItem::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGraphicsSvgItem::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGraphicsSvgItem::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QGraphicsSvgItem::timerEvent(x1); }}
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

    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QSvgRenderer::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgRenderer::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgRenderer::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgRenderer::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgRenderer::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgRenderer::timerEvent(x1); }}
};

class LSvgWidget : public QSvgWidget {
    Q_OBJECT
    friend class Q178;
public:
    LSvgWidget(uint u, QWidget* x1 = 0) : QSvgWidget(x1), unique(u) {}
    LSvgWidget(uint u, const QString& x1, QWidget* x2 = 0) : QSvgWidget(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 26); QSize ret; if(fun && (LObjects::calling != unique)) { ret = qVariantValue<QSize>(callOverrideFun(fun, 26, 0, unique)); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QSvgWidget::sizeHint(); } return ret; }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 22); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 22, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::paintEvent(x1); }}
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 23); int ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 23, args, unique).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QSvgWidget::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 24); QVariant ret; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 24, args, unique)); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QSvgWidget::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun && (LObjects::calling != unique)) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0, unique)); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QSvgWidget::minimumSizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::actionEvent(x1); }}
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::dropEvent(x1); }}
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 34, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::enterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 35); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 35, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QSvgWidget::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::focusOutEvent(x1); }}
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::hideEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::moveEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::resizeEvent(x1); }}
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 44); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 44, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::wheelEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 45); int ret = 0; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 45, args, unique).toInt(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QSvgWidget::metric(x1); } return ret; }
    bool eventFilter(QObject* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 5); bool ret = false; if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 5, args, unique).toBool(); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { ret = QSvgWidget::eventFilter(x1, x2); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 10); if(fun && (LObjects::calling != unique)) { const void* args[] = { &x1 }; callOverrideFun(fun, 10, args, unique); } if(!fun || LObjects::call_default || (LObjects::calling == unique)) { QSvgWidget::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
