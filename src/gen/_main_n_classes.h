// THIS FILE IS GENERATED (see helper/)

#ifndef MAIN_N_CLASSES_H
#define MAIN_N_CLASSES_H

#include "../ecl_fun.h"
#include "_lobjects.h"
#include <QtGui>

class LAbstractGraphicsShapeItem : public QAbstractGraphicsShapeItem {
    friend class N1;
public:
    LAbstractGraphicsShapeItem(uint u, QGraphicsItem* x1 = 0) : QAbstractGraphicsShapeItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 248, args).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractGraphicsShapeItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } if(!fun || LObjects::call_default) { ret = QAbstractGraphicsShapeItem::opaqueArea(); } return ret; }
    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 377); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 377, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::advance(x1); }}
    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); QRectF ret; if(fun) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return ret; }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 378); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 378, args).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractGraphicsShapeItem::collidesWithItem(x1, x2); } return ret; }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 379); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 379, args).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractGraphicsShapeItem::collidesWithPath(x1, x2); } return ret; }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 247, args).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractGraphicsShapeItem::contains(x1); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 210, args); }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default) { ret = QAbstractGraphicsShapeItem::shape(); } return ret; }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QAbstractGraphicsShapeItem::type(); } return ret; }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 213, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::contextMenuEvent(x1); }}
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 214, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::dragEnterEvent(x1); }}
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 215, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::dragLeaveEvent(x1); }}
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 216, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::dragMoveEvent(x1); }}
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 217, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::focusOutEvent(x1); }}
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 219, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 220, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 221, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::inputMethodEvent(x1); }}
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QAbstractGraphicsShapeItem::inputMethodQuery(x1); } return ret; }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); QVariant ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } if(!fun || LObjects::call_default) { ret = QAbstractGraphicsShapeItem::itemChange(x1, x2); } return ret; }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 223, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 224, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::mouseMoveEvent(x1); }}
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 225, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::mousePressEvent(x1); }}
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 226, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::mouseReleaseEvent(x1); }}
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 241, args).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractGraphicsShapeItem::sceneEvent(x1); } return ret; }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 380); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 380, args).toBool(); } if(!fun || LObjects::call_default) { ret = QAbstractGraphicsShapeItem::sceneEventFilter(x1, x2); } return ret; }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 230, args); } if(!fun || LObjects::call_default) { QAbstractGraphicsShapeItem::wheelEvent(x1); }}
};

class LAccessible : public QAccessible {
    friend class N2;
public:

    static NumList overrideIds;
    uint unique;
};

class LAccessibleEvent : public QAccessibleEvent {
    friend class N3;
public:
    LAccessibleEvent(uint u, Type x1, int x2) : QAccessibleEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LAccessibleInterface : public QAccessibleInterface {
    friend class N4;
public:

    static NumList overrideIds;
    uint unique;

    QString actionText(int x1, Text x2, int x3) const { void* fun = LObjects::overrideFun(unique, 381); QString ret; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = qVariantValue<QString>(callOverrideFun(fun, 381, args)); } return ret; }
    int childAt(int x1, int x2) const { void* fun = LObjects::overrideFun(unique, 382); int ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 382, args).toInt(); } return ret; }
    int childCount() const { void* fun = LObjects::overrideFun(unique, 383); int ret = 0; if(fun) { ret = callOverrideFun(fun, 383, 0).toInt(); } return ret; }
    bool doAction(int x1, int x2, const QVariantList& x3 = QVariantList()) { void* fun = LObjects::overrideFun(unique, 384); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 384, args).toBool(); } return ret; }
    int indexOfChild(const QAccessibleInterface* x1) const { void* fun = LObjects::overrideFun(unique, 385); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 385, args).toInt(); } return ret; }
    bool isValid() const { void* fun = LObjects::overrideFun(unique, 386); bool ret = false; if(fun) { ret = callOverrideFun(fun, 386, 0).toBool(); } return ret; }
    QObject* object() const { void* fun = LObjects::overrideFun(unique, 387); QObject* ret = 0; if(fun) { ret = (QObject*)qVariantValue<void*>(callOverrideFun(fun, 387, 0)); } return ret; }
    QRect rect(int x1) const { void* fun = LObjects::overrideFun(unique, 388); QRect ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QRect>(callOverrideFun(fun, 388, args)); } return ret; }
    Relation relationTo(int x1, const QAccessibleInterface* x2, int x3) const { void* fun = LObjects::overrideFun(unique, 389); Relation ret = (Relation)0; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = (Relation)callOverrideFun(fun, 389, args).toInt(); } return ret; }
    Role role(int x1) const { void* fun = LObjects::overrideFun(unique, 390); Role ret = (Role)0; if(fun) { const void* args[] = { &x1 }; ret = (Role)callOverrideFun(fun, 390, args).toInt(); } return ret; }
    void setText(Text x1, int x2, const QString& x3) { void* fun = LObjects::overrideFun(unique, 391); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 391, args); }}
    State state(int x1) const { void* fun = LObjects::overrideFun(unique, 392); State ret = (State)0; if(fun) { const void* args[] = { &x1 }; ret = (State)callOverrideFun(fun, 392, args).toInt(); } return ret; }
    QString text(Text x1, int x2) const { void* fun = LObjects::overrideFun(unique, 393); QString ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QString>(callOverrideFun(fun, 393, args)); } return ret; }
    int userActionCount(int x1) const { void* fun = LObjects::overrideFun(unique, 394); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 394, args).toInt(); } return ret; }
};

class LAccessibleWidget : public QAccessibleWidget {
    friend class N6;
public:
    LAccessibleWidget(uint u, QWidget* x1, Role x2 = Client, const QString& x3 = QString()) : QAccessibleWidget(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QString actionText(int x1, Text x2, int x3) const { void* fun = LObjects::overrideFun(unique, 381); QString ret; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = qVariantValue<QString>(callOverrideFun(fun, 381, args)); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::actionText(x1, x2, x3); } return ret; }
    int childAt(int x1, int x2) const { void* fun = LObjects::overrideFun(unique, 382); int ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 382, args).toInt(); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::childAt(x1, x2); } return ret; }
    int childCount() const { void* fun = LObjects::overrideFun(unique, 383); int ret = 0; if(fun) { ret = callOverrideFun(fun, 383, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::childCount(); } return ret; }
    bool doAction(int x1, int x2, const QVariantList& x3) { void* fun = LObjects::overrideFun(unique, 384); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 384, args).toBool(); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::doAction(x1, x2, x3); } return ret; }
    int indexOfChild(const QAccessibleInterface* x1) const { void* fun = LObjects::overrideFun(unique, 385); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 385, args).toInt(); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::indexOfChild(x1); } return ret; }
    QRect rect(int x1) const { void* fun = LObjects::overrideFun(unique, 388); QRect ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QRect>(callOverrideFun(fun, 388, args)); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::rect(x1); } return ret; }
    Relation relationTo(int x1, const QAccessibleInterface* x2, int x3) const { void* fun = LObjects::overrideFun(unique, 389); Relation ret = (Relation)0; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = (Relation)callOverrideFun(fun, 389, args).toInt(); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::relationTo(x1, x2, x3); } return ret; }
    Role role(int x1) const { void* fun = LObjects::overrideFun(unique, 390); Role ret = (Role)0; if(fun) { const void* args[] = { &x1 }; ret = (Role)callOverrideFun(fun, 390, args).toInt(); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::role(x1); } return ret; }
    State state(int x1) const { void* fun = LObjects::overrideFun(unique, 392); State ret = (State)0; if(fun) { const void* args[] = { &x1 }; ret = (State)callOverrideFun(fun, 392, args).toInt(); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::state(x1); } return ret; }
    QString text(Text x1, int x2) const { void* fun = LObjects::overrideFun(unique, 393); QString ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QString>(callOverrideFun(fun, 393, args)); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::text(x1, x2); } return ret; }
    int userActionCount(int x1) const { void* fun = LObjects::overrideFun(unique, 394); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 394, args).toInt(); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::userActionCount(x1); } return ret; }
    bool isValid() const { void* fun = LObjects::overrideFun(unique, 386); bool ret = false; if(fun) { ret = callOverrideFun(fun, 386, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::isValid(); } return ret; }
    QObject* object() const { void* fun = LObjects::overrideFun(unique, 387); QObject* ret = 0; if(fun) { ret = (QObject*)qVariantValue<void*>(callOverrideFun(fun, 387, 0)); } if(!fun || LObjects::call_default) { ret = QAccessibleWidget::object(); } return ret; }
    void setText(Text x1, int x2, const QString& x3) { void* fun = LObjects::overrideFun(unique, 391); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 391, args); } if(!fun || LObjects::call_default) { QAccessibleWidget::setText(x1, x2, x3); }}
};

