// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "../ecl_fun.h"
#include "_objects.h"
#include <QtGui>

typedef QList<int> NumList;

class LAction : public QAction {
    Q_OBJECT
public:
    LAction(uint u, QObject* x1) : QAction(x1), unique(u) {}
    LAction(uint u, const QString& x1, QObject* x2) : QAction(x1, x2), unique(u) {}
    LAction(uint u, const QIcon& x1, const QString& x2, QObject* x3) : QAction(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QAction::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QAction::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QAction::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QAction::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QAction::timerEvent(x1); }
};

class LActionGroup : public QActionGroup {
    Q_OBJECT
public:
    LActionGroup(uint u, QObject* x1) : QActionGroup(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QActionGroup::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QActionGroup::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QActionGroup::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QActionGroup::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QActionGroup::timerEvent(x1); }
};

class LButtonGroup : public QButtonGroup {
    Q_OBJECT
public:
    LButtonGroup(uint u, QObject* x1 = 0) : QButtonGroup(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QButtonGroup::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QButtonGroup::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QButtonGroup::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QButtonGroup::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QButtonGroup::timerEvent(x1); }
};

class LCalendarWidget : public QCalendarWidget {
    Q_OBJECT
public:
    LCalendarWidget(uint u, QWidget* x1 = 0) : QCalendarWidget(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QCalendarWidget::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QCalendarWidget::sizeHint(); }
    void paintCell(QPainter* x1, const QRect& x2, const QDate& x3) const { void *fun = Objects::overrideFun(unique, 8); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 8, args).toBool()) return; } QCalendarWidget::paintCell(x1, x2, x3); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QCalendarWidget::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QCalendarWidget::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QCalendarWidget::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QCalendarWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QCalendarWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QCalendarWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QCalendarWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QCalendarWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QCalendarWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QCalendarWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QCalendarWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QCalendarWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QCalendarWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QCalendarWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QCalendarWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QCalendarWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QCalendarWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QCalendarWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QCalendarWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QCalendarWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QCalendarWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QCalendarWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QCalendarWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QCalendarWidget::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QCalendarWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QCalendarWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QCalendarWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QCalendarWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QCalendarWidget::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QCalendarWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QCalendarWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QCalendarWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QCalendarWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QCalendarWidget::timerEvent(x1); }
};

class LCheckBox : public QCheckBox {
    Q_OBJECT
public:
    LCheckBox(uint u, QWidget* x1 = 0) : QCheckBox(x1), unique(u) {}
    LCheckBox(uint u, const QString& x1, QWidget* x2 = 0) : QCheckBox(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QCheckBox::sizeHint(); }
    void checkStateSet() { void *fun = Objects::overrideFun(unique, 38); if(fun) { if(callOverrideFun(this, fun, 38, 0).toBool()) return; } QCheckBox::checkStateSet(); }
    bool hitButton(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 39); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 39, args).toBool(); } return  QCheckBox::hitButton(x1); }
    void nextCheckState() { void *fun = Objects::overrideFun(unique, 40); if(fun) { if(callOverrideFun(this, fun, 40, 0).toBool()) return; } QCheckBox::nextCheckState(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QCheckBox::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QCheckBox::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QCheckBox::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QCheckBox::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QCheckBox::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QCheckBox::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QCheckBox::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QCheckBox::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QCheckBox::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QCheckBox::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QCheckBox::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QCheckBox::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QCheckBox::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QCheckBox::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QCheckBox::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QCheckBox::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QCheckBox::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QCheckBox::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QCheckBox::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QCheckBox::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QCheckBox::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QCheckBox::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QCheckBox::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QCheckBox::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QCheckBox::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QCheckBox::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QCheckBox::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QCheckBox::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QCheckBox::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QCheckBox::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QCheckBox::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QCheckBox::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QCheckBox::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QCheckBox::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QCheckBox::timerEvent(x1); }
};

class LColumnView : public QColumnView {
    Q_OBJECT
public:
    LColumnView(uint u, QWidget* x1 = 0) : QColumnView(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QModelIndex indexAt(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 41); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 41, args)); } return  QColumnView::indexAt(x1); }
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void *fun = Objects::overrideFun(unique, 42); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 42, args).toBool()) return; } QColumnView::scrollTo(x1, x2); }
    void selectAll() { void *fun = Objects::overrideFun(unique, 43); if(fun) { if(callOverrideFun(this, fun, 43, 0).toBool()) return; } QColumnView::selectAll(); }
    void setModel(QAbstractItemModel* x1) { void *fun = Objects::overrideFun(unique, 44); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 44, args).toBool()) return; } QColumnView::setModel(x1); }
    void setRootIndex(const QModelIndex& x1) { void *fun = Objects::overrideFun(unique, 45); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 45, args).toBool()) return; } QColumnView::setRootIndex(x1); }
    void setSelectionModel(QItemSelectionModel* x1) { void *fun = Objects::overrideFun(unique, 46); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 46, args).toBool()) return; } QColumnView::setSelectionModel(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QColumnView::sizeHint(); }
    QRect visualRect(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 47); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(this, fun, 47, args)); } return  QColumnView::visualRect(x1); }
    QAbstractItemView* createColumn(const QModelIndex& x1) { void *fun = Objects::overrideFun(unique, 48); if(fun) { const void *args[] = { &x1 }; return (QAbstractItemView*)qVariantValue<void*>(callOverrideFun(this, fun, 48, args)); } return  QColumnView::createColumn(x1); }
    void keyboardSearch(const QString& x1) { void *fun = Objects::overrideFun(unique, 49); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 49, args).toBool()) return; } QColumnView::keyboardSearch(x1); }
    int sizeHintForColumn(int x1) const { void *fun = Objects::overrideFun(unique, 50); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 50, args).toInt(); } return  QColumnView::sizeHintForColumn(x1); }
    int sizeHintForRow(int x1) const { void *fun = Objects::overrideFun(unique, 51); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 51, args).toInt(); } return  QColumnView::sizeHintForRow(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QColumnView::inputMethodQuery(x1); }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void *fun = Objects::overrideFun(unique, 52); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 52, args).toBool(); } return  QColumnView::edit(x1, x2, x3); }
    int horizontalOffset() const { void *fun = Objects::overrideFun(unique, 53); if(fun) { return callOverrideFun(this, fun, 53, 0).toInt(); } return  QColumnView::horizontalOffset(); }
    bool isIndexHidden(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 54); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 54, args).toBool(); } return  QColumnView::isIndexHidden(x1); }
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void *fun = Objects::overrideFun(unique, 55); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 55, args)); } return  QColumnView::moveCursor(x1, x2); }
    QModelIndexList selectedIndexes() const { void *fun = Objects::overrideFun(unique, 56); if(fun) { return qVariantValue<QModelIndexList>(callOverrideFun(this, fun, 56, 0)); } return  QColumnView::selectedIndexes(); }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void *fun = Objects::overrideFun(unique, 57); if(fun) { const void *args[] = { &x1, &x2 }; return (QItemSelectionModel::SelectionFlags)callOverrideFun(this, fun, 57, args).toInt(); } return  QColumnView::selectionCommand(x1, x2); }
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void *fun = Objects::overrideFun(unique, 58); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 58, args).toBool()) return; } QColumnView::setSelection(x1, x2); }
    void startDrag(Qt::DropActions x1) { void *fun = Objects::overrideFun(unique, 59); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 59, args).toBool()) return; } QColumnView::startDrag(x1); }
    int verticalOffset() const { void *fun = Objects::overrideFun(unique, 60); if(fun) { return callOverrideFun(this, fun, 60, 0).toInt(); } return  QColumnView::verticalOffset(); }
    QStyleOptionViewItem viewOptions() const { void *fun = Objects::overrideFun(unique, 61); if(fun) { return qVariantValue<QStyleOptionViewItem>(callOverrideFun(this, fun, 61, 0)); } return  QColumnView::viewOptions(); }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void *fun = Objects::overrideFun(unique, 62); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRegion>(callOverrideFun(this, fun, 62, args)); } return  QColumnView::visualRegionForSelection(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QColumnView::minimumSizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QColumnView::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QColumnView::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QColumnView::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QColumnView::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QColumnView::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QColumnView::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QColumnView::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QColumnView::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QColumnView::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QColumnView::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QColumnView::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QColumnView::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QColumnView::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QColumnView::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QColumnView::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QColumnView::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QColumnView::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QColumnView::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QColumnView::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QColumnView::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QColumnView::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QColumnView::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QColumnView::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QColumnView::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QColumnView::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QColumnView::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QColumnView::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QColumnView::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QColumnView::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QColumnView::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QColumnView::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QColumnView::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QColumnView::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QColumnView::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QColumnView::timerEvent(x1); }
};

class LComboBox : public QComboBox {
    Q_OBJECT
public:
    LComboBox(uint u, QWidget* x1 = 0) : QComboBox(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void hidePopup() { void *fun = Objects::overrideFun(unique, 65); if(fun) { if(callOverrideFun(this, fun, 65, 0).toBool()) return; } QComboBox::hidePopup(); }
    void showPopup() { void *fun = Objects::overrideFun(unique, 66); if(fun) { if(callOverrideFun(this, fun, 66, 0).toBool()) return; } QComboBox::showPopup(); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QComboBox::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QComboBox::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QComboBox::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QComboBox::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QComboBox::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QComboBox::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QComboBox::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QComboBox::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QComboBox::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QComboBox::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QComboBox::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QComboBox::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QComboBox::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QComboBox::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QComboBox::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QComboBox::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QComboBox::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QComboBox::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QComboBox::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QComboBox::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QComboBox::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QComboBox::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QComboBox::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QComboBox::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QComboBox::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QComboBox::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QComboBox::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QComboBox::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QComboBox::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QComboBox::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QComboBox::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QComboBox::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QComboBox::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QComboBox::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QComboBox::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QComboBox::timerEvent(x1); }
};

class LCommandLinkButton : public QCommandLinkButton {
    Q_OBJECT
public:
    LCommandLinkButton(uint u, QWidget* x1 = 0) : QCommandLinkButton(x1), unique(u) {}
    LCommandLinkButton(uint u, const QString& x1, QWidget* x2 = 0) : QCommandLinkButton(x1, x2), unique(u) {}
    LCommandLinkButton(uint u, const QString& x1, const QString& x2, QWidget* x3 = 0) : QCommandLinkButton(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QCommandLinkButton::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QCommandLinkButton::sizeHint(); }
    void checkStateSet() { void *fun = Objects::overrideFun(unique, 38); if(fun) { if(callOverrideFun(this, fun, 38, 0).toBool()) return; } QCommandLinkButton::checkStateSet(); }
    bool hitButton(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 39); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 39, args).toBool(); } return  QCommandLinkButton::hitButton(x1); }
    void nextCheckState() { void *fun = Objects::overrideFun(unique, 40); if(fun) { if(callOverrideFun(this, fun, 40, 0).toBool()) return; } QCommandLinkButton::nextCheckState(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QCommandLinkButton::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QCommandLinkButton::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QCommandLinkButton::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QCommandLinkButton::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QCommandLinkButton::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QCommandLinkButton::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QCommandLinkButton::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QCommandLinkButton::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QCommandLinkButton::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QCommandLinkButton::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QCommandLinkButton::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QCommandLinkButton::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QCommandLinkButton::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QCommandLinkButton::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QCommandLinkButton::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QCommandLinkButton::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QCommandLinkButton::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QCommandLinkButton::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QCommandLinkButton::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QCommandLinkButton::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QCommandLinkButton::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QCommandLinkButton::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QCommandLinkButton::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QCommandLinkButton::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QCommandLinkButton::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QCommandLinkButton::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QCommandLinkButton::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QCommandLinkButton::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QCommandLinkButton::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QCommandLinkButton::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QCommandLinkButton::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QCommandLinkButton::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QCommandLinkButton::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QCommandLinkButton::timerEvent(x1); }
};

class LCompleter : public QCompleter {
    Q_OBJECT
public:
    LCompleter(uint u, QObject* x1 = 0) : QCompleter(x1), unique(u) {}
    LCompleter(uint u, QAbstractItemModel* x1, QObject* x2 = 0) : QCompleter(x1, x2), unique(u) {}
    LCompleter(uint u, const QStringList& x1, QObject* x2 = 0) : QCompleter(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QString pathFromIndex(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 67); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QString>(callOverrideFun(this, fun, 67, args)); } return  QCompleter::pathFromIndex(x1); }
    QStringList splitPath(const QString& x1) const { void *fun = Objects::overrideFun(unique, 68); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QStringList>(callOverrideFun(this, fun, 68, args)); } return  QCompleter::splitPath(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QCompleter::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QCompleter::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QCompleter::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QCompleter::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QCompleter::timerEvent(x1); }
};

class LDateEdit : public QDateEdit {
    Q_OBJECT
public:
    LDateEdit(uint u, QWidget* x1 = 0) : QDateEdit(x1), unique(u) {}
    LDateEdit(uint u, const QDate& x1, QWidget* x2 = 0) : QDateEdit(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void clear() { void *fun = Objects::overrideFun(unique, 69); if(fun) { if(callOverrideFun(this, fun, 69, 0).toBool()) return; } QDateEdit::clear(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QDateEdit::sizeHint(); }
    void stepBy(int x1) { void *fun = Objects::overrideFun(unique, 70); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 70, args).toBool()) return; } QDateEdit::stepBy(x1); }
    QDateTime dateTimeFromText(const QString& x1) const { void *fun = Objects::overrideFun(unique, 71); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QDateTime>(callOverrideFun(this, fun, 71, args)); } return  QDateEdit::dateTimeFromText(x1); }
    QString textFromDateTime(const QDateTime& x1) const { void *fun = Objects::overrideFun(unique, 72); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QString>(callOverrideFun(this, fun, 72, args)); } return  QDateEdit::textFromDateTime(x1); }
    void fixup(QString& x1) const { void *fun = Objects::overrideFun(unique, 73); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 73, args).toBool()) return; } QDateEdit::fixup(x1); }
    QValidator::State validate(QString& x1, int& x2) const { void *fun = Objects::overrideFun(unique, 74); if(fun) { const void *args[] = { &x1, &x2 }; return (QValidator::State)callOverrideFun(this, fun, 74, args).toInt(); } return  QDateEdit::validate(x1, x2); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QDateEdit::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QDateEdit::minimumSizeHint(); }
    StepEnabled stepEnabled() const { void *fun = Objects::overrideFun(unique, 75); if(fun) { return (StepEnabled)callOverrideFun(this, fun, 75, 0).toInt(); } return  QDateEdit::stepEnabled(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QDateEdit::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QDateEdit::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QDateEdit::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QDateEdit::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QDateEdit::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QDateEdit::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QDateEdit::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QDateEdit::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QDateEdit::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QDateEdit::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QDateEdit::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QDateEdit::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QDateEdit::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QDateEdit::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QDateEdit::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QDateEdit::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QDateEdit::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QDateEdit::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QDateEdit::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QDateEdit::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QDateEdit::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QDateEdit::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QDateEdit::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QDateEdit::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QDateEdit::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QDateEdit::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QDateEdit::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QDateEdit::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QDateEdit::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QDateEdit::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QDateEdit::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QDateEdit::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QDateEdit::timerEvent(x1); }
};

class LDateTimeEdit : public QDateTimeEdit {
    Q_OBJECT
public:
    LDateTimeEdit(uint u, QWidget* x1 = 0) : QDateTimeEdit(x1), unique(u) {}
    LDateTimeEdit(uint u, const QDateTime& x1, QWidget* x2 = 0) : QDateTimeEdit(x1, x2), unique(u) {}
    LDateTimeEdit(uint u, const QDate& x1, QWidget* x2 = 0) : QDateTimeEdit(x1, x2), unique(u) {}
    LDateTimeEdit(uint u, const QTime& x1, QWidget* x2 = 0) : QDateTimeEdit(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void clear() { void *fun = Objects::overrideFun(unique, 69); if(fun) { if(callOverrideFun(this, fun, 69, 0).toBool()) return; } QDateTimeEdit::clear(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QDateTimeEdit::sizeHint(); }
    void stepBy(int x1) { void *fun = Objects::overrideFun(unique, 70); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 70, args).toBool()) return; } QDateTimeEdit::stepBy(x1); }
    QDateTime dateTimeFromText(const QString& x1) const { void *fun = Objects::overrideFun(unique, 71); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QDateTime>(callOverrideFun(this, fun, 71, args)); } return  QDateTimeEdit::dateTimeFromText(x1); }
    QString textFromDateTime(const QDateTime& x1) const { void *fun = Objects::overrideFun(unique, 72); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QString>(callOverrideFun(this, fun, 72, args)); } return  QDateTimeEdit::textFromDateTime(x1); }
    void fixup(QString& x1) const { void *fun = Objects::overrideFun(unique, 73); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 73, args).toBool()) return; } QDateTimeEdit::fixup(x1); }
    QValidator::State validate(QString& x1, int& x2) const { void *fun = Objects::overrideFun(unique, 74); if(fun) { const void *args[] = { &x1, &x2 }; return (QValidator::State)callOverrideFun(this, fun, 74, args).toInt(); } return  QDateTimeEdit::validate(x1, x2); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QDateTimeEdit::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QDateTimeEdit::minimumSizeHint(); }
    StepEnabled stepEnabled() const { void *fun = Objects::overrideFun(unique, 75); if(fun) { return (StepEnabled)callOverrideFun(this, fun, 75, 0).toInt(); } return  QDateTimeEdit::stepEnabled(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QDateTimeEdit::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QDateTimeEdit::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QDateTimeEdit::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QDateTimeEdit::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QDateTimeEdit::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QDateTimeEdit::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QDateTimeEdit::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QDateTimeEdit::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QDateTimeEdit::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QDateTimeEdit::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QDateTimeEdit::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QDateTimeEdit::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QDateTimeEdit::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QDateTimeEdit::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QDateTimeEdit::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QDateTimeEdit::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QDateTimeEdit::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QDateTimeEdit::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QDateTimeEdit::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QDateTimeEdit::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QDateTimeEdit::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QDateTimeEdit::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QDateTimeEdit::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QDateTimeEdit::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QDateTimeEdit::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QDateTimeEdit::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QDateTimeEdit::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QDateTimeEdit::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QDateTimeEdit::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QDateTimeEdit::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QDateTimeEdit::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QDateTimeEdit::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QDateTimeEdit::timerEvent(x1); }
};

class LDesktopWidget : public QDesktopWidget {
    Q_OBJECT
public:

    static NumList overrideIds;
    uint unique;

    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QDesktopWidget::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QDesktopWidget::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QDesktopWidget::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QDesktopWidget::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QDesktopWidget::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QDesktopWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QDesktopWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QDesktopWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QDesktopWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QDesktopWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QDesktopWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QDesktopWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QDesktopWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QDesktopWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QDesktopWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QDesktopWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QDesktopWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QDesktopWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QDesktopWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QDesktopWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QDesktopWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QDesktopWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QDesktopWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QDesktopWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QDesktopWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QDesktopWidget::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QDesktopWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QDesktopWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QDesktopWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QDesktopWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QDesktopWidget::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QDesktopWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QDesktopWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QDesktopWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QDesktopWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QDesktopWidget::timerEvent(x1); }
};

class LDial : public QDial {
    Q_OBJECT
public:
    LDial(uint u, QWidget* x1 = 0) : QDial(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QDial::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QDial::sizeHint(); }
    void sliderChange(SliderChange x1) { void *fun = Objects::overrideFun(unique, 76); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 76, args).toBool()) return; } QDial::sliderChange(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QDial::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QDial::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QDial::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QDial::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QDial::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QDial::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QDial::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QDial::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QDial::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QDial::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QDial::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QDial::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QDial::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QDial::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QDial::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QDial::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QDial::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QDial::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QDial::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QDial::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QDial::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QDial::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QDial::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QDial::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QDial::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QDial::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QDial::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QDial::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QDial::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QDial::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QDial::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QDial::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QDial::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QDial::timerEvent(x1); }
};

