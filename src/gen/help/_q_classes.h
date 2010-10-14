// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

class LHelpContentModel : public QHelpContentModel {
    Q_OBJECT
    friend class Q87;
public:

    static NumList overrideIds;
    uint unique;

    int columnCount(const QModelIndex& x1 = QModelIndex()) const { void* fun = LObjects::overrideFun(unique, 54); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 54, args).toInt(); } return QHelpContentModel::columnCount(x1); }
    QVariant data(const QModelIndex& x1, int x2) const { void* fun = LObjects::overrideFun(unique, 55); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QVariant>(callOverrideFun(fun, 55, args)); } return QHelpContentModel::data(x1, x2); }
    QModelIndex index(int x1, int x2, const QModelIndex& x3 = QModelIndex()) const { void* fun = LObjects::overrideFun(unique, 61); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return qVariantValue<QModelIndex>(callOverrideFun(fun, 61, args)); } return QHelpContentModel::index(x1, x2, x3); }
    QModelIndex parent(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 67); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(fun, 67, args)); } return QHelpContentModel::parent(x1); }
    int rowCount(const QModelIndex& x1 = QModelIndex()) const { void* fun = LObjects::overrideFun(unique, 70); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 70, args).toInt(); } return QHelpContentModel::rowCount(x1); }
    QModelIndex buddy(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 52); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(fun, 52, args)); } return QHelpContentModel::buddy(x1); }
    bool canFetchMore(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 53); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 53, args).toBool(); } return QHelpContentModel::canFetchMore(x1); }
    bool dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) { void* fun = LObjects::overrideFun(unique, 56); if(fun) { const void* args[] = { &x1, &x2, &x3, &x4, &x5 }; return callOverrideFun(fun, 56, args).toBool(); } return QHelpContentModel::dropMimeData(x1, x2, x3, x4, x5); }
    void fetchMore(const QModelIndex& x1) { void* fun = LObjects::overrideFun(unique, 57); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 57, args).toBool()) return; } QHelpContentModel::fetchMore(x1); }
    Qt::ItemFlags flags(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 58); if(fun) { const void* args[] = { &x1 }; return (Qt::ItemFlags)callOverrideFun(fun, 58, args).toInt(); } return QHelpContentModel::flags(x1); }
    bool hasChildren(const QModelIndex& x1 = QModelIndex()) const { void* fun = LObjects::overrideFun(unique, 59); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 59, args).toBool(); } return QHelpContentModel::hasChildren(x1); }
    QVariant headerData(int x1, Qt::Orientation x2, int x3 = Qt::DisplayRole) const { void* fun = LObjects::overrideFun(unique, 60); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return qVariantValue<QVariant>(callOverrideFun(fun, 60, args)); } return QHelpContentModel::headerData(x1, x2, x3); }
    bool insertColumns(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void* fun = LObjects::overrideFun(unique, 62); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return callOverrideFun(fun, 62, args).toBool(); } return QHelpContentModel::insertColumns(x1, x2, x3); }
    bool insertRows(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void* fun = LObjects::overrideFun(unique, 63); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return callOverrideFun(fun, 63, args).toBool(); } return QHelpContentModel::insertRows(x1, x2, x3); }
    QModelIndexList match(const QModelIndex& x1, int x2, const QVariant& x3, int x4 = 1, Qt::MatchFlags x5 = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { void* fun = LObjects::overrideFun(unique, 64); if(fun) { const void* args[] = { &x1, &x2, &x3, &x4, &x5 }; return qVariantValue<QModelIndexList>(callOverrideFun(fun, 64, args)); } return QHelpContentModel::match(x1, x2, x3, x4, x5); }
    QMimeData* mimeData(const QModelIndexList& x1) const { void* fun = LObjects::overrideFun(unique, 65); if(fun) { const void* args[] = { &x1 }; return (QMimeData*)qVariantValue<void*>(callOverrideFun(fun, 65, args)); } return QHelpContentModel::mimeData(x1); }
    QStringList mimeTypes() const { void* fun = LObjects::overrideFun(unique, 66); if(fun) { return qVariantValue<QStringList>(callOverrideFun(fun, 66, 0)); } return QHelpContentModel::mimeTypes(); }
    bool removeColumns(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void* fun = LObjects::overrideFun(unique, 68); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return callOverrideFun(fun, 68, args).toBool(); } return QHelpContentModel::removeColumns(x1, x2, x3); }
    bool removeRows(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void* fun = LObjects::overrideFun(unique, 69); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return callOverrideFun(fun, 69, args).toBool(); } return QHelpContentModel::removeRows(x1, x2, x3); }
    bool setData(const QModelIndex& x1, const QVariant& x2, int x3 = Qt::EditRole) { void* fun = LObjects::overrideFun(unique, 71); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return callOverrideFun(fun, 71, args).toBool(); } return QHelpContentModel::setData(x1, x2, x3); }
    bool setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4 = Qt::EditRole) { void* fun = LObjects::overrideFun(unique, 72); if(fun) { const void* args[] = { &x1, &x2, &x3, &x4 }; return callOverrideFun(fun, 72, args).toBool(); } return QHelpContentModel::setHeaderData(x1, x2, x3, x4); }
    void sort(int x1, Qt::SortOrder x2 = Qt::AscendingOrder) { void* fun = LObjects::overrideFun(unique, 73); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 73, args).toBool()) return; } QHelpContentModel::sort(x1, x2); }
    QSize span(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 74); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QSize>(callOverrideFun(fun, 74, args)); } return QHelpContentModel::span(x1); }
    Qt::DropActions supportedDropActions() const { void* fun = LObjects::overrideFun(unique, 75); if(fun) { return (Qt::DropActions)callOverrideFun(fun, 75, 0).toInt(); } return QHelpContentModel::supportedDropActions(); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QHelpContentModel::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QHelpContentModel::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QHelpContentModel::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QHelpContentModel::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QHelpContentModel::timerEvent(x1); }
};

