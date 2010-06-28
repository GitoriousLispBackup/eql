// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "../ecl_fun.h"
#include "_lobjects.h"
#include <QtGui>

typedef QList<int> NumList;

class LBasicTimer : public QBasicTimer {
public:
    LBasicTimer(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LBitArray : public QBitArray {
public:
    LBitArray(uint u) : unique(u) {}
    LBitArray(uint u, int x1, bool x2 = false) : QBitArray(x1, x2), unique(u) {}
    LBitArray(uint u, const QBitArray& x1) : QBitArray(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LBitmap : public QBitmap {
public:
    LBitmap(uint u) : unique(u) {}
    LBitmap(uint u, const QPixmap& x1) : QBitmap(x1), unique(u) {}
    LBitmap(uint u, int x1, int x2) : QBitmap(x1, x2), unique(u) {}
    LBitmap(uint u, const QSize& x1) : QBitmap(x1), unique(u) {}
    LBitmap(uint u, const QString& x1, const char* x2 = 0) : QBitmap(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LBrush : public QBrush {
public:
    LBrush(uint u) : unique(u) {}
    LBrush(uint u, Qt::BrushStyle x1) : QBrush(x1), unique(u) {}
    LBrush(uint u, const QColor& x1, Qt::BrushStyle x2 = Qt::SolidPattern) : QBrush(x1, x2), unique(u) {}
    LBrush(uint u, Qt::GlobalColor x1, Qt::BrushStyle x2 = Qt::SolidPattern) : QBrush(x1, x2), unique(u) {}
    LBrush(uint u, const QColor& x1, const QPixmap& x2) : QBrush(x1, x2), unique(u) {}
    LBrush(uint u, Qt::GlobalColor x1, const QPixmap& x2) : QBrush(x1, x2), unique(u) {}
    LBrush(uint u, const QPixmap& x1) : QBrush(x1), unique(u) {}
    LBrush(uint u, const QImage& x1) : QBrush(x1), unique(u) {}
    LBrush(uint u, const QBrush& x1) : QBrush(x1), unique(u) {}
    LBrush(uint u, const QGradient& x1) : QBrush(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LConicalGradient : public QConicalGradient {
public:
    LConicalGradient(uint u) : unique(u) {}
    LConicalGradient(uint u, const QPointF& x1, qreal x2) : QConicalGradient(x1, x2), unique(u) {}
    LConicalGradient(uint u, qreal x1, qreal x2, qreal x3) : QConicalGradient(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDir : public QDir {
public:
    LDir(uint u, const QDir& x1) : QDir(x1), unique(u) {}
    LDir(uint u, const QString& x1 = QString()) : QDir(x1), unique(u) {}
    LDir(uint u, const QString& x1, const QString& x2, SortFlags x3 = SortFlags(Name|IgnoreCase), Filters x4 = AllEntries) : QDir(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFileIconProvider : public QFileIconProvider {
public:
    LFileIconProvider(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QIcon icon(IconType x1) const { void* fun = LObjects::overrideFun(unique, 204); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QIcon>(callOverrideFun(0, fun, 204, args)); } return QFileIconProvider::icon(x1); }
};

class LFileInfo : public QFileInfo {
public:

    static NumList overrideIds;
    uint unique;
};

class LFontMetrics : public QFontMetrics {
public:
    LFontMetrics(uint u, const QFont& x1) : QFontMetrics(x1), unique(u) {}
    LFontMetrics(uint u, const QFont& x1, QPaintDevice* x2) : QFontMetrics(x1, x2), unique(u) {}
    LFontMetrics(uint u, const QFontMetrics& x1) : QFontMetrics(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGradient : public QGradient {
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsEllipseItem : public QGraphicsEllipseItem {
public:
    LGraphicsEllipseItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsEllipseItem(x1), unique(u) {}
    LGraphicsEllipseItem(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) : QGraphicsEllipseItem(x1, x2), unique(u) {}
    LGraphicsEllipseItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsEllipseItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(0, fun, 98, 0)); } return QGraphicsEllipseItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 123); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 123, args).toBool(); } return QGraphicsEllipseItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 124); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 124, args).toBool(); } return QGraphicsEllipseItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 125); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 125, 0)); } return QGraphicsEllipseItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 94); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(0, fun, 94, args).toBool()) return; } QGraphicsEllipseItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 99, 0)); } return QGraphicsEllipseItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 96); if(fun) { return callOverrideFun(0, fun, 96, 0).toInt(); } return QGraphicsEllipseItem::type(); }
};

