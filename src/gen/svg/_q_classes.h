// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

typedef QList<int> NumList;

class LGraphicsSvgItem : public QGraphicsSvgItem {
    Q_OBJECT
    friend class Q78;
public:
    LGraphicsSvgItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsSvgItem(x1), unique(u) {}
    LGraphicsSvgItem(uint u, const QString& x1, QGraphicsItem* x2 = 0) : QGraphicsSvgItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QGraphicsSvgItem::boundingRect(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; } QGraphicsSvgItem::paint(x1, x2, x3); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QGraphicsSvgItem::type(); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QGraphicsSvgItem::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QGraphicsSvgItem::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QGraphicsSvgItem::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QGraphicsSvgItem::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QGraphicsSvgItem::timerEvent(x1); }
};

class LSvgRenderer : public QSvgRenderer {
    Q_OBJECT
    friend class Q171;
public:
    LSvgRenderer(uint u, QObject* x1 = 0) : QSvgRenderer(x1), unique(u) {}
    LSvgRenderer(uint u, const QString& x1, QObject* x2 = 0) : QSvgRenderer(x1, x2), unique(u) {}
    LSvgRenderer(uint u, const QByteArray& x1, QObject* x2 = 0) : QSvgRenderer(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QSvgRenderer::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QSvgRenderer::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QSvgRenderer::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QSvgRenderer::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QSvgRenderer::timerEvent(x1); }
};

class LSvgWidget : public QSvgWidget {
    Q_OBJECT
    friend class Q172;
public:
    LSvgWidget(uint u, QWidget* x1 = 0) : QSvgWidget(x1), unique(u) {}
    LSvgWidget(uint u, const QString& x1, QWidget* x2 = 0) : QSvgWidget(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return QSvgWidget::sizeHint(); }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 21, args).toBool()) return; } QSvgWidget::paintEvent(x1); }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 22, args).toInt(); } return QSvgWidget::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QSvgWidget::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } return QSvgWidget::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 26, args).toBool()) return; } QSvgWidget::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 13, args).toBool()) return; } QSvgWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 27, args).toBool()) return; } QSvgWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 28, args).toBool()) return; } QSvgWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 29, args).toBool()) return; } QSvgWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 30, args).toBool()) return; } QSvgWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 31, args).toBool()) return; } QSvgWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 32, args).toBool()) return; } QSvgWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 33, args).toBool()) return; } QSvgWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QSvgWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 34, args).toBool(); } return QSvgWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QSvgWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 35, args).toBool()) return; } QSvgWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QSvgWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QSvgWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QSvgWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 37, args).toBool()) return; } QSvgWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 38, args).toBool()) return; } QSvgWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 18, args).toBool()) return; } QSvgWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 19, args).toBool()) return; } QSvgWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 20, args).toBool()) return; } QSvgWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 39, args).toBool()) return; } QSvgWidget::moveEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 40, args).toBool()) return; } QSvgWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 41, args).toBool()) return; } QSvgWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 42, args).toBool()) return; } QSvgWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 43, args).toBool()) return; } QSvgWidget::wheelEvent(x1); }
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QSvgWidget::metric(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QSvgWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QSvgWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QSvgWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QSvgWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QSvgWidget::timerEvent(x1); }
};

#endif
