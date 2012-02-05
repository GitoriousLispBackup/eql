// THIS FILE IS GENERATED (see helper/)

#ifndef Q_CLASSES_H
#define Q_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

QT_BEGIN_NAMESPACE

class LHelpContentModel : public QHelpContentModel {
    Q_OBJECT
    friend class Q88;
public:

    static NumList overrideIds;
    uint unique;

    int columnCount(const QModelIndex& x1 = QModelIndex()) const { void* fun = LObjects::overrideFun(unique, 54); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 54, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::columnCount(x1); } return ret; }
    QVariant data(const QModelIndex& x1, int x2) const { void* fun = LObjects::overrideFun(unique, 55); QVariant ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 55, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::data(x1, x2); } return ret; }
    QModelIndex index(int x1, int x2, const QModelIndex& x3 = QModelIndex()) const { void* fun = LObjects::overrideFun(unique, 61); QModelIndex ret; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = qVariantValue<QModelIndex>(callOverrideFun(fun, 61, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::index(x1, x2, x3); } return ret; }
    QModelIndex parent(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 67); QModelIndex ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QModelIndex>(callOverrideFun(fun, 67, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::parent(x1); } return ret; }
    int rowCount(const QModelIndex& x1 = QModelIndex()) const { void* fun = LObjects::overrideFun(unique, 70); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 70, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::rowCount(x1); } return ret; }
    QModelIndex buddy(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 52); QModelIndex ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QModelIndex>(callOverrideFun(fun, 52, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::buddy(x1); } return ret; }
    bool canFetchMore(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 53); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 53, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::canFetchMore(x1); } return ret; }
    bool dropMimeData(const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) { void* fun = LObjects::overrideFun(unique, 56); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3, &x4, &x5 }; ret = callOverrideFun(fun, 56, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::dropMimeData(x1, x2, x3, x4, x5); } return ret; }
    void fetchMore(const QModelIndex& x1) { void* fun = LObjects::overrideFun(unique, 57); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 57, args); } if(!fun || LObjects::call_default) { QHelpContentModel::fetchMore(x1); }}
    Qt::ItemFlags flags(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 58); Qt::ItemFlags ret; if(fun) { const void* args[] = { &x1 }; ret = (Qt::ItemFlags)callOverrideFun(fun, 58, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::flags(x1); } return ret; }
    bool hasChildren(const QModelIndex& x1 = QModelIndex()) const { void* fun = LObjects::overrideFun(unique, 59); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 59, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::hasChildren(x1); } return ret; }
    QVariant headerData(int x1, Qt::Orientation x2, int x3 = Qt::DisplayRole) const { void* fun = LObjects::overrideFun(unique, 60); QVariant ret; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 60, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::headerData(x1, x2, x3); } return ret; }
    bool insertColumns(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void* fun = LObjects::overrideFun(unique, 62); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 62, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::insertColumns(x1, x2, x3); } return ret; }
    bool insertRows(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void* fun = LObjects::overrideFun(unique, 63); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 63, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::insertRows(x1, x2, x3); } return ret; }
    QModelIndexList match(const QModelIndex& x1, int x2, const QVariant& x3, int x4 = 1, Qt::MatchFlags x5 = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { void* fun = LObjects::overrideFun(unique, 64); QModelIndexList ret; if(fun) { const void* args[] = { &x1, &x2, &x3, &x4, &x5 }; ret = qVariantValue<QModelIndexList>(callOverrideFun(fun, 64, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::match(x1, x2, x3, x4, x5); } return ret; }
    QMimeData* mimeData(const QModelIndexList& x1) const { void* fun = LObjects::overrideFun(unique, 65); QMimeData* ret = 0; if(fun) { const void* args[] = { &x1 }; ret = (QMimeData*)qVariantValue<void*>(callOverrideFun(fun, 65, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::mimeData(x1); } return ret; }
    QStringList mimeTypes() const { void* fun = LObjects::overrideFun(unique, 66); QStringList ret; if(fun) { ret = qVariantValue<QStringList>(callOverrideFun(fun, 66, 0)); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::mimeTypes(); } return ret; }
    bool removeColumns(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void* fun = LObjects::overrideFun(unique, 68); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 68, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::removeColumns(x1, x2, x3); } return ret; }
    bool removeRows(int x1, int x2, const QModelIndex& x3 = QModelIndex()) { void* fun = LObjects::overrideFun(unique, 69); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 69, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::removeRows(x1, x2, x3); } return ret; }
    bool setData(const QModelIndex& x1, const QVariant& x2, int x3 = Qt::EditRole) { void* fun = LObjects::overrideFun(unique, 71); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 71, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::setData(x1, x2, x3); } return ret; }
    bool setHeaderData(int x1, Qt::Orientation x2, const QVariant& x3, int x4 = Qt::EditRole) { void* fun = LObjects::overrideFun(unique, 72); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3, &x4 }; ret = callOverrideFun(fun, 72, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::setHeaderData(x1, x2, x3, x4); } return ret; }
    void sort(int x1, Qt::SortOrder x2 = Qt::AscendingOrder) { void* fun = LObjects::overrideFun(unique, 73); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 73, args); } if(!fun || LObjects::call_default) { QHelpContentModel::sort(x1, x2); }}
    QSize span(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 74); QSize ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QSize>(callOverrideFun(fun, 74, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::span(x1); } return ret; }
    Qt::DropActions supportedDropActions() const { void* fun = LObjects::overrideFun(unique, 75); Qt::DropActions ret; if(fun) { ret = (Qt::DropActions)callOverrideFun(fun, 75, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpContentModel::supportedDropActions(); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QHelpContentModel::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QHelpContentModel::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QHelpContentModel::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QHelpContentModel::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QHelpContentModel::timerEvent(x1); }}
};