class LHelpContentWidget : public QHelpContentWidget {
    Q_OBJECT
    friend class Q88;
public:

    static NumList overrideIds;
    uint unique;

    void drawBranches(QPainter* x1, const QRect& x2, const QModelIndex& x3) const { void* fun = LObjects::overrideFun(unique, 244); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 244, args).toBool()) return; } QHelpContentWidget::drawBranches(x1, x2, x3); }
    void drawRow(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { void* fun = LObjects::overrideFun(unique, 245); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 245, args).toBool()) return; } QHelpContentWidget::drawRow(x1, x2, x3); }
    void dataChanged(const QModelIndex& x1, const QModelIndex& x2) { void* fun = LObjects::overrideFun(unique, 246); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 246, args).toBool()) return; } QHelpContentWidget::dataChanged(x1, x2); }
    QModelIndex indexAt(const QPoint& x1) const { void* fun = LObjects::overrideFun(unique, 76); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(fun, 76, args)); } return QHelpContentWidget::indexAt(x1); }
    void keyboardSearch(const QString& x1) { void* fun = LObjects::overrideFun(unique, 77); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 77, args).toBool()) return; } QHelpContentWidget::keyboardSearch(x1); }
    void reset() { void* fun = LObjects::overrideFun(unique, 114); if(fun) { if(callOverrideFun(fun, 114, 0).toBool()) return; } QHelpContentWidget::reset(); }
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void* fun = LObjects::overrideFun(unique, 78); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 78, args).toBool()) return; } QHelpContentWidget::scrollTo(x1, x2); }
    void selectAll() { void* fun = LObjects::overrideFun(unique, 175); if(fun) { if(callOverrideFun(fun, 175, 0).toBool()) return; } QHelpContentWidget::selectAll(); }
    void setModel(QAbstractItemModel* x1) { void* fun = LObjects::overrideFun(unique, 79); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 79, args).toBool()) return; } QHelpContentWidget::setModel(x1); }
    void setRootIndex(const QModelIndex& x1) { void* fun = LObjects::overrideFun(unique, 176); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 176, args).toBool()) return; } QHelpContentWidget::setRootIndex(x1); }
    void setSelectionModel(QItemSelectionModel* x1) { void* fun = LObjects::overrideFun(unique, 80); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 80, args).toBool()) return; } QHelpContentWidget::setSelectionModel(x1); }
    QRect visualRect(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 83); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(fun, 83, args)); } return QHelpContentWidget::visualRect(x1); }
    void currentChanged(const QModelIndex& x1, const QModelIndex& x2) { void* fun = LObjects::overrideFun(unique, 177); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 177, args).toBool()) return; } QHelpContentWidget::currentChanged(x1, x2); }
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 31, args).toBool()) return; } QHelpContentWidget::dragMoveEvent(x1); }
    int horizontalOffset() const { void* fun = LObjects::overrideFun(unique, 85); if(fun) { return callOverrideFun(fun, 85, 0).toInt(); } return QHelpContentWidget::horizontalOffset(); }
    bool isIndexHidden(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 86); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 86, args).toBool(); } return QHelpContentWidget::isIndexHidden(x1); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QHelpContentWidget::keyPressEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 38, args).toBool()) return; } QHelpContentWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 18, args).toBool()) return; } QHelpContentWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 19, args).toBool()) return; } QHelpContentWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 20, args).toBool()) return; } QHelpContentWidget::mouseReleaseEvent(x1); }
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void* fun = LObjects::overrideFun(unique, 87); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QModelIndex>(callOverrideFun(fun, 87, args)); } return QHelpContentWidget::moveCursor(x1, x2); }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 21, args).toBool()) return; } QHelpContentWidget::paintEvent(x1); }
    void rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 247, args).toBool()) return; } QHelpContentWidget::rowsAboutToBeRemoved(x1, x2, x3); }
    void rowsInserted(const QModelIndex& x1, int x2, int x3) { void* fun = LObjects::overrideFun(unique, 178); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 178, args).toBool()) return; } QHelpContentWidget::rowsInserted(x1, x2, x3); }
    void scrollContentsBy(int x1, int x2) { void* fun = LObjects::overrideFun(unique, 96); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 96, args).toBool()) return; } QHelpContentWidget::scrollContentsBy(x1, x2); }
    QModelIndexList selectedIndexes() const { void* fun = LObjects::overrideFun(unique, 88); if(fun) { return qVariantValue<QModelIndexList>(callOverrideFun(fun, 88, 0)); } return QHelpContentWidget::selectedIndexes(); }
    void selectionChanged(const QItemSelection& x1, const QItemSelection& x2) { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 248, args).toBool()) return; } QHelpContentWidget::selectionChanged(x1, x2); }
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void* fun = LObjects::overrideFun(unique, 90); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 90, args).toBool()) return; } QHelpContentWidget::setSelection(x1, x2); }
    int sizeHintForColumn(int x1) const { void* fun = LObjects::overrideFun(unique, 81); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 81, args).toInt(); } return QHelpContentWidget::sizeHintForColumn(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QHelpContentWidget::timerEvent(x1); }
    void updateGeometries() { void* fun = LObjects::overrideFun(unique, 249); if(fun) { if(callOverrideFun(fun, 249, 0).toBool()) return; } QHelpContentWidget::updateGeometries(); }
    int verticalOffset() const { void* fun = LObjects::overrideFun(unique, 92); if(fun) { return callOverrideFun(fun, 92, 0).toInt(); } return QHelpContentWidget::verticalOffset(); }
    bool viewportEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 95); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 95, args).toBool(); } return QHelpContentWidget::viewportEvent(x1); }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void* fun = LObjects::overrideFun(unique, 94); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QRegion>(callOverrideFun(fun, 94, args)); } return QHelpContentWidget::visualRegionForSelection(x1); }
    int sizeHintForRow(int x1) const { void* fun = LObjects::overrideFun(unique, 82); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 82, args).toInt(); } return QHelpContentWidget::sizeHintForRow(x1); }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void* fun = LObjects::overrideFun(unique, 84); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return callOverrideFun(fun, 84, args).toBool(); } return QHelpContentWidget::edit(x1, x2, x3); }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void* fun = LObjects::overrideFun(unique, 89); if(fun) { const void* args[] = { &x1, &x2 }; return (QItemSelectionModel::SelectionFlags)callOverrideFun(fun, 89, args).toInt(); } return QHelpContentWidget::selectionCommand(x1, x2); }
    void startDrag(Qt::DropActions x1) { void* fun = LObjects::overrideFun(unique, 91); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 91, args).toBool()) return; } QHelpContentWidget::startDrag(x1); }
    QStyleOptionViewItem viewOptions() const { void* fun = LObjects::overrideFun(unique, 93); if(fun) { return qVariantValue<QStyleOptionViewItem>(callOverrideFun(fun, 93, 0)); } return QHelpContentWidget::viewOptions(); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QHelpContentWidget::inputMethodQuery(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 29, args).toBool()) return; } QHelpContentWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 30, args).toBool()) return; } QHelpContentWidget::dragLeaveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 32, args).toBool()) return; } QHelpContentWidget::dropEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QHelpContentWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 34, args).toBool(); } return QHelpContentWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QHelpContentWidget::focusOutEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QHelpContentWidget::inputMethodEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 40, args).toBool()) return; } QHelpContentWidget::resizeEvent(x1); }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } return QHelpContentWidget::minimumSizeHint(); }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return QHelpContentWidget::sizeHint(); }
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 28, args).toBool()) return; } QHelpContentWidget::contextMenuEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 43, args).toBool()) return; } QHelpContentWidget::wheelEvent(x1); }
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 13, args).toBool()) return; } QHelpContentWidget::changeEvent(x1); }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 22, args).toInt(); } return QHelpContentWidget::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 26, args).toBool()) return; } QHelpContentWidget::actionEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 27, args).toBool()) return; } QHelpContentWidget::closeEvent(x1); }
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 33, args).toBool()) return; } QHelpContentWidget::enterEvent(x1); }
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 35, args).toBool()) return; } QHelpContentWidget::hideEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QHelpContentWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 37, args).toBool()) return; } QHelpContentWidget::leaveEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 39, args).toBool()) return; } QHelpContentWidget::moveEvent(x1); }
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 41, args).toBool()) return; } QHelpContentWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 42, args).toBool()) return; } QHelpContentWidget::tabletEvent(x1); }
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QHelpContentWidget::metric(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QHelpContentWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QHelpContentWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QHelpContentWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QHelpContentWidget::disconnectNotify(x1); }
};