class LActionEvent : public QActionEvent {
    friend class N7;
public:
    LActionEvent(uint u, int x1, QAction* x2, QAction* x3 = 0) : QActionEvent(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LBasicTimer : public QBasicTimer {
    friend class N9;
public:
    LBasicTimer(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LBitArray : public QBitArray {
    friend class N10;
public:
    LBitArray(uint u) : unique(u) {}
    LBitArray(uint u, int x1, bool x2 = false) : QBitArray(x1, x2), unique(u) {}
    LBitArray(uint u, const QBitArray& x1) : QBitArray(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LBitmap : public QBitmap {
    friend class N11;
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
    friend class N12;
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

class LChildEvent : public QChildEvent {
    friend class N13;
public:
    LChildEvent(uint u, Type x1, QObject* x2) : QChildEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LCloseEvent : public QCloseEvent {
    friend class N14;
public:
    LCloseEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LConicalGradient : public QConicalGradient {
    friend class N16;
public:
    LConicalGradient(uint u) : unique(u) {}
    LConicalGradient(uint u, const QPointF& x1, qreal x2) : QConicalGradient(x1, x2), unique(u) {}
    LConicalGradient(uint u, qreal x1, qreal x2, qreal x3) : QConicalGradient(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LContextMenuEvent : public QContextMenuEvent {
    friend class N17;
public:
    LContextMenuEvent(uint u, Reason x1, const QPoint& x2, const QPoint& x3, Qt::KeyboardModifiers x4) : QContextMenuEvent(x1, x2, x3, x4), unique(u) {}
    LContextMenuEvent(uint u, Reason x1, const QPoint& x2, const QPoint& x3) : QContextMenuEvent(x1, x2, x3), unique(u) {}
    LContextMenuEvent(uint u, Reason x1, const QPoint& x2) : QContextMenuEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LCryptographicHash : public QCryptographicHash {
    friend class N18;
public:
    LCryptographicHash(uint u, Algorithm x1) : QCryptographicHash(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LCursor : public QCursor {
    friend class N19;
public:
    LCursor(uint u) : unique(u) {}
    LCursor(uint u, Qt::CursorShape x1) : QCursor(x1), unique(u) {}
    LCursor(uint u, const QBitmap& x1, const QBitmap& x2, int x3 = -1, int x4 = -1) : QCursor(x1, x2, x3, x4), unique(u) {}
    LCursor(uint u, const QPixmap& x1, int x2 = -1, int x3 = -1) : QCursor(x1, x2, x3), unique(u) {}
    LCursor(uint u, const QCursor& x1) : QCursor(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDate : public QDate {
    friend class N20;
public:
    LDate(uint u) : unique(u) {}
    LDate(uint u, int x1, int x2, int x3) : QDate(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDateTime : public QDateTime {
    friend class N21;
public:
    LDateTime(uint u) : unique(u) {}
    LDateTime(uint u, const QDate& x1) : QDateTime(x1), unique(u) {}
    LDateTime(uint u, const QDate& x1, const QTime& x2, Qt::TimeSpec x3 = Qt::LocalTime) : QDateTime(x1, x2, x3), unique(u) {}
    LDateTime(uint u, const QDateTime& x1) : QDateTime(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDesktopServices : public QDesktopServices {
    friend class N22;
public:

    static NumList overrideIds;
    uint unique;
};

class LDir : public QDir {
    friend class N23;
public:
    LDir(uint u, const QDir& x1) : QDir(x1), unique(u) {}
    LDir(uint u, const QString& x1 = QString()) : QDir(x1), unique(u) {}
    LDir(uint u, const QString& x1, const QString& x2, SortFlags x3 = SortFlags(Name|IgnoreCase), Filters x4 = AllEntries) : QDir(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDirIterator : public QDirIterator {
    friend class N24;
public:
    LDirIterator(uint u, const QDir& x1, IteratorFlags x2 = NoIteratorFlags) : QDirIterator(x1, x2), unique(u) {}
    LDirIterator(uint u, const QString& x1, IteratorFlags x2 = NoIteratorFlags) : QDirIterator(x1, x2), unique(u) {}
    LDirIterator(uint u, const QString& x1, QDir::Filters x2, IteratorFlags x3 = NoIteratorFlags) : QDirIterator(x1, x2, x3), unique(u) {}
    LDirIterator(uint u, const QString& x1, const QStringList& x2, QDir::Filters x3 = QDir::NoFilter, IteratorFlags x4 = NoIteratorFlags) : QDirIterator(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDragEnterEvent : public QDragEnterEvent {
    friend class N25;
public:
    LDragEnterEvent(uint u, const QPoint& x1, Qt::DropActions x2, const QMimeData* x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5) : QDragEnterEvent(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDragLeaveEvent : public QDragLeaveEvent {
    friend class N26;
public:
    LDragLeaveEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LDragMoveEvent : public QDragMoveEvent {
    friend class N27;
public:
    LDragMoveEvent(uint u, const QPoint& x1, Qt::DropActions x2, const QMimeData* x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5, Type x6 = DragMove) : QDragMoveEvent(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QByteArray encodedData(const char* x1) const { void* fun = LObjects::overrideFun(unique, 395); QByteArray ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QByteArray>(callOverrideFun(fun, 395, args)); } if(!fun || LObjects::call_default) { ret = QDragMoveEvent::encodedData(x1); } return ret; }
    const char* format(int x1 = 0) const { void* fun = LObjects::overrideFun(unique, 396); const char* ret = 0; if(fun) { const void* args[] = { &x1 }; ret = (const char*)qVariantValue<void*>(callOverrideFun(fun, 396, args)); } if(!fun || LObjects::call_default) { ret = QDragMoveEvent::format(x1); } return ret; }
    bool provides(const char* x1) const { void* fun = LObjects::overrideFun(unique, 397); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 397, args).toBool(); } if(!fun || LObjects::call_default) { ret = QDragMoveEvent::provides(x1); } return ret; }
};

class LDropEvent : public QDropEvent {
    friend class N28;
public:
    LDropEvent(uint u, const QPoint& x1, Qt::DropActions x2, const QMimeData* x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5, Type x6 = Drop) : QDropEvent(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QByteArray encodedData(const char* x1) const { void* fun = LObjects::overrideFun(unique, 395); QByteArray ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QByteArray>(callOverrideFun(fun, 395, args)); } if(!fun || LObjects::call_default) { ret = QDropEvent::encodedData(x1); } return ret; }
    const char* format(int x1 = 0) const { void* fun = LObjects::overrideFun(unique, 396); const char* ret = 0; if(fun) { const void* args[] = { &x1 }; ret = (const char*)qVariantValue<void*>(callOverrideFun(fun, 396, args)); } if(!fun || LObjects::call_default) { ret = QDropEvent::format(x1); } return ret; }
    bool provides(const char* x1) const { void* fun = LObjects::overrideFun(unique, 397); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 397, args).toBool(); } if(!fun || LObjects::call_default) { ret = QDropEvent::provides(x1); } return ret; }
};

class LDynamicPropertyChangeEvent : public QDynamicPropertyChangeEvent {
    friend class N29;
public:
    LDynamicPropertyChangeEvent(uint u, const QByteArray& x1) : QDynamicPropertyChangeEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LEasingCurve : public QEasingCurve {
    friend class N30;
public:
    LEasingCurve(uint u, Type x1 = Linear) : QEasingCurve(x1), unique(u) {}
    LEasingCurve(uint u, const QEasingCurve& x1) : QEasingCurve(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LEvent : public QEvent {
    friend class N31;
public:

    static NumList overrideIds;
    uint unique;
};

class LFileIconProvider : public QFileIconProvider {
    friend class N32;
public:
    LFileIconProvider(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QIcon icon(IconType x1) const { void* fun = LObjects::overrideFun(unique, 398); QIcon ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QIcon>(callOverrideFun(fun, 398, args)); } if(!fun || LObjects::call_default) { ret = QFileIconProvider::icon(x1); } return ret; }
    QString type(const QFileInfo& x1) const { void* fun = LObjects::overrideFun(unique, 400); QString ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QString>(callOverrideFun(fun, 400, args)); } if(!fun || LObjects::call_default) { ret = QFileIconProvider::type(x1); } return ret; }
};

class LFileInfo : public QFileInfo {
    friend class N33;
public:
    LFileInfo(uint u) : unique(u) {}
    LFileInfo(uint u, const QString& x1) : QFileInfo(x1), unique(u) {}
    LFileInfo(uint u, const QFile& x1) : QFileInfo(x1), unique(u) {}
    LFileInfo(uint u, const QDir& x1, const QString& x2) : QFileInfo(x1, x2), unique(u) {}
    LFileInfo(uint u, const QFileInfo& x1) : QFileInfo(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFileOpenEvent : public QFileOpenEvent {
    friend class N34;
public:

    static NumList overrideIds;
    uint unique;
};

class LFocusEvent : public QFocusEvent {
    friend class N35;
public:
    LFocusEvent(uint u, Type x1, Qt::FocusReason x2 = Qt::OtherFocusReason) : QFocusEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFont : public QFont {
    friend class N36;
public:
    LFont(uint u) : unique(u) {}
    LFont(uint u, const QString& x1, int x2 = -1, int x3 = -1, bool x4 = false) : QFont(x1, x2, x3, x4), unique(u) {}
    LFont(uint u, const QFont& x1, QPaintDevice* x2) : QFont(x1, x2), unique(u) {}
    LFont(uint u, const QFont& x1) : QFont(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFontDatabase : public QFontDatabase {
    friend class N37;
public:
    LFontDatabase(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFontInfo : public QFontInfo {
    friend class N38;
public:
    LFontInfo(uint u, const QFont& x1) : QFontInfo(x1), unique(u) {}
    LFontInfo(uint u, const QFontInfo& x1) : QFontInfo(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LFontMetrics : public QFontMetrics {
    friend class N39;
public:
    LFontMetrics(uint u, const QFont& x1) : QFontMetrics(x1), unique(u) {}
    LFontMetrics(uint u, const QFont& x1, QPaintDevice* x2) : QFontMetrics(x1, x2), unique(u) {}
    LFontMetrics(uint u, const QFontMetrics& x1) : QFontMetrics(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGestureEvent : public QGestureEvent {
    friend class N46;
public:
    LGestureEvent(uint u, const QList<QGesture*>& x1) : QGestureEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGradient : public QGradient {
    friend class N47;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsAnchorLayout : public QGraphicsAnchorLayout {
    friend class N48;
public:
    LGraphicsAnchorLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsAnchorLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { void* fun = LObjects::overrideFun(unique, 145); int ret = 0; if(fun) { ret = callOverrideFun(fun, 145, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsAnchorLayout::count(); } return ret; }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { callOverrideFun(fun, 148, 0); } if(!fun || LObjects::call_default) { QGraphicsAnchorLayout::invalidate(); }}
    QGraphicsLayoutItem* itemAt(int x1) const { void* fun = LObjects::overrideFun(unique, 149); QGraphicsLayoutItem* ret = 0; if(fun) { const void* args[] = { &x1 }; ret = (QGraphicsLayoutItem*)qVariantValue<void*>(callOverrideFun(fun, 149, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsAnchorLayout::itemAt(x1); } return ret; }
    void removeAt(int x1) { void* fun = LObjects::overrideFun(unique, 406); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 406, args); } if(!fun || LObjects::call_default) { QGraphicsAnchorLayout::removeAt(x1); }}
    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 211, args); } if(!fun || LObjects::call_default) { QGraphicsAnchorLayout::setGeometry(x1); }}
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { void* fun = LObjects::overrideFun(unique, 228); QSizeF ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsAnchorLayout::sizeHint(x1, x2); } return ret; }
    void widgetEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 407); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 407, args); } if(!fun || LObjects::call_default) { QGraphicsAnchorLayout::widgetEvent(x1); }}
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { callOverrideFun(fun, 242, 0); } if(!fun || LObjects::call_default) { QGraphicsAnchorLayout::updateGeometry(); }}
};

class LGraphicsEllipseItem : public QGraphicsEllipseItem {
    friend class N49;
public:
    LGraphicsEllipseItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsEllipseItem(x1), unique(u) {}
    LGraphicsEllipseItem(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) : QGraphicsEllipseItem(x1, x2), unique(u) {}
    LGraphicsEllipseItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsEllipseItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); QRectF ret; if(fun) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsEllipseItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 247, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsEllipseItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 248, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsEllipseItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsEllipseItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 210, args); } if(!fun || LObjects::call_default) { QGraphicsEllipseItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsEllipseItem::shape(); } return ret; }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsEllipseItem::type(); } return ret; }
};

class LGraphicsGridLayout : public QGraphicsGridLayout {
    friend class N50;
public:
    LGraphicsGridLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsGridLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { void* fun = LObjects::overrideFun(unique, 145); int ret = 0; if(fun) { ret = callOverrideFun(fun, 145, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsGridLayout::count(); } return ret; }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { callOverrideFun(fun, 148, 0); } if(!fun || LObjects::call_default) { QGraphicsGridLayout::invalidate(); }}
    QGraphicsLayoutItem* itemAt(int x1) const { void* fun = LObjects::overrideFun(unique, 149); QGraphicsLayoutItem* ret = 0; if(fun) { const void* args[] = { &x1 }; ret = (QGraphicsLayoutItem*)qVariantValue<void*>(callOverrideFun(fun, 149, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsGridLayout::itemAt(x1); } return ret; }
    void removeAt(int x1) { void* fun = LObjects::overrideFun(unique, 406); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 406, args); } if(!fun || LObjects::call_default) { QGraphicsGridLayout::removeAt(x1); }}
    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 211, args); } if(!fun || LObjects::call_default) { QGraphicsGridLayout::setGeometry(x1); }}
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { void* fun = LObjects::overrideFun(unique, 228); QSizeF ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsGridLayout::sizeHint(x1, x2); } return ret; }
    void widgetEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 407); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 407, args); } if(!fun || LObjects::call_default) { QGraphicsGridLayout::widgetEvent(x1); }}
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { callOverrideFun(fun, 242, 0); } if(!fun || LObjects::call_default) { QGraphicsGridLayout::updateGeometry(); }}
};

class LGraphicsItem : public QGraphicsItem {
    friend class N51;
public:
    LGraphicsItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 377); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 377, args); } if(!fun || LObjects::call_default) { QGraphicsItem::advance(x1); }}
    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); QRectF ret; if(fun) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return ret; }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 378); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 378, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItem::collidesWithItem(x1, x2); } return ret; }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 379); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 379, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItem::collidesWithPath(x1, x2); } return ret; }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 247, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 248, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 210, args); }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsItem::shape(); } return ret; }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsItem::type(); } return ret; }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 213, args); } if(!fun || LObjects::call_default) { QGraphicsItem::contextMenuEvent(x1); }}
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 214, args); } if(!fun || LObjects::call_default) { QGraphicsItem::dragEnterEvent(x1); }}
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 215, args); } if(!fun || LObjects::call_default) { QGraphicsItem::dragLeaveEvent(x1); }}
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 216, args); } if(!fun || LObjects::call_default) { QGraphicsItem::dragMoveEvent(x1); }}
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 217, args); } if(!fun || LObjects::call_default) { QGraphicsItem::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QGraphicsItem::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QGraphicsItem::focusOutEvent(x1); }}
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 219, args); } if(!fun || LObjects::call_default) { QGraphicsItem::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 220, args); } if(!fun || LObjects::call_default) { QGraphicsItem::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 221, args); } if(!fun || LObjects::call_default) { QGraphicsItem::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QGraphicsItem::inputMethodEvent(x1); }}
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsItem::inputMethodQuery(x1); } return ret; }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); QVariant ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsItem::itemChange(x1, x2); } return ret; }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QGraphicsItem::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QGraphicsItem::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 223, args); } if(!fun || LObjects::call_default) { QGraphicsItem::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 224, args); } if(!fun || LObjects::call_default) { QGraphicsItem::mouseMoveEvent(x1); }}
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 225, args); } if(!fun || LObjects::call_default) { QGraphicsItem::mousePressEvent(x1); }}
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 226, args); } if(!fun || LObjects::call_default) { QGraphicsItem::mouseReleaseEvent(x1); }}
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 241, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItem::sceneEvent(x1); } return ret; }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 380); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 380, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItem::sceneEventFilter(x1, x2); } return ret; }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 230, args); } if(!fun || LObjects::call_default) { QGraphicsItem::wheelEvent(x1); }}
};