class LDialog : public QDialog {
    Q_OBJECT
public:
    LDialog(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) : QDialog(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QDialog::minimumSizeHint(); }
    void setVisible(bool x1) { void *fun = Objects::overrideFun(unique, 77); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 77, args).toBool()) return; } QDialog::setVisible(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QDialog::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QDialog::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QDialog::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QDialog::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QDialog::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QDialog::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QDialog::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QDialog::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QDialog::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QDialog::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QDialog::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QDialog::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QDialog::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QDialog::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QDialog::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QDialog::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QDialog::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QDialog::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QDialog::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QDialog::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QDialog::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QDialog::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QDialog::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QDialog::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QDialog::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QDialog::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QDialog::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QDialog::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QDialog::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QDialog::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QDialog::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QDialog::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QDialog::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QDialog::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QDialog::timerEvent(x1); }
};

class LDockWidget : public QDockWidget {
    Q_OBJECT
public:
    LDockWidget(uint u, const QString& x1, QWidget* x2 = 0, Qt::WindowFlags x3 = 0) : QDockWidget(x1, x2, x3), unique(u) {}
    LDockWidget(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) : QDockWidget(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QDockWidget::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QDockWidget::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QDockWidget::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QDockWidget::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QDockWidget::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QDockWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QDockWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QDockWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QDockWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QDockWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QDockWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QDockWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QDockWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QDockWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QDockWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QDockWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QDockWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QDockWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QDockWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QDockWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QDockWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QDockWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QDockWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QDockWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QDockWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QDockWidget::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QDockWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QDockWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QDockWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QDockWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QDockWidget::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QDockWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QDockWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QDockWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QDockWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QDockWidget::timerEvent(x1); }
};

class LDoubleSpinBox : public QDoubleSpinBox {
    Q_OBJECT
public:
    LDoubleSpinBox(uint u, QWidget* x1 = 0) : QDoubleSpinBox(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QString textFromValue(double x1) const { void *fun = Objects::overrideFun(unique, 78); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QString>(callOverrideFun(this, fun, 78, args)); } return  QDoubleSpinBox::textFromValue(x1); }
    double valueFromText(const QString& x1) const { void *fun = Objects::overrideFun(unique, 79); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 79, args).toDouble(); } return  QDoubleSpinBox::valueFromText(x1); }
    void fixup(QString& x1) const { void *fun = Objects::overrideFun(unique, 73); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 73, args).toBool()) return; } QDoubleSpinBox::fixup(x1); }
    QValidator::State validate(QString& x1, int& x2) const { void *fun = Objects::overrideFun(unique, 74); if(fun) { const void *args[] = { &x1, &x2 }; return (QValidator::State)callOverrideFun(this, fun, 74, args).toInt(); } return  QDoubleSpinBox::validate(x1, x2); }
    void stepBy(int x1) { void *fun = Objects::overrideFun(unique, 70); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 70, args).toBool()) return; } QDoubleSpinBox::stepBy(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QDoubleSpinBox::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QDoubleSpinBox::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QDoubleSpinBox::sizeHint(); }
    StepEnabled stepEnabled() const { void *fun = Objects::overrideFun(unique, 75); if(fun) { return (StepEnabled)callOverrideFun(this, fun, 75, 0).toInt(); } return  QDoubleSpinBox::stepEnabled(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QDoubleSpinBox::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QDoubleSpinBox::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QDoubleSpinBox::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QDoubleSpinBox::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QDoubleSpinBox::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QDoubleSpinBox::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QDoubleSpinBox::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QDoubleSpinBox::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QDoubleSpinBox::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QDoubleSpinBox::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QDoubleSpinBox::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QDoubleSpinBox::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QDoubleSpinBox::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QDoubleSpinBox::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QDoubleSpinBox::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QDoubleSpinBox::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QDoubleSpinBox::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QDoubleSpinBox::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QDoubleSpinBox::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QDoubleSpinBox::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QDoubleSpinBox::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QDoubleSpinBox::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QDoubleSpinBox::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QDoubleSpinBox::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QDoubleSpinBox::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QDoubleSpinBox::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QDoubleSpinBox::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QDoubleSpinBox::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QDoubleSpinBox::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QDoubleSpinBox::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QDoubleSpinBox::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QDoubleSpinBox::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QDoubleSpinBox::timerEvent(x1); }
};

class LDrag : public QDrag {
    Q_OBJECT
public:
    LDrag(uint u, QWidget* x1) : QDrag(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QDrag::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QDrag::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QDrag::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QDrag::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QDrag::timerEvent(x1); }
};

class LErrorMessage : public QErrorMessage {
    Q_OBJECT
public:
    LErrorMessage(uint u, QWidget* x1 = 0) : QErrorMessage(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QErrorMessage::minimumSizeHint(); }
    void setVisible(bool x1) { void *fun = Objects::overrideFun(unique, 77); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 77, args).toBool()) return; } QErrorMessage::setVisible(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QErrorMessage::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QErrorMessage::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QErrorMessage::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QErrorMessage::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QErrorMessage::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QErrorMessage::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QErrorMessage::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QErrorMessage::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QErrorMessage::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QErrorMessage::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QErrorMessage::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QErrorMessage::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QErrorMessage::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QErrorMessage::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QErrorMessage::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QErrorMessage::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QErrorMessage::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QErrorMessage::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QErrorMessage::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QErrorMessage::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QErrorMessage::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QErrorMessage::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QErrorMessage::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QErrorMessage::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QErrorMessage::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QErrorMessage::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QErrorMessage::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QErrorMessage::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QErrorMessage::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QErrorMessage::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QErrorMessage::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QErrorMessage::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QErrorMessage::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QErrorMessage::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QErrorMessage::timerEvent(x1); }
};

class LFileDialog : public QFileDialog {
    Q_OBJECT
public:
    LFileDialog(uint u, QWidget* x1, Qt::WindowFlags x2) : QFileDialog(x1, x2), unique(u) {}
    LFileDialog(uint u, QWidget* x1 = 0, const QString& x2 = QString(), const QString& x3 = QString(), const QString& x4 = QString()) : QFileDialog(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setVisible(bool x1) { void *fun = Objects::overrideFun(unique, 77); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 77, args).toBool()) return; } QFileDialog::setVisible(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QFileDialog::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QFileDialog::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QFileDialog::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QFileDialog::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QFileDialog::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QFileDialog::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QFileDialog::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QFileDialog::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QFileDialog::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QFileDialog::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QFileDialog::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QFileDialog::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QFileDialog::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QFileDialog::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QFileDialog::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QFileDialog::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QFileDialog::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QFileDialog::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QFileDialog::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QFileDialog::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QFileDialog::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QFileDialog::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QFileDialog::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QFileDialog::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QFileDialog::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QFileDialog::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QFileDialog::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QFileDialog::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QFileDialog::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QFileDialog::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QFileDialog::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QFileDialog::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QFileDialog::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QFileDialog::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QFileDialog::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QFileDialog::timerEvent(x1); }
};

class LFontComboBox : public QFontComboBox {
    Q_OBJECT
public:
    LFontComboBox(uint u, QWidget* x1 = 0) : QFontComboBox(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QFontComboBox::sizeHint(); }
    void hidePopup() { void *fun = Objects::overrideFun(unique, 65); if(fun) { if(callOverrideFun(this, fun, 65, 0).toBool()) return; } QFontComboBox::hidePopup(); }
    void showPopup() { void *fun = Objects::overrideFun(unique, 66); if(fun) { if(callOverrideFun(this, fun, 66, 0).toBool()) return; } QFontComboBox::showPopup(); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QFontComboBox::minimumSizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QFontComboBox::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QFontComboBox::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QFontComboBox::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QFontComboBox::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QFontComboBox::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QFontComboBox::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QFontComboBox::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QFontComboBox::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QFontComboBox::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QFontComboBox::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QFontComboBox::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QFontComboBox::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QFontComboBox::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QFontComboBox::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QFontComboBox::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QFontComboBox::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QFontComboBox::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QFontComboBox::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QFontComboBox::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QFontComboBox::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QFontComboBox::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QFontComboBox::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QFontComboBox::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QFontComboBox::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QFontComboBox::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QFontComboBox::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QFontComboBox::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QFontComboBox::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QFontComboBox::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QFontComboBox::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QFontComboBox::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QFontComboBox::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QFontComboBox::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QFontComboBox::timerEvent(x1); }
};

class LFormLayout : public QFormLayout {
    Q_OBJECT
public:
    LFormLayout(uint u, QWidget* x1 = 0) : QFormLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void addItem(QLayoutItem* x1) { void *fun = Objects::overrideFun(unique, 80); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 80, args).toBool()) return; } QFormLayout::addItem(x1); }
    int count() const { void *fun = Objects::overrideFun(unique, 81); if(fun) { return callOverrideFun(this, fun, 81, 0).toInt(); } return  QFormLayout::count(); }
    Qt::Orientations expandingDirections() const { void *fun = Objects::overrideFun(unique, 82); if(fun) { return (Qt::Orientations)callOverrideFun(this, fun, 82, 0).toInt(); } return  QFormLayout::expandingDirections(); }
    bool hasHeightForWidth() const { void *fun = Objects::overrideFun(unique, 83); if(fun) { return callOverrideFun(this, fun, 83, 0).toBool(); } return  QFormLayout::hasHeightForWidth(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QFormLayout::heightForWidth(x1); }
    void invalidate() { void *fun = Objects::overrideFun(unique, 84); if(fun) { if(callOverrideFun(this, fun, 84, 0).toBool()) return; } QFormLayout::invalidate(); }
    QLayoutItem* itemAt(int x1) const { void *fun = Objects::overrideFun(unique, 85); if(fun) { const void *args[] = { &x1 }; return (QLayoutItem*)qVariantValue<void*>(callOverrideFun(this, fun, 85, args)); } return  QFormLayout::itemAt(x1); }
    QSize minimumSize() const { void *fun = Objects::overrideFun(unique, 86); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 86, 0)); } return  QFormLayout::minimumSize(); }
    void setGeometry(const QRect& x1) { void *fun = Objects::overrideFun(unique, 87); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 87, args).toBool()) return; } QFormLayout::setGeometry(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QFormLayout::sizeHint(); }
    QLayoutItem* takeAt(int x1) { void *fun = Objects::overrideFun(unique, 88); if(fun) { const void *args[] = { &x1 }; return (QLayoutItem*)qVariantValue<void*>(callOverrideFun(this, fun, 88, args)); } return  QFormLayout::takeAt(x1); }
    int indexOf(QWidget* x1) const { void *fun = Objects::overrideFun(unique, 89); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 89, args).toInt(); } return  QFormLayout::indexOf(x1); }
    QRect geometry() const { void *fun = Objects::overrideFun(unique, 90); if(fun) { return qVariantValue<QRect>(callOverrideFun(this, fun, 90, 0)); } return  QFormLayout::geometry(); }
    bool isEmpty() const { void *fun = Objects::overrideFun(unique, 91); if(fun) { return callOverrideFun(this, fun, 91, 0).toBool(); } return  QFormLayout::isEmpty(); }
    QLayout* layout() { void *fun = Objects::overrideFun(unique, 92); if(fun) { return (QLayout*)qVariantValue<void*>(callOverrideFun(this, fun, 92, 0)); } return  QFormLayout::layout(); }
    QSize maximumSize() const { void *fun = Objects::overrideFun(unique, 93); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 93, 0)); } return  QFormLayout::maximumSize(); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QFormLayout::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QFormLayout::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QFormLayout::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QFormLayout::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QFormLayout::timerEvent(x1); }
};

class LFrame : public QFrame {
    Q_OBJECT
public:
    LFrame(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) : QFrame(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QFrame::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QFrame::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QFrame::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QFrame::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QFrame::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QFrame::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QFrame::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QFrame::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QFrame::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QFrame::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QFrame::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QFrame::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QFrame::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QFrame::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QFrame::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QFrame::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QFrame::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QFrame::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QFrame::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QFrame::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QFrame::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QFrame::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QFrame::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QFrame::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QFrame::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QFrame::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QFrame::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QFrame::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QFrame::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QFrame::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QFrame::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QFrame::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QFrame::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QFrame::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QFrame::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QFrame::timerEvent(x1); }
};

class LGraphicsProxyWidget : public QGraphicsProxyWidget {
    Q_OBJECT
public:
    LGraphicsProxyWidget(uint u, QGraphicsItem* x1 = 0, Qt::WindowFlags x2 = 0) : QGraphicsProxyWidget(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { void *fun = Objects::overrideFun(unique, 94); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 94, args).toBool()) return; } QGraphicsProxyWidget::paint(x1, x2, x3); }
    void setGeometry(const QRectF& x1) { void *fun = Objects::overrideFun(unique, 95); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 95, args).toBool()) return; } QGraphicsProxyWidget::setGeometry(x1); }
    int type() const { void *fun = Objects::overrideFun(unique, 96); if(fun) { return callOverrideFun(this, fun, 96, 0).toInt(); } return  QGraphicsProxyWidget::type(); }
    void paintWindowFrame(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void *fun = Objects::overrideFun(unique, 97); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 97, args).toBool()) return; } QGraphicsProxyWidget::paintWindowFrame(x1, x2, x3); }
    QRectF boundingRect() const { void *fun = Objects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(this, fun, 98, 0)); } return  QGraphicsProxyWidget::boundingRect(); }
    QPainterPath shape() const { void *fun = Objects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(this, fun, 99, 0)); } return  QGraphicsProxyWidget::shape(); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QGraphicsProxyWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QGraphicsProxyWidget::closeEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QGraphicsProxyWidget::focusNextPrevChild(x1); }
    void grabKeyboardEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 100); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 100, args).toBool()) return; } QGraphicsProxyWidget::grabKeyboardEvent(x1); }
    void grabMouseEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 101); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 101, args).toBool()) return; } QGraphicsProxyWidget::grabMouseEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QGraphicsProxyWidget::hideEvent(x1); }
    void initStyleOption(QStyleOption* x1) const { void *fun = Objects::overrideFun(unique, 102); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 102, args).toBool()) return; } QGraphicsProxyWidget::initStyleOption(x1); }
    void moveEvent(QGraphicsSceneMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 103); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 103, args).toBool()) return; } QGraphicsProxyWidget::moveEvent(x1); }
    void polishEvent() { void *fun = Objects::overrideFun(unique, 104); if(fun) { if(callOverrideFun(this, fun, 104, 0).toBool()) return; } QGraphicsProxyWidget::polishEvent(); }
    void resizeEvent(QGraphicsSceneResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 105); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 105, args).toBool()) return; } QGraphicsProxyWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QGraphicsProxyWidget::showEvent(x1); }
    void ungrabKeyboardEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 106); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 106, args).toBool()) return; } QGraphicsProxyWidget::ungrabKeyboardEvent(x1); }
    void ungrabMouseEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 107); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 107, args).toBool()) return; } QGraphicsProxyWidget::ungrabMouseEvent(x1); }
    bool windowFrameEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 108); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 108, args).toBool(); } return  QGraphicsProxyWidget::windowFrameEvent(x1); }
    Qt::WindowFrameSection windowFrameSectionAt(const QPointF& x1) const { void *fun = Objects::overrideFun(unique, 109); if(fun) { const void *args[] = { &x1 }; return (Qt::WindowFrameSection)callOverrideFun(this, fun, 109, args).toInt(); } return  QGraphicsProxyWidget::windowFrameSectionAt(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QGraphicsProxyWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QGraphicsProxyWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QGraphicsProxyWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QGraphicsProxyWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QGraphicsProxyWidget::timerEvent(x1); }
};

class LGraphicsScene : public QGraphicsScene {
    Q_OBJECT
public:
    LGraphicsScene(uint u, QObject* x1 = 0) : QGraphicsScene(x1), unique(u) {}
    LGraphicsScene(uint u, const QRectF& x1, QObject* x2 = 0) : QGraphicsScene(x1, x2), unique(u) {}
    LGraphicsScene(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QObject* x5 = 0) : QGraphicsScene(x1, x2, x3, x4, x5), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QGraphicsScene::inputMethodQuery(x1); }
    void contextMenuEvent(QGraphicsSceneContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 110); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 110, args).toBool()) return; } QGraphicsScene::contextMenuEvent(x1); }
    void dragEnterEvent(QGraphicsSceneDragDropEvent* x1) { void *fun = Objects::overrideFun(unique, 111); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 111, args).toBool()) return; } QGraphicsScene::dragEnterEvent(x1); }
    void dragLeaveEvent(QGraphicsSceneDragDropEvent* x1) { void *fun = Objects::overrideFun(unique, 112); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 112, args).toBool()) return; } QGraphicsScene::dragLeaveEvent(x1); }
    void dragMoveEvent(QGraphicsSceneDragDropEvent* x1) { void *fun = Objects::overrideFun(unique, 113); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 113, args).toBool()) return; } QGraphicsScene::dragMoveEvent(x1); }
    void drawBackground(QPainter* x1, const QRectF& x2) { void *fun = Objects::overrideFun(unique, 114); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 114, args).toBool()) return; } QGraphicsScene::drawBackground(x1, x2); }
    void drawForeground(QPainter* x1, const QRectF& x2) { void *fun = Objects::overrideFun(unique, 115); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 115, args).toBool()) return; } QGraphicsScene::drawForeground(x1, x2); }
    void dropEvent(QGraphicsSceneDragDropEvent* x1) { void *fun = Objects::overrideFun(unique, 116); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 116, args).toBool()) return; } QGraphicsScene::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QGraphicsScene::focusInEvent(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QGraphicsScene::focusOutEvent(x1); }
    void helpEvent(QGraphicsSceneHelpEvent* x1) { void *fun = Objects::overrideFun(unique, 117); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 117, args).toBool()) return; } QGraphicsScene::helpEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QGraphicsScene::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QGraphicsScene::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QGraphicsScene::keyReleaseEvent(x1); }
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 118); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 118, args).toBool()) return; } QGraphicsScene::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QGraphicsSceneMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 119); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 119, args).toBool()) return; } QGraphicsScene::mouseMoveEvent(x1); }
    void mousePressEvent(QGraphicsSceneMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 120); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 120, args).toBool()) return; } QGraphicsScene::mousePressEvent(x1); }
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 121); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 121, args).toBool()) return; } QGraphicsScene::mouseReleaseEvent(x1); }
    void wheelEvent(QGraphicsSceneWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 122); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 122, args).toBool()) return; } QGraphicsScene::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QGraphicsScene::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QGraphicsScene::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QGraphicsScene::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QGraphicsScene::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QGraphicsScene::timerEvent(x1); }
};

class LGraphicsTextItem : public QGraphicsTextItem {
    Q_OBJECT
public:
    LGraphicsTextItem(uint u, QGraphicsItem* x1 = 0) : QGraphicsTextItem(x1), unique(u) {}
    LGraphicsTextItem(uint u, const QString& x1, QGraphicsItem* x2 = 0) : QGraphicsTextItem(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QRectF boundingRect() const { void *fun = Objects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(this, fun, 98, 0)); } return  QGraphicsTextItem::boundingRect(); }
    bool contains(const QPointF& x1) const { void *fun = Objects::overrideFun(unique, 123); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 123, args).toBool(); } return  QGraphicsTextItem::contains(x1); }
    bool isObscuredBy(const QGraphicsItem* x1) const { void *fun = Objects::overrideFun(unique, 124); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 124, args).toBool(); } return  QGraphicsTextItem::isObscuredBy(x1); }
    QPainterPath opaqueArea() const { void *fun = Objects::overrideFun(unique, 125); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(this, fun, 125, 0)); } return  QGraphicsTextItem::opaqueArea(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { void *fun = Objects::overrideFun(unique, 94); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 94, args).toBool()) return; } QGraphicsTextItem::paint(x1, x2, x3); }
    QPainterPath shape() const { void *fun = Objects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(this, fun, 99, 0)); } return  QGraphicsTextItem::shape(); }
    int type() const { void *fun = Objects::overrideFun(unique, 96); if(fun) { return callOverrideFun(this, fun, 96, 0).toInt(); } return  QGraphicsTextItem::type(); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QGraphicsTextItem::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QGraphicsTextItem::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QGraphicsTextItem::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QGraphicsTextItem::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QGraphicsTextItem::timerEvent(x1); }
};

