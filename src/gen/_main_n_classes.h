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

    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 248, args).toBool(); } return QAbstractGraphicsShapeItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } return QAbstractGraphicsShapeItem::opaqueArea(); }
    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 332); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 332, args).toBool()) return; } QAbstractGraphicsShapeItem::advance(x1); }
    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QRectF(); }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 333); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 333, args).toBool(); } return QAbstractGraphicsShapeItem::collidesWithItem(x1, x2); }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 334); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 334, args).toBool(); } return QAbstractGraphicsShapeItem::collidesWithPath(x1, x2); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 247, args).toBool(); } return QAbstractGraphicsShapeItem::contains(x1); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } return QAbstractGraphicsShapeItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QAbstractGraphicsShapeItem::type(); }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 213, args).toBool()) return; } QAbstractGraphicsShapeItem::contextMenuEvent(x1); }
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 214, args).toBool()) return; } QAbstractGraphicsShapeItem::dragEnterEvent(x1); }
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 215, args).toBool()) return; } QAbstractGraphicsShapeItem::dragLeaveEvent(x1); }
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 216, args).toBool()) return; } QAbstractGraphicsShapeItem::dragMoveEvent(x1); }
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 217, args).toBool()) return; } QAbstractGraphicsShapeItem::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QAbstractGraphicsShapeItem::focusInEvent(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QAbstractGraphicsShapeItem::focusOutEvent(x1); }
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 219, args).toBool()) return; } QAbstractGraphicsShapeItem::hoverEnterEvent(x1); }
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 220, args).toBool()) return; } QAbstractGraphicsShapeItem::hoverLeaveEvent(x1); }
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 221, args).toBool()) return; } QAbstractGraphicsShapeItem::hoverMoveEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QAbstractGraphicsShapeItem::inputMethodEvent(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QAbstractGraphicsShapeItem::inputMethodQuery(x1); }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } return QAbstractGraphicsShapeItem::itemChange(x1, x2); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QAbstractGraphicsShapeItem::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QAbstractGraphicsShapeItem::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 223, args).toBool()) return; } QAbstractGraphicsShapeItem::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 224, args).toBool()) return; } QAbstractGraphicsShapeItem::mouseMoveEvent(x1); }
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 225, args).toBool()) return; } QAbstractGraphicsShapeItem::mousePressEvent(x1); }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 226, args).toBool()) return; } QAbstractGraphicsShapeItem::mouseReleaseEvent(x1); }
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 241, args).toBool(); } return QAbstractGraphicsShapeItem::sceneEvent(x1); }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 335); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 335, args).toBool(); } return QAbstractGraphicsShapeItem::sceneEventFilter(x1, x2); }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 230, args).toBool()) return; } QAbstractGraphicsShapeItem::wheelEvent(x1); }
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

    QString actionText(int x1, Text x2, int x3) const { void* fun = LObjects::overrideFun(unique, 336); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return qVariantValue<QString>(callOverrideFun(fun, 336, args)); } return QString(); }
    int childAt(int x1, int x2) const { void* fun = LObjects::overrideFun(unique, 337); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 337, args).toInt(); } return 0; }
    int childCount() const { void* fun = LObjects::overrideFun(unique, 338); if(fun) { return callOverrideFun(fun, 338, 0).toInt(); } return 0; }
    bool doAction(int x1, int x2, const QVariantList& x3 = QVariantList()) { void* fun = LObjects::overrideFun(unique, 339); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return callOverrideFun(fun, 339, args).toBool(); } return false; }
    int indexOfChild(const QAccessibleInterface* x1) const { void* fun = LObjects::overrideFun(unique, 340); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 340, args).toInt(); } return 0; }
    bool isValid() const { void* fun = LObjects::overrideFun(unique, 341); if(fun) { return callOverrideFun(fun, 341, 0).toBool(); } return false; }
    QObject* object() const { void* fun = LObjects::overrideFun(unique, 342); if(fun) { return (QObject*)qVariantValue<void*>(callOverrideFun(fun, 342, 0)); } return 0; }
    QRect rect(int x1) const { void* fun = LObjects::overrideFun(unique, 343); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(fun, 343, args)); } return QRect(); }
    Relation relationTo(int x1, const QAccessibleInterface* x2, int x3) const { void* fun = LObjects::overrideFun(unique, 344); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return (Relation)callOverrideFun(fun, 344, args).toInt(); } return (Relation)0; }
    Role role(int x1) const { void* fun = LObjects::overrideFun(unique, 345); if(fun) { const void* args[] = { &x1 }; return (Role)callOverrideFun(fun, 345, args).toInt(); } return (Role)0; }
    void setText(Text x1, int x2, const QString& x3) { void* fun = LObjects::overrideFun(unique, 346); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 346, args).toBool()) return; }}
    State state(int x1) const { void* fun = LObjects::overrideFun(unique, 347); if(fun) { const void* args[] = { &x1 }; return (State)callOverrideFun(fun, 347, args).toInt(); } return (State)0; }
    QString text(Text x1, int x2) const { void* fun = LObjects::overrideFun(unique, 348); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QString>(callOverrideFun(fun, 348, args)); } return QString(); }
    int userActionCount(int x1) const { void* fun = LObjects::overrideFun(unique, 349); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 349, args).toInt(); } return 0; }
};

class LAccessibleWidget : public QAccessibleWidget {
    friend class N6;
public:
    LAccessibleWidget(uint u, QWidget* x1, Role x2 = Client, const QString& x3 = QString()) : QAccessibleWidget(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QString actionText(int x1, Text x2, int x3) const { void* fun = LObjects::overrideFun(unique, 336); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return qVariantValue<QString>(callOverrideFun(fun, 336, args)); } return QAccessibleWidget::actionText(x1, x2, x3); }
    int childAt(int x1, int x2) const { void* fun = LObjects::overrideFun(unique, 337); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 337, args).toInt(); } return QAccessibleWidget::childAt(x1, x2); }
    int childCount() const { void* fun = LObjects::overrideFun(unique, 338); if(fun) { return callOverrideFun(fun, 338, 0).toInt(); } return QAccessibleWidget::childCount(); }
    bool doAction(int x1, int x2, const QVariantList& x3) { void* fun = LObjects::overrideFun(unique, 339); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return callOverrideFun(fun, 339, args).toBool(); } return QAccessibleWidget::doAction(x1, x2, x3); }
    int indexOfChild(const QAccessibleInterface* x1) const { void* fun = LObjects::overrideFun(unique, 340); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 340, args).toInt(); } return QAccessibleWidget::indexOfChild(x1); }
    QRect rect(int x1) const { void* fun = LObjects::overrideFun(unique, 343); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(fun, 343, args)); } return QAccessibleWidget::rect(x1); }
    Relation relationTo(int x1, const QAccessibleInterface* x2, int x3) const { void* fun = LObjects::overrideFun(unique, 344); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return (Relation)callOverrideFun(fun, 344, args).toInt(); } return QAccessibleWidget::relationTo(x1, x2, x3); }
    Role role(int x1) const { void* fun = LObjects::overrideFun(unique, 345); if(fun) { const void* args[] = { &x1 }; return (Role)callOverrideFun(fun, 345, args).toInt(); } return QAccessibleWidget::role(x1); }
    State state(int x1) const { void* fun = LObjects::overrideFun(unique, 347); if(fun) { const void* args[] = { &x1 }; return (State)callOverrideFun(fun, 347, args).toInt(); } return QAccessibleWidget::state(x1); }
    QString text(Text x1, int x2) const { void* fun = LObjects::overrideFun(unique, 348); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QString>(callOverrideFun(fun, 348, args)); } return QAccessibleWidget::text(x1, x2); }
    int userActionCount(int x1) const { void* fun = LObjects::overrideFun(unique, 349); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 349, args).toInt(); } return QAccessibleWidget::userActionCount(x1); }
    bool isValid() const { void* fun = LObjects::overrideFun(unique, 341); if(fun) { return callOverrideFun(fun, 341, 0).toBool(); } return QAccessibleWidget::isValid(); }
    QObject* object() const { void* fun = LObjects::overrideFun(unique, 342); if(fun) { return (QObject*)qVariantValue<void*>(callOverrideFun(fun, 342, 0)); } return QAccessibleWidget::object(); }
    void setText(Text x1, int x2, const QString& x3) { void* fun = LObjects::overrideFun(unique, 346); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 346, args).toBool()) return; } QAccessibleWidget::setText(x1, x2, x3); }
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

    QByteArray encodedData(const char* x1) const { void* fun = LObjects::overrideFun(unique, 350); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QByteArray>(callOverrideFun(fun, 350, args)); } return QDragMoveEvent::encodedData(x1); }
    const char* format(int x1 = 0) const { void* fun = LObjects::overrideFun(unique, 351); if(fun) { const void* args[] = { &x1 }; return (const char*)qVariantValue<void*>(callOverrideFun(fun, 351, args)); } return QDragMoveEvent::format(x1); }
    bool provides(const char* x1) const { void* fun = LObjects::overrideFun(unique, 352); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 352, args).toBool(); } return QDragMoveEvent::provides(x1); }
};