class LGraphicsItem : public QGraphicsItem {
public:
    LGraphicsItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 205); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 205, args).toBool()) return; } QGraphicsItem::advance(x1); }
    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(0, fun, 98, 0)); } return QRectF(); }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 206); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 206, args).toBool(); } return QGraphicsItem::collidesWithItem(x1, x2); }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 207); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 207, args).toBool(); } return QGraphicsItem::collidesWithPath(x1, x2); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 123); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 123, args).toBool(); } return QGraphicsItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 124); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 124, args).toBool(); } return QGraphicsItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 125); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 125, 0)); } return QGraphicsItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 94); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(0, fun, 94, args).toBool()) return; }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 99, 0)); } return QGraphicsItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 96); if(fun) { return callOverrideFun(0, fun, 96, 0).toInt(); } return QGraphicsItem::type(); }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 110); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 110, args).toBool()) return; } QGraphicsItem::contextMenuEvent(x1); }
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 111); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 111, args).toBool()) return; } QGraphicsItem::dragEnterEvent(x1); }
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 112); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 112, args).toBool()) return; } QGraphicsItem::dragLeaveEvent(x1); }
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 113); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 113, args).toBool()) return; } QGraphicsItem::dragMoveEvent(x1); }
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 116); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 116, args).toBool()) return; } QGraphicsItem::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 20, args).toBool()) return; } QGraphicsItem::focusInEvent(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 22, args).toBool()) return; } QGraphicsItem::focusOutEvent(x1); }
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 208); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 208, args).toBool()) return; } QGraphicsItem::hoverEnterEvent(x1); }
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 209); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 209, args).toBool()) return; } QGraphicsItem::hoverLeaveEvent(x1); }
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 210, args).toBool()) return; } QGraphicsItem::hoverMoveEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 24); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 24, args).toBool()) return; } QGraphicsItem::inputMethodEvent(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 10); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 10, args)); } return QGraphicsItem::inputMethodQuery(x1); }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 211, args)); } return QGraphicsItem::itemChange(x1, x2); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 25); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 25, args).toBool()) return; } QGraphicsItem::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 26, args).toBool()) return; } QGraphicsItem::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 118); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 118, args).toBool()) return; } QGraphicsItem::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 119); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 119, args).toBool()) return; } QGraphicsItem::mouseMoveEvent(x1); }
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 120); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 120, args).toBool()) return; } QGraphicsItem::mousePressEvent(x1); }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 121); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 121, args).toBool()) return; } QGraphicsItem::mouseReleaseEvent(x1); }
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 212); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 212, args).toBool(); } return QGraphicsItem::sceneEvent(x1); }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 213, args).toBool(); } return QGraphicsItem::sceneEventFilter(x1, x2); }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 122); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 122, args).toBool()) return; } QGraphicsItem::wheelEvent(x1); }
};

class LGraphicsItemGroup : public QGraphicsItemGroup {
public:
    LGraphicsItemGroup(uint u, QGraphicsItem* x1 = 0) : QGraphicsItemGroup(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(0, fun, 98, 0)); } return QGraphicsItemGroup::boundingRect(); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 124); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 124, args).toBool(); } return QGraphicsItemGroup::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 125); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 125, 0)); } return QGraphicsItemGroup::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 94); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(0, fun, 94, args).toBool()) return; } QGraphicsItemGroup::paint(x1, x2, x3); }
    int type() const { void* fun = LObjects::overrideFun(unique, 96); if(fun) { return callOverrideFun(0, fun, 96, 0).toInt(); } return QGraphicsItemGroup::type(); }
    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 205); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 205, args).toBool()) return; } QGraphicsItemGroup::advance(x1); }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 206); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 206, args).toBool(); } return QGraphicsItemGroup::collidesWithItem(x1, x2); }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 207); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 207, args).toBool(); } return QGraphicsItemGroup::collidesWithPath(x1, x2); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 123); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 123, args).toBool(); } return QGraphicsItemGroup::contains(x1); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 99, 0)); } return QGraphicsItemGroup::shape(); }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 110); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 110, args).toBool()) return; } QGraphicsItemGroup::contextMenuEvent(x1); }
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 111); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 111, args).toBool()) return; } QGraphicsItemGroup::dragEnterEvent(x1); }
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 112); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 112, args).toBool()) return; } QGraphicsItemGroup::dragLeaveEvent(x1); }
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 113); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 113, args).toBool()) return; } QGraphicsItemGroup::dragMoveEvent(x1); }
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 116); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 116, args).toBool()) return; } QGraphicsItemGroup::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 20, args).toBool()) return; } QGraphicsItemGroup::focusInEvent(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 22, args).toBool()) return; } QGraphicsItemGroup::focusOutEvent(x1); }
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 208); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 208, args).toBool()) return; } QGraphicsItemGroup::hoverEnterEvent(x1); }
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 209); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 209, args).toBool()) return; } QGraphicsItemGroup::hoverLeaveEvent(x1); }
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 210, args).toBool()) return; } QGraphicsItemGroup::hoverMoveEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 24); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 24, args).toBool()) return; } QGraphicsItemGroup::inputMethodEvent(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 10); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 10, args)); } return QGraphicsItemGroup::inputMethodQuery(x1); }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 211, args)); } return QGraphicsItemGroup::itemChange(x1, x2); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 25); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 25, args).toBool()) return; } QGraphicsItemGroup::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 26, args).toBool()) return; } QGraphicsItemGroup::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 118); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 118, args).toBool()) return; } QGraphicsItemGroup::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 119); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 119, args).toBool()) return; } QGraphicsItemGroup::mouseMoveEvent(x1); }
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 120); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 120, args).toBool()) return; } QGraphicsItemGroup::mousePressEvent(x1); }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 121); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 121, args).toBool()) return; } QGraphicsItemGroup::mouseReleaseEvent(x1); }
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 212); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 212, args).toBool(); } return QGraphicsItemGroup::sceneEvent(x1); }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 213, args).toBool(); } return QGraphicsItemGroup::sceneEventFilter(x1, x2); }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 122); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 122, args).toBool()) return; } QGraphicsItemGroup::wheelEvent(x1); }
};