class LGraphicsItemGroup : public QGraphicsItemGroup {
    friend class N52;
public:
    LGraphicsItemGroup(uint u, QGraphicsItem* x1 = 0) : QGraphicsItemGroup(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); QRectF ret; if(fun) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::boundingRect(); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 248, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 210, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::paint(x1, x2, x3); }}
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::type(); } return ret; }
    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 377); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 377, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::advance(x1); }}
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 378); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 378, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::collidesWithItem(x1, x2); } return ret; }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 379); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 379, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::collidesWithPath(x1, x2); } return ret; }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 247, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::contains(x1); } return ret; }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::shape(); } return ret; }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 213, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::contextMenuEvent(x1); }}
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 214, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::dragEnterEvent(x1); }}
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 215, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::dragLeaveEvent(x1); }}
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 216, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::dragMoveEvent(x1); }}
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 217, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::focusOutEvent(x1); }}
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 219, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 220, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 221, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::inputMethodEvent(x1); }}
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::inputMethodQuery(x1); } return ret; }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); QVariant ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::itemChange(x1, x2); } return ret; }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 223, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 224, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::mouseMoveEvent(x1); }}
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 225, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::mousePressEvent(x1); }}
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 226, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::mouseReleaseEvent(x1); }}
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 241, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::sceneEvent(x1); } return ret; }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 380); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 380, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsItemGroup::sceneEventFilter(x1, x2); } return ret; }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 230, args); } if(!fun || LObjects::call_default) { QGraphicsItemGroup::wheelEvent(x1); }}
};

class LGraphicsLayout : public QGraphicsLayout {
    friend class N53;
public:
    LGraphicsLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { void* fun = LObjects::overrideFun(unique, 145); int ret = 0; if(fun) { ret = callOverrideFun(fun, 145, 0).toInt(); } return ret; }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { callOverrideFun(fun, 148, 0); } if(!fun || LObjects::call_default) { QGraphicsLayout::invalidate(); }}
    QGraphicsLayoutItem* itemAt(int x1) const { void* fun = LObjects::overrideFun(unique, 149); QGraphicsLayoutItem* ret = 0; if(fun) { const void* args[] = { &x1 }; ret = (QGraphicsLayoutItem*)qVariantValue<void*>(callOverrideFun(fun, 149, args)); } return ret; }
    void removeAt(int x1) { void* fun = LObjects::overrideFun(unique, 406); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 406, args); }}
    void widgetEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 407); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 407, args); } if(!fun || LObjects::call_default) { QGraphicsLayout::widgetEvent(x1); }}
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { callOverrideFun(fun, 242, 0); } if(!fun || LObjects::call_default) { QGraphicsLayout::updateGeometry(); }}
    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 211, args); } if(!fun || LObjects::call_default) { QGraphicsLayout::setGeometry(x1); }}
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { void* fun = LObjects::overrideFun(unique, 228); QSizeF ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } return ret; }
};

class LGraphicsLayoutItem : public QGraphicsLayoutItem {
    friend class N54;
public:
    LGraphicsLayoutItem(uint u, QGraphicsLayoutItem* x1 = 0, bool x2 = false) : QGraphicsLayoutItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 211, args); } if(!fun || LObjects::call_default) { QGraphicsLayoutItem::setGeometry(x1); }}
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { callOverrideFun(fun, 242, 0); } if(!fun || LObjects::call_default) { QGraphicsLayoutItem::updateGeometry(); }}
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { void* fun = LObjects::overrideFun(unique, 228); QSizeF ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } return ret; }
};