class LGraphicsView : public QGraphicsView {
    Q_OBJECT
public:
    LGraphicsView(uint u, QWidget* x1 = 0) : QGraphicsView(x1), unique(u) {}
    LGraphicsView(uint u, QGraphicsScene* x1, QWidget* x2 = 0) : QGraphicsView(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QGraphicsView::inputMethodQuery(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QGraphicsView::sizeHint(); }
    void drawBackground(QPainter* x1, const QRectF& x2) { void *fun = Objects::overrideFun(unique, 114); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 114, args).toBool()) return; } QGraphicsView::drawBackground(x1, x2); }
    void drawForeground(QPainter* x1, const QRectF& x2) { void *fun = Objects::overrideFun(unique, 115); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 115, args).toBool()) return; } QGraphicsView::drawForeground(x1, x2); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QGraphicsView::minimumSizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QGraphicsView::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QGraphicsView::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QGraphicsView::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QGraphicsView::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QGraphicsView::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QGraphicsView::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QGraphicsView::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QGraphicsView::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QGraphicsView::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QGraphicsView::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QGraphicsView::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QGraphicsView::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QGraphicsView::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QGraphicsView::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QGraphicsView::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QGraphicsView::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QGraphicsView::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QGraphicsView::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QGraphicsView::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QGraphicsView::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QGraphicsView::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QGraphicsView::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QGraphicsView::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QGraphicsView::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QGraphicsView::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QGraphicsView::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QGraphicsView::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QGraphicsView::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QGraphicsView::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QGraphicsView::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QGraphicsView::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QGraphicsView::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QGraphicsView::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QGraphicsView::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QGraphicsView::timerEvent(x1); }
};

class LGraphicsWidget : public QGraphicsWidget {
    Q_OBJECT
public:
    LGraphicsWidget(uint u, QGraphicsItem* x1 = 0, Qt::WindowFlags x2 = 0) : QGraphicsWidget(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void paintWindowFrame(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void *fun = Objects::overrideFun(unique, 97); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 97, args).toBool()) return; } QGraphicsWidget::paintWindowFrame(x1, x2, x3); }
    QRectF boundingRect() const { void *fun = Objects::overrideFun(unique, 98); if(fun) { return qVariantValue<QRectF>(callOverrideFun(this, fun, 98, 0)); } return  QGraphicsWidget::boundingRect(); }
    void paint(QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { void *fun = Objects::overrideFun(unique, 94); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 94, args).toBool()) return; } QGraphicsWidget::paint(x1, x2, x3); }
    void setGeometry(const QRectF& x1) { void *fun = Objects::overrideFun(unique, 95); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 95, args).toBool()) return; } QGraphicsWidget::setGeometry(x1); }
    QPainterPath shape() const { void *fun = Objects::overrideFun(unique, 99); if(fun) { return qVariantValue<QPainterPath>(callOverrideFun(this, fun, 99, 0)); } return  QGraphicsWidget::shape(); }
    int type() const { void *fun = Objects::overrideFun(unique, 96); if(fun) { return callOverrideFun(this, fun, 96, 0).toInt(); } return  QGraphicsWidget::type(); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QGraphicsWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QGraphicsWidget::closeEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QGraphicsWidget::focusNextPrevChild(x1); }
    void grabKeyboardEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 100); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 100, args).toBool()) return; } QGraphicsWidget::grabKeyboardEvent(x1); }
    void grabMouseEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 101); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 101, args).toBool()) return; } QGraphicsWidget::grabMouseEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QGraphicsWidget::hideEvent(x1); }
    void initStyleOption(QStyleOption* x1) const { void *fun = Objects::overrideFun(unique, 102); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 102, args).toBool()) return; } QGraphicsWidget::initStyleOption(x1); }
    void moveEvent(QGraphicsSceneMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 103); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 103, args).toBool()) return; } QGraphicsWidget::moveEvent(x1); }
    void polishEvent() { void *fun = Objects::overrideFun(unique, 104); if(fun) { if(callOverrideFun(this, fun, 104, 0).toBool()) return; } QGraphicsWidget::polishEvent(); }
    void resizeEvent(QGraphicsSceneResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 105); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 105, args).toBool()) return; } QGraphicsWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QGraphicsWidget::showEvent(x1); }
    void ungrabKeyboardEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 106); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 106, args).toBool()) return; } QGraphicsWidget::ungrabKeyboardEvent(x1); }
    void ungrabMouseEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 107); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 107, args).toBool()) return; } QGraphicsWidget::ungrabMouseEvent(x1); }
    bool windowFrameEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 108); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 108, args).toBool(); } return  QGraphicsWidget::windowFrameEvent(x1); }
    Qt::WindowFrameSection windowFrameSectionAt(const QPointF& x1) const { void *fun = Objects::overrideFun(unique, 109); if(fun) { const void *args[] = { &x1 }; return (Qt::WindowFrameSection)callOverrideFun(this, fun, 109, args).toInt(); } return  QGraphicsWidget::windowFrameSectionAt(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QGraphicsWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QGraphicsWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QGraphicsWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QGraphicsWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QGraphicsWidget::timerEvent(x1); }
};

class LGridLayout : public QGridLayout {
    Q_OBJECT
public:
    LGridLayout(uint u, QWidget* x1) : QGridLayout(x1), unique(u) {}
    LGridLayout(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    int count() const { void *fun = Objects::overrideFun(unique, 81); if(fun) { return callOverrideFun(this, fun, 81, 0).toInt(); } return  QGridLayout::count(); }
    Qt::Orientations expandingDirections() const { void *fun = Objects::overrideFun(unique, 82); if(fun) { return (Qt::Orientations)callOverrideFun(this, fun, 82, 0).toInt(); } return  QGridLayout::expandingDirections(); }
    bool hasHeightForWidth() const { void *fun = Objects::overrideFun(unique, 83); if(fun) { return callOverrideFun(this, fun, 83, 0).toBool(); } return  QGridLayout::hasHeightForWidth(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QGridLayout::heightForWidth(x1); }
    void invalidate() { void *fun = Objects::overrideFun(unique, 84); if(fun) { if(callOverrideFun(this, fun, 84, 0).toBool()) return; } QGridLayout::invalidate(); }
    QLayoutItem* itemAt(int x1) const { void *fun = Objects::overrideFun(unique, 85); if(fun) { const void *args[] = { &x1 }; return (QLayoutItem*)qVariantValue<void*>(callOverrideFun(this, fun, 85, args)); } return  QGridLayout::itemAt(x1); }
    QSize maximumSize() const { void *fun = Objects::overrideFun(unique, 93); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 93, 0)); } return  QGridLayout::maximumSize(); }
    int minimumHeightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 126); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 126, args).toInt(); } return  QGridLayout::minimumHeightForWidth(x1); }
    QSize minimumSize() const { void *fun = Objects::overrideFun(unique, 86); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 86, 0)); } return  QGridLayout::minimumSize(); }
    void setGeometry(const QRect& x1) { void *fun = Objects::overrideFun(unique, 87); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 87, args).toBool()) return; } QGridLayout::setGeometry(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QGridLayout::sizeHint(); }
    QLayoutItem* takeAt(int x1) { void *fun = Objects::overrideFun(unique, 88); if(fun) { const void *args[] = { &x1 }; return (QLayoutItem*)qVariantValue<void*>(callOverrideFun(this, fun, 88, args)); } return  QGridLayout::takeAt(x1); }
    void addItem(QLayoutItem* x1) { void *fun = Objects::overrideFun(unique, 80); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 80, args).toBool()) return; } QGridLayout::addItem(x1); }
    int indexOf(QWidget* x1) const { void *fun = Objects::overrideFun(unique, 89); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 89, args).toInt(); } return  QGridLayout::indexOf(x1); }
    QRect geometry() const { void *fun = Objects::overrideFun(unique, 90); if(fun) { return qVariantValue<QRect>(callOverrideFun(this, fun, 90, 0)); } return  QGridLayout::geometry(); }
    bool isEmpty() const { void *fun = Objects::overrideFun(unique, 91); if(fun) { return callOverrideFun(this, fun, 91, 0).toBool(); } return  QGridLayout::isEmpty(); }
    QLayout* layout() { void *fun = Objects::overrideFun(unique, 92); if(fun) { return (QLayout*)qVariantValue<void*>(callOverrideFun(this, fun, 92, 0)); } return  QGridLayout::layout(); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QGridLayout::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QGridLayout::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QGridLayout::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QGridLayout::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QGridLayout::timerEvent(x1); }
};

class LGroupBox : public QGroupBox {
    Q_OBJECT
public:
    LGroupBox(uint u, QWidget* x1 = 0) : QGroupBox(x1), unique(u) {}
    LGroupBox(uint u, const QString& x1, QWidget* x2 = 0) : QGroupBox(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QGroupBox::minimumSizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QGroupBox::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QGroupBox::inputMethodQuery(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QGroupBox::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QGroupBox::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QGroupBox::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QGroupBox::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QGroupBox::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QGroupBox::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QGroupBox::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QGroupBox::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QGroupBox::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QGroupBox::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QGroupBox::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QGroupBox::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QGroupBox::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QGroupBox::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QGroupBox::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QGroupBox::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QGroupBox::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QGroupBox::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QGroupBox::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QGroupBox::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QGroupBox::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QGroupBox::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QGroupBox::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QGroupBox::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QGroupBox::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QGroupBox::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QGroupBox::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QGroupBox::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QGroupBox::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QGroupBox::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QGroupBox::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QGroupBox::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QGroupBox::timerEvent(x1); }
};

class LHBoxLayout : public QHBoxLayout {
    Q_OBJECT
public:
    LHBoxLayout(uint u) : unique(u) {}
    LHBoxLayout(uint u, QWidget* x1) : QHBoxLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void addItem(QLayoutItem* x1) { void *fun = Objects::overrideFun(unique, 80); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 80, args).toBool()) return; } QHBoxLayout::addItem(x1); }
    int count() const { void *fun = Objects::overrideFun(unique, 81); if(fun) { return callOverrideFun(this, fun, 81, 0).toInt(); } return  QHBoxLayout::count(); }
    Qt::Orientations expandingDirections() const { void *fun = Objects::overrideFun(unique, 82); if(fun) { return (Qt::Orientations)callOverrideFun(this, fun, 82, 0).toInt(); } return  QHBoxLayout::expandingDirections(); }
    bool hasHeightForWidth() const { void *fun = Objects::overrideFun(unique, 83); if(fun) { return callOverrideFun(this, fun, 83, 0).toBool(); } return  QHBoxLayout::hasHeightForWidth(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QHBoxLayout::heightForWidth(x1); }
    void invalidate() { void *fun = Objects::overrideFun(unique, 84); if(fun) { if(callOverrideFun(this, fun, 84, 0).toBool()) return; } QHBoxLayout::invalidate(); }
    QLayoutItem* itemAt(int x1) const { void *fun = Objects::overrideFun(unique, 85); if(fun) { const void *args[] = { &x1 }; return (QLayoutItem*)qVariantValue<void*>(callOverrideFun(this, fun, 85, args)); } return  QHBoxLayout::itemAt(x1); }
    QSize maximumSize() const { void *fun = Objects::overrideFun(unique, 93); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 93, 0)); } return  QHBoxLayout::maximumSize(); }
    int minimumHeightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 126); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 126, args).toInt(); } return  QHBoxLayout::minimumHeightForWidth(x1); }
    QSize minimumSize() const { void *fun = Objects::overrideFun(unique, 86); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 86, 0)); } return  QHBoxLayout::minimumSize(); }
    void setGeometry(const QRect& x1) { void *fun = Objects::overrideFun(unique, 87); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 87, args).toBool()) return; } QHBoxLayout::setGeometry(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QHBoxLayout::sizeHint(); }
    QLayoutItem* takeAt(int x1) { void *fun = Objects::overrideFun(unique, 88); if(fun) { const void *args[] = { &x1 }; return (QLayoutItem*)qVariantValue<void*>(callOverrideFun(this, fun, 88, args)); } return  QHBoxLayout::takeAt(x1); }
    int indexOf(QWidget* x1) const { void *fun = Objects::overrideFun(unique, 89); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 89, args).toInt(); } return  QHBoxLayout::indexOf(x1); }
    QRect geometry() const { void *fun = Objects::overrideFun(unique, 90); if(fun) { return qVariantValue<QRect>(callOverrideFun(this, fun, 90, 0)); } return  QHBoxLayout::geometry(); }
    bool isEmpty() const { void *fun = Objects::overrideFun(unique, 91); if(fun) { return callOverrideFun(this, fun, 91, 0).toBool(); } return  QHBoxLayout::isEmpty(); }
    QLayout* layout() { void *fun = Objects::overrideFun(unique, 92); if(fun) { return (QLayout*)qVariantValue<void*>(callOverrideFun(this, fun, 92, 0)); } return  QHBoxLayout::layout(); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QHBoxLayout::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QHBoxLayout::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QHBoxLayout::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QHBoxLayout::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QHBoxLayout::timerEvent(x1); }
};

class LInputDialog : public QInputDialog {
    Q_OBJECT
public:
    LInputDialog(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) : QInputDialog(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void done(int x1) { void *fun = Objects::overrideFun(unique, 127); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 127, args).toBool()) return; } QInputDialog::done(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QInputDialog::minimumSizeHint(); }
    void setVisible(bool x1) { void *fun = Objects::overrideFun(unique, 77); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 77, args).toBool()) return; } QInputDialog::setVisible(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QInputDialog::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QInputDialog::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QInputDialog::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QInputDialog::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QInputDialog::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QInputDialog::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QInputDialog::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QInputDialog::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QInputDialog::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QInputDialog::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QInputDialog::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QInputDialog::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QInputDialog::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QInputDialog::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QInputDialog::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QInputDialog::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QInputDialog::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QInputDialog::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QInputDialog::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QInputDialog::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QInputDialog::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QInputDialog::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QInputDialog::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QInputDialog::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QInputDialog::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QInputDialog::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QInputDialog::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QInputDialog::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QInputDialog::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QInputDialog::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QInputDialog::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QInputDialog::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QInputDialog::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QInputDialog::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QInputDialog::timerEvent(x1); }
};

class LItemDelegate : public QItemDelegate {
    Q_OBJECT
public:
    LItemDelegate(uint u, QObject* x1 = 0) : QItemDelegate(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QWidget* createEditor(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { void *fun = Objects::overrideFun(unique, 128); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return (QWidget*)qVariantValue<void*>(callOverrideFun(this, fun, 128, args)); } return  QItemDelegate::createEditor(x1, x2, x3); }
    void paint(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { void *fun = Objects::overrideFun(unique, 129); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 129, args).toBool()) return; } QItemDelegate::paint(x1, x2, x3); }
    void setEditorData(QWidget* x1, const QModelIndex& x2) const { void *fun = Objects::overrideFun(unique, 130); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 130, args).toBool()) return; } QItemDelegate::setEditorData(x1, x2); }
    void setModelData(QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const { void *fun = Objects::overrideFun(unique, 131); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 131, args).toBool()) return; } QItemDelegate::setModelData(x1, x2, x3); }
    QSize sizeHint(const QStyleOptionViewItem& x1, const QModelIndex& x2) const { void *fun = Objects::overrideFun(unique, 132); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QSize>(callOverrideFun(this, fun, 132, args)); } return  QItemDelegate::sizeHint(x1, x2); }
    void updateEditorGeometry(QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { void *fun = Objects::overrideFun(unique, 133); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 133, args).toBool()) return; } QItemDelegate::updateEditorGeometry(x1, x2, x3); }
    void drawCheck(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, Qt::CheckState x4) const { void *fun = Objects::overrideFun(unique, 134); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4 }; if(callOverrideFun(this, fun, 134, args).toBool()) return; } QItemDelegate::drawCheck(x1, x2, x3, x4); }
    void drawDecoration(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QPixmap& x4) const { void *fun = Objects::overrideFun(unique, 135); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4 }; if(callOverrideFun(this, fun, 135, args).toBool()) return; } QItemDelegate::drawDecoration(x1, x2, x3, x4); }
    void drawDisplay(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3, const QString& x4) const { void *fun = Objects::overrideFun(unique, 136); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4 }; if(callOverrideFun(this, fun, 136, args).toBool()) return; } QItemDelegate::drawDisplay(x1, x2, x3, x4); }
    void drawFocus(QPainter* x1, const QStyleOptionViewItem& x2, const QRect& x3) const { void *fun = Objects::overrideFun(unique, 137); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 137, args).toBool()) return; } QItemDelegate::drawFocus(x1, x2, x3); }
    bool editorEvent(QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4) { void *fun = Objects::overrideFun(unique, 138); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4 }; return callOverrideFun(this, fun, 138, args).toBool(); } return  QItemDelegate::editorEvent(x1, x2, x3, x4); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QItemDelegate::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QItemDelegate::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QItemDelegate::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QItemDelegate::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QItemDelegate::timerEvent(x1); }
};

class LItemSelectionModel : public QItemSelectionModel {
    Q_OBJECT
public:
    LItemSelectionModel(uint u, QAbstractItemModel* x1) : QItemSelectionModel(x1), unique(u) {}
    LItemSelectionModel(uint u, QAbstractItemModel* x1, QObject* x2) : QItemSelectionModel(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QItemSelectionModel::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QItemSelectionModel::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QItemSelectionModel::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QItemSelectionModel::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QItemSelectionModel::timerEvent(x1); }
};

class LLCDNumber : public QLCDNumber {
    Q_OBJECT
public:
    LLCDNumber(uint u, QWidget* x1 = 0) : QLCDNumber(x1), unique(u) {}
    LLCDNumber(uint u, uint x1, QWidget* x2 = 0) : QLCDNumber(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QLCDNumber::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QLCDNumber::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QLCDNumber::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QLCDNumber::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QLCDNumber::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QLCDNumber::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QLCDNumber::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QLCDNumber::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QLCDNumber::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QLCDNumber::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QLCDNumber::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QLCDNumber::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QLCDNumber::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QLCDNumber::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QLCDNumber::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QLCDNumber::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QLCDNumber::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QLCDNumber::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QLCDNumber::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QLCDNumber::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QLCDNumber::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QLCDNumber::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QLCDNumber::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QLCDNumber::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QLCDNumber::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QLCDNumber::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QLCDNumber::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QLCDNumber::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QLCDNumber::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QLCDNumber::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QLCDNumber::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QLCDNumber::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QLCDNumber::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QLCDNumber::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QLCDNumber::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QLCDNumber::timerEvent(x1); }
};

