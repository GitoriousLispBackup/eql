// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

typedef QList<int> NumList;

class LGraphicsWebView : public QGraphicsWebView {
    Q_OBJECT
    friend class Q82;
public:
    LGraphicsWebView(uint u, QGraphicsItem* x1 = 0) : QGraphicsWebView(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsWebView::inputMethodQuery(x1); } return ret; }
    QVariant itemChange(GraphicsItemChange x1, const QVariant& x2) { void* fun = LObjects::overrideFun(unique, 222); QVariant ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 222, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsWebView::itemChange(x1, x2); } return ret; }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 210); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 210, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::paint(x1, x2, x3); }}
    void setGeometry(const QRectF& x1) { void* fun = LObjects::overrideFun(unique, 211); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 211, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::setGeometry(x1); }}
    QSizeF sizeHint(Qt::SizeHint x1, const QSizeF& x2) const { void* fun = LObjects::overrideFun(unique, 228); QSizeF ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QSizeF>(callOverrideFun(fun, 228, args)); } if(!fun || LObjects::call_default) { ret = QGraphicsWebView::sizeHint(x1, x2); } return ret; }
    void updateGeometry() { void* fun = LObjects::overrideFun(unique, 242); if(fun) { callOverrideFun(fun, 242, 0); } if(!fun || LObjects::call_default) { QGraphicsWebView::updateGeometry(); }}
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 213); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 213, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::contextMenuEvent(x1); }}
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 214); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 214, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::dragEnterEvent(x1); }}
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 215); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 215, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::dragLeaveEvent(x1); }}
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 216); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 216, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::dragMoveEvent(x1); }}
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 217); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 217, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsWebView::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::focusOutEvent(x1); }}
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 220); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 220, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::hoverLeaveEvent(x1); }}
    void hoverMoveEvent(QGraphicsSceneHoverEvent* x1) { void* fun = LObjects::overrideFun(unique, 221); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 221, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::hoverMoveEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 223); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 223, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 224); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 224, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::mouseMoveEvent(x1); }}
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 225); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 225, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::mousePressEvent(x1); }}
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 226); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 226, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::mouseReleaseEvent(x1); }}
    bool sceneEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 241); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 241, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsWebView::sceneEvent(x1); } return ret; }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 230); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 230, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::wheelEvent(x1); }}
    void paintWindowFrame(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void* fun = LObjects::overrideFun(unique, 231); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 231, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::paintWindowFrame(x1, x2, x3); }}
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::closeEvent(x1); }}
    void grabKeyboardEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 232); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 232, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::grabKeyboardEvent(x1); }}
    void grabMouseEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 218); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 218, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::grabMouseEvent(x1); }}
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::hideEvent(x1); }}
    void initStyleOption(QStyleOption* x1) const { void* fun = LObjects::overrideFun(unique, 233); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 233, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::initStyleOption(x1); }}
    void moveEvent(QGraphicsSceneMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 234); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 234, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::moveEvent(x1); }}
    void polishEvent() { void* fun = LObjects::overrideFun(unique, 235); if(fun) { callOverrideFun(fun, 235, 0); } if(!fun || LObjects::call_default) { QGraphicsWebView::polishEvent(); }}
    void resizeEvent(QGraphicsSceneResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 227); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 227, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::resizeEvent(x1); }}
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::showEvent(x1); }}
    void ungrabKeyboardEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 236); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 236, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::ungrabKeyboardEvent(x1); }}
    void ungrabMouseEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 229); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 229, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::ungrabMouseEvent(x1); }}
    bool windowFrameEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 237); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 237, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGraphicsWebView::windowFrameEvent(x1); } return ret; }
    Qt::WindowFrameSection windowFrameSectionAt(const QPointF& x1) const { void* fun = LObjects::overrideFun(unique, 238); Qt::WindowFrameSection ret; if(fun) { const void* args[] = { &x1 }; ret = (Qt::WindowFrameSection)callOverrideFun(fun, 238, args).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsWebView::windowFrameSectionAt(x1); } return ret; }
    QRectF boundingRect() const { void* fun = LObjects::overrideFun(unique, 239); QRectF ret; if(fun) { ret = qVariantValue<QRectF>(callOverrideFun(fun, 239, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsWebView::boundingRect(); } return ret; }
    QPainterPath shape() const { void* fun = LObjects::overrideFun(unique, 240); QPainterPath ret; if(fun) { ret = qVariantValue<QPainterPath>(callOverrideFun(fun, 240, 0)); } if(!fun || LObjects::call_default) { ret = QGraphicsWebView::shape(); } return ret; }
    int type() const { void* fun = LObjects::overrideFun(unique, 212); int ret = 0; if(fun) { ret = callOverrideFun(fun, 212, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QGraphicsWebView::type(); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QGraphicsWebView::timerEvent(x1); }}
};

class LWebHistoryInterface : public QWebHistoryInterface {
    Q_OBJECT
    friend class Q215;
public:
    LWebHistoryInterface(uint u, QObject* x1 = 0) : QWebHistoryInterface(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void addHistoryEntry(const QString& x1) { void* fun = LObjects::overrideFun(unique, 352); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 352, args); }}
    bool historyContains(const QString& x1) const { void* fun = LObjects::overrideFun(unique, 353); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 353, args).toBool(); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QWebHistoryInterface::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QWebHistoryInterface::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QWebHistoryInterface::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QWebHistoryInterface::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QWebHistoryInterface::timerEvent(x1); }}
};