class LGraphicsLineItem : public QGraphicsLineItem {
    friend class N55;
public:
    LGraphicsLineItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsLineItem(x1), unique(u) {}
    LGraphicsLineItem(uint u, const QLineF& x1, QGraphicsItem* x2 = 0) : QGraphicsLineItem(x1, x2), unique(u) {}
    LGraphicsLineItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsLineItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); QRectF ret; if(fun) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 247, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 248, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 210, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::shape(); } return ret; }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::type(); } return ret; }
    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 377); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 377, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::advance(x1); }}
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 378); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 378, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::collidesWithItem(x1, x2); } return ret; }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 379); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 379, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::collidesWithPath(x1, x2); } return ret; }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 213, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::contextMenuEvent(x1); }}
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 214, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::dragEnterEvent(x1); }}
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 215, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::dragLeaveEvent(x1); }}
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 216, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::dragMoveEvent(x1); }}
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 217, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::focusOutEvent(x1); }}
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 219, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 220, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 221, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::inputMethodEvent(x1); }}
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::inputMethodQuery(x1); } return ret; }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); QVariant ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::itemChange(x1, x2); } return ret; }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 223, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 224, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::mouseMoveEvent(x1); }}
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 225, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::mousePressEvent(x1); }}
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 226, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::mouseReleaseEvent(x1); }}
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 241, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::sceneEvent(x1); } return ret; }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 380); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 380, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsLineItem::sceneEventFilter(x1, x2); } return ret; }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 230, args); } if(!fun || LObjects::call_default) { QGraphicsLineItem::wheelEvent(x1); }}
};

class LGraphicsLinearLayout : public QGraphicsLinearLayout {
    friend class N56;
public:
    LGraphicsLinearLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsLinearLayout(x1), unique(u) {}
    LGraphicsLinearLayout(uint u, Qt::Orientation x1, QGraphicsLayoutItem* x2 = 0) : QGraphicsLinearLayout(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { void* fun = LObjects::overrideFun(unique, 145); int ret = 0; if(fun) { ret = callOverrideFun(fun, 145, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsLinearLayout::count(); } return ret; }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { callOverrideFun(fun, 148, 0); } if(!fun || LObjects::call_default) { QGraphicsLinearLayout::invalidate(); }}
    QGraphicsLayoutItem* itemAt(int x1) const { void* fun = LObjects::overrideFun(unique, 149); QGraphicsLayoutItem* ret = 0; if(fun) { const void* args[] = { &x1 }; ret = (QGraphicsLayoutItem*)qVariantValue<void*>(callOverrideFun(fun, 149, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsLinearLayout::itemAt(x1); } return ret; }
    void removeAt(int x1) { void* fun = LObjects::overrideFun(unique, 406); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 406, args); } if(!fun || LObjects::call_default) { QGraphicsLinearLayout::removeAt(x1); }}
    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 211, args); } if(!fun || LObjects::call_default) { QGraphicsLinearLayout::setGeometry(x1); }}
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { void* fun = LObjects::overrideFun(unique, 228); QSizeF ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsLinearLayout::sizeHint(x1, x2); } return ret; }
    void widgetEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 407); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 407, args); } if(!fun || LObjects::call_default) { QGraphicsLinearLayout::widgetEvent(x1); }}
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { callOverrideFun(fun, 242, 0); } if(!fun || LObjects::call_default) { QGraphicsLinearLayout::updateGeometry(); }}
};

class LGraphicsPathItem : public QGraphicsPathItem {
    friend class N57;
public:
    LGraphicsPathItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPathItem(x1), unique(u) {}
    LGraphicsPathItem(uint u, const QPainterPath& x1, QGraphicsItem* x2 = 0) : QGraphicsPathItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); QRectF ret; if(fun) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsPathItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 247, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsPathItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 248, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsPathItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsPathItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 210, args); } if(!fun || LObjects::call_default) { QGraphicsPathItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsPathItem::shape(); } return ret; }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsPathItem::type(); } return ret; }
};

class LGraphicsPixmapItem : public QGraphicsPixmapItem {
    friend class N58;
public:
    LGraphicsPixmapItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPixmapItem(x1), unique(u) {}
    LGraphicsPixmapItem(uint u, const QPixmap& x1, QGraphicsItem* x2 = 0) : QGraphicsPixmapItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); QRectF ret; if(fun) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 247, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 248, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 210, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::shape(); } return ret; }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::type(); } return ret; }
    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 377); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 377, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::advance(x1); }}
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 378); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 378, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::collidesWithItem(x1, x2); } return ret; }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 379); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 379, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::collidesWithPath(x1, x2); } return ret; }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 213, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::contextMenuEvent(x1); }}
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 214, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::dragEnterEvent(x1); }}
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 215, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::dragLeaveEvent(x1); }}
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 216, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::dragMoveEvent(x1); }}
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 217, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::focusInEvent(x1); }}
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::focusOutEvent(x1); }}
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 219, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::hoverEnterEvent(x1); }}
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 220, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 221, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::inputMethodEvent(x1); }}
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::inputMethodQuery(x1); } return ret; }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); QVariant ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::itemChange(x1, x2); } return ret; }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 223, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 224, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::mouseMoveEvent(x1); }}
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 225, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::mousePressEvent(x1); }}
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 226, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::mouseReleaseEvent(x1); }}
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 241, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::sceneEvent(x1); } return ret; }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 380); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 380, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsPixmapItem::sceneEventFilter(x1, x2); } return ret; }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 230, args); } if(!fun || LObjects::call_default) { QGraphicsPixmapItem::wheelEvent(x1); }}
};

class LGraphicsPolygonItem : public QGraphicsPolygonItem {
    friend class N59;
public:
    LGraphicsPolygonItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPolygonItem(x1), unique(u) {}
    LGraphicsPolygonItem(uint u, const QPolygonF& x1, QGraphicsItem* x2 = 0) : QGraphicsPolygonItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); QRectF ret; if(fun) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsPolygonItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 247, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsPolygonItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 248, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsPolygonItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsPolygonItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 210, args); } if(!fun || LObjects::call_default) { QGraphicsPolygonItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsPolygonItem::shape(); } return ret; }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsPolygonItem::type(); } return ret; }
};

class LGraphicsRectItem : public QGraphicsRectItem {
    friend class N60;
public:
    LGraphicsRectItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsRectItem(x1), unique(u) {}
    LGraphicsRectItem(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) : QGraphicsRectItem(x1, x2), unique(u) {}
    LGraphicsRectItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsRectItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); QRectF ret; if(fun) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsRectItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 247, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsRectItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 248, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsRectItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsRectItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 210, args); } if(!fun || LObjects::call_default) { QGraphicsRectItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsRectItem::shape(); } return ret; }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsRectItem::type(); } return ret; }
};

class LGraphicsSceneContextMenuEvent : public QGraphicsSceneContextMenuEvent {
    friend class N61;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneDragDropEvent : public QGraphicsSceneDragDropEvent {
    friend class N62;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneEvent : public QGraphicsSceneEvent {
    friend class N63;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneHelpEvent : public QGraphicsSceneHelpEvent {
    friend class N64;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneHoverEvent : public QGraphicsSceneHoverEvent {
    friend class N65;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneMouseEvent : public QGraphicsSceneMouseEvent {
    friend class N66;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneMoveEvent : public QGraphicsSceneMoveEvent {
    friend class N67;
public:
    LGraphicsSceneMoveEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneResizeEvent : public QGraphicsSceneResizeEvent {
    friend class N68;
public:
    LGraphicsSceneResizeEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneWheelEvent : public QGraphicsSceneWheelEvent {
    friend class N69;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSimpleTextItem : public QGraphicsSimpleTextItem {
    friend class N70;
public:
    LGraphicsSimpleTextItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsSimpleTextItem(x1), unique(u) {}
    LGraphicsSimpleTextItem(uint u, const QString& x1, QGraphicsItem* x2 = 0) : QGraphicsSimpleTextItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); QRectF ret; if(fun) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsSimpleTextItem::boundingRect(); } return ret; }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 247, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsSimpleTextItem::contains(x1); } return ret; }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 248, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsSimpleTextItem::isObscuredBy(x1); } return ret; }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsSimpleTextItem::opaqueArea(); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 210, args); } if(!fun || LObjects::call_default) { QGraphicsSimpleTextItem::paint(x1, x2, x3); }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsSimpleTextItem::shape(); } return ret; }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsSimpleTextItem::type(); } return ret; }
};