class LGraphicsLineItem : public QGraphicsLineItem {
public:
    LGraphicsLineItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsLineItem(x1), unique(u) {}
    LGraphicsLineItem(uint u, const QLineF& x1, QGraphicsItem* x2 = 0) : QGraphicsLineItem(x1, x2), unique(u) {}
    LGraphicsLineItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsLineItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(0, fun, 98, 0)); } return QGraphicsLineItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 123); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 123, args).toBool(); } return QGraphicsLineItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 124); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 124, args).toBool(); } return QGraphicsLineItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 125); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 125, 0)); } return QGraphicsLineItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 94); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(0, fun, 94, args).toBool()) return; } QGraphicsLineItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 99, 0)); } return QGraphicsLineItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 96); if(fun) { return callOverrideFun(0, fun, 96, 0).toInt(); } return QGraphicsLineItem::type(); }
    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 205); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 205, args).toBool()) return; } QGraphicsLineItem::advance(x1); }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 206); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 206, args).toBool(); } return QGraphicsLineItem::collidesWithItem(x1, x2); }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 207); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 207, args).toBool(); } return QGraphicsLineItem::collidesWithPath(x1, x2); }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 110); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 110, args).toBool()) return; } QGraphicsLineItem::contextMenuEvent(x1); }
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 111); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 111, args).toBool()) return; } QGraphicsLineItem::dragEnterEvent(x1); }
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 112); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 112, args).toBool()) return; } QGraphicsLineItem::dragLeaveEvent(x1); }
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 113); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 113, args).toBool()) return; } QGraphicsLineItem::dragMoveEvent(x1); }
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 116); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 116, args).toBool()) return; } QGraphicsLineItem::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 20, args).toBool()) return; } QGraphicsLineItem::focusInEvent(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 22, args).toBool()) return; } QGraphicsLineItem::focusOutEvent(x1); }
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 208); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 208, args).toBool()) return; } QGraphicsLineItem::hoverEnterEvent(x1); }
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 209); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 209, args).toBool()) return; } QGraphicsLineItem::hoverLeaveEvent(x1); }
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 210, args).toBool()) return; } QGraphicsLineItem::hoverMoveEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 24); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 24, args).toBool()) return; } QGraphicsLineItem::inputMethodEvent(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 10); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 10, args)); } return QGraphicsLineItem::inputMethodQuery(x1); }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 211, args)); } return QGraphicsLineItem::itemChange(x1, x2); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 25); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 25, args).toBool()) return; } QGraphicsLineItem::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 26, args).toBool()) return; } QGraphicsLineItem::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 118); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 118, args).toBool()) return; } QGraphicsLineItem::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 119); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 119, args).toBool()) return; } QGraphicsLineItem::mouseMoveEvent(x1); }
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 120); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 120, args).toBool()) return; } QGraphicsLineItem::mousePressEvent(x1); }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 121); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 121, args).toBool()) return; } QGraphicsLineItem::mouseReleaseEvent(x1); }
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 212); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 212, args).toBool(); } return QGraphicsLineItem::sceneEvent(x1); }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 213, args).toBool(); } return QGraphicsLineItem::sceneEventFilter(x1, x2); }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 122); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 122, args).toBool()) return; } QGraphicsLineItem::wheelEvent(x1); }
};

class LGraphicsPathItem : public QGraphicsPathItem {
public:
    LGraphicsPathItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPathItem(x1), unique(u) {}
    LGraphicsPathItem(uint u, const QPainterPath& x1, QGraphicsItem* x2 = 0) : QGraphicsPathItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(0, fun, 98, 0)); } return QGraphicsPathItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 123); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 123, args).toBool(); } return QGraphicsPathItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 124); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 124, args).toBool(); } return QGraphicsPathItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 125); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 125, 0)); } return QGraphicsPathItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 94); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(0, fun, 94, args).toBool()) return; } QGraphicsPathItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 99, 0)); } return QGraphicsPathItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 96); if(fun) { return callOverrideFun(0, fun, 96, 0).toInt(); } return QGraphicsPathItem::type(); }
};

class LGraphicsPixmapItem : public QGraphicsPixmapItem {
public:
    LGraphicsPixmapItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPixmapItem(x1), unique(u) {}
    LGraphicsPixmapItem(uint u, const QPixmap& x1, QGraphicsItem* x2 = 0) : QGraphicsPixmapItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(0, fun, 98, 0)); } return QGraphicsPixmapItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 123); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 123, args).toBool(); } return QGraphicsPixmapItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 124); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 124, args).toBool(); } return QGraphicsPixmapItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 125); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 125, 0)); } return QGraphicsPixmapItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { void* fun = LObjects::overrideFun(unique, 94); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(0, fun, 94, args).toBool()) return; } QGraphicsPixmapItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 99, 0)); } return QGraphicsPixmapItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 96); if(fun) { return callOverrideFun(0, fun, 96, 0).toInt(); } return QGraphicsPixmapItem::type(); }
    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 205); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 205, args).toBool()) return; } QGraphicsPixmapItem::advance(x1); }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 206); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 206, args).toBool(); } return QGraphicsPixmapItem::collidesWithItem(x1, x2); }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 207); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 207, args).toBool(); } return QGraphicsPixmapItem::collidesWithPath(x1, x2); }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 110); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 110, args).toBool()) return; } QGraphicsPixmapItem::contextMenuEvent(x1); }
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 111); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 111, args).toBool()) return; } QGraphicsPixmapItem::dragEnterEvent(x1); }
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 112); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 112, args).toBool()) return; } QGraphicsPixmapItem::dragLeaveEvent(x1); }
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 113); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 113, args).toBool()) return; } QGraphicsPixmapItem::dragMoveEvent(x1); }
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 116); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 116, args).toBool()) return; } QGraphicsPixmapItem::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 20, args).toBool()) return; } QGraphicsPixmapItem::focusInEvent(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 22, args).toBool()) return; } QGraphicsPixmapItem::focusOutEvent(x1); }
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 208); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 208, args).toBool()) return; } QGraphicsPixmapItem::hoverEnterEvent(x1); }
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 209); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 209, args).toBool()) return; } QGraphicsPixmapItem::hoverLeaveEvent(x1); }
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 210, args).toBool()) return; } QGraphicsPixmapItem::hoverMoveEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 24); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 24, args).toBool()) return; } QGraphicsPixmapItem::inputMethodEvent(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 10); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 10, args)); } return QGraphicsPixmapItem::inputMethodQuery(x1); }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 211, args)); } return QGraphicsPixmapItem::itemChange(x1, x2); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 25); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 25, args).toBool()) return; } QGraphicsPixmapItem::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 26, args).toBool()) return; } QGraphicsPixmapItem::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 118); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 118, args).toBool()) return; } QGraphicsPixmapItem::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 119); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 119, args).toBool()) return; } QGraphicsPixmapItem::mouseMoveEvent(x1); }
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 120); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 120, args).toBool()) return; } QGraphicsPixmapItem::mousePressEvent(x1); }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 121); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 121, args).toBool()) return; } QGraphicsPixmapItem::mouseReleaseEvent(x1); }
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 212); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 212, args).toBool(); } return QGraphicsPixmapItem::sceneEvent(x1); }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(0, fun, 213, args).toBool(); } return QGraphicsPixmapItem::sceneEventFilter(x1, x2); }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 122); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 122, args).toBool()) return; } QGraphicsPixmapItem::wheelEvent(x1); }
};