class LLabel : public QLabel {
    Q_OBJECT
public:
    LLabel(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) : QLabel(x1, x2), unique(u) {}
    LLabel(uint u, const QString& x1, QWidget* x2 = 0, Qt::WindowFlags x3 = 0) : QLabel(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QLabel::heightForWidth(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QLabel::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QLabel::sizeHint(); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QLabel::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QLabel::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QLabel::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QLabel::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QLabel::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QLabel::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QLabel::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QLabel::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QLabel::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QLabel::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QLabel::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QLabel::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QLabel::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QLabel::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QLabel::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QLabel::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QLabel::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QLabel::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QLabel::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QLabel::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QLabel::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QLabel::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QLabel::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QLabel::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QLabel::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QLabel::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QLabel::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QLabel::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QLabel::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QLabel::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QLabel::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QLabel::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QLabel::timerEvent(x1); }
};

class LLineEdit : public QLineEdit {
    Q_OBJECT
public:
    LLineEdit(uint u, QWidget* x1 = 0) : QLineEdit(x1), unique(u) {}
    LLineEdit(uint u, const QString& x1, QWidget* x2 = 0) : QLineEdit(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QLineEdit::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QLineEdit::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QLineEdit::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QLineEdit::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QLineEdit::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QLineEdit::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QLineEdit::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QLineEdit::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QLineEdit::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QLineEdit::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QLineEdit::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QLineEdit::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QLineEdit::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QLineEdit::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QLineEdit::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QLineEdit::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QLineEdit::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QLineEdit::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QLineEdit::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QLineEdit::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QLineEdit::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QLineEdit::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QLineEdit::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QLineEdit::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QLineEdit::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QLineEdit::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QLineEdit::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QLineEdit::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QLineEdit::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QLineEdit::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QLineEdit::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QLineEdit::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QLineEdit::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QLineEdit::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QLineEdit::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QLineEdit::timerEvent(x1); }
};

class LListView : public QListView {
    Q_OBJECT
public:
    LListView(uint u, QWidget* x1 = 0) : QListView(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QModelIndex indexAt(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 41); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 41, args)); } return  QListView::indexAt(x1); }
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void *fun = Objects::overrideFun(unique, 42); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 42, args).toBool()) return; } QListView::scrollTo(x1, x2); }
    QRect visualRect(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 47); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(this, fun, 47, args)); } return  QListView::visualRect(x1); }
    void keyboardSearch(const QString& x1) { void *fun = Objects::overrideFun(unique, 49); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 49, args).toBool()) return; } QListView::keyboardSearch(x1); }
    void setModel(QAbstractItemModel* x1) { void *fun = Objects::overrideFun(unique, 44); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 44, args).toBool()) return; } QListView::setModel(x1); }
    void setSelectionModel(QItemSelectionModel* x1) { void *fun = Objects::overrideFun(unique, 46); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 46, args).toBool()) return; } QListView::setSelectionModel(x1); }
    int sizeHintForColumn(int x1) const { void *fun = Objects::overrideFun(unique, 50); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 50, args).toInt(); } return  QListView::sizeHintForColumn(x1); }
    int sizeHintForRow(int x1) const { void *fun = Objects::overrideFun(unique, 51); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 51, args).toInt(); } return  QListView::sizeHintForRow(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QListView::inputMethodQuery(x1); }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void *fun = Objects::overrideFun(unique, 52); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 52, args).toBool(); } return  QListView::edit(x1, x2, x3); }
    int horizontalOffset() const { void *fun = Objects::overrideFun(unique, 53); if(fun) { return callOverrideFun(this, fun, 53, 0).toInt(); } return  QListView::horizontalOffset(); }
    bool isIndexHidden(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 54); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 54, args).toBool(); } return  QListView::isIndexHidden(x1); }
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void *fun = Objects::overrideFun(unique, 55); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 55, args)); } return  QListView::moveCursor(x1, x2); }
    QModelIndexList selectedIndexes() const { void *fun = Objects::overrideFun(unique, 56); if(fun) { return qVariantValue<QModelIndexList>(callOverrideFun(this, fun, 56, 0)); } return  QListView::selectedIndexes(); }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void *fun = Objects::overrideFun(unique, 57); if(fun) { const void *args[] = { &x1, &x2 }; return (QItemSelectionModel::SelectionFlags)callOverrideFun(this, fun, 57, args).toInt(); } return  QListView::selectionCommand(x1, x2); }
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void *fun = Objects::overrideFun(unique, 58); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 58, args).toBool()) return; } QListView::setSelection(x1, x2); }
    void startDrag(Qt::DropActions x1) { void *fun = Objects::overrideFun(unique, 59); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 59, args).toBool()) return; } QListView::startDrag(x1); }
    int verticalOffset() const { void *fun = Objects::overrideFun(unique, 60); if(fun) { return callOverrideFun(this, fun, 60, 0).toInt(); } return  QListView::verticalOffset(); }
    QStyleOptionViewItem viewOptions() const { void *fun = Objects::overrideFun(unique, 61); if(fun) { return qVariantValue<QStyleOptionViewItem>(callOverrideFun(this, fun, 61, 0)); } return  QListView::viewOptions(); }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void *fun = Objects::overrideFun(unique, 62); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRegion>(callOverrideFun(this, fun, 62, args)); } return  QListView::visualRegionForSelection(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QListView::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QListView::sizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QListView::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QListView::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QListView::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QListView::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QListView::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QListView::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QListView::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QListView::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QListView::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QListView::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QListView::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QListView::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QListView::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QListView::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QListView::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QListView::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QListView::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QListView::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QListView::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QListView::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QListView::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QListView::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QListView::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QListView::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QListView::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QListView::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QListView::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QListView::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QListView::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QListView::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QListView::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QListView::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QListView::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QListView::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QListView::timerEvent(x1); }
};

class LListWidget : public QListWidget {
    Q_OBJECT
public:
    LListWidget(uint u, QWidget* x1 = 0) : QListWidget(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QListWidget::dropEvent(x1); }
    bool dropMimeData(int x1, const QMimeData* x2, Qt::DropAction x3) { void *fun = Objects::overrideFun(unique, 139); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 139, args).toBool(); } return  QListWidget::dropMimeData(x1, x2, x3); }
    QMimeData* mimeData(const QList<QListWidgetItem*> x1) const { void *fun = Objects::overrideFun(unique, 140); if(fun) { const void *args[] = { &x1 }; return (QMimeData*)qVariantValue<void*>(callOverrideFun(this, fun, 140, args)); } return  QListWidget::mimeData(x1); }
    QStringList mimeTypes() const { void *fun = Objects::overrideFun(unique, 141); if(fun) { return qVariantValue<QStringList>(callOverrideFun(this, fun, 141, 0)); } return  QListWidget::mimeTypes(); }
    Qt::DropActions supportedDropActions() const { void *fun = Objects::overrideFun(unique, 142); if(fun) { return (Qt::DropActions)callOverrideFun(this, fun, 142, 0).toInt(); } return  QListWidget::supportedDropActions(); }
    QModelIndex indexAt(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 41); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 41, args)); } return  QListWidget::indexAt(x1); }
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void *fun = Objects::overrideFun(unique, 42); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 42, args).toBool()) return; } QListWidget::scrollTo(x1, x2); }
    QRect visualRect(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 47); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(this, fun, 47, args)); } return  QListWidget::visualRect(x1); }
    void keyboardSearch(const QString& x1) { void *fun = Objects::overrideFun(unique, 49); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 49, args).toBool()) return; } QListWidget::keyboardSearch(x1); }
    void setSelectionModel(QItemSelectionModel* x1) { void *fun = Objects::overrideFun(unique, 46); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 46, args).toBool()) return; } QListWidget::setSelectionModel(x1); }
    int sizeHintForColumn(int x1) const { void *fun = Objects::overrideFun(unique, 50); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 50, args).toInt(); } return  QListWidget::sizeHintForColumn(x1); }
    int sizeHintForRow(int x1) const { void *fun = Objects::overrideFun(unique, 51); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 51, args).toInt(); } return  QListWidget::sizeHintForRow(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QListWidget::inputMethodQuery(x1); }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void *fun = Objects::overrideFun(unique, 52); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 52, args).toBool(); } return  QListWidget::edit(x1, x2, x3); }
    int horizontalOffset() const { void *fun = Objects::overrideFun(unique, 53); if(fun) { return callOverrideFun(this, fun, 53, 0).toInt(); } return  QListWidget::horizontalOffset(); }
    bool isIndexHidden(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 54); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 54, args).toBool(); } return  QListWidget::isIndexHidden(x1); }
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void *fun = Objects::overrideFun(unique, 55); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 55, args)); } return  QListWidget::moveCursor(x1, x2); }
    QModelIndexList selectedIndexes() const { void *fun = Objects::overrideFun(unique, 56); if(fun) { return qVariantValue<QModelIndexList>(callOverrideFun(this, fun, 56, 0)); } return  QListWidget::selectedIndexes(); }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void *fun = Objects::overrideFun(unique, 57); if(fun) { const void *args[] = { &x1, &x2 }; return (QItemSelectionModel::SelectionFlags)callOverrideFun(this, fun, 57, args).toInt(); } return  QListWidget::selectionCommand(x1, x2); }
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void *fun = Objects::overrideFun(unique, 58); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 58, args).toBool()) return; } QListWidget::setSelection(x1, x2); }
    void startDrag(Qt::DropActions x1) { void *fun = Objects::overrideFun(unique, 59); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 59, args).toBool()) return; } QListWidget::startDrag(x1); }
    int verticalOffset() const { void *fun = Objects::overrideFun(unique, 60); if(fun) { return callOverrideFun(this, fun, 60, 0).toInt(); } return  QListWidget::verticalOffset(); }
    QStyleOptionViewItem viewOptions() const { void *fun = Objects::overrideFun(unique, 61); if(fun) { return qVariantValue<QStyleOptionViewItem>(callOverrideFun(this, fun, 61, 0)); } return  QListWidget::viewOptions(); }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void *fun = Objects::overrideFun(unique, 62); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRegion>(callOverrideFun(this, fun, 62, args)); } return  QListWidget::visualRegionForSelection(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QListWidget::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QListWidget::sizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QListWidget::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QListWidget::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QListWidget::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QListWidget::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QListWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QListWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QListWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QListWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QListWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QListWidget::dragMoveEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QListWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QListWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QListWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QListWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QListWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QListWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QListWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QListWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QListWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QListWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QListWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QListWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QListWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QListWidget::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QListWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QListWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QListWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QListWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QListWidget::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QListWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QListWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QListWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QListWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QListWidget::timerEvent(x1); }
};

class LMainWindow : public QMainWindow {
    Q_OBJECT
public:
    LMainWindow(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) : QMainWindow(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QMenu* createPopupMenu() { void *fun = Objects::overrideFun(unique, 143); if(fun) { return (QMenu*)qVariantValue<void*>(callOverrideFun(this, fun, 143, 0)); } return  QMainWindow::createPopupMenu(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QMainWindow::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QMainWindow::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QMainWindow::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QMainWindow::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QMainWindow::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QMainWindow::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QMainWindow::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QMainWindow::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QMainWindow::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QMainWindow::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QMainWindow::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QMainWindow::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QMainWindow::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QMainWindow::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QMainWindow::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QMainWindow::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QMainWindow::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QMainWindow::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QMainWindow::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QMainWindow::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QMainWindow::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QMainWindow::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QMainWindow::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QMainWindow::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QMainWindow::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QMainWindow::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QMainWindow::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QMainWindow::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QMainWindow::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QMainWindow::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QMainWindow::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QMainWindow::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QMainWindow::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QMainWindow::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QMainWindow::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QMainWindow::timerEvent(x1); }
};

class LMenu : public QMenu {
    Q_OBJECT
public:
    LMenu(uint u, QWidget* x1 = 0) : QMenu(x1), unique(u) {}
    LMenu(uint u, const QString& x1, QWidget* x2 = 0) : QMenu(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QMenu::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QMenu::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QMenu::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QMenu::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QMenu::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QMenu::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QMenu::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QMenu::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QMenu::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QMenu::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QMenu::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QMenu::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QMenu::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QMenu::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QMenu::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QMenu::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QMenu::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QMenu::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QMenu::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QMenu::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QMenu::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QMenu::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QMenu::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QMenu::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QMenu::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QMenu::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QMenu::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QMenu::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QMenu::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QMenu::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QMenu::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QMenu::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QMenu::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QMenu::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QMenu::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QMenu::timerEvent(x1); }
};

class LMenuBar : public QMenuBar {
    Q_OBJECT
public:
    LMenuBar(uint u, QWidget* x1 = 0) : QMenuBar(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QMenuBar::heightForWidth(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QMenuBar::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QMenuBar::sizeHint(); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QMenuBar::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QMenuBar::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QMenuBar::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QMenuBar::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QMenuBar::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QMenuBar::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QMenuBar::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QMenuBar::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QMenuBar::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QMenuBar::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QMenuBar::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QMenuBar::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QMenuBar::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QMenuBar::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QMenuBar::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QMenuBar::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QMenuBar::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QMenuBar::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QMenuBar::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QMenuBar::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QMenuBar::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QMenuBar::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QMenuBar::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QMenuBar::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QMenuBar::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QMenuBar::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QMenuBar::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QMenuBar::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QMenuBar::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QMenuBar::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QMenuBar::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QMenuBar::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QMenuBar::timerEvent(x1); }
};

class LMessageBox : public QMessageBox {
    Q_OBJECT
public:
    LMessageBox(uint u, QWidget* x1 = 0) : QMessageBox(x1), unique(u) {}
    LMessageBox(uint u, Icon x1, const QString& x2, const QString& x3, StandardButtons x4 = NoButton, QWidget* x5 = 0, Qt::WindowFlags x6 = Qt::Dialog|Qt::MSWindowsFixedSizeDialogHint) : QMessageBox(x1, x2, x3, x4, x5, x6), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setVisible(bool x1) { void *fun = Objects::overrideFun(unique, 77); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 77, args).toBool()) return; } QMessageBox::setVisible(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QMessageBox::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QMessageBox::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QMessageBox::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QMessageBox::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QMessageBox::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QMessageBox::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QMessageBox::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QMessageBox::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QMessageBox::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QMessageBox::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QMessageBox::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QMessageBox::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QMessageBox::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QMessageBox::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QMessageBox::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QMessageBox::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QMessageBox::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QMessageBox::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QMessageBox::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QMessageBox::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QMessageBox::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QMessageBox::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QMessageBox::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QMessageBox::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QMessageBox::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QMessageBox::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QMessageBox::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QMessageBox::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QMessageBox::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QMessageBox::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QMessageBox::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QMessageBox::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QMessageBox::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QMessageBox::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QMessageBox::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QMessageBox::timerEvent(x1); }
};

class LMimeData : public QMimeData {
    Q_OBJECT
public:
    LMimeData(uint u) : unique(u) {}

    static NumList overrideIds;
    uint unique;

    QStringList formats() const { void *fun = Objects::overrideFun(unique, 144); if(fun) { return qVariantValue<QStringList>(callOverrideFun(this, fun, 144, 0)); } return  QMimeData::formats(); }
    bool hasFormat(const QString& x1) const { void *fun = Objects::overrideFun(unique, 145); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 145, args).toBool(); } return  QMimeData::hasFormat(x1); }
    QVariant retrieveData(const QString& x1, QVariant::Type x2) const { void *fun = Objects::overrideFun(unique, 146); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 146, args)); } return  QMimeData::retrieveData(x1, x2); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QMimeData::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QMimeData::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QMimeData::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QMimeData::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QMimeData::timerEvent(x1); }
};

class LMovie : public QMovie {
    Q_OBJECT
public:
    LMovie(uint u, QObject* x1 = 0) : QMovie(x1), unique(u) {}
    LMovie(uint u, const QString& x1, const QByteArray& x2 = QByteArray(), QObject* x3 = 0) : QMovie(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QMovie::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QMovie::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QMovie::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QMovie::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QMovie::timerEvent(x1); }
};

class LObject : public QObject {
    Q_OBJECT
public:
    LObject(uint u, QObject* x1 = 0) : QObject(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QObject::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QObject::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QObject::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QObject::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QObject::timerEvent(x1); }
};

class LPlainTextEdit : public QPlainTextEdit {
    Q_OBJECT
public:
    LPlainTextEdit(uint u, QWidget* x1 = 0) : QPlainTextEdit(x1), unique(u) {}
    LPlainTextEdit(uint u, const QString& x1, QWidget* x2 = 0) : QPlainTextEdit(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QVariant loadResource(int x1, const QUrl& x2) { void *fun = Objects::overrideFun(unique, 147); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 147, args)); } return  QPlainTextEdit::loadResource(x1, x2); }
    bool canInsertFromMimeData(const QMimeData* x1) const { void *fun = Objects::overrideFun(unique, 148); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 148, args).toBool(); } return  QPlainTextEdit::canInsertFromMimeData(x1); }
    QMimeData* createMimeDataFromSelection() const { void *fun = Objects::overrideFun(unique, 149); if(fun) { return (QMimeData*)qVariantValue<void*>(callOverrideFun(this, fun, 149, 0)); } return  QPlainTextEdit::createMimeDataFromSelection(); }
    void insertFromMimeData(const QMimeData* x1) { void *fun = Objects::overrideFun(unique, 150); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 150, args).toBool()) return; } QPlainTextEdit::insertFromMimeData(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QPlainTextEdit::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QPlainTextEdit::sizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QPlainTextEdit::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QPlainTextEdit::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QPlainTextEdit::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QPlainTextEdit::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QPlainTextEdit::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QPlainTextEdit::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QPlainTextEdit::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QPlainTextEdit::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QPlainTextEdit::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QPlainTextEdit::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QPlainTextEdit::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QPlainTextEdit::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QPlainTextEdit::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QPlainTextEdit::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QPlainTextEdit::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QPlainTextEdit::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QPlainTextEdit::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QPlainTextEdit::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QPlainTextEdit::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QPlainTextEdit::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QPlainTextEdit::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QPlainTextEdit::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QPlainTextEdit::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QPlainTextEdit::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QPlainTextEdit::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QPlainTextEdit::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QPlainTextEdit::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QPlainTextEdit::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QPlainTextEdit::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QPlainTextEdit::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QPlainTextEdit::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QPlainTextEdit::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QPlainTextEdit::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QPlainTextEdit::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QPlainTextEdit::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QPlainTextEdit::timerEvent(x1); }
};

class LProgressBar : public QProgressBar {
    Q_OBJECT
public:
    LProgressBar(uint u, QWidget* x1 = 0) : QProgressBar(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QString text() const { void *fun = Objects::overrideFun(unique, 151); if(fun) { return qVariantValue<QString>(callOverrideFun(this, fun, 151, 0)); } return  QProgressBar::text(); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QProgressBar::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QProgressBar::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QProgressBar::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QProgressBar::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QProgressBar::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QProgressBar::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QProgressBar::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QProgressBar::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QProgressBar::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QProgressBar::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QProgressBar::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QProgressBar::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QProgressBar::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QProgressBar::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QProgressBar::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QProgressBar::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QProgressBar::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QProgressBar::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QProgressBar::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QProgressBar::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QProgressBar::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QProgressBar::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QProgressBar::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QProgressBar::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QProgressBar::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QProgressBar::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QProgressBar::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QProgressBar::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QProgressBar::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QProgressBar::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QProgressBar::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QProgressBar::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QProgressBar::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QProgressBar::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QProgressBar::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QProgressBar::timerEvent(x1); }
};

class LPushButton : public QPushButton {
    Q_OBJECT
public:
    LPushButton(uint u, QWidget* x1 = 0) : QPushButton(x1), unique(u) {}
    LPushButton(uint u, const QString& x1, QWidget* x2 = 0) : QPushButton(x1, x2), unique(u) {}
    LPushButton(uint u, const QIcon& x1, const QString& x2, QWidget* x3 = 0) : QPushButton(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QPushButton::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QPushButton::sizeHint(); }
    void checkStateSet() { void *fun = Objects::overrideFun(unique, 38); if(fun) { if(callOverrideFun(this, fun, 38, 0).toBool()) return; } QPushButton::checkStateSet(); }
    bool hitButton(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 39); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 39, args).toBool(); } return  QPushButton::hitButton(x1); }
    void nextCheckState() { void *fun = Objects::overrideFun(unique, 40); if(fun) { if(callOverrideFun(this, fun, 40, 0).toBool()) return; } QPushButton::nextCheckState(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QPushButton::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QPushButton::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QPushButton::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QPushButton::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QPushButton::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QPushButton::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QPushButton::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QPushButton::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QPushButton::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QPushButton::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QPushButton::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QPushButton::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QPushButton::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QPushButton::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QPushButton::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QPushButton::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QPushButton::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QPushButton::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QPushButton::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QPushButton::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QPushButton::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QPushButton::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QPushButton::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QPushButton::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QPushButton::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QPushButton::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QPushButton::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QPushButton::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QPushButton::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QPushButton::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QPushButton::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QPushButton::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QPushButton::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QPushButton::timerEvent(x1); }
};