class LDropEvent : public QDropEvent {
    friend class N28;
public:
    LDropEvent(uint u, const QPoint& x1, Qt::DropActions x2, const QMimeData* x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5, Type x6 = Drop) : QDropEvent(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QByteArray encodedData(const char* x1) const { void* fun = LObjects::overrideFun(unique, 350); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QByteArray>(callOverrideFun(fun, 350, args)); } return QDropEvent::encodedData(x1); }
    const char* format(int x1 = 0) const { void* fun = LObjects::overrideFun(unique, 351); if(fun) { const void* args[] = { &x1 }; return (const char*)qVariantValue<void*>(callOverrideFun(fun, 351, args)); } return QDropEvent::format(x1); }
    bool provides(const char* x1) const { void* fun = LObjects::overrideFun(unique, 352); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 352, args).toBool(); } return QDropEvent::provides(x1); }
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

    QIcon icon(IconType x1) const { void* fun = LObjects::overrideFun(unique, 353); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QIcon>(callOverrideFun(fun, 353, args)); } return QFileIconProvider::icon(x1); }
    QString type(const QFileInfo& x1) const { void* fun = LObjects::overrideFun(unique, 355); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QString>(callOverrideFun(fun, 355, args)); } return QFileIconProvider::type(x1); }
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

class LFontMetrics : public QFontMetrics {
    friend class N38;
public:
    LFontMetrics(uint u, const QFont& x1) : QFontMetrics(x1), unique(u) {}
    LFontMetrics(uint u, const QFont& x1, QPaintDevice* x2) : QFontMetrics(x1, x2), unique(u) {}
    LFontMetrics(uint u, const QFontMetrics& x1) : QFontMetrics(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGestureEvent : public QGestureEvent {
    friend class N45;
public:
    LGestureEvent(uint u, const QList<QGesture*>& x1) : QGestureEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGradient : public QGradient {
    friend class N46;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsAnchorLayout : public QGraphicsAnchorLayout {
    friend class N47;
public:
    LGraphicsAnchorLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsAnchorLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { void* fun = LObjects::overrideFun(unique, 145); if(fun) { return callOverrideFun(fun, 145, 0).toInt(); } return QGraphicsAnchorLayout::count(); }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { if(callOverrideFun(fun, 148, 0).toBool()) return; } QGraphicsAnchorLayout::invalidate(); }
    QGraphicsLayoutItem* itemAt(int x1) const { void* fun = LObjects::overrideFun(unique, 149); if(fun) { const void* args[] = { &x1 }; return (QGraphicsLayoutItem*)qVariantValue<void*>(callOverrideFun(fun, 149, args)); } return QGraphicsAnchorLayout::itemAt(x1); }
    void removeAt(int x1) { void* fun = LObjects::overrideFun(unique, 361); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 361, args).toBool()) return; } QGraphicsAnchorLayout::removeAt(x1); }
    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 211, args).toBool()) return; } QGraphicsAnchorLayout::setGeometry(x1); }
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { void* fun = LObjects::overrideFun(unique, 228); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } return QGraphicsAnchorLayout::sizeHint(x1, x2); }
    void widgetEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 362); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 362, args).toBool()) return; } QGraphicsAnchorLayout::widgetEvent(x1); }
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { if(callOverrideFun(fun, 242, 0).toBool()) return; } QGraphicsAnchorLayout::updateGeometry(); }
};

class LGraphicsEllipseItem : public QGraphicsEllipseItem {
    friend class N48;
public:
    LGraphicsEllipseItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsEllipseItem(x1), unique(u) {}
    LGraphicsEllipseItem(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) : QGraphicsEllipseItem(x1, x2), unique(u) {}
    LGraphicsEllipseItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsEllipseItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QGraphicsEllipseItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 247, args).toBool(); } return QGraphicsEllipseItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 248, args).toBool(); } return QGraphicsEllipseItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } return QGraphicsEllipseItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; } QGraphicsEllipseItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } return QGraphicsEllipseItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QGraphicsEllipseItem::type(); }
};

class LGraphicsGridLayout : public QGraphicsGridLayout {
    friend class N49;
public:
    LGraphicsGridLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsGridLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { void* fun = LObjects::overrideFun(unique, 145); if(fun) { return callOverrideFun(fun, 145, 0).toInt(); } return QGraphicsGridLayout::count(); }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { if(callOverrideFun(fun, 148, 0).toBool()) return; } QGraphicsGridLayout::invalidate(); }
    QGraphicsLayoutItem* itemAt(int x1) const { void* fun = LObjects::overrideFun(unique, 149); if(fun) { const void* args[] = { &x1 }; return (QGraphicsLayoutItem*)qVariantValue<void*>(callOverrideFun(fun, 149, args)); } return QGraphicsGridLayout::itemAt(x1); }
    void removeAt(int x1) { void* fun = LObjects::overrideFun(unique, 361); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 361, args).toBool()) return; } QGraphicsGridLayout::removeAt(x1); }
    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 211, args).toBool()) return; } QGraphicsGridLayout::setGeometry(x1); }
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { void* fun = LObjects::overrideFun(unique, 228); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } return QGraphicsGridLayout::sizeHint(x1, x2); }
    void widgetEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 362); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 362, args).toBool()) return; } QGraphicsGridLayout::widgetEvent(x1); }
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { if(callOverrideFun(fun, 242, 0).toBool()) return; } QGraphicsGridLayout::updateGeometry(); }
};

class LGraphicsItem : public QGraphicsItem {
    friend class N50;
public:
    LGraphicsItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 332); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 332, args).toBool()) return; } QGraphicsItem::advance(x1); }
    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QRectF(); }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 333); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 333, args).toBool(); } return QGraphicsItem::collidesWithItem(x1, x2); }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 334); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 334, args).toBool(); } return QGraphicsItem::collidesWithPath(x1, x2); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 247, args).toBool(); } return QGraphicsItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 248, args).toBool(); } return QGraphicsItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } return QGraphicsItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; }}
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } return QGraphicsItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QGraphicsItem::type(); }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 213, args).toBool()) return; } QGraphicsItem::contextMenuEvent(x1); }
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 214, args).toBool()) return; } QGraphicsItem::dragEnterEvent(x1); }
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 215, args).toBool()) return; } QGraphicsItem::dragLeaveEvent(x1); }
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 216, args).toBool()) return; } QGraphicsItem::dragMoveEvent(x1); }
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 217, args).toBool()) return; } QGraphicsItem::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QGraphicsItem::focusInEvent(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QGraphicsItem::focusOutEvent(x1); }
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 219, args).toBool()) return; } QGraphicsItem::hoverEnterEvent(x1); }
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 220, args).toBool()) return; } QGraphicsItem::hoverLeaveEvent(x1); }
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 221, args).toBool()) return; } QGraphicsItem::hoverMoveEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QGraphicsItem::inputMethodEvent(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QGraphicsItem::inputMethodQuery(x1); }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } return QGraphicsItem::itemChange(x1, x2); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QGraphicsItem::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QGraphicsItem::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 223, args).toBool()) return; } QGraphicsItem::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 224, args).toBool()) return; } QGraphicsItem::mouseMoveEvent(x1); }
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 225, args).toBool()) return; } QGraphicsItem::mousePressEvent(x1); }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 226, args).toBool()) return; } QGraphicsItem::mouseReleaseEvent(x1); }
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 241, args).toBool(); } return QGraphicsItem::sceneEvent(x1); }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 335); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 335, args).toBool(); } return QGraphicsItem::sceneEventFilter(x1, x2); }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 230, args).toBool()) return; } QGraphicsItem::wheelEvent(x1); }
};