class LWebInspector : public QWebInspector {
    Q_OBJECT
    friend class Q216;
public:
    LWebInspector(uint u, QWidget* x1 = 0) : QWebInspector(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } if(!fun || LObjects::call_default) { ret = QWebInspector::sizeHint(); } return ret; }
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args); } if(!fun || LObjects::call_default) { QWebInspector::hideEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args); } if(!fun || LObjects::call_default) { QWebInspector::resizeEvent(x1); }}
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args); } if(!fun || LObjects::call_default) { QWebInspector::showEvent(x1); }}
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args).toInt(); } if(!fun || LObjects::call_default) { ret = QWebInspector::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QWebInspector::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } if(!fun || LObjects::call_default) { ret = QWebInspector::minimumSizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 26, args); } if(!fun || LObjects::call_default) { QWebInspector::actionEvent(x1); }}
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args); } if(!fun || LObjects::call_default) { QWebInspector::changeEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args); } if(!fun || LObjects::call_default) { QWebInspector::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args); } if(!fun || LObjects::call_default) { QWebInspector::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args); } if(!fun || LObjects::call_default) { QWebInspector::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args); } if(!fun || LObjects::call_default) { QWebInspector::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args); } if(!fun || LObjects::call_default) { QWebInspector::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args); } if(!fun || LObjects::call_default) { QWebInspector::dropEvent(x1); }}
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args); } if(!fun || LObjects::call_default) { QWebInspector::enterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QWebInspector::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args).toBool(); } if(!fun || LObjects::call_default) { ret = QWebInspector::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QWebInspector::focusOutEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QWebInspector::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QWebInspector::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QWebInspector::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args); } if(!fun || LObjects::call_default) { QWebInspector::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args); } if(!fun || LObjects::call_default) { QWebInspector::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args); } if(!fun || LObjects::call_default) { QWebInspector::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args); } if(!fun || LObjects::call_default) { QWebInspector::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args); } if(!fun || LObjects::call_default) { QWebInspector::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args); } if(!fun || LObjects::call_default) { QWebInspector::moveEvent(x1); }}
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args); } if(!fun || LObjects::call_default) { QWebInspector::paintEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args); } if(!fun || LObjects::call_default) { QWebInspector::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args); } if(!fun || LObjects::call_default) { QWebInspector::wheelEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QWebInspector::metric(x1); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QWebInspector::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QWebInspector::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QWebInspector::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QWebInspector::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QWebInspector::timerEvent(x1); }}
};