class LHelpContentWidget : public QHelpContentWidget {
    Q_OBJECT
    friend class Q89;
public:

    static NumList overrideIds;
    uint unique;

    void drawBranches(QPainter* x1, const QRect& x2, const QModelIndex& x3) const { void* fun = LObjects::overrideFun(unique, 252); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 252, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::drawBranches(x1, x2, x3); }}
    void drawRow(QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { void* fun = LObjects::overrideFun(unique, 253); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 253, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::drawRow(x1, x2, x3); }}
    void dataChanged(const QModelIndex& x1, const QModelIndex& x2) { void* fun = LObjects::overrideFun(unique, 254); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 254, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::dataChanged(x1, x2); }}
    QModelIndex indexAt(const QPoint& x1) const { void* fun = LObjects::overrideFun(unique, 76); QModelIndex ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QModelIndex>(callOverrideFun(fun, 76, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::indexAt(x1); } return ret; }
    void keyboardSearch(const QString& x1) { void* fun = LObjects::overrideFun(unique, 77); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 77, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::keyboardSearch(x1); }}
    void reset() { void* fun = LObjects::overrideFun(unique, 120); if(fun) { callOverrideFun(fun, 120, 0); } if(!fun || LObjects::call_default) { QHelpContentWidget::reset(); }}
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void* fun = LObjects::overrideFun(unique, 78); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 78, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::scrollTo(x1, x2); }}
    void selectAll() { void* fun = LObjects::overrideFun(unique, 183); if(fun) { callOverrideFun(fun, 183, 0); } if(!fun || LObjects::call_default) { QHelpContentWidget::selectAll(); }}
    void setModel(QAbstractItemModel* x1) { void* fun = LObjects::overrideFun(unique, 79); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 79, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::setModel(x1); }}
    void setRootIndex(const QModelIndex& x1) { void* fun = LObjects::overrideFun(unique, 184); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 184, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::setRootIndex(x1); }}
    void setSelectionModel(QItemSelectionModel* x1) { void* fun = LObjects::overrideFun(unique, 80); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 80, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::setSelectionModel(x1); }}
    QRect visualRect(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 83); QRect ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QRect>(callOverrideFun(fun, 83, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::visualRect(x1); } return ret; }
    void currentChanged(const QModelIndex& x1, const QModelIndex& x2) { void* fun = LObjects::overrideFun(unique, 185); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 185, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::currentChanged(x1, x2); }}
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::dragMoveEvent(x1); }}
    int horizontalOffset() const { void* fun = LObjects::overrideFun(unique, 85); int ret = 0; if(fun) { ret = callOverrideFun(fun, 85, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::horizontalOffset(); } return ret; }
    bool isIndexHidden(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 86); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 86, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::isIndexHidden(x1); } return ret; }
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::keyPressEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::mouseReleaseEvent(x1); }}
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void* fun = LObjects::overrideFun(unique, 87); QModelIndex ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QModelIndex>(callOverrideFun(fun, 87, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::moveCursor(x1, x2); } return ret; }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::paintEvent(x1); }}
    void rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) { void* fun = LObjects::overrideFun(unique, 255); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 255, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::rowsAboutToBeRemoved(x1, x2, x3); }}
    void rowsInserted(const QModelIndex& x1, int x2, int x3) { void* fun = LObjects::overrideFun(unique, 186); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 186, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::rowsInserted(x1, x2, x3); }}
    void scrollContentsBy(int x1, int x2) { void* fun = LObjects::overrideFun(unique, 96); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 96, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::scrollContentsBy(x1, x2); }}
    QModelIndexList selectedIndexes() const { void* fun = LObjects::overrideFun(unique, 88); QModelIndexList ret; if(fun) { ret = qVariantValue<QModelIndexList>(callOverrideFun(fun, 88, 0)); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::selectedIndexes(); } return ret; }
    void selectionChanged(const QItemSelection& x1, const QItemSelection& x2) { void* fun = LObjects::overrideFun(unique, 256); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 256, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::selectionChanged(x1, x2); }}
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void* fun = LObjects::overrideFun(unique, 90); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 90, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::setSelection(x1, x2); }}
    int sizeHintForColumn(int x1) const { void* fun = LObjects::overrideFun(unique, 81); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 81, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::sizeHintForColumn(x1); } return ret; }
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::timerEvent(x1); }}
    void updateGeometries() { void* fun = LObjects::overrideFun(unique, 257); if(fun) { callOverrideFun(fun, 257, 0); } if(!fun || LObjects::call_default) { QHelpContentWidget::updateGeometries(); }}
    int verticalOffset() const { void* fun = LObjects::overrideFun(unique, 92); int ret = 0; if(fun) { ret = callOverrideFun(fun, 92, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::verticalOffset(); } return ret; }
    bool viewportEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 95); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 95, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::viewportEvent(x1); } return ret; }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void* fun = LObjects::overrideFun(unique, 94); QRegion ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QRegion>(callOverrideFun(fun, 94, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::visualRegionForSelection(x1); } return ret; }
    int sizeHintForRow(int x1) const { void* fun = LObjects::overrideFun(unique, 82); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 82, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::sizeHintForRow(x1); } return ret; }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void* fun = LObjects::overrideFun(unique, 84); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 84, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::edit(x1, x2, x3); } return ret; }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void* fun = LObjects::overrideFun(unique, 89); QItemSelectionModel::SelectionFlags ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = (QItemSelectionModel::SelectionFlags)callOverrideFun(fun, 89, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::selectionCommand(x1, x2); } return ret; }
    void startDrag(Qt::DropActions x1) { void* fun = LObjects::overrideFun(unique, 91); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 91, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::startDrag(x1); }}
    QStyleOptionViewItem viewOptions() const { void* fun = LObjects::overrideFun(unique, 93); QStyleOptionViewItem ret; if(fun) { ret = qVariantValue<QStyleOptionViewItem>(callOverrideFun(fun, 93, 0)); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::viewOptions(); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::inputMethodQuery(x1); } return ret; }
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::dragLeaveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::dropEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::focusOutEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::inputMethodEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::resizeEvent(x1); }}
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::minimumSizeHint(); } return ret; }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::sizeHint(); } return ret; }
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::contextMenuEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::wheelEvent(x1); }}
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::changeEvent(x1); }}
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::heightForWidth(x1); } return ret; }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 26, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::actionEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::closeEvent(x1); }}
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::enterEvent(x1); }}
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::hideEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::leaveEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::moveEvent(x1); }}
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::tabletEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpContentWidget::metric(x1); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QHelpContentWidget::disconnectNotify(x1); }}
};