class LRadioButton : public QRadioButton {
    Q_OBJECT
public:
    LRadioButton(uint u, QWidget* x1 = 0) : QRadioButton(x1), unique(u) {}
    LRadioButton(uint u, const QString& x1, QWidget* x2 = 0) : QRadioButton(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QRadioButton::sizeHint(); }
    void checkStateSet() { void *fun = Objects::overrideFun(unique, 38); if(fun) { if(callOverrideFun(this, fun, 38, 0).toBool()) return; } QRadioButton::checkStateSet(); }
    bool hitButton(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 39); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 39, args).toBool(); } return  QRadioButton::hitButton(x1); }
    void nextCheckState() { void *fun = Objects::overrideFun(unique, 40); if(fun) { if(callOverrideFun(this, fun, 40, 0).toBool()) return; } QRadioButton::nextCheckState(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QRadioButton::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QRadioButton::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QRadioButton::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QRadioButton::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QRadioButton::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QRadioButton::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QRadioButton::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QRadioButton::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QRadioButton::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QRadioButton::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QRadioButton::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QRadioButton::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QRadioButton::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QRadioButton::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QRadioButton::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QRadioButton::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QRadioButton::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QRadioButton::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QRadioButton::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QRadioButton::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QRadioButton::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QRadioButton::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QRadioButton::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QRadioButton::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QRadioButton::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QRadioButton::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QRadioButton::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QRadioButton::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QRadioButton::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QRadioButton::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QRadioButton::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QRadioButton::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QRadioButton::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QRadioButton::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QRadioButton::timerEvent(x1); }
};

class LScrollArea : public QScrollArea {
    Q_OBJECT
public:
    LScrollArea(uint u, QWidget* x1 = 0) : QScrollArea(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QScrollArea::focusNextPrevChild(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QScrollArea::sizeHint(); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QScrollArea::minimumSizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QScrollArea::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QScrollArea::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QScrollArea::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QScrollArea::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QScrollArea::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QScrollArea::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QScrollArea::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QScrollArea::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QScrollArea::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QScrollArea::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QScrollArea::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QScrollArea::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QScrollArea::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QScrollArea::focusInEvent(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QScrollArea::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QScrollArea::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QScrollArea::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QScrollArea::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QScrollArea::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QScrollArea::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QScrollArea::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QScrollArea::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QScrollArea::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QScrollArea::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QScrollArea::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QScrollArea::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QScrollArea::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QScrollArea::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QScrollArea::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QScrollArea::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QScrollArea::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QScrollArea::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QScrollArea::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QScrollArea::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QScrollArea::timerEvent(x1); }
};

class LScrollBar : public QScrollBar {
    Q_OBJECT
public:
    LScrollBar(uint u, QWidget* x1 = 0) : QScrollBar(x1), unique(u) {}
    LScrollBar(uint u, Qt::Orientation x1, QWidget* x2 = 0) : QScrollBar(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QScrollBar::sizeHint(); }
    void sliderChange(SliderChange x1) { void *fun = Objects::overrideFun(unique, 76); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 76, args).toBool()) return; } QScrollBar::sliderChange(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QScrollBar::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QScrollBar::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QScrollBar::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QScrollBar::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QScrollBar::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QScrollBar::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QScrollBar::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QScrollBar::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QScrollBar::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QScrollBar::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QScrollBar::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QScrollBar::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QScrollBar::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QScrollBar::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QScrollBar::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QScrollBar::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QScrollBar::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QScrollBar::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QScrollBar::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QScrollBar::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QScrollBar::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QScrollBar::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QScrollBar::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QScrollBar::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QScrollBar::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QScrollBar::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QScrollBar::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QScrollBar::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QScrollBar::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QScrollBar::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QScrollBar::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QScrollBar::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QScrollBar::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QScrollBar::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QScrollBar::timerEvent(x1); }
};

class LSlider : public QSlider {
    Q_OBJECT
public:
    LSlider(uint u, QWidget* x1 = 0) : QSlider(x1), unique(u) {}
    LSlider(uint u, Qt::Orientation x1, QWidget* x2 = 0) : QSlider(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QSlider::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QSlider::sizeHint(); }
    void sliderChange(SliderChange x1) { void *fun = Objects::overrideFun(unique, 76); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 76, args).toBool()) return; } QSlider::sliderChange(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QSlider::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QSlider::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QSlider::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QSlider::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QSlider::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QSlider::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QSlider::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QSlider::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QSlider::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QSlider::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QSlider::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QSlider::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QSlider::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QSlider::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QSlider::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QSlider::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QSlider::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QSlider::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QSlider::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QSlider::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QSlider::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QSlider::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QSlider::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QSlider::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QSlider::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QSlider::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QSlider::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QSlider::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QSlider::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QSlider::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QSlider::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QSlider::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QSlider::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QSlider::timerEvent(x1); }
};

class LSpinBox : public QSpinBox {
    Q_OBJECT
public:
    LSpinBox(uint u, QWidget* x1 = 0) : QSpinBox(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QString textFromValue(int x1) const { void *fun = Objects::overrideFun(unique, 152); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QString>(callOverrideFun(this, fun, 152, args)); } return  QSpinBox::textFromValue(x1); }
    int valueFromText(const QString& x1) const { void *fun = Objects::overrideFun(unique, 79); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 79, args).toInt(); } return  QSpinBox::valueFromText(x1); }
    void fixup(QString& x1) const { void *fun = Objects::overrideFun(unique, 73); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 73, args).toBool()) return; } QSpinBox::fixup(x1); }
    void stepBy(int x1) { void *fun = Objects::overrideFun(unique, 70); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 70, args).toBool()) return; } QSpinBox::stepBy(x1); }
    QValidator::State validate(QString& x1, int& x2) const { void *fun = Objects::overrideFun(unique, 74); if(fun) { const void *args[] = { &x1, &x2 }; return (QValidator::State)callOverrideFun(this, fun, 74, args).toInt(); } return  QSpinBox::validate(x1, x2); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QSpinBox::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QSpinBox::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QSpinBox::sizeHint(); }
    StepEnabled stepEnabled() const { void *fun = Objects::overrideFun(unique, 75); if(fun) { return (StepEnabled)callOverrideFun(this, fun, 75, 0).toInt(); } return  QSpinBox::stepEnabled(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QSpinBox::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QSpinBox::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QSpinBox::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QSpinBox::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QSpinBox::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QSpinBox::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QSpinBox::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QSpinBox::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QSpinBox::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QSpinBox::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QSpinBox::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QSpinBox::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QSpinBox::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QSpinBox::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QSpinBox::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QSpinBox::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QSpinBox::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QSpinBox::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QSpinBox::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QSpinBox::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QSpinBox::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QSpinBox::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QSpinBox::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QSpinBox::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QSpinBox::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QSpinBox::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QSpinBox::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QSpinBox::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QSpinBox::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QSpinBox::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QSpinBox::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QSpinBox::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QSpinBox::timerEvent(x1); }
};

class LSplashScreen : public QSplashScreen {
    Q_OBJECT
public:
    LSplashScreen(uint u, const QPixmap& x1 = QPixmap(), Qt::WindowFlags x2 = 0) : QSplashScreen(x1, x2), unique(u) {}
    LSplashScreen(uint u, QWidget* x1, const QPixmap& x2 = QPixmap(), Qt::WindowFlags x3 = 0) : QSplashScreen(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void drawContents(QPainter* x1) { void *fun = Objects::overrideFun(unique, 153); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 153, args).toBool()) return; } QSplashScreen::drawContents(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QSplashScreen::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QSplashScreen::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QSplashScreen::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QSplashScreen::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QSplashScreen::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QSplashScreen::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QSplashScreen::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QSplashScreen::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QSplashScreen::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QSplashScreen::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QSplashScreen::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QSplashScreen::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QSplashScreen::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QSplashScreen::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QSplashScreen::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QSplashScreen::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QSplashScreen::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QSplashScreen::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QSplashScreen::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QSplashScreen::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QSplashScreen::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QSplashScreen::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QSplashScreen::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QSplashScreen::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QSplashScreen::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QSplashScreen::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QSplashScreen::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QSplashScreen::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QSplashScreen::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QSplashScreen::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QSplashScreen::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QSplashScreen::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QSplashScreen::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QSplashScreen::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QSplashScreen::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QSplashScreen::timerEvent(x1); }
};

class LSplitter : public QSplitter {
    Q_OBJECT
public:
    LSplitter(uint u, QWidget* x1 = 0) : QSplitter(x1), unique(u) {}
    LSplitter(uint u, Qt::Orientation x1, QWidget* x2 = 0) : QSplitter(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QSplitter::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QSplitter::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QSplitter::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QSplitter::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QSplitter::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QSplitter::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QSplitter::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QSplitter::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QSplitter::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QSplitter::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QSplitter::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QSplitter::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QSplitter::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QSplitter::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QSplitter::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QSplitter::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QSplitter::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QSplitter::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QSplitter::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QSplitter::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QSplitter::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QSplitter::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QSplitter::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QSplitter::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QSplitter::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QSplitter::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QSplitter::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QSplitter::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QSplitter::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QSplitter::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QSplitter::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QSplitter::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QSplitter::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QSplitter::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QSplitter::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QSplitter::timerEvent(x1); }
};

class LStackedLayout : public QStackedLayout {
    Q_OBJECT
public:
    LStackedLayout(uint u) : unique(u) {}
    LStackedLayout(uint u, QWidget* x1) : QStackedLayout(x1), unique(u) {}
    LStackedLayout(uint u, QLayout* x1) : QStackedLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void addItem(QLayoutItem* x1) { void *fun = Objects::overrideFun(unique, 80); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 80, args).toBool()) return; } QStackedLayout::addItem(x1); }
    int count() const { void *fun = Objects::overrideFun(unique, 81); if(fun) { return callOverrideFun(this, fun, 81, 0).toInt(); } return  QStackedLayout::count(); }
    QLayoutItem* itemAt(int x1) const { void *fun = Objects::overrideFun(unique, 85); if(fun) { const void *args[] = { &x1 }; return (QLayoutItem*)qVariantValue<void*>(callOverrideFun(this, fun, 85, args)); } return  QStackedLayout::itemAt(x1); }
    QSize minimumSize() const { void *fun = Objects::overrideFun(unique, 86); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 86, 0)); } return  QStackedLayout::minimumSize(); }
    void setGeometry(const QRect& x1) { void *fun = Objects::overrideFun(unique, 87); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 87, args).toBool()) return; } QStackedLayout::setGeometry(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QStackedLayout::sizeHint(); }
    QLayoutItem* takeAt(int x1) { void *fun = Objects::overrideFun(unique, 88); if(fun) { const void *args[] = { &x1 }; return (QLayoutItem*)qVariantValue<void*>(callOverrideFun(this, fun, 88, args)); } return  QStackedLayout::takeAt(x1); }
    int indexOf(QWidget* x1) const { void *fun = Objects::overrideFun(unique, 89); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 89, args).toInt(); } return  QStackedLayout::indexOf(x1); }
    Qt::Orientations expandingDirections() const { void *fun = Objects::overrideFun(unique, 82); if(fun) { return (Qt::Orientations)callOverrideFun(this, fun, 82, 0).toInt(); } return  QStackedLayout::expandingDirections(); }
    QRect geometry() const { void *fun = Objects::overrideFun(unique, 90); if(fun) { return qVariantValue<QRect>(callOverrideFun(this, fun, 90, 0)); } return  QStackedLayout::geometry(); }
    void invalidate() { void *fun = Objects::overrideFun(unique, 84); if(fun) { if(callOverrideFun(this, fun, 84, 0).toBool()) return; } QStackedLayout::invalidate(); }
    bool isEmpty() const { void *fun = Objects::overrideFun(unique, 91); if(fun) { return callOverrideFun(this, fun, 91, 0).toBool(); } return  QStackedLayout::isEmpty(); }
    QLayout* layout() { void *fun = Objects::overrideFun(unique, 92); if(fun) { return (QLayout*)qVariantValue<void*>(callOverrideFun(this, fun, 92, 0)); } return  QStackedLayout::layout(); }
    QSize maximumSize() const { void *fun = Objects::overrideFun(unique, 93); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 93, 0)); } return  QStackedLayout::maximumSize(); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QStackedLayout::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QStackedLayout::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QStackedLayout::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QStackedLayout::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QStackedLayout::timerEvent(x1); }
};

class LStackedWidget : public QStackedWidget {
    Q_OBJECT
public:
    LStackedWidget(uint u, QWidget* x1 = 0) : QStackedWidget(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QStackedWidget::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QStackedWidget::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QStackedWidget::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QStackedWidget::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QStackedWidget::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QStackedWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QStackedWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QStackedWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QStackedWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QStackedWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QStackedWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QStackedWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QStackedWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QStackedWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QStackedWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QStackedWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QStackedWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QStackedWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QStackedWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QStackedWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QStackedWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QStackedWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QStackedWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QStackedWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QStackedWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QStackedWidget::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QStackedWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QStackedWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QStackedWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QStackedWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QStackedWidget::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QStackedWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QStackedWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QStackedWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QStackedWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QStackedWidget::timerEvent(x1); }
};

class LStandardItemModel : public QStandardItemModel {
    Q_OBJECT
public:
    LStandardItemModel(uint u, QObject* x1 = 0) : QStandardItemModel(x1), unique(u) {}
    LStandardItemModel(uint u, int x1, int x2, QObject* x3 = 0) : QStandardItemModel(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int columnCount(const QModelIndex& x1 = QModelIndex()) const { void *fun = Objects::overrideFun(unique, 154); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 154, args).toInt(); } return  QStandardItemModel::columnCount(x1); }
    QVariant data(const QModelIndex& x1, int x2 = Qt::DisplayRole) const { void *fun = Objects::overrideFun(unique, 155); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 155, args)); } return  QStandardItemModel::data(x1, x2); }
    bool dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) { void *fun = Objects::overrideFun(unique, 156); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4, &x5 }; return callOverrideFun(this, fun, 156, args).toBool(); } return  QStandardItemModel::dropMimeData(x1, x2, x3, x4, x5); }
    Qt::ItemFlags flags(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 157); if(fun) { const void *args[] = { &x1 }; return (Qt::ItemFlags)callOverrideFun(this, fun, 157, args).toInt(); } return  QStandardItemModel::flags(x1); }
    bool hasChildren(const QModelIndex& x1 = QModelIndex()) const { void *fun = Objects::overrideFun(unique, 158); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 158, args).toBool(); } return  QStandardItemModel::hasChildren(x1); }
    QVariant headerData(int x1, Qt::Orientation x2, int x3 = Qt::DisplayRole) const { void *fun = Objects::overrideFun(unique, 159); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 159, args)); } return  QStandardItemModel::headerData(x1, x2, x3); }
    QModelIndex index(int x1, int x2, const QModelIndex& x3 = QModelIndex()) const { void *fun = Objects::overrideFun(unique, 160); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 160, args)); } return  QStandardItemModel::index(x1, x2, x3); }
    bool insertColumns(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void *fun = Objects::overrideFun(unique, 161); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 161, args).toBool(); } return  QStandardItemModel::insertColumns(x1, x2, x3); }
    bool insertRows(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void *fun = Objects::overrideFun(unique, 162); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 162, args).toBool(); } return  QStandardItemModel::insertRows(x1, x2, x3); }
    QMimeData* mimeData(const QModelIndexList& x1) const { void *fun = Objects::overrideFun(unique, 163); if(fun) { const void *args[] = { &x1 }; return (QMimeData*)qVariantValue<void*>(callOverrideFun(this, fun, 163, args)); } return  QStandardItemModel::mimeData(x1); }
    QStringList mimeTypes() const { void *fun = Objects::overrideFun(unique, 141); if(fun) { return qVariantValue<QStringList>(callOverrideFun(this, fun, 141, 0)); } return  QStandardItemModel::mimeTypes(); }
    QModelIndex parent(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 164); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 164, args)); } return  QStandardItemModel::parent(x1); }
    bool removeColumns(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void *fun = Objects::overrideFun(unique, 165); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 165, args).toBool(); } return  QStandardItemModel::removeColumns(x1, x2, x3); }
    bool removeRows(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void *fun = Objects::overrideFun(unique, 166); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 166, args).toBool(); } return  QStandardItemModel::removeRows(x1, x2, x3); }
    int rowCount(const QModelIndex& x1 = QModelIndex()) const { void *fun = Objects::overrideFun(unique, 167); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 167, args).toInt(); } return  QStandardItemModel::rowCount(x1); }
    bool setData(const QModelIndex& x1, const QVariant& x2, int x3 = Qt::EditRole) { void *fun = Objects::overrideFun(unique, 168); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 168, args).toBool(); } return  QStandardItemModel::setData(x1, x2, x3); }
    bool setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4 = Qt::EditRole) { void *fun = Objects::overrideFun(unique, 169); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4 }; return callOverrideFun(this, fun, 169, args).toBool(); } return  QStandardItemModel::setHeaderData(x1, x2, x3, x4); }
    void sort(int x1, Qt::SortOrder x2 = Qt::AscendingOrder) { void *fun = Objects::overrideFun(unique, 170); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 170, args).toBool()) return; } QStandardItemModel::sort(x1, x2); }
    Qt::DropActions supportedDropActions() const { void *fun = Objects::overrideFun(unique, 142); if(fun) { return (Qt::DropActions)callOverrideFun(this, fun, 142, 0).toInt(); } return  QStandardItemModel::supportedDropActions(); }
    QModelIndex buddy(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 171); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 171, args)); } return  QStandardItemModel::buddy(x1); }
    bool canFetchMore(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 172); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 172, args).toBool(); } return  QStandardItemModel::canFetchMore(x1); }
    void fetchMore(const QModelIndex& x1) { void *fun = Objects::overrideFun(unique, 173); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 173, args).toBool()) return; } QStandardItemModel::fetchMore(x1); }
    QModelIndexList match(const QModelIndex& x1, int x2, const QVariant& x3, int x4 = 1, Qt::MatchFlags x5 = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { void *fun = Objects::overrideFun(unique, 174); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4, &x5 }; return qVariantValue<QModelIndexList>(callOverrideFun(this, fun, 174, args)); } return  QStandardItemModel::match(x1, x2, x3, x4, x5); }
    QSize span(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 175); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QSize>(callOverrideFun(this, fun, 175, args)); } return  QStandardItemModel::span(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QStandardItemModel::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QStandardItemModel::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QStandardItemModel::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QStandardItemModel::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QStandardItemModel::timerEvent(x1); }
};

class LStatusBar : public QStatusBar {
    Q_OBJECT
public:
    LStatusBar(uint u, QWidget* x1 = 0) : QStatusBar(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QStatusBar::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QStatusBar::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QStatusBar::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QStatusBar::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QStatusBar::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QStatusBar::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QStatusBar::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QStatusBar::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QStatusBar::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QStatusBar::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QStatusBar::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QStatusBar::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QStatusBar::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QStatusBar::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QStatusBar::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QStatusBar::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QStatusBar::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QStatusBar::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QStatusBar::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QStatusBar::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QStatusBar::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QStatusBar::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QStatusBar::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QStatusBar::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QStatusBar::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QStatusBar::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QStatusBar::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QStatusBar::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QStatusBar::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QStatusBar::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QStatusBar::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QStatusBar::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QStatusBar::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QStatusBar::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QStatusBar::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QStatusBar::timerEvent(x1); }
};