class LGraphicsItemGroup : public QGraphicsItemGroup {
    friend class N51;
public:
    LGraphicsItemGroup(uint u, QGraphicsItem* x1 = 0) : QGraphicsItemGroup(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QGraphicsItemGroup::boundingRect(); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 248, args).toBool(); } return QGraphicsItemGroup::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } return QGraphicsItemGroup::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; } QGraphicsItemGroup::paint(x1, x2, x3); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QGraphicsItemGroup::type(); }
    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 332); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 332, args).toBool()) return; } QGraphicsItemGroup::advance(x1); }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 333); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 333, args).toBool(); } return QGraphicsItemGroup::collidesWithItem(x1, x2); }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 334); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 334, args).toBool(); } return QGraphicsItemGroup::collidesWithPath(x1, x2); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 247, args).toBool(); } return QGraphicsItemGroup::contains(x1); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } return QGraphicsItemGroup::shape(); }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 213, args).toBool()) return; } QGraphicsItemGroup::contextMenuEvent(x1); }
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 214, args).toBool()) return; } QGraphicsItemGroup::dragEnterEvent(x1); }
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 215, args).toBool()) return; } QGraphicsItemGroup::dragLeaveEvent(x1); }
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 216, args).toBool()) return; } QGraphicsItemGroup::dragMoveEvent(x1); }
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 217, args).toBool()) return; } QGraphicsItemGroup::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QGraphicsItemGroup::focusInEvent(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QGraphicsItemGroup::focusOutEvent(x1); }
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 219, args).toBool()) return; } QGraphicsItemGroup::hoverEnterEvent(x1); }
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 220, args).toBool()) return; } QGraphicsItemGroup::hoverLeaveEvent(x1); }
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 221, args).toBool()) return; } QGraphicsItemGroup::hoverMoveEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QGraphicsItemGroup::inputMethodEvent(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QGraphicsItemGroup::inputMethodQuery(x1); }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } return QGraphicsItemGroup::itemChange(x1, x2); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QGraphicsItemGroup::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QGraphicsItemGroup::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 223, args).toBool()) return; } QGraphicsItemGroup::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 224, args).toBool()) return; } QGraphicsItemGroup::mouseMoveEvent(x1); }
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 225, args).toBool()) return; } QGraphicsItemGroup::mousePressEvent(x1); }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 226, args).toBool()) return; } QGraphicsItemGroup::mouseReleaseEvent(x1); }
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 241, args).toBool(); } return QGraphicsItemGroup::sceneEvent(x1); }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 335); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 335, args).toBool(); } return QGraphicsItemGroup::sceneEventFilter(x1, x2); }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 230, args).toBool()) return; } QGraphicsItemGroup::wheelEvent(x1); }
};

class LGraphicsLayout : public QGraphicsLayout {
    friend class N52;
public:
    LGraphicsLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { void* fun = LObjects::overrideFun(unique, 145); if(fun) { return callOverrideFun(fun, 145, 0).toInt(); } return 0; }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { if(callOverrideFun(fun, 148, 0).toBool()) return; } QGraphicsLayout::invalidate(); }
    QGraphicsLayoutItem* itemAt(int x1) const { void* fun = LObjects::overrideFun(unique, 149); if(fun) { const void* args[] = { &x1 }; return (QGraphicsLayoutItem*)qVariantValue<void*>(callOverrideFun(fun, 149, args)); } return 0; }
    void removeAt(int x1) { void* fun = LObjects::overrideFun(unique, 361); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 361, args).toBool()) return; }}
    void widgetEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 362); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 362, args).toBool()) return; } QGraphicsLayout::widgetEvent(x1); }
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { if(callOverrideFun(fun, 242, 0).toBool()) return; } QGraphicsLayout::updateGeometry(); }
    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 211, args).toBool()) return; } QGraphicsLayout::setGeometry(x1); }
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { void* fun = LObjects::overrideFun(unique, 228); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } return QSizeF(); }
};

class LGraphicsLayoutItem : public QGraphicsLayoutItem {
    friend class N53;
public:
    LGraphicsLayoutItem(uint u, QGraphicsLayoutItem* x1 = 0, bool x2 = false) : QGraphicsLayoutItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 211, args).toBool()) return; } QGraphicsLayoutItem::setGeometry(x1); }
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { if(callOverrideFun(fun, 242, 0).toBool()) return; } QGraphicsLayoutItem::updateGeometry(); }
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { void* fun = LObjects::overrideFun(unique, 228); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } return QSizeF(); }
};

class LGraphicsLineItem : public QGraphicsLineItem {
    friend class N54;
public:
    LGraphicsLineItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsLineItem(x1), unique(u) {}
    LGraphicsLineItem(uint u, const QLineF& x1, QGraphicsItem* x2 = 0) : QGraphicsLineItem(x1, x2), unique(u) {}
    LGraphicsLineItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsLineItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QGraphicsLineItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 247, args).toBool(); } return QGraphicsLineItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 248, args).toBool(); } return QGraphicsLineItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } return QGraphicsLineItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; } QGraphicsLineItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } return QGraphicsLineItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QGraphicsLineItem::type(); }
    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 332); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 332, args).toBool()) return; } QGraphicsLineItem::advance(x1); }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 333); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 333, args).toBool(); } return QGraphicsLineItem::collidesWithItem(x1, x2); }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 334); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 334, args).toBool(); } return QGraphicsLineItem::collidesWithPath(x1, x2); }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 213, args).toBool()) return; } QGraphicsLineItem::contextMenuEvent(x1); }
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 214, args).toBool()) return; } QGraphicsLineItem::dragEnterEvent(x1); }
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 215, args).toBool()) return; } QGraphicsLineItem::dragLeaveEvent(x1); }
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 216, args).toBool()) return; } QGraphicsLineItem::dragMoveEvent(x1); }
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 217, args).toBool()) return; } QGraphicsLineItem::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QGraphicsLineItem::focusInEvent(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QGraphicsLineItem::focusOutEvent(x1); }
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 219, args).toBool()) return; } QGraphicsLineItem::hoverEnterEvent(x1); }
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 220, args).toBool()) return; } QGraphicsLineItem::hoverLeaveEvent(x1); }
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 221, args).toBool()) return; } QGraphicsLineItem::hoverMoveEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QGraphicsLineItem::inputMethodEvent(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QGraphicsLineItem::inputMethodQuery(x1); }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } return QGraphicsLineItem::itemChange(x1, x2); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QGraphicsLineItem::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QGraphicsLineItem::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 223, args).toBool()) return; } QGraphicsLineItem::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 224, args).toBool()) return; } QGraphicsLineItem::mouseMoveEvent(x1); }
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 225, args).toBool()) return; } QGraphicsLineItem::mousePressEvent(x1); }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 226, args).toBool()) return; } QGraphicsLineItem::mouseReleaseEvent(x1); }
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 241, args).toBool(); } return QGraphicsLineItem::sceneEvent(x1); }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 335); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 335, args).toBool(); } return QGraphicsLineItem::sceneEventFilter(x1, x2); }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 230, args).toBool()) return; } QGraphicsLineItem::wheelEvent(x1); }
};

class LGraphicsLinearLayout : public QGraphicsLinearLayout {
    friend class N55;
public:
    LGraphicsLinearLayout(uint u, QGraphicsLayoutItem* x1 = 0) : QGraphicsLinearLayout(x1), unique(u) {}
    LGraphicsLinearLayout(uint u, Qt::Orientation x1, QGraphicsLayoutItem* x2 = 0) : QGraphicsLinearLayout(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { void* fun = LObjects::overrideFun(unique, 145); if(fun) { return callOverrideFun(fun, 145, 0).toInt(); } return QGraphicsLinearLayout::count(); }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { if(callOverrideFun(fun, 148, 0).toBool()) return; } QGraphicsLinearLayout::invalidate(); }
    QGraphicsLayoutItem* itemAt(int x1) const { void* fun = LObjects::overrideFun(unique, 149); if(fun) { const void* args[] = { &x1 }; return (QGraphicsLayoutItem*)qVariantValue<void*>(callOverrideFun(fun, 149, args)); } return QGraphicsLinearLayout::itemAt(x1); }
    void removeAt(int x1) { void* fun = LObjects::overrideFun(unique, 361); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 361, args).toBool()) return; } QGraphicsLinearLayout::removeAt(x1); }
    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 211, args).toBool()) return; } QGraphicsLinearLayout::setGeometry(x1); }
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { void* fun = LObjects::overrideFun(unique, 228); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } return QGraphicsLinearLayout::sizeHint(x1, x2); }
    void widgetEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 362); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 362, args).toBool()) return; } QGraphicsLinearLayout::widgetEvent(x1); }
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { if(callOverrideFun(fun, 242, 0).toBool()) return; } QGraphicsLinearLayout::updateGeometry(); }
};