class LHelpEngineCore : public QHelpEngineCore {
    Q_OBJECT
    friend class Q90;
public:

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QHelpEngineCore::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QHelpEngineCore::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QHelpEngineCore::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QHelpEngineCore::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QHelpEngineCore::timerEvent(x1); }}
};

class LHelpIndexWidget : public QHelpIndexWidget {
    Q_OBJECT
    friend class Q92;
public:

    static NumList overrideIds;
    uint unique;

    QModelIndex indexAt(const QPoint& x1) const { void* fun = LObjects::overrideFun(unique, 76); QModelIndex ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QModelIndex>(callOverrideFun(fun, 76, args)); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::indexAt(x1); } return ret; }
    void scrollTo(const QModelIndex& x1, ScrollHint x2 = EnsureVisible) { void* fun = LObjects::overrideFun(unique, 78); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 78, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::scrollTo(x1, x2); }}
    QRect visualRect(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 83); QRect ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QRect>(callOverrideFun(fun, 83, args)); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::visualRect(x1); } return ret; }
    void currentChanged(const QModelIndex& x1, const QModelIndex& x2) { void* fun = LObjects::overrideFun(unique, 185); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 185, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::currentChanged(x1, x2); }}
    void dataChanged(const QModelIndex& x1, const QModelIndex& x2) { void* fun = LObjects::overrideFun(unique, 254); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 254, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::dataChanged(x1, x2); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::dropEvent(x1); }}
    int horizontalOffset() const { void* fun = LObjects::overrideFun(unique, 85); int ret = 0; if(fun) { ret = callOverrideFun(fun, 85, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::horizontalOffset(); } return ret; }
    bool isIndexHidden(const QModelIndex& x1) const { void* fun = LObjects::overrideFun(unique, 86); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 86, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::isIndexHidden(x1); } return ret; }
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::mouseMoveEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::mouseReleaseEvent(x1); }}
    QModelIndex moveCursor(CursorAction x1, Qt::KeyboardModifiers x2) { void* fun = LObjects::overrideFun(unique, 87); QModelIndex ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = qVariantValue<QModelIndex>(callOverrideFun(fun, 87, args)); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::moveCursor(x1, x2); } return ret; }
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::paintEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::resizeEvent(x1); }}
    void rowsAboutToBeRemoved(const QModelIndex& x1, int x2, int x3) { void* fun = LObjects::overrideFun(unique, 255); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 255, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::rowsAboutToBeRemoved(x1, x2, x3); }}
    void rowsInserted(const QModelIndex& x1, int x2, int x3) { void* fun = LObjects::overrideFun(unique, 186); if(fun) { const void* args[] = { &x1, &x2, &x3 }; callOverrideFun(fun, 186, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::rowsInserted(x1, x2, x3); }}
    QModelIndexList selectedIndexes() const { void* fun = LObjects::overrideFun(unique, 88); QModelIndexList ret; if(fun) { ret = qVariantValue<QModelIndexList>(callOverrideFun(fun, 88, 0)); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::selectedIndexes(); } return ret; }
    void selectionChanged(const QItemSelection& x1, const QItemSelection& x2) { void* fun = LObjects::overrideFun(unique, 256); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 256, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::selectionChanged(x1, x2); }}
    void setSelection(const QRect& x1, QItemSelectionModel::SelectionFlags x2) { void* fun = LObjects::overrideFun(unique, 90); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 90, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::setSelection(x1, x2); }}
    void startDrag(Qt::DropActions x1) { void* fun = LObjects::overrideFun(unique, 91); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 91, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::startDrag(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::timerEvent(x1); }}
    void updateGeometries() { void* fun = LObjects::overrideFun(unique, 257); if(fun) { callOverrideFun(fun, 257, 0); } if(!fun || LObjects::call_default) { QHelpIndexWidget::updateGeometries(); }}
    int verticalOffset() const { void* fun = LObjects::overrideFun(unique, 92); int ret = 0; if(fun) { ret = callOverrideFun(fun, 92, 0).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::verticalOffset(); } return ret; }
    QStyleOptionViewItem viewOptions() const { void* fun = LObjects::overrideFun(unique, 93); QStyleOptionViewItem ret; if(fun) { ret = qVariantValue<QStyleOptionViewItem>(callOverrideFun(fun, 93, 0)); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::viewOptions(); } return ret; }
    QRegion visualRegionForSelection(const QItemSelection& x1) const { void* fun = LObjects::overrideFun(unique, 94); QRegion ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QRegion>(callOverrideFun(fun, 94, args)); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::visualRegionForSelection(x1); } return ret; }
    void keyboardSearch(const QString& x1) { void* fun = LObjects::overrideFun(unique, 77); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 77, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::keyboardSearch(x1); }}
    void setModel(QAbstractItemModel* x1) { void* fun = LObjects::overrideFun(unique, 79); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 79, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::setModel(x1); }}
    void setSelectionModel(QItemSelectionModel* x1) { void* fun = LObjects::overrideFun(unique, 80); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 80, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::setSelectionModel(x1); }}
    int sizeHintForColumn(int x1) const { void* fun = LObjects::overrideFun(unique, 81); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 81, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::sizeHintForColumn(x1); } return ret; }
    int sizeHintForRow(int x1) const { void* fun = LObjects::overrideFun(unique, 82); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 82, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::sizeHintForRow(x1); } return ret; }
    bool edit(const QModelIndex& x1, EditTrigger x2, QEvent* x3) { void* fun = LObjects::overrideFun(unique, 84); bool ret = false; if(fun) { const void* args[] = { &x1, &x2, &x3 }; ret = callOverrideFun(fun, 84, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::edit(x1, x2, x3); } return ret; }
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& x1, const QEvent* x2 = 0) const { void* fun = LObjects::overrideFun(unique, 89); QItemSelectionModel::SelectionFlags ret; if(fun) { const void* args[] = { &x1, &x2 }; ret = (QItemSelectionModel::SelectionFlags)callOverrideFun(fun, 89, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::selectionCommand(x1, x2); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::inputMethodQuery(x1); } return ret; }
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::dragEnterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::focusOutEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::keyPressEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::mouseDoubleClickEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::mousePressEvent(x1); }}
    bool viewportEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 95); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 95, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::viewportEvent(x1); } return ret; }
    void scrollContentsBy(int x1, int x2) { void* fun = LObjects::overrideFun(unique, 96); if(fun) { const void* args[] = { &x1, &x2 }; callOverrideFun(fun, 96, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::scrollContentsBy(x1, x2); }}
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::minimumSizeHint(); } return ret; }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::sizeHint(); } return ret; }
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::contextMenuEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::wheelEvent(x1); }}
    void changeEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 13); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 13, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::changeEvent(x1); }}
    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::heightForWidth(x1); } return ret; }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 26, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::actionEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::closeEvent(x1); }}
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::enterEvent(x1); }}
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::hideEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::leaveEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::moveEvent(x1); }}
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::tabletEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpIndexWidget::metric(x1); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QHelpIndexWidget::disconnectNotify(x1); }}
};