class LHelpEngineCore : public QHelpEngineCore {
    Q_OBJECT
    friend class Q89;
public:

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QHelpEngineCore::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QHelpEngineCore::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QHelpEngineCore::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QHelpEngineCore::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QHelpEngineCore::timerEvent(x1); }
};

class LHelpIndexWidget : public QHelpIndexWidget {
    Q_OBJECT
    friend class Q91;
public:

    static NumList overrideIds;
    uint unique;

    QModelIndex indexAt(const QPoint& x1) const { void* fun = LObjects::overrideFun(unique, 76); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QModelIndex>(callOverrideFun(fun, 76, args)); } return QHelpIndexWidget::indexAt(x1); }
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void* fun = LObjects::overrideFun(unique, 78); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 78, args).toBool()) return; } QHelpIndexWidget::scrollTo(x1, x2); }
    QRect visualRect(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 83); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QRect>(callOverrideFun(fun, 83, args)); } return QHelpIndexWidget::visualRect(x1); }
    void currentChanged(const QModelIndex& x1, const QModelIndex& x2) { void* fun = LObjects::overrideFun(unique, 177); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 177, args).toBool()) return; } QHelpIndexWidget::currentChanged(x1, x2); }
    void dataChanged(const QModelIndex& x1, const QModelIndex& x2) { void* fun = LObjects::overrideFun(unique, 246); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 246, args).toBool()) return; } QHelpIndexWidget::dataChanged(x1, x2); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 30, args).toBool()) return; } QHelpIndexWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 31, args).toBool()) return; } QHelpIndexWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 32, args).toBool()) return; } QHelpIndexWidget::dropEvent(x1); }
    int horizontalOffset() const { void* fun = LObjects::overrideFun(unique, 85); if(fun) { return callOverrideFun(fun, 85, 0).toInt(); } return QHelpIndexWidget::horizontalOffset(); }
    bool isIndexHidden(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 86); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 86, args).toBool(); } return QHelpIndexWidget::isIndexHidden(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 18, args).toBool()) return; } QHelpIndexWidget::mouseMoveEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 20, args).toBool()) return; } QHelpIndexWidget::mouseReleaseEvent(x1); }
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void* fun = LObjects::overrideFun(unique, 87); if(fun) { const void* args[] = { &x1, &x2 }; return qVariantValue<QModelIndex>(callOverrideFun(fun, 87, args)); } return QHelpIndexWidget::moveCursor(x1, x2); }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 21, args).toBool()) return; } QHelpIndexWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 40, args).toBool()) return; } QHelpIndexWidget::resizeEvent(x1); }
    void rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) { void* fun = LObjects::overrideFun(unique, 247); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 247, args).toBool()) return; } QHelpIndexWidget::rowsAboutToBeRemoved(x1, x2, x3); }
    void rowsInserted(const QModelIndex& x1, int x2, int x3) { void* fun = LObjects::overrideFun(unique, 178); if(fun) { const void* args[] = { &x1, &x2, &x3 }; if(callOverrideFun(fun, 178, args).toBool()) return; } QHelpIndexWidget::rowsInserted(x1, x2, x3); }
    QModelIndexList selectedIndexes() const { void* fun = LObjects::overrideFun(unique, 88); if(fun) { return qVariantValue<QModelIndexList>(callOverrideFun(fun, 88, 0)); } return QHelpIndexWidget::selectedIndexes(); }
    void selectionChanged(const QItemSelection& x1, const QItemSelection& x2) { void* fun = LObjects::overrideFun(unique, 248); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 248, args).toBool()) return; } QHelpIndexWidget::selectionChanged(x1, x2); }
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void* fun = LObjects::overrideFun(unique, 90); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 90, args).toBool()) return; } QHelpIndexWidget::setSelection(x1, x2); }
    void startDrag(Qt::DropActions x1) { void* fun = LObjects::overrideFun(unique, 91); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 91, args).toBool()) return; } QHelpIndexWidget::startDrag(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QHelpIndexWidget::timerEvent(x1); }
    void updateGeometries() { void* fun = LObjects::overrideFun(unique, 249); if(fun) { if(callOverrideFun(fun, 249, 0).toBool()) return; } QHelpIndexWidget::updateGeometries(); }
    int verticalOffset() const { void* fun = LObjects::overrideFun(unique, 92); if(fun) { return callOverrideFun(fun, 92, 0).toInt(); } return QHelpIndexWidget::verticalOffset(); }
    QStyleOptionViewItem viewOptions() const { void* fun = LObjects::overrideFun(unique, 93); if(fun) { return qVariantValue<QStyleOptionViewItem>(callOverrideFun(fun, 93, 0)); } return QHelpIndexWidget::viewOptions(); }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void* fun = LObjects::overrideFun(unique, 94); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QRegion>(callOverrideFun(fun, 94, args)); } return QHelpIndexWidget::visualRegionForSelection(x1); }
    void keyboardSearch(const QString& x1) { void* fun = LObjects::overrideFun(unique, 77); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 77, args).toBool()) return; } QHelpIndexWidget::keyboardSearch(x1); }
    void setModel(QAbstractItemModel* x1) { void* fun = LObjects::overrideFun(unique, 79); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 79, args).toBool()) return; } QHelpIndexWidget::setModel(x1); }
    void setSelectionModel(QItemSelectionModel* x1) { void* fun = LObjects::overrideFun(unique, 80); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 80, args).toBool()) return; } QHelpIndexWidget::setSelectionModel(x1); }
    int sizeHintForColumn(int x1) const { void* fun = LObjects::overrideFun(unique, 81); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 81, args).toInt(); } return QHelpIndexWidget::sizeHintForColumn(x1); }
    int sizeHintForRow(int x1) const { void* fun = LObjects::overrideFun(unique, 82); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 82, args).toInt(); } return QHelpIndexWidget::sizeHintForRow(x1); }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void* fun = LObjects::overrideFun(unique, 84); if(fun) { const void* args[] = { &x1, &x2, &x3 }; return callOverrideFun(fun, 84, args).toBool(); } return QHelpIndexWidget::edit(x1, x2, x3); }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void* fun = LObjects::overrideFun(unique, 89); if(fun) { const void* args[] = { &x1, &x2 }; return (QItemSelectionModel::SelectionFlags)callOverrideFun(fun, 89, args).toInt(); } return QHelpIndexWidget::selectionCommand(x1, x2); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QHelpIndexWidget::inputMethodQuery(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 29, args).toBool()) return; } QHelpIndexWidget::dragEnterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QHelpIndexWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 34, args).toBool(); } return QHelpIndexWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QHelpIndexWidget::focusOutEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QHelpIndexWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QHelpIndexWidget::keyPressEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 38, args).toBool()) return; } QHelpIndexWidget::mouseDoubleClickEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 19, args).toBool()) return; } QHelpIndexWidget::mousePressEvent(x1); }
    bool viewportEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 95); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 95, args).toBool(); } return QHelpIndexWidget::viewportEvent(x1); }
    void scrollContentsBy(int x1, int x2) { void* fun = LObjects::overrideFun(unique, 96); if(fun) { const void* args[] = { &x1, &x2 }; if(callOverrideFun(fun, 96, args).toBool()) return; } QHelpIndexWidget::scrollContentsBy(x1, x2); }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } return QHelpIndexWidget::minimumSizeHint(); }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return QHelpIndexWidget::sizeHint(); }
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 28, args).toBool()) return; } QHelpIndexWidget::contextMenuEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 43, args).toBool()) return; } QHelpIndexWidget::wheelEvent(x1); }
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 13, args).toBool()) return; } QHelpIndexWidget::changeEvent(x1); }
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 22, args).toInt(); } return QHelpIndexWidget::heightForWidth(x1); }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 26, args).toBool()) return; } QHelpIndexWidget::actionEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 27, args).toBool()) return; } QHelpIndexWidget::closeEvent(x1); }
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 33, args).toBool()) return; } QHelpIndexWidget::enterEvent(x1); }
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 35, args).toBool()) return; } QHelpIndexWidget::hideEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QHelpIndexWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 37, args).toBool()) return; } QHelpIndexWidget::leaveEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 39, args).toBool()) return; } QHelpIndexWidget::moveEvent(x1); }
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 41, args).toBool()) return; } QHelpIndexWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 42, args).toBool()) return; } QHelpIndexWidget::tabletEvent(x1); }
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QHelpIndexWidget::metric(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QHelpIndexWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QHelpIndexWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QHelpIndexWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QHelpIndexWidget::disconnectNotify(x1); }
};