class LStringListModel : public QStringListModel {
    Q_OBJECT
public:
    LStringListModel(uint u, QObject* x1 = 0) : QStringListModel(x1), unique(u) {}
    LStringListModel(uint u, const QStringList& x1, QObject* x2 = 0) : QStringListModel(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QVariant data(const QModelIndex& x1, int x2) const { void *fun = Objects::overrideFun(unique, 155); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 155, args)); } return  QStringListModel::data(x1, x2); }
    Qt::ItemFlags flags(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 157); if(fun) { const void *args[] = { &x1 }; return (Qt::ItemFlags)callOverrideFun(this, fun, 157, args).toInt(); } return  QStringListModel::flags(x1); }
    bool insertRows(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void *fun = Objects::overrideFun(unique, 162); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 162, args).toBool(); } return  QStringListModel::insertRows(x1, x2, x3); }
    bool removeRows(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void *fun = Objects::overrideFun(unique, 166); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 166, args).toBool(); } return  QStringListModel::removeRows(x1, x2, x3); }
    int rowCount(const QModelIndex& x1 = QModelIndex()) const { void *fun = Objects::overrideFun(unique, 167); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 167, args).toInt(); } return  QStringListModel::rowCount(x1); }
    bool setData(const QModelIndex& x1, const QVariant& x2, int x3 = Qt::EditRole) { void *fun = Objects::overrideFun(unique, 168); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 168, args).toBool(); } return  QStringListModel::setData(x1, x2, x3); }
    void sort(int x1, Qt::SortOrder x2 = Qt::AscendingOrder) { void *fun = Objects::overrideFun(unique, 170); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 170, args).toBool()) return; } QStringListModel::sort(x1, x2); }
    Qt::DropActions supportedDropActions() const { void *fun = Objects::overrideFun(unique, 142); if(fun) { return (Qt::DropActions)callOverrideFun(this, fun, 142, 0).toInt(); } return  QStringListModel::supportedDropActions(); }
    bool dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) { void *fun = Objects::overrideFun(unique, 156); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4, &x5 }; return callOverrideFun(this, fun, 156, args).toBool(); } return  QStringListModel::dropMimeData(x1, x2, x3, x4, x5); }
    QModelIndex index(int x1, int x2 = 0, const QModelIndex& x3 = QModelIndex()) const { void *fun = Objects::overrideFun(unique, 160); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 160, args)); } return  QStringListModel::index(x1, x2, x3); }
    QModelIndex buddy(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 171); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 171, args)); } return  QStringListModel::buddy(x1); }
    bool canFetchMore(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 172); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 172, args).toBool(); } return  QStringListModel::canFetchMore(x1); }
    void fetchMore(const QModelIndex& x1) { void *fun = Objects::overrideFun(unique, 173); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 173, args).toBool()) return; } QStringListModel::fetchMore(x1); }
    QVariant headerData(int x1, Qt::Orientation x2, int x3 = Qt::DisplayRole) const { void *fun = Objects::overrideFun(unique, 159); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 159, args)); } return  QStringListModel::headerData(x1, x2, x3); }
    bool insertColumns(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void *fun = Objects::overrideFun(unique, 161); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 161, args).toBool(); } return  QStringListModel::insertColumns(x1, x2, x3); }
    QModelIndexList match(const QModelIndex& x1, int x2, const QVariant& x3, int x4 = 1, Qt::MatchFlags x5 = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { void *fun = Objects::overrideFun(unique, 174); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4, &x5 }; return qVariantValue<QModelIndexList>(callOverrideFun(this, fun, 174, args)); } return  QStringListModel::match(x1, x2, x3, x4, x5); }
    QMimeData* mimeData(const QModelIndexList& x1) const { void *fun = Objects::overrideFun(unique, 163); if(fun) { const void *args[] = { &x1 }; return (QMimeData*)qVariantValue<void*>(callOverrideFun(this, fun, 163, args)); } return  QStringListModel::mimeData(x1); }
    QStringList mimeTypes() const { void *fun = Objects::overrideFun(unique, 141); if(fun) { return qVariantValue<QStringList>(callOverrideFun(this, fun, 141, 0)); } return  QStringListModel::mimeTypes(); }
    bool removeColumns(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void *fun = Objects::overrideFun(unique, 165); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 165, args).toBool(); } return  QStringListModel::removeColumns(x1, x2, x3); }
    bool setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4 = Qt::EditRole) { void *fun = Objects::overrideFun(unique, 169); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4 }; return callOverrideFun(this, fun, 169, args).toBool(); } return  QStringListModel::setHeaderData(x1, x2, x3, x4); }
    QSize span(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 175); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QSize>(callOverrideFun(this, fun, 175, args)); } return  QStringListModel::span(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QStringListModel::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QStringListModel::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QStringListModel::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QStringListModel::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QStringListModel::timerEvent(x1); }
};

class LTabBar : public QTabBar {
    Q_OBJECT
public:
    LTabBar(uint u, QWidget* x1 = 0) : QTabBar(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QTabBar::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QTabBar::sizeHint(); }
    void tabInserted(int x1) { void *fun = Objects::overrideFun(unique, 176); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 176, args).toBool()) return; } QTabBar::tabInserted(x1); }
    void tabLayoutChange() { void *fun = Objects::overrideFun(unique, 177); if(fun) { if(callOverrideFun(this, fun, 177, 0).toBool()) return; } QTabBar::tabLayoutChange(); }
    void tabRemoved(int x1) { void *fun = Objects::overrideFun(unique, 178); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 178, args).toBool()) return; } QTabBar::tabRemoved(x1); }
    QSize tabSizeHint(int x1) const { void *fun = Objects::overrideFun(unique, 179); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QSize>(callOverrideFun(this, fun, 179, args)); } return  QTabBar::tabSizeHint(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QTabBar::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QTabBar::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QTabBar::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QTabBar::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QTabBar::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QTabBar::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QTabBar::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QTabBar::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QTabBar::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QTabBar::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QTabBar::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QTabBar::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QTabBar::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QTabBar::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QTabBar::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QTabBar::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QTabBar::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QTabBar::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QTabBar::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QTabBar::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QTabBar::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QTabBar::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QTabBar::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QTabBar::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QTabBar::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QTabBar::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QTabBar::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QTabBar::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QTabBar::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTabBar::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTabBar::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTabBar::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTabBar::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTabBar::timerEvent(x1); }
};

class LTabWidget : public QTabWidget {
    Q_OBJECT
public:
    LTabWidget(uint u, QWidget* x1 = 0) : QTabWidget(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QTabWidget::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QTabWidget::sizeHint(); }
    void tabInserted(int x1) { void *fun = Objects::overrideFun(unique, 176); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 176, args).toBool()) return; } QTabWidget::tabInserted(x1); }
    void tabRemoved(int x1) { void *fun = Objects::overrideFun(unique, 178); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 178, args).toBool()) return; } QTabWidget::tabRemoved(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QTabWidget::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QTabWidget::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QTabWidget::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QTabWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QTabWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QTabWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QTabWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QTabWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QTabWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QTabWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QTabWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QTabWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QTabWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QTabWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QTabWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QTabWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QTabWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QTabWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QTabWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QTabWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QTabWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QTabWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QTabWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QTabWidget::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QTabWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QTabWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QTabWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QTabWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QTabWidget::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTabWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTabWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTabWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTabWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTabWidget::timerEvent(x1); }
};

class LTableView : public QTableView {
    Q_OBJECT
public:
    LTableView(uint u, QWidget* x1 = 0) : QTableView(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QModelIndex indexAt(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 41); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 41, args)); } return  QTableView::indexAt(x1); }
    void setModel(QAbstractItemModel* x1) { void *fun = Objects::overrideFun(unique, 44); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 44, args).toBool()) return; } QTableView::setModel(x1); }
    void setRootIndex(const QModelIndex& x1) { void *fun = Objects::overrideFun(unique, 45); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 45, args).toBool()) return; } QTableView::setRootIndex(x1); }
    void setSelectionModel(QItemSelectionModel* x1) { void *fun = Objects::overrideFun(unique, 46); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 46, args).toBool()) return; } QTableView::setSelectionModel(x1); }
    void keyboardSearch(const QString& x1) { void *fun = Objects::overrideFun(unique, 49); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 49, args).toBool()) return; } QTableView::keyboardSearch(x1); }
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void *fun = Objects::overrideFun(unique, 42); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 42, args).toBool()) return; } QTableView::scrollTo(x1, x2); }
    int sizeHintForColumn(int x1) const { void *fun = Objects::overrideFun(unique, 50); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 50, args).toInt(); } return  QTableView::sizeHintForColumn(x1); }
    int sizeHintForRow(int x1) const { void *fun = Objects::overrideFun(unique, 51); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 51, args).toInt(); } return  QTableView::sizeHintForRow(x1); }
    QRect visualRect(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 47); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(this, fun, 47, args)); } return  QTableView::visualRect(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QTableView::inputMethodQuery(x1); }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void *fun = Objects::overrideFun(unique, 52); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 52, args).toBool(); } return  QTableView::edit(x1, x2, x3); }
    int horizontalOffset() const { void *fun = Objects::overrideFun(unique, 53); if(fun) { return callOverrideFun(this, fun, 53, 0).toInt(); } return  QTableView::horizontalOffset(); }
    bool isIndexHidden(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 54); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 54, args).toBool(); } return  QTableView::isIndexHidden(x1); }
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void *fun = Objects::overrideFun(unique, 55); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 55, args)); } return  QTableView::moveCursor(x1, x2); }
    QModelIndexList selectedIndexes() const { void *fun = Objects::overrideFun(unique, 56); if(fun) { return qVariantValue<QModelIndexList>(callOverrideFun(this, fun, 56, 0)); } return  QTableView::selectedIndexes(); }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void *fun = Objects::overrideFun(unique, 57); if(fun) { const void *args[] = { &x1, &x2 }; return (QItemSelectionModel::SelectionFlags)callOverrideFun(this, fun, 57, args).toInt(); } return  QTableView::selectionCommand(x1, x2); }
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void *fun = Objects::overrideFun(unique, 58); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 58, args).toBool()) return; } QTableView::setSelection(x1, x2); }
    void startDrag(Qt::DropActions x1) { void *fun = Objects::overrideFun(unique, 59); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 59, args).toBool()) return; } QTableView::startDrag(x1); }
    int verticalOffset() const { void *fun = Objects::overrideFun(unique, 60); if(fun) { return callOverrideFun(this, fun, 60, 0).toInt(); } return  QTableView::verticalOffset(); }
    QStyleOptionViewItem viewOptions() const { void *fun = Objects::overrideFun(unique, 61); if(fun) { return qVariantValue<QStyleOptionViewItem>(callOverrideFun(this, fun, 61, 0)); } return  QTableView::viewOptions(); }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void *fun = Objects::overrideFun(unique, 62); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRegion>(callOverrideFun(this, fun, 62, args)); } return  QTableView::visualRegionForSelection(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QTableView::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QTableView::sizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QTableView::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QTableView::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QTableView::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QTableView::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QTableView::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QTableView::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QTableView::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QTableView::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QTableView::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QTableView::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QTableView::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QTableView::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QTableView::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QTableView::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QTableView::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QTableView::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QTableView::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QTableView::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QTableView::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QTableView::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QTableView::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QTableView::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QTableView::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QTableView::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QTableView::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QTableView::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QTableView::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QTableView::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QTableView::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QTableView::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTableView::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTableView::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTableView::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTableView::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTableView::timerEvent(x1); }
};

class LTableWidget : public QTableWidget {
    Q_OBJECT
public:
    LTableWidget(uint u, QWidget* x1 = 0) : QTableWidget(x1), unique(u) {}
    LTableWidget(uint u, int x1, int x2, QWidget* x3 = 0) : QTableWidget(x1, x2, x3), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool dropMimeData(int x1, int x2, const QMimeData* x3, Qt::DropAction x4) { void *fun = Objects::overrideFun(unique, 180); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4 }; return callOverrideFun(this, fun, 180, args).toBool(); } return  QTableWidget::dropMimeData(x1, x2, x3, x4); }
    QMimeData* mimeData(const QList<QTableWidgetItem*> x1) const { void *fun = Objects::overrideFun(unique, 181); if(fun) { const void *args[] = { &x1 }; return (QMimeData*)qVariantValue<void*>(callOverrideFun(this, fun, 181, args)); } return  QTableWidget::mimeData(x1); }
    QStringList mimeTypes() const { void *fun = Objects::overrideFun(unique, 141); if(fun) { return qVariantValue<QStringList>(callOverrideFun(this, fun, 141, 0)); } return  QTableWidget::mimeTypes(); }
    Qt::DropActions supportedDropActions() const { void *fun = Objects::overrideFun(unique, 142); if(fun) { return (Qt::DropActions)callOverrideFun(this, fun, 142, 0).toInt(); } return  QTableWidget::supportedDropActions(); }
    QModelIndex indexAt(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 41); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 41, args)); } return  QTableWidget::indexAt(x1); }
    void setRootIndex(const QModelIndex& x1) { void *fun = Objects::overrideFun(unique, 45); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 45, args).toBool()) return; } QTableWidget::setRootIndex(x1); }
    void setSelectionModel(QItemSelectionModel* x1) { void *fun = Objects::overrideFun(unique, 46); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 46, args).toBool()) return; } QTableWidget::setSelectionModel(x1); }
    void keyboardSearch(const QString& x1) { void *fun = Objects::overrideFun(unique, 49); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 49, args).toBool()) return; } QTableWidget::keyboardSearch(x1); }
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void *fun = Objects::overrideFun(unique, 42); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 42, args).toBool()) return; } QTableWidget::scrollTo(x1, x2); }
    int sizeHintForColumn(int x1) const { void *fun = Objects::overrideFun(unique, 50); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 50, args).toInt(); } return  QTableWidget::sizeHintForColumn(x1); }
    int sizeHintForRow(int x1) const { void *fun = Objects::overrideFun(unique, 51); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 51, args).toInt(); } return  QTableWidget::sizeHintForRow(x1); }
    QRect visualRect(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 47); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(this, fun, 47, args)); } return  QTableWidget::visualRect(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QTableWidget::inputMethodQuery(x1); }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void *fun = Objects::overrideFun(unique, 52); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 52, args).toBool(); } return  QTableWidget::edit(x1, x2, x3); }
    int horizontalOffset() const { void *fun = Objects::overrideFun(unique, 53); if(fun) { return callOverrideFun(this, fun, 53, 0).toInt(); } return  QTableWidget::horizontalOffset(); }
    bool isIndexHidden(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 54); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 54, args).toBool(); } return  QTableWidget::isIndexHidden(x1); }
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void *fun = Objects::overrideFun(unique, 55); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 55, args)); } return  QTableWidget::moveCursor(x1, x2); }
    QModelIndexList selectedIndexes() const { void *fun = Objects::overrideFun(unique, 56); if(fun) { return qVariantValue<QModelIndexList>(callOverrideFun(this, fun, 56, 0)); } return  QTableWidget::selectedIndexes(); }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void *fun = Objects::overrideFun(unique, 57); if(fun) { const void *args[] = { &x1, &x2 }; return (QItemSelectionModel::SelectionFlags)callOverrideFun(this, fun, 57, args).toInt(); } return  QTableWidget::selectionCommand(x1, x2); }
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void *fun = Objects::overrideFun(unique, 58); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 58, args).toBool()) return; } QTableWidget::setSelection(x1, x2); }
    void startDrag(Qt::DropActions x1) { void *fun = Objects::overrideFun(unique, 59); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 59, args).toBool()) return; } QTableWidget::startDrag(x1); }
    int verticalOffset() const { void *fun = Objects::overrideFun(unique, 60); if(fun) { return callOverrideFun(this, fun, 60, 0).toInt(); } return  QTableWidget::verticalOffset(); }
    QStyleOptionViewItem viewOptions() const { void *fun = Objects::overrideFun(unique, 61); if(fun) { return qVariantValue<QStyleOptionViewItem>(callOverrideFun(this, fun, 61, 0)); } return  QTableWidget::viewOptions(); }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void *fun = Objects::overrideFun(unique, 62); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRegion>(callOverrideFun(this, fun, 62, args)); } return  QTableWidget::visualRegionForSelection(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QTableWidget::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QTableWidget::sizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QTableWidget::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QTableWidget::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QTableWidget::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QTableWidget::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QTableWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QTableWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QTableWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QTableWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QTableWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QTableWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QTableWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QTableWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QTableWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QTableWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QTableWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QTableWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QTableWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QTableWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QTableWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QTableWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QTableWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QTableWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QTableWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QTableWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QTableWidget::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QTableWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QTableWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QTableWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QTableWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QTableWidget::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTableWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTableWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTableWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTableWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTableWidget::timerEvent(x1); }
};

class LTextBlockGroup : public QTextBlockGroup {
    Q_OBJECT
public:

    static NumList overrideIds;
    uint unique;

    void blockFormatChanged(const QTextBlock& x1) { void *fun = Objects::overrideFun(unique, 182); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 182, args).toBool()) return; } QTextBlockGroup::blockFormatChanged(x1); }
    void blockInserted(const QTextBlock& x1) { void *fun = Objects::overrideFun(unique, 183); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 183, args).toBool()) return; } QTextBlockGroup::blockInserted(x1); }
    void blockRemoved(const QTextBlock& x1) { void *fun = Objects::overrideFun(unique, 184); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 184, args).toBool()) return; } QTextBlockGroup::blockRemoved(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTextBlockGroup::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTextBlockGroup::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTextBlockGroup::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTextBlockGroup::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTextBlockGroup::timerEvent(x1); }
};

class LTextBrowser : public QTextBrowser {
    Q_OBJECT
public:
    LTextBrowser(uint u, QWidget* x1 = 0) : QTextBrowser(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QVariant loadResource(int x1, const QUrl& x2) { void *fun = Objects::overrideFun(unique, 147); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 147, args)); } return  QTextBrowser::loadResource(x1, x2); }
    bool canInsertFromMimeData(const QMimeData* x1) const { void *fun = Objects::overrideFun(unique, 148); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 148, args).toBool(); } return  QTextBrowser::canInsertFromMimeData(x1); }
    QMimeData* createMimeDataFromSelection() const { void *fun = Objects::overrideFun(unique, 149); if(fun) { return (QMimeData*)qVariantValue<void*>(callOverrideFun(this, fun, 149, 0)); } return  QTextBrowser::createMimeDataFromSelection(); }
    void insertFromMimeData(const QMimeData* x1) { void *fun = Objects::overrideFun(unique, 150); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 150, args).toBool()) return; } QTextBrowser::insertFromMimeData(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QTextBrowser::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QTextBrowser::sizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QTextBrowser::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QTextBrowser::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QTextBrowser::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QTextBrowser::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QTextBrowser::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QTextBrowser::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QTextBrowser::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QTextBrowser::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QTextBrowser::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QTextBrowser::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QTextBrowser::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QTextBrowser::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QTextBrowser::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QTextBrowser::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QTextBrowser::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QTextBrowser::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QTextBrowser::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QTextBrowser::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QTextBrowser::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QTextBrowser::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QTextBrowser::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QTextBrowser::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QTextBrowser::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QTextBrowser::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QTextBrowser::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QTextBrowser::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QTextBrowser::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QTextBrowser::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QTextBrowser::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QTextBrowser::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QTextBrowser::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTextBrowser::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTextBrowser::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTextBrowser::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTextBrowser::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTextBrowser::timerEvent(x1); }
};

class LTextDocument : public QTextDocument {
    Q_OBJECT
public:
    LTextDocument(uint u, QObject* x1 = 0) : QTextDocument(x1), unique(u) {}
    LTextDocument(uint u, const QString& x1, QObject* x2 = 0) : QTextDocument(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void clear() { void *fun = Objects::overrideFun(unique, 69); if(fun) { if(callOverrideFun(this, fun, 69, 0).toBool()) return; } QTextDocument::clear(); }
    QTextObject* createObject(const QTextFormat& x1) { void *fun = Objects::overrideFun(unique, 185); if(fun) { const void *args[] = { &x1 }; return (QTextObject*)qVariantValue<void*>(callOverrideFun(this, fun, 185, args)); } return  QTextDocument::createObject(x1); }
    QVariant loadResource(int x1, const QUrl& x2) { void *fun = Objects::overrideFun(unique, 147); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 147, args)); } return  QTextDocument::loadResource(x1, x2); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTextDocument::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTextDocument::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTextDocument::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTextDocument::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTextDocument::timerEvent(x1); }
};