class LHelpSearchEngine : public QHelpSearchEngine {
    Q_OBJECT
    friend class Q93;
public:

    static NumList overrideIds;
    uint unique;

    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QHelpSearchEngine::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QHelpSearchEngine::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QHelpSearchEngine::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QHelpSearchEngine::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QHelpSearchEngine::timerEvent(x1); }}
};

class LHelpSearchQueryWidget : public QHelpSearchQueryWidget {
    Q_OBJECT
    friend class Q94;
public:
    LHelpSearchQueryWidget(uint u, QWidget* x1 = 0) : QHelpSearchQueryWidget(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpSearchQueryWidget::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QHelpSearchQueryWidget::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } if(!fun || LObjects::call_default) { ret = QHelpSearchQueryWidget::minimumSizeHint(); } return ret; }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } if(!fun || LObjects::call_default) { ret = QHelpSearchQueryWidget::sizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 26, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::actionEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::dropEvent(x1); }}
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::enterEvent(x1); }}
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpSearchQueryWidget::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::focusOutEvent(x1); }}
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::hideEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::moveEvent(x1); }}
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::paintEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::resizeEvent(x1); }}
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::wheelEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpSearchQueryWidget::metric(x1); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QHelpSearchQueryWidget::timerEvent(x1); }}
};