class LHelpEvent : public QHelpEvent {
    friend class N72;
public:
    LHelpEvent(uint u, Type x1, const QPoint& x2, const QPoint& x3) : QHelpEvent(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LHideEvent : public QHideEvent {
    friend class N74;
public:
    LHideEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LHoverEvent : public QHoverEvent {
    friend class N77;
public:
    LHoverEvent(uint u, Type x1, const QPoint& x2, const QPoint& x3) : QHoverEvent(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LIcon : public QIcon {
    friend class N78;
public:
    LIcon(uint u) : unique(u) {}
    LIcon(uint u, const QPixmap& x1) : QIcon(x1), unique(u) {}
    LIcon(uint u, const QIcon& x1) : QIcon(x1), unique(u) {}
    LIcon(uint u, const QString& x1) : QIcon(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LIconDragEvent : public QIconDragEvent {
    friend class N79;
public:
    LIconDragEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LImage : public QImage {
    friend class N80;
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

    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QImage::metric(x1); } return ret; }
};

class LInputEvent : public QInputEvent {
    friend class N81;
public:

    static NumList overrideIds;
    uint unique;
};

class LInputMethodEvent : public QInputMethodEvent {
    friend class N82;
public:
    LInputMethodEvent(uint u) : unique(u) {}
    LInputMethodEvent(uint u, const QInputMethodEvent& x1) : QInputMethodEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LItemEditorFactory : public QItemEditorFactory {
    friend class N83;
public:
    LItemEditorFactory(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QWidget* createEditor(QVariant::Type x1, QWidget* x2) const { void* fun = LObjects::overrideFun(unique, 408); QWidget* ret = 0; if(fun) { const void* args[] = { &x1, &x2 }; ret = (QWidget*)qVariantValue<void*>(callOverrideFun(fun, 408, args)); } if(!fun || LObjects::call_default) { ret = QItemEditorFactory::createEditor(x1, x2); } return ret; }
    QByteArray valuePropertyName(QVariant::Type x1) const { void* fun = LObjects::overrideFun(unique, 409); QByteArray ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QByteArray>(callOverrideFun(fun, 409, args)); } if(!fun || LObjects::call_default) { ret = QItemEditorFactory::valuePropertyName(x1); } return ret; }
};

class LItemSelection : public QItemSelection {
    friend class N84;
public:
    LItemSelection(uint u) : unique(u) {}
    LItemSelection(uint u, const QModelIndex& x1, const QModelIndex& x2) : QItemSelection(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LItemSelectionRange : public QItemSelectionRange {
    friend class N85;
public:
    LItemSelectionRange(uint u) : unique(u) {}
    LItemSelectionRange(uint u, const QItemSelectionRange& x1) : QItemSelectionRange(x1), unique(u) {}
    LItemSelectionRange(uint u, const QModelIndex& x1, const QModelIndex& x2) : QItemSelectionRange(x1, x2), unique(u) {}
    LItemSelectionRange(uint u, const QModelIndex& x1) : QItemSelectionRange(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LKeyEvent : public QKeyEvent {
    friend class N86;
public:
    LKeyEvent(uint u, Type x1, int x2, Qt::KeyboardModifiers x3, const QString& x4 = QString(), bool x5 = false, ushort x6 = 1) : QKeyEvent(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LKeySequence : public QKeySequence {
    friend class N87;
public:
    LKeySequence(uint u) : unique(u) {}
    LKeySequence(uint u, const QString& x1) : QKeySequence(x1), unique(u) {}
    LKeySequence(uint u, int x1, int x2 = 0, int x3 = 0, int x4 = 0) : QKeySequence(x1, x2, x3, x4), unique(u) {}
    LKeySequence(uint u, const QKeySequence& x1) : QKeySequence(x1), unique(u) {}
    LKeySequence(uint u, StandardKey x1) : QKeySequence(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LLayoutItem : public QLayoutItem {
    friend class N88;
public:
    LLayoutItem(uint u, Qt::Alignment x1 = 0) : QLayoutItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    Qt::Orientations expandingDirections() const { void* fun = LObjects::overrideFun(unique, 146); Qt::Orientations ret; if(fun) { ret = (Qt::Orientations)callOverrideFun(fun, 146, 0).toInt(); } return ret; }
    QRect geometry() const { void* fun = LObjects::overrideFun(unique, 156); QRect ret; if(fun) { ret = qVariantValue<QRect>(callOverrideFun(fun, 156, 0)); } return ret; }
    bool hasHeightForWidth() const { void* fun = LObjects::overrideFun(unique, 147); bool ret = false; if(fun) { ret = callOverrideFun(fun, 147, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QLayoutItem::hasHeightForWidth(); } return ret; }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args).toInt(); } if(!fun || LObjects::call_default) { ret = QLayoutItem::heightForWidth(x1); } return ret; }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { callOverrideFun(fun, 148, 0); } if(!fun || LObjects::call_default) { QLayoutItem::invalidate(); }}
    bool isEmpty() const { void* fun = LObjects::overrideFun(unique, 157); bool ret = false; if(fun) { ret = callOverrideFun(fun, 157, 0).toBool(); } return ret; }
    QLayout* layout() { void* fun = LObjects::overrideFun(unique, 158); QLayout* ret = 0; if(fun) { ret = (QLayout*)qVariantValue<void*>(callOverrideFun(fun, 158, 0)); } if(!fun || LObjects::call_default) { ret = QLayoutItem::layout(); } return ret; }
    QSize maximumSize() const { void* fun = LObjects::overrideFun(unique, 150); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 150, 0)); } return ret; }
    int minimumHeightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 151); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 151, args).toInt(); } if(!fun || LObjects::call_default) { ret = QLayoutItem::minimumHeightForWidth(x1); } return ret; }
    QSize minimumSize() const { void* fun = LObjects::overrideFun(unique, 152); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 152, 0)); } return ret; }
    void setGeometry(const QRect& x1) { void* fun = LObjects::overrideFun(unique, 153); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 153, args); }}
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return ret; }
    QSpacerItem* spacerItem() { void* fun = LObjects::overrideFun(unique, 410); QSpacerItem* ret = 0; if(fun) { ret = (QSpacerItem*)qVariantValue<void*>(callOverrideFun(fun, 410, 0)); } if(!fun || LObjects::call_default) { ret = QLayoutItem::spacerItem(); } return ret; }
    QWidget* widget() { void* fun = LObjects::overrideFun(unique, 411); QWidget* ret = 0; if(fun) { ret = (QWidget*)qVariantValue<void*>(callOverrideFun(fun, 411, 0)); } if(!fun || LObjects::call_default) { ret = QLayoutItem::widget(); } return ret; }
};

class LLibraryInfo : public QLibraryInfo {
    friend class N89;
public:

    static NumList overrideIds;
    uint unique;
};

class LLinearGradient : public QLinearGradient {
    friend class N90;
public:
    LLinearGradient(uint u) : unique(u) {}
    LLinearGradient(uint u, const QPointF& x1, const QPointF& x2) : QLinearGradient(x1, x2), unique(u) {}
    LLinearGradient(uint u, qreal x1, qreal x2, qreal x3, qreal x4) : QLinearGradient(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LListWidgetItem : public QListWidgetItem {
    friend class N91;
public:
    LListWidgetItem(uint u, QListWidget* x1 = 0, int x2 = Type) : QListWidgetItem(x1, x2), unique(u) {}
    LListWidgetItem(uint u, const QString& x1, QListWidget* x2 = 0, int x3 = Type) : QListWidgetItem(x1, x2, x3), unique(u) {}
    LListWidgetItem(uint u, const QIcon& x1, const QString& x2, QListWidget* x3 = 0, int x4 = Type) : QListWidgetItem(x1, x2, x3, x4), unique(u) {}
    LListWidgetItem(uint u, const QListWidgetItem& x1) : QListWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QListWidgetItem* clone() const { void* fun = LObjects::overrideFun(unique, 412); QListWidgetItem* ret = 0; if(fun) { ret = (QListWidgetItem*)qVariantValue<void*>(callOverrideFun(fun, 412, 0)); } if(!fun || LObjects::call_default) { ret = QListWidgetItem::clone(); } return ret; }
    QVariant data(int x1) const { void* fun = LObjects::overrideFun(unique, 413); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 413, args)); } if(!fun || LObjects::call_default) { ret = QListWidgetItem::data(x1); } return ret; }
    void setData(int x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 414); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 414, args); } if(!fun || LObjects::call_default) { QListWidgetItem::setData(x1, x2); }}
};