class LGraphicsPathItem : public QGraphicsPathItem {
    friend class N56;
public:
    LGraphicsPathItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPathItem(x1), unique(u) {}
    LGraphicsPathItem(uint u, const QPainterPath& x1, QGraphicsItem* x2 = 0) : QGraphicsPathItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QGraphicsPathItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 247, args).toBool(); } return QGraphicsPathItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 248, args).toBool(); } return QGraphicsPathItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } return QGraphicsPathItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; } QGraphicsPathItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } return QGraphicsPathItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QGraphicsPathItem::type(); }
};

class LGraphicsPixmapItem : public QGraphicsPixmapItem {
    friend class N57;
public:
    LGraphicsPixmapItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPixmapItem(x1), unique(u) {}
    LGraphicsPixmapItem(uint u, const QPixmap& x1, QGraphicsItem* x2 = 0) : QGraphicsPixmapItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QGraphicsPixmapItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 247, args).toBool(); } return QGraphicsPixmapItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 248, args).toBool(); } return QGraphicsPixmapItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } return QGraphicsPixmapItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; } QGraphicsPixmapItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } return QGraphicsPixmapItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QGraphicsPixmapItem::type(); }
    void advance(int x1) { void* fun = LObjects::overrideFun(unique, 332); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 332, args).toBool()) return; } QGraphicsPixmapItem::advance(x1); }
    bool collidesWithItem(const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 333); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 333, args).toBool(); } return QGraphicsPixmapItem::collidesWithItem(x1, x2); }
    bool collidesWithPath(const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { void* fun = LObjects::overrideFun(unique, 334); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 334, args).toBool(); } return QGraphicsPixmapItem::collidesWithPath(x1, x2); }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 213, args).toBool()) return; } QGraphicsPixmapItem::contextMenuEvent(x1); }
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 214, args).toBool()) return; } QGraphicsPixmapItem::dragEnterEvent(x1); }
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 215, args).toBool()) return; } QGraphicsPixmapItem::dragLeaveEvent(x1); }
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 216, args).toBool()) return; } QGraphicsPixmapItem::dragMoveEvent(x1); }
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 217, args).toBool()) return; } QGraphicsPixmapItem::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QGraphicsPixmapItem::focusInEvent(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QGraphicsPixmapItem::focusOutEvent(x1); }
    void hoverEnterEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 219); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 219, args).toBool()) return; } QGraphicsPixmapItem::hoverEnterEvent(x1); }
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 220, args).toBool()) return; } QGraphicsPixmapItem::hoverLeaveEvent(x1); }
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 221, args).toBool()) return; } QGraphicsPixmapItem::hoverMoveEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QGraphicsPixmapItem::inputMethodEvent(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QGraphicsPixmapItem::inputMethodQuery(x1); }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } return QGraphicsPixmapItem::itemChange(x1, x2); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QGraphicsPixmapItem::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QGraphicsPixmapItem::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 223, args).toBool()) return; } QGraphicsPixmapItem::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 224, args).toBool()) return; } QGraphicsPixmapItem::mouseMoveEvent(x1); }
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 225, args).toBool()) return; } QGraphicsPixmapItem::mousePressEvent(x1); }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 226, args).toBool()) return; } QGraphicsPixmapItem::mouseReleaseEvent(x1); }
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 241, args).toBool(); } return QGraphicsPixmapItem::sceneEvent(x1); }
    bool sceneEventFilter(QGraphicsItem* x1, QEvent* x2) { void* fun = LObjects::overrideFun(unique, 335); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 335, args).toBool(); } return QGraphicsPixmapItem::sceneEventFilter(x1, x2); }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 230, args).toBool()) return; } QGraphicsPixmapItem::wheelEvent(x1); }
};

class LGraphicsPolygonItem : public QGraphicsPolygonItem {
    friend class N58;
public:
    LGraphicsPolygonItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsPolygonItem(x1), unique(u) {}
    LGraphicsPolygonItem(uint u, const QPolygonF& x1, QGraphicsItem* x2 = 0) : QGraphicsPolygonItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QGraphicsPolygonItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 247, args).toBool(); } return QGraphicsPolygonItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 248, args).toBool(); } return QGraphicsPolygonItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } return QGraphicsPolygonItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; } QGraphicsPolygonItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } return QGraphicsPolygonItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QGraphicsPolygonItem::type(); }
};

class LGraphicsRectItem : public QGraphicsRectItem {
    friend class N59;
public:
    LGraphicsRectItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsRectItem(x1), unique(u) {}
    LGraphicsRectItem(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) : QGraphicsRectItem(x1, x2), unique(u) {}
    LGraphicsRectItem(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) : QGraphicsRectItem(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QGraphicsRectItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 247, args).toBool(); } return QGraphicsRectItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 248, args).toBool(); } return QGraphicsRectItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } return QGraphicsRectItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; } QGraphicsRectItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } return QGraphicsRectItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QGraphicsRectItem::type(); }
};

class LGraphicsSceneContextMenuEvent : public QGraphicsSceneContextMenuEvent {
    friend class N60;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneDragDropEvent : public QGraphicsSceneDragDropEvent {
    friend class N61;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneEvent : public QGraphicsSceneEvent {
    friend class N62;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneHelpEvent : public QGraphicsSceneHelpEvent {
    friend class N63;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneHoverEvent : public QGraphicsSceneHoverEvent {
    friend class N64;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneMouseEvent : public QGraphicsSceneMouseEvent {
    friend class N65;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneMoveEvent : public QGraphicsSceneMoveEvent {
    friend class N66;
public:
    LGraphicsSceneMoveEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneResizeEvent : public QGraphicsSceneResizeEvent {
    friend class N67;
public:
    LGraphicsSceneResizeEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSceneWheelEvent : public QGraphicsSceneWheelEvent {
    friend class N68;
public:

    static NumList overrideIds;
    uint unique;
};

class LGraphicsSimpleTextItem : public QGraphicsSimpleTextItem {
    friend class N69;
public:
    LGraphicsSimpleTextItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsSimpleTextItem(x1), unique(u) {}
    LGraphicsSimpleTextItem(uint u, const QString& x1, QGraphicsItem* x2 = 0) : QGraphicsSimpleTextItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QGraphicsSimpleTextItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 247, args).toBool(); } return QGraphicsSimpleTextItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 248, args).toBool(); } return QGraphicsSimpleTextItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void* fun = LObjects::overrideFun(unique, 249); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 249, 0)); } return QGraphicsSimpleTextItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; } QGraphicsSimpleTextItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } return QGraphicsSimpleTextItem::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QGraphicsSimpleTextItem::type(); }
};

