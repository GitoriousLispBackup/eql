// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

typedef QList<int> NumList;

class LGraphicsWebView : public QGraphicsWebView {
    Q_OBJECT
    friend class Q82;
public:
    LGraphicsWebView(uint u, QGraphicsItem* x1 = 0) : QGraphicsWebView(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QGraphicsWebView::inputMethodQuery(x1); }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } return QGraphicsWebView::itemChange(x1, x2); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 210, args).toBool()) return; } QGraphicsWebView::paint(x1, x2, x3); }
    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 211, args).toBool()) return; } QGraphicsWebView::setGeometry(x1); }
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2) const { void* fun = LObjects::overrideFun(unique, 228); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } return QGraphicsWebView::sizeHint(x1, x2); }
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { if(callOverrideFun(fun, 242, 0).toBool()) return; } QGraphicsWebView::updateGeometry(); }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 213, args).toBool()) return; } QGraphicsWebView::contextMenuEvent(x1); }
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 214, args).toBool()) return; } QGraphicsWebView::dragEnterEvent(x1); }
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 215, args).toBool()) return; } QGraphicsWebView::dragLeaveEvent(x1); }
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 216, args).toBool()) return; } QGraphicsWebView::dragMoveEvent(x1); }
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 217, args).toBool()) return; } QGraphicsWebView::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QGraphicsWebView::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 34, args).toBool(); } return QGraphicsWebView::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QGraphicsWebView::focusOutEvent(x1); }
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 220, args).toBool()) return; } QGraphicsWebView::hoverLeaveEvent(x1); }
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 221, args).toBool()) return; } QGraphicsWebView::hoverMoveEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QGraphicsWebView::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QGraphicsWebView::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QGraphicsWebView::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 223, args).toBool()) return; } QGraphicsWebView::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 224, args).toBool()) return; } QGraphicsWebView::mouseMoveEvent(x1); }
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 225, args).toBool()) return; } QGraphicsWebView::mousePressEvent(x1); }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 226, args).toBool()) return; } QGraphicsWebView::mouseReleaseEvent(x1); }
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 241, args).toBool(); } return QGraphicsWebView::sceneEvent(x1); }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 230, args).toBool()) return; } QGraphicsWebView::wheelEvent(x1); }
    void paintWindowFrame(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 231); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 231, args).toBool()) return; } QGraphicsWebView::paintWindowFrame(x1, x2, x3); }
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 13, args).toBool()) return; } QGraphicsWebView::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 27, args).toBool()) return; } QGraphicsWebView::closeEvent(x1); }
    void grabKeyboardEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 232); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 232, args).toBool()) return; } QGraphicsWebView::grabKeyboardEvent(x1); }
    void grabMouseEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 218); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 218, args).toBool()) return; } QGraphicsWebView::grabMouseEvent(x1); }
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 35, args).toBool()) return; } QGraphicsWebView::hideEvent(x1); }
    void initStyleOption(QStyleOption* x1) const { void* fun = LObjects::overrideFun(unique, 233); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 233, args).toBool()) return; } QGraphicsWebView::initStyleOption(x1); }
    void moveEvent(QGraphicsSceneMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 234); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 234, args).toBool()) return; } QGraphicsWebView::moveEvent(x1); }
    void polishEvent() { void* fun = LObjects::overrideFun(unique, 235); if(fun) { if(callOverrideFun(fun, 235, 0).toBool()) return; } QGraphicsWebView::polishEvent(); }
    void resizeEvent(QGraphicsSceneResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 227); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 227, args).toBool()) return; } QGraphicsWebView::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 41, args).toBool()) return; } QGraphicsWebView::showEvent(x1); }
    void ungrabKeyboardEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 236); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 236, args).toBool()) return; } QGraphicsWebView::ungrabKeyboardEvent(x1); }
    void ungrabMouseEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 229); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 229, args).toBool()) return; } QGraphicsWebView::ungrabMouseEvent(x1); }
    bool windowFrameEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 237); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 237, args).toBool(); } return QGraphicsWebView::windowFrameEvent(x1); }
    Qt::WindowFrameSection windowFrameSectionAt(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 238); if(fun) { const void* args[] = { &x1 }; return (Qt::WindowFrameSection)callOverrideFun(fun, 238, args).toInt(); } return QGraphicsWebView::windowFrameSectionAt(x1); }
    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); if(fun) { return qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } return QGraphicsWebView::boundingRect(); }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } return QGraphicsWebView::shape(); }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); if(fun) { return callOverrideFun(fun, 212, 0).toInt(); } return QGraphicsWebView::type(); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QGraphicsWebView::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QGraphicsWebView::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QGraphicsWebView::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QGraphicsWebView::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QGraphicsWebView::timerEvent(x1); }
};