class LHelpSearchEngine : public QHelpSearchEngine {
    Q_OBJECT
    friend class Q92;
public:

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QHelpSearchEngine::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QHelpSearchEngine::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QHelpSearchEngine::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QHelpSearchEngine::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QHelpSearchEngine::timerEvent(x1); }
};

class LHelpSearchQueryWidget : public QHelpSearchQueryWidget {
    Q_OBJECT
    friend class Q93;
public:
    LHelpSearchQueryWidget(uint u, QWidget* x1 = 0) : QHelpSearchQueryWidget(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 22, args).toInt(); } return QHelpSearchQueryWidget::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QHelpSearchQueryWidget::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } return QHelpSearchQueryWidget::minimumSizeHint(); }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return QHelpSearchQueryWidget::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 26, args).toBool()) return; } QHelpSearchQueryWidget::actionEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 27, args).toBool()) return; } QHelpSearchQueryWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 28, args).toBool()) return; } QHelpSearchQueryWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 29, args).toBool()) return; } QHelpSearchQueryWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 30, args).toBool()) return; } QHelpSearchQueryWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 31, args).toBool()) return; } QHelpSearchQueryWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 32, args).toBool()) return; } QHelpSearchQueryWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 33, args).toBool()) return; } QHelpSearchQueryWidget::enterEvent(x1); }
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 34, args).toBool(); } return QHelpSearchQueryWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QHelpSearchQueryWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 35, args).toBool()) return; } QHelpSearchQueryWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QHelpSearchQueryWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QHelpSearchQueryWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QHelpSearchQueryWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 37, args).toBool()) return; } QHelpSearchQueryWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 38, args).toBool()) return; } QHelpSearchQueryWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 18, args).toBool()) return; } QHelpSearchQueryWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 19, args).toBool()) return; } QHelpSearchQueryWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 20, args).toBool()) return; } QHelpSearchQueryWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 39, args).toBool()) return; } QHelpSearchQueryWidget::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 21, args).toBool()) return; } QHelpSearchQueryWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 40, args).toBool()) return; } QHelpSearchQueryWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 41, args).toBool()) return; } QHelpSearchQueryWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 42, args).toBool()) return; } QHelpSearchQueryWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 43, args).toBool()) return; } QHelpSearchQueryWidget::wheelEvent(x1); }
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QHelpSearchQueryWidget::metric(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QHelpSearchQueryWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QHelpSearchQueryWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QHelpSearchQueryWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QHelpSearchQueryWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QHelpSearchQueryWidget::timerEvent(x1); }
};