class LHelpEvent : public QHelpEvent {
    friend class N71;
public:
    LHelpEvent(uint u, Type x1, const QPoint& x2, const QPoint& x3) : QHelpEvent(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LHideEvent : public QHideEvent {
    friend class N73;
public:
    LHideEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LHoverEvent : public QHoverEvent {
    friend class N76;
public:
    LHoverEvent(uint u, Type x1, const QPoint& x2, const QPoint& x3) : QHoverEvent(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LIcon : public QIcon {
    friend class N77;
public:
    LIcon(uint u) : unique(u) {}
    LIcon(uint u, const QPixmap& x1) : QIcon(x1), unique(u) {}
    LIcon(uint u, const QIcon& x1) : QIcon(x1), unique(u) {}
    LIcon(uint u, const QString& x1) : QIcon(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LIconDragEvent : public QIconDragEvent {
    friend class N78;
public:
    LIconDragEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LImage : public QImage {
    friend class N79;
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

    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QImage::metric(x1); }
};

class LInputEvent : public QInputEvent {
    friend class N80;
public:

    static NumList overrideIds;
    uint unique;
};

class LInputMethodEvent : public QInputMethodEvent {
    friend class N81;
public:
    LInputMethodEvent(uint u) : unique(u) {}
    LInputMethodEvent(uint u, const QInputMethodEvent& x1) : QInputMethodEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LItemEditorFactory : public QItemEditorFactory {
    friend class N82;
public:
    LItemEditorFactory(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QWidget* createEditor(QVariant::Type x1, QWidget* x2) const { void* fun = LObjects::overrideFun(unique, 363); if(fun) { const void* args[] = { &x1, &x2 }; return (QWidget*)qVariantValue<void*>(callOverrideFun(fun, 363, args)); } return QItemEditorFactory::createEditor(x1, x2); }
    QByteArray valuePropertyName(QVariant::Type x1) const { void* fun = LObjects::overrideFun(unique, 364); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QByteArray>(callOverrideFun(fun, 364, args)); } return QItemEditorFactory::valuePropertyName(x1); }
};

class LItemSelection : public QItemSelection {
    friend class N83;
public:
    LItemSelection(uint u) : unique(u) {}
    LItemSelection(uint u, const QModelIndex& x1, const QModelIndex& x2) : QItemSelection(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LItemSelectionRange : public QItemSelectionRange {
    friend class N84;
public:
    LItemSelectionRange(uint u) : unique(u) {}
    LItemSelectionRange(uint u, const QItemSelectionRange& x1) : QItemSelectionRange(x1), unique(u) {}
    LItemSelectionRange(uint u, const QModelIndex& x1, const QModelIndex& x2) : QItemSelectionRange(x1, x2), unique(u) {}
    LItemSelectionRange(uint u, const QModelIndex& x1) : QItemSelectionRange(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LKeyEvent : public QKeyEvent {
    friend class N85;
public:
    LKeyEvent(uint u, Type x1, int x2, Qt::KeyboardModifiers x3, const QString& x4 = QString(), bool x5 = false, ushort x6 = 1) : QKeyEvent(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LKeySequence : public QKeySequence {
    friend class N86;
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
    friend class N87;
public:
    LLayoutItem(uint u, Qt::Alignment x1 = 0) : QLayoutItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    Qt::Orientations expandingDirections() const { void* fun = LObjects::overrideFun(unique, 146); if(fun) { return (Qt::Orientations)callOverrideFun(fun, 146, 0).toInt(); } return Qt::Orientations(); }
    QRect geometry() const { void* fun = LObjects::overrideFun(unique, 156); if(fun) { return qVariantValue<QRect>(callOverrideFun(fun, 156, 0)); } return QRect(); }
    bool hasHeightForWidth() const { void* fun = LObjects::overrideFun(unique, 147); if(fun) { return callOverrideFun(fun, 147, 0).toBool(); } return QLayoutItem::hasHeightForWidth(); }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 22, args).toInt(); } return QLayoutItem::heightForWidth(x1); }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { if(callOverrideFun(fun, 148, 0).toBool()) return; } QLayoutItem::invalidate(); }
    bool isEmpty() const { void* fun = LObjects::overrideFun(unique, 157); if(fun) { return callOverrideFun(fun, 157, 0).toBool(); } return false; }
    QLayout* layout() { void* fun = LObjects::overrideFun(unique, 158); if(fun) { return (QLayout*)qVariantValue<void*>(callOverrideFun(fun, 158, 0)); } return QLayoutItem::layout(); }
    QSize maximumSize() const { void* fun = LObjects::overrideFun(unique, 150); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 150, 0)); } return QSize(); }
    int minimumHeightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 151); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 151, args).toInt(); } return QLayoutItem::minimumHeightForWidth(x1); }
    QSize minimumSize() const { void* fun = LObjects::overrideFun(unique, 152); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 152, 0)); } return QSize(); }
    void setGeometry(const QRect& x1) { void* fun = LObjects::overrideFun(unique, 153); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 153, args).toBool()) return; }}
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return QSize(); }
    QSpacerItem* spacerItem() { void* fun = LObjects::overrideFun(unique, 365); if(fun) { return (QSpacerItem*)qVariantValue<void*>(callOverrideFun(fun, 365, 0)); } return QLayoutItem::spacerItem(); }
    QWidget* widget() { void* fun = LObjects::overrideFun(unique, 366); if(fun) { return (QWidget*)qVariantValue<void*>(callOverrideFun(fun, 366, 0)); } return QLayoutItem::widget(); }
};

class LLibraryInfo : public QLibraryInfo {
    friend class N88;
public:

    static NumList overrideIds;
    uint unique;
};

class LLinearGradient : public QLinearGradient {
    friend class N89;
public:
    LLinearGradient(uint u) : unique(u) {}
    LLinearGradient(uint u, const QPointF& x1, const QPointF& x2) : QLinearGradient(x1, x2), unique(u) {}
    LLinearGradient(uint u, qreal x1, qreal x2, qreal x3, qreal x4) : QLinearGradient(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LListWidgetItem : public QListWidgetItem {
    friend class N90;
public:
    LListWidgetItem(uint u, QListWidget* x1 = 0, int x2 = Type) : QListWidgetItem(x1, x2), unique(u) {}
    LListWidgetItem(uint u, const QString& x1, QListWidget* x2 = 0, int x3 = Type) : QListWidgetItem(x1, x2, x3), unique(u) {}
    LListWidgetItem(uint u, const QIcon& x1, const QString& x2, QListWidget* x3 = 0, int x4 = Type) : QListWidgetItem(x1, x2, x3, x4), unique(u) {}
    LListWidgetItem(uint u, const QListWidgetItem& x1) : QListWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QListWidgetItem* clone() const { void* fun = LObjects::overrideFun(unique, 367); if(fun) { return (QListWidgetItem*)qVariantValue<void*>(callOverrideFun(fun, 367, 0)); } return QListWidgetItem::clone(); }
    QVariant data(int x1) const { void* fun = LObjects::overrideFun(unique, 368); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 368, args)); } return QListWidgetItem::data(x1); }
    void setData(int x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 369); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 369, args).toBool()) return; } QListWidgetItem::setData(x1, x2); }
};