class LWebHistoryInterface : public QWebHistoryInterface {
    Q_OBJECT
    friend class Q212;
public:
    LWebHistoryInterface(uint u, QObject* x1 = 0) : QWebHistoryInterface(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void addHistoryEntry(const QString& x1) { void* fun = LObjects::overrideFun(unique, 322); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 322, args).toBool()) return; }}
    bool historyContains(const QString& x1) const { void* fun = LObjects::overrideFun(unique, 323); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 323, args).toBool(); } return false; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QWebHistoryInterface::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QWebHistoryInterface::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QWebHistoryInterface::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QWebHistoryInterface::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QWebHistoryInterface::timerEvent(x1); }
};

class LWebInspector : public QWebInspector {
    Q_OBJECT
    friend class Q213;
public:
    LWebInspector(uint u, QWidget* x1 = 0) : QWebInspector(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return QWebInspector::sizeHint(); }
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 35, args).toBool()) return; } QWebInspector::hideEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 40, args).toBool()) return; } QWebInspector::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 41, args).toBool()) return; } QWebInspector::showEvent(x1); }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 22, args).toInt(); } return QWebInspector::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QWebInspector::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } return QWebInspector::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 26, args).toBool()) return; } QWebInspector::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 13, args).toBool()) return; } QWebInspector::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 27, args).toBool()) return; } QWebInspector::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 28, args).toBool()) return; } QWebInspector::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 29, args).toBool()) return; } QWebInspector::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 30, args).toBool()) return; } QWebInspector::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 31, args).toBool()) return; } QWebInspector::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 32, args).toBool()) return; } QWebInspector::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 33, args).toBool()) return; } QWebInspector::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QWebInspector::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 34, args).toBool(); } return QWebInspector::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QWebInspector::focusOutEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QWebInspector::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QWebInspector::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QWebInspector::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 37, args).toBool()) return; } QWebInspector::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 38, args).toBool()) return; } QWebInspector::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 18, args).toBool()) return; } QWebInspector::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 19, args).toBool()) return; } QWebInspector::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 20, args).toBool()) return; } QWebInspector::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 39, args).toBool()) return; } QWebInspector::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 21, args).toBool()) return; } QWebInspector::paintEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 42, args).toBool()) return; } QWebInspector::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 43, args).toBool()) return; } QWebInspector::wheelEvent(x1); }
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QWebInspector::metric(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QWebInspector::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QWebInspector::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QWebInspector::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QWebInspector::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QWebInspector::timerEvent(x1); }
};