class LHelpSearchResultWidget : public QHelpSearchResultWidget {
    Q_OBJECT
    friend class Q95;
public:

    static NumList overrideIds;
    uint unique;

    int heightForWidth(int x1) const { void* fun = LObjects::overrideFun(unique, 22); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 22, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpSearchResultWidget::heightForWidth(x1); } return ret; }
    QVariant inputMethodQuery(Qt::InputMethodQuery x1) const { void* fun = LObjects::overrideFun(unique, 23); QVariant ret; if(fun) { const void* args[] = { &x1 }; ret = qVariantValue<QVariant>(callOverrideFun(fun, 23, args)); } if(!fun || LObjects::call_default) { ret = QHelpSearchResultWidget::inputMethodQuery(x1); } return ret; }
    QSize minimumSizeHint() const { void* fun = LObjects::overrideFun(unique, 24); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 24, 0)); } if(!fun || LObjects::call_default) { ret = QHelpSearchResultWidget::minimumSizeHint(); } return ret; }
    QSize sizeHint() const { void* fun = LObjects::overrideFun(unique, 25); QSize ret; if(fun) { ret = qVariantValue<QSize>(callOverrideFun(fun, 25, 0)); } if(!fun || LObjects::call_default) { ret = QHelpSearchResultWidget::sizeHint(); } return ret; }
    void actionEvent(QActionEvent* x1) { void* fun = LObjects::overrideFun(unique, 26); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 26, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::actionEvent(x1); }}
    void closeEvent(QCloseEvent* x1) { void* fun = LObjects::overrideFun(unique, 27); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 27, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::closeEvent(x1); }}
    void contextMenuEvent(QContextMenuEvent* x1) { void* fun = LObjects::overrideFun(unique, 28); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 28, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::contextMenuEvent(x1); }}
    void dragEnterEvent(QDragEnterEvent* x1) { void* fun = LObjects::overrideFun(unique, 29); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 29, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::dragEnterEvent(x1); }}
    void dragLeaveEvent(QDragLeaveEvent* x1) { void* fun = LObjects::overrideFun(unique, 30); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 30, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::dragLeaveEvent(x1); }}
    void dragMoveEvent(QDragMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 31); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 31, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::dragMoveEvent(x1); }}
    void dropEvent(QDropEvent* x1) { void* fun = LObjects::overrideFun(unique, 32); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 32, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::dropEvent(x1); }}
    void enterEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 33); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 33, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::enterEvent(x1); }}
    void focusInEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 14); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 14, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::focusInEvent(x1); }}
    bool focusNextPrevChild(bool x1) { void* fun = LObjects::overrideFun(unique, 34); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 34, args).toBool(); } if(!fun || LObjects::call_default) { ret = QHelpSearchResultWidget::focusNextPrevChild(x1); } return ret; }
    void focusOutEvent(QFocusEvent* x1) { void* fun = LObjects::overrideFun(unique, 15); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 15, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::focusOutEvent(x1); }}
    void hideEvent(QHideEvent* x1) { void* fun = LObjects::overrideFun(unique, 35); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 35, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::hideEvent(x1); }}
    void inputMethodEvent(QInputMethodEvent* x1) { void* fun = LObjects::overrideFun(unique, 36); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 36, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::inputMethodEvent(x1); }}
    void keyPressEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 16); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 16, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::keyPressEvent(x1); }}
    void keyReleaseEvent(QKeyEvent* x1) { void* fun = LObjects::overrideFun(unique, 17); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 17, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::keyReleaseEvent(x1); }}
    void leaveEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 37); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 37, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::leaveEvent(x1); }}
    void mouseDoubleClickEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 38); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 38, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::mouseDoubleClickEvent(x1); }}
    void mouseMoveEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 18); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 18, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::mouseMoveEvent(x1); }}
    void mousePressEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 19); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 19, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::mousePressEvent(x1); }}
    void mouseReleaseEvent(QMouseEvent* x1) { void* fun = LObjects::overrideFun(unique, 20); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 20, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::mouseReleaseEvent(x1); }}
    void moveEvent(QMoveEvent* x1) { void* fun = LObjects::overrideFun(unique, 39); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 39, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::moveEvent(x1); }}
    void paintEvent(QPaintEvent* x1) { void* fun = LObjects::overrideFun(unique, 21); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 21, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::paintEvent(x1); }}
    void resizeEvent(QResizeEvent* x1) { void* fun = LObjects::overrideFun(unique, 40); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 40, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::resizeEvent(x1); }}
    void showEvent(QShowEvent* x1) { void* fun = LObjects::overrideFun(unique, 41); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 41, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::showEvent(x1); }}
    void tabletEvent(QTabletEvent* x1) { void* fun = LObjects::overrideFun(unique, 42); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 42, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::tabletEvent(x1); }}
    void wheelEvent(QWheelEvent* x1) { void* fun = LObjects::overrideFun(unique, 43); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 43, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::wheelEvent(x1); }}
    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QHelpSearchResultWidget::metric(x1); } return ret; }
    void childEvent(QChildEvent* x1) { void* fun = LObjects::overrideFun(unique, 5); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 5, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::childEvent(x1); }}
    void connectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 6); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 6, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::connectNotify(x1); }}
    void customEvent(QEvent* x1) { void* fun = LObjects::overrideFun(unique, 7); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 7, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::customEvent(x1); }}
    void disconnectNotify(const char* x1) { void* fun = LObjects::overrideFun(unique, 8); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 8, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::disconnectNotify(x1); }}
    void timerEvent(QTimerEvent* x1) { void* fun = LObjects::overrideFun(unique, 9); if(fun) { const void* args[] = { &x1 }; callOverrideFun(fun, 9, args); } if(!fun || LObjects::call_default) { QHelpSearchResultWidget::timerEvent(x1); }}
};

QT_END_NAMESPACE

#endif