class LTextEdit : public QTextEdit {
    Q_OBJECT
public:
    LTextEdit(uint u, QWidget* x1 = 0) : QTextEdit(x1), unique(u) {}
    LTextEdit(uint u, const QString& x1, QWidget* x2 = 0) : QTextEdit(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QVariant loadResource(int x1, const QUrl& x2) { void *fun = Objects::overrideFun(unique, 147); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 147, args)); } return  QTextEdit::loadResource(x1, x2); }
    bool canInsertFromMimeData(const QMimeData* x1) const { void *fun = Objects::overrideFun(unique, 148); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 148, args).toBool(); } return  QTextEdit::canInsertFromMimeData(x1); }
    QMimeData* createMimeDataFromSelection() const { void *fun = Objects::overrideFun(unique, 149); if(fun) { return (QMimeData*)qVariantValue<void*>(callOverrideFun(this, fun, 149, 0)); } return  QTextEdit::createMimeDataFromSelection(); }
    void insertFromMimeData(const QMimeData* x1) { void *fun = Objects::overrideFun(unique, 150); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 150, args).toBool()) return; } QTextEdit::insertFromMimeData(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QTextEdit::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QTextEdit::sizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QTextEdit::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QTextEdit::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QTextEdit::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QTextEdit::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QTextEdit::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QTextEdit::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QTextEdit::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QTextEdit::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QTextEdit::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QTextEdit::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QTextEdit::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QTextEdit::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QTextEdit::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QTextEdit::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QTextEdit::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QTextEdit::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QTextEdit::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QTextEdit::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QTextEdit::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QTextEdit::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QTextEdit::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QTextEdit::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QTextEdit::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QTextEdit::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QTextEdit::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QTextEdit::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QTextEdit::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QTextEdit::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QTextEdit::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QTextEdit::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QTextEdit::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTextEdit::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTextEdit::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTextEdit::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTextEdit::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTextEdit::timerEvent(x1); }
};

class LTextFrame : public QTextFrame {
    Q_OBJECT
public:
    LTextFrame(uint u, QTextDocument* x1) : QTextFrame(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTextFrame::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTextFrame::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTextFrame::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTextFrame::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTextFrame::timerEvent(x1); }
};

class LTextList : public QTextList {
    Q_OBJECT
public:

    static NumList overrideIds;
    uint unique;

    void blockFormatChanged(const QTextBlock& x1) { void *fun = Objects::overrideFun(unique, 182); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 182, args).toBool()) return; } QTextList::blockFormatChanged(x1); }
    void blockInserted(const QTextBlock& x1) { void *fun = Objects::overrideFun(unique, 183); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 183, args).toBool()) return; } QTextList::blockInserted(x1); }
    void blockRemoved(const QTextBlock& x1) { void *fun = Objects::overrideFun(unique, 184); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 184, args).toBool()) return; } QTextList::blockRemoved(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTextList::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTextList::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTextList::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTextList::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTextList::timerEvent(x1); }
};

class LTextObject : public QTextObject {
    Q_OBJECT
public:

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTextObject::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTextObject::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTextObject::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTextObject::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTextObject::timerEvent(x1); }
};

class LTextTable : public QTextTable {
    Q_OBJECT
public:

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTextTable::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTextTable::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTextTable::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTextTable::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTextTable::timerEvent(x1); }
};

class LThread : public QThread {
    Q_OBJECT
public:
    LThread(uint u, QObject* x1 = 0) : QThread(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void run() { void *fun = Objects::overrideFun(unique, 186); if(fun) { if(callOverrideFun(this, fun, 186, 0).toBool()) return; } QThread::run(); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QThread::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QThread::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QThread::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QThread::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QThread::timerEvent(x1); }
};

class LTimeEdit : public QTimeEdit {
    Q_OBJECT
public:
    LTimeEdit(uint u, QWidget* x1 = 0) : QTimeEdit(x1), unique(u) {}
    LTimeEdit(uint u, const QTime& x1, QWidget* x2 = 0) : QTimeEdit(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void clear() { void *fun = Objects::overrideFun(unique, 69); if(fun) { if(callOverrideFun(this, fun, 69, 0).toBool()) return; } QTimeEdit::clear(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QTimeEdit::sizeHint(); }
    void stepBy(int x1) { void *fun = Objects::overrideFun(unique, 70); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 70, args).toBool()) return; } QTimeEdit::stepBy(x1); }
    QDateTime dateTimeFromText(const QString& x1) const { void *fun = Objects::overrideFun(unique, 71); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QDateTime>(callOverrideFun(this, fun, 71, args)); } return  QTimeEdit::dateTimeFromText(x1); }
    QString textFromDateTime(const QDateTime& x1) const { void *fun = Objects::overrideFun(unique, 72); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QString>(callOverrideFun(this, fun, 72, args)); } return  QTimeEdit::textFromDateTime(x1); }
    void fixup(QString& x1) const { void *fun = Objects::overrideFun(unique, 73); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 73, args).toBool()) return; } QTimeEdit::fixup(x1); }
    QValidator::State validate(QString& x1, int& x2) const { void *fun = Objects::overrideFun(unique, 74); if(fun) { const void *args[] = { &x1, &x2 }; return (QValidator::State)callOverrideFun(this, fun, 74, args).toInt(); } return  QTimeEdit::validate(x1, x2); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QTimeEdit::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QTimeEdit::minimumSizeHint(); }
    StepEnabled stepEnabled() const { void *fun = Objects::overrideFun(unique, 75); if(fun) { return (StepEnabled)callOverrideFun(this, fun, 75, 0).toInt(); } return  QTimeEdit::stepEnabled(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QTimeEdit::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QTimeEdit::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QTimeEdit::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QTimeEdit::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QTimeEdit::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QTimeEdit::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QTimeEdit::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QTimeEdit::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QTimeEdit::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QTimeEdit::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QTimeEdit::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QTimeEdit::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QTimeEdit::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QTimeEdit::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QTimeEdit::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QTimeEdit::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QTimeEdit::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QTimeEdit::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QTimeEdit::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QTimeEdit::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QTimeEdit::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QTimeEdit::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QTimeEdit::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QTimeEdit::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QTimeEdit::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QTimeEdit::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QTimeEdit::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QTimeEdit::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTimeEdit::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTimeEdit::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTimeEdit::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTimeEdit::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTimeEdit::timerEvent(x1); }
};

class LTimer : public QTimer {
    Q_OBJECT
public:
    LTimer(uint u, QObject* x1 = 0) : QTimer(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTimer::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTimer::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTimer::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTimer::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTimer::timerEvent(x1); }
};

class LToolBar : public QToolBar {
    Q_OBJECT
public:
    LToolBar(uint u, const QString& x1, QWidget* x2 = 0) : QToolBar(x1, x2), unique(u) {}
    LToolBar(uint u, QWidget* x1 = 0) : QToolBar(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QToolBar::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QToolBar::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QToolBar::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QToolBar::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QToolBar::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QToolBar::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QToolBar::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QToolBar::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QToolBar::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QToolBar::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QToolBar::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QToolBar::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QToolBar::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QToolBar::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QToolBar::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QToolBar::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QToolBar::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QToolBar::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QToolBar::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QToolBar::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QToolBar::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QToolBar::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QToolBar::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QToolBar::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QToolBar::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QToolBar::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QToolBar::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QToolBar::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QToolBar::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QToolBar::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QToolBar::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QToolBar::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QToolBar::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QToolBar::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QToolBar::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QToolBar::timerEvent(x1); }
};

class LToolBox : public QToolBox {
    Q_OBJECT
public:
    LToolBox(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) : QToolBox(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void itemInserted(int x1) { void *fun = Objects::overrideFun(unique, 187); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 187, args).toBool()) return; } QToolBox::itemInserted(x1); }
    void itemRemoved(int x1) { void *fun = Objects::overrideFun(unique, 188); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 188, args).toBool()) return; } QToolBox::itemRemoved(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QToolBox::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QToolBox::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QToolBox::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QToolBox::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QToolBox::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QToolBox::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QToolBox::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QToolBox::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QToolBox::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QToolBox::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QToolBox::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QToolBox::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QToolBox::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QToolBox::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QToolBox::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QToolBox::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QToolBox::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QToolBox::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QToolBox::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QToolBox::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QToolBox::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QToolBox::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QToolBox::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QToolBox::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QToolBox::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QToolBox::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QToolBox::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QToolBox::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QToolBox::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QToolBox::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QToolBox::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QToolBox::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QToolBox::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QToolBox::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QToolBox::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QToolBox::timerEvent(x1); }
};

class LToolButton : public QToolButton {
    Q_OBJECT
public:
    LToolButton(uint u, QWidget* x1 = 0) : QToolButton(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QToolButton::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QToolButton::sizeHint(); }
    void checkStateSet() { void *fun = Objects::overrideFun(unique, 38); if(fun) { if(callOverrideFun(this, fun, 38, 0).toBool()) return; } QToolButton::checkStateSet(); }
    bool hitButton(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 39); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 39, args).toBool(); } return  QToolButton::hitButton(x1); }
    void nextCheckState() { void *fun = Objects::overrideFun(unique, 40); if(fun) { if(callOverrideFun(this, fun, 40, 0).toBool()) return; } QToolButton::nextCheckState(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QToolButton::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QToolButton::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QToolButton::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QToolButton::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QToolButton::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QToolButton::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QToolButton::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QToolButton::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QToolButton::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QToolButton::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QToolButton::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QToolButton::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QToolButton::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QToolButton::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QToolButton::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QToolButton::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QToolButton::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QToolButton::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QToolButton::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QToolButton::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QToolButton::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QToolButton::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QToolButton::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QToolButton::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QToolButton::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QToolButton::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QToolButton::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QToolButton::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QToolButton::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QToolButton::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QToolButton::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QToolButton::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QToolButton::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QToolButton::timerEvent(x1); }
};

class LTranslator : public QTranslator {
    Q_OBJECT
public:
    LTranslator(uint u, QObject* x1 = 0) : QTranslator(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool isEmpty() const { void *fun = Objects::overrideFun(unique, 91); if(fun) { return callOverrideFun(this, fun, 91, 0).toBool(); } return  QTranslator::isEmpty(); }
    QString translate(const char* x1, const char* x2, const char* x3 = 0) const { void *fun = Objects::overrideFun(unique, 189); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return qVariantValue<QString>(callOverrideFun(this, fun, 189, args)); } return  QTranslator::translate(x1, x2, x3); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTranslator::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTranslator::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTranslator::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTranslator::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTranslator::timerEvent(x1); }
};

class LTreeView : public QTreeView {
    Q_OBJECT
public:
    LTreeView(uint u, QWidget* x1 = 0) : QTreeView(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void dataChanged(const QModelIndex& x1, const QModelIndex& x2) { void *fun = Objects::overrideFun(unique, 190); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 190, args).toBool()) return; } QTreeView::dataChanged(x1, x2); }
    QModelIndex indexAt(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 41); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 41, args)); } return  QTreeView::indexAt(x1); }
    void keyboardSearch(const QString& x1) { void *fun = Objects::overrideFun(unique, 49); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 49, args).toBool()) return; } QTreeView::keyboardSearch(x1); }
    void reset() { void *fun = Objects::overrideFun(unique, 191); if(fun) { if(callOverrideFun(this, fun, 191, 0).toBool()) return; } QTreeView::reset(); }
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void *fun = Objects::overrideFun(unique, 42); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 42, args).toBool()) return; } QTreeView::scrollTo(x1, x2); }
    void selectAll() { void *fun = Objects::overrideFun(unique, 43); if(fun) { if(callOverrideFun(this, fun, 43, 0).toBool()) return; } QTreeView::selectAll(); }
    void setModel(QAbstractItemModel* x1) { void *fun = Objects::overrideFun(unique, 44); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 44, args).toBool()) return; } QTreeView::setModel(x1); }
    void setRootIndex(const QModelIndex& x1) { void *fun = Objects::overrideFun(unique, 45); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 45, args).toBool()) return; } QTreeView::setRootIndex(x1); }
    void setSelectionModel(QItemSelectionModel* x1) { void *fun = Objects::overrideFun(unique, 46); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 46, args).toBool()) return; } QTreeView::setSelectionModel(x1); }
    QRect visualRect(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 47); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(this, fun, 47, args)); } return  QTreeView::visualRect(x1); }
    void drawBranches(QPainter* x1, const QRect& x2, const QModelIndex& x3) const { void *fun = Objects::overrideFun(unique, 192); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 192, args).toBool()) return; } QTreeView::drawBranches(x1, x2, x3); }
    void drawRow(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { void *fun = Objects::overrideFun(unique, 193); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 193, args).toBool()) return; } QTreeView::drawRow(x1, x2, x3); }
    int sizeHintForColumn(int x1) const { void *fun = Objects::overrideFun(unique, 50); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 50, args).toInt(); } return  QTreeView::sizeHintForColumn(x1); }
    int sizeHintForRow(int x1) const { void *fun = Objects::overrideFun(unique, 51); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 51, args).toInt(); } return  QTreeView::sizeHintForRow(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QTreeView::inputMethodQuery(x1); }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void *fun = Objects::overrideFun(unique, 52); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 52, args).toBool(); } return  QTreeView::edit(x1, x2, x3); }
    int horizontalOffset() const { void *fun = Objects::overrideFun(unique, 53); if(fun) { return callOverrideFun(this, fun, 53, 0).toInt(); } return  QTreeView::horizontalOffset(); }
    bool isIndexHidden(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 54); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 54, args).toBool(); } return  QTreeView::isIndexHidden(x1); }
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void *fun = Objects::overrideFun(unique, 55); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 55, args)); } return  QTreeView::moveCursor(x1, x2); }
    QModelIndexList selectedIndexes() const { void *fun = Objects::overrideFun(unique, 56); if(fun) { return qVariantValue<QModelIndexList>(callOverrideFun(this, fun, 56, 0)); } return  QTreeView::selectedIndexes(); }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void *fun = Objects::overrideFun(unique, 57); if(fun) { const void *args[] = { &x1, &x2 }; return (QItemSelectionModel::SelectionFlags)callOverrideFun(this, fun, 57, args).toInt(); } return  QTreeView::selectionCommand(x1, x2); }
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void *fun = Objects::overrideFun(unique, 58); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 58, args).toBool()) return; } QTreeView::setSelection(x1, x2); }
    void startDrag(Qt::DropActions x1) { void *fun = Objects::overrideFun(unique, 59); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 59, args).toBool()) return; } QTreeView::startDrag(x1); }
    int verticalOffset() const { void *fun = Objects::overrideFun(unique, 60); if(fun) { return callOverrideFun(this, fun, 60, 0).toInt(); } return  QTreeView::verticalOffset(); }
    QStyleOptionViewItem viewOptions() const { void *fun = Objects::overrideFun(unique, 61); if(fun) { return qVariantValue<QStyleOptionViewItem>(callOverrideFun(this, fun, 61, 0)); } return  QTreeView::viewOptions(); }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void *fun = Objects::overrideFun(unique, 62); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRegion>(callOverrideFun(this, fun, 62, args)); } return  QTreeView::visualRegionForSelection(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QTreeView::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QTreeView::sizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QTreeView::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QTreeView::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QTreeView::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QTreeView::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QTreeView::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QTreeView::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QTreeView::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QTreeView::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QTreeView::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QTreeView::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QTreeView::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QTreeView::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QTreeView::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QTreeView::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QTreeView::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QTreeView::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QTreeView::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QTreeView::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QTreeView::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QTreeView::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QTreeView::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QTreeView::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QTreeView::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QTreeView::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QTreeView::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QTreeView::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QTreeView::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QTreeView::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QTreeView::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QTreeView::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTreeView::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTreeView::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTreeView::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTreeView::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTreeView::timerEvent(x1); }
};

class LTreeWidget : public QTreeWidget {
    Q_OBJECT
public:
    LTreeWidget(uint u, QWidget* x1 = 0) : QTreeWidget(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void setSelectionModel(QItemSelectionModel* x1) { void *fun = Objects::overrideFun(unique, 46); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 46, args).toBool()) return; } QTreeWidget::setSelectionModel(x1); }
    bool dropMimeData(QTreeWidgetItem* x1, int x2, const QMimeData* x3, Qt::DropAction x4) { void *fun = Objects::overrideFun(unique, 194); if(fun) { const void *args[] = { &x1, &x2, &x3, &x4 }; return callOverrideFun(this, fun, 194, args).toBool(); } return  QTreeWidget::dropMimeData(x1, x2, x3, x4); }
    QMimeData* mimeData(const QList<QTreeWidgetItem*> x1) const { void *fun = Objects::overrideFun(unique, 195); if(fun) { const void *args[] = { &x1 }; return (QMimeData*)qVariantValue<void*>(callOverrideFun(this, fun, 195, args)); } return  QTreeWidget::mimeData(x1); }
    QStringList mimeTypes() const { void *fun = Objects::overrideFun(unique, 141); if(fun) { return qVariantValue<QStringList>(callOverrideFun(this, fun, 141, 0)); } return  QTreeWidget::mimeTypes(); }
    Qt::DropActions supportedDropActions() const { void *fun = Objects::overrideFun(unique, 142); if(fun) { return (Qt::DropActions)callOverrideFun(this, fun, 142, 0).toInt(); } return  QTreeWidget::supportedDropActions(); }
    void dataChanged(const QModelIndex& x1, const QModelIndex& x2) { void *fun = Objects::overrideFun(unique, 190); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 190, args).toBool()) return; } QTreeWidget::dataChanged(x1, x2); }
    QModelIndex indexAt(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 41); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 41, args)); } return  QTreeWidget::indexAt(x1); }
    void keyboardSearch(const QString& x1) { void *fun = Objects::overrideFun(unique, 49); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 49, args).toBool()) return; } QTreeWidget::keyboardSearch(x1); }
    void reset() { void *fun = Objects::overrideFun(unique, 191); if(fun) { if(callOverrideFun(this, fun, 191, 0).toBool()) return; } QTreeWidget::reset(); }
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void *fun = Objects::overrideFun(unique, 42); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 42, args).toBool()) return; } QTreeWidget::scrollTo(x1, x2); }
    void selectAll() { void *fun = Objects::overrideFun(unique, 43); if(fun) { if(callOverrideFun(this, fun, 43, 0).toBool()) return; } QTreeWidget::selectAll(); }
    void setRootIndex(const QModelIndex& x1) { void *fun = Objects::overrideFun(unique, 45); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 45, args).toBool()) return; } QTreeWidget::setRootIndex(x1); }
    QRect visualRect(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 47); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(this, fun, 47, args)); } return  QTreeWidget::visualRect(x1); }
    void drawBranches(QPainter* x1, const QRect& x2, const QModelIndex& x3) const { void *fun = Objects::overrideFun(unique, 192); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 192, args).toBool()) return; } QTreeWidget::drawBranches(x1, x2, x3); }
    void drawRow(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { void *fun = Objects::overrideFun(unique, 193); if(fun) { const void *args[] = { &x1, &x2, &x3 }; if(callOverrideFun(this, fun, 193, args).toBool()) return; } QTreeWidget::drawRow(x1, x2, x3); }
    int sizeHintForColumn(int x1) const { void *fun = Objects::overrideFun(unique, 50); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 50, args).toInt(); } return  QTreeWidget::sizeHintForColumn(x1); }
    int sizeHintForRow(int x1) const { void *fun = Objects::overrideFun(unique, 51); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 51, args).toInt(); } return  QTreeWidget::sizeHintForRow(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QTreeWidget::inputMethodQuery(x1); }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void *fun = Objects::overrideFun(unique, 52); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 52, args).toBool(); } return  QTreeWidget::edit(x1, x2, x3); }
    int horizontalOffset() const { void *fun = Objects::overrideFun(unique, 53); if(fun) { return callOverrideFun(this, fun, 53, 0).toInt(); } return  QTreeWidget::horizontalOffset(); }
    bool isIndexHidden(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 54); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 54, args).toBool(); } return  QTreeWidget::isIndexHidden(x1); }
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void *fun = Objects::overrideFun(unique, 55); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 55, args)); } return  QTreeWidget::moveCursor(x1, x2); }
    QModelIndexList selectedIndexes() const { void *fun = Objects::overrideFun(unique, 56); if(fun) { return qVariantValue<QModelIndexList>(callOverrideFun(this, fun, 56, 0)); } return  QTreeWidget::selectedIndexes(); }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void *fun = Objects::overrideFun(unique, 57); if(fun) { const void *args[] = { &x1, &x2 }; return (QItemSelectionModel::SelectionFlags)callOverrideFun(this, fun, 57, args).toInt(); } return  QTreeWidget::selectionCommand(x1, x2); }
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void *fun = Objects::overrideFun(unique, 58); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 58, args).toBool()) return; } QTreeWidget::setSelection(x1, x2); }
    void startDrag(Qt::DropActions x1) { void *fun = Objects::overrideFun(unique, 59); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 59, args).toBool()) return; } QTreeWidget::startDrag(x1); }
    int verticalOffset() const { void *fun = Objects::overrideFun(unique, 60); if(fun) { return callOverrideFun(this, fun, 60, 0).toInt(); } return  QTreeWidget::verticalOffset(); }
    QStyleOptionViewItem viewOptions() const { void *fun = Objects::overrideFun(unique, 61); if(fun) { return qVariantValue<QStyleOptionViewItem>(callOverrideFun(this, fun, 61, 0)); } return  QTreeWidget::viewOptions(); }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void *fun = Objects::overrideFun(unique, 62); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRegion>(callOverrideFun(this, fun, 62, args)); } return  QTreeWidget::visualRegionForSelection(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QTreeWidget::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QTreeWidget::sizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QTreeWidget::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QTreeWidget::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QTreeWidget::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QTreeWidget::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QTreeWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QTreeWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QTreeWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QTreeWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QTreeWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QTreeWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QTreeWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QTreeWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QTreeWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QTreeWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QTreeWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QTreeWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QTreeWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QTreeWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QTreeWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QTreeWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QTreeWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QTreeWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QTreeWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QTreeWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QTreeWidget::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QTreeWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QTreeWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QTreeWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QTreeWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QTreeWidget::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QTreeWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QTreeWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QTreeWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QTreeWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QTreeWidget::timerEvent(x1); }
};