class LGraphicsPolygonItem : public QGraphicsPolygonItem {
public:
    LGraphicsPolygonItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPolygonItem(x1), unique(u) {}
    LGraphicsPolygonItem(uint u, const QPolygonF& x1, QGraphicsItem* x2 = 0) : QGraphicsPolygonItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(0, fun, 98, 0)); } return QGraphicsPolygonItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 123); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 123, args).toBool(); } return QGraphicsPolygonItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 124); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 124, args).toBool(); } return QGraphicsPolygonItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 125); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 125, 0)); } return QGraphicsPolygonItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 94); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(0, fun, 94, args).toBool()) return; } QGraphicsPolygonItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 99, 0)); } return QGraphicsPolygonItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 96); if(fun) { return callOverrideFun(0, fun, 96, 0).toInt(); } return QGraphicsPolygonItem::type(); }
};

class LGraphicsRectItem : public QGraphicsRectItem {
public:
    LGraphicsRectItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsRectItem(x1), unique(u) {}
    LGraphicsRectItem(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) : QGraphicsRectItem(x1, x2), unique(u) {}
    LGraphicsRectItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsRectItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(0, fun, 98, 0)); } return QGraphicsRectItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 123); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 123, args).toBool(); } return QGraphicsRectItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 124); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 124, args).toBool(); } return QGraphicsRectItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 125); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 125, 0)); } return QGraphicsRectItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 94); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(0, fun, 94, args).toBool()) return; } QGraphicsRectItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 99, 0)); } return QGraphicsRectItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 96); if(fun) { return callOverrideFun(0, fun, 96, 0).toInt(); } return QGraphicsRectItem::type(); }
};

class LGraphicsSimpleTextItem : public QGraphicsSimpleTextItem {
public:
    LGraphicsSimpleTextItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsSimpleTextItem(x1), unique(u) {}
    LGraphicsSimpleTextItem(uint u, const QString& x1, QGraphicsItem* x2 = 0) : QGraphicsSimpleTextItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(0, fun, 98, 0)); } return QGraphicsSimpleTextItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 123); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 123, args).toBool(); } return QGraphicsSimpleTextItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 124); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 124, args).toBool(); } return QGraphicsSimpleTextItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 125); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 125, 0)); } return QGraphicsSimpleTextItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { void* fun = LObjects::overrideFun(unique, 94); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(0, fun, 94, args).toBool()) return; } QGraphicsSimpleTextItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(0, fun, 99, 0)); } return QGraphicsSimpleTextItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 96); if(fun) { return callOverrideFun(0, fun, 96, 0).toInt(); } return QGraphicsSimpleTextItem::type(); }
};

class LIcon : public QIcon {
public:
    LIcon(uint u) : unique(u) {}
    LIcon(uint u, const QPixmap& x1) : QIcon(x1), unique(u) {}
    LIcon(uint u, const QIcon& x1) : QIcon(x1), unique(u) {}
    LIcon(uint u, const QString& x1) : QIcon(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LImage : public QImage {
public:
    LImage(uint u) : unique(u) {}
    LImage(uint u, const QSize& x1, Format x2) : QImage(x1, x2), unique(u) {}
    LImage(uint u, int x1, int x2, Format x3) : QImage(x1, x2, x3), unique(u) {}
    LImage(uint u, uchar* x1, int x2, int x3, Format x4) : QImage(x1, x2, x3, x4), unique(u) {}
    LImage(uint u, const uchar* x1, int x2, int x3, Format x4) : QImage(x1, x2, x3, x4), unique(u) {}
    LImage(uint u, uchar* x1, int x2, int x3, int x4, Format x5) : QImage(x1, x2, x3, x4, x5), unique(u) {}
    LImage(uint u, const uchar* x1, int x2, int x3, int x4, Format x5) : QImage(x1, x2, x3, x4, x5), unique(u) {}
    LImage(uint u, const QString& x1, const char* x2 = 0) : QImage(x1, x2), unique(u) {}
    LImage(uint u, const char* x1, const char* x2 = 0) : QImage(x1, x2), unique(u) {}
    LImage(uint u, const QImage& x1) : QImage(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 214, args).toInt(); } return QImage::metric(x1); }
};

class LItemEditorFactory : public QItemEditorFactory {
public:
    LItemEditorFactory(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QWidget* createEditor(QVariant::Type x1, QWidget* x2) const { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1, &x2 }; return (QWidget*)qVariantValue<void*>(callOverrideFun(0, fun, 215, args)); } return QItemEditorFactory::createEditor(x1, x2); }
    QByteArray valuePropertyName(QVariant::Type x1) const { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QByteArray>(callOverrideFun(0, fun, 216, args)); } return QItemEditorFactory::valuePropertyName(x1); }
};