class LLocale : public QLocale {
    friend class N92;
public:
    LLocale(uint u) : unique(u) {}
    LLocale(uint u, const QString& x1) : QLocale(x1), unique(u) {}
    LLocale(uint u, Language x1, Country x2 = AnyCountry) : QLocale(x1, x2), unique(u) {}
    LLocale(uint u, const QLocale& x1) : QLocale(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMargins : public QMargins {
    friend class N93;
public:
    LMargins(uint u) : unique(u) {}
    LMargins(uint u, int x1, int x2, int x3, int x4) : QMargins(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMatrix : public QMatrix {
    friend class N94;
public:
    LMatrix(uint u) : unique(u) {}
    LMatrix(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) : QMatrix(x1, x2, x3, x4, x5, x6), unique(u) {}
    LMatrix(uint u, const QMatrix& x1) : QMatrix(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMatrix4x4 : public QMatrix4x4 {
    friend class N95;
public:
    LMatrix4x4(uint u) : unique(u) {}
    LMatrix4x4(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, qreal x7, qreal x8, qreal x9, qreal x10, qreal x11, qreal x12, qreal x13, qreal x14, qreal x15, qreal x16) : QMatrix4x4(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16), unique(u) {}
    LMatrix4x4(uint u, const QTransform& x1) : QMatrix4x4(x1), unique(u) {}
    LMatrix4x4(uint u, const QMatrix& x1) : QMatrix4x4(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMetaObject : public QMetaObject {
    friend class N96;
public:

    static NumList overrideIds;
    uint unique;
};

class LModelIndex : public QModelIndex {
    friend class N97;
public:
    LModelIndex(uint u) : unique(u) {}
    LModelIndex(uint u, const QModelIndex& x1) : QModelIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMouseEvent : public QMouseEvent {
    friend class N98;
public:
    LMouseEvent(uint u, Type x1, const QPoint& x2, Qt::MouseButton x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5) : QMouseEvent(x1, x2, x3, x4, x5), unique(u) {}
    LMouseEvent(uint u, Type x1, const QPoint& x2, const QPoint& x3, Qt::MouseButton x4, Qt::MouseButtons x5, Qt::KeyboardModifiers x6) : QMouseEvent(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMoveEvent : public QMoveEvent {
    friend class N99;
public:
    LMoveEvent(uint u, const QPoint& x1, const QPoint& x2) : QMoveEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPaintEvent : public QPaintEvent {
    friend class N109;
public:
    LPaintEvent(uint u, const QRegion& x1) : QPaintEvent(x1), unique(u) {}
    LPaintEvent(uint u, const QRect& x1) : QPaintEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPainter : public QPainter {
    friend class N110;
public:
    LPainter(uint u, QImage* x1) : QPainter(x1), unique(u) {}
    LPainter(uint u, QPicture* x1) : QPainter(x1), unique(u) {}
    LPainter(uint u, QPixmap* x1) : QPainter(x1), unique(u) {}
    LPainter(uint u, QPrinter* x1) : QPainter(x1), unique(u) {}
    LPainter(uint u, QWidget* x1) : QPainter(x1), unique(u) {}
    LPainter(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPainterPath : public QPainterPath {
    friend class N111;
public:
    LPainterPath(uint u) : unique(u) {}
    LPainterPath(uint u, const QPointF& x1) : QPainterPath(x1), unique(u) {}
    LPainterPath(uint u, const QPainterPath& x1) : QPainterPath(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPainterPathStroker : public QPainterPathStroker {
    friend class N112;
public:
    LPainterPathStroker(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPalette : public QPalette {
    friend class N113;
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
    friend class N114;
public:
    LPen(uint u) : unique(u) {}
    LPen(uint u, Qt::PenStyle x1) : QPen(x1), unique(u) {}
    LPen(uint u, const QColor& x1) : QPen(x1), unique(u) {}
    LPen(uint u, const QBrush& x1, qreal x2, Qt::PenStyle x3 = Qt::SolidLine, Qt::PenCapStyle x4 = Qt::SquareCap, Qt::PenJoinStyle x5 = Qt::BevelJoin) : QPen(x1, x2, x3, x4, x5), unique(u) {}
    LPen(uint u, const QPen& x1) : QPen(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPersistentModelIndex : public QPersistentModelIndex {
    friend class N115;
public:
    LPersistentModelIndex(uint u, const QModelIndex& x1) : QPersistentModelIndex(x1), unique(u) {}
    LPersistentModelIndex(uint u, const QPersistentModelIndex& x1) : QPersistentModelIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPicture : public QPicture {
    friend class N116;
public:
    LPicture(uint u, int x1 = -1) : QPicture(x1), unique(u) {}
    LPicture(uint u, const QPicture& x1) : QPicture(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setData(const char* x1, uint x2) { void* fun = LObjects::overrideFun(unique, 416); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 416, args); } if(!fun || LObjects::call_default) { QPicture::setData(x1, x2); }}
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QPicture::metric(x1); } return ret; }
};

class LPixmap : public QPixmap {
    friend class N117;
public:
    LPixmap(uint u) : unique(u) {}
    LPixmap(uint u, int x1, int x2) : QPixmap(x1, x2), unique(u) {}
    LPixmap(uint u, const QString& x1, const char* x2 = 0, Qt::ImageConversionFlags x3 = Qt::AutoColor) : QPixmap(x1, x2, x3), unique(u) {}
    LPixmap(uint u, const QPixmap& x1) : QPixmap(x1), unique(u) {}
    LPixmap(uint u, const QSize& x1) : QPixmap(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QPixmap::metric(x1); } return ret; }
};

class LPixmapCache : public QPixmapCache {
    friend class N118;
public:

    static NumList overrideIds;
    uint unique;
};

class LPrinter : public QPrinter {
    friend class N119;
public:
    LPrinter(uint u, PrinterMode x1 = ScreenResolution) : QPrinter(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QPrinter::metric(x1); } return ret; }
};

class LPrinterInfo : public QPrinterInfo {
    friend class N120;
public:

    static NumList overrideIds;
    uint unique;
};

class LProcessEnvironment : public QProcessEnvironment {
    friend class N121;
public:
    LProcessEnvironment(uint u) : unique(u) {}
    LProcessEnvironment(uint u, const QProcessEnvironment& x1) : QProcessEnvironment(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LQuaternion : public QQuaternion {
    friend class N122;
public:
    LQuaternion(uint u) : unique(u) {}
    LQuaternion(uint u, qreal x1, qreal x2, qreal x3, qreal x4) : QQuaternion(x1, x2, x3, x4), unique(u) {}
    LQuaternion(uint u, qreal x1, const QVector3D& x2) : QQuaternion(x1, x2), unique(u) {}
    LQuaternion(uint u, const QVector4D& x1) : QQuaternion(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRadialGradient : public QRadialGradient {
    friend class N123;
public:
    LRadialGradient(uint u) : unique(u) {}
    LRadialGradient(uint u, const QPointF& x1, qreal x2, const QPointF& x3) : QRadialGradient(x1, x2, x3), unique(u) {}
    LRadialGradient(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5) : QRadialGradient(x1, x2, x3, x4, x5), unique(u) {}
    LRadialGradient(uint u, const QPointF& x1, qreal x2) : QRadialGradient(x1, x2), unique(u) {}
    LRadialGradient(uint u, qreal x1, qreal x2, qreal x3) : QRadialGradient(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LReadLocker : public QReadLocker {
    friend class N124;
public:
    LReadLocker(uint u, QReadWriteLock* x1) : QReadLocker(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LReadWriteLock : public QReadWriteLock {
    friend class N125;
public:
    LReadWriteLock(uint u) : unique(u) {}
    LReadWriteLock(uint u, RecursionMode x1) : QReadWriteLock(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRegExp : public QRegExp {
    friend class N126;
public:
    LRegExp(uint u) : unique(u) {}
    LRegExp(uint u, const QString& x1, Qt::CaseSensitivity x2 = Qt::CaseSensitive, PatternSyntax x3 = RegExp) : QRegExp(x1, x2, x3), unique(u) {}
    LRegExp(uint u, const QRegExp& x1) : QRegExp(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRegion : public QRegion {
    friend class N127;
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

class LResizeEvent : public QResizeEvent {
    friend class N128;
public:
    LResizeEvent(uint u, const QSize& x1, const QSize& x2) : QResizeEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRunnable : public QRunnable {
    friend class N129;
public:
    LRunnable(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    void run() { void* fun = LObjects::overrideFun(unique, 417); if(fun) { callOverrideFun(fun, 417, 0); }}
};

class LSemaphore : public QSemaphore {
    friend class N130;
public:
    LSemaphore(uint u, int x1 = 0) : QSemaphore(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LShortcutEvent : public QShortcutEvent {
    friend class N131;
public:
    LShortcutEvent(uint u, const QKeySequence& x1, int x2, bool x3 = false) : QShortcutEvent(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LShowEvent : public QShowEvent {
    friend class N132;
public:
    LShowEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSizePolicy : public QSizePolicy {
    friend class N133;
public:
    LSizePolicy(uint u) : unique(u) {}
    LSizePolicy(uint u, Policy x1, Policy x2) : QSizePolicy(x1, x2), unique(u) {}
    LSizePolicy(uint u, Policy x1, Policy x2, ControlType x3) : QSizePolicy(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSpacerItem : public QSpacerItem {
    friend class N134;
public:
    LSpacerItem(uint u, int x1, int x2, QSizePolicy::Policy x3 = QSizePolicy::Minimum, QSizePolicy::Policy x4 = QSizePolicy::Minimum) : QSpacerItem(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    Qt::Orientations expandingDirections() const { void* fun = LObjects::overrideFun(unique, 146); Qt::Orientations ret; if(fun) { ret = (Qt::Orientations)callOverrideFun(fun, 146, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QSpacerItem::expandingDirections(); } return ret; }
    QRect geometry() const { void* fun = LObjects::overrideFun(unique, 156); QRect ret; if(fun) { ret = qVariantValue<QRect>(callOverrideFun(fun, 156, 0)); } if(!fun || LObjects::call_default) { ret = QSpacerItem::geometry(); } return ret; }
    bool isEmpty() const { void* fun = LObjects::overrideFun(unique, 157); bool ret = false; if(fun) { ret = callOverrideFun(fun, 157, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QSpacerItem::isEmpty(); } return ret; }
    QSize maximumSize() const { void* fun = LObjects::overrideFun(unique, 150); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 150, 0)); } if(!fun || LObjects::call_default) { ret = QSpacerItem::maximumSize(); } return ret; }
    QSize minimumSize() const { void* fun = LObjects::overrideFun(unique, 152); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 152, 0)); } if(!fun || LObjects::call_default) { ret = QSpacerItem::minimumSize(); } return ret; }
    void setGeometry(const QRect& x1) { void* fun = LObjects::overrideFun(unique, 153); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 153, args); } if(!fun || LObjects::call_default) { QSpacerItem::setGeometry(x1); }}
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } if(!fun || LObjects::call_default) { ret = QSpacerItem::sizeHint(); } return ret; }
    QSpacerItem* spacerItem() { void* fun = LObjects::overrideFun(unique, 410); QSpacerItem* ret = 0; if(fun) { ret = (QSpacerItem*)qVariantValue<void*>(callOverrideFun(fun, 410, 0)); } if(!fun || LObjects::call_default) { ret = QSpacerItem::spacerItem(); } return ret; }
    bool hasHeightForWidth() const { void* fun = LObjects::overrideFun(unique, 147); bool ret = false; if(fun) { ret = callOverrideFun(fun, 147, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QSpacerItem::hasHeightForWidth(); } return ret; }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args).toInt(); } if(!fun || LObjects::call_default) { ret = QSpacerItem::heightForWidth(x1); } return ret; }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { callOverrideFun(fun, 148, 0); } if(!fun || LObjects::call_default) { QSpacerItem::invalidate(); }}
    QLayout* layout() { void* fun = LObjects::overrideFun(unique, 158); QLayout* ret = 0; if(fun) { ret = (QLayout*)qVariantValue<void*>(callOverrideFun(fun, 158, 0)); } if(!fun || LObjects::call_default) { ret = QSpacerItem::layout(); } return ret; }
    int minimumHeightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 151); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 151, args).toInt(); } if(!fun || LObjects::call_default) { ret = QSpacerItem::minimumHeightForWidth(x1); } return ret; }
    QWidget* widget() { void* fun = LObjects::overrideFun(unique, 411); QWidget* ret = 0; if(fun) { ret = (QWidget*)qVariantValue<void*>(callOverrideFun(fun, 411, 0)); } if(!fun || LObjects::call_default) { ret = QSpacerItem::widget(); } return ret; }
};

class LStandardItem : public QStandardItem {
    friend class N148;
public:
    LStandardItem(uint u) : unique(u) {}
    LStandardItem(uint u, const QString& x1) : QStandardItem(x1), unique(u) {}
    LStandardItem(uint u, const QIcon& x1, const QString& x2) : QStandardItem(x1, x2), unique(u) {}
    LStandardItem(uint u, int x1, int x2 = 1) : QStandardItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QStandardItem* clone() const { void* fun = LObjects::overrideFun(unique, 412); QStandardItem* ret = 0; if(fun) { ret = (QStandardItem*)qVariantValue<void*>(callOverrideFun(fun, 412, 0)); } if(!fun || LObjects::call_default) { ret = QStandardItem::clone(); } return ret; }
    QVariant data(int x1 = Qt::UserRole+1) const { void* fun = LObjects::overrideFun(unique, 413); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 413, args)); } if(!fun || LObjects::call_default) { ret = QStandardItem::data(x1); } return ret; }
    void setData(const QVariant& x1, int x2 = Qt::UserRole+1) { void* fun = LObjects::overrideFun(unique, 437); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 437, args); } if(!fun || LObjects::call_default) { QStandardItem::setData(x1, x2); }}
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QStandardItem::type(); } return ret; }
};

class LStatusTipEvent : public QStatusTipEvent {
    friend class N149;
public:
    LStatusTipEvent(uint u, const QString& x1) : QStatusTipEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSystemSemaphore : public QSystemSemaphore {
    friend class N151;
public:
    LSystemSemaphore(uint u, const QString& x1, int x2 = 0, AccessMode x3 = Open) : QSystemSemaphore(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTableWidgetItem : public QTableWidgetItem {
    friend class N152;
public:
    LTableWidgetItem(uint u, int x1 = Type) : QTableWidgetItem(x1), unique(u) {}
    LTableWidgetItem(uint u, const QString& x1, int x2 = Type) : QTableWidgetItem(x1, x2), unique(u) {}
    LTableWidgetItem(uint u, const QIcon& x1, const QString& x2, int x3 = Type) : QTableWidgetItem(x1, x2, x3), unique(u) {}
    LTableWidgetItem(uint u, const QTableWidgetItem& x1) : QTableWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QTableWidgetItem* clone() const { void* fun = LObjects::overrideFun(unique, 412); QTableWidgetItem* ret = 0; if(fun) { ret = (QTableWidgetItem*)qVariantValue<void*>(callOverrideFun(fun, 412, 0)); } if(!fun || LObjects::call_default) { ret = QTableWidgetItem::clone(); } return ret; }
    QVariant data(int x1) const { void* fun = LObjects::overrideFun(unique, 413); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 413, args)); } if(!fun || LObjects::call_default) { ret = QTableWidgetItem::data(x1); } return ret; }
    void setData(int x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 414); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 414, args); } if(!fun || LObjects::call_default) { QTableWidgetItem::setData(x1, x2); }}
};

class LTableWidgetSelectionRange : public QTableWidgetSelectionRange {
    friend class N153;
public:
    LTableWidgetSelectionRange(uint u) : unique(u) {}
    LTableWidgetSelectionRange(uint u, int x1, int x2, int x3, int x4) : QTableWidgetSelectionRange(x1, x2, x3, x4), unique(u) {}
    LTableWidgetSelectionRange(uint u, const QTableWidgetSelectionRange& x1) : QTableWidgetSelectionRange(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTabletEvent : public QTabletEvent {
    friend class N154;
public:
    LTabletEvent(uint u, Type x1, const QPoint& x2, const QPoint& x3, const QPointF& x4, int x5, int x6, qreal x7, int x8, int x9, qreal x10, qreal x11, int x12, Qt::KeyboardModifiers x13, qint64 x14) : QTabletEvent(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextBlock : public QTextBlock {
    friend class N155;
public:
    LTextBlock(uint u, const QTextBlock& x1) : QTextBlock(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextBlockFormat : public QTextBlockFormat {
    friend class N156;
public:
    LTextBlockFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextBlockUserData : public QTextBlockUserData {
    friend class N157;
public:

    static NumList overrideIds;
    uint unique;
};

class LTextBoundaryFinder : public QTextBoundaryFinder {
    friend class N158;
public:
    LTextBoundaryFinder(uint u) : unique(u) {}
    LTextBoundaryFinder(uint u, const QTextBoundaryFinder& x1) : QTextBoundaryFinder(x1), unique(u) {}
    LTextBoundaryFinder(uint u, BoundaryType x1, const QString& x2) : QTextBoundaryFinder(x1, x2), unique(u) {}
    LTextBoundaryFinder(uint u, BoundaryType x1, const QChar* x2, int x3, uchar* x4 = 0, int x5 = 0) : QTextBoundaryFinder(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextCharFormat : public QTextCharFormat {
    friend class N159;
public:
    LTextCharFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextCodec : public QTextCodec {
    friend class N160;
public:

    static NumList overrideIds;
    uint unique;

    QList<QByteArray> aliases() const { void* fun = LObjects::overrideFun(unique, 439); QList<QByteArray> ret; if(fun) { ret = qVariantValue<QList<QByteArray> >(callOverrideFun(fun, 439, 0)); } if(!fun || LObjects::call_default) { ret = QTextCodec::aliases(); } return ret; }
    int mibEnum() const { void* fun = LObjects::overrideFun(unique, 440); int ret = 0; if(fun) { ret = callOverrideFun(fun, 440, 0).toInt(); } return ret; }
    QByteArray name() const { void* fun = LObjects::overrideFun(unique, 441); QByteArray ret; if(fun) { ret = qVariantValue<QByteArray>(callOverrideFun(fun, 441, 0)); } return ret; }
    QByteArray convertFromUnicode(const QChar* x1, int x2, ConverterState* x3) const { void* fun = LObjects::overrideFun(unique, 442); QByteArray ret; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = qVariantValue<QByteArray>(callOverrideFun(fun, 442, args)); } return ret; }
    QString convertToUnicode(const char* x1, int x2, ConverterState* x3) const { void* fun = LObjects::overrideFun(unique, 443); QString ret; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = qVariantValue<QString>(callOverrideFun(fun, 443, args)); } return ret; }
};

class LTextCursor : public QTextCursor {
    friend class N161;
public:
    LTextCursor(uint u) : unique(u) {}
    LTextCursor(uint u, QTextDocument* x1) : QTextCursor(x1), unique(u) {}
    LTextCursor(uint u, QTextFrame* x1) : QTextCursor(x1), unique(u) {}
    LTextCursor(uint u, const QTextBlock& x1) : QTextCursor(x1), unique(u) {}
    LTextCursor(uint u, const QTextCursor& x1) : QTextCursor(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextDecoder : public QTextDecoder {
    friend class N162;
public:
    LTextDecoder(uint u, const QTextCodec* x1) : QTextDecoder(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextDocumentFragment : public QTextDocumentFragment {
    friend class N163;
public:
    LTextDocumentFragment(uint u) : unique(u) {}
    LTextDocumentFragment(uint u, const QTextDocument* x1) : QTextDocumentFragment(x1), unique(u) {}
    LTextDocumentFragment(uint u, const QTextCursor& x1) : QTextDocumentFragment(x1), unique(u) {}
    LTextDocumentFragment(uint u, const QTextDocumentFragment& x1) : QTextDocumentFragment(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextDocumentWriter : public QTextDocumentWriter {
    friend class N164;
public:
    LTextDocumentWriter(uint u) : unique(u) {}
    LTextDocumentWriter(uint u, const QString& x1, const QByteArray& x2 = QByteArray()) : QTextDocumentWriter(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextEncoder : public QTextEncoder {
    friend class N165;
public:
    LTextEncoder(uint u, const QTextCodec* x1) : QTextEncoder(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextFormat : public QTextFormat {
    friend class N166;
public:
    LTextFormat(uint u) : unique(u) {}
    LTextFormat(uint u, int x1) : QTextFormat(x1), unique(u) {}
    LTextFormat(uint u, const QTextFormat& x1) : QTextFormat(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextFragment : public QTextFragment {
    friend class N167;
public:
    LTextFragment(uint u) : unique(u) {}
    LTextFragment(uint u, const QTextFragment& x1) : QTextFragment(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextFrameFormat : public QTextFrameFormat {
    friend class N168;
public:
    LTextFrameFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextImageFormat : public QTextImageFormat {
    friend class N169;
public:
    LTextImageFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextLayout : public QTextLayout {
    friend class N170;
public:
    LTextLayout(uint u) : unique(u) {}
    LTextLayout(uint u, const QString& x1) : QTextLayout(x1), unique(u) {}
    LTextLayout(uint u, const QString& x1, const QFont& x2, QPaintDevice* x3 = 0) : QTextLayout(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextLength : public QTextLength {
    friend class N171;
public:
    LTextLength(uint u) : unique(u) {}
    LTextLength(uint u, Type x1, qreal x2) : QTextLength(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextLine : public QTextLine {
    friend class N172;
public:
    LTextLine(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextListFormat : public QTextListFormat {
    friend class N173;
public:
    LTextListFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextOption : public QTextOption {
    friend class N174;
public:
    LTextOption(uint u) : unique(u) {}
    LTextOption(uint u, Qt::Alignment x1) : QTextOption(x1), unique(u) {}
    LTextOption(uint u, const QTextOption& x1) : QTextOption(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableCell : public QTextTableCell {
    friend class N175;
public:
    LTextTableCell(uint u) : unique(u) {}
    LTextTableCell(uint u, const QTextTableCell& x1) : QTextTableCell(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableCellFormat : public QTextTableCellFormat {
    friend class N176;
public:
    LTextTableCellFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableFormat : public QTextTableFormat {
    friend class N177;
public:
    LTextTableFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTime : public QTime {
    friend class N178;
public:
    LTime(uint u) : unique(u) {}
    LTime(uint u, int x1, int x2, int x3 = 0, int x4 = 0) : QTime(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTimerEvent : public QTimerEvent {
    friend class N179;
public:
    LTimerEvent(uint u, int x1) : QTimerEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LToolTip : public QToolTip {
    friend class N180;
public:

    static NumList overrideIds;
    uint unique;
};

class LTouchEvent : public QTouchEvent {
    friend class N181;
public:
    LTouchEvent(uint u, QEvent::Type x1, QTouchEvent::DeviceType x2 = TouchScreen, Qt::KeyboardModifiers x3 = Qt::NoModifier, Qt::TouchPointStates x4 = 0, const QList<QTouchEvent::TouchPoint>& x5 = QList<QTouchEvent::TouchPoint>()) : QTouchEvent(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTransform : public QTransform {
    friend class N182;
public:
    LTransform(uint u) : unique(u) {}
    LTransform(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, qreal x7, qreal x8, qreal x9 = 1.0) : QTransform(x1, x2, x3, x4, x5, x6, x7, x8, x9), unique(u) {}
    LTransform(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) : QTransform(x1, x2, x3, x4, x5, x6), unique(u) {}
    LTransform(uint u, const QMatrix& x1) : QTransform(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTreeWidgetItem : public QTreeWidgetItem {
    friend class N183;
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

    QTreeWidgetItem* clone() const { void* fun = LObjects::overrideFun(unique, 412); QTreeWidgetItem* ret = 0; if(fun) { ret = (QTreeWidgetItem*)qVariantValue<void*>(callOverrideFun(fun, 412, 0)); } if(!fun || LObjects::call_default) { ret = QTreeWidgetItem::clone(); } return ret; }
    QVariant data(int x1, int x2) const { void* fun = LObjects::overrideFun(unique, 444); QVariant ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 444, args)); } if(!fun || LObjects::call_default) { ret = QTreeWidgetItem::data(x1, x2); } return ret; }
    void setData(int x1, int x2, const QVariant& x3) { void* fun = LObjects::overrideFun(unique, 445); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 445, args); } if(!fun || LObjects::call_default) { QTreeWidgetItem::setData(x1, x2, x3); }}
};

class LUndoCommand : public QUndoCommand {
    friend class N184;
public:
    LUndoCommand(uint u, QUndoCommand* x1 = 0) : QUndoCommand(x1), unique(u) {}
    LUndoCommand(uint u, const QString& x1, QUndoCommand* x2 = 0) : QUndoCommand(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int id() const { void* fun = LObjects::overrideFun(unique, 446); int ret = 0; if(fun) { ret = callOverrideFun(fun, 446, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QUndoCommand::id(); } return ret; }
    bool mergeWith(const QUndoCommand* x1) { void* fun = LObjects::overrideFun(unique, 447); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 447, args).toBool(); } if(!fun || LObjects::call_default) { ret = QUndoCommand::mergeWith(x1); } return ret; }
    void redo() { void* fun = LObjects::overrideFun(unique, 448); if(fun) { callOverrideFun(fun, 448, 0); } if(!fun || LObjects::call_default) { QUndoCommand::redo(); }}
    void undo() { void* fun = LObjects::overrideFun(unique, 449); if(fun) { callOverrideFun(fun, 449, 0); } if(!fun || LObjects::call_default) { QUndoCommand::undo(); }}
};

class LUrl : public QUrl {
    friend class N185;
public:
    LUrl(uint u) : unique(u) {}
    LUrl(uint u, const QString& x1) : QUrl(x1), unique(u) {}
    LUrl(uint u, const QUrl& x1) : QUrl(x1), unique(u) {}
    LUrl(uint u, const QString& x1, ParsingMode x2) : QUrl(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVariant : public QVariant {
    friend class N187;
public:
    LVariant(uint u) : unique(u) {}
    LVariant(uint u, const QLocale& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, const QRegExp& x1) : QVariant(x1), unique(u) {}
    LVariant(uint u, Qt::GlobalColor x1) : QVariant(x1), unique(u) {}
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
    LVariant(uint u, const QLatin1String& x1) : QVariant(x1), unique(u) {}
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
    friend class N188;
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
    friend class N189;
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
    friend class N190;
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

class LWhatsThis : public QWhatsThis {
    friend class N199;
public:

    static NumList overrideIds;
    uint unique;
};

class LWhatsThisClickedEvent : public QWhatsThisClickedEvent {
    friend class N200;
public:
    LWhatsThisClickedEvent(uint u, const QString& x1) : QWhatsThisClickedEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWheelEvent : public QWheelEvent {
    friend class N201;
public:
    LWheelEvent(uint u, const QPoint& x1, int x2, Qt::MouseButtons x3, Qt::KeyboardModifiers x4, Qt::Orientation x5 = Qt::Vertical) : QWheelEvent(x1, x2, x3, x4, x5), unique(u) {}
    LWheelEvent(uint u, const QPoint& x1, const QPoint& x2, int x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5, Qt::Orientation x6 = Qt::Vertical) : QWheelEvent(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWidgetItem : public QWidgetItem {
    friend class N202;
public:
    LWidgetItem(uint u, QWidget* x1) : QWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    Qt::Orientations expandingDirections() const { void* fun = LObjects::overrideFun(unique, 146); Qt::Orientations ret; if(fun) { ret = (Qt::Orientations)callOverrideFun(fun, 146, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QWidgetItem::expandingDirections(); } return ret; }
    QRect geometry() const { void* fun = LObjects::overrideFun(unique, 156); QRect ret; if(fun) { ret = qVariantValue<QRect>(callOverrideFun(fun, 156, 0)); } if(!fun || LObjects::call_default) { ret = QWidgetItem::geometry(); } return ret; }
    bool hasHeightForWidth() const { void* fun = LObjects::overrideFun(unique, 147); bool ret = false; if(fun) { ret = callOverrideFun(fun, 147, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QWidgetItem::hasHeightForWidth(); } return ret; }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args).toInt(); } if(!fun || LObjects::call_default) { ret = QWidgetItem::heightForWidth(x1); } return ret; }
    bool isEmpty() const { void* fun = LObjects::overrideFun(unique, 157); bool ret = false; if(fun) { ret = callOverrideFun(fun, 157, 0).toBool(); } if(!fun || LObjects::call_default) { ret = QWidgetItem::isEmpty(); } return ret; }
    QSize maximumSize() const { void* fun = LObjects::overrideFun(unique, 150); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 150, 0)); } if(!fun || LObjects::call_default) { ret = QWidgetItem::maximumSize(); } return ret; }
    QSize minimumSize() const { void* fun = LObjects::overrideFun(unique, 152); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 152, 0)); } if(!fun || LObjects::call_default) { ret = QWidgetItem::minimumSize(); } return ret; }
    void setGeometry(const QRect& x1) { void* fun = LObjects::overrideFun(unique, 153); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 153, args); } if(!fun || LObjects::call_default) { QWidgetItem::setGeometry(x1); }}
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } if(!fun || LObjects::call_default) { ret = QWidgetItem::sizeHint(); } return ret; }
    QWidget* widget() { void* fun = LObjects::overrideFun(unique, 411); QWidget* ret = 0; if(fun) { ret = (QWidget*)qVariantValue<void*>(callOverrideFun(fun, 411, 0)); } if(!fun || LObjects::call_default) { ret = QWidgetItem::widget(); } return ret; }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { callOverrideFun(fun, 148, 0); } if(!fun || LObjects::call_default) { QWidgetItem::invalidate(); }}
    QLayout* layout() { void* fun = LObjects::overrideFun(unique, 158); QLayout* ret = 0; if(fun) { ret = (QLayout*)qVariantValue<void*>(callOverrideFun(fun, 158, 0)); } if(!fun || LObjects::call_default) { ret = QWidgetItem::layout(); } return ret; }
    int minimumHeightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 151); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 151, args).toInt(); } if(!fun || LObjects::call_default) { ret = QWidgetItem::minimumHeightForWidth(x1); } return ret; }
    QSpacerItem* spacerItem() { void* fun = LObjects::overrideFun(unique, 410); QSpacerItem* ret = 0; if(fun) { ret = (QSpacerItem*)qVariantValue<void*>(callOverrideFun(fun, 410, 0)); } if(!fun || LObjects::call_default) { ret = QWidgetItem::spacerItem(); } return ret; }
};

class LWindowStateChangeEvent : public QWindowStateChangeEvent {
    friend class N203;
public:

    static NumList overrideIds;
    uint unique;
};

class LWriteLocker : public QWriteLocker {
    friend class N204;
public:
    LWriteLocker(uint u, QReadWriteLock* x1) : QWriteLocker(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

#endif