class LUndoGroup : public QUndoGroup {
    Q_OBJECT
public:
    LUndoGroup(uint u, QObject* x1 = 0) : QUndoGroup(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QUndoGroup::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QUndoGroup::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QUndoGroup::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QUndoGroup::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QUndoGroup::timerEvent(x1); }
};

class LUndoStack : public QUndoStack {
    Q_OBJECT
public:
    LUndoStack(uint u, QObject* x1 = 0) : QUndoStack(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QUndoStack::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QUndoStack::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QUndoStack::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QUndoStack::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QUndoStack::timerEvent(x1); }
};

class LUndoView : public QUndoView {
    Q_OBJECT
public:
    LUndoView(uint u, QWidget* x1 = 0) : QUndoView(x1), unique(u) {}
    LUndoView(uint u, QUndoStack* x1, QWidget* x2 = 0) : QUndoView(x1, x2), unique(u) {}
    LUndoView(uint u, QUndoGroup* x1, QWidget* x2 = 0) : QUndoView(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QModelIndex indexAt(const QPoint& x1) const { void *fun = Objects::overrideFun(unique, 41); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 41, args)); } return  QUndoView::indexAt(x1); }
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void *fun = Objects::overrideFun(unique, 42); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 42, args).toBool()) return; } QUndoView::scrollTo(x1, x2); }
    QRect visualRect(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 47); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(this, fun, 47, args)); } return  QUndoView::visualRect(x1); }
    void keyboardSearch(const QString& x1) { void *fun = Objects::overrideFun(unique, 49); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 49, args).toBool()) return; } QUndoView::keyboardSearch(x1); }
    void setModel(QAbstractItemModel* x1) { void *fun = Objects::overrideFun(unique, 44); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 44, args).toBool()) return; } QUndoView::setModel(x1); }
    void setSelectionModel(QItemSelectionModel* x1) { void *fun = Objects::overrideFun(unique, 46); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 46, args).toBool()) return; } QUndoView::setSelectionModel(x1); }
    int sizeHintForColumn(int x1) const { void *fun = Objects::overrideFun(unique, 50); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 50, args).toInt(); } return  QUndoView::sizeHintForColumn(x1); }
    int sizeHintForRow(int x1) const { void *fun = Objects::overrideFun(unique, 51); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 51, args).toInt(); } return  QUndoView::sizeHintForRow(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QUndoView::inputMethodQuery(x1); }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void *fun = Objects::overrideFun(unique, 52); if(fun) { const void *args[] = { &x1, &x2, &x3 }; return callOverrideFun(this, fun, 52, args).toBool(); } return  QUndoView::edit(x1, x2, x3); }
    int horizontalOffset() const { void *fun = Objects::overrideFun(unique, 53); if(fun) { return callOverrideFun(this, fun, 53, 0).toInt(); } return  QUndoView::horizontalOffset(); }
    bool isIndexHidden(const QModelIndex& x1) const { void *fun = Objects::overrideFun(unique, 54); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 54, args).toBool(); } return  QUndoView::isIndexHidden(x1); }
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void *fun = Objects::overrideFun(unique, 55); if(fun) { const void *args[] = { &x1, &x2 }; return qVariantValue<QModelIndex>(callOverrideFun(this, fun, 55, args)); } return  QUndoView::moveCursor(x1, x2); }
    QModelIndexList selectedIndexes() const { void *fun = Objects::overrideFun(unique, 56); if(fun) { return qVariantValue<QModelIndexList>(callOverrideFun(this, fun, 56, 0)); } return  QUndoView::selectedIndexes(); }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void *fun = Objects::overrideFun(unique, 57); if(fun) { const void *args[] = { &x1, &x2 }; return (QItemSelectionModel::SelectionFlags)callOverrideFun(this, fun, 57, args).toInt(); } return  QUndoView::selectionCommand(x1, x2); }
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void *fun = Objects::overrideFun(unique, 58); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 58, args).toBool()) return; } QUndoView::setSelection(x1, x2); }
    void startDrag(Qt::DropActions x1) { void *fun = Objects::overrideFun(unique, 59); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 59, args).toBool()) return; } QUndoView::startDrag(x1); }
    int verticalOffset() const { void *fun = Objects::overrideFun(unique, 60); if(fun) { return callOverrideFun(this, fun, 60, 0).toInt(); } return  QUndoView::verticalOffset(); }
    QStyleOptionViewItem viewOptions() const { void *fun = Objects::overrideFun(unique, 61); if(fun) { return qVariantValue<QStyleOptionViewItem>(callOverrideFun(this, fun, 61, 0)); } return  QUndoView::viewOptions(); }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void *fun = Objects::overrideFun(unique, 62); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QRegion>(callOverrideFun(this, fun, 62, args)); } return  QUndoView::visualRegionForSelection(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QUndoView::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QUndoView::sizeHint(); }
    void scrollContentsBy(int x1, int x2) { void *fun = Objects::overrideFun(unique, 63); if(fun) { const void *args[] = { &x1, &x2 }; if(callOverrideFun(this, fun, 63, args).toBool()) return; } QUndoView::scrollContentsBy(x1, x2); }
    bool viewportEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 64); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 64, args).toBool(); } return  QUndoView::viewportEvent(x1); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QUndoView::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QUndoView::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QUndoView::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QUndoView::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QUndoView::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QUndoView::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QUndoView::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QUndoView::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QUndoView::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QUndoView::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QUndoView::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QUndoView::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QUndoView::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QUndoView::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QUndoView::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QUndoView::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QUndoView::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QUndoView::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QUndoView::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QUndoView::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QUndoView::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QUndoView::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QUndoView::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QUndoView::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QUndoView::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QUndoView::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QUndoView::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QUndoView::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QUndoView::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QUndoView::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QUndoView::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QUndoView::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QUndoView::timerEvent(x1); }
};

class LVBoxLayout : public QVBoxLayout {
    Q_OBJECT
public:
    LVBoxLayout(uint u) : unique(u) {}
    LVBoxLayout(uint u, QWidget* x1) : QVBoxLayout(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void addItem(QLayoutItem* x1) { void *fun = Objects::overrideFun(unique, 80); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 80, args).toBool()) return; } QVBoxLayout::addItem(x1); }
    int count() const { void *fun = Objects::overrideFun(unique, 81); if(fun) { return callOverrideFun(this, fun, 81, 0).toInt(); } return  QVBoxLayout::count(); }
    Qt::Orientations expandingDirections() const { void *fun = Objects::overrideFun(unique, 82); if(fun) { return (Qt::Orientations)callOverrideFun(this, fun, 82, 0).toInt(); } return  QVBoxLayout::expandingDirections(); }
    bool hasHeightForWidth() const { void *fun = Objects::overrideFun(unique, 83); if(fun) { return callOverrideFun(this, fun, 83, 0).toBool(); } return  QVBoxLayout::hasHeightForWidth(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QVBoxLayout::heightForWidth(x1); }
    void invalidate() { void *fun = Objects::overrideFun(unique, 84); if(fun) { if(callOverrideFun(this, fun, 84, 0).toBool()) return; } QVBoxLayout::invalidate(); }
    QLayoutItem* itemAt(int x1) const { void *fun = Objects::overrideFun(unique, 85); if(fun) { const void *args[] = { &x1 }; return (QLayoutItem*)qVariantValue<void*>(callOverrideFun(this, fun, 85, args)); } return  QVBoxLayout::itemAt(x1); }
    QSize maximumSize() const { void *fun = Objects::overrideFun(unique, 93); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 93, 0)); } return  QVBoxLayout::maximumSize(); }
    int minimumHeightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 126); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 126, args).toInt(); } return  QVBoxLayout::minimumHeightForWidth(x1); }
    QSize minimumSize() const { void *fun = Objects::overrideFun(unique, 86); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 86, 0)); } return  QVBoxLayout::minimumSize(); }
    void setGeometry(const QRect& x1) { void *fun = Objects::overrideFun(unique, 87); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 87, args).toBool()) return; } QVBoxLayout::setGeometry(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QVBoxLayout::sizeHint(); }
    QLayoutItem* takeAt(int x1) { void *fun = Objects::overrideFun(unique, 88); if(fun) { const void *args[] = { &x1 }; return (QLayoutItem*)qVariantValue<void*>(callOverrideFun(this, fun, 88, args)); } return  QVBoxLayout::takeAt(x1); }
    int indexOf(QWidget* x1) const { void *fun = Objects::overrideFun(unique, 89); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 89, args).toInt(); } return  QVBoxLayout::indexOf(x1); }
    QRect geometry() const { void *fun = Objects::overrideFun(unique, 90); if(fun) { return qVariantValue<QRect>(callOverrideFun(this, fun, 90, 0)); } return  QVBoxLayout::geometry(); }
    bool isEmpty() const { void *fun = Objects::overrideFun(unique, 91); if(fun) { return callOverrideFun(this, fun, 91, 0).toBool(); } return  QVBoxLayout::isEmpty(); }
    QLayout* layout() { void *fun = Objects::overrideFun(unique, 92); if(fun) { return (QLayout*)qVariantValue<void*>(callOverrideFun(this, fun, 92, 0)); } return  QVBoxLayout::layout(); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QVBoxLayout::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QVBoxLayout::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QVBoxLayout::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QVBoxLayout::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QVBoxLayout::timerEvent(x1); }
};

class LWidget : public QWidget {
    Q_OBJECT
public:
    LWidget(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) : QWidget(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QWidget::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QWidget::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QWidget::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QWidget::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QWidget::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QWidget::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QWidget::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QWidget::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QWidget::timerEvent(x1); }
};

class LWizard : public QWizard {
    Q_OBJECT
public:
    LWizard(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) : QWizard(x1, x2), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int nextId() const { void *fun = Objects::overrideFun(unique, 196); if(fun) { return callOverrideFun(this, fun, 196, 0).toInt(); } return  QWizard::nextId(); }
    bool validateCurrentPage() { void *fun = Objects::overrideFun(unique, 197); if(fun) { return callOverrideFun(this, fun, 197, 0).toBool(); } return  QWizard::validateCurrentPage(); }
    void setVisible(bool x1) { void *fun = Objects::overrideFun(unique, 77); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 77, args).toBool()) return; } QWizard::setVisible(x1); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QWizard::sizeHint(); }
    void cleanupPage(int x1) { void *fun = Objects::overrideFun(unique, 198); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 198, args).toBool()) return; } QWizard::cleanupPage(x1); }
    void initializePage(int x1) { void *fun = Objects::overrideFun(unique, 199); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 199, args).toBool()) return; } QWizard::initializePage(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QWizard::minimumSizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QWizard::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QWizard::inputMethodQuery(x1); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QWizard::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QWizard::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QWizard::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QWizard::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QWizard::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QWizard::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QWizard::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QWizard::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QWizard::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QWizard::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QWizard::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QWizard::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QWizard::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QWizard::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QWizard::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QWizard::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QWizard::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QWizard::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QWizard::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QWizard::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QWizard::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QWizard::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QWizard::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QWizard::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QWizard::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QWizard::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QWizard::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QWizard::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QWizard::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QWizard::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QWizard::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QWizard::timerEvent(x1); }
};

class LWizardPage : public QWizardPage {
    Q_OBJECT
public:
    LWizardPage(uint u, QWidget* x1 = 0) : QWizardPage(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    void cleanupPage() { void *fun = Objects::overrideFun(unique, 200); if(fun) { if(callOverrideFun(this, fun, 200, 0).toBool()) return; } QWizardPage::cleanupPage(); }
    void initializePage() { void *fun = Objects::overrideFun(unique, 201); if(fun) { if(callOverrideFun(this, fun, 201, 0).toBool()) return; } QWizardPage::initializePage(); }
    bool isComplete() const { void *fun = Objects::overrideFun(unique, 202); if(fun) { return callOverrideFun(this, fun, 202, 0).toBool(); } return  QWizardPage::isComplete(); }
    int nextId() const { void *fun = Objects::overrideFun(unique, 196); if(fun) { return callOverrideFun(this, fun, 196, 0).toInt(); } return  QWizardPage::nextId(); }
    bool validatePage() { void *fun = Objects::overrideFun(unique, 203); if(fun) { return callOverrideFun(this, fun, 203, 0).toBool(); } return  QWizardPage::validatePage(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QWizardPage::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QWizardPage::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QWizardPage::minimumSizeHint(); }
    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QWizardPage::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QWizardPage::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QWizardPage::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QWizardPage::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QWizardPage::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QWizardPage::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QWizardPage::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QWizardPage::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QWizardPage::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QWizardPage::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QWizardPage::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QWizardPage::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QWizardPage::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QWizardPage::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QWizardPage::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QWizardPage::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QWizardPage::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QWizardPage::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QWizardPage::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QWizardPage::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QWizardPage::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QWizardPage::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QWizardPage::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QWizardPage::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QWizardPage::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QWizardPage::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QWizardPage::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QWizardPage::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QWizardPage::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QWizardPage::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QWizardPage::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QWizardPage::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QWizardPage::timerEvent(x1); }
};

class LWorkspace : public QWorkspace {
    Q_OBJECT
public:
    LWorkspace(uint u, QWidget* x1 = 0) : QWorkspace(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    QSize sizeHint() const { void *fun = Objects::overrideFun(unique, 7); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 7, 0)); } return  QWorkspace::sizeHint(); }
    int heightForWidth(int x1) const { void *fun = Objects::overrideFun(unique, 9); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 9, args).toInt(); } return  QWorkspace::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void *fun = Objects::overrideFun(unique, 10); if(fun) { const void *args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(this, fun, 10, args)); } return  QWorkspace::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void *fun = Objects::overrideFun(unique, 6); if(fun) { return qVariantValue<QSize>(callOverrideFun(this, fun, 6, 0)); } return  QWorkspace::minimumSizeHint(); }
    void actionEvent(QActionEvent* x1) { void *fun = Objects::overrideFun(unique, 11); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 11, args).toBool()) return; } QWorkspace::actionEvent(x1); }
    void changeEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 12); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 12, args).toBool()) return; } QWorkspace::changeEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void *fun = Objects::overrideFun(unique, 13); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 13, args).toBool()) return; } QWorkspace::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void *fun = Objects::overrideFun(unique, 14); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 14, args).toBool()) return; } QWorkspace::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void *fun = Objects::overrideFun(unique, 15); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 15, args).toBool()) return; } QWorkspace::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void *fun = Objects::overrideFun(unique, 16); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 16, args).toBool()) return; } QWorkspace::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 17); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 17, args).toBool()) return; } QWorkspace::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void *fun = Objects::overrideFun(unique, 18); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 18, args).toBool()) return; } QWorkspace::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 19); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 19, args).toBool()) return; } QWorkspace::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 20); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 20, args).toBool()) return; } QWorkspace::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void *fun = Objects::overrideFun(unique, 21); if(fun) { const void *args[] = { &x1 }; return callOverrideFun(this, fun, 21, args).toBool(); } return  QWorkspace::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void *fun = Objects::overrideFun(unique, 22); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 22, args).toBool()) return; } QWorkspace::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void *fun = Objects::overrideFun(unique, 23); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 23, args).toBool()) return; } QWorkspace::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void *fun = Objects::overrideFun(unique, 24); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 24, args).toBool()) return; } QWorkspace::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 25); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 25, args).toBool()) return; } QWorkspace::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void *fun = Objects::overrideFun(unique, 26); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 26, args).toBool()) return; } QWorkspace::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 27); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 27, args).toBool()) return; } QWorkspace::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 28); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 28, args).toBool()) return; } QWorkspace::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 29); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 29, args).toBool()) return; } QWorkspace::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 30); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 30, args).toBool()) return; } QWorkspace::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void *fun = Objects::overrideFun(unique, 31); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 31, args).toBool()) return; } QWorkspace::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void *fun = Objects::overrideFun(unique, 32); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 32, args).toBool()) return; } QWorkspace::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void *fun = Objects::overrideFun(unique, 33); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 33, args).toBool()) return; } QWorkspace::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void *fun = Objects::overrideFun(unique, 34); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 34, args).toBool()) return; } QWorkspace::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void *fun = Objects::overrideFun(unique, 35); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 35, args).toBool()) return; } QWorkspace::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void *fun = Objects::overrideFun(unique, 36); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 36, args).toBool()) return; } QWorkspace::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void *fun = Objects::overrideFun(unique, 37); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 37, args).toBool()) return; } QWorkspace::wheelEvent(x1); }
    void childEvent(QChildEvent* x1) { void *fun = Objects::overrideFun(unique, 1); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 1, args).toBool()) return; } QWorkspace::childEvent(x1); }
    void connectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 2); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 2, args).toBool()) return; } QWorkspace::connectNotify(x1); }
    void customEvent(QEvent* x1) { void *fun = Objects::overrideFun(unique, 3); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 3, args).toBool()) return; } QWorkspace::customEvent(x1); }
    void disconnectNotify(const char* x1) { void *fun = Objects::overrideFun(unique, 4); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 4, args).toBool()) return; } QWorkspace::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void *fun = Objects::overrideFun(unique, 5); if(fun) { const void *args[] = { &x1 }; if(callOverrideFun(this, fun, 5, args).toBool()) return; } QWorkspace::timerEvent(x1); }
};

#endif