class LItemSelection : public QItemSelection {
public:
    LItemSelection(uint u) : unique(u) {}
    LItemSelection(uint u, const QModelIndex& x1, const QModelIndex& x2) : QItemSelection(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LItemSelectionRange : public QItemSelectionRange {
public:
    LItemSelectionRange(uint u) : unique(u) {}
    LItemSelectionRange(uint u, const QItemSelectionRange& x1) : QItemSelectionRange(x1), unique(u) {}
    LItemSelectionRange(uint u, const QModelIndex& x1, const QModelIndex& x2) : QItemSelectionRange(x1, x2), unique(u) {}
    LItemSelectionRange(uint u, const QModelIndex& x1) : QItemSelectionRange(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LLinearGradient : public QLinearGradient {
public:
    LLinearGradient(uint u) : unique(u) {}
    LLinearGradient(uint u, const QPointF& x1, const QPointF& x2) : QLinearGradient(x1, x2), unique(u) {}
    LLinearGradient(uint u, qreal x1, qreal x2, qreal x3, qreal x4) : QLinearGradient(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LListWidgetItem : public QListWidgetItem {
public:
    LListWidgetItem(uint u, QListWidget* x1 = 0, int x2 = Type) : QListWidgetItem(x1, x2), unique(u) {}
    LListWidgetItem(uint u, const QString& x1, QListWidget* x2 = 0, int x3 = Type) : QListWidgetItem(x1, x2, x3), unique(u) {}
    LListWidgetItem(uint u, const QIcon& x1, const QString& x2, QListWidget* x3 = 0, int x4 = Type) : QListWidgetItem(x1, x2, x3, x4), unique(u) {}
    LListWidgetItem(uint u, const QListWidgetItem& x1) : QListWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QListWidgetItem* clone() const { void* fun = LObjects::overrideFun(unique, 217); if(fun) { return (QListWidgetItem*)qVariantValue<void*>(callOverrideFun(0, fun, 217, 0)); } return QListWidgetItem::clone(); }
    QVariant data(int x1) const { void* fun = LObjects::overrideFun(unique, 218); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 218, args)); } return QListWidgetItem::data(x1); }
    void setData(int x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(0, fun, 219, args).toBool()) return; } QListWidgetItem::setData(x1, x2); }
};

class LLocale : public QLocale {
public:
    LLocale(uint u) : unique(u) {}
    LLocale(uint u, const QString& x1) : QLocale(x1), unique(u) {}
    LLocale(uint u, Language x1, Country x2 = AnyCountry) : QLocale(x1, x2), unique(u) {}
    LLocale(uint u, const QLocale& x1) : QLocale(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMatrix : public QMatrix {
public:
    LMatrix(uint u) : unique(u) {}
    LMatrix(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) : QMatrix(x1, x2, x3, x4, x5, x6), unique(u) {}
    LMatrix(uint u, const QMatrix& x1) : QMatrix(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMatrix4x4 : public QMatrix4x4 {
public:
    LMatrix4x4(uint u) : unique(u) {}
    LMatrix4x4(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, qreal x7, qreal x8, qreal x9, qreal x10, qreal x11, qreal x12, qreal x13, qreal x14, qreal x15, qreal x16) : QMatrix4x4(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16), unique(u) {}
    LMatrix4x4(uint u, const QTransform& x1) : QMatrix4x4(x1), unique(u) {}
    LMatrix4x4(uint u, const QMatrix& x1) : QMatrix4x4(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LModelIndex : public QModelIndex {
public:
    LModelIndex(uint u) : unique(u) {}
    LModelIndex(uint u, const QModelIndex& x1) : QModelIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPainter : public QPainter {
public:
    LPainter(uint u) : unique(u) {}
    LPainter(uint u, QPaintDevice* x1) : QPainter(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPainterPath : public QPainterPath {
public:
    LPainterPath(uint u) : unique(u) {}
    LPainterPath(uint u, const QPointF& x1) : QPainterPath(x1), unique(u) {}
    LPainterPath(uint u, const QPainterPath& x1) : QPainterPath(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPalette : public QPalette {
public:
    LPalette(uint u) : unique(u) {}
    LPalette(uint u, const QColor& x1) : QPalette(x1), unique(u) {}
    LPalette(uint u, Qt::GlobalColor x1) : QPalette(x1), unique(u) {}
    LPalette(uint u, const QColor& x1, const QColor& x2) : QPalette(x1, x2), unique(u) {}
    LPalette(uint u, const QBrush& x1, const QBrush& x2, const QBrush& x3, const QBrush& x4, const QBrush& x5, const QBrush& x6, const QBrush& x7, const QBrush& x8, const QBrush& x9) : QPalette(x1, x2, x3, x4, x5, x6, x7, x8, x9), unique(u) {}
    LPalette(uint u, const QPalette& x1) : QPalette(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPen : public QPen {
public:
    LPen(uint u) : unique(u) {}
    LPen(uint u, Qt::PenStyle x1) : QPen(x1), unique(u) {}
    LPen(uint u, const QColor& x1) : QPen(x1), unique(u) {}
    LPen(uint u, const QBrush& x1, qreal x2, Qt::PenStyle x3 = Qt::SolidLine, Qt::PenCapStyle x4 = Qt::SquareCap, Qt::PenJoinStyle x5 = Qt::BevelJoin) : QPen(x1, x2, x3, x4, x5), unique(u) {}
    LPen(uint u, const QPen& x1) : QPen(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPicture : public QPicture {
public:
    LPicture(uint u, int x1 = -1) : QPicture(x1), unique(u) {}
    LPicture(uint u, const QPicture& x1) : QPicture(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setData(const char* x1, uint x2) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(0, fun, 220, args).toBool()) return; } QPicture::setData(x1, x2); }
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 214, args).toInt(); } return QPicture::metric(x1); }
};

class LPixmap : public QPixmap {
public:
    LPixmap(uint u) : unique(u) {}
    LPixmap(uint u, int x1, int x2) : QPixmap(x1, x2), unique(u) {}
    LPixmap(uint u, const QString& x1, const char* x2 = 0, Qt::ImageConversionFlags x3 = Qt::AutoColor) : QPixmap(x1, x2, x3), unique(u) {}
    LPixmap(uint u, const QPixmap& x1) : QPixmap(x1), unique(u) {}
    LPixmap(uint u, const QSize& x1) : QPixmap(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 214, args).toInt(); } return QPixmap::metric(x1); }
};

class LPrinter : public QPrinter {
public:
    LPrinter(uint u, PrinterMode x1 = ScreenResolution) : QPrinter(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 214, args).toInt(); } return QPrinter::metric(x1); }
};

class LQuaternion : public QQuaternion {
public:
    LQuaternion(uint u) : unique(u) {}
    LQuaternion(uint u, qreal x1, qreal x2, qreal x3, qreal x4) : QQuaternion(x1, x2, x3, x4), unique(u) {}
    LQuaternion(uint u, qreal x1, const QVector3D& x2) : QQuaternion(x1, x2), unique(u) {}
    LQuaternion(uint u, const QVector4D& x1) : QQuaternion(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRadialGradient : public QRadialGradient {
public:
    LRadialGradient(uint u) : unique(u) {}
    LRadialGradient(uint u, const QPointF& x1, qreal x2, const QPointF& x3) : QRadialGradient(x1, x2, x3), unique(u) {}
    LRadialGradient(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5) : QRadialGradient(x1, x2, x3, x4, x5), unique(u) {}
    LRadialGradient(uint u, const QPointF& x1, qreal x2) : QRadialGradient(x1, x2), unique(u) {}
    LRadialGradient(uint u, qreal x1, qreal x2, qreal x3) : QRadialGradient(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRegExp : public QRegExp {
public:
    LRegExp(uint u) : unique(u) {}
    LRegExp(uint u, const QString& x1, Qt::CaseSensitivity x2 = Qt::CaseSensitive, PatternSyntax x3 = RegExp) : QRegExp(x1, x2, x3), unique(u) {}
    LRegExp(uint u, const QRegExp& x1) : QRegExp(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRegion : public QRegion {
public:
    LRegion(uint u) : unique(u) {}
    LRegion(uint u, int x1, int x2, int x3, int x4, RegionType x5 = Rectangle) : QRegion(x1, x2, x3, x4, x5), unique(u) {}
    LRegion(uint u, const QPolygon& x1, Qt::FillRule x2 = Qt::OddEvenFill) : QRegion(x1, x2), unique(u) {}
    LRegion(uint u, const QRegion& x1) : QRegion(x1), unique(u) {}
    LRegion(uint u, const QBitmap& x1) : QRegion(x1), unique(u) {}
    LRegion(uint u, const QRect& x1, RegionType x2 = Rectangle) : QRegion(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSizePolicy : public QSizePolicy {
public:
    LSizePolicy(uint u) : unique(u) {}
    LSizePolicy(uint u, Policy x1, Policy x2) : QSizePolicy(x1, x2), unique(u) {}
    LSizePolicy(uint u, Policy x1, Policy x2, ControlType x3) : QSizePolicy(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSpacerItem : public QSpacerItem {
public:
    LSpacerItem(uint u, int x1, int x2, QSizePolicy::Policy x3 = QSizePolicy::Minimum, QSizePolicy::Policy x4 = QSizePolicy::Minimum) : QSpacerItem(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    Qt::Orientations expandingDirections() const { void* fun = LObjects::overrideFun(unique, 82); if(fun) { return (Qt::Orientations)callOverrideFun(0, fun, 82, 0).toInt(); } return QSpacerItem::expandingDirections(); }
    QRect geometry() const { void* fun = LObjects::overrideFun(unique, 90); if(fun) { return qVariantValue<QRect>(callOverrideFun(0, fun, 90, 0)); } return QSpacerItem::geometry(); }
    bool isEmpty() const { void* fun = LObjects::overrideFun(unique, 91); if(fun) { return callOverrideFun(0, fun, 91, 0).toBool(); } return QSpacerItem::isEmpty(); }
    QSize maximumSize() const { void* fun = LObjects::overrideFun(unique, 93); if(fun) { return qVariantValue<QSize>(callOverrideFun(0, fun, 93, 0)); } return QSpacerItem::maximumSize(); }
    QSize minimumSize() const { void* fun = LObjects::overrideFun(unique, 86); if(fun) { return qVariantValue<QSize>(callOverrideFun(0, fun, 86, 0)); } return QSpacerItem::minimumSize(); }
    void setGeometry(const QRect& x1) { void* fun = LObjects::overrideFun(unique, 87); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(0, fun, 87, args).toBool()) return; } QSpacerItem::setGeometry(x1); }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(0, fun, 7, 0)); } return QSpacerItem::sizeHint(); }
    QSpacerItem* spacerItem() { void* fun = LObjects::overrideFun(unique, 221); if(fun) { return (QSpacerItem*)qVariantValue<void*>(callOverrideFun(0, fun, 221, 0)); } return QSpacerItem::spacerItem(); }
    bool hasHeightForWidth() const { void* fun = LObjects::overrideFun(unique, 83); if(fun) { return callOverrideFun(0, fun, 83, 0).toBool(); } return QSpacerItem::hasHeightForWidth(); }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 9, args).toInt(); } return QSpacerItem::heightForWidth(x1); }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 84); if(fun) { if(callOverrideFun(0, fun, 84, 0).toBool()) return; } QSpacerItem::invalidate(); }
    QLayout* layout() { void* fun = LObjects::overrideFun(unique, 92); if(fun) { return (QLayout*)qVariantValue<void*>(callOverrideFun(0, fun, 92, 0)); } return QSpacerItem::layout(); }
    int minimumHeightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 126); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 126, args).toInt(); } return QSpacerItem::minimumHeightForWidth(x1); }
    QWidget* widget() { void* fun = LObjects::overrideFun(unique, 222); if(fun) { return (QWidget*)qVariantValue<void*>(callOverrideFun(0, fun, 222, 0)); } return QSpacerItem::widget(); }
};

class LStandardItem : public QStandardItem {
public:
    LStandardItem(uint u) : unique(u) {}
    LStandardItem(uint u, const QString& x1) : QStandardItem(x1), unique(u) {}
    LStandardItem(uint u, const QIcon& x1, const QString& x2) : QStandardItem(x1, x2), unique(u) {}
    LStandardItem(uint u, int x1, int x2 = 1) : QStandardItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QStandardItem* clone() const { void* fun = LObjects::overrideFun(unique, 217); if(fun) { return (QStandardItem*)qVariantValue<void*>(callOverrideFun(0, fun, 217, 0)); } return QStandardItem::clone(); }
    QVariant data(int x1 = Qt::UserRole+1) const { void* fun = LObjects::overrideFun(unique, 218); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 218, args)); } return QStandardItem::data(x1); }
    void setData(const QVariant& x1, int x2 = Qt::UserRole+1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(0, fun, 223, args).toBool()) return; } QStandardItem::setData(x1, x2); }
    int type() const { void* fun = LObjects::overrideFun(unique, 96); if(fun) { return callOverrideFun(0, fun, 96, 0).toInt(); } return QStandardItem::type(); }
};