class LWebPage : public QWebPage {
    Q_OBJECT
    friend class Q217;
public:
    LWebPage(uint u, QObject* x1 = 0) : QWebPage(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool extension(Extension x1, const ExtensionOption* x2 = 0, ExtensionReturn* x3 = 0) { void* fun = LObjects::overrideFun(unique, 354); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 354, args).toBool(); } if(!fun || LObjects::call_default) { ret = QWebPage::extension(x1, x2, x3); } return ret; }
    bool supportsExtension(Extension x1) const { void* fun = LObjects::overrideFun(unique, 355); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 355, args).toBool(); } if(!fun || LObjects::call_default) { ret = QWebPage::supportsExtension(x1); } return ret; }
    void triggerAction(WebAction x1, bool x2 = false) { void* fun = LObjects::overrideFun(unique, 356); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 356, args); } if(!fun || LObjects::call_default) { QWebPage::triggerAction(x1, x2); }}
    bool acceptNavigationRequest(QWebFrame* x1, const QNetworkRequest& x2, NavigationType x3) { void* fun = LObjects::overrideFun(unique, 357); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 357, args).toBool(); } if(!fun || LObjects::call_default) { ret = QWebPage::acceptNavigationRequest(x1, x2, x3); } return ret; }
    QString chooseFile(QWebFrame* x1, const QString& x2) { void* fun = LObjects::overrideFun(unique, 358); QString ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QString>(callOverrideFun(fun, 358, args)); } if(!fun || LObjects::call_default) { ret = QWebPage::chooseFile(x1, x2); } return ret; }
    QObject* createPlugin(const QString& x1, const QUrl& x2, const QStringList& x3, const QStringList& x4) { void* fun = LObjects::overrideFun(unique, 359); QObject* ret = 0; if(fun) { const void* args[] = { &x1, &x2, &x3, &x4 }; ret = (QObject*)qVariantValue<void*>(callOverrideFun(fun, 359, args)); } if(!fun || LObjects::call_default) { ret = QWebPage::createPlugin(x1, x2, x3, x4); } return ret; }
    QWebPage* createWindow(WebWindowType x1) { void* fun = LObjects::overrideFun(unique, 360); QWebPage* ret = 0; if(fun) { const void* args[] = { &x1 }; ret = (QWebPage*)qVariantValue<void*>(callOverrideFun(fun, 360, args)); } if(!fun || LObjects::call_default) { ret = QWebPage::createWindow(x1); } return ret; }
    void javaScriptAlert(QWebFrame* x1, const QString& x2) { void* fun = LObjects::overrideFun(unique, 361); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 361, args); } if(!fun || LObjects::call_default) { QWebPage::javaScriptAlert(x1, x2); }}
    bool javaScriptConfirm(QWebFrame* x1, const QString& x2) { void* fun = LObjects::overrideFun(unique, 362); bool ret = false; if(fun) { const void* args[] = { &x1, &x2 }; ret = callOverrideFun(fun, 362, args).toBool(); } if(!fun || LObjects::call_default) { ret = QWebPage::javaScriptConfirm(x1, x2); } return ret; }
    void javaScriptConsoleMessage(const QString& x1, int x2, const QString& x3) { void* fun = LObjects::overrideFun(unique, 363); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 363, args); } if(!fun || LObjects::call_default) { QWebPage::javaScriptConsoleMessage(x1, x2, x3); }}
    bool javaScriptPrompt(QWebFrame* x1, const QString& x2, const QString& x3, QString* x4) { void* fun = LObjects::overrideFun(unique, 364); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3, &x4 }; ret = callOverrideFun(fun, 364, args).toBool(); } if(!fun || LObjects::call_default) { ret = QWebPage::javaScriptPrompt(x1, x2, x3, x4); } return ret; }
    QString userAgentForUrl(const QUrl& x1) const { void* fun = LObjects::overrideFun(unique, 365); QString ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QString>(callOverrideFun(fun, 365, args)); } if(!fun || LObjects::call_default) { ret = QWebPage::userAgentForUrl(x1); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QWebPage::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QWebPage::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QWebPage::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QWebPage::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QWebPage::timerEvent(x1); }}
};

class LWebView : public QWebView {
    Q_OBJECT
    friend class Q218;
public:
    LWebView(uint u, QWidget* x1 = 0) : QWebView(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QWebView* createWindow(QWebPage::WebWindowType x1) { void* fun = LObjects::overrideFun(unique, 366); QWebView* ret = 0; if(fun) { const void* args[] = { &x1 }; ret = (QWebView*)qVariantValue<void*>(callOverrideFun(fun, 366, args)); } if(!fun || LObjects::call_default) { ret = QWebView::createWindow(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QWebView::inputMethodQuery(x1); } return ret; }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } if(!fun || LObjects::call_default) { ret = QWebView::sizeHint(); } return ret; }
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args); } if(!fun || LObjects::call_default) { QWebView::changeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args); } if(!fun || LObjects::call_default) { QWebView::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args); } if(!fun || LObjects::call_default) { QWebView::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args); } if(!fun || LObjects::call_default) { QWebView::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args); } if(!fun || LObjects::call_default) { QWebView::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args); } if(!fun || LObjects::call_default) { QWebView::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QWebView::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args).toBool(); } if(!fun || LObjects::call_default) { ret = QWebView::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QWebView::focusOutEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QWebView::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QWebView::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QWebView::keyReleaseEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args); } if(!fun || LObjects::call_default) { QWebView::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args); } if(!fun || LObjects::call_default) { QWebView::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args); } if(!fun || LObjects::call_default) { QWebView::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args); } if(!fun || LObjects::call_default) { QWebView::mouseReleaseEvent(x1); }}
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args); } if(!fun || LObjects::call_default) { QWebView::paintEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args); } if(!fun || LObjects::call_default) { QWebView::resizeEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args); } if(!fun || LObjects::call_default) { QWebView::wheelEvent(x1); }}
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args).toInt(); } if(!fun || LObjects::call_default) { ret = QWebView::heightForWidth(x1); } return ret; }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } if(!fun || LObjects::call_default) { ret = QWebView::minimumSizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 26, args); } if(!fun || LObjects::call_default) { QWebView::actionEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args); } if(!fun || LObjects::call_default) { QWebView::closeEvent(x1); }}
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args); } if(!fun || LObjects::call_default) { QWebView::enterEvent(x1); }}
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args); } if(!fun || LObjects::call_default) { QWebView::hideEvent(x1); }}
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args); } if(!fun || LObjects::call_default) { QWebView::leaveEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args); } if(!fun || LObjects::call_default) { QWebView::moveEvent(x1); }}
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args); } if(!fun || LObjects::call_default) { QWebView::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args); } if(!fun || LObjects::call_default) { QWebView::tabletEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QWebView::metric(x1); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QWebView::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QWebView::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QWebView::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QWebView::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QWebView::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