class LWebPage : public QWebPage {
    Q_OBJECT
    friend class Q214;
public:
    LWebPage(uint u, QObject* x1 = 0) : QWebPage(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool extension(Extension x1, const ExtensionOption* x2 = 0, ExtensionReturn* x3 = 0) { void* fun = LObjects::overrideFun(unique, 324); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return callOverrideFun(fun, 324, args).toBool(); } return QWebPage::extension(x1, x2, x3); }
    bool supportsExtension(Extension x1) const { void* fun = LObjects::overrideFun(unique, 325); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 325, args).toBool(); } return QWebPage::supportsExtension(x1); }
    void triggerAction(WebAction x1, bool x2 = false) { void* fun = LObjects::overrideFun(unique, 326); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 326, args).toBool()) return; } QWebPage::triggerAction(x1, x2); }
    bool acceptNavigationRequest(QWebFrame* x1, const QNetworkRequest& x2, NavigationType x3) { void* fun = LObjects::overrideFun(unique, 327); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return callOverrideFun(fun, 327, args).toBool(); } return QWebPage::acceptNavigationRequest(x1, x2, x3); }
    QString chooseFile(QWebFrame* x1, const QString& x2) { void* fun = LObjects::overrideFun(unique, 328); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QString>(callOverrideFun(fun, 328, args)); } return QWebPage::chooseFile(x1, x2); }
    QObject* createPlugin(const QString& x1, const QUrl& x2, const QStringList& x3, const QStringList& x4) { void* fun = LObjects::overrideFun(unique, 329); if(fun) { const void* args[] = { &x1, &x2, &x3, &x4 }; return (QObject*)qVariantValue<void*>(callOverrideFun(fun, 329, args)); } return QWebPage::createPlugin(x1, x2, x3, x4); }
    QWebPage* createWindow(WebWindowType x1) { void* fun = LObjects::overrideFun(unique, 330); if(fun) { const void* args[] = { &x1 }; return (QWebPage*)qVariantValue<void*>(callOverrideFun(fun, 330, args)); } return QWebPage::createWindow(x1); }
    void javaScriptAlert(QWebFrame* x1, const QString& x2) { void* fun = LObjects::overrideFun(unique, 331); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 331, args).toBool()) return; } QWebPage::javaScriptAlert(x1, x2); }
    bool javaScriptConfirm(QWebFrame* x1, const QString& x2) { void* fun = LObjects::overrideFun(unique, 332); if(fun) { const void* args[] = { &x1, &x2 }; return callOverrideFun(fun, 332, args).toBool(); } return QWebPage::javaScriptConfirm(x1, x2); }
    void javaScriptConsoleMessage(const QString& x1, int x2, const QString& x3) { void* fun = LObjects::overrideFun(unique, 333); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 333, args).toBool()) return; } QWebPage::javaScriptConsoleMessage(x1, x2, x3); }
    bool javaScriptPrompt(QWebFrame* x1, const QString& x2, const QString& x3, QString* x4) { void* fun = LObjects::overrideFun(unique, 334); if(fun) { const void* args[] = { &x1, &x2, &x3, &x4 }; return callOverrideFun(fun, 334, args).toBool(); } return QWebPage::javaScriptPrompt(x1, x2, x3, x4); }
    QString userAgentForUrl(const QUrl& x1) const { void* fun = LObjects::overrideFun(unique, 335); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QString>(callOverrideFun(fun, 335, args)); } return QWebPage::userAgentForUrl(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QWebPage::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QWebPage::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QWebPage::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QWebPage::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QWebPage::timerEvent(x1); }
};

class LWebView : public QWebView {
    Q_OBJECT
    friend class Q215;
public:
    LWebView(uint u, QWidget* x1 = 0) : QWebView(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QWebView* createWindow(QWebPage::WebWindowType x1) { void* fun = LObjects::overrideFun(unique, 336); if(fun) { const void* args[] = { &x1 }; return (QWebView*)qVariantValue<void*>(callOverrideFun(fun, 336, args)); } return QWebView::createWindow(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QWebView::inputMethodQuery(x1); }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return QWebView::sizeHint(); }
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 13, args).toBool()) return; } QWebView::changeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 28, args).toBool()) return; } QWebView::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 29, args).toBool()) return; } QWebView::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 30, args).toBool()) return; } QWebView::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 31, args).toBool()) return; } QWebView::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 32, args).toBool()) return; } QWebView::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QWebView::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 34, args).toBool(); } return QWebView::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QWebView::focusOutEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QWebView::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QWebView::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QWebView::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 38, args).toBool()) return; } QWebView::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 18, args).toBool()) return; } QWebView::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 19, args).toBool()) return; } QWebView::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 20, args).toBool()) return; } QWebView::mouseReleaseEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 21, args).toBool()) return; } QWebView::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 40, args).toBool()) return; } QWebView::resizeEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 43, args).toBool()) return; } QWebView::wheelEvent(x1); }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 22, args).toInt(); } return QWebView::heightForWidth(x1); }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } return QWebView::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 26, args).toBool()) return; } QWebView::actionEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 27, args).toBool()) return; } QWebView::closeEvent(x1); }
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 33, args).toBool()) return; } QWebView::enterEvent(x1); }
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 35, args).toBool()) return; } QWebView::hideEvent(x1); }
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 37, args).toBool()) return; } QWebView::leaveEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 39, args).toBool()) return; } QWebView::moveEvent(x1); }
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 41, args).toBool()) return; } QWebView::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 42, args).toBool()) return; } QWebView::tabletEvent(x1); }
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QWebView::metric(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QWebView::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QWebView::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QWebView::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QWebView::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QWebView::timerEvent(x1); }
};

#endif