class LHelpSearchResultWidget : public QHelpSearchResultWidget {
    Q_OBJECT
    friend class Q94;
public:

    static NumList overrideIds;
    uint unique;

    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 22, args).toInt(); } return QHelpSearchResultWidget::heightForWidth(x1); }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); if(fun) { const void* args[] = { &x1 }; return qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } return QHelpSearchResultWidget::inputMethodQuery(x1); }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } return QHelpSearchResultWidget::minimumSizeHint(); }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); if(fun) { return qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } return QHelpSearchResultWidget::sizeHint(); }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 26, args).toBool()) return; } QHelpSearchResultWidget::actionEvent(x1); }
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 27, args).toBool()) return; } QHelpSearchResultWidget::closeEvent(x1); }
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 28, args).toBool()) return; } QHelpSearchResultWidget::contextMenuEvent(x1); }
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 29, args).toBool()) return; } QHelpSearchResultWidget::dragEnterEvent(x1); }
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 30, args).toBool()) return; } QHelpSearchResultWidget::dragLeaveEvent(x1); }
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 31, args).toBool()) return; } QHelpSearchResultWidget::dragMoveEvent(x1); }
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 32, args).toBool()) return; } QHelpSearchResultWidget::dropEvent(x1); }
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 33, args).toBool()) return; } QHelpSearchResultWidget::enterEvent(x1); }
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 14, args).toBool()) return; } QHelpSearchResultWidget::focusInEvent(x1); }
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 34, args).toBool(); } return QHelpSearchResultWidget::focusNextPrevChild(x1); }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 15, args).toBool()) return; } QHelpSearchResultWidget::focusOutEvent(x1); }
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 35, args).toBool()) return; } QHelpSearchResultWidget::hideEvent(x1); }
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 36, args).toBool()) return; } QHelpSearchResultWidget::inputMethodEvent(x1); }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 16, args).toBool()) return; } QHelpSearchResultWidget::keyPressEvent(x1); }
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 17, args).toBool()) return; } QHelpSearchResultWidget::keyReleaseEvent(x1); }
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 37, args).toBool()) return; } QHelpSearchResultWidget::leaveEvent(x1); }
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 38, args).toBool()) return; } QHelpSearchResultWidget::mouseDoubleClickEvent(x1); }
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 18, args).toBool()) return; } QHelpSearchResultWidget::mouseMoveEvent(x1); }
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 19, args).toBool()) return; } QHelpSearchResultWidget::mousePressEvent(x1); }
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 20, args).toBool()) return; } QHelpSearchResultWidget::mouseReleaseEvent(x1); }
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 39, args).toBool()) return; } QHelpSearchResultWidget::moveEvent(x1); }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 21, args).toBool()) return; } QHelpSearchResultWidget::paintEvent(x1); }
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 40, args).toBool()) return; } QHelpSearchResultWidget::resizeEvent(x1); }
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 41, args).toBool()) return; } QHelpSearchResultWidget::showEvent(x1); }
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 42, args).toBool()) return; } QHelpSearchResultWidget::tabletEvent(x1); }
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 43, args).toBool()) return; } QHelpSearchResultWidget::wheelEvent(x1); }
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); if(fun) { const void* args[] = { &x1 }; return callOverrideFun(fun, 44, args).toInt(); } return QHelpSearchResultWidget::metric(x1); }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 5, args).toBool()) return; } QHelpSearchResultWidget::childEvent(x1); }
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 6, args).toBool()) return; } QHelpSearchResultWidget::connectNotify(x1); }
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 7, args).toBool()) return; } QHelpSearchResultWidget::customEvent(x1); }
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 8, args).toBool()) return; } QHelpSearchResultWidget::disconnectNotify(x1); }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; if(callOverrideFun(fun, 9, args).toBool()) return; } QHelpSearchResultWidget::timerEvent(x1); }
};

#endif