class LLocale : public QLocale {
    friend class N91;
public:
    LLocale(uint u) : unique(u) {}
    LLocale(uint u, const QString& x1) : QLocale(x1), unique(u) {}
    LLocale(uint u, Language x1, Country x2 = AnyCountry) : QLocale(x1, x2), unique(u) {}
    LLocale(uint u, const QLocale& x1) : QLocale(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMargins : public QMargins {
    friend class N92;
public:
    LMargins(uint u) : unique(u) {}
    LMargins(uint u, int x1, int x2, int x3, int x4) : QMargins(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMatrix : public QMatrix {
    friend class N93;
public:
    LMatrix(uint u) : unique(u) {}
    LMatrix(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) : QMatrix(x1, x2, x3, x4, x5, x6), unique(u) {}
    LMatrix(uint u, const QMatrix& x1) : QMatrix(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMatrix4x4 : public QMatrix4x4 {
    friend class N94;
public:
    LMatrix4x4(uint u) : unique(u) {}
    LMatrix4x4(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, qreal x7, qreal x8, qreal x9, qreal x10, qreal x11, qreal x12, qreal x13, qreal x14, qreal x15, qreal x16) : QMatrix4x4(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16), unique(u) {}
    LMatrix4x4(uint u, const QTransform& x1) : QMatrix4x4(x1), unique(u) {}
    LMatrix4x4(uint u, const QMatrix& x1) : QMatrix4x4(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMetaObject : public QMetaObject {
    friend class N95;
public:

    static NumList overrideIds;
    uint unique;
};

class LModelIndex : public QModelIndex {
    friend class N96;
public:
    LModelIndex(uint u) : unique(u) {}
    LModelIndex(uint u, const QModelIndex& x1) : QModelIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMouseEvent : public QMouseEvent {
    friend class N97;
public:
    LMouseEvent(uint u, Type x1, const QPoint& x2, Qt::MouseButton x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5) : QMouseEvent(x1, x2, x3, x4, x5), unique(u) {}
    LMouseEvent(uint u, Type x1, const QPoint& x2, const QPoint& x3, Qt::MouseButton x4, Qt::MouseButtons x5, Qt::KeyboardModifiers x6) : QMouseEvent(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMoveEvent : public QMoveEvent {
    friend class N98;
public:
    LMoveEvent(uint u, const QPoint& x1, const QPoint& x2) : QMoveEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMutex : public QMutex {
    friend class N99;
public:
    LMutex(uint u, RecursionMode x1 = NonRecursive) : QMutex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LMutexLocker : public QMutexLocker {
    friend class N100;
public:
    LMutexLocker(uint u, QMutex* x1) : QMutexLocker(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPaintEvent : public QPaintEvent {
    friend class N110;
public:
    LPaintEvent(uint u, const QRegion& x1) : QPaintEvent(x1), unique(u) {}
    LPaintEvent(uint u, const QRect& x1) : QPaintEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPainter : public QPainter {
    friend class N111;
public:
    LPainter(uint u) : unique(u) {}
    LPainter(uint u, QPaintDevice* x1) : QPainter(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPainterPath : public QPainterPath {
    friend class N112;
public:
    LPainterPath(uint u) : unique(u) {}
    LPainterPath(uint u, const QPointF& x1) : QPainterPath(x1), unique(u) {}
    LPainterPath(uint u, const QPainterPath& x1) : QPainterPath(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPainterPathStroker : public QPainterPathStroker {
    friend class N113;
public:
    LPainterPathStroker(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPalette : public QPalette {
    friend class N114;
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
    friend class N115;
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
    friend class N116;
public:
    LPersistentModelIndex(uint u, const QModelIndex& x1) : QPersistentModelIndex(x1), unique(u) {}
    LPersistentModelIndex(uint u, const QPersistentModelIndex& x1) : QPersistentModelIndex(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LPicture : public QPicture {
    friend class N117;
public:
    LPicture(uint u, int x1 = -1) : QPicture(x1), unique(u) {}
    LPicture(uint u, const QPicture& x1) : QPicture(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setData(const char* x1, uint x2) { void* fun = LObjects::overrideFun(unique, 371); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 371, args).toBool()) return; } QPicture::setData(x1, x2); }
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QPicture::metric(x1); }
};

class LPixmap : public QPixmap {
    friend class N118;
public:
    LPixmap(uint u) : unique(u) {}
    LPixmap(uint u, int x1, int x2) : QPixmap(x1, x2), unique(u) {}
    LPixmap(uint u, const QString& x1, const char* x2 = 0, Qt::ImageConversionFlags x3 = Qt::AutoColor) : QPixmap(x1, x2, x3), unique(u) {}
    LPixmap(uint u, const QPixmap& x1) : QPixmap(x1), unique(u) {}
    LPixmap(uint u, const QSize& x1) : QPixmap(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QPixmap::metric(x1); }
};

class LPixmapCache : public QPixmapCache {
    friend class N119;
public:

    static NumList overrideIds;
    uint unique;
};

class LPrinter : public QPrinter {
    friend class N120;
public:
    LPrinter(uint u, PrinterMode x1 = ScreenResolution) : QPrinter(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QPrinter::metric(x1); }
};

class LPrinterInfo : public QPrinterInfo {
    friend class N121;
public:

    static NumList overrideIds;
    uint unique;
};

class LProcessEnvironment : public QProcessEnvironment {
    friend class N122;
public:
    LProcessEnvironment(uint u) : unique(u) {}
    LProcessEnvironment(uint u, const QProcessEnvironment& x1) : QProcessEnvironment(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LQuaternion : public QQuaternion {
    friend class N123;
public:
    LQuaternion(uint u) : unique(u) {}
    LQuaternion(uint u, qreal x1, qreal x2, qreal x3, qreal x4) : QQuaternion(x1, x2, x3, x4), unique(u) {}
    LQuaternion(uint u, qreal x1, const QVector3D& x2) : QQuaternion(x1, x2), unique(u) {}
    LQuaternion(uint u, const QVector4D& x1) : QQuaternion(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRadialGradient : public QRadialGradient {
    friend class N124;
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
    friend class N125;
public:
    LReadLocker(uint u, QReadWriteLock* x1) : QReadLocker(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LReadWriteLock : public QReadWriteLock {
    friend class N126;
public:
    LReadWriteLock(uint u) : unique(u) {}
    LReadWriteLock(uint u, RecursionMode x1) : QReadWriteLock(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRegExp : public QRegExp {
    friend class N127;
public:
    LRegExp(uint u) : unique(u) {}
    LRegExp(uint u, const QString& x1, Qt::CaseSensitivity x2 = Qt::CaseSensitive, PatternSyntax x3 = RegExp) : QRegExp(x1, x2, x3), unique(u) {}
    LRegExp(uint u, const QRegExp& x1) : QRegExp(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRegion : public QRegion {
    friend class N128;
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
    friend class N129;
public:
    LResizeEvent(uint u, const QSize& x1, const QSize& x2) : QResizeEvent(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LRunnable : public QRunnable {
    friend class N130;
public:
    LRunnable(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    void run() { void* fun = LObjects::overrideFun(unique, 315); if(fun) { if(callOverrideFun(fun, 315, 0).toBool()) return; }}
};

class LSemaphore : public QSemaphore {
    friend class N131;
public:
    LSemaphore(uint u, int x1 = 0) : QSemaphore(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LShortcutEvent : public QShortcutEvent {
    friend class N132;
public:
    LShortcutEvent(uint u, const QKeySequence& x1, int x2, bool x3 = false) : QShortcutEvent(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LShowEvent : public QShowEvent {
    friend class N133;
public:
    LShowEvent(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSizePolicy : public QSizePolicy {
    friend class N134;
public:
    LSizePolicy(uint u) : unique(u) {}
    LSizePolicy(uint u, Policy x1, Policy x2) : QSizePolicy(x1, x2), unique(u) {}
    LSizePolicy(uint u, Policy x1, Policy x2, ControlType x3) : QSizePolicy(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSpacerItem : public QSpacerItem {
    friend class N135;
public:
    LSpacerItem(uint u, int x1, int x2, QSizePolicy::Policy x3 = QSizePolicy::Minimum, QSizePolicy::Policy x4 = QSizePolicy::Minimum) : QSpacerItem(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    Qt::Orientations expandingDirections() const { void* fun = LObjects::overrideFun(unique, 146); if(fun) { return (Qt::Orientations)callOverrideFun(fun, 146, 0).toInt(); } return QSpacerItem::expandingDirections(); }
    QRect geometry() const { void* fun = LObjects::overrideFun(unique, 156); if(fun) { return qVariantValue<QRect>(callOverrideFun(fun, 156, 0)); } return QSpacerItem::geometry(); }
    bool isEmpty() const { void* fun = LObjects::overrideFun(unique, 157); if(fun) { return callOverrideFun(fun, 157, 0).toBool(); } return QSpacerItem::isEmpty(); }
    QSize maximumSize() const { void* fun = LObjects::overrideFun(unique, 150); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 150, 0)); } return QSpacerItem::maximumSize(); }
    QSize minimumSize() const { void* fun = LObjects::overrideFun(unique, 152); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 152, 0)); } return QSpacerItem::minimumSize(); }
    void setGeometry(const QRect& x1) { void* fun = LObjects::overrideFun(unique, 153); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 153, args).toBool()) return; } QSpacerItem::setGeometry(x1); }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return QSpacerItem::sizeHint(); }
    QSpacerItem* spacerItem() { void* fun = LObjects::overrideFun(unique, 365); if(fun) { return (QSpacerItem*)qVariantValue<void*>(callOverrideFun(fun, 365, 0)); } return QSpacerItem::spacerItem(); }
    bool hasHeightForWidth() const { void* fun = LObjects::overrideFun(unique, 147); if(fun) { return callOverrideFun(fun, 147, 0).toBool(); } return QSpacerItem::hasHeightForWidth(); }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 22, args).toInt(); } return QSpacerItem::heightForWidth(x1); }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { if(callOverrideFun(fun, 148, 0).toBool()) return; } QSpacerItem::invalidate(); }
    QLayout* layout() { void* fun = LObjects::overrideFun(unique, 158); if(fun) { return (QLayout*)qVariantValue<void*>(callOverrideFun(fun, 158, 0)); } return QSpacerItem::layout(); }
    int minimumHeightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 151); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 151, args).toInt(); } return QSpacerItem::minimumHeightForWidth(x1); }
    QWidget* widget() { void* fun = LObjects::overrideFun(unique, 366); if(fun) { return (QWidget*)qVariantValue<void*>(callOverrideFun(fun, 366, 0)); } return QSpacerItem::widget(); }
};

class LStandardItem : public QStandardItem {
    friend class N141;
public:
    LStandardItem(uint u) : unique(u) {}
    LStandardItem(uint u, const QString& x1) : QStandardItem(x1), unique(u) {}
    LStandardItem(uint u, const QIcon& x1, const QString& x2) : QStandardItem(x1, x2), unique(u) {}
    LStandardItem(uint u, int x1, int x2 = 1) : QStandardItem(x1, x2), unique(u) {}
    LStandardItem(uint u, const QStandardItem& x1) : QStandardItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QStandardItem* clone() const { void* fun = LObjects::overrideFun(unique, 367); if(fun) { return (QStandardItem*)qVariantValue<void*>(callOverrideFun(fun, 367, 0)); } return QStandardItem::clone(); }
    QVariant data(int x1 = Qt::UserRole+1) const { void* fun = LObjects::overrideFun(unique, 368); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 368, args)); } return QStandardItem::data(x1); }
    void setData(const QVariant& x1, int x2 = Qt::UserRole+1) { void* fun = LObjects::overrideFun(unique, 372); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 372, args).toBool()) return; } QStandardItem::setData(x1, x2); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QStandardItem::type(); }
};

class LStatusTipEvent : public QStatusTipEvent {
    friend class N142;
public:
    LStatusTipEvent(uint u, const QString& x1) : QStatusTipEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LSystemSemaphore : public QSystemSemaphore {
    friend class N144;
public:
    LSystemSemaphore(uint u, const QString& x1, int x2 = 0, AccessMode x3 = Open) : QSystemSemaphore(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTableWidgetItem : public QTableWidgetItem {
    friend class N145;
public:
    LTableWidgetItem(uint u, int x1 = Type) : QTableWidgetItem(x1), unique(u) {}
    LTableWidgetItem(uint u, const QString& x1, int x2 = Type) : QTableWidgetItem(x1, x2), unique(u) {}
    LTableWidgetItem(uint u, const QIcon& x1, const QString& x2, int x3 = Type) : QTableWidgetItem(x1, x2, x3), unique(u) {}
    LTableWidgetItem(uint u, const QTableWidgetItem& x1) : QTableWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QTableWidgetItem* clone() const { void* fun = LObjects::overrideFun(unique, 367); if(fun) { return (QTableWidgetItem*)qVariantValue<void*>(callOverrideFun(fun, 367, 0)); } return QTableWidgetItem::clone(); }
    QVariant data(int x1) const { void* fun = LObjects::overrideFun(unique, 368); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 368, args)); } return QTableWidgetItem::data(x1); }
    void setData(int x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 369); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 369, args).toBool()) return; } QTableWidgetItem::setData(x1, x2); }
};

class LTableWidgetSelectionRange : public QTableWidgetSelectionRange {
    friend class N146;
public:
    LTableWidgetSelectionRange(uint u) : unique(u) {}
    LTableWidgetSelectionRange(uint u, int x1, int x2, int x3, int x4) : QTableWidgetSelectionRange(x1, x2, x3, x4), unique(u) {}
    LTableWidgetSelectionRange(uint u, const QTableWidgetSelectionRange& x1) : QTableWidgetSelectionRange(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTabletEvent : public QTabletEvent {
    friend class N147;
public:
    LTabletEvent(uint u, Type x1, const QPoint& x2, const QPoint& x3, const QPointF& x4, int x5, int x6, qreal x7, int x8, int x9, qreal x10, qreal x11, int x12, Qt::KeyboardModifiers x13, qint64 x14) : QTabletEvent(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextBlock : public QTextBlock {
    friend class N148;
public:
    LTextBlock(uint u, const QTextBlock& x1) : QTextBlock(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextBlockFormat : public QTextBlockFormat {
    friend class N149;
public:
    LTextBlockFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextBlockUserData : public QTextBlockUserData {
    friend class N150;
public:

    static NumList overrideIds;
    uint unique;
};

class LTextBoundaryFinder : public QTextBoundaryFinder {
    friend class N151;
public:
    LTextBoundaryFinder(uint u) : unique(u) {}
    LTextBoundaryFinder(uint u, const QTextBoundaryFinder& x1) : QTextBoundaryFinder(x1), unique(u) {}
    LTextBoundaryFinder(uint u, BoundaryType x1, const QString& x2) : QTextBoundaryFinder(x1, x2), unique(u) {}
    LTextBoundaryFinder(uint u, BoundaryType x1, const QChar* x2, int x3, uchar* x4 = 0, int x5 = 0) : QTextBoundaryFinder(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextCharFormat : public QTextCharFormat {
    friend class N152;
public:
    LTextCharFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextCodec : public QTextCodec {
    friend class N153;
public:
    LTextCodec(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QList<QByteArray> aliases() const { void* fun = LObjects::overrideFun(unique, 374); if(fun) { return qVariantValue<QList<QByteArray> >(callOverrideFun(fun, 374, 0)); } return QTextCodec::aliases(); }
    int mibEnum() const { void* fun = LObjects::overrideFun(unique, 375); if(fun) { return callOverrideFun(fun, 375, 0).toInt(); } return 0; }
    QByteArray name() const { void* fun = LObjects::overrideFun(unique, 376); if(fun) { return qVariantValue<QByteArray>(callOverrideFun(fun, 376, 0)); } return QByteArray(); }
    QByteArray convertFromUnicode(const QChar* x1, int x2, ConverterState* x3) const { void* fun = LObjects::overrideFun(unique, 377); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return qVariantValue<QByteArray>(callOverrideFun(fun, 377, args)); } return QByteArray(); }
    QString convertToUnicode(const char* x1, int x2, ConverterState* x3) const { void* fun = LObjects::overrideFun(unique, 378); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return qVariantValue<QString>(callOverrideFun(fun, 378, args)); } return QString(); }
};

class LTextCursor : public QTextCursor {
    friend class N154;
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
    friend class N155;
public:
    LTextDecoder(uint u, const QTextCodec* x1) : QTextDecoder(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextDocumentFragment : public QTextDocumentFragment {
    friend class N156;
public:
    LTextDocumentFragment(uint u) : unique(u) {}
    LTextDocumentFragment(uint u, const QTextDocument* x1) : QTextDocumentFragment(x1), unique(u) {}
    LTextDocumentFragment(uint u, const QTextCursor& x1) : QTextDocumentFragment(x1), unique(u) {}
    LTextDocumentFragment(uint u, const QTextDocumentFragment& x1) : QTextDocumentFragment(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextDocumentWriter : public QTextDocumentWriter {
    friend class N157;
public:
    LTextDocumentWriter(uint u) : unique(u) {}
    LTextDocumentWriter(uint u, const QString& x1, const QByteArray& x2 = QByteArray()) : QTextDocumentWriter(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextEncoder : public QTextEncoder {
    friend class N158;
public:
    LTextEncoder(uint u, const QTextCodec* x1) : QTextEncoder(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextFormat : public QTextFormat {
    friend class N159;
public:
    LTextFormat(uint u) : unique(u) {}
    LTextFormat(uint u, int x1) : QTextFormat(x1), unique(u) {}
    LTextFormat(uint u, const QTextFormat& x1) : QTextFormat(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextFragment : public QTextFragment {
    friend class N160;
public:
    LTextFragment(uint u) : unique(u) {}
    LTextFragment(uint u, const QTextFragment& x1) : QTextFragment(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextFrameFormat : public QTextFrameFormat {
    friend class N161;
public:
    LTextFrameFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextImageFormat : public QTextImageFormat {
    friend class N162;
public:
    LTextImageFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextLayout : public QTextLayout {
    friend class N163;
public:

    static NumList overrideIds;
    uint unique;
};

class LTextLength : public QTextLength {
    friend class N164;
public:
    LTextLength(uint u) : unique(u) {}
    LTextLength(uint u, Type x1, qreal x2) : QTextLength(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextLine : public QTextLine {
    friend class N165;
public:
    LTextLine(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextListFormat : public QTextListFormat {
    friend class N166;
public:
    LTextListFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextOption : public QTextOption {
    friend class N167;
public:
    LTextOption(uint u) : unique(u) {}
    LTextOption(uint u, Qt::Alignment x1) : QTextOption(x1), unique(u) {}
    LTextOption(uint u, const QTextOption& x1) : QTextOption(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableCell : public QTextTableCell {
    friend class N168;
public:
    LTextTableCell(uint u) : unique(u) {}
    LTextTableCell(uint u, const QTextTableCell& x1) : QTextTableCell(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableCellFormat : public QTextTableCellFormat {
    friend class N169;
public:
    LTextTableCellFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTextTableFormat : public QTextTableFormat {
    friend class N170;
public:
    LTextTableFormat(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTime : public QTime {
    friend class N171;
public:
    LTime(uint u) : unique(u) {}
    LTime(uint u, int x1, int x2, int x3 = 0, int x4 = 0) : QTime(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTimerEvent : public QTimerEvent {
    friend class N172;
public:
    LTimerEvent(uint u, int x1) : QTimerEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LToolTip : public QToolTip {
    friend class N173;
public:

    static NumList overrideIds;
    uint unique;
};

class LTouchEvent : public QTouchEvent {
    friend class N174;
public:
    LTouchEvent(uint u, QEvent::Type x1, QTouchEvent::DeviceType x2 = TouchScreen, Qt::KeyboardModifiers x3 = Qt::NoModifier, Qt::TouchPointStates x4 = 0, const QList<QTouchEvent::TouchPoint>& x5 = QList<QTouchEvent::TouchPoint>()) : QTouchEvent(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTransform : public QTransform {
    friend class N175;
public:
    LTransform(uint u) : unique(u) {}
    LTransform(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, qreal x7, qreal x8, qreal x9 = 1.0) : QTransform(x1, x2, x3, x4, x5, x6, x7, x8, x9), unique(u) {}
    LTransform(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) : QTransform(x1, x2, x3, x4, x5, x6), unique(u) {}
    LTransform(uint u, const QMatrix& x1) : QTransform(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LTreeWidgetItem : public QTreeWidgetItem {
    friend class N176;
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

    QTreeWidgetItem* clone() const { void* fun = LObjects::overrideFun(unique, 367); if(fun) { return (QTreeWidgetItem*)qVariantValue<void*>(callOverrideFun(fun, 367, 0)); } return QTreeWidgetItem::clone(); }
    QVariant data(int x1, int x2) const { void* fun = LObjects::overrideFun(unique, 379); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(fun, 379, args)); } return QTreeWidgetItem::data(x1, x2); }
    void setData(int x1, int x2, const QVariant& x3) { void* fun = LObjects::overrideFun(unique, 380); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 380, args).toBool()) return; } QTreeWidgetItem::setData(x1, x2, x3); }
};

class LUndoCommand : public QUndoCommand {
    friend class N177;
public:
    LUndoCommand(uint u, QUndoCommand* x1 = 0) : QUndoCommand(x1), unique(u) {}
    LUndoCommand(uint u, const QString& x1, QUndoCommand* x2 = 0) : QUndoCommand(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int id() const { void* fun = LObjects::overrideFun(unique, 381); if(fun) { return callOverrideFun(fun, 381, 0).toInt(); } return QUndoCommand::id(); }
    bool mergeWith(const QUndoCommand* x1) { void* fun = LObjects::overrideFun(unique, 382); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 382, args).toBool(); } return QUndoCommand::mergeWith(x1); }
    void redo() { void* fun = LObjects::overrideFun(unique, 383); if(fun) { if(callOverrideFun(fun, 383, 0).toBool()) return; } QUndoCommand::redo(); }
    void undo() { void* fun = LObjects::overrideFun(unique, 384); if(fun) { if(callOverrideFun(fun, 384, 0).toBool()) return; } QUndoCommand::undo(); }
};

class LUrl : public QUrl {
    friend class N178;
public:
    LUrl(uint u) : unique(u) {}
    LUrl(uint u, const QString& x1) : QUrl(x1), unique(u) {}
    LUrl(uint u, const QUrl& x1) : QUrl(x1), unique(u) {}
    LUrl(uint u, const QString& x1, ParsingMode x2) : QUrl(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LVariant : public QVariant {
    friend class N180;
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
    friend class N181;
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
    friend class N182;
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
    friend class N183;
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

class LWaitCondition : public QWaitCondition {
    friend class N184;
public:
    LWaitCondition(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWhatsThis : public QWhatsThis {
    friend class N185;
public:

    static NumList overrideIds;
    uint unique;
};

class LWhatsThisClickedEvent : public QWhatsThisClickedEvent {
    friend class N186;
public:
    LWhatsThisClickedEvent(uint u, const QString& x1) : QWhatsThisClickedEvent(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWheelEvent : public QWheelEvent {
    friend class N187;
public:
    LWheelEvent(uint u, const QPoint& x1, int x2, Qt::MouseButtons x3, Qt::KeyboardModifiers x4, Qt::Orientation x5 = Qt::Vertical) : QWheelEvent(x1, x2, x3, x4, x5), unique(u) {}
    LWheelEvent(uint u, const QPoint& x1, const QPoint& x2, int x3, Qt::MouseButtons x4, Qt::KeyboardModifiers x5, Qt::Orientation x6 = Qt::Vertical) : QWheelEvent(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LWidgetItem : public QWidgetItem {
    friend class N188;
public:
    LWidgetItem(uint u, QWidget* x1) : QWidgetItem(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    Qt::Orientations expandingDirections() const { void* fun = LObjects::overrideFun(unique, 146); if(fun) { return (Qt::Orientations)callOverrideFun(fun, 146, 0).toInt(); } return QWidgetItem::expandingDirections(); }
    QRect geometry() const { void* fun = LObjects::overrideFun(unique, 156); if(fun) { return qVariantValue<QRect>(callOverrideFun(fun, 156, 0)); } return QWidgetItem::geometry(); }
    bool hasHeightForWidth() const { void* fun = LObjects::overrideFun(unique, 147); if(fun) { return callOverrideFun(fun, 147, 0).toBool(); } return QWidgetItem::hasHeightForWidth(); }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 22, args).toInt(); } return QWidgetItem::heightForWidth(x1); }
    bool isEmpty() const { void* fun = LObjects::overrideFun(unique, 157); if(fun) { return callOverrideFun(fun, 157, 0).toBool(); } return QWidgetItem::isEmpty(); }
    QSize maximumSize() const { void* fun = LObjects::overrideFun(unique, 150); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 150, 0)); } return QWidgetItem::maximumSize(); }
    QSize minimumSize() const { void* fun = LObjects::overrideFun(unique, 152); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 152, 0)); } return QWidgetItem::minimumSize(); }
    void setGeometry(const QRect& x1) { void* fun = LObjects::overrideFun(unique, 153); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 153, args).toBool()) return; } QWidgetItem::setGeometry(x1); }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return QWidgetItem::sizeHint(); }
    QWidget* widget() { void* fun = LObjects::overrideFun(unique, 366); if(fun) { return (QWidget*)qVariantValue<void*>(callOverrideFun(fun, 366, 0)); } return QWidgetItem::widget(); }
    void invalidate() { void* fun = LObjects::overrideFun(unique, 148); if(fun) { if(callOverrideFun(fun, 148, 0).toBool()) return; } QWidgetItem::invalidate(); }
    QLayout* layout() { void* fun = LObjects::overrideFun(unique, 158); if(fun) { return (QLayout*)qVariantValue<void*>(callOverrideFun(fun, 158, 0)); } return QWidgetItem::layout(); }
    int minimumHeightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 151); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 151, args).toInt(); } return QWidgetItem::minimumHeightForWidth(x1); }
    QSpacerItem* spacerItem() { void* fun = LObjects::overrideFun(unique, 365); if(fun) { return (QSpacerItem*)qVariantValue<void*>(callOverrideFun(fun, 365, 0)); } return QWidgetItem::spacerItem(); }
};

class LWindowStateChangeEvent : public QWindowStateChangeEvent {
    friend class N189;
public:

    static NumList overrideIds;
    uint unique;
};

class LWriteLocker : public QWriteLocker {
    friend class N190;
public:
    LWriteLocker(uint u, QReadWriteLock* x1) : QWriteLocker(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

#endif