class LTableWidgetItem : public QTableWidgetItem {
public:
    LTableWidgetItem(uint u, int x1 = Type) : QTableWidgetItem(x1), unique(u) {}
    LTableWidgetItem(uint u, const QString& x1, int x2 = Type) : QTableWidgetItem(x1, x2), unique(u) {}
    LTableWidgetItem(uint u, const QIcon& x1, const QString& x2, int x3 = Type) : QTableWidgetItem(x1, x2, x3), unique(u) {}
    LTableWidgetItem(uint u, const QTableWidgetItem& x1) : QTableWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QTableWidgetItem* clone() const { void* fun = LObjects::overrideFun(unique, 217); if(fun) { return (QTableWidgetItem*)qVariantValue<void*>(callOverrideFun(0, fun, 217, 0)); } return QTableWidgetItem::clone(); }
    QVariant data(int x1) const { void* fun = LObjects::overrideFun(unique, 218); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 218, args)); } return QTableWidgetItem::data(x1); }
    void setData(int x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(0, fun, 219, args).toBool()) return; } QTableWidgetItem::setData(x1, x2); }
};

class LTableWidgetSelectionRange : public QTableWidgetSelectionRange {
public:
    LTableWidgetSelectionRange(uint u) : unique(u) {}
    LTableWidgetSelectionRange(uint u, int x1, int x2, int x3, int x4) : QTableWidgetSelectionRange(x1, x2, x3, x4), unique(u) {}
    LTableWidgetSelectionRange(uint u, const QTableWidgetSelectionRange& x1) : QTableWidgetSelectionRange(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextBlockFormat : public QTextBlockFormat {
public:
    LTextBlockFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextCharFormat : public QTextCharFormat {
public:
    LTextCharFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextCursor : public QTextCursor {
public:
    LTextCursor(uint u) : unique(u) {}
    LTextCursor(uint u, QTextDocument* x1) : QTextCursor(x1), unique(u) {}
    LTextCursor(uint u, QTextFrame* x1) : QTextCursor(x1), unique(u) {}
    LTextCursor(uint u, const QTextBlock& x1) : QTextCursor(x1), unique(u) {}
    LTextCursor(uint u, const QTextCursor& x1) : QTextCursor(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextDocumentFragment : public QTextDocumentFragment {
public:
    LTextDocumentFragment(uint u) : unique(u) {}
    LTextDocumentFragment(uint u, const QTextDocument* x1) : QTextDocumentFragment(x1), unique(u) {}
    LTextDocumentFragment(uint u, const QTextCursor& x1) : QTextDocumentFragment(x1), unique(u) {}
    LTextDocumentFragment(uint u, const QTextDocumentFragment& x1) : QTextDocumentFragment(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextFormat : public QTextFormat {
public:
    LTextFormat(uint u) : unique(u) {}
    LTextFormat(uint u, int x1) : QTextFormat(x1), unique(u) {}
    LTextFormat(uint u, const QTextFormat& x1) : QTextFormat(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextFrameFormat : public QTextFrameFormat {
public:
    LTextFrameFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextImageFormat : public QTextImageFormat {
public:
    LTextImageFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextLength : public QTextLength {
public:
    LTextLength(uint u) : unique(u) {}
    LTextLength(uint u, Type x1, qreal x2) : QTextLength(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextListFormat : public QTextListFormat {
public:
    LTextListFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextOption : public QTextOption {
public:
    LTextOption(uint u) : unique(u) {}
    LTextOption(uint u, Qt::Alignment x1) : QTextOption(x1), unique(u) {}
    LTextOption(uint u, const QTextOption& x1) : QTextOption(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableCell : public QTextTableCell {
public:
    LTextTableCell(uint u) : unique(u) {}
    LTextTableCell(uint u, const QTextTableCell& x1) : QTextTableCell(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableCellFormat : public QTextTableCellFormat {
public:
    LTextTableCellFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableFormat : public QTextTableFormat {
public:
    LTextTableFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTransform : public QTransform {
public:
    LTransform(uint u) : unique(u) {}
    LTransform(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, qreal x7, qreal x8, qreal x9 = 1.0) : QTransform(x1, x2, x3, x4, x5, x6, x7, x8, x9), unique(u) {}
    LTransform(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) : QTransform(x1, x2, x3, x4, x5, x6), unique(u) {}
    LTransform(uint u, const QMatrix& x1) : QTransform(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTreeWidgetItem : public QTreeWidgetItem {
public:
    LTreeWidgetItem(uint u, int x1 = Type) : QTreeWidgetItem(x1), unique(u) {}
    LTreeWidgetItem(uint u, const QStringList& x1, int x2 = Type) : QTreeWidgetItem(x1, x2), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidget* x1, int x2 = Type) : QTreeWidgetItem(x1, x2), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidget* x1, const QStringList& x2, int x3 = Type) : QTreeWidgetItem(x1, x2, x3), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidget* x1, QTreeWidgetItem* x2, int x3 = Type) : QTreeWidgetItem(x1, x2, x3), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidgetItem* x1, int x2 = Type) : QTreeWidgetItem(x1, x2), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidgetItem* x1, const QStringList& x2, int x3 = Type) : QTreeWidgetItem(x1, x2, x3), unique(u) {}
    LTreeWidgetItem(uint u, QTreeWidgetItem* x1, QTreeWidgetItem* x2, int x3 = Type) : QTreeWidgetItem(x1, x2, x3), unique(u) {}
    LTreeWidgetItem(uint u, const QTreeWidgetItem& x1) : QTreeWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QTreeWidgetItem* clone() const { void* fun = LObjects::overrideFun(unique, 217); if(fun) { return (QTreeWidgetItem*)qVariantValue<void*>(callOverrideFun(0, fun, 217, 0)); } return QTreeWidgetItem::clone(); }
    QVariant data(int x1, int x2) const { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(0, fun, 224, args)); } return QTreeWidgetItem::data(x1, x2); }
    void setData(int x1, int x2, const QVariant& x3) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(0, fun, 225, args).toBool()) return; } QTreeWidgetItem::setData(x1, x2, x3); }
};

class LUndoCommand : public QUndoCommand {
public:
    LUndoCommand(uint u, QUndoCommand* x1 = 0) : QUndoCommand(x1), unique(u) {}
    LUndoCommand(uint u, const QString& x1, QUndoCommand* x2 = 0) : QUndoCommand(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int id() const { void* fun = LObjects::overrideFun(unique, 226); if(fun) { return callOverrideFun(0, fun, 226, 0).toInt(); } return QUndoCommand::id(); }
    bool mergeWith(const QUndoCommand* x1) { void* fun = LObjects::overrideFun(unique, 227); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(0, fun, 227, args).toBool(); } return QUndoCommand::mergeWith(x1); }
    void redo() { void* fun = LObjects::overrideFun(unique, 228); if(fun) { if(callOverrideFun(0, fun, 228, 0).toBool()) return; } QUndoCommand::redo(); }
    void undo() { void* fun = LObjects::overrideFun(unique, 229); if(fun) { if(callOverrideFun(0, fun, 229, 0).toBool()) return; } QUndoCommand::undo(); }
};

class LVariant : public QVariant {
public:
    LVariant(uint u) : unique(u) {}
    LVariant(uint u, const QLocale& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QRegExp& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, Qt::GlobalColor x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, Type x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QVariant& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, int x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, uint x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, qlonglong x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, qulonglong x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, bool x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, double x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, float x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const char* x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QByteArray& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QBitArray& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QString& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QStringList& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QChar& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QDate& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QTime& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QDateTime& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QSize& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QSizeF& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QPoint& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QPointF& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QLine& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QLineF& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QRect& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QRectF& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QUrl& x1) : QVariant(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVector2D : public QVector2D {
public:
    LVector2D(uint u) : unique(u) {}
    LVector2D(uint u, qreal x1, qreal x2) : QVector2D(x1, x2), unique(u) {}
    LVector2D(uint u, const QPoint& x1) : QVector2D(x1), unique(u) {}
    LVector2D(uint u, const QPointF& x1) : QVector2D(x1), unique(u) {}
    LVector2D(uint u, const QVector3D& x1) : QVector2D(x1), unique(u) {}
    LVector2D(uint u, const QVector4D& x1) : QVector2D(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVector3D : public QVector3D {
public:
    LVector3D(uint u) : unique(u) {}
    LVector3D(uint u, qreal x1, qreal x2, qreal x3) : QVector3D(x1, x2, x3), unique(u) {}
    LVector3D(uint u, const QPoint& x1) : QVector3D(x1), unique(u) {}
    LVector3D(uint u, const QPointF& x1) : QVector3D(x1), unique(u) {}
    LVector3D(uint u, const QVector2D& x1) : QVector3D(x1), unique(u) {}
    LVector3D(uint u, const QVector2D& x1, qreal x2) : QVector3D(x1, x2), unique(u) {}
    LVector3D(uint u, const QVector4D& x1) : QVector3D(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVector4D : public QVector4D {
public:
    LVector4D(uint u) : unique(u) {}
    LVector4D(uint u, qreal x1, qreal x2, qreal x3, qreal x4) : QVector4D(x1, x2, x3, x4), unique(u) {}
    LVector4D(uint u, const QPoint& x1) : QVector4D(x1), unique(u) {}
    LVector4D(uint u, const QPointF& x1) : QVector4D(x1), unique(u) {}
    LVector4D(uint u, const QVector2D& x1) : QVector4D(x1), unique(u) {}
    LVector4D(uint u, const QVector2D& x1, qreal x2, qreal x3) : QVector4D(x1, x2, x3), unique(u) {}
    LVector4D(uint u, const QVector3D& x1) : QVector4D(x1), unique(u) {}
    LVector4D(uint u, const QVector3D& x1, qreal x2) : QVector4D(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

#endif
