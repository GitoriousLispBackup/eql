// THIS FILE IS GENERATED (see helper/)

#ifndef Q_METHODS_H
#define Q_METHODS_H

#include "_q_classes.h"
#include <QtGui>

class Q65 : public QObject { // QObject
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LObject(u, x1); }
    Q_INVOKABLE bool MblockSignals(QObject* o, bool x1) { return o->blockSignals(x1); }
    Q_INVOKABLE QObjectList Mchildren(QObject* o) const { return o->children(); }
    Q_INVOKABLE bool Mconnect(QObject* o, const QObject* x1, const char* x2, const char* x3, Qt::ConnectionType x4 = Qt::AutoConnection) const { return o->connect(x1, x2, x3, x4); }
    Q_INVOKABLE bool Mdisconnect(QObject* o, const char* x1 = 0, const QObject* x2 = 0, const char* x3 = 0) { return o->disconnect(x1, x2, x3); }
    Q_INVOKABLE bool Mdisconnect(QObject* o, const QObject* x1, const char* x2 = 0) { return o->disconnect(x1, x2); }
    Q_INVOKABLE void MdumpObjectInfo(QObject* o) { o->dumpObjectInfo(); }
    Q_INVOKABLE void MdumpObjectTree(QObject* o) { o->dumpObjectTree(); }
    Q_INVOKABLE QList<QByteArray> MdynamicPropertyNames(QObject* o) const { return o->dynamicPropertyNames(); }
    Q_INVOKABLE bool Mevent(QObject* o, QEvent* x1) { return o->event(x1); }
    Q_INVOKABLE bool MeventFilter(QObject* o, QObject* x1, QEvent* x2) { return o->eventFilter(x1, x2); }
    Q_INVOKABLE bool Minherits(QObject* o, const char* x1) const { return o->inherits(x1); }
    Q_INVOKABLE void MinstallEventFilter(QObject* o, QObject* x1) { o->installEventFilter(x1); }
    Q_INVOKABLE bool MisWidgetType(QObject* o) const { return o->isWidgetType(); }
    Q_INVOKABLE void MkillTimer(QObject* o, int x1) { o->killTimer(x1); }
    Q_INVOKABLE const QMetaObject* MmetaObject(QObject* o) const { return o->metaObject(); }
    Q_INVOKABLE void MmoveToThread(QObject* o, QThread* x1) { o->moveToThread(x1); }
    Q_INVOKABLE QString MobjectName(QObject* o) const { return o->objectName(); }
    Q_INVOKABLE QObject* Mparent(QObject* o) const { return o->parent(); }
    Q_INVOKABLE QVariant Mproperty(QObject* o, const char* x1) const { return o->property(x1); }
    Q_INVOKABLE void MremoveEventFilter(QObject* o, QObject* x1) { o->removeEventFilter(x1); }
    Q_INVOKABLE void MsetObjectName(QObject* o, const QString& x1) { o->setObjectName(x1); }
    Q_INVOKABLE void MsetParent(QObject* o, QObject* x1) { o->setParent(x1); }
    Q_INVOKABLE bool MsetProperty(QObject* o, const char* x1, const QVariant& x2) { return o->setProperty(x1, x2); }
    Q_INVOKABLE bool MsignalsBlocked(QObject* o) const { return o->signalsBlocked(); }
    Q_INVOKABLE int MstartTimer(QObject* o, int x1) { return o->startTimer(x1); }
    Q_INVOKABLE QThread* Mthread(QObject* o) const { return o->thread(); }
    Q_INVOKABLE bool Sconnect(const QObject* x1, const char* x2, const QObject* x3, const char* x4, Qt::ConnectionType x5 = Qt::AutoConnection) { return QObject::connect(x1, x2, x3, x4, x5); }
    Q_INVOKABLE bool Sdisconnect(const QObject* x1, const char* x2, const QObject* x3, const char* x4) { return QObject::disconnect(x1, x2, x3, x4); }
    Q_INVOKABLE const QMetaObject SstaticMetaObject() { return QObject::staticMetaObject; }
    Q_INVOKABLE QString Str(const char* x1, const char* x2 = 0, int x3 = -1) { return QObject::tr(x1, x2, x3); }
    Q_INVOKABLE QString StrUtf8(const char* x1, const char* x2 = 0, int x3 = -1) { return QObject::trUtf8(x1, x2, x3); }
};

class Q2 : public Q65 { // QAbstractItemDelegate
    Q_OBJECT
public:
    Q_INVOKABLE QWidget* McreateEditor(QAbstractItemDelegate* o, QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { return o->createEditor(x1, x2, x3); }
    Q_INVOKABLE bool MeditorEvent(QAbstractItemDelegate* o, QEvent* x1, QAbstractItemModel* x2, const QStyleOptionViewItem& x3, const QModelIndex& x4) { return o->editorEvent(x1, x2, x3, x4); }
    Q_INVOKABLE void Mpaint(QAbstractItemDelegate* o, QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { o->paint(x1, x2, x3); }
    Q_INVOKABLE void MsetEditorData(QAbstractItemDelegate* o, QWidget* x1, const QModelIndex& x2) const { o->setEditorData(x1, x2); }
    Q_INVOKABLE void MsetModelData(QAbstractItemDelegate* o, QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const { o->setModelData(x1, x2, x3); }
    Q_INVOKABLE QSize MsizeHint(QAbstractItemDelegate* o, const QStyleOptionViewItem& x1, const QModelIndex& x2) const { return o->sizeHint(x1, x2); }
    Q_INVOKABLE void MupdateEditorGeometry(QAbstractItemDelegate* o, QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { o->updateEditorGeometry(x1, x2, x3); }
};

class Q3 : public Q65 { // QAbstractItemModel
    Q_OBJECT
public:
    Q_INVOKABLE QModelIndex Mbuddy(QAbstractItemModel* o, const QModelIndex& x1) const { return o->buddy(x1); }
    Q_INVOKABLE bool McanFetchMore(QAbstractItemModel* o, const QModelIndex& x1) const { return o->canFetchMore(x1); }
    Q_INVOKABLE int McolumnCount(QAbstractItemModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->columnCount(x1); }
    Q_INVOKABLE QVariant Mdata(QAbstractItemModel* o, const QModelIndex& x1, int x2 = Qt::DisplayRole) const { return o->data(x1, x2); }
    Q_INVOKABLE bool MdropMimeData(QAbstractItemModel* o, const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) { return o->dropMimeData(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MfetchMore(QAbstractItemModel* o, const QModelIndex& x1) { o->fetchMore(x1); }
    Q_INVOKABLE int Mflags(QAbstractItemModel* o, const QModelIndex& x1) const { return o->flags(x1); }
    Q_INVOKABLE bool MhasChildren(QAbstractItemModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->hasChildren(x1); }
    Q_INVOKABLE bool MhasIndex(QAbstractItemModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) const { return o->hasIndex(x1, x2, x3); }
    Q_INVOKABLE QVariant MheaderData(QAbstractItemModel* o, int x1, Qt::Orientation x2, int x3 = Qt::DisplayRole) const { return o->headerData(x1, x2, x3); }
    Q_INVOKABLE QModelIndex Mindex(QAbstractItemModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) const { return o->index(x1, x2, x3); }
    Q_INVOKABLE bool MinsertColumn(QAbstractItemModel* o, int x1, const QModelIndex& x2 = QModelIndex()) { return o->insertColumn(x1, x2); }
    Q_INVOKABLE bool MinsertColumns(QAbstractItemModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->insertColumns(x1, x2, x3); }
    Q_INVOKABLE bool MinsertRow(QAbstractItemModel* o, int x1, const QModelIndex& x2 = QModelIndex()) { return o->insertRow(x1, x2); }
    Q_INVOKABLE bool MinsertRows(QAbstractItemModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->insertRows(x1, x2, x3); }
    Q_INVOKABLE QModelIndexList Mmatch(QAbstractItemModel* o, const QModelIndex& x1, int x2, const QVariant& x3, int x4 = 1, Qt::MatchFlags x5 = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return o->match(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QMimeData* MmimeData(QAbstractItemModel* o, const QModelIndexList& x1) const { return o->mimeData(x1); }
    Q_INVOKABLE QStringList MmimeTypes(QAbstractItemModel* o) const { return o->mimeTypes(); }
    Q_INVOKABLE QModelIndex Mparent(QAbstractItemModel* o, const QModelIndex& x1) const { return o->parent(x1); }
    Q_INVOKABLE bool MremoveColumn(QAbstractItemModel* o, int x1, const QModelIndex& x2 = QModelIndex()) { return o->removeColumn(x1, x2); }
    Q_INVOKABLE bool MremoveColumns(QAbstractItemModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->removeColumns(x1, x2, x3); }
    Q_INVOKABLE bool MremoveRow(QAbstractItemModel* o, int x1, const QModelIndex& x2 = QModelIndex()) { return o->removeRow(x1, x2); }
    Q_INVOKABLE bool MremoveRows(QAbstractItemModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->removeRows(x1, x2, x3); }
    Q_INVOKABLE int MrowCount(QAbstractItemModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->rowCount(x1); }
    Q_INVOKABLE bool MsetData(QAbstractItemModel* o, const QModelIndex& x1, const QVariant& x2, int x3 = Qt::EditRole) { return o->setData(x1, x2, x3); }
    Q_INVOKABLE bool MsetHeaderData(QAbstractItemModel* o, int x1, Qt::Orientation x2, const QVariant& x3, int x4 = Qt::EditRole) { return o->setHeaderData(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetSupportedDragActions(QAbstractItemModel* o, Qt::DropActions x1) { o->setSupportedDragActions(x1); }
    Q_INVOKABLE QModelIndex Msibling(QAbstractItemModel* o, int x1, int x2, const QModelIndex& x3) const { return o->sibling(x1, x2, x3); }
    Q_INVOKABLE void Msort(QAbstractItemModel* o, int x1, Qt::SortOrder x2 = Qt::AscendingOrder) { o->sort(x1, x2); }
    Q_INVOKABLE QSize Mspan(QAbstractItemModel* o, const QModelIndex& x1) const { return o->span(x1); }
    Q_INVOKABLE int MsupportedDragActions(QAbstractItemModel* o) const { return o->supportedDragActions(); }
    Q_INVOKABLE int MsupportedDropActions(QAbstractItemModel* o) const { return o->supportedDropActions(); }
};

class Q5 : public Q3 { // QAbstractListModel
    Q_OBJECT
public:
    Q_INVOKABLE bool MdropMimeData(QAbstractListModel* o, const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) { return o->dropMimeData(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QModelIndex Mindex(QAbstractListModel* o, int x1, int x2 = 0, const QModelIndex& x3 = QModelIndex()) const { return o->index(x1, x2, x3); }
};

class Q6 : public Q3 { // QAbstractProxyModel
    Q_OBJECT
public:
    Q_INVOKABLE QModelIndex MmapFromSource(QAbstractProxyModel* o, const QModelIndex& x1) const { return o->mapFromSource(x1); }
    Q_INVOKABLE QItemSelection MmapSelectionFromSource(QAbstractProxyModel* o, const QItemSelection& x1) const { return o->mapSelectionFromSource(x1); }
    Q_INVOKABLE QItemSelection MmapSelectionToSource(QAbstractProxyModel* o, const QItemSelection& x1) const { return o->mapSelectionToSource(x1); }
    Q_INVOKABLE QModelIndex MmapToSource(QAbstractProxyModel* o, const QModelIndex& x1) const { return o->mapToSource(x1); }
    Q_INVOKABLE void MsetSourceModel(QAbstractProxyModel* o, QAbstractItemModel* x1) { o->setSourceModel(x1); }
    Q_INVOKABLE QAbstractItemModel* MsourceModel(QAbstractProxyModel* o) const { return o->sourceModel(); }
    Q_INVOKABLE QVariant Mdata(QAbstractProxyModel* o, const QModelIndex& x1, int x2 = Qt::DisplayRole) const { return o->data(x1, x2); }
    Q_INVOKABLE int Mflags(QAbstractProxyModel* o, const QModelIndex& x1) const { return o->flags(x1); }
    Q_INVOKABLE QVariant MheaderData(QAbstractProxyModel* o, int x1, Qt::Orientation x2, int x3) const { return o->headerData(x1, x2, x3); }
    Q_INVOKABLE void Mrevert(QAbstractProxyModel* o) { o->revert(); }
    Q_INVOKABLE bool MsetData(QAbstractProxyModel* o, const QModelIndex& x1, const QVariant& x2, int x3 = Qt::EditRole) { return o->setData(x1, x2, x3); }
    Q_INVOKABLE bool MsetHeaderData(QAbstractProxyModel* o, int x1, Qt::Orientation x2, const QVariant& x3, int x4 = Qt::EditRole) { return o->setHeaderData(x1, x2, x3, x4); }
    Q_INVOKABLE bool Msubmit(QAbstractProxyModel* o) { return o->submit(); }
};

class Q10 : public Q65 { // QAbstractTextDocumentLayout
    Q_OBJECT
public:
    Q_INVOKABLE QString ManchorAt(QAbstractTextDocumentLayout* o, const QPointF& x1) const { return o->anchorAt(x1); }
    Q_INVOKABLE QRectF MblockBoundingRect(QAbstractTextDocumentLayout* o, const QTextBlock& x1) const { return o->blockBoundingRect(x1); }
    Q_INVOKABLE QTextDocument* Mdocument(QAbstractTextDocumentLayout* o) const { return o->document(); }
    Q_INVOKABLE QSizeF MdocumentSize(QAbstractTextDocumentLayout* o) const { return o->documentSize(); }
    Q_INVOKABLE void Mdraw(QAbstractTextDocumentLayout* o, QPainter* x1, const QAbstractTextDocumentLayout::PaintContext& x2) { o->draw(x1, x2); }
    Q_INVOKABLE QRectF MframeBoundingRect(QAbstractTextDocumentLayout* o, QTextFrame* x1) const { return o->frameBoundingRect(x1); }
    Q_INVOKABLE int MhitTest(QAbstractTextDocumentLayout* o, const QPointF& x1, Qt::HitTestAccuracy x2) const { return o->hitTest(x1, x2); }
    Q_INVOKABLE int MpageCount(QAbstractTextDocumentLayout* o) const { return o->pageCount(); }
    Q_INVOKABLE QPaintDevice* MpaintDevice(QAbstractTextDocumentLayout* o) const { return o->paintDevice(); }
    Q_INVOKABLE void MsetPaintDevice(QAbstractTextDocumentLayout* o, QPaintDevice* x1) { o->setPaintDevice(x1); }
};

class Q11 : public Q65 { // QAction
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1) { return new LAction(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QObject* x2) { return new LAction(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QIcon& x1, const QString& x2, QObject* x3) { return new LAction(u, x1, x2, x3); }
    Q_INVOKABLE QActionGroup* MactionGroup(QAction* o) const { return o->actionGroup(); }
    Q_INVOKABLE void Mactivate(QAction* o, QAction::ActionEvent x1) { o->activate(x1); }
    Q_INVOKABLE QList<QGraphicsWidget*> MassociatedGraphicsWidgets(QAction* o) const { return o->associatedGraphicsWidgets(); }
    Q_INVOKABLE QList<QWidget*> MassociatedWidgets(QAction* o) const { return o->associatedWidgets(); }
    Q_INVOKABLE bool MautoRepeat(QAction* o) const { return o->autoRepeat(); }
    Q_INVOKABLE QVariant Mdata(QAction* o) const { return o->data(); }
    Q_INVOKABLE QFont Mfont(QAction* o) const { return o->font(); }
    Q_INVOKABLE QIcon Micon(QAction* o) const { return o->icon(); }
    Q_INVOKABLE QString MiconText(QAction* o) const { return o->iconText(); }
    Q_INVOKABLE bool MisCheckable(QAction* o) const { return o->isCheckable(); }
    Q_INVOKABLE bool MisChecked(QAction* o) const { return o->isChecked(); }
    Q_INVOKABLE bool MisEnabled(QAction* o) const { return o->isEnabled(); }
    Q_INVOKABLE bool MisIconVisibleInMenu(QAction* o) const { return o->isIconVisibleInMenu(); }
    Q_INVOKABLE bool MisSeparator(QAction* o) const { return o->isSeparator(); }
    Q_INVOKABLE bool MisVisible(QAction* o) const { return o->isVisible(); }
    Q_INVOKABLE QMenu* Mmenu(QAction* o) const { return o->menu(); }
    Q_INVOKABLE int MmenuRole(QAction* o) const { return o->menuRole(); }
    Q_INVOKABLE QWidget* MparentWidget(QAction* o) const { return o->parentWidget(); }
    Q_INVOKABLE int Mpriority(QAction* o) const { return o->priority(); }
    Q_INVOKABLE void MsetActionGroup(QAction* o, QActionGroup* x1) { o->setActionGroup(x1); }
    Q_INVOKABLE void MsetAutoRepeat(QAction* o, bool x1) { o->setAutoRepeat(x1); }
    Q_INVOKABLE void MsetCheckable(QAction* o, bool x1) { o->setCheckable(x1); }
    Q_INVOKABLE void MsetData(QAction* o, const QVariant& x1) { o->setData(x1); }
    Q_INVOKABLE void MsetFont(QAction* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetIcon(QAction* o, const QIcon& x1) { o->setIcon(x1); }
    Q_INVOKABLE void MsetIconText(QAction* o, const QString& x1) { o->setIconText(x1); }
    Q_INVOKABLE void MsetIconVisibleInMenu(QAction* o, bool x1) { o->setIconVisibleInMenu(x1); }
    Q_INVOKABLE void MsetMenu(QAction* o, QMenu* x1) { o->setMenu(x1); }
    Q_INVOKABLE void MsetMenuRole(QAction* o, QAction::MenuRole x1) { o->setMenuRole(x1); }
    Q_INVOKABLE void MsetPriority(QAction* o, QAction::Priority x1) { o->setPriority(x1); }
    Q_INVOKABLE void MsetSeparator(QAction* o, bool x1) { o->setSeparator(x1); }
    Q_INVOKABLE void MsetShortcut(QAction* o, const QKeySequence& x1) { o->setShortcut(x1); }
    Q_INVOKABLE void MsetShortcutContext(QAction* o, Qt::ShortcutContext x1) { o->setShortcutContext(x1); }
    Q_INVOKABLE void MsetShortcuts(QAction* o, const QList<QKeySequence>& x1) { o->setShortcuts(x1); }
    Q_INVOKABLE void MsetShortcuts(QAction* o, QKeySequence::StandardKey x1) { o->setShortcuts(x1); }
    Q_INVOKABLE void MsetSoftKeyRole(QAction* o, QAction::SoftKeyRole x1) { o->setSoftKeyRole(x1); }
    Q_INVOKABLE void MsetStatusTip(QAction* o, const QString& x1) { o->setStatusTip(x1); }
    Q_INVOKABLE void MsetText(QAction* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE void MsetToolTip(QAction* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetWhatsThis(QAction* o, const QString& x1) { o->setWhatsThis(x1); }
    Q_INVOKABLE QKeySequence Mshortcut(QAction* o) const { return o->shortcut(); }
    Q_INVOKABLE int MshortcutContext(QAction* o) const { return o->shortcutContext(); }
    Q_INVOKABLE QList<QKeySequence> Mshortcuts(QAction* o) const { return o->shortcuts(); }
    Q_INVOKABLE bool MshowStatusText(QAction* o, QWidget* x1 = 0) { return o->showStatusText(x1); }
    Q_INVOKABLE int MsoftKeyRole(QAction* o) const { return o->softKeyRole(); }
    Q_INVOKABLE QString MstatusTip(QAction* o) const { return o->statusTip(); }
    Q_INVOKABLE QString Mtext(QAction* o) const { return o->text(); }
    Q_INVOKABLE QString MtoolTip(QAction* o) const { return o->toolTip(); }
    Q_INVOKABLE QString MwhatsThis(QAction* o) const { return o->whatsThis(); }
};

class Q12 : public Q65 { // QActionGroup
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1) { return new LActionGroup(u, x1); }
    Q_INVOKABLE QList<QAction*> Mactions(QActionGroup* o) const { return o->actions(); }
    Q_INVOKABLE QAction* MaddAction(QActionGroup* o, QAction* x1) { return o->addAction(x1); }
    Q_INVOKABLE QAction* MaddAction(QActionGroup* o, const QString& x1) { return o->addAction(x1); }
    Q_INVOKABLE QAction* MaddAction(QActionGroup* o, const QIcon& x1, const QString& x2) { return o->addAction(x1, x2); }
    Q_INVOKABLE QAction* McheckedAction(QActionGroup* o) const { return o->checkedAction(); }
    Q_INVOKABLE bool MisEnabled(QActionGroup* o) const { return o->isEnabled(); }
    Q_INVOKABLE bool MisExclusive(QActionGroup* o) const { return o->isExclusive(); }
    Q_INVOKABLE bool MisVisible(QActionGroup* o) const { return o->isVisible(); }
    Q_INVOKABLE void MremoveAction(QActionGroup* o, QAction* x1) { o->removeAction(x1); }
};

class Q15 : public Q65 { // QButtonGroup
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LButtonGroup(u, x1); }
    Q_INVOKABLE void MaddButton(QButtonGroup* o, QAbstractButton* x1) { o->addButton(x1); }
    Q_INVOKABLE void MaddButton(QButtonGroup* o, QAbstractButton* x1, int x2) { o->addButton(x1, x2); }
    Q_INVOKABLE QAbstractButton* Mbutton(QButtonGroup* o, int x1) const { return o->button(x1); }
    Q_INVOKABLE QList<QAbstractButton*> Mbuttons(QButtonGroup* o) const { return o->buttons(); }
    Q_INVOKABLE QAbstractButton* McheckedButton(QButtonGroup* o) const { return o->checkedButton(); }
    Q_INVOKABLE int McheckedId(QButtonGroup* o) const { return o->checkedId(); }
    Q_INVOKABLE bool Mexclusive(QButtonGroup* o) const { return o->exclusive(); }
    Q_INVOKABLE int Mid(QButtonGroup* o, QAbstractButton* x1) const { return o->id(x1); }
    Q_INVOKABLE void MremoveButton(QButtonGroup* o, QAbstractButton* x1) { o->removeButton(x1); }
    Q_INVOKABLE void MsetExclusive(QButtonGroup* o, bool x1) { o->setExclusive(x1); }
    Q_INVOKABLE void MsetId(QButtonGroup* o, QAbstractButton* x1, int x2) { o->setId(x1, x2); }
};

class Q18 : public Q65 { // QClipboard
    Q_OBJECT
public:
    Q_INVOKABLE void Mclear(QClipboard* o, QClipboard::Mode x1 = QClipboard::Clipboard) { o->clear(x1); }
    Q_INVOKABLE QImage Mimage(QClipboard* o, QClipboard::Mode x1 = QClipboard::Clipboard) const { return o->image(x1); }
    Q_INVOKABLE const QMimeData* MmimeData(QClipboard* o, QClipboard::Mode x1 = QClipboard::Clipboard) const { return o->mimeData(x1); }
    Q_INVOKABLE bool MownsClipboard(QClipboard* o) const { return o->ownsClipboard(); }
    Q_INVOKABLE bool MownsFindBuffer(QClipboard* o) const { return o->ownsFindBuffer(); }
    Q_INVOKABLE bool MownsSelection(QClipboard* o) const { return o->ownsSelection(); }
    Q_INVOKABLE QPixmap Mpixmap(QClipboard* o, QClipboard::Mode x1 = QClipboard::Clipboard) const { return o->pixmap(x1); }
    Q_INVOKABLE void MsetImage(QClipboard* o, const QImage& x1, QClipboard::Mode x2 = QClipboard::Clipboard) { o->setImage(x1, x2); }
    Q_INVOKABLE void MsetMimeData(QClipboard* o, QMimeData* x1, QClipboard::Mode x2 = QClipboard::Clipboard) { o->setMimeData(x1, x2); }
    Q_INVOKABLE void MsetPixmap(QClipboard* o, const QPixmap& x1, QClipboard::Mode x2 = QClipboard::Clipboard) { o->setPixmap(x1, x2); }
    Q_INVOKABLE void MsetText(QClipboard* o, const QString& x1, QClipboard::Mode x2 = QClipboard::Clipboard) { o->setText(x1, x2); }
    Q_INVOKABLE bool MsupportsFindBuffer(QClipboard* o) const { return o->supportsFindBuffer(); }
    Q_INVOKABLE bool MsupportsSelection(QClipboard* o) const { return o->supportsSelection(); }
    Q_INVOKABLE QString Mtext(QClipboard* o, QClipboard::Mode x1 = QClipboard::Clipboard) const { return o->text(x1); }
    Q_INVOKABLE QString Mtext(QClipboard* o, QString& x1, QClipboard::Mode x2 = QClipboard::Clipboard) const { return o->text(x1, x2); }
};

class Q22 : public Q65 { // QCompleter
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LCompleter(u, x1); }
    Q_INVOKABLE void* C(uint u, QAbstractItemModel* x1, QObject* x2 = 0) { return new LCompleter(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QStringList& x1, QObject* x2 = 0) { return new LCompleter(u, x1, x2); }
    Q_INVOKABLE int McaseSensitivity(QCompleter* o) const { return o->caseSensitivity(); }
    Q_INVOKABLE int McompletionColumn(QCompleter* o) const { return o->completionColumn(); }
    Q_INVOKABLE int McompletionCount(QCompleter* o) const { return o->completionCount(); }
    Q_INVOKABLE int McompletionMode(QCompleter* o) const { return o->completionMode(); }
    Q_INVOKABLE QAbstractItemModel* McompletionModel(QCompleter* o) const { return o->completionModel(); }
    Q_INVOKABLE QString McompletionPrefix(QCompleter* o) const { return o->completionPrefix(); }
    Q_INVOKABLE int McompletionRole(QCompleter* o) const { return o->completionRole(); }
    Q_INVOKABLE QString McurrentCompletion(QCompleter* o) const { return o->currentCompletion(); }
    Q_INVOKABLE QModelIndex McurrentIndex(QCompleter* o) const { return o->currentIndex(); }
    Q_INVOKABLE int McurrentRow(QCompleter* o) const { return o->currentRow(); }
    Q_INVOKABLE int MmaxVisibleItems(QCompleter* o) const { return o->maxVisibleItems(); }
    Q_INVOKABLE QAbstractItemModel* Mmodel(QCompleter* o) const { return o->model(); }
    Q_INVOKABLE int MmodelSorting(QCompleter* o) const { return o->modelSorting(); }
    Q_INVOKABLE QString MpathFromIndex(QCompleter* o, const QModelIndex& x1) const { return o->pathFromIndex(x1); }
    Q_INVOKABLE QAbstractItemView* Mpopup(QCompleter* o) const { return o->popup(); }
    Q_INVOKABLE void MsetCaseSensitivity(QCompleter* o, Qt::CaseSensitivity x1) { o->setCaseSensitivity(x1); }
    Q_INVOKABLE void MsetCompletionColumn(QCompleter* o, int x1) { o->setCompletionColumn(x1); }
    Q_INVOKABLE void MsetCompletionMode(QCompleter* o, QCompleter::CompletionMode x1) { o->setCompletionMode(x1); }
    Q_INVOKABLE void MsetCompletionRole(QCompleter* o, int x1) { o->setCompletionRole(x1); }
    Q_INVOKABLE bool MsetCurrentRow(QCompleter* o, int x1) { return o->setCurrentRow(x1); }
    Q_INVOKABLE void MsetMaxVisibleItems(QCompleter* o, int x1) { o->setMaxVisibleItems(x1); }
    Q_INVOKABLE void MsetModel(QCompleter* o, QAbstractItemModel* x1) { o->setModel(x1); }
    Q_INVOKABLE void MsetModelSorting(QCompleter* o, QCompleter::ModelSorting x1) { o->setModelSorting(x1); }
    Q_INVOKABLE void MsetPopup(QCompleter* o, QAbstractItemView* x1) { o->setPopup(x1); }
    Q_INVOKABLE void MsetWidget(QCompleter* o, QWidget* x1) { o->setWidget(x1); }
    Q_INVOKABLE QStringList MsplitPath(QCompleter* o, const QString& x1) const { return o->splitPath(x1); }
    Q_INVOKABLE QWidget* Mwidget(QCompleter* o) const { return o->widget(); }
    Q_INVOKABLE bool MwrapAround(QCompleter* o) const { return o->wrapAround(); }
};

class Q23 : public Q65 { // QCoreApplication
    Q_OBJECT
public:
    Q_INVOKABLE bool Mnotify(QCoreApplication* o, QObject* x1, QEvent* x2) { return o->notify(x1, x2); }
    Q_INVOKABLE QCoreApplication::EventFilter MsetEventFilter(QCoreApplication* o, QCoreApplication::EventFilter x1) { return o->setEventFilter(x1); }
    Q_INVOKABLE void SaddLibraryPath(const QString& x1) { QCoreApplication::addLibraryPath(x1); }
    Q_INVOKABLE QString SapplicationDirPath() { return QCoreApplication::applicationDirPath(); }
    Q_INVOKABLE QString SapplicationFilePath() { return QCoreApplication::applicationFilePath(); }
    Q_INVOKABLE QString SapplicationName() { return QCoreApplication::applicationName(); }
    Q_INVOKABLE QString SapplicationVersion() { return QCoreApplication::applicationVersion(); }
    Q_INVOKABLE QStringList Sarguments() { return QCoreApplication::arguments(); }
    Q_INVOKABLE bool SclosingDown() { return QCoreApplication::closingDown(); }
    Q_INVOKABLE int Sexec() { return QCoreApplication::exec(); }
    Q_INVOKABLE void Sexit(int x1 = 0) { QCoreApplication::exit(x1); }
    Q_INVOKABLE void Sflush() { QCoreApplication::flush(); }
    Q_INVOKABLE bool ShasPendingEvents() { return QCoreApplication::hasPendingEvents(); }
    Q_INVOKABLE void SinstallTranslator(QTranslator* x1) { QCoreApplication::installTranslator(x1); }
    Q_INVOKABLE QCoreApplication* Sinstance() { return QCoreApplication::instance(); }
    Q_INVOKABLE QStringList SlibraryPaths() { return QCoreApplication::libraryPaths(); }
    Q_INVOKABLE QString SorganizationDomain() { return QCoreApplication::organizationDomain(); }
    Q_INVOKABLE QString SorganizationName() { return QCoreApplication::organizationName(); }
    Q_INVOKABLE void SpostEvent(QObject* x1, QEvent* x2) { QCoreApplication::postEvent(x1, x2); }
    Q_INVOKABLE void SpostEvent(QObject* x1, QEvent* x2, int x3) { QCoreApplication::postEvent(x1, x2, x3); }
    Q_INVOKABLE void SprocessEvents(QEventLoop::ProcessEventsFlags x1 = QEventLoop::AllEvents) { QCoreApplication::processEvents(x1); }
    Q_INVOKABLE void SprocessEvents(QEventLoop::ProcessEventsFlags x1, int x2) { QCoreApplication::processEvents(x1, x2); }
    Q_INVOKABLE void SremoveLibraryPath(const QString& x1) { QCoreApplication::removeLibraryPath(x1); }
    Q_INVOKABLE void SremovePostedEvents(QObject* x1) { QCoreApplication::removePostedEvents(x1); }
    Q_INVOKABLE void SremovePostedEvents(QObject* x1, int x2) { QCoreApplication::removePostedEvents(x1, x2); }
    Q_INVOKABLE void SremoveTranslator(QTranslator* x1) { QCoreApplication::removeTranslator(x1); }
    Q_INVOKABLE bool SsendEvent(QObject* x1, QEvent* x2) { return QCoreApplication::sendEvent(x1, x2); }
    Q_INVOKABLE void SsendPostedEvents(QObject* x1, int x2) { QCoreApplication::sendPostedEvents(x1, x2); }
    Q_INVOKABLE void SsendPostedEvents() { QCoreApplication::sendPostedEvents(); }
    Q_INVOKABLE void SsetApplicationName(const QString& x1) { QCoreApplication::setApplicationName(x1); }
    Q_INVOKABLE void SsetApplicationVersion(const QString& x1) { QCoreApplication::setApplicationVersion(x1); }
    Q_INVOKABLE void SsetAttribute(Qt::ApplicationAttribute x1, bool x2 = true) { QCoreApplication::setAttribute(x1, x2); }
    Q_INVOKABLE void SsetLibraryPaths(const QStringList& x1) { QCoreApplication::setLibraryPaths(x1); }
    Q_INVOKABLE void SsetOrganizationDomain(const QString& x1) { QCoreApplication::setOrganizationDomain(x1); }
    Q_INVOKABLE void SsetOrganizationName(const QString& x1) { QCoreApplication::setOrganizationName(x1); }
    Q_INVOKABLE bool SstartingUp() { return QCoreApplication::startingUp(); }
    Q_INVOKABLE bool StestAttribute(Qt::ApplicationAttribute x1) { return QCoreApplication::testAttribute(x1); }
    Q_INVOKABLE QString Stranslate(const char* x1, const char* x2, const char* x3, QCoreApplication::Encoding x4, int x5) { return QCoreApplication::translate(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QString Stranslate(const char* x1, const char* x2, const char* x3 = 0, QCoreApplication::Encoding x4 = QCoreApplication::CodecForTr) { return QCoreApplication::translate(x1, x2, x3, x4); }
};

class Q31 : public Q65 { // QDrag
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1) { return new LDrag(u, x1); }
    Q_INVOKABLE int Mexec(QDrag* o, Qt::DropActions x1 = Qt::MoveAction) { return o->exec(x1); }
    Q_INVOKABLE int Mexec(QDrag* o, Qt::DropActions x1, Qt::DropAction x2) { return o->exec(x1, x2); }
    Q_INVOKABLE QPoint MhotSpot(QDrag* o) const { return o->hotSpot(); }
    Q_INVOKABLE QMimeData* MmimeData(QDrag* o) const { return o->mimeData(); }
    Q_INVOKABLE QPixmap Mpixmap(QDrag* o) const { return o->pixmap(); }
    Q_INVOKABLE void MsetDragCursor(QDrag* o, const QPixmap& x1, Qt::DropAction x2) { o->setDragCursor(x1, x2); }
    Q_INVOKABLE void MsetHotSpot(QDrag* o, const QPoint& x1) { o->setHotSpot(x1); }
    Q_INVOKABLE void MsetMimeData(QDrag* o, QMimeData* x1) { o->setMimeData(x1); }
    Q_INVOKABLE void MsetPixmap(QDrag* o, const QPixmap& x1) { o->setPixmap(x1); }
    Q_INVOKABLE QWidget* Msource(QDrag* o) const { return o->source(); }
    Q_INVOKABLE QWidget* Mtarget(QDrag* o) const { return o->target(); }
};

class Q38 : public Q65 { // QGraphicsEffect
    Q_OBJECT
public:
    Q_INVOKABLE QRectF MboundingRect(QGraphicsEffect* o) const { return o->boundingRect(); }
    Q_INVOKABLE QRectF MboundingRectFor(QGraphicsEffect* o, const QRectF& x1) const { return o->boundingRectFor(x1); }
    Q_INVOKABLE bool MisEnabled(QGraphicsEffect* o) const { return o->isEnabled(); }
};

class Q39 : public Q65 { // QGraphicsObject
    Q_OBJECT
public:
    Q_INVOKABLE void MgrabGesture(QGraphicsObject* o, Qt::GestureType x1, Qt::GestureFlags x2 = Qt::GestureFlags()) { o->grabGesture(x1, x2); }
    Q_INVOKABLE void MungrabGesture(QGraphicsObject* o, Qt::GestureType x1) { o->ungrabGesture(x1); }
};

class Q41 : public Q65 { // QGraphicsScene
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LGraphicsScene(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRectF& x1, QObject* x2 = 0) { return new LGraphicsScene(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QObject* x5 = 0) { return new LGraphicsScene(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE QGraphicsItem* MactivePanel(QGraphicsScene* o) const { return o->activePanel(); }
    Q_INVOKABLE QGraphicsWidget* MactiveWindow(QGraphicsScene* o) const { return o->activeWindow(); }
    Q_INVOKABLE QGraphicsEllipseItem* MaddEllipse(QGraphicsScene* o, const QRectF& x1, const QPen& x2 = QPen(), const QBrush& x3 = QBrush()) { return o->addEllipse(x1, x2, x3); }
    Q_INVOKABLE QGraphicsEllipseItem* MaddEllipse(QGraphicsScene* o, qreal x1, qreal x2, qreal x3, qreal x4, const QPen& x5 = QPen(), const QBrush& x6 = QBrush()) { return o->addEllipse(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MaddItem(QGraphicsScene* o, QGraphicsItem* x1) { o->addItem(x1); }
    Q_INVOKABLE QGraphicsLineItem* MaddLine(QGraphicsScene* o, const QLineF& x1, const QPen& x2 = QPen()) { return o->addLine(x1, x2); }
    Q_INVOKABLE QGraphicsLineItem* MaddLine(QGraphicsScene* o, qreal x1, qreal x2, qreal x3, qreal x4, const QPen& x5 = QPen()) { return o->addLine(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QGraphicsPathItem* MaddPath(QGraphicsScene* o, const QPainterPath& x1, const QPen& x2 = QPen(), const QBrush& x3 = QBrush()) { return o->addPath(x1, x2, x3); }
    Q_INVOKABLE QGraphicsPixmapItem* MaddPixmap(QGraphicsScene* o, const QPixmap& x1) { return o->addPixmap(x1); }
    Q_INVOKABLE QGraphicsPolygonItem* MaddPolygon(QGraphicsScene* o, const QPolygonF& x1, const QPen& x2 = QPen(), const QBrush& x3 = QBrush()) { return o->addPolygon(x1, x2, x3); }
    Q_INVOKABLE QGraphicsRectItem* MaddRect(QGraphicsScene* o, const QRectF& x1, const QPen& x2 = QPen(), const QBrush& x3 = QBrush()) { return o->addRect(x1, x2, x3); }
    Q_INVOKABLE QGraphicsRectItem* MaddRect(QGraphicsScene* o, qreal x1, qreal x2, qreal x3, qreal x4, const QPen& x5 = QPen(), const QBrush& x6 = QBrush()) { return o->addRect(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QGraphicsSimpleTextItem* MaddSimpleText(QGraphicsScene* o, const QString& x1, const QFont& x2 = QFont()) { return o->addSimpleText(x1, x2); }
    Q_INVOKABLE QGraphicsTextItem* MaddText(QGraphicsScene* o, const QString& x1, const QFont& x2 = QFont()) { return o->addText(x1, x2); }
    Q_INVOKABLE QGraphicsProxyWidget* MaddWidget(QGraphicsScene* o, QWidget* x1, Qt::WindowFlags x2 = 0) { return o->addWidget(x1, x2); }
    Q_INVOKABLE QBrush MbackgroundBrush(QGraphicsScene* o) const { return o->backgroundBrush(); }
    Q_INVOKABLE int MbspTreeDepth(QGraphicsScene* o) const { return o->bspTreeDepth(); }
    Q_INVOKABLE void MclearFocus(QGraphicsScene* o) { o->clearFocus(); }
    Q_INVOKABLE QList<QGraphicsItem*> McollidingItems(QGraphicsScene* o, const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { return o->collidingItems(x1, x2); }
    Q_INVOKABLE QGraphicsItemGroup* McreateItemGroup(QGraphicsScene* o, const QList<QGraphicsItem*>& x1) { return o->createItemGroup(x1); }
    Q_INVOKABLE void MdestroyItemGroup(QGraphicsScene* o, QGraphicsItemGroup* x1) { o->destroyItemGroup(x1); }
    Q_INVOKABLE QGraphicsItem* MfocusItem(QGraphicsScene* o) const { return o->focusItem(); }
    Q_INVOKABLE QFont Mfont(QGraphicsScene* o) const { return o->font(); }
    Q_INVOKABLE QBrush MforegroundBrush(QGraphicsScene* o) const { return o->foregroundBrush(); }
    Q_INVOKABLE bool MhasFocus(QGraphicsScene* o) const { return o->hasFocus(); }
    Q_INVOKABLE qreal Mheight(QGraphicsScene* o) const { return o->height(); }
    Q_INVOKABLE QVariant MinputMethodQuery(QGraphicsScene* o, Qt::InputMethodQuery x1) const { return o->inputMethodQuery(x1); }
    Q_INVOKABLE void Minvalidate(QGraphicsScene* o, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsScene::SceneLayers x5 = QGraphicsScene::AllLayers) { o->invalidate(x1, x2, x3, x4, x5); }
    Q_INVOKABLE bool MisActive(QGraphicsScene* o) const { return o->isActive(); }
    Q_INVOKABLE bool MisSortCacheEnabled(QGraphicsScene* o) const { return o->isSortCacheEnabled(); }
    Q_INVOKABLE QGraphicsItem* MitemAt(QGraphicsScene* o, const QPointF& x1, const QTransform& x2) const { return o->itemAt(x1, x2); }
    Q_INVOKABLE QGraphicsItem* MitemAt(QGraphicsScene* o, qreal x1, qreal x2, const QTransform& x3) const { return o->itemAt(x1, x2, x3); }
    Q_INVOKABLE int MitemIndexMethod(QGraphicsScene* o) const { return o->itemIndexMethod(); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsScene* o) const { return o->items(); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsScene* o, Qt::SortOrder x1) const { return o->items(x1); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsScene* o, const QPointF& x1, Qt::ItemSelectionMode x2, Qt::SortOrder x3, const QTransform& x4 = QTransform()) const { return o->items(x1, x2, x3, x4); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsScene* o, qreal x1, qreal x2, qreal x3, qreal x4, Qt::ItemSelectionMode x5, Qt::SortOrder x6, const QTransform& x7 = QTransform()) const { return o->items(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsScene* o, const QRectF& x1, Qt::ItemSelectionMode x2, Qt::SortOrder x3, const QTransform& x4 = QTransform()) const { return o->items(x1, x2, x3, x4); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsScene* o, const QPolygonF& x1, Qt::ItemSelectionMode x2, Qt::SortOrder x3, const QTransform& x4 = QTransform()) const { return o->items(x1, x2, x3, x4); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsScene* o, const QPainterPath& x1, Qt::ItemSelectionMode x2, Qt::SortOrder x3, const QTransform& x4 = QTransform()) const { return o->items(x1, x2, x3, x4); }
    Q_INVOKABLE QRectF MitemsBoundingRect(QGraphicsScene* o) const { return o->itemsBoundingRect(); }
    Q_INVOKABLE QGraphicsItem* MmouseGrabberItem(QGraphicsScene* o) const { return o->mouseGrabberItem(); }
    Q_INVOKABLE QPalette Mpalette(QGraphicsScene* o) const { return o->palette(); }
    Q_INVOKABLE void MremoveItem(QGraphicsScene* o, QGraphicsItem* x1) { o->removeItem(x1); }
    Q_INVOKABLE void Mrender(QGraphicsScene* o, QPainter* x1, const QRectF& x2 = QRectF(), const QRectF& x3 = QRectF(), Qt::AspectRatioMode x4 = Qt::KeepAspectRatio) { o->render(x1, x2, x3, x4); }
    Q_INVOKABLE QRectF MsceneRect(QGraphicsScene* o) const { return o->sceneRect(); }
    Q_INVOKABLE QList<QGraphicsItem*> MselectedItems(QGraphicsScene* o) const { return o->selectedItems(); }
    Q_INVOKABLE QPainterPath MselectionArea(QGraphicsScene* o) const { return o->selectionArea(); }
    Q_INVOKABLE bool MsendEvent(QGraphicsScene* o, QGraphicsItem* x1, QEvent* x2) { return o->sendEvent(x1, x2); }
    Q_INVOKABLE void MsetActivePanel(QGraphicsScene* o, QGraphicsItem* x1) { o->setActivePanel(x1); }
    Q_INVOKABLE void MsetActiveWindow(QGraphicsScene* o, QGraphicsWidget* x1) { o->setActiveWindow(x1); }
    Q_INVOKABLE void MsetBackgroundBrush(QGraphicsScene* o, const QBrush& x1) { o->setBackgroundBrush(x1); }
    Q_INVOKABLE void MsetBspTreeDepth(QGraphicsScene* o, int x1) { o->setBspTreeDepth(x1); }
    Q_INVOKABLE void MsetFocus(QGraphicsScene* o, Qt::FocusReason x1 = Qt::OtherFocusReason) { o->setFocus(x1); }
    Q_INVOKABLE void MsetFocusItem(QGraphicsScene* o, QGraphicsItem* x1, Qt::FocusReason x2 = Qt::OtherFocusReason) { o->setFocusItem(x1, x2); }
    Q_INVOKABLE void MsetFont(QGraphicsScene* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetForegroundBrush(QGraphicsScene* o, const QBrush& x1) { o->setForegroundBrush(x1); }
    Q_INVOKABLE void MsetItemIndexMethod(QGraphicsScene* o, QGraphicsScene::ItemIndexMethod x1) { o->setItemIndexMethod(x1); }
    Q_INVOKABLE void MsetPalette(QGraphicsScene* o, const QPalette& x1) { o->setPalette(x1); }
    Q_INVOKABLE void MsetSceneRect(QGraphicsScene* o, const QRectF& x1) { o->setSceneRect(x1); }
    Q_INVOKABLE void MsetSceneRect(QGraphicsScene* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setSceneRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetSelectionArea(QGraphicsScene* o, const QPainterPath& x1, const QTransform& x2) { o->setSelectionArea(x1, x2); }
    Q_INVOKABLE void MsetSelectionArea(QGraphicsScene* o, const QPainterPath& x1, Qt::ItemSelectionMode x2, const QTransform& x3) { o->setSelectionArea(x1, x2, x3); }
    Q_INVOKABLE void MsetSortCacheEnabled(QGraphicsScene* o, bool x1) { o->setSortCacheEnabled(x1); }
    Q_INVOKABLE void MsetStickyFocus(QGraphicsScene* o, bool x1) { o->setStickyFocus(x1); }
    Q_INVOKABLE void MsetStyle(QGraphicsScene* o, QStyle* x1) { o->setStyle(x1); }
    Q_INVOKABLE bool MstickyFocus(QGraphicsScene* o) const { return o->stickyFocus(); }
    Q_INVOKABLE QStyle* Mstyle(QGraphicsScene* o) const { return o->style(); }
    Q_INVOKABLE void Mupdate(QGraphicsScene* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->update(x1, x2, x3, x4); }
    Q_INVOKABLE QList<QGraphicsView*> Mviews(QGraphicsScene* o) const { return o->views(); }
    Q_INVOKABLE qreal Mwidth(QGraphicsScene* o) const { return o->width(); }
};

class Q42 : public Q39 { // QGraphicsTextItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsTextItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QGraphicsItem* x2 = 0) { return new LGraphicsTextItem(u, x1, x2); }
    Q_INVOKABLE void MadjustSize(QGraphicsTextItem* o) { o->adjustSize(); }
    Q_INVOKABLE QColor MdefaultTextColor(QGraphicsTextItem* o) const { return o->defaultTextColor(); }
    Q_INVOKABLE QTextDocument* Mdocument(QGraphicsTextItem* o) const { return o->document(); }
    Q_INVOKABLE QFont Mfont(QGraphicsTextItem* o) const { return o->font(); }
    Q_INVOKABLE bool MopenExternalLinks(QGraphicsTextItem* o) const { return o->openExternalLinks(); }
    Q_INVOKABLE void MsetDefaultTextColor(QGraphicsTextItem* o, const QColor& x1) { o->setDefaultTextColor(x1); }
    Q_INVOKABLE void MsetDocument(QGraphicsTextItem* o, QTextDocument* x1) { o->setDocument(x1); }
    Q_INVOKABLE void MsetFont(QGraphicsTextItem* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetHtml(QGraphicsTextItem* o, const QString& x1) { o->setHtml(x1); }
    Q_INVOKABLE void MsetOpenExternalLinks(QGraphicsTextItem* o, bool x1) { o->setOpenExternalLinks(x1); }
    Q_INVOKABLE void MsetPlainText(QGraphicsTextItem* o, const QString& x1) { o->setPlainText(x1); }
    Q_INVOKABLE void MsetTabChangesFocus(QGraphicsTextItem* o, bool x1) { o->setTabChangesFocus(x1); }
    Q_INVOKABLE void MsetTextCursor(QGraphicsTextItem* o, const QTextCursor& x1) { o->setTextCursor(x1); }
    Q_INVOKABLE void MsetTextInteractionFlags(QGraphicsTextItem* o, Qt::TextInteractionFlags x1) { o->setTextInteractionFlags(x1); }
    Q_INVOKABLE void MsetTextWidth(QGraphicsTextItem* o, qreal x1) { o->setTextWidth(x1); }
    Q_INVOKABLE bool MtabChangesFocus(QGraphicsTextItem* o) const { return o->tabChangesFocus(); }
    Q_INVOKABLE QTextCursor MtextCursor(QGraphicsTextItem* o) const { return o->textCursor(); }
    Q_INVOKABLE int MtextInteractionFlags(QGraphicsTextItem* o) const { return o->textInteractionFlags(); }
    Q_INVOKABLE qreal MtextWidth(QGraphicsTextItem* o) const { return o->textWidth(); }
    Q_INVOKABLE QString MtoHtml(QGraphicsTextItem* o) const { return o->toHtml(); }
    Q_INVOKABLE QString MtoPlainText(QGraphicsTextItem* o) const { return o->toPlainText(); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsTextItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsTextItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsTextItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsTextItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsTextItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsTextItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsTextItem* o) const { return o->type(); }
};

class Q44 : public Q39 { // QGraphicsWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0, Qt::WindowFlags x2 = 0) { return new LGraphicsWidget(u, x1, x2); }
    Q_INVOKABLE QList<QAction*> Mactions(QGraphicsWidget* o) const { return o->actions(); }
    Q_INVOKABLE void MaddAction(QGraphicsWidget* o, QAction* x1) { o->addAction(x1); }
    Q_INVOKABLE void MaddActions(QGraphicsWidget* o, QList<QAction*> x1) { o->addActions(x1); }
    Q_INVOKABLE void MadjustSize(QGraphicsWidget* o) { o->adjustSize(); }
    Q_INVOKABLE int MfocusPolicy(QGraphicsWidget* o) const { return o->focusPolicy(); }
    Q_INVOKABLE QGraphicsWidget* MfocusWidget(QGraphicsWidget* o) const { return o->focusWidget(); }
    Q_INVOKABLE QFont Mfont(QGraphicsWidget* o) const { return o->font(); }
    Q_INVOKABLE int MgrabShortcut(QGraphicsWidget* o, const QKeySequence& x1, Qt::ShortcutContext x2 = Qt::WindowShortcut) { return o->grabShortcut(x1, x2); }
    Q_INVOKABLE void MinsertAction(QGraphicsWidget* o, QAction* x1, QAction* x2) { o->insertAction(x1, x2); }
    Q_INVOKABLE void MinsertActions(QGraphicsWidget* o, QAction* x1, QList<QAction*> x2) { o->insertActions(x1, x2); }
    Q_INVOKABLE bool MisActiveWindow(QGraphicsWidget* o) const { return o->isActiveWindow(); }
    Q_INVOKABLE QGraphicsLayout* Mlayout(QGraphicsWidget* o) const { return o->layout(); }
    Q_INVOKABLE int MlayoutDirection(QGraphicsWidget* o) const { return o->layoutDirection(); }
    Q_INVOKABLE void MpaintWindowFrame(QGraphicsWidget* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paintWindowFrame(x1, x2, x3); }
    Q_INVOKABLE QPalette Mpalette(QGraphicsWidget* o) const { return o->palette(); }
    Q_INVOKABLE QRectF Mrect(QGraphicsWidget* o) const { return o->rect(); }
    Q_INVOKABLE void MreleaseShortcut(QGraphicsWidget* o, int x1) { o->releaseShortcut(x1); }
    Q_INVOKABLE void MremoveAction(QGraphicsWidget* o, QAction* x1) { o->removeAction(x1); }
    Q_INVOKABLE void Mresize(QGraphicsWidget* o, const QSizeF& x1) { o->resize(x1); }
    Q_INVOKABLE void Mresize(QGraphicsWidget* o, qreal x1, qreal x2) { o->resize(x1, x2); }
    Q_INVOKABLE void MsetAttribute(QGraphicsWidget* o, Qt::WidgetAttribute x1, bool x2 = true) { o->setAttribute(x1, x2); }
    Q_INVOKABLE void MsetContentsMargins(QGraphicsWidget* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setContentsMargins(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetFocusPolicy(QGraphicsWidget* o, Qt::FocusPolicy x1) { o->setFocusPolicy(x1); }
    Q_INVOKABLE void MsetFont(QGraphicsWidget* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetGeometry(QGraphicsWidget* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setGeometry(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetLayout(QGraphicsWidget* o, QGraphicsLayout* x1) { o->setLayout(x1); }
    Q_INVOKABLE void MsetLayoutDirection(QGraphicsWidget* o, Qt::LayoutDirection x1) { o->setLayoutDirection(x1); }
    Q_INVOKABLE void MsetPalette(QGraphicsWidget* o, const QPalette& x1) { o->setPalette(x1); }
    Q_INVOKABLE void MsetShortcutAutoRepeat(QGraphicsWidget* o, int x1, bool x2 = true) { o->setShortcutAutoRepeat(x1, x2); }
    Q_INVOKABLE void MsetShortcutEnabled(QGraphicsWidget* o, int x1, bool x2 = true) { o->setShortcutEnabled(x1, x2); }
    Q_INVOKABLE void MsetStyle(QGraphicsWidget* o, QStyle* x1) { o->setStyle(x1); }
    Q_INVOKABLE void MsetWindowFlags(QGraphicsWidget* o, Qt::WindowFlags x1) { o->setWindowFlags(x1); }
    Q_INVOKABLE void MsetWindowFrameMargins(QGraphicsWidget* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setWindowFrameMargins(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetWindowTitle(QGraphicsWidget* o, const QString& x1) { o->setWindowTitle(x1); }
    Q_INVOKABLE QSizeF Msize(QGraphicsWidget* o) const { return o->size(); }
    Q_INVOKABLE QStyle* Mstyle(QGraphicsWidget* o) const { return o->style(); }
    Q_INVOKABLE bool MtestAttribute(QGraphicsWidget* o, Qt::WidgetAttribute x1) const { return o->testAttribute(x1); }
    Q_INVOKABLE void MunsetLayoutDirection(QGraphicsWidget* o) { o->unsetLayoutDirection(); }
    Q_INVOKABLE void MunsetWindowFrameMargins(QGraphicsWidget* o) { o->unsetWindowFrameMargins(); }
    Q_INVOKABLE int MwindowFlags(QGraphicsWidget* o) const { return o->windowFlags(); }
    Q_INVOKABLE QRectF MwindowFrameGeometry(QGraphicsWidget* o) const { return o->windowFrameGeometry(); }
    Q_INVOKABLE QRectF MwindowFrameRect(QGraphicsWidget* o) const { return o->windowFrameRect(); }
    Q_INVOKABLE QString MwindowTitle(QGraphicsWidget* o) const { return o->windowTitle(); }
    Q_INVOKABLE int MwindowType(QGraphicsWidget* o) const { return o->windowType(); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsWidget* o) const { return o->boundingRect(); }
    Q_INVOKABLE void Mpaint(QGraphicsWidget* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE void MsetGeometry(QGraphicsWidget* o, const QRectF& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsWidget* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsWidget* o) const { return o->type(); }
    Q_INVOKABLE void SsetTabOrder(QGraphicsWidget* x1, QGraphicsWidget* x2) { QGraphicsWidget::setTabOrder(x1, x2); }
};

class Q49 : public Q65 { // QInputContext
    Q_OBJECT
public:
    Q_INVOKABLE QList<QAction*> Mactions(QInputContext* o) { return o->actions(); }
    Q_INVOKABLE bool MfilterEvent(QInputContext* o, const QEvent* x1) { return o->filterEvent(x1); }
    Q_INVOKABLE QWidget* MfocusWidget(QInputContext* o) const { return o->focusWidget(); }
    Q_INVOKABLE QFont Mfont(QInputContext* o) const { return o->font(); }
    Q_INVOKABLE QString MidentifierName(QInputContext* o) { return o->identifierName(); }
    Q_INVOKABLE bool MisComposing(QInputContext* o) const { return o->isComposing(); }
    Q_INVOKABLE QString Mlanguage(QInputContext* o) { return o->language(); }
    Q_INVOKABLE void Mreset(QInputContext* o) { o->reset(); }
    Q_INVOKABLE void MsendEvent(QInputContext* o, const QInputMethodEvent& x1) { o->sendEvent(x1); }
    Q_INVOKABLE void MsetFocusWidget(QInputContext* o, QWidget* x1) { o->setFocusWidget(x1); }
    Q_INVOKABLE QTextFormat MstandardFormat(QInputContext* o, QInputContext::StandardFormat x1) const { return o->standardFormat(x1); }
    Q_INVOKABLE void Mupdate(QInputContext* o) { o->update(); }
    Q_INVOKABLE void MwidgetDestroyed(QInputContext* o, QWidget* x1) { o->widgetDestroyed(x1); }
};

class Q51 : public Q2 { // QItemDelegate
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LItemDelegate(u, x1); }
    Q_INVOKABLE bool MhasClipping(QItemDelegate* o) const { return o->hasClipping(); }
    Q_INVOKABLE QItemEditorFactory* MitemEditorFactory(QItemDelegate* o) const { return o->itemEditorFactory(); }
    Q_INVOKABLE void MsetClipping(QItemDelegate* o, bool x1) { o->setClipping(x1); }
    Q_INVOKABLE void MsetItemEditorFactory(QItemDelegate* o, QItemEditorFactory* x1) { o->setItemEditorFactory(x1); }
    Q_INVOKABLE QWidget* McreateEditor(QItemDelegate* o, QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { return o->createEditor(x1, x2, x3); }
    Q_INVOKABLE void Mpaint(QItemDelegate* o, QPainter* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { o->paint(x1, x2, x3); }
    Q_INVOKABLE void MsetEditorData(QItemDelegate* o, QWidget* x1, const QModelIndex& x2) const { o->setEditorData(x1, x2); }
    Q_INVOKABLE void MsetModelData(QItemDelegate* o, QWidget* x1, QAbstractItemModel* x2, const QModelIndex& x3) const { o->setModelData(x1, x2, x3); }
    Q_INVOKABLE QSize MsizeHint(QItemDelegate* o, const QStyleOptionViewItem& x1, const QModelIndex& x2) const { return o->sizeHint(x1, x2); }
    Q_INVOKABLE void MupdateEditorGeometry(QItemDelegate* o, QWidget* x1, const QStyleOptionViewItem& x2, const QModelIndex& x3) const { o->updateEditorGeometry(x1, x2, x3); }
};

class Q52 : public Q65 { // QItemSelectionModel
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QAbstractItemModel* x1) { return new LItemSelectionModel(u, x1); }
    Q_INVOKABLE void* C(uint u, QAbstractItemModel* x1, QObject* x2) { return new LItemSelectionModel(u, x1, x2); }
    Q_INVOKABLE bool McolumnIntersectsSelection(QItemSelectionModel* o, int x1, const QModelIndex& x2) const { return o->columnIntersectsSelection(x1, x2); }
    Q_INVOKABLE QModelIndex McurrentIndex(QItemSelectionModel* o) const { return o->currentIndex(); }
    Q_INVOKABLE bool MhasSelection(QItemSelectionModel* o) const { return o->hasSelection(); }
    Q_INVOKABLE bool MisColumnSelected(QItemSelectionModel* o, int x1, const QModelIndex& x2) const { return o->isColumnSelected(x1, x2); }
    Q_INVOKABLE bool MisRowSelected(QItemSelectionModel* o, int x1, const QModelIndex& x2) const { return o->isRowSelected(x1, x2); }
    Q_INVOKABLE bool MisSelected(QItemSelectionModel* o, const QModelIndex& x1) const { return o->isSelected(x1); }
    Q_INVOKABLE const QAbstractItemModel* Mmodel(QItemSelectionModel* o) const { return o->model(); }
    Q_INVOKABLE bool MrowIntersectsSelection(QItemSelectionModel* o, int x1, const QModelIndex& x2) const { return o->rowIntersectsSelection(x1, x2); }
    Q_INVOKABLE QModelIndexList MselectedColumns(QItemSelectionModel* o, int x1 = 0) const { return o->selectedColumns(x1); }
    Q_INVOKABLE QModelIndexList MselectedIndexes(QItemSelectionModel* o) const { return o->selectedIndexes(); }
    Q_INVOKABLE QModelIndexList MselectedRows(QItemSelectionModel* o, int x1 = 0) const { return o->selectedRows(x1); }
    Q_INVOKABLE const QItemSelection Mselection(QItemSelectionModel* o) const { return o->selection(); }
};

class Q55 : public Q65 { // QLayout
    Q_OBJECT
public:
    Q_INVOKABLE bool Mactivate(QLayout* o) { return o->activate(); }
    Q_INVOKABLE void MaddItem(QLayout* o, QLayoutItem* x1) { o->addItem(x1); }
    Q_INVOKABLE void MaddWidget(QLayout* o, QWidget* x1) { o->addWidget(x1); }
    Q_INVOKABLE QMargins McontentsMargins(QLayout* o) const { return o->contentsMargins(); }
    Q_INVOKABLE QRect McontentsRect(QLayout* o) const { return o->contentsRect(); }
    Q_INVOKABLE int Mcount(QLayout* o) const { return o->count(); }
    Q_INVOKABLE int MindexOf(QLayout* o, QWidget* x1) const { return o->indexOf(x1); }
    Q_INVOKABLE bool MisEnabled(QLayout* o) const { return o->isEnabled(); }
    Q_INVOKABLE QLayoutItem* MitemAt(QLayout* o, int x1) const { return o->itemAt(x1); }
    Q_INVOKABLE QWidget* MmenuBar(QLayout* o) const { return o->menuBar(); }
    Q_INVOKABLE QWidget* MparentWidget(QLayout* o) const { return o->parentWidget(); }
    Q_INVOKABLE void MremoveItem(QLayout* o, QLayoutItem* x1) { o->removeItem(x1); }
    Q_INVOKABLE void MremoveWidget(QLayout* o, QWidget* x1) { o->removeWidget(x1); }
    Q_INVOKABLE bool MsetAlignment(QLayout* o, QWidget* x1, Qt::Alignment x2) { return o->setAlignment(x1, x2); }
    Q_INVOKABLE void MsetAlignment(QLayout* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE bool MsetAlignment(QLayout* o, QLayout* x1, Qt::Alignment x2) { return o->setAlignment(x1, x2); }
    Q_INVOKABLE void MsetContentsMargins(QLayout* o, int x1, int x2, int x3, int x4) { o->setContentsMargins(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetContentsMargins(QLayout* o, const QMargins& x1) { o->setContentsMargins(x1); }
    Q_INVOKABLE void MsetEnabled(QLayout* o, bool x1) { o->setEnabled(x1); }
    Q_INVOKABLE void MsetMenuBar(QLayout* o, QWidget* x1) { o->setMenuBar(x1); }
    Q_INVOKABLE void MsetSizeConstraint(QLayout* o, QLayout::SizeConstraint x1) { o->setSizeConstraint(x1); }
    Q_INVOKABLE void MsetSpacing(QLayout* o, int x1) { o->setSpacing(x1); }
    Q_INVOKABLE int MsizeConstraint(QLayout* o) const { return o->sizeConstraint(); }
    Q_INVOKABLE int Mspacing(QLayout* o) const { return o->spacing(); }
    Q_INVOKABLE QLayoutItem* MtakeAt(QLayout* o, int x1) { return o->takeAt(x1); }
    Q_INVOKABLE void Mupdate(QLayout* o) { o->update(); }
    Q_INVOKABLE int MexpandingDirections(QLayout* o) const { return o->expandingDirections(); }
    Q_INVOKABLE QRect Mgeometry(QLayout* o) const { return o->geometry(); }
    Q_INVOKABLE void Minvalidate(QLayout* o) { o->invalidate(); }
    Q_INVOKABLE bool MisEmpty(QLayout* o) const { return o->isEmpty(); }
    Q_INVOKABLE QLayout* Mlayout(QLayout* o) { return o->layout(); }
    Q_INVOKABLE QSize MmaximumSize(QLayout* o) const { return o->maximumSize(); }
    Q_INVOKABLE QSize MminimumSize(QLayout* o) const { return o->minimumSize(); }
    Q_INVOKABLE void MsetGeometry(QLayout* o, const QRect& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSize SclosestAcceptableSize(const QWidget* x1, const QSize& x2) { return QLayout::closestAcceptableSize(x1, x2); }
};

class Q63 : public Q65 { // QMimeData
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LMimeData(u); }
    Q_INVOKABLE void Mclear(QMimeData* o) { o->clear(); }
    Q_INVOKABLE QVariant McolorData(QMimeData* o) const { return o->colorData(); }
    Q_INVOKABLE QByteArray Mdata(QMimeData* o, const QString& x1) const { return o->data(x1); }
    Q_INVOKABLE QStringList Mformats(QMimeData* o) const { return o->formats(); }
    Q_INVOKABLE bool MhasColor(QMimeData* o) const { return o->hasColor(); }
    Q_INVOKABLE bool MhasFormat(QMimeData* o, const QString& x1) const { return o->hasFormat(x1); }
    Q_INVOKABLE bool MhasHtml(QMimeData* o) const { return o->hasHtml(); }
    Q_INVOKABLE bool MhasImage(QMimeData* o) const { return o->hasImage(); }
    Q_INVOKABLE bool MhasText(QMimeData* o) const { return o->hasText(); }
    Q_INVOKABLE bool MhasUrls(QMimeData* o) const { return o->hasUrls(); }
    Q_INVOKABLE QString Mhtml(QMimeData* o) const { return o->html(); }
    Q_INVOKABLE QVariant MimageData(QMimeData* o) const { return o->imageData(); }
    Q_INVOKABLE void MremoveFormat(QMimeData* o, const QString& x1) { o->removeFormat(x1); }
    Q_INVOKABLE void MsetColorData(QMimeData* o, const QVariant& x1) { o->setColorData(x1); }
    Q_INVOKABLE void MsetData(QMimeData* o, const QString& x1, const QByteArray& x2) { o->setData(x1, x2); }
    Q_INVOKABLE void MsetHtml(QMimeData* o, const QString& x1) { o->setHtml(x1); }
    Q_INVOKABLE void MsetImageData(QMimeData* o, const QVariant& x1) { o->setImageData(x1); }
    Q_INVOKABLE void MsetText(QMimeData* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE void MsetUrls(QMimeData* o, const QList<QUrl>& x1) { o->setUrls(x1); }
    Q_INVOKABLE QString Mtext(QMimeData* o) const { return o->text(); }
    Q_INVOKABLE QList<QUrl> Murls(QMimeData* o) const { return o->urls(); }
};

class Q64 : public Q65 { // QMovie
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LMovie(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const QByteArray& x2 = QByteArray(), QObject* x3 = 0) { return new LMovie(u, x1, x2, x3); }
    Q_INVOKABLE QColor MbackgroundColor(QMovie* o) const { return o->backgroundColor(); }
    Q_INVOKABLE int McacheMode(QMovie* o) const { return o->cacheMode(); }
    Q_INVOKABLE int McurrentFrameNumber(QMovie* o) const { return o->currentFrameNumber(); }
    Q_INVOKABLE QImage McurrentImage(QMovie* o) const { return o->currentImage(); }
    Q_INVOKABLE QPixmap McurrentPixmap(QMovie* o) const { return o->currentPixmap(); }
    Q_INVOKABLE QString MfileName(QMovie* o) const { return o->fileName(); }
    Q_INVOKABLE QByteArray Mformat(QMovie* o) const { return o->format(); }
    Q_INVOKABLE int MframeCount(QMovie* o) const { return o->frameCount(); }
    Q_INVOKABLE QRect MframeRect(QMovie* o) const { return o->frameRect(); }
    Q_INVOKABLE bool MisValid(QMovie* o) const { return o->isValid(); }
    Q_INVOKABLE bool MjumpToFrame(QMovie* o, int x1) { return o->jumpToFrame(x1); }
    Q_INVOKABLE int MloopCount(QMovie* o) const { return o->loopCount(); }
    Q_INVOKABLE int MnextFrameDelay(QMovie* o) const { return o->nextFrameDelay(); }
    Q_INVOKABLE QSize MscaledSize(QMovie* o) { return o->scaledSize(); }
    Q_INVOKABLE void MsetBackgroundColor(QMovie* o, const QColor& x1) { o->setBackgroundColor(x1); }
    Q_INVOKABLE void MsetCacheMode(QMovie* o, QMovie::CacheMode x1) { o->setCacheMode(x1); }
    Q_INVOKABLE void MsetFileName(QMovie* o, const QString& x1) { o->setFileName(x1); }
    Q_INVOKABLE void MsetFormat(QMovie* o, const QByteArray& x1) { o->setFormat(x1); }
    Q_INVOKABLE void MsetScaledSize(QMovie* o, const QSize& x1) { o->setScaledSize(x1); }
    Q_INVOKABLE int Mspeed(QMovie* o) const { return o->speed(); }
    Q_INVOKABLE int Mstate(QMovie* o) const { return o->state(); }
    Q_INVOKABLE QList<QByteArray> SsupportedFormats() { return QMovie::supportedFormats(); }
};

class Q72 : public Q65 { // QSessionManager
    Q_OBJECT
public:
    Q_INVOKABLE bool MallowsErrorInteraction(QSessionManager* o) { return o->allowsErrorInteraction(); }
    Q_INVOKABLE bool MallowsInteraction(QSessionManager* o) { return o->allowsInteraction(); }
    Q_INVOKABLE void Mcancel(QSessionManager* o) { o->cancel(); }
    Q_INVOKABLE QStringList MdiscardCommand(QSessionManager* o) const { return o->discardCommand(); }
    Q_INVOKABLE bool MisPhase2(QSessionManager* o) const { return o->isPhase2(); }
    Q_INVOKABLE void Mrelease(QSessionManager* o) { o->release(); }
    Q_INVOKABLE void MrequestPhase2(QSessionManager* o) { o->requestPhase2(); }
    Q_INVOKABLE QStringList MrestartCommand(QSessionManager* o) const { return o->restartCommand(); }
    Q_INVOKABLE int MrestartHint(QSessionManager* o) const { return o->restartHint(); }
    Q_INVOKABLE QString MsessionId(QSessionManager* o) const { return o->sessionId(); }
    Q_INVOKABLE QString MsessionKey(QSessionManager* o) const { return o->sessionKey(); }
    Q_INVOKABLE void MsetDiscardCommand(QSessionManager* o, const QStringList& x1) { o->setDiscardCommand(x1); }
    Q_INVOKABLE void MsetManagerProperty(QSessionManager* o, const QString& x1, const QStringList& x2) { o->setManagerProperty(x1, x2); }
    Q_INVOKABLE void MsetManagerProperty(QSessionManager* o, const QString& x1, const QString& x2) { o->setManagerProperty(x1, x2); }
    Q_INVOKABLE void MsetRestartCommand(QSessionManager* o, const QStringList& x1) { o->setRestartCommand(x1); }
    Q_INVOKABLE void MsetRestartHint(QSessionManager* o, QSessionManager::RestartHint x1) { o->setRestartHint(x1); }
};

class Q77 : public Q55 { // QStackedLayout
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LStackedLayout(u); }
    Q_INVOKABLE void* C(uint u, QWidget* x1) { return new LStackedLayout(u, x1); }
    Q_INVOKABLE void* C(uint u, QLayout* x1) { return new LStackedLayout(u, x1); }
    Q_INVOKABLE int MaddWidget(QStackedLayout* o, QWidget* x1) { return o->addWidget(x1); }
    Q_INVOKABLE int McurrentIndex(QStackedLayout* o) const { return o->currentIndex(); }
    Q_INVOKABLE QWidget* McurrentWidget(QStackedLayout* o) const { return o->currentWidget(); }
    Q_INVOKABLE int MinsertWidget(QStackedLayout* o, int x1, QWidget* x2) { return o->insertWidget(x1, x2); }
    Q_INVOKABLE void MsetStackingMode(QStackedLayout* o, QStackedLayout::StackingMode x1) { o->setStackingMode(x1); }
    Q_INVOKABLE int MstackingMode(QStackedLayout* o) const { return o->stackingMode(); }
    Q_INVOKABLE QWidget* Mwidget(QStackedLayout* o, int x1) const { return o->widget(x1); }
    Q_INVOKABLE void MaddItem(QStackedLayout* o, QLayoutItem* x1) { o->addItem(x1); }
    Q_INVOKABLE int Mcount(QStackedLayout* o) const { return o->count(); }
    Q_INVOKABLE QLayoutItem* MitemAt(QStackedLayout* o, int x1) const { return o->itemAt(x1); }
    Q_INVOKABLE QSize MminimumSize(QStackedLayout* o) const { return o->minimumSize(); }
    Q_INVOKABLE void MsetGeometry(QStackedLayout* o, const QRect& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSize MsizeHint(QStackedLayout* o) const { return o->sizeHint(); }
    Q_INVOKABLE QLayoutItem* MtakeAt(QStackedLayout* o, int x1) { return o->takeAt(x1); }
};

class Q79 : public Q3 { // QStandardItemModel
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LStandardItemModel(u, x1); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, QObject* x3 = 0) { return new LStandardItemModel(u, x1, x2, x3); }
    Q_INVOKABLE void MappendColumn(QStandardItemModel* o, const QList<QStandardItem*>& x1) { o->appendColumn(x1); }
    Q_INVOKABLE void MappendRow(QStandardItemModel* o, const QList<QStandardItem*>& x1) { o->appendRow(x1); }
    Q_INVOKABLE void MappendRow(QStandardItemModel* o, QStandardItem* x1) { o->appendRow(x1); }
    Q_INVOKABLE void Mclear(QStandardItemModel* o) { o->clear(); }
    Q_INVOKABLE QList<QStandardItem*> MfindItems(QStandardItemModel* o, const QString& x1, Qt::MatchFlags x2 = Qt::MatchExactly, int x3 = 0) const { return o->findItems(x1, x2, x3); }
    Q_INVOKABLE QStandardItem* MhorizontalHeaderItem(QStandardItemModel* o, int x1) const { return o->horizontalHeaderItem(x1); }
    Q_INVOKABLE QModelIndex MindexFromItem(QStandardItemModel* o, const QStandardItem* x1) const { return o->indexFromItem(x1); }
    Q_INVOKABLE void MinsertColumn(QStandardItemModel* o, int x1, const QList<QStandardItem*>& x2) { o->insertColumn(x1, x2); }
    Q_INVOKABLE bool MinsertColumn(QStandardItemModel* o, int x1, const QModelIndex& x2 = QModelIndex()) { return o->insertColumn(x1, x2); }
    Q_INVOKABLE void MinsertRow(QStandardItemModel* o, int x1, const QList<QStandardItem*>& x2) { o->insertRow(x1, x2); }
    Q_INVOKABLE bool MinsertRow(QStandardItemModel* o, int x1, const QModelIndex& x2 = QModelIndex()) { return o->insertRow(x1, x2); }
    Q_INVOKABLE void MinsertRow(QStandardItemModel* o, int x1, QStandardItem* x2) { o->insertRow(x1, x2); }
    Q_INVOKABLE QStandardItem* MinvisibleRootItem(QStandardItemModel* o) const { return o->invisibleRootItem(); }
    Q_INVOKABLE QStandardItem* Mitem(QStandardItemModel* o, int x1, int x2 = 0) const { return o->item(x1, x2); }
    Q_INVOKABLE QStandardItem* MitemFromIndex(QStandardItemModel* o, const QModelIndex& x1) const { return o->itemFromIndex(x1); }
    Q_INVOKABLE const QStandardItem* MitemPrototype(QStandardItemModel* o) const { return o->itemPrototype(); }
    Q_INVOKABLE void MsetColumnCount(QStandardItemModel* o, int x1) { o->setColumnCount(x1); }
    Q_INVOKABLE void MsetHorizontalHeaderItem(QStandardItemModel* o, int x1, QStandardItem* x2) { o->setHorizontalHeaderItem(x1, x2); }
    Q_INVOKABLE void MsetHorizontalHeaderLabels(QStandardItemModel* o, const QStringList& x1) { o->setHorizontalHeaderLabels(x1); }
    Q_INVOKABLE void MsetItem(QStandardItemModel* o, int x1, int x2, QStandardItem* x3) { o->setItem(x1, x2, x3); }
    Q_INVOKABLE void MsetItem(QStandardItemModel* o, int x1, QStandardItem* x2) { o->setItem(x1, x2); }
    Q_INVOKABLE void MsetItemPrototype(QStandardItemModel* o, const QStandardItem* x1) { o->setItemPrototype(x1); }
    Q_INVOKABLE void MsetRowCount(QStandardItemModel* o, int x1) { o->setRowCount(x1); }
    Q_INVOKABLE void MsetSortRole(QStandardItemModel* o, int x1) { o->setSortRole(x1); }
    Q_INVOKABLE void MsetVerticalHeaderItem(QStandardItemModel* o, int x1, QStandardItem* x2) { o->setVerticalHeaderItem(x1, x2); }
    Q_INVOKABLE void MsetVerticalHeaderLabels(QStandardItemModel* o, const QStringList& x1) { o->setVerticalHeaderLabels(x1); }
    Q_INVOKABLE int MsortRole(QStandardItemModel* o) const { return o->sortRole(); }
    Q_INVOKABLE QList<QStandardItem*> MtakeColumn(QStandardItemModel* o, int x1) { return o->takeColumn(x1); }
    Q_INVOKABLE QStandardItem* MtakeHorizontalHeaderItem(QStandardItemModel* o, int x1) { return o->takeHorizontalHeaderItem(x1); }
    Q_INVOKABLE QStandardItem* MtakeItem(QStandardItemModel* o, int x1, int x2 = 0) { return o->takeItem(x1, x2); }
    Q_INVOKABLE QList<QStandardItem*> MtakeRow(QStandardItemModel* o, int x1) { return o->takeRow(x1); }
    Q_INVOKABLE QStandardItem* MtakeVerticalHeaderItem(QStandardItemModel* o, int x1) { return o->takeVerticalHeaderItem(x1); }
    Q_INVOKABLE QStandardItem* MverticalHeaderItem(QStandardItemModel* o, int x1) const { return o->verticalHeaderItem(x1); }
    Q_INVOKABLE int McolumnCount(QStandardItemModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->columnCount(x1); }
    Q_INVOKABLE QVariant Mdata(QStandardItemModel* o, const QModelIndex& x1, int x2 = Qt::DisplayRole) const { return o->data(x1, x2); }
    Q_INVOKABLE bool MdropMimeData(QStandardItemModel* o, const QMimeData* x1, Qt::DropAction x2, int x3, int x4, const QModelIndex& x5) { return o->dropMimeData(x1, x2, x3, x4, x5); }
    Q_INVOKABLE int Mflags(QStandardItemModel* o, const QModelIndex& x1) const { return o->flags(x1); }
    Q_INVOKABLE bool MhasChildren(QStandardItemModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->hasChildren(x1); }
    Q_INVOKABLE QVariant MheaderData(QStandardItemModel* o, int x1, Qt::Orientation x2, int x3 = Qt::DisplayRole) const { return o->headerData(x1, x2, x3); }
    Q_INVOKABLE QModelIndex Mindex(QStandardItemModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) const { return o->index(x1, x2, x3); }
    Q_INVOKABLE bool MinsertColumns(QStandardItemModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->insertColumns(x1, x2, x3); }
    Q_INVOKABLE bool MinsertRows(QStandardItemModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->insertRows(x1, x2, x3); }
    Q_INVOKABLE QMimeData* MmimeData(QStandardItemModel* o, const QModelIndexList& x1) const { return o->mimeData(x1); }
    Q_INVOKABLE QStringList MmimeTypes(QStandardItemModel* o) const { return o->mimeTypes(); }
    Q_INVOKABLE QModelIndex Mparent(QStandardItemModel* o, const QModelIndex& x1) const { return o->parent(x1); }
    Q_INVOKABLE bool MremoveColumns(QStandardItemModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->removeColumns(x1, x2, x3); }
    Q_INVOKABLE bool MremoveRows(QStandardItemModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->removeRows(x1, x2, x3); }
    Q_INVOKABLE int MrowCount(QStandardItemModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->rowCount(x1); }
    Q_INVOKABLE bool MsetData(QStandardItemModel* o, const QModelIndex& x1, const QVariant& x2, int x3 = Qt::EditRole) { return o->setData(x1, x2, x3); }
    Q_INVOKABLE bool MsetHeaderData(QStandardItemModel* o, int x1, Qt::Orientation x2, const QVariant& x3, int x4 = Qt::EditRole) { return o->setHeaderData(x1, x2, x3, x4); }
    Q_INVOKABLE void Msort(QStandardItemModel* o, int x1, Qt::SortOrder x2 = Qt::AscendingOrder) { o->sort(x1, x2); }
    Q_INVOKABLE int MsupportedDropActions(QStandardItemModel* o) const { return o->supportedDropActions(); }
};

class Q81 : public Q5 { // QStringListModel
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LStringListModel(u, x1); }
    Q_INVOKABLE void* C(uint u, const QStringList& x1, QObject* x2 = 0) { return new LStringListModel(u, x1, x2); }
    Q_INVOKABLE void MsetStringList(QStringListModel* o, const QStringList& x1) { o->setStringList(x1); }
    Q_INVOKABLE QStringList MstringList(QStringListModel* o) const { return o->stringList(); }
    Q_INVOKABLE QVariant Mdata(QStringListModel* o, const QModelIndex& x1, int x2) const { return o->data(x1, x2); }
    Q_INVOKABLE int Mflags(QStringListModel* o, const QModelIndex& x1) const { return o->flags(x1); }
    Q_INVOKABLE bool MinsertRows(QStringListModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->insertRows(x1, x2, x3); }
    Q_INVOKABLE bool MremoveRows(QStringListModel* o, int x1, int x2, const QModelIndex& x3 = QModelIndex()) { return o->removeRows(x1, x2, x3); }
    Q_INVOKABLE int MrowCount(QStringListModel* o, const QModelIndex& x1 = QModelIndex()) const { return o->rowCount(x1); }
    Q_INVOKABLE bool MsetData(QStringListModel* o, const QModelIndex& x1, const QVariant& x2, int x3 = Qt::EditRole) { return o->setData(x1, x2, x3); }
    Q_INVOKABLE void Msort(QStringListModel* o, int x1, Qt::SortOrder x2 = Qt::AscendingOrder) { o->sort(x1, x2); }
    Q_INVOKABLE int MsupportedDropActions(QStringListModel* o) const { return o->supportedDropActions(); }
};

class Q88 : public Q65 { // QTextDocument
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LTextDocument(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QObject* x2 = 0) { return new LTextDocument(u, x1, x2); }
    Q_INVOKABLE void MaddResource(QTextDocument* o, int x1, const QUrl& x2, const QVariant& x3) { o->addResource(x1, x2, x3); }
    Q_INVOKABLE void MadjustSize(QTextDocument* o) { o->adjustSize(); }
    Q_INVOKABLE QVector<QTextFormat> MallFormats(QTextDocument* o) const { return o->allFormats(); }
    Q_INVOKABLE int MavailableRedoSteps(QTextDocument* o) const { return o->availableRedoSteps(); }
    Q_INVOKABLE int MavailableUndoSteps(QTextDocument* o) const { return o->availableUndoSteps(); }
    Q_INVOKABLE QTextBlock Mbegin(QTextDocument* o) const { return o->begin(); }
    Q_INVOKABLE int MblockCount(QTextDocument* o) const { return o->blockCount(); }
    Q_INVOKABLE QChar McharacterAt(QTextDocument* o, int x1) const { return o->characterAt(x1); }
    Q_INVOKABLE int McharacterCount(QTextDocument* o) const { return o->characterCount(); }
    Q_INVOKABLE void Mclear(QTextDocument* o) { o->clear(); }
    Q_INVOKABLE QTextDocument* Mclone(QTextDocument* o, QObject* x1 = 0) const { return o->clone(x1); }
    Q_INVOKABLE QFont MdefaultFont(QTextDocument* o) const { return o->defaultFont(); }
    Q_INVOKABLE QString MdefaultStyleSheet(QTextDocument* o) const { return o->defaultStyleSheet(); }
    Q_INVOKABLE QTextOption MdefaultTextOption(QTextDocument* o) const { return o->defaultTextOption(); }
    Q_INVOKABLE QAbstractTextDocumentLayout* MdocumentLayout(QTextDocument* o) const { return o->documentLayout(); }
    Q_INVOKABLE qreal MdocumentMargin(QTextDocument* o) const { return o->documentMargin(); }
    Q_INVOKABLE void MdrawContents(QTextDocument* o, QPainter* x1, const QRectF& x2 = QRectF()) { o->drawContents(x1, x2); }
    Q_INVOKABLE QTextBlock Mend(QTextDocument* o) const { return o->end(); }
    Q_INVOKABLE QTextCursor Mfind(QTextDocument* o, const QString& x1, const QTextCursor& x2, QTextDocument::FindFlags x3 = 0) const { return o->find(x1, x2, x3); }
    Q_INVOKABLE QTextCursor Mfind(QTextDocument* o, const QRegExp& x1, const QTextCursor& x2, QTextDocument::FindFlags x3 = 0) const { return o->find(x1, x2, x3); }
    Q_INVOKABLE QTextCursor Mfind(QTextDocument* o, const QString& x1, int x2 = 0, QTextDocument::FindFlags x3 = 0) const { return o->find(x1, x2, x3); }
    Q_INVOKABLE QTextCursor Mfind(QTextDocument* o, const QRegExp& x1, int x2 = 0, QTextDocument::FindFlags x3 = 0) const { return o->find(x1, x2, x3); }
    Q_INVOKABLE QTextBlock MfindBlock(QTextDocument* o, int x1) const { return o->findBlock(x1); }
    Q_INVOKABLE QTextBlock MfindBlockByLineNumber(QTextDocument* o, int x1) const { return o->findBlockByLineNumber(x1); }
    Q_INVOKABLE QTextBlock MfindBlockByNumber(QTextDocument* o, int x1) const { return o->findBlockByNumber(x1); }
    Q_INVOKABLE QTextBlock MfirstBlock(QTextDocument* o) const { return o->firstBlock(); }
    Q_INVOKABLE qreal MidealWidth(QTextDocument* o) const { return o->idealWidth(); }
    Q_INVOKABLE qreal MindentWidth(QTextDocument* o) const { return o->indentWidth(); }
    Q_INVOKABLE bool MisEmpty(QTextDocument* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisModified(QTextDocument* o) const { return o->isModified(); }
    Q_INVOKABLE bool MisRedoAvailable(QTextDocument* o) const { return o->isRedoAvailable(); }
    Q_INVOKABLE bool MisUndoAvailable(QTextDocument* o) const { return o->isUndoAvailable(); }
    Q_INVOKABLE bool MisUndoRedoEnabled(QTextDocument* o) const { return o->isUndoRedoEnabled(); }
    Q_INVOKABLE QTextBlock MlastBlock(QTextDocument* o) const { return o->lastBlock(); }
    Q_INVOKABLE int MlineCount(QTextDocument* o) const { return o->lineCount(); }
    Q_INVOKABLE void MmarkContentsDirty(QTextDocument* o, int x1, int x2) { o->markContentsDirty(x1, x2); }
    Q_INVOKABLE int MmaximumBlockCount(QTextDocument* o) const { return o->maximumBlockCount(); }
    Q_INVOKABLE QString MmetaInformation(QTextDocument* o, QTextDocument::MetaInformation x1) const { return o->metaInformation(x1); }
    Q_INVOKABLE QTextObject* Mobject(QTextDocument* o, int x1) const { return o->object(x1); }
    Q_INVOKABLE QTextObject* MobjectForFormat(QTextDocument* o, const QTextFormat& x1) const { return o->objectForFormat(x1); }
    Q_INVOKABLE int MpageCount(QTextDocument* o) const { return o->pageCount(); }
    Q_INVOKABLE QSizeF MpageSize(QTextDocument* o) const { return o->pageSize(); }
    Q_INVOKABLE void Mprint(QTextDocument* o, QPrinter* x1) const { o->print(x1); }
    Q_INVOKABLE void Mredo(QTextDocument* o, QTextCursor* x1) { o->redo(x1); }
    Q_INVOKABLE QVariant Mresource(QTextDocument* o, int x1, const QUrl& x2) const { return o->resource(x1, x2); }
    Q_INVOKABLE int Mrevision(QTextDocument* o) const { return o->revision(); }
    Q_INVOKABLE QTextFrame* MrootFrame(QTextDocument* o) const { return o->rootFrame(); }
    Q_INVOKABLE void MsetDefaultFont(QTextDocument* o, const QFont& x1) { o->setDefaultFont(x1); }
    Q_INVOKABLE void MsetDefaultStyleSheet(QTextDocument* o, const QString& x1) { o->setDefaultStyleSheet(x1); }
    Q_INVOKABLE void MsetDefaultTextOption(QTextDocument* o, const QTextOption& x1) { o->setDefaultTextOption(x1); }
    Q_INVOKABLE void MsetDocumentLayout(QTextDocument* o, QAbstractTextDocumentLayout* x1) { o->setDocumentLayout(x1); }
    Q_INVOKABLE void MsetDocumentMargin(QTextDocument* o, qreal x1) { o->setDocumentMargin(x1); }
    Q_INVOKABLE void MsetHtml(QTextDocument* o, const QString& x1) { o->setHtml(x1); }
    Q_INVOKABLE void MsetIndentWidth(QTextDocument* o, qreal x1) { o->setIndentWidth(x1); }
    Q_INVOKABLE void MsetMaximumBlockCount(QTextDocument* o, int x1) { o->setMaximumBlockCount(x1); }
    Q_INVOKABLE void MsetMetaInformation(QTextDocument* o, QTextDocument::MetaInformation x1, const QString& x2) { o->setMetaInformation(x1, x2); }
    Q_INVOKABLE void MsetPageSize(QTextDocument* o, const QSizeF& x1) { o->setPageSize(x1); }
    Q_INVOKABLE void MsetPlainText(QTextDocument* o, const QString& x1) { o->setPlainText(x1); }
    Q_INVOKABLE void MsetTextWidth(QTextDocument* o, qreal x1) { o->setTextWidth(x1); }
    Q_INVOKABLE void MsetUndoRedoEnabled(QTextDocument* o, bool x1) { o->setUndoRedoEnabled(x1); }
    Q_INVOKABLE void MsetUseDesignMetrics(QTextDocument* o, bool x1) { o->setUseDesignMetrics(x1); }
    Q_INVOKABLE QSizeF Msize(QTextDocument* o) const { return o->size(); }
    Q_INVOKABLE qreal MtextWidth(QTextDocument* o) const { return o->textWidth(); }
    Q_INVOKABLE QString MtoHtml(QTextDocument* o, const QByteArray& x1 = QByteArray()) const { return o->toHtml(x1); }
    Q_INVOKABLE QString MtoPlainText(QTextDocument* o) const { return o->toPlainText(); }
    Q_INVOKABLE void Mundo(QTextDocument* o, QTextCursor* x1) { o->undo(x1); }
    Q_INVOKABLE bool MuseDesignMetrics(QTextDocument* o) const { return o->useDesignMetrics(); }
};

class Q92 : public Q65 { // QTextObject
    Q_OBJECT
public:
    Q_INVOKABLE QTextDocument* Mdocument(QTextObject* o) const { return o->document(); }
    Q_INVOKABLE QTextFormat Mformat(QTextObject* o) const { return o->format(); }
    Q_INVOKABLE int MformatIndex(QTextObject* o) const { return o->formatIndex(); }
    Q_INVOKABLE int MobjectIndex(QTextObject* o) const { return o->objectIndex(); }
};

class Q94 : public Q65 { // QThread
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LThread(u, x1); }
    Q_INVOKABLE void Mexit(QThread* o, int x1 = 0) { o->exit(x1); }
    Q_INVOKABLE bool MisFinished(QThread* o) const { return o->isFinished(); }
    Q_INVOKABLE bool MisRunning(QThread* o) const { return o->isRunning(); }
    Q_INVOKABLE int Mpriority(QThread* o) const { return o->priority(); }
    Q_INVOKABLE void MsetPriority(QThread* o, QThread::Priority x1) { o->setPriority(x1); }
    Q_INVOKABLE void MsetStackSize(QThread* o, uint x1) { o->setStackSize(x1); }
    Q_INVOKABLE uint MstackSize(QThread* o) const { return o->stackSize(); }
    Q_INVOKABLE bool Mwait(QThread* o, ulong x1 = ULONG_MAX) { return o->wait(x1); }
    Q_INVOKABLE QThread* ScurrentThread() { return QThread::currentThread(); }
    Q_INVOKABLE int SidealThreadCount() { return QThread::idealThreadCount(); }
    Q_INVOKABLE void SyieldCurrentThread() { QThread::yieldCurrentThread(); }
};

class Q96 : public Q65 { // QTimer
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LTimer(u, x1); }
    Q_INVOKABLE int Minterval(QTimer* o) const { return o->interval(); }
    Q_INVOKABLE bool MisActive(QTimer* o) const { return o->isActive(); }
    Q_INVOKABLE bool MisSingleShot(QTimer* o) const { return o->isSingleShot(); }
    Q_INVOKABLE void MsetInterval(QTimer* o, int x1) { o->setInterval(x1); }
    Q_INVOKABLE void MsetSingleShot(QTimer* o, bool x1) { o->setSingleShot(x1); }
    Q_INVOKABLE int MtimerId(QTimer* o) const { return o->timerId(); }
};

class Q100 : public Q65 { // QTranslator
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LTranslator(u, x1); }
    Q_INVOKABLE bool MisEmpty(QTranslator* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool Mload(QTranslator* o, const QString& x1, const QString& x2 = QString(), const QString& x3 = QString(), const QString& x4 = QString()) { return o->load(x1, x2, x3, x4); }
    Q_INVOKABLE bool Mload(QTranslator* o, const uchar* x1, int x2) { return o->load(x1, x2); }
    Q_INVOKABLE QString Mtranslate(QTranslator* o, const char* x1, const char* x2, const char* x3 = 0) const { return o->translate(x1, x2, x3); }
    Q_INVOKABLE QString Mtranslate(QTranslator* o, const char* x1, const char* x2, const char* x3, int x4) const { return o->translate(x1, x2, x3, x4); }
};

class Q103 : public Q65 { // QUndoGroup
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LUndoGroup(u, x1); }
    Q_INVOKABLE QUndoStack* MactiveStack(QUndoGroup* o) const { return o->activeStack(); }
    Q_INVOKABLE void MaddStack(QUndoGroup* o, QUndoStack* x1) { o->addStack(x1); }
    Q_INVOKABLE bool McanRedo(QUndoGroup* o) const { return o->canRedo(); }
    Q_INVOKABLE bool McanUndo(QUndoGroup* o) const { return o->canUndo(); }
    Q_INVOKABLE QAction* McreateRedoAction(QUndoGroup* o, QObject* x1, const QString& x2 = QString()) const { return o->createRedoAction(x1, x2); }
    Q_INVOKABLE QAction* McreateUndoAction(QUndoGroup* o, QObject* x1, const QString& x2 = QString()) const { return o->createUndoAction(x1, x2); }
    Q_INVOKABLE bool MisClean(QUndoGroup* o) const { return o->isClean(); }
    Q_INVOKABLE QString MredoText(QUndoGroup* o) const { return o->redoText(); }
    Q_INVOKABLE void MremoveStack(QUndoGroup* o, QUndoStack* x1) { o->removeStack(x1); }
    Q_INVOKABLE QList<QUndoStack*> Mstacks(QUndoGroup* o) const { return o->stacks(); }
    Q_INVOKABLE QString MundoText(QUndoGroup* o) const { return o->undoText(); }
};

class Q104 : public Q65 { // QUndoStack
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QObject* x1 = 0) { return new LUndoStack(u, x1); }
    Q_INVOKABLE void MbeginMacro(QUndoStack* o, const QString& x1) { o->beginMacro(x1); }
    Q_INVOKABLE bool McanRedo(QUndoStack* o) const { return o->canRedo(); }
    Q_INVOKABLE bool McanUndo(QUndoStack* o) const { return o->canUndo(); }
    Q_INVOKABLE int McleanIndex(QUndoStack* o) const { return o->cleanIndex(); }
    Q_INVOKABLE void Mclear(QUndoStack* o) { o->clear(); }
    Q_INVOKABLE const QUndoCommand* Mcommand(QUndoStack* o, int x1) const { return o->command(x1); }
    Q_INVOKABLE int Mcount(QUndoStack* o) const { return o->count(); }
    Q_INVOKABLE QAction* McreateRedoAction(QUndoStack* o, QObject* x1, const QString& x2 = QString()) const { return o->createRedoAction(x1, x2); }
    Q_INVOKABLE QAction* McreateUndoAction(QUndoStack* o, QObject* x1, const QString& x2 = QString()) const { return o->createUndoAction(x1, x2); }
    Q_INVOKABLE void MendMacro(QUndoStack* o) { o->endMacro(); }
    Q_INVOKABLE int Mindex(QUndoStack* o) const { return o->index(); }
    Q_INVOKABLE bool MisActive(QUndoStack* o) const { return o->isActive(); }
    Q_INVOKABLE bool MisClean(QUndoStack* o) const { return o->isClean(); }
    Q_INVOKABLE void Mpush(QUndoStack* o, QUndoCommand* x1) { o->push(x1); }
    Q_INVOKABLE QString MredoText(QUndoStack* o) const { return o->redoText(); }
    Q_INVOKABLE void MsetUndoLimit(QUndoStack* o, int x1) { o->setUndoLimit(x1); }
    Q_INVOKABLE QString Mtext(QUndoStack* o, int x1) const { return o->text(x1); }
    Q_INVOKABLE int MundoLimit(QUndoStack* o) const { return o->undoLimit(); }
    Q_INVOKABLE QString MundoText(QUndoStack* o) const { return o->undoText(); }
};

class Q107 : public Q65 { // QValidator
    Q_OBJECT
public:
    Q_INVOKABLE void Mfixup(QValidator* o, QString& x1) const { o->fixup(x1); }
    Q_INVOKABLE QLocale Mlocale(QValidator* o) const { return o->locale(); }
    Q_INVOKABLE void MsetLocale(QValidator* o, const QLocale& x1) { o->setLocale(x1); }
    Q_INVOKABLE int Mvalidate(QValidator* o, QString& x1, int& x2) const { return o->validate(x1, x2); }
};

class Q108 : public Q65 { // QWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) { return new LWidget(u, x1, x2); }
    Q_INVOKABLE bool MacceptDrops(QWidget* o) const { return o->acceptDrops(); }
    Q_INVOKABLE QString MaccessibleDescription(QWidget* o) const { return o->accessibleDescription(); }
    Q_INVOKABLE QString MaccessibleName(QWidget* o) const { return o->accessibleName(); }
    Q_INVOKABLE QList<QAction*> Mactions(QWidget* o) const { return o->actions(); }
    Q_INVOKABLE void MactivateWindow(QWidget* o) { o->activateWindow(); }
    Q_INVOKABLE void MaddAction(QWidget* o, QAction* x1) { o->addAction(x1); }
    Q_INVOKABLE void MaddActions(QWidget* o, QList<QAction*> x1) { o->addActions(x1); }
    Q_INVOKABLE void MadjustSize(QWidget* o) { o->adjustSize(); }
    Q_INVOKABLE bool MautoFillBackground(QWidget* o) const { return o->autoFillBackground(); }
    Q_INVOKABLE int MbackgroundRole(QWidget* o) const { return o->backgroundRole(); }
    Q_INVOKABLE QSize MbaseSize(QWidget* o) const { return o->baseSize(); }
    Q_INVOKABLE QWidget* MchildAt(QWidget* o, int x1, int x2) const { return o->childAt(x1, x2); }
    Q_INVOKABLE QWidget* MchildAt(QWidget* o, const QPoint& x1) const { return o->childAt(x1); }
    Q_INVOKABLE QRect MchildrenRect(QWidget* o) const { return o->childrenRect(); }
    Q_INVOKABLE QRegion MchildrenRegion(QWidget* o) const { return o->childrenRegion(); }
    Q_INVOKABLE void MclearFocus(QWidget* o) { o->clearFocus(); }
    Q_INVOKABLE void MclearMask(QWidget* o) { o->clearMask(); }
    Q_INVOKABLE QMargins McontentsMargins(QWidget* o) const { return o->contentsMargins(); }
    Q_INVOKABLE QRect McontentsRect(QWidget* o) const { return o->contentsRect(); }
    Q_INVOKABLE int McontextMenuPolicy(QWidget* o) const { return o->contextMenuPolicy(); }
    Q_INVOKABLE QCursor Mcursor(QWidget* o) const { return o->cursor(); }
    Q_INVOKABLE void MensurePolished(QWidget* o) const { o->ensurePolished(); }
    Q_INVOKABLE int MfocusPolicy(QWidget* o) const { return o->focusPolicy(); }
    Q_INVOKABLE QWidget* MfocusProxy(QWidget* o) const { return o->focusProxy(); }
    Q_INVOKABLE QWidget* MfocusWidget(QWidget* o) const { return o->focusWidget(); }
    Q_INVOKABLE QFont Mfont(QWidget* o) const { return o->font(); }
    Q_INVOKABLE QFontMetrics MfontMetrics(QWidget* o) const { return o->fontMetrics(); }
    Q_INVOKABLE int MforegroundRole(QWidget* o) const { return o->foregroundRole(); }
    Q_INVOKABLE QRect MframeGeometry(QWidget* o) const { return o->frameGeometry(); }
    Q_INVOKABLE QSize MframeSize(QWidget* o) const { return o->frameSize(); }
    Q_INVOKABLE QRect Mgeometry(QWidget* o) const { return o->geometry(); }
    Q_INVOKABLE void MgrabGesture(QWidget* o, Qt::GestureType x1, Qt::GestureFlags x2 = Qt::GestureFlags()) { o->grabGesture(x1, x2); }
    Q_INVOKABLE void MgrabKeyboard(QWidget* o) { o->grabKeyboard(); }
    Q_INVOKABLE void MgrabMouse(QWidget* o) { o->grabMouse(); }
    Q_INVOKABLE void MgrabMouse(QWidget* o, const QCursor& x1) { o->grabMouse(x1); }
    Q_INVOKABLE int MgrabShortcut(QWidget* o, const QKeySequence& x1, Qt::ShortcutContext x2 = Qt::WindowShortcut) { return o->grabShortcut(x1, x2); }
    Q_INVOKABLE QGraphicsEffect* MgraphicsEffect(QWidget* o) const { return o->graphicsEffect(); }
    Q_INVOKABLE QGraphicsProxyWidget* MgraphicsProxyWidget(QWidget* o) const { return o->graphicsProxyWidget(); }
    Q_INVOKABLE bool MhasFocus(QWidget* o) const { return o->hasFocus(); }
    Q_INVOKABLE bool MhasMouseTracking(QWidget* o) const { return o->hasMouseTracking(); }
    Q_INVOKABLE int Mheight(QWidget* o) const { return o->height(); }
    Q_INVOKABLE int MheightForWidth(QWidget* o, int x1) const { return o->heightForWidth(x1); }
    Q_INVOKABLE QInputContext* MinputContext(QWidget* o) { return o->inputContext(); }
    Q_INVOKABLE int MinputMethodHints(QWidget* o) const { return o->inputMethodHints(); }
    Q_INVOKABLE QVariant MinputMethodQuery(QWidget* o, Qt::InputMethodQuery x1) const { return o->inputMethodQuery(x1); }
    Q_INVOKABLE void MinsertAction(QWidget* o, QAction* x1, QAction* x2) { o->insertAction(x1, x2); }
    Q_INVOKABLE void MinsertActions(QWidget* o, QAction* x1, QList<QAction*> x2) { o->insertActions(x1, x2); }
    Q_INVOKABLE bool MisActiveWindow(QWidget* o) const { return o->isActiveWindow(); }
    Q_INVOKABLE bool MisAncestorOf(QWidget* o, const QWidget* x1) const { return o->isAncestorOf(x1); }
    Q_INVOKABLE bool MisEnabled(QWidget* o) const { return o->isEnabled(); }
    Q_INVOKABLE bool MisEnabledTo(QWidget* o, QWidget* x1) const { return o->isEnabledTo(x1); }
    Q_INVOKABLE bool MisFullScreen(QWidget* o) const { return o->isFullScreen(); }
    Q_INVOKABLE bool MisHidden(QWidget* o) const { return o->isHidden(); }
    Q_INVOKABLE bool MisMaximized(QWidget* o) const { return o->isMaximized(); }
    Q_INVOKABLE bool MisMinimized(QWidget* o) const { return o->isMinimized(); }
    Q_INVOKABLE bool MisModal(QWidget* o) const { return o->isModal(); }
    Q_INVOKABLE bool MisVisible(QWidget* o) const { return o->isVisible(); }
    Q_INVOKABLE bool MisVisibleTo(QWidget* o, QWidget* x1) const { return o->isVisibleTo(x1); }
    Q_INVOKABLE bool MisWindow(QWidget* o) const { return o->isWindow(); }
    Q_INVOKABLE bool MisWindowModified(QWidget* o) const { return o->isWindowModified(); }
    Q_INVOKABLE QLayout* Mlayout(QWidget* o) const { return o->layout(); }
    Q_INVOKABLE int MlayoutDirection(QWidget* o) const { return o->layoutDirection(); }
    Q_INVOKABLE QLocale Mlocale(QWidget* o) const { return o->locale(); }
    Q_INVOKABLE QPoint MmapFrom(QWidget* o, QWidget* x1, const QPoint& x2) const { return o->mapFrom(x1, x2); }
    Q_INVOKABLE QPoint MmapFromGlobal(QWidget* o, const QPoint& x1) const { return o->mapFromGlobal(x1); }
    Q_INVOKABLE QPoint MmapFromParent(QWidget* o, const QPoint& x1) const { return o->mapFromParent(x1); }
    Q_INVOKABLE QPoint MmapTo(QWidget* o, QWidget* x1, const QPoint& x2) const { return o->mapTo(x1, x2); }
    Q_INVOKABLE QPoint MmapToGlobal(QWidget* o, const QPoint& x1) const { return o->mapToGlobal(x1); }
    Q_INVOKABLE QPoint MmapToParent(QWidget* o, const QPoint& x1) const { return o->mapToParent(x1); }
    Q_INVOKABLE QRegion Mmask(QWidget* o) const { return o->mask(); }
    Q_INVOKABLE int MmaximumHeight(QWidget* o) const { return o->maximumHeight(); }
    Q_INVOKABLE QSize MmaximumSize(QWidget* o) const { return o->maximumSize(); }
    Q_INVOKABLE int MmaximumWidth(QWidget* o) const { return o->maximumWidth(); }
    Q_INVOKABLE int MminimumHeight(QWidget* o) const { return o->minimumHeight(); }
    Q_INVOKABLE QSize MminimumSize(QWidget* o) const { return o->minimumSize(); }
    Q_INVOKABLE QSize MminimumSizeHint(QWidget* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE int MminimumWidth(QWidget* o) const { return o->minimumWidth(); }
    Q_INVOKABLE void Mmove(QWidget* o, const QPoint& x1) { o->move(x1); }
    Q_INVOKABLE void Mmove(QWidget* o, int x1, int x2) { o->move(x1, x2); }
    Q_INVOKABLE QWidget* MnativeParentWidget(QWidget* o) const { return o->nativeParentWidget(); }
    Q_INVOKABLE QWidget* MnextInFocusChain(QWidget* o) const { return o->nextInFocusChain(); }
    Q_INVOKABLE QRect MnormalGeometry(QWidget* o) const { return o->normalGeometry(); }
    Q_INVOKABLE void MoverrideWindowFlags(QWidget* o, Qt::WindowFlags x1) { o->overrideWindowFlags(x1); }
    Q_INVOKABLE QPalette Mpalette(QWidget* o) const { return o->palette(); }
    Q_INVOKABLE QWidget* MparentWidget(QWidget* o) const { return o->parentWidget(); }
    Q_INVOKABLE QPoint Mpos(QWidget* o) const { return o->pos(); }
    Q_INVOKABLE QWidget* MpreviousInFocusChain(QWidget* o) const { return o->previousInFocusChain(); }
    Q_INVOKABLE QRect Mrect(QWidget* o) const { return o->rect(); }
    Q_INVOKABLE void MreleaseKeyboard(QWidget* o) { o->releaseKeyboard(); }
    Q_INVOKABLE void MreleaseMouse(QWidget* o) { o->releaseMouse(); }
    Q_INVOKABLE void MreleaseShortcut(QWidget* o, int x1) { o->releaseShortcut(x1); }
    Q_INVOKABLE void MremoveAction(QWidget* o, QAction* x1) { o->removeAction(x1); }
    Q_INVOKABLE void Mrepaint(QWidget* o, int x1, int x2, int x3, int x4) { o->repaint(x1, x2, x3, x4); }
    Q_INVOKABLE void Mrepaint(QWidget* o, const QRect& x1) { o->repaint(x1); }
    Q_INVOKABLE void Mrepaint(QWidget* o, const QRegion& x1) { o->repaint(x1); }
    Q_INVOKABLE void Mresize(QWidget* o, const QSize& x1) { o->resize(x1); }
    Q_INVOKABLE void Mresize(QWidget* o, int x1, int x2) { o->resize(x1, x2); }
    Q_INVOKABLE bool MrestoreGeometry(QWidget* o, const QByteArray& x1) { return o->restoreGeometry(x1); }
    Q_INVOKABLE QByteArray MsaveGeometry(QWidget* o) const { return o->saveGeometry(); }
    Q_INVOKABLE void Mscroll(QWidget* o, int x1, int x2) { o->scroll(x1, x2); }
    Q_INVOKABLE void Mscroll(QWidget* o, int x1, int x2, const QRect& x3) { o->scroll(x1, x2, x3); }
    Q_INVOKABLE void MsetAcceptDrops(QWidget* o, bool x1) { o->setAcceptDrops(x1); }
    Q_INVOKABLE void MsetAccessibleDescription(QWidget* o, const QString& x1) { o->setAccessibleDescription(x1); }
    Q_INVOKABLE void MsetAccessibleName(QWidget* o, const QString& x1) { o->setAccessibleName(x1); }
    Q_INVOKABLE void MsetAttribute(QWidget* o, Qt::WidgetAttribute x1, bool x2 = true) { o->setAttribute(x1, x2); }
    Q_INVOKABLE void MsetAutoFillBackground(QWidget* o, bool x1) { o->setAutoFillBackground(x1); }
    Q_INVOKABLE void MsetBackgroundRole(QWidget* o, QPalette::ColorRole x1) { o->setBackgroundRole(x1); }
    Q_INVOKABLE void MsetBaseSize(QWidget* o, const QSize& x1) { o->setBaseSize(x1); }
    Q_INVOKABLE void MsetBaseSize(QWidget* o, int x1, int x2) { o->setBaseSize(x1, x2); }
    Q_INVOKABLE void MsetContentsMargins(QWidget* o, int x1, int x2, int x3, int x4) { o->setContentsMargins(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetContentsMargins(QWidget* o, const QMargins& x1) { o->setContentsMargins(x1); }
    Q_INVOKABLE void MsetContextMenuPolicy(QWidget* o, Qt::ContextMenuPolicy x1) { o->setContextMenuPolicy(x1); }
    Q_INVOKABLE void MsetCursor(QWidget* o, const QCursor& x1) { o->setCursor(x1); }
    Q_INVOKABLE void MsetFixedHeight(QWidget* o, int x1) { o->setFixedHeight(x1); }
    Q_INVOKABLE void MsetFixedSize(QWidget* o, const QSize& x1) { o->setFixedSize(x1); }
    Q_INVOKABLE void MsetFixedSize(QWidget* o, int x1, int x2) { o->setFixedSize(x1, x2); }
    Q_INVOKABLE void MsetFixedWidth(QWidget* o, int x1) { o->setFixedWidth(x1); }
    Q_INVOKABLE void MsetFocus(QWidget* o, Qt::FocusReason x1) { o->setFocus(x1); }
    Q_INVOKABLE void MsetFocusPolicy(QWidget* o, Qt::FocusPolicy x1) { o->setFocusPolicy(x1); }
    Q_INVOKABLE void MsetFocusProxy(QWidget* o, QWidget* x1) { o->setFocusProxy(x1); }
    Q_INVOKABLE void MsetFont(QWidget* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetForegroundRole(QWidget* o, QPalette::ColorRole x1) { o->setForegroundRole(x1); }
    Q_INVOKABLE void MsetGeometry(QWidget* o, const QRect& x1) { o->setGeometry(x1); }
    Q_INVOKABLE void MsetGeometry(QWidget* o, int x1, int x2, int x3, int x4) { o->setGeometry(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetGraphicsEffect(QWidget* o, QGraphicsEffect* x1) { o->setGraphicsEffect(x1); }
    Q_INVOKABLE void MsetInputContext(QWidget* o, QInputContext* x1) { o->setInputContext(x1); }
    Q_INVOKABLE void MsetInputMethodHints(QWidget* o, Qt::InputMethodHints x1) { o->setInputMethodHints(x1); }
    Q_INVOKABLE void MsetLayout(QWidget* o, QLayout* x1) { o->setLayout(x1); }
    Q_INVOKABLE void MsetLayoutDirection(QWidget* o, Qt::LayoutDirection x1) { o->setLayoutDirection(x1); }
    Q_INVOKABLE void MsetLocale(QWidget* o, const QLocale& x1) { o->setLocale(x1); }
    Q_INVOKABLE void MsetMask(QWidget* o, const QBitmap& x1) { o->setMask(x1); }
    Q_INVOKABLE void MsetMask(QWidget* o, const QRegion& x1) { o->setMask(x1); }
    Q_INVOKABLE void MsetMaximumHeight(QWidget* o, int x1) { o->setMaximumHeight(x1); }
    Q_INVOKABLE void MsetMaximumSize(QWidget* o, const QSize& x1) { o->setMaximumSize(x1); }
    Q_INVOKABLE void MsetMaximumSize(QWidget* o, int x1, int x2) { o->setMaximumSize(x1, x2); }
    Q_INVOKABLE void MsetMaximumWidth(QWidget* o, int x1) { o->setMaximumWidth(x1); }
    Q_INVOKABLE void MsetMinimumHeight(QWidget* o, int x1) { o->setMinimumHeight(x1); }
    Q_INVOKABLE void MsetMinimumSize(QWidget* o, const QSize& x1) { o->setMinimumSize(x1); }
    Q_INVOKABLE void MsetMinimumSize(QWidget* o, int x1, int x2) { o->setMinimumSize(x1, x2); }
    Q_INVOKABLE void MsetMinimumWidth(QWidget* o, int x1) { o->setMinimumWidth(x1); }
    Q_INVOKABLE void MsetMouseTracking(QWidget* o, bool x1) { o->setMouseTracking(x1); }
    Q_INVOKABLE void MsetPalette(QWidget* o, const QPalette& x1) { o->setPalette(x1); }
    Q_INVOKABLE void MsetParent(QWidget* o, QWidget* x1) { o->setParent(x1); }
    Q_INVOKABLE void MsetParent(QWidget* o, QWidget* x1, Qt::WindowFlags x2) { o->setParent(x1, x2); }
    Q_INVOKABLE void MsetShortcutAutoRepeat(QWidget* o, int x1, bool x2 = true) { o->setShortcutAutoRepeat(x1, x2); }
    Q_INVOKABLE void MsetShortcutEnabled(QWidget* o, int x1, bool x2 = true) { o->setShortcutEnabled(x1, x2); }
    Q_INVOKABLE void MsetSizeIncrement(QWidget* o, const QSize& x1) { o->setSizeIncrement(x1); }
    Q_INVOKABLE void MsetSizeIncrement(QWidget* o, int x1, int x2) { o->setSizeIncrement(x1, x2); }
    Q_INVOKABLE void MsetSizePolicy(QWidget* o, QSizePolicy x1) { o->setSizePolicy(x1); }
    Q_INVOKABLE void MsetSizePolicy(QWidget* o, QSizePolicy::Policy x1, QSizePolicy::Policy x2) { o->setSizePolicy(x1, x2); }
    Q_INVOKABLE void MsetStatusTip(QWidget* o, const QString& x1) { o->setStatusTip(x1); }
    Q_INVOKABLE void MsetStyle(QWidget* o, QStyle* x1) { o->setStyle(x1); }
    Q_INVOKABLE void MsetToolTip(QWidget* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetUpdatesEnabled(QWidget* o, bool x1) { o->setUpdatesEnabled(x1); }
    Q_INVOKABLE void MsetWhatsThis(QWidget* o, const QString& x1) { o->setWhatsThis(x1); }
    Q_INVOKABLE void MsetWindowFilePath(QWidget* o, const QString& x1) { o->setWindowFilePath(x1); }
    Q_INVOKABLE void MsetWindowFlags(QWidget* o, Qt::WindowFlags x1) { o->setWindowFlags(x1); }
    Q_INVOKABLE void MsetWindowIcon(QWidget* o, const QIcon& x1) { o->setWindowIcon(x1); }
    Q_INVOKABLE void MsetWindowIconText(QWidget* o, const QString& x1) { o->setWindowIconText(x1); }
    Q_INVOKABLE void MsetWindowModality(QWidget* o, Qt::WindowModality x1) { o->setWindowModality(x1); }
    Q_INVOKABLE void MsetWindowOpacity(QWidget* o, qreal x1) { o->setWindowOpacity(x1); }
    Q_INVOKABLE void MsetWindowRole(QWidget* o, const QString& x1) { o->setWindowRole(x1); }
    Q_INVOKABLE void MsetWindowState(QWidget* o, Qt::WindowStates x1) { o->setWindowState(x1); }
    Q_INVOKABLE QSize Msize(QWidget* o) const { return o->size(); }
    Q_INVOKABLE QSize MsizeHint(QWidget* o) const { return o->sizeHint(); }
    Q_INVOKABLE QSize MsizeIncrement(QWidget* o) const { return o->sizeIncrement(); }
    Q_INVOKABLE QSizePolicy MsizePolicy(QWidget* o) const { return o->sizePolicy(); }
    Q_INVOKABLE void MstackUnder(QWidget* o, QWidget* x1) { o->stackUnder(x1); }
    Q_INVOKABLE QString MstatusTip(QWidget* o) const { return o->statusTip(); }
    Q_INVOKABLE QStyle* Mstyle(QWidget* o) const { return o->style(); }
    Q_INVOKABLE QString MstyleSheet(QWidget* o) const { return o->styleSheet(); }
    Q_INVOKABLE bool MtestAttribute(QWidget* o, Qt::WidgetAttribute x1) const { return o->testAttribute(x1); }
    Q_INVOKABLE QString MtoolTip(QWidget* o) const { return o->toolTip(); }
    Q_INVOKABLE bool MunderMouse(QWidget* o) const { return o->underMouse(); }
    Q_INVOKABLE void MungrabGesture(QWidget* o, Qt::GestureType x1) { o->ungrabGesture(x1); }
    Q_INVOKABLE void MunsetCursor(QWidget* o) { o->unsetCursor(); }
    Q_INVOKABLE void MunsetLayoutDirection(QWidget* o) { o->unsetLayoutDirection(); }
    Q_INVOKABLE void MunsetLocale(QWidget* o) { o->unsetLocale(); }
    Q_INVOKABLE void Mupdate(QWidget* o, int x1, int x2, int x3, int x4) { o->update(x1, x2, x3, x4); }
    Q_INVOKABLE void Mupdate(QWidget* o, const QRect& x1) { o->update(x1); }
    Q_INVOKABLE void Mupdate(QWidget* o, const QRegion& x1) { o->update(x1); }
    Q_INVOKABLE void MupdateGeometry(QWidget* o) { o->updateGeometry(); }
    Q_INVOKABLE bool MupdatesEnabled(QWidget* o) const { return o->updatesEnabled(); }
    Q_INVOKABLE QRegion MvisibleRegion(QWidget* o) const { return o->visibleRegion(); }
    Q_INVOKABLE QString MwhatsThis(QWidget* o) const { return o->whatsThis(); }
    Q_INVOKABLE int Mwidth(QWidget* o) const { return o->width(); }
    Q_INVOKABLE QWidget* Mwindow(QWidget* o) const { return o->window(); }
    Q_INVOKABLE QString MwindowFilePath(QWidget* o) const { return o->windowFilePath(); }
    Q_INVOKABLE int MwindowFlags(QWidget* o) const { return o->windowFlags(); }
    Q_INVOKABLE QIcon MwindowIcon(QWidget* o) const { return o->windowIcon(); }
    Q_INVOKABLE QString MwindowIconText(QWidget* o) const { return o->windowIconText(); }
    Q_INVOKABLE int MwindowModality(QWidget* o) const { return o->windowModality(); }
    Q_INVOKABLE qreal MwindowOpacity(QWidget* o) const { return o->windowOpacity(); }
    Q_INVOKABLE QString MwindowRole(QWidget* o) const { return o->windowRole(); }
    Q_INVOKABLE int MwindowState(QWidget* o) const { return o->windowState(); }
    Q_INVOKABLE QString MwindowTitle(QWidget* o) const { return o->windowTitle(); }
    Q_INVOKABLE int MwindowType(QWidget* o) const { return o->windowType(); }
    Q_INVOKABLE int Mx(QWidget* o) const { return o->x(); }
    Q_INVOKABLE int My(QWidget* o) const { return o->y(); }
    Q_INVOKABLE QWidget* SkeyboardGrabber() { return QWidget::keyboardGrabber(); }
    Q_INVOKABLE QWidget* SmouseGrabber() { return QWidget::mouseGrabber(); }
    Q_INVOKABLE void SsetTabOrder(QWidget* x1, QWidget* x2) { QWidget::setTabOrder(x1, x2); }
};

class Q110 : public Q108 { // QWizardPage
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LWizardPage(u, x1); }
    Q_INVOKABLE QString MbuttonText(QWizardPage* o, QWizard::WizardButton x1) const { return o->buttonText(x1); }
    Q_INVOKABLE void McleanupPage(QWizardPage* o) { o->cleanupPage(); }
    Q_INVOKABLE void MinitializePage(QWizardPage* o) { o->initializePage(); }
    Q_INVOKABLE bool MisCommitPage(QWizardPage* o) const { return o->isCommitPage(); }
    Q_INVOKABLE bool MisComplete(QWizardPage* o) const { return o->isComplete(); }
    Q_INVOKABLE bool MisFinalPage(QWizardPage* o) const { return o->isFinalPage(); }
    Q_INVOKABLE int MnextId(QWizardPage* o) const { return o->nextId(); }
    Q_INVOKABLE QPixmap Mpixmap(QWizardPage* o, QWizard::WizardPixmap x1) const { return o->pixmap(x1); }
    Q_INVOKABLE void MsetButtonText(QWizardPage* o, QWizard::WizardButton x1, const QString& x2) { o->setButtonText(x1, x2); }
    Q_INVOKABLE void MsetCommitPage(QWizardPage* o, bool x1) { o->setCommitPage(x1); }
    Q_INVOKABLE void MsetFinalPage(QWizardPage* o, bool x1) { o->setFinalPage(x1); }
    Q_INVOKABLE void MsetPixmap(QWizardPage* o, QWizard::WizardPixmap x1, const QPixmap& x2) { o->setPixmap(x1, x2); }
    Q_INVOKABLE void MsetSubTitle(QWizardPage* o, const QString& x1) { o->setSubTitle(x1); }
    Q_INVOKABLE void MsetTitle(QWizardPage* o, const QString& x1) { o->setTitle(x1); }
    Q_INVOKABLE QString MsubTitle(QWizardPage* o) const { return o->subTitle(); }
    Q_INVOKABLE QString Mtitle(QWizardPage* o) const { return o->title(); }
    Q_INVOKABLE bool MvalidatePage(QWizardPage* o) { return o->validatePage(); }
};

class Q111 : public Q108 { // QWorkspace
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LWorkspace(u, x1); }
    Q_INVOKABLE QWidget* MactiveWindow(QWorkspace* o) const { return o->activeWindow(); }
    Q_INVOKABLE QWidget* MaddWindow(QWorkspace* o, QWidget* x1, Qt::WindowFlags x2 = 0) { return o->addWindow(x1, x2); }
    Q_INVOKABLE QBrush Mbackground(QWorkspace* o) const { return o->background(); }
    Q_INVOKABLE bool MscrollBarsEnabled(QWorkspace* o) const { return o->scrollBarsEnabled(); }
    Q_INVOKABLE void MsetBackground(QWorkspace* o, const QBrush& x1) { o->setBackground(x1); }
    Q_INVOKABLE void MsetScrollBarsEnabled(QWorkspace* o, bool x1) { o->setScrollBarsEnabled(x1); }
    Q_INVOKABLE QWidgetList MwindowList(QWorkspace* o, QWorkspace::WindowOrder x1 = QWorkspace::CreationOrder) const { return o->windowList(x1); }
    Q_INVOKABLE QSize MsizeHint(QWorkspace* o) const { return o->sizeHint(); }
};

class Q1 : public Q108 { // QAbstractButton
    Q_OBJECT
public:
    Q_INVOKABLE bool MautoExclusive(QAbstractButton* o) const { return o->autoExclusive(); }
    Q_INVOKABLE bool MautoRepeat(QAbstractButton* o) const { return o->autoRepeat(); }
    Q_INVOKABLE int MautoRepeatDelay(QAbstractButton* o) const { return o->autoRepeatDelay(); }
    Q_INVOKABLE int MautoRepeatInterval(QAbstractButton* o) const { return o->autoRepeatInterval(); }
    Q_INVOKABLE QButtonGroup* Mgroup(QAbstractButton* o) const { return o->group(); }
    Q_INVOKABLE QIcon Micon(QAbstractButton* o) const { return o->icon(); }
    Q_INVOKABLE QSize MiconSize(QAbstractButton* o) const { return o->iconSize(); }
    Q_INVOKABLE bool MisCheckable(QAbstractButton* o) const { return o->isCheckable(); }
    Q_INVOKABLE bool MisChecked(QAbstractButton* o) const { return o->isChecked(); }
    Q_INVOKABLE bool MisDown(QAbstractButton* o) const { return o->isDown(); }
    Q_INVOKABLE void MsetAutoExclusive(QAbstractButton* o, bool x1) { o->setAutoExclusive(x1); }
    Q_INVOKABLE void MsetAutoRepeat(QAbstractButton* o, bool x1) { o->setAutoRepeat(x1); }
    Q_INVOKABLE void MsetAutoRepeatDelay(QAbstractButton* o, int x1) { o->setAutoRepeatDelay(x1); }
    Q_INVOKABLE void MsetAutoRepeatInterval(QAbstractButton* o, int x1) { o->setAutoRepeatInterval(x1); }
    Q_INVOKABLE void MsetCheckable(QAbstractButton* o, bool x1) { o->setCheckable(x1); }
    Q_INVOKABLE void MsetDown(QAbstractButton* o, bool x1) { o->setDown(x1); }
    Q_INVOKABLE void MsetIcon(QAbstractButton* o, const QIcon& x1) { o->setIcon(x1); }
    Q_INVOKABLE void MsetShortcut(QAbstractButton* o, const QKeySequence& x1) { o->setShortcut(x1); }
    Q_INVOKABLE void MsetText(QAbstractButton* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE QKeySequence Mshortcut(QAbstractButton* o) const { return o->shortcut(); }
    Q_INVOKABLE QString Mtext(QAbstractButton* o) const { return o->text(); }
};

class Q8 : public Q108 { // QAbstractSlider
    Q_OBJECT
public:
    Q_INVOKABLE bool MhasTracking(QAbstractSlider* o) const { return o->hasTracking(); }
    Q_INVOKABLE bool MinvertedAppearance(QAbstractSlider* o) const { return o->invertedAppearance(); }
    Q_INVOKABLE bool MinvertedControls(QAbstractSlider* o) const { return o->invertedControls(); }
    Q_INVOKABLE bool MisSliderDown(QAbstractSlider* o) const { return o->isSliderDown(); }
    Q_INVOKABLE int Mmaximum(QAbstractSlider* o) const { return o->maximum(); }
    Q_INVOKABLE int Mminimum(QAbstractSlider* o) const { return o->minimum(); }
    Q_INVOKABLE int Morientation(QAbstractSlider* o) const { return o->orientation(); }
    Q_INVOKABLE int MpageStep(QAbstractSlider* o) const { return o->pageStep(); }
    Q_INVOKABLE void MsetInvertedAppearance(QAbstractSlider* o, bool x1) { o->setInvertedAppearance(x1); }
    Q_INVOKABLE void MsetInvertedControls(QAbstractSlider* o, bool x1) { o->setInvertedControls(x1); }
    Q_INVOKABLE void MsetMaximum(QAbstractSlider* o, int x1) { o->setMaximum(x1); }
    Q_INVOKABLE void MsetMinimum(QAbstractSlider* o, int x1) { o->setMinimum(x1); }
    Q_INVOKABLE void MsetPageStep(QAbstractSlider* o, int x1) { o->setPageStep(x1); }
    Q_INVOKABLE void MsetRange(QAbstractSlider* o, int x1, int x2) { o->setRange(x1, x2); }
    Q_INVOKABLE void MsetSingleStep(QAbstractSlider* o, int x1) { o->setSingleStep(x1); }
    Q_INVOKABLE void MsetSliderDown(QAbstractSlider* o, bool x1) { o->setSliderDown(x1); }
    Q_INVOKABLE void MsetSliderPosition(QAbstractSlider* o, int x1) { o->setSliderPosition(x1); }
    Q_INVOKABLE void MsetTracking(QAbstractSlider* o, bool x1) { o->setTracking(x1); }
    Q_INVOKABLE int MsingleStep(QAbstractSlider* o) const { return o->singleStep(); }
    Q_INVOKABLE int MsliderPosition(QAbstractSlider* o) const { return o->sliderPosition(); }
    Q_INVOKABLE void MtriggerAction(QAbstractSlider* o, QAbstractSlider::SliderAction x1) { o->triggerAction(x1); }
    Q_INVOKABLE int Mvalue(QAbstractSlider* o) const { return o->value(); }
};

class Q9 : public Q108 { // QAbstractSpinBox
    Q_OBJECT
public:
    Q_INVOKABLE int Malignment(QAbstractSpinBox* o) const { return o->alignment(); }
    Q_INVOKABLE int MbuttonSymbols(QAbstractSpinBox* o) const { return o->buttonSymbols(); }
    Q_INVOKABLE int McorrectionMode(QAbstractSpinBox* o) const { return o->correctionMode(); }
    Q_INVOKABLE void Mfixup(QAbstractSpinBox* o, QString& x1) const { o->fixup(x1); }
    Q_INVOKABLE bool MhasAcceptableInput(QAbstractSpinBox* o) const { return o->hasAcceptableInput(); }
    Q_INVOKABLE bool MhasFrame(QAbstractSpinBox* o) const { return o->hasFrame(); }
    Q_INVOKABLE void MinterpretText(QAbstractSpinBox* o) { o->interpretText(); }
    Q_INVOKABLE bool MisAccelerated(QAbstractSpinBox* o) const { return o->isAccelerated(); }
    Q_INVOKABLE bool MisReadOnly(QAbstractSpinBox* o) const { return o->isReadOnly(); }
    Q_INVOKABLE bool MkeyboardTracking(QAbstractSpinBox* o) const { return o->keyboardTracking(); }
    Q_INVOKABLE void MsetAccelerated(QAbstractSpinBox* o, bool x1) { o->setAccelerated(x1); }
    Q_INVOKABLE void MsetAlignment(QAbstractSpinBox* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetButtonSymbols(QAbstractSpinBox* o, QAbstractSpinBox::ButtonSymbols x1) { o->setButtonSymbols(x1); }
    Q_INVOKABLE void MsetCorrectionMode(QAbstractSpinBox* o, QAbstractSpinBox::CorrectionMode x1) { o->setCorrectionMode(x1); }
    Q_INVOKABLE void MsetFrame(QAbstractSpinBox* o, bool x1) { o->setFrame(x1); }
    Q_INVOKABLE void MsetKeyboardTracking(QAbstractSpinBox* o, bool x1) { o->setKeyboardTracking(x1); }
    Q_INVOKABLE void MsetReadOnly(QAbstractSpinBox* o, bool x1) { o->setReadOnly(x1); }
    Q_INVOKABLE void MsetSpecialValueText(QAbstractSpinBox* o, const QString& x1) { o->setSpecialValueText(x1); }
    Q_INVOKABLE void MsetWrapping(QAbstractSpinBox* o, bool x1) { o->setWrapping(x1); }
    Q_INVOKABLE QString MspecialValueText(QAbstractSpinBox* o) const { return o->specialValueText(); }
    Q_INVOKABLE void MstepBy(QAbstractSpinBox* o, int x1) { o->stepBy(x1); }
    Q_INVOKABLE QString Mtext(QAbstractSpinBox* o) const { return o->text(); }
    Q_INVOKABLE int Mvalidate(QAbstractSpinBox* o, QString& x1, int& x2) const { return o->validate(x1, x2); }
    Q_INVOKABLE bool Mwrapping(QAbstractSpinBox* o) const { return o->wrapping(); }
    Q_INVOKABLE bool Mevent(QAbstractSpinBox* o, QEvent* x1) { return o->event(x1); }
    Q_INVOKABLE QVariant MinputMethodQuery(QAbstractSpinBox* o, Qt::InputMethodQuery x1) const { return o->inputMethodQuery(x1); }
    Q_INVOKABLE QSize MminimumSizeHint(QAbstractSpinBox* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QAbstractSpinBox* o) const { return o->sizeHint(); }
};

class Q13 : public Q23 { // QApplication
    Q_OBJECT
public:
    Q_INVOKABLE void McommitData(QApplication* o, QSessionManager& x1) { o->commitData(x1); }
    Q_INVOKABLE QInputContext* MinputContext(QApplication* o) const { return o->inputContext(); }
    Q_INVOKABLE bool MisSessionRestored(QApplication* o) const { return o->isSessionRestored(); }
    Q_INVOKABLE void MsaveState(QApplication* o, QSessionManager& x1) { o->saveState(x1); }
    Q_INVOKABLE QString MsessionId(QApplication* o) const { return o->sessionId(); }
    Q_INVOKABLE QString MsessionKey(QApplication* o) const { return o->sessionKey(); }
    Q_INVOKABLE void MsetInputContext(QApplication* o, QInputContext* x1) { o->setInputContext(x1); }
    Q_INVOKABLE QString MstyleSheet(QApplication* o) const { return o->styleSheet(); }
    Q_INVOKABLE bool Mnotify(QApplication* o, QObject* x1, QEvent* x2) { return o->notify(x1, x2); }
    Q_INVOKABLE QWidget* SactiveModalWidget() { return QApplication::activeModalWidget(); }
    Q_INVOKABLE QWidget* SactivePopupWidget() { return QApplication::activePopupWidget(); }
    Q_INVOKABLE QWidget* SactiveWindow() { return QApplication::activeWindow(); }
    Q_INVOKABLE void Salert(QWidget* x1, int x2 = 0) { QApplication::alert(x1, x2); }
    Q_INVOKABLE QWidgetList SallWidgets() { return QApplication::allWidgets(); }
    Q_INVOKABLE void Sbeep() { QApplication::beep(); }
    Q_INVOKABLE void SchangeOverrideCursor(const QCursor& x1) { QApplication::changeOverrideCursor(x1); }
    Q_INVOKABLE QClipboard* Sclipboard() { return QApplication::clipboard(); }
    Q_INVOKABLE int ScolorSpec() { return QApplication::colorSpec(); }
    Q_INVOKABLE int ScursorFlashTime() { return QApplication::cursorFlashTime(); }
    Q_INVOKABLE QDesktopWidget* Sdesktop() { return QApplication::desktop(); }
    Q_INVOKABLE bool SdesktopSettingsAware() { return QApplication::desktopSettingsAware(); }
    Q_INVOKABLE int SdoubleClickInterval() { return QApplication::doubleClickInterval(); }
    Q_INVOKABLE int Sexec() { return QApplication::exec(); }
    Q_INVOKABLE QWidget* SfocusWidget() { return QApplication::focusWidget(); }
    Q_INVOKABLE QFont Sfont() { return QApplication::font(); }
    Q_INVOKABLE QFont Sfont(const QWidget* x1) { return QApplication::font(x1); }
    Q_INVOKABLE QFont Sfont(const char* x1) { return QApplication::font(x1); }
    Q_INVOKABLE QFontMetrics SfontMetrics() { return QApplication::fontMetrics(); }
    Q_INVOKABLE QSize SglobalStrut() { return QApplication::globalStrut(); }
    Q_INVOKABLE bool SisEffectEnabled(Qt::UIEffect x1) { return QApplication::isEffectEnabled(x1); }
    Q_INVOKABLE bool SisLeftToRight() { return QApplication::isLeftToRight(); }
    Q_INVOKABLE bool SisRightToLeft() { return QApplication::isRightToLeft(); }
    Q_INVOKABLE int SkeyboardInputDirection() { return QApplication::keyboardInputDirection(); }
    Q_INVOKABLE int SkeyboardInputInterval() { return QApplication::keyboardInputInterval(); }
    Q_INVOKABLE QLocale SkeyboardInputLocale() { return QApplication::keyboardInputLocale(); }
    Q_INVOKABLE int SkeyboardModifiers() { return QApplication::keyboardModifiers(); }
    Q_INVOKABLE int SlayoutDirection() { return QApplication::layoutDirection(); }
    Q_INVOKABLE int SmouseButtons() { return QApplication::mouseButtons(); }
    Q_INVOKABLE QCursor* SoverrideCursor() { return QApplication::overrideCursor(); }
    Q_INVOKABLE QPalette Spalette() { return QApplication::palette(); }
    Q_INVOKABLE QPalette Spalette(const QWidget* x1) { return QApplication::palette(x1); }
    Q_INVOKABLE QPalette Spalette(const char* x1) { return QApplication::palette(x1); }
    Q_INVOKABLE bool SquitOnLastWindowClosed() { return QApplication::quitOnLastWindowClosed(); }
    Q_INVOKABLE void SrestoreOverrideCursor() { QApplication::restoreOverrideCursor(); }
    Q_INVOKABLE void SsetActiveWindow(QWidget* x1) { QApplication::setActiveWindow(x1); }
    Q_INVOKABLE void SsetColorSpec(int x1) { QApplication::setColorSpec(x1); }
    Q_INVOKABLE void SsetCursorFlashTime(int x1) { QApplication::setCursorFlashTime(x1); }
    Q_INVOKABLE void SsetDesktopSettingsAware(bool x1) { QApplication::setDesktopSettingsAware(x1); }
    Q_INVOKABLE void SsetDoubleClickInterval(int x1) { QApplication::setDoubleClickInterval(x1); }
    Q_INVOKABLE void SsetEffectEnabled(Qt::UIEffect x1, bool x2 = true) { QApplication::setEffectEnabled(x1, x2); }
    Q_INVOKABLE void SsetFont(const QFont& x1, const char* x2 = 0) { QApplication::setFont(x1, x2); }
    Q_INVOKABLE void SsetGlobalStrut(const QSize& x1) { QApplication::setGlobalStrut(x1); }
    Q_INVOKABLE void SsetGraphicsSystem(const QString& x1) { QApplication::setGraphicsSystem(x1); }
    Q_INVOKABLE void SsetKeyboardInputInterval(int x1) { QApplication::setKeyboardInputInterval(x1); }
    Q_INVOKABLE void SsetLayoutDirection(Qt::LayoutDirection x1) { QApplication::setLayoutDirection(x1); }
    Q_INVOKABLE void SsetOverrideCursor(const QCursor& x1) { QApplication::setOverrideCursor(x1); }
    Q_INVOKABLE void SsetPalette(const QPalette& x1, const char* x2 = 0) { QApplication::setPalette(x1, x2); }
    Q_INVOKABLE void SsetQuitOnLastWindowClosed(bool x1) { QApplication::setQuitOnLastWindowClosed(x1); }
    Q_INVOKABLE void SsetStartDragDistance(int x1) { QApplication::setStartDragDistance(x1); }
    Q_INVOKABLE void SsetStartDragTime(int x1) { QApplication::setStartDragTime(x1); }
    Q_INVOKABLE void SsetStyle(QStyle* x1) { QApplication::setStyle(x1); }
    Q_INVOKABLE QStyle* SsetStyle(const QString& x1) { return QApplication::setStyle(x1); }
    Q_INVOKABLE void SsetWheelScrollLines(int x1) { QApplication::setWheelScrollLines(x1); }
    Q_INVOKABLE void SsetWindowIcon(const QIcon& x1) { QApplication::setWindowIcon(x1); }
    Q_INVOKABLE int SstartDragDistance() { return QApplication::startDragDistance(); }
    Q_INVOKABLE int SstartDragTime() { return QApplication::startDragTime(); }
    Q_INVOKABLE QStyle* Sstyle() { return QApplication::style(); }
    Q_INVOKABLE void SsyncX() { QApplication::syncX(); }
    Q_INVOKABLE QWidget* StopLevelAt(const QPoint& x1) { return QApplication::topLevelAt(x1); }
    Q_INVOKABLE QWidget* StopLevelAt(int x1, int x2) { return QApplication::topLevelAt(x1, x2); }
    Q_INVOKABLE QWidgetList StopLevelWidgets() { return QApplication::topLevelWidgets(); }
    Q_INVOKABLE int Stype() { return QApplication::type(); }
    Q_INVOKABLE int SwheelScrollLines() { return QApplication::wheelScrollLines(); }
    Q_INVOKABLE QWidget* SwidgetAt(const QPoint& x1) { return QApplication::widgetAt(x1); }
    Q_INVOKABLE QWidget* SwidgetAt(int x1, int x2) { return QApplication::widgetAt(x1, x2); }
    Q_INVOKABLE QIcon SwindowIcon() { return QApplication::windowIcon(); }
};

class Q14 : public Q55 { // QBoxLayout
    Q_OBJECT
public:
    Q_INVOKABLE void MaddLayout(QBoxLayout* o, QLayout* x1, int x2 = 0) { o->addLayout(x1, x2); }
    Q_INVOKABLE void MaddSpacerItem(QBoxLayout* o, QSpacerItem* x1) { o->addSpacerItem(x1); }
    Q_INVOKABLE void MaddSpacing(QBoxLayout* o, int x1) { o->addSpacing(x1); }
    Q_INVOKABLE void MaddStretch(QBoxLayout* o, int x1 = 0) { o->addStretch(x1); }
    Q_INVOKABLE void MaddStrut(QBoxLayout* o, int x1) { o->addStrut(x1); }
    Q_INVOKABLE void MaddWidget(QBoxLayout* o, QWidget* x1, int x2 = 0, Qt::Alignment x3 = 0) { o->addWidget(x1, x2, x3); }
    Q_INVOKABLE int Mdirection(QBoxLayout* o) const { return o->direction(); }
    Q_INVOKABLE void MinsertLayout(QBoxLayout* o, int x1, QLayout* x2, int x3 = 0) { o->insertLayout(x1, x2, x3); }
    Q_INVOKABLE void MinsertSpacerItem(QBoxLayout* o, int x1, QSpacerItem* x2) { o->insertSpacerItem(x1, x2); }
    Q_INVOKABLE void MinsertSpacing(QBoxLayout* o, int x1, int x2) { o->insertSpacing(x1, x2); }
    Q_INVOKABLE void MinsertStretch(QBoxLayout* o, int x1, int x2 = 0) { o->insertStretch(x1, x2); }
    Q_INVOKABLE void MinsertWidget(QBoxLayout* o, int x1, QWidget* x2, int x3 = 0, Qt::Alignment x4 = 0) { o->insertWidget(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetDirection(QBoxLayout* o, QBoxLayout::Direction x1) { o->setDirection(x1); }
    Q_INVOKABLE void MsetSpacing(QBoxLayout* o, int x1) { o->setSpacing(x1); }
    Q_INVOKABLE void MsetStretch(QBoxLayout* o, int x1, int x2) { o->setStretch(x1, x2); }
    Q_INVOKABLE bool MsetStretchFactor(QBoxLayout* o, QWidget* x1, int x2) { return o->setStretchFactor(x1, x2); }
    Q_INVOKABLE bool MsetStretchFactor(QBoxLayout* o, QLayout* x1, int x2) { return o->setStretchFactor(x1, x2); }
    Q_INVOKABLE int Mspacing(QBoxLayout* o) const { return o->spacing(); }
    Q_INVOKABLE int Mstretch(QBoxLayout* o, int x1) const { return o->stretch(x1); }
    Q_INVOKABLE void MaddItem(QBoxLayout* o, QLayoutItem* x1) { o->addItem(x1); }
    Q_INVOKABLE int Mcount(QBoxLayout* o) const { return o->count(); }
    Q_INVOKABLE int MexpandingDirections(QBoxLayout* o) const { return o->expandingDirections(); }
    Q_INVOKABLE bool MhasHeightForWidth(QBoxLayout* o) const { return o->hasHeightForWidth(); }
    Q_INVOKABLE int MheightForWidth(QBoxLayout* o, int x1) const { return o->heightForWidth(x1); }
    Q_INVOKABLE void Minvalidate(QBoxLayout* o) { o->invalidate(); }
    Q_INVOKABLE QLayoutItem* MitemAt(QBoxLayout* o, int x1) const { return o->itemAt(x1); }
    Q_INVOKABLE QSize MmaximumSize(QBoxLayout* o) const { return o->maximumSize(); }
    Q_INVOKABLE int MminimumHeightForWidth(QBoxLayout* o, int x1) const { return o->minimumHeightForWidth(x1); }
    Q_INVOKABLE QSize MminimumSize(QBoxLayout* o) const { return o->minimumSize(); }
    Q_INVOKABLE void MsetGeometry(QBoxLayout* o, const QRect& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSize MsizeHint(QBoxLayout* o) const { return o->sizeHint(); }
    Q_INVOKABLE QLayoutItem* MtakeAt(QBoxLayout* o, int x1) { return o->takeAt(x1); }
};

class Q16 : public Q108 { // QCalendarWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LCalendarWidget(u, x1); }
    Q_INVOKABLE int MdateEditAcceptDelay(QCalendarWidget* o) const { return o->dateEditAcceptDelay(); }
    Q_INVOKABLE QTextCharFormat MdateTextFormat(QCalendarWidget* o, const QDate& x1) const { return o->dateTextFormat(x1); }
    Q_INVOKABLE int MfirstDayOfWeek(QCalendarWidget* o) const { return o->firstDayOfWeek(); }
    Q_INVOKABLE QTextCharFormat MheaderTextFormat(QCalendarWidget* o) const { return o->headerTextFormat(); }
    Q_INVOKABLE int MhorizontalHeaderFormat(QCalendarWidget* o) const { return o->horizontalHeaderFormat(); }
    Q_INVOKABLE bool MisDateEditEnabled(QCalendarWidget* o) const { return o->isDateEditEnabled(); }
    Q_INVOKABLE bool MisGridVisible(QCalendarWidget* o) const { return o->isGridVisible(); }
    Q_INVOKABLE bool MisNavigationBarVisible(QCalendarWidget* o) const { return o->isNavigationBarVisible(); }
    Q_INVOKABLE QDate MmaximumDate(QCalendarWidget* o) const { return o->maximumDate(); }
    Q_INVOKABLE QDate MminimumDate(QCalendarWidget* o) const { return o->minimumDate(); }
    Q_INVOKABLE int MmonthShown(QCalendarWidget* o) const { return o->monthShown(); }
    Q_INVOKABLE QDate MselectedDate(QCalendarWidget* o) const { return o->selectedDate(); }
    Q_INVOKABLE int MselectionMode(QCalendarWidget* o) const { return o->selectionMode(); }
    Q_INVOKABLE void MsetDateEditAcceptDelay(QCalendarWidget* o, int x1) { o->setDateEditAcceptDelay(x1); }
    Q_INVOKABLE void MsetDateEditEnabled(QCalendarWidget* o, bool x1) { o->setDateEditEnabled(x1); }
    Q_INVOKABLE void MsetDateTextFormat(QCalendarWidget* o, const QDate& x1, const QTextCharFormat& x2) { o->setDateTextFormat(x1, x2); }
    Q_INVOKABLE void MsetFirstDayOfWeek(QCalendarWidget* o, Qt::DayOfWeek x1) { o->setFirstDayOfWeek(x1); }
    Q_INVOKABLE void MsetHeaderTextFormat(QCalendarWidget* o, const QTextCharFormat& x1) { o->setHeaderTextFormat(x1); }
    Q_INVOKABLE void MsetHorizontalHeaderFormat(QCalendarWidget* o, QCalendarWidget::HorizontalHeaderFormat x1) { o->setHorizontalHeaderFormat(x1); }
    Q_INVOKABLE void MsetMaximumDate(QCalendarWidget* o, const QDate& x1) { o->setMaximumDate(x1); }
    Q_INVOKABLE void MsetMinimumDate(QCalendarWidget* o, const QDate& x1) { o->setMinimumDate(x1); }
    Q_INVOKABLE void MsetSelectionMode(QCalendarWidget* o, QCalendarWidget::SelectionMode x1) { o->setSelectionMode(x1); }
    Q_INVOKABLE void MsetVerticalHeaderFormat(QCalendarWidget* o, QCalendarWidget::VerticalHeaderFormat x1) { o->setVerticalHeaderFormat(x1); }
    Q_INVOKABLE void MsetWeekdayTextFormat(QCalendarWidget* o, Qt::DayOfWeek x1, const QTextCharFormat& x2) { o->setWeekdayTextFormat(x1, x2); }
    Q_INVOKABLE int MverticalHeaderFormat(QCalendarWidget* o) const { return o->verticalHeaderFormat(); }
    Q_INVOKABLE QTextCharFormat MweekdayTextFormat(QCalendarWidget* o, Qt::DayOfWeek x1) const { return o->weekdayTextFormat(x1); }
    Q_INVOKABLE int MyearShown(QCalendarWidget* o) const { return o->yearShown(); }
    Q_INVOKABLE QSize MminimumSizeHint(QCalendarWidget* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QCalendarWidget* o) const { return o->sizeHint(); }
};

class Q17 : public Q1 { // QCheckBox
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LCheckBox(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0) { return new LCheckBox(u, x1, x2); }
    Q_INVOKABLE int McheckState(QCheckBox* o) const { return o->checkState(); }
    Q_INVOKABLE bool MisTristate(QCheckBox* o) const { return o->isTristate(); }
    Q_INVOKABLE void MsetCheckState(QCheckBox* o, Qt::CheckState x1) { o->setCheckState(x1); }
    Q_INVOKABLE void MsetTristate(QCheckBox* o, bool x1 = true) { o->setTristate(x1); }
    Q_INVOKABLE QSize MsizeHint(QCheckBox* o) const { return o->sizeHint(); }
};

class Q20 : public Q108 { // QComboBox
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LComboBox(u, x1); }
    Q_INVOKABLE void MaddItem(QComboBox* o, const QString& x1, const QVariant& x2 = QVariant()) { o->addItem(x1, x2); }
    Q_INVOKABLE void MaddItem(QComboBox* o, const QIcon& x1, const QString& x2, const QVariant& x3 = QVariant()) { o->addItem(x1, x2, x3); }
    Q_INVOKABLE void MaddItems(QComboBox* o, const QStringList& x1) { o->addItems(x1); }
    Q_INVOKABLE QCompleter* Mcompleter(QComboBox* o) const { return o->completer(); }
    Q_INVOKABLE int Mcount(QComboBox* o) const { return o->count(); }
    Q_INVOKABLE int McurrentIndex(QComboBox* o) const { return o->currentIndex(); }
    Q_INVOKABLE QString McurrentText(QComboBox* o) const { return o->currentText(); }
    Q_INVOKABLE bool MduplicatesEnabled(QComboBox* o) const { return o->duplicatesEnabled(); }
    Q_INVOKABLE int MfindData(QComboBox* o, const QVariant& x1, int x2 = Qt::UserRole, Qt::MatchFlags x3 = Qt::MatchExactly|Qt::MatchCaseSensitive) const { return o->findData(x1, x2, x3); }
    Q_INVOKABLE int MfindText(QComboBox* o, const QString& x1, Qt::MatchFlags x2 = Qt::MatchExactly|Qt::MatchCaseSensitive) const { return o->findText(x1, x2); }
    Q_INVOKABLE bool MhasFrame(QComboBox* o) const { return o->hasFrame(); }
    Q_INVOKABLE void MhidePopup(QComboBox* o) { o->hidePopup(); }
    Q_INVOKABLE QSize MiconSize(QComboBox* o) const { return o->iconSize(); }
    Q_INVOKABLE void MinsertItem(QComboBox* o, int x1, const QString& x2, const QVariant& x3 = QVariant()) { o->insertItem(x1, x2, x3); }
    Q_INVOKABLE void MinsertItem(QComboBox* o, int x1, const QIcon& x2, const QString& x3, const QVariant& x4 = QVariant()) { o->insertItem(x1, x2, x3, x4); }
    Q_INVOKABLE void MinsertItems(QComboBox* o, int x1, const QStringList& x2) { o->insertItems(x1, x2); }
    Q_INVOKABLE int MinsertPolicy(QComboBox* o) const { return o->insertPolicy(); }
    Q_INVOKABLE void MinsertSeparator(QComboBox* o, int x1) { o->insertSeparator(x1); }
    Q_INVOKABLE bool MisEditable(QComboBox* o) const { return o->isEditable(); }
    Q_INVOKABLE QVariant MitemData(QComboBox* o, int x1, int x2 = Qt::UserRole) const { return o->itemData(x1, x2); }
    Q_INVOKABLE QAbstractItemDelegate* MitemDelegate(QComboBox* o) const { return o->itemDelegate(); }
    Q_INVOKABLE QIcon MitemIcon(QComboBox* o, int x1) const { return o->itemIcon(x1); }
    Q_INVOKABLE QString MitemText(QComboBox* o, int x1) const { return o->itemText(x1); }
    Q_INVOKABLE QLineEdit* MlineEdit(QComboBox* o) const { return o->lineEdit(); }
    Q_INVOKABLE int MmaxCount(QComboBox* o) const { return o->maxCount(); }
    Q_INVOKABLE int MmaxVisibleItems(QComboBox* o) const { return o->maxVisibleItems(); }
    Q_INVOKABLE int MminimumContentsLength(QComboBox* o) const { return o->minimumContentsLength(); }
    Q_INVOKABLE QAbstractItemModel* Mmodel(QComboBox* o) const { return o->model(); }
    Q_INVOKABLE int MmodelColumn(QComboBox* o) const { return o->modelColumn(); }
    Q_INVOKABLE void MremoveItem(QComboBox* o, int x1) { o->removeItem(x1); }
    Q_INVOKABLE QModelIndex MrootModelIndex(QComboBox* o) const { return o->rootModelIndex(); }
    Q_INVOKABLE void MsetCompleter(QComboBox* o, QCompleter* x1) { o->setCompleter(x1); }
    Q_INVOKABLE void MsetDuplicatesEnabled(QComboBox* o, bool x1) { o->setDuplicatesEnabled(x1); }
    Q_INVOKABLE void MsetEditable(QComboBox* o, bool x1) { o->setEditable(x1); }
    Q_INVOKABLE void MsetFrame(QComboBox* o, bool x1) { o->setFrame(x1); }
    Q_INVOKABLE void MsetIconSize(QComboBox* o, const QSize& x1) { o->setIconSize(x1); }
    Q_INVOKABLE void MsetInsertPolicy(QComboBox* o, QComboBox::InsertPolicy x1) { o->setInsertPolicy(x1); }
    Q_INVOKABLE void MsetItemData(QComboBox* o, int x1, const QVariant& x2, int x3 = Qt::UserRole) { o->setItemData(x1, x2, x3); }
    Q_INVOKABLE void MsetItemDelegate(QComboBox* o, QAbstractItemDelegate* x1) { o->setItemDelegate(x1); }
    Q_INVOKABLE void MsetItemIcon(QComboBox* o, int x1, const QIcon& x2) { o->setItemIcon(x1, x2); }
    Q_INVOKABLE void MsetItemText(QComboBox* o, int x1, const QString& x2) { o->setItemText(x1, x2); }
    Q_INVOKABLE void MsetLineEdit(QComboBox* o, QLineEdit* x1) { o->setLineEdit(x1); }
    Q_INVOKABLE void MsetMaxCount(QComboBox* o, int x1) { o->setMaxCount(x1); }
    Q_INVOKABLE void MsetMaxVisibleItems(QComboBox* o, int x1) { o->setMaxVisibleItems(x1); }
    Q_INVOKABLE void MsetMinimumContentsLength(QComboBox* o, int x1) { o->setMinimumContentsLength(x1); }
    Q_INVOKABLE void MsetModel(QComboBox* o, QAbstractItemModel* x1) { o->setModel(x1); }
    Q_INVOKABLE void MsetModelColumn(QComboBox* o, int x1) { o->setModelColumn(x1); }
    Q_INVOKABLE void MsetRootModelIndex(QComboBox* o, const QModelIndex& x1) { o->setRootModelIndex(x1); }
    Q_INVOKABLE void MsetSizeAdjustPolicy(QComboBox* o, QComboBox::SizeAdjustPolicy x1) { o->setSizeAdjustPolicy(x1); }
    Q_INVOKABLE void MsetValidator(QComboBox* o, const QValidator* x1) { o->setValidator(x1); }
    Q_INVOKABLE void MsetView(QComboBox* o, QAbstractItemView* x1) { o->setView(x1); }
    Q_INVOKABLE void MshowPopup(QComboBox* o) { o->showPopup(); }
    Q_INVOKABLE int MsizeAdjustPolicy(QComboBox* o) const { return o->sizeAdjustPolicy(); }
    Q_INVOKABLE const QValidator* Mvalidator(QComboBox* o) const { return o->validator(); }
    Q_INVOKABLE QAbstractItemView* Mview(QComboBox* o) const { return o->view(); }
    Q_INVOKABLE bool Mevent(QComboBox* o, QEvent* x1) { return o->event(x1); }
    Q_INVOKABLE QSize MminimumSizeHint(QComboBox* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QComboBox* o) const { return o->sizeHint(); }
};

class Q25 : public Q9 { // QDateTimeEdit
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LDateTimeEdit(u, x1); }
    Q_INVOKABLE void* C(uint u, const QDateTime& x1, QWidget* x2 = 0) { return new LDateTimeEdit(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QDate& x1, QWidget* x2 = 0) { return new LDateTimeEdit(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QTime& x1, QWidget* x2 = 0) { return new LDateTimeEdit(u, x1, x2); }
    Q_INVOKABLE bool McalendarPopup(QDateTimeEdit* o) const { return o->calendarPopup(); }
    Q_INVOKABLE QCalendarWidget* McalendarWidget(QDateTimeEdit* o) const { return o->calendarWidget(); }
    Q_INVOKABLE void MclearMaximumDate(QDateTimeEdit* o) { o->clearMaximumDate(); }
    Q_INVOKABLE void MclearMaximumDateTime(QDateTimeEdit* o) { o->clearMaximumDateTime(); }
    Q_INVOKABLE void MclearMaximumTime(QDateTimeEdit* o) { o->clearMaximumTime(); }
    Q_INVOKABLE void MclearMinimumDate(QDateTimeEdit* o) { o->clearMinimumDate(); }
    Q_INVOKABLE void MclearMinimumDateTime(QDateTimeEdit* o) { o->clearMinimumDateTime(); }
    Q_INVOKABLE void MclearMinimumTime(QDateTimeEdit* o) { o->clearMinimumTime(); }
    Q_INVOKABLE int McurrentSection(QDateTimeEdit* o) const { return o->currentSection(); }
    Q_INVOKABLE int McurrentSectionIndex(QDateTimeEdit* o) const { return o->currentSectionIndex(); }
    Q_INVOKABLE QDate Mdate(QDateTimeEdit* o) const { return o->date(); }
    Q_INVOKABLE QDateTime MdateTime(QDateTimeEdit* o) const { return o->dateTime(); }
    Q_INVOKABLE QString MdisplayFormat(QDateTimeEdit* o) const { return o->displayFormat(); }
    Q_INVOKABLE int MdisplayedSections(QDateTimeEdit* o) const { return o->displayedSections(); }
    Q_INVOKABLE QDate MmaximumDate(QDateTimeEdit* o) const { return o->maximumDate(); }
    Q_INVOKABLE QDateTime MmaximumDateTime(QDateTimeEdit* o) const { return o->maximumDateTime(); }
    Q_INVOKABLE QTime MmaximumTime(QDateTimeEdit* o) const { return o->maximumTime(); }
    Q_INVOKABLE QDate MminimumDate(QDateTimeEdit* o) const { return o->minimumDate(); }
    Q_INVOKABLE QDateTime MminimumDateTime(QDateTimeEdit* o) const { return o->minimumDateTime(); }
    Q_INVOKABLE QTime MminimumTime(QDateTimeEdit* o) const { return o->minimumTime(); }
    Q_INVOKABLE int MsectionAt(QDateTimeEdit* o, int x1) const { return o->sectionAt(x1); }
    Q_INVOKABLE int MsectionCount(QDateTimeEdit* o) const { return o->sectionCount(); }
    Q_INVOKABLE QString MsectionText(QDateTimeEdit* o, QDateTimeEdit::Section x1) const { return o->sectionText(x1); }
    Q_INVOKABLE void MsetCalendarPopup(QDateTimeEdit* o, bool x1) { o->setCalendarPopup(x1); }
    Q_INVOKABLE void MsetCalendarWidget(QDateTimeEdit* o, QCalendarWidget* x1) { o->setCalendarWidget(x1); }
    Q_INVOKABLE void MsetCurrentSection(QDateTimeEdit* o, QDateTimeEdit::Section x1) { o->setCurrentSection(x1); }
    Q_INVOKABLE void MsetCurrentSectionIndex(QDateTimeEdit* o, int x1) { o->setCurrentSectionIndex(x1); }
    Q_INVOKABLE void MsetDateRange(QDateTimeEdit* o, const QDate& x1, const QDate& x2) { o->setDateRange(x1, x2); }
    Q_INVOKABLE void MsetDateTimeRange(QDateTimeEdit* o, const QDateTime& x1, const QDateTime& x2) { o->setDateTimeRange(x1, x2); }
    Q_INVOKABLE void MsetDisplayFormat(QDateTimeEdit* o, const QString& x1) { o->setDisplayFormat(x1); }
    Q_INVOKABLE void MsetMaximumDate(QDateTimeEdit* o, const QDate& x1) { o->setMaximumDate(x1); }
    Q_INVOKABLE void MsetMaximumDateTime(QDateTimeEdit* o, const QDateTime& x1) { o->setMaximumDateTime(x1); }
    Q_INVOKABLE void MsetMaximumTime(QDateTimeEdit* o, const QTime& x1) { o->setMaximumTime(x1); }
    Q_INVOKABLE void MsetMinimumDate(QDateTimeEdit* o, const QDate& x1) { o->setMinimumDate(x1); }
    Q_INVOKABLE void MsetMinimumDateTime(QDateTimeEdit* o, const QDateTime& x1) { o->setMinimumDateTime(x1); }
    Q_INVOKABLE void MsetMinimumTime(QDateTimeEdit* o, const QTime& x1) { o->setMinimumTime(x1); }
    Q_INVOKABLE void MsetSelectedSection(QDateTimeEdit* o, QDateTimeEdit::Section x1) { o->setSelectedSection(x1); }
    Q_INVOKABLE void MsetTimeRange(QDateTimeEdit* o, const QTime& x1, const QTime& x2) { o->setTimeRange(x1, x2); }
    Q_INVOKABLE void MsetTimeSpec(QDateTimeEdit* o, Qt::TimeSpec x1) { o->setTimeSpec(x1); }
    Q_INVOKABLE QTime Mtime(QDateTimeEdit* o) const { return o->time(); }
    Q_INVOKABLE int MtimeSpec(QDateTimeEdit* o) const { return o->timeSpec(); }
    Q_INVOKABLE void Mclear(QDateTimeEdit* o) { o->clear(); }
    Q_INVOKABLE bool Mevent(QDateTimeEdit* o, QEvent* x1) { return o->event(x1); }
    Q_INVOKABLE QSize MsizeHint(QDateTimeEdit* o) const { return o->sizeHint(); }
    Q_INVOKABLE void MstepBy(QDateTimeEdit* o, int x1) { o->stepBy(x1); }
};

class Q26 : public Q108 { // QDesktopWidget
    Q_OBJECT
public:
    Q_INVOKABLE const QRect MavailableGeometry(QDesktopWidget* o, int x1 = -1) const { return o->availableGeometry(x1); }
    Q_INVOKABLE const QRect MavailableGeometry(QDesktopWidget* o, const QWidget* x1) const { return o->availableGeometry(x1); }
    Q_INVOKABLE const QRect MavailableGeometry(QDesktopWidget* o, const QPoint& x1) const { return o->availableGeometry(x1); }
    Q_INVOKABLE bool MisVirtualDesktop(QDesktopWidget* o) const { return o->isVirtualDesktop(); }
    Q_INVOKABLE int MprimaryScreen(QDesktopWidget* o) const { return o->primaryScreen(); }
    Q_INVOKABLE QWidget* Mscreen(QDesktopWidget* o, int x1 = -1) { return o->screen(x1); }
    Q_INVOKABLE int MscreenCount(QDesktopWidget* o) const { return o->screenCount(); }
    Q_INVOKABLE const QRect MscreenGeometry(QDesktopWidget* o, int x1 = -1) const { return o->screenGeometry(x1); }
    Q_INVOKABLE const QRect MscreenGeometry(QDesktopWidget* o, const QWidget* x1) const { return o->screenGeometry(x1); }
    Q_INVOKABLE const QRect MscreenGeometry(QDesktopWidget* o, const QPoint& x1) const { return o->screenGeometry(x1); }
    Q_INVOKABLE int MscreenNumber(QDesktopWidget* o, const QWidget* x1 = 0) const { return o->screenNumber(x1); }
    Q_INVOKABLE int MscreenNumber(QDesktopWidget* o, const QPoint& x1) const { return o->screenNumber(x1); }
};

class Q27 : public Q8 { // QDial
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LDial(u, x1); }
    Q_INVOKABLE int MnotchSize(QDial* o) const { return o->notchSize(); }
    Q_INVOKABLE qreal MnotchTarget(QDial* o) const { return o->notchTarget(); }
    Q_INVOKABLE bool MnotchesVisible(QDial* o) const { return o->notchesVisible(); }
    Q_INVOKABLE void MsetNotchTarget(QDial* o, double x1) { o->setNotchTarget(x1); }
    Q_INVOKABLE bool Mwrapping(QDial* o) const { return o->wrapping(); }
    Q_INVOKABLE QSize MminimumSizeHint(QDial* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QDial* o) const { return o->sizeHint(); }
};

class Q28 : public Q108 { // QDialog
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) { return new LDialog(u, x1, x2); }
    Q_INVOKABLE bool MisSizeGripEnabled(QDialog* o) const { return o->isSizeGripEnabled(); }
    Q_INVOKABLE int Mresult(QDialog* o) const { return o->result(); }
    Q_INVOKABLE void MsetModal(QDialog* o, bool x1) { o->setModal(x1); }
    Q_INVOKABLE void MsetResult(QDialog* o, int x1) { o->setResult(x1); }
    Q_INVOKABLE void MsetSizeGripEnabled(QDialog* o, bool x1) { o->setSizeGripEnabled(x1); }
    Q_INVOKABLE QSize MminimumSizeHint(QDialog* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE void MsetVisible(QDialog* o, bool x1) { o->setVisible(x1); }
    Q_INVOKABLE QSize MsizeHint(QDialog* o) const { return o->sizeHint(); }
};

class Q29 : public Q108 { // QDockWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0, Qt::WindowFlags x3 = 0) { return new LDockWidget(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) { return new LDockWidget(u, x1, x2); }
    Q_INVOKABLE int MallowedAreas(QDockWidget* o) const { return o->allowedAreas(); }
    Q_INVOKABLE int Mfeatures(QDockWidget* o) const { return o->features(); }
    Q_INVOKABLE bool MisAreaAllowed(QDockWidget* o, Qt::DockWidgetArea x1) const { return o->isAreaAllowed(x1); }
    Q_INVOKABLE bool MisFloating(QDockWidget* o) const { return o->isFloating(); }
    Q_INVOKABLE void MsetAllowedAreas(QDockWidget* o, Qt::DockWidgetAreas x1) { o->setAllowedAreas(x1); }
    Q_INVOKABLE void MsetFeatures(QDockWidget* o, QDockWidget::DockWidgetFeatures x1) { o->setFeatures(x1); }
    Q_INVOKABLE void MsetFloating(QDockWidget* o, bool x1) { o->setFloating(x1); }
    Q_INVOKABLE void MsetTitleBarWidget(QDockWidget* o, QWidget* x1) { o->setTitleBarWidget(x1); }
    Q_INVOKABLE void MsetWidget(QDockWidget* o, QWidget* x1) { o->setWidget(x1); }
    Q_INVOKABLE QWidget* MtitleBarWidget(QDockWidget* o) const { return o->titleBarWidget(); }
    Q_INVOKABLE QAction* MtoggleViewAction(QDockWidget* o) const { return o->toggleViewAction(); }
    Q_INVOKABLE QWidget* Mwidget(QDockWidget* o) const { return o->widget(); }
};

class Q30 : public Q9 { // QDoubleSpinBox
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LDoubleSpinBox(u, x1); }
    Q_INVOKABLE QString McleanText(QDoubleSpinBox* o) const { return o->cleanText(); }
    Q_INVOKABLE int Mdecimals(QDoubleSpinBox* o) const { return o->decimals(); }
    Q_INVOKABLE double Mmaximum(QDoubleSpinBox* o) const { return o->maximum(); }
    Q_INVOKABLE double Mminimum(QDoubleSpinBox* o) const { return o->minimum(); }
    Q_INVOKABLE QString Mprefix(QDoubleSpinBox* o) const { return o->prefix(); }
    Q_INVOKABLE void MsetDecimals(QDoubleSpinBox* o, int x1) { o->setDecimals(x1); }
    Q_INVOKABLE void MsetMaximum(QDoubleSpinBox* o, double x1) { o->setMaximum(x1); }
    Q_INVOKABLE void MsetMinimum(QDoubleSpinBox* o, double x1) { o->setMinimum(x1); }
    Q_INVOKABLE void MsetPrefix(QDoubleSpinBox* o, const QString& x1) { o->setPrefix(x1); }
    Q_INVOKABLE void MsetRange(QDoubleSpinBox* o, double x1, double x2) { o->setRange(x1, x2); }
    Q_INVOKABLE void MsetSingleStep(QDoubleSpinBox* o, double x1) { o->setSingleStep(x1); }
    Q_INVOKABLE void MsetSuffix(QDoubleSpinBox* o, const QString& x1) { o->setSuffix(x1); }
    Q_INVOKABLE double MsingleStep(QDoubleSpinBox* o) const { return o->singleStep(); }
    Q_INVOKABLE QString Msuffix(QDoubleSpinBox* o) const { return o->suffix(); }
    Q_INVOKABLE QString MtextFromValue(QDoubleSpinBox* o, double x1) const { return o->textFromValue(x1); }
    Q_INVOKABLE double Mvalue(QDoubleSpinBox* o) const { return o->value(); }
    Q_INVOKABLE double MvalueFromText(QDoubleSpinBox* o, const QString& x1) const { return o->valueFromText(x1); }
    Q_INVOKABLE void Mfixup(QDoubleSpinBox* o, QString& x1) const { o->fixup(x1); }
    Q_INVOKABLE int Mvalidate(QDoubleSpinBox* o, QString& x1, int& x2) const { return o->validate(x1, x2); }
};

class Q32 : public Q28 { // QErrorMessage
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LErrorMessage(u, x1); }
};

class Q33 : public Q28 { // QFileDialog
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1, Qt::WindowFlags x2) { return new LFileDialog(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0, const QString& x2 = QString(), const QString& x3 = QString(), const QString& x4 = QString()) { return new LFileDialog(u, x1, x2, x3, x4); }
    Q_INVOKABLE int MacceptMode(QFileDialog* o) const { return o->acceptMode(); }
    Q_INVOKABLE bool MconfirmOverwrite(QFileDialog* o) const { return o->confirmOverwrite(); }
    Q_INVOKABLE QString MdefaultSuffix(QFileDialog* o) const { return o->defaultSuffix(); }
    Q_INVOKABLE QDir Mdirectory(QFileDialog* o) const { return o->directory(); }
    Q_INVOKABLE int MfileMode(QFileDialog* o) const { return o->fileMode(); }
    Q_INVOKABLE int Mfilter(QFileDialog* o) const { return o->filter(); }
    Q_INVOKABLE QStringList Mhistory(QFileDialog* o) const { return o->history(); }
    Q_INVOKABLE QFileIconProvider* MiconProvider(QFileDialog* o) const { return o->iconProvider(); }
    Q_INVOKABLE bool MisNameFilterDetailsVisible(QFileDialog* o) const { return o->isNameFilterDetailsVisible(); }
    Q_INVOKABLE bool MisReadOnly(QFileDialog* o) const { return o->isReadOnly(); }
    Q_INVOKABLE QAbstractItemDelegate* MitemDelegate(QFileDialog* o) const { return o->itemDelegate(); }
    Q_INVOKABLE QString MlabelText(QFileDialog* o, QFileDialog::DialogLabel x1) const { return o->labelText(x1); }
    Q_INVOKABLE QStringList MnameFilters(QFileDialog* o) const { return o->nameFilters(); }
    Q_INVOKABLE void Mopen(QFileDialog* o, QObject* x1, const char* x2) { o->open(x1, x2); }
    Q_INVOKABLE int Moptions(QFileDialog* o) const { return o->options(); }
    Q_INVOKABLE QAbstractProxyModel* MproxyModel(QFileDialog* o) const { return o->proxyModel(); }
    Q_INVOKABLE bool MresolveSymlinks(QFileDialog* o) const { return o->resolveSymlinks(); }
    Q_INVOKABLE bool MrestoreState(QFileDialog* o, const QByteArray& x1) { return o->restoreState(x1); }
    Q_INVOKABLE QByteArray MsaveState(QFileDialog* o) const { return o->saveState(); }
    Q_INVOKABLE void MselectFile(QFileDialog* o, const QString& x1) { o->selectFile(x1); }
    Q_INVOKABLE void MselectNameFilter(QFileDialog* o, const QString& x1) { o->selectNameFilter(x1); }
    Q_INVOKABLE QStringList MselectedFiles(QFileDialog* o) const { return o->selectedFiles(); }
    Q_INVOKABLE QString MselectedNameFilter(QFileDialog* o) const { return o->selectedNameFilter(); }
    Q_INVOKABLE void MsetAcceptMode(QFileDialog* o, QFileDialog::AcceptMode x1) { o->setAcceptMode(x1); }
    Q_INVOKABLE void MsetConfirmOverwrite(QFileDialog* o, bool x1) { o->setConfirmOverwrite(x1); }
    Q_INVOKABLE void MsetDefaultSuffix(QFileDialog* o, const QString& x1) { o->setDefaultSuffix(x1); }
    Q_INVOKABLE void MsetDirectory(QFileDialog* o, const QString& x1) { o->setDirectory(x1); }
    Q_INVOKABLE void MsetDirectory(QFileDialog* o, const QDir& x1) { o->setDirectory(x1); }
    Q_INVOKABLE void MsetFileMode(QFileDialog* o, QFileDialog::FileMode x1) { o->setFileMode(x1); }
    Q_INVOKABLE void MsetFilter(QFileDialog* o, QDir::Filters x1) { o->setFilter(x1); }
    Q_INVOKABLE void MsetHistory(QFileDialog* o, const QStringList& x1) { o->setHistory(x1); }
    Q_INVOKABLE void MsetIconProvider(QFileDialog* o, QFileIconProvider* x1) { o->setIconProvider(x1); }
    Q_INVOKABLE void MsetItemDelegate(QFileDialog* o, QAbstractItemDelegate* x1) { o->setItemDelegate(x1); }
    Q_INVOKABLE void MsetLabelText(QFileDialog* o, QFileDialog::DialogLabel x1, const QString& x2) { o->setLabelText(x1, x2); }
    Q_INVOKABLE void MsetNameFilter(QFileDialog* o, const QString& x1) { o->setNameFilter(x1); }
    Q_INVOKABLE void MsetNameFilterDetailsVisible(QFileDialog* o, bool x1) { o->setNameFilterDetailsVisible(x1); }
    Q_INVOKABLE void MsetNameFilters(QFileDialog* o, const QStringList& x1) { o->setNameFilters(x1); }
    Q_INVOKABLE void MsetOption(QFileDialog* o, QFileDialog::Option x1, bool x2 = true) { o->setOption(x1, x2); }
    Q_INVOKABLE void MsetOptions(QFileDialog* o, QFileDialog::Options x1) { o->setOptions(x1); }
    Q_INVOKABLE void MsetProxyModel(QFileDialog* o, QAbstractProxyModel* x1) { o->setProxyModel(x1); }
    Q_INVOKABLE void MsetReadOnly(QFileDialog* o, bool x1) { o->setReadOnly(x1); }
    Q_INVOKABLE void MsetResolveSymlinks(QFileDialog* o, bool x1) { o->setResolveSymlinks(x1); }
    Q_INVOKABLE void MsetSidebarUrls(QFileDialog* o, const QList<QUrl>& x1) { o->setSidebarUrls(x1); }
    Q_INVOKABLE void MsetViewMode(QFileDialog* o, QFileDialog::ViewMode x1) { o->setViewMode(x1); }
    Q_INVOKABLE QList<QUrl> MsidebarUrls(QFileDialog* o) const { return o->sidebarUrls(); }
    Q_INVOKABLE bool MtestOption(QFileDialog* o, QFileDialog::Option x1) const { return o->testOption(x1); }
    Q_INVOKABLE int MviewMode(QFileDialog* o) const { return o->viewMode(); }
    Q_INVOKABLE void MsetVisible(QFileDialog* o, bool x1) { o->setVisible(x1); }
    Q_INVOKABLE QString SgetExistingDirectory(QWidget* x1 = 0, const QString& x2 = QString(), const QString& x3 = QString(), QFileDialog::Options x4 = QFileDialog::ShowDirsOnly) { return QFileDialog::getExistingDirectory(x1, x2, x3, x4); }
    Q_INVOKABLE QString SgetOpenFileName(QWidget* x1 = 0, const QString& x2 = QString(), const QString& x3 = QString(), const QString& x4 = QString(), QString* x5 = 0, QFileDialog::Options x6 = 0) { return QFileDialog::getOpenFileName(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QStringList SgetOpenFileNames(QWidget* x1 = 0, const QString& x2 = QString(), const QString& x3 = QString(), const QString& x4 = QString(), QString* x5 = 0, QFileDialog::Options x6 = 0) { return QFileDialog::getOpenFileNames(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QString SgetSaveFileName(QWidget* x1 = 0, const QString& x2 = QString(), const QString& x3 = QString(), const QString& x4 = QString(), QString* x5 = 0, QFileDialog::Options x6 = 0) { return QFileDialog::getSaveFileName(x1, x2, x3, x4, x5, x6); }
};

class Q34 : public Q20 { // QFontComboBox
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LFontComboBox(u, x1); }
    Q_INVOKABLE QFont McurrentFont(QFontComboBox* o) const { return o->currentFont(); }
    Q_INVOKABLE int MfontFilters(QFontComboBox* o) const { return o->fontFilters(); }
    Q_INVOKABLE void MsetFontFilters(QFontComboBox* o, QFontComboBox::FontFilters x1) { o->setFontFilters(x1); }
    Q_INVOKABLE void MsetWritingSystem(QFontComboBox* o, QFontDatabase::WritingSystem x1) { o->setWritingSystem(x1); }
    Q_INVOKABLE int MwritingSystem(QFontComboBox* o) const { return o->writingSystem(); }
    Q_INVOKABLE QSize MsizeHint(QFontComboBox* o) const { return o->sizeHint(); }
};

class Q35 : public Q28 { // QFontDialog
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LFontDialog(u, x1); }
    Q_INVOKABLE void* C(uint u, const QFont& x1, QWidget* x2 = 0) { return new LFontDialog(u, x1, x2); }
    Q_INVOKABLE QFont McurrentFont(QFontDialog* o) const { return o->currentFont(); }
    Q_INVOKABLE void Mopen(QFontDialog* o, QObject* x1, const char* x2) { o->open(x1, x2); }
    Q_INVOKABLE int Moptions(QFontDialog* o) const { return o->options(); }
    Q_INVOKABLE QFont MselectedFont(QFontDialog* o) const { return o->selectedFont(); }
    Q_INVOKABLE void MsetCurrentFont(QFontDialog* o, const QFont& x1) { o->setCurrentFont(x1); }
    Q_INVOKABLE void MsetOption(QFontDialog* o, QFontDialog::FontDialogOption x1, bool x2 = true) { o->setOption(x1, x2); }
    Q_INVOKABLE void MsetOptions(QFontDialog* o, QFontDialog::FontDialogOptions x1) { o->setOptions(x1); }
    Q_INVOKABLE bool MtestOption(QFontDialog* o, QFontDialog::FontDialogOption x1) const { return o->testOption(x1); }
    Q_INVOKABLE void MsetVisible(QFontDialog* o, bool x1) { o->setVisible(x1); }
    Q_INVOKABLE QFont SgetFont(bool* x1, const QFont& x2, QWidget* x3, const QString& x4, QFontDialog::FontDialogOptions x5) { return QFontDialog::getFont(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QFont SgetFont(bool* x1, const QFont& x2, QWidget* x3, const QString& x4) { return QFontDialog::getFont(x1, x2, x3, x4); }
    Q_INVOKABLE QFont SgetFont(bool* x1, const QFont& x2, QWidget* x3 = 0) { return QFontDialog::getFont(x1, x2, x3); }
    Q_INVOKABLE QFont SgetFont(bool* x1, QWidget* x2 = 0) { return QFontDialog::getFont(x1, x2); }
};

class Q36 : public Q55 { // QFormLayout
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LFormLayout(u, x1); }
    Q_INVOKABLE void MaddRow(QFormLayout* o, QWidget* x1, QWidget* x2) { o->addRow(x1, x2); }
    Q_INVOKABLE void MaddRow(QFormLayout* o, QWidget* x1, QLayout* x2) { o->addRow(x1, x2); }
    Q_INVOKABLE void MaddRow(QFormLayout* o, const QString& x1, QWidget* x2) { o->addRow(x1, x2); }
    Q_INVOKABLE void MaddRow(QFormLayout* o, const QString& x1, QLayout* x2) { o->addRow(x1, x2); }
    Q_INVOKABLE void MaddRow(QFormLayout* o, QWidget* x1) { o->addRow(x1); }
    Q_INVOKABLE void MaddRow(QFormLayout* o, QLayout* x1) { o->addRow(x1); }
    Q_INVOKABLE int MfieldGrowthPolicy(QFormLayout* o) const { return o->fieldGrowthPolicy(); }
    Q_INVOKABLE int MformAlignment(QFormLayout* o) const { return o->formAlignment(); }
    Q_INVOKABLE int MhorizontalSpacing(QFormLayout* o) const { return o->horizontalSpacing(); }
    Q_INVOKABLE void MinsertRow(QFormLayout* o, int x1, QWidget* x2, QWidget* x3) { o->insertRow(x1, x2, x3); }
    Q_INVOKABLE void MinsertRow(QFormLayout* o, int x1, QWidget* x2, QLayout* x3) { o->insertRow(x1, x2, x3); }
    Q_INVOKABLE void MinsertRow(QFormLayout* o, int x1, const QString& x2, QWidget* x3) { o->insertRow(x1, x2, x3); }
    Q_INVOKABLE void MinsertRow(QFormLayout* o, int x1, const QString& x2, QLayout* x3) { o->insertRow(x1, x2, x3); }
    Q_INVOKABLE void MinsertRow(QFormLayout* o, int x1, QWidget* x2) { o->insertRow(x1, x2); }
    Q_INVOKABLE void MinsertRow(QFormLayout* o, int x1, QLayout* x2) { o->insertRow(x1, x2); }
    Q_INVOKABLE QLayoutItem* MitemAt(QFormLayout* o, int x1, QFormLayout::ItemRole x2) const { return o->itemAt(x1, x2); }
    Q_INVOKABLE int MlabelAlignment(QFormLayout* o) const { return o->labelAlignment(); }
    Q_INVOKABLE QWidget* MlabelForField(QFormLayout* o, QWidget* x1) const { return o->labelForField(x1); }
    Q_INVOKABLE QWidget* MlabelForField(QFormLayout* o, QLayout* x1) const { return o->labelForField(x1); }
    Q_INVOKABLE int MrowCount(QFormLayout* o) const { return o->rowCount(); }
    Q_INVOKABLE int MrowWrapPolicy(QFormLayout* o) const { return o->rowWrapPolicy(); }
    Q_INVOKABLE void MsetFieldGrowthPolicy(QFormLayout* o, QFormLayout::FieldGrowthPolicy x1) { o->setFieldGrowthPolicy(x1); }
    Q_INVOKABLE void MsetFormAlignment(QFormLayout* o, Qt::Alignment x1) { o->setFormAlignment(x1); }
    Q_INVOKABLE void MsetHorizontalSpacing(QFormLayout* o, int x1) { o->setHorizontalSpacing(x1); }
    Q_INVOKABLE void MsetItem(QFormLayout* o, int x1, QFormLayout::ItemRole x2, QLayoutItem* x3) { o->setItem(x1, x2, x3); }
    Q_INVOKABLE void MsetLabelAlignment(QFormLayout* o, Qt::Alignment x1) { o->setLabelAlignment(x1); }
    Q_INVOKABLE void MsetLayout(QFormLayout* o, int x1, QFormLayout::ItemRole x2, QLayout* x3) { o->setLayout(x1, x2, x3); }
    Q_INVOKABLE void MsetRowWrapPolicy(QFormLayout* o, QFormLayout::RowWrapPolicy x1) { o->setRowWrapPolicy(x1); }
    Q_INVOKABLE void MsetSpacing(QFormLayout* o, int x1) { o->setSpacing(x1); }
    Q_INVOKABLE void MsetVerticalSpacing(QFormLayout* o, int x1) { o->setVerticalSpacing(x1); }
    Q_INVOKABLE void MsetWidget(QFormLayout* o, int x1, QFormLayout::ItemRole x2, QWidget* x3) { o->setWidget(x1, x2, x3); }
    Q_INVOKABLE int Mspacing(QFormLayout* o) const { return o->spacing(); }
    Q_INVOKABLE int MverticalSpacing(QFormLayout* o) const { return o->verticalSpacing(); }
    Q_INVOKABLE void MaddItem(QFormLayout* o, QLayoutItem* x1) { o->addItem(x1); }
    Q_INVOKABLE int Mcount(QFormLayout* o) const { return o->count(); }
    Q_INVOKABLE int MexpandingDirections(QFormLayout* o) const { return o->expandingDirections(); }
    Q_INVOKABLE bool MhasHeightForWidth(QFormLayout* o) const { return o->hasHeightForWidth(); }
    Q_INVOKABLE int MheightForWidth(QFormLayout* o, int x1) const { return o->heightForWidth(x1); }
    Q_INVOKABLE void Minvalidate(QFormLayout* o) { o->invalidate(); }
    Q_INVOKABLE QLayoutItem* MitemAt(QFormLayout* o, int x1) const { return o->itemAt(x1); }
    Q_INVOKABLE QSize MminimumSize(QFormLayout* o) const { return o->minimumSize(); }
    Q_INVOKABLE void MsetGeometry(QFormLayout* o, const QRect& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSize MsizeHint(QFormLayout* o) const { return o->sizeHint(); }
    Q_INVOKABLE QLayoutItem* MtakeAt(QFormLayout* o, int x1) { return o->takeAt(x1); }
};

class Q37 : public Q108 { // QFrame
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) { return new LFrame(u, x1, x2); }
    Q_INVOKABLE QRect MframeRect(QFrame* o) const { return o->frameRect(); }
    Q_INVOKABLE int MframeShadow(QFrame* o) const { return o->frameShadow(); }
    Q_INVOKABLE int MframeShape(QFrame* o) const { return o->frameShape(); }
    Q_INVOKABLE int MframeStyle(QFrame* o) const { return o->frameStyle(); }
    Q_INVOKABLE int MframeWidth(QFrame* o) const { return o->frameWidth(); }
    Q_INVOKABLE int MlineWidth(QFrame* o) const { return o->lineWidth(); }
    Q_INVOKABLE int MmidLineWidth(QFrame* o) const { return o->midLineWidth(); }
    Q_INVOKABLE void MsetFrameRect(QFrame* o, const QRect& x1) { o->setFrameRect(x1); }
    Q_INVOKABLE void MsetFrameShadow(QFrame* o, QFrame::Shadow x1) { o->setFrameShadow(x1); }
    Q_INVOKABLE void MsetFrameShape(QFrame* o, QFrame::Shape x1) { o->setFrameShape(x1); }
    Q_INVOKABLE void MsetFrameStyle(QFrame* o, int x1) { o->setFrameStyle(x1); }
    Q_INVOKABLE void MsetLineWidth(QFrame* o, int x1) { o->setLineWidth(x1); }
    Q_INVOKABLE void MsetMidLineWidth(QFrame* o, int x1) { o->setMidLineWidth(x1); }
    Q_INVOKABLE QSize MsizeHint(QFrame* o) const { return o->sizeHint(); }
};

class Q40 : public Q44 { // QGraphicsProxyWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0, Qt::WindowFlags x2 = 0) { return new LGraphicsProxyWidget(u, x1, x2); }
    Q_INVOKABLE QGraphicsProxyWidget* McreateProxyForChildWidget(QGraphicsProxyWidget* o, QWidget* x1) { return o->createProxyForChildWidget(x1); }
    Q_INVOKABLE void MsetWidget(QGraphicsProxyWidget* o, QWidget* x1) { o->setWidget(x1); }
    Q_INVOKABLE QRectF MsubWidgetRect(QGraphicsProxyWidget* o, const QWidget* x1) const { return o->subWidgetRect(x1); }
    Q_INVOKABLE QWidget* Mwidget(QGraphicsProxyWidget* o) const { return o->widget(); }
    Q_INVOKABLE void Mpaint(QGraphicsProxyWidget* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { o->paint(x1, x2, x3); }
    Q_INVOKABLE void MsetGeometry(QGraphicsProxyWidget* o, const QRectF& x1) { o->setGeometry(x1); }
    Q_INVOKABLE int Mtype(QGraphicsProxyWidget* o) const { return o->type(); }
};

class Q45 : public Q55 { // QGridLayout
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1) { return new LGridLayout(u, x1); }
    Q_INVOKABLE void* C(uint u) { return new LGridLayout(u); }
    Q_INVOKABLE void MaddItem(QGridLayout* o, QLayoutItem* x1, int x2, int x3, int x4 = 1, int x5 = 1, Qt::Alignment x6 = 0) { o->addItem(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MaddLayout(QGridLayout* o, QLayout* x1, int x2, int x3, Qt::Alignment x4 = 0) { o->addLayout(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddLayout(QGridLayout* o, QLayout* x1, int x2, int x3, int x4, int x5, Qt::Alignment x6 = 0) { o->addLayout(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MaddWidget(QGridLayout* o, QWidget* x1, int x2, int x3, Qt::Alignment x4 = 0) { o->addWidget(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddWidget(QGridLayout* o, QWidget* x1, int x2, int x3, int x4, int x5, Qt::Alignment x6 = 0) { o->addWidget(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QRect McellRect(QGridLayout* o, int x1, int x2) const { return o->cellRect(x1, x2); }
    Q_INVOKABLE int McolumnCount(QGridLayout* o) const { return o->columnCount(); }
    Q_INVOKABLE int McolumnMinimumWidth(QGridLayout* o, int x1) const { return o->columnMinimumWidth(x1); }
    Q_INVOKABLE int McolumnStretch(QGridLayout* o, int x1) const { return o->columnStretch(x1); }
    Q_INVOKABLE int MhorizontalSpacing(QGridLayout* o) const { return o->horizontalSpacing(); }
    Q_INVOKABLE QLayoutItem* MitemAtPosition(QGridLayout* o, int x1, int x2) const { return o->itemAtPosition(x1, x2); }
    Q_INVOKABLE int MoriginCorner(QGridLayout* o) const { return o->originCorner(); }
    Q_INVOKABLE int MrowCount(QGridLayout* o) const { return o->rowCount(); }
    Q_INVOKABLE int MrowMinimumHeight(QGridLayout* o, int x1) const { return o->rowMinimumHeight(x1); }
    Q_INVOKABLE int MrowStretch(QGridLayout* o, int x1) const { return o->rowStretch(x1); }
    Q_INVOKABLE void MsetColumnMinimumWidth(QGridLayout* o, int x1, int x2) { o->setColumnMinimumWidth(x1, x2); }
    Q_INVOKABLE void MsetColumnStretch(QGridLayout* o, int x1, int x2) { o->setColumnStretch(x1, x2); }
    Q_INVOKABLE void MsetHorizontalSpacing(QGridLayout* o, int x1) { o->setHorizontalSpacing(x1); }
    Q_INVOKABLE void MsetOriginCorner(QGridLayout* o, Qt::Corner x1) { o->setOriginCorner(x1); }
    Q_INVOKABLE void MsetRowMinimumHeight(QGridLayout* o, int x1, int x2) { o->setRowMinimumHeight(x1, x2); }
    Q_INVOKABLE void MsetRowStretch(QGridLayout* o, int x1, int x2) { o->setRowStretch(x1, x2); }
    Q_INVOKABLE void MsetSpacing(QGridLayout* o, int x1) { o->setSpacing(x1); }
    Q_INVOKABLE void MsetVerticalSpacing(QGridLayout* o, int x1) { o->setVerticalSpacing(x1); }
    Q_INVOKABLE int Mspacing(QGridLayout* o) const { return o->spacing(); }
    Q_INVOKABLE int MverticalSpacing(QGridLayout* o) const { return o->verticalSpacing(); }
    Q_INVOKABLE int Mcount(QGridLayout* o) const { return o->count(); }
    Q_INVOKABLE int MexpandingDirections(QGridLayout* o) const { return o->expandingDirections(); }
    Q_INVOKABLE bool MhasHeightForWidth(QGridLayout* o) const { return o->hasHeightForWidth(); }
    Q_INVOKABLE int MheightForWidth(QGridLayout* o, int x1) const { return o->heightForWidth(x1); }
    Q_INVOKABLE void Minvalidate(QGridLayout* o) { o->invalidate(); }
    Q_INVOKABLE QLayoutItem* MitemAt(QGridLayout* o, int x1) const { return o->itemAt(x1); }
    Q_INVOKABLE QSize MmaximumSize(QGridLayout* o) const { return o->maximumSize(); }
    Q_INVOKABLE int MminimumHeightForWidth(QGridLayout* o, int x1) const { return o->minimumHeightForWidth(x1); }
    Q_INVOKABLE QSize MminimumSize(QGridLayout* o) const { return o->minimumSize(); }
    Q_INVOKABLE void MsetGeometry(QGridLayout* o, const QRect& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSize MsizeHint(QGridLayout* o) const { return o->sizeHint(); }
    Q_INVOKABLE QLayoutItem* MtakeAt(QGridLayout* o, int x1) { return o->takeAt(x1); }
};

class Q46 : public Q108 { // QGroupBox
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LGroupBox(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0) { return new LGroupBox(u, x1, x2); }
    Q_INVOKABLE int Malignment(QGroupBox* o) const { return o->alignment(); }
    Q_INVOKABLE bool MisCheckable(QGroupBox* o) const { return o->isCheckable(); }
    Q_INVOKABLE bool MisChecked(QGroupBox* o) const { return o->isChecked(); }
    Q_INVOKABLE bool MisFlat(QGroupBox* o) const { return o->isFlat(); }
    Q_INVOKABLE void MsetAlignment(QGroupBox* o, int x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetCheckable(QGroupBox* o, bool x1) { o->setCheckable(x1); }
    Q_INVOKABLE void MsetFlat(QGroupBox* o, bool x1) { o->setFlat(x1); }
    Q_INVOKABLE void MsetTitle(QGroupBox* o, const QString& x1) { o->setTitle(x1); }
    Q_INVOKABLE QString Mtitle(QGroupBox* o) const { return o->title(); }
    Q_INVOKABLE QSize MminimumSizeHint(QGroupBox* o) const { return o->minimumSizeHint(); }
};

class Q47 : public Q14 { // QHBoxLayout
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LHBoxLayout(u); }
    Q_INVOKABLE void* C(uint u, QWidget* x1) { return new LHBoxLayout(u, x1); }
};

class Q50 : public Q28 { // QInputDialog
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) { return new LInputDialog(u, x1, x2); }
    Q_INVOKABLE QString McancelButtonText(QInputDialog* o) const { return o->cancelButtonText(); }
    Q_INVOKABLE QStringList McomboBoxItems(QInputDialog* o) const { return o->comboBoxItems(); }
    Q_INVOKABLE int MdoubleDecimals(QInputDialog* o) const { return o->doubleDecimals(); }
    Q_INVOKABLE double MdoubleMaximum(QInputDialog* o) const { return o->doubleMaximum(); }
    Q_INVOKABLE double MdoubleMinimum(QInputDialog* o) const { return o->doubleMinimum(); }
    Q_INVOKABLE double MdoubleValue(QInputDialog* o) const { return o->doubleValue(); }
    Q_INVOKABLE int MinputMode(QInputDialog* o) const { return o->inputMode(); }
    Q_INVOKABLE int MintMaximum(QInputDialog* o) const { return o->intMaximum(); }
    Q_INVOKABLE int MintMinimum(QInputDialog* o) const { return o->intMinimum(); }
    Q_INVOKABLE int MintStep(QInputDialog* o) const { return o->intStep(); }
    Q_INVOKABLE int MintValue(QInputDialog* o) const { return o->intValue(); }
    Q_INVOKABLE bool MisComboBoxEditable(QInputDialog* o) const { return o->isComboBoxEditable(); }
    Q_INVOKABLE QString MlabelText(QInputDialog* o) const { return o->labelText(); }
    Q_INVOKABLE QString MokButtonText(QInputDialog* o) const { return o->okButtonText(); }
    Q_INVOKABLE void Mopen(QInputDialog* o, QObject* x1, const char* x2) { o->open(x1, x2); }
    Q_INVOKABLE int Moptions(QInputDialog* o) const { return o->options(); }
    Q_INVOKABLE void MsetCancelButtonText(QInputDialog* o, const QString& x1) { o->setCancelButtonText(x1); }
    Q_INVOKABLE void MsetComboBoxEditable(QInputDialog* o, bool x1) { o->setComboBoxEditable(x1); }
    Q_INVOKABLE void MsetComboBoxItems(QInputDialog* o, const QStringList& x1) { o->setComboBoxItems(x1); }
    Q_INVOKABLE void MsetDoubleDecimals(QInputDialog* o, int x1) { o->setDoubleDecimals(x1); }
    Q_INVOKABLE void MsetDoubleMaximum(QInputDialog* o, double x1) { o->setDoubleMaximum(x1); }
    Q_INVOKABLE void MsetDoubleMinimum(QInputDialog* o, double x1) { o->setDoubleMinimum(x1); }
    Q_INVOKABLE void MsetDoubleRange(QInputDialog* o, double x1, double x2) { o->setDoubleRange(x1, x2); }
    Q_INVOKABLE void MsetDoubleValue(QInputDialog* o, double x1) { o->setDoubleValue(x1); }
    Q_INVOKABLE void MsetInputMode(QInputDialog* o, QInputDialog::InputMode x1) { o->setInputMode(x1); }
    Q_INVOKABLE void MsetIntMaximum(QInputDialog* o, int x1) { o->setIntMaximum(x1); }
    Q_INVOKABLE void MsetIntMinimum(QInputDialog* o, int x1) { o->setIntMinimum(x1); }
    Q_INVOKABLE void MsetIntRange(QInputDialog* o, int x1, int x2) { o->setIntRange(x1, x2); }
    Q_INVOKABLE void MsetIntStep(QInputDialog* o, int x1) { o->setIntStep(x1); }
    Q_INVOKABLE void MsetIntValue(QInputDialog* o, int x1) { o->setIntValue(x1); }
    Q_INVOKABLE void MsetLabelText(QInputDialog* o, const QString& x1) { o->setLabelText(x1); }
    Q_INVOKABLE void MsetOkButtonText(QInputDialog* o, const QString& x1) { o->setOkButtonText(x1); }
    Q_INVOKABLE void MsetOption(QInputDialog* o, QInputDialog::InputDialogOption x1, bool x2 = true) { o->setOption(x1, x2); }
    Q_INVOKABLE void MsetOptions(QInputDialog* o, QInputDialog::InputDialogOptions x1) { o->setOptions(x1); }
    Q_INVOKABLE void MsetTextEchoMode(QInputDialog* o, QLineEdit::EchoMode x1) { o->setTextEchoMode(x1); }
    Q_INVOKABLE void MsetTextValue(QInputDialog* o, const QString& x1) { o->setTextValue(x1); }
    Q_INVOKABLE bool MtestOption(QInputDialog* o, QInputDialog::InputDialogOption x1) const { return o->testOption(x1); }
    Q_INVOKABLE int MtextEchoMode(QInputDialog* o) const { return o->textEchoMode(); }
    Q_INVOKABLE QString MtextValue(QInputDialog* o) const { return o->textValue(); }
    Q_INVOKABLE void Mdone(QInputDialog* o, int x1) { o->done(x1); }
    Q_INVOKABLE QSize MminimumSizeHint(QInputDialog* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE void MsetVisible(QInputDialog* o, bool x1) { o->setVisible(x1); }
    Q_INVOKABLE QSize MsizeHint(QInputDialog* o) const { return o->sizeHint(); }
    Q_INVOKABLE double SgetDouble(QWidget* x1, const QString& x2, const QString& x3, double x4 = 0, double x5 = -2147483647, double x6 = 2147483647, int x7 = 1, bool* x8 = 0, Qt::WindowFlags x9 = 0) { return QInputDialog::getDouble(x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE int SgetInt(QWidget* x1, const QString& x2, const QString& x3, int x4 = 0, int x5 = -2147483647, int x6 = 2147483647, int x7 = 1, bool* x8 = 0, Qt::WindowFlags x9 = 0) { return QInputDialog::getInt(x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE QString SgetItem(QWidget* x1, const QString& x2, const QString& x3, const QStringList& x4, int x5 = 0, bool x6 = true, bool* x7 = 0, Qt::WindowFlags x8 = 0) { return QInputDialog::getItem(x1, x2, x3, x4, x5, x6, x7, x8); }
    Q_INVOKABLE QString SgetText(QWidget* x1, const QString& x2, const QString& x3, QLineEdit::EchoMode x4 = QLineEdit::Normal, const QString& x5 = QString(), bool* x6 = 0, Qt::WindowFlags x7 = 0) { return QInputDialog::getText(x1, x2, x3, x4, x5, x6, x7); }
};

class Q53 : public Q37 { // QLCDNumber
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LLCDNumber(u, x1); }
    Q_INVOKABLE void* C(uint u, uint x1, QWidget* x2 = 0) { return new LLCDNumber(u, x1, x2); }
    Q_INVOKABLE bool McheckOverflow(QLCDNumber* o, double x1) const { return o->checkOverflow(x1); }
    Q_INVOKABLE bool McheckOverflow(QLCDNumber* o, int x1) const { return o->checkOverflow(x1); }
    Q_INVOKABLE int MdigitCount(QLCDNumber* o) const { return o->digitCount(); }
    Q_INVOKABLE int MintValue(QLCDNumber* o) const { return o->intValue(); }
    Q_INVOKABLE int Mmode(QLCDNumber* o) const { return o->mode(); }
    Q_INVOKABLE int MsegmentStyle(QLCDNumber* o) const { return o->segmentStyle(); }
    Q_INVOKABLE void MsetDigitCount(QLCDNumber* o, int x1) { o->setDigitCount(x1); }
    Q_INVOKABLE void MsetMode(QLCDNumber* o, QLCDNumber::Mode x1) { o->setMode(x1); }
    Q_INVOKABLE void MsetSegmentStyle(QLCDNumber* o, QLCDNumber::SegmentStyle x1) { o->setSegmentStyle(x1); }
    Q_INVOKABLE bool MsmallDecimalPoint(QLCDNumber* o) const { return o->smallDecimalPoint(); }
    Q_INVOKABLE double Mvalue(QLCDNumber* o) const { return o->value(); }
    Q_INVOKABLE QSize MsizeHint(QLCDNumber* o) const { return o->sizeHint(); }
};

class Q54 : public Q37 { // QLabel
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) { return new LLabel(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0, Qt::WindowFlags x3 = 0) { return new LLabel(u, x1, x2, x3); }
    Q_INVOKABLE int Malignment(QLabel* o) const { return o->alignment(); }
    Q_INVOKABLE QWidget* Mbuddy(QLabel* o) const { return o->buddy(); }
    Q_INVOKABLE bool MhasScaledContents(QLabel* o) const { return o->hasScaledContents(); }
    Q_INVOKABLE int Mindent(QLabel* o) const { return o->indent(); }
    Q_INVOKABLE int Mmargin(QLabel* o) const { return o->margin(); }
    Q_INVOKABLE QMovie* Mmovie(QLabel* o) const { return o->movie(); }
    Q_INVOKABLE bool MopenExternalLinks(QLabel* o) const { return o->openExternalLinks(); }
    Q_INVOKABLE const QPicture* Mpicture(QLabel* o) const { return o->picture(); }
    Q_INVOKABLE const QPixmap* Mpixmap(QLabel* o) const { return o->pixmap(); }
    Q_INVOKABLE void MsetAlignment(QLabel* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetBuddy(QLabel* o, QWidget* x1) { o->setBuddy(x1); }
    Q_INVOKABLE void MsetIndent(QLabel* o, int x1) { o->setIndent(x1); }
    Q_INVOKABLE void MsetMargin(QLabel* o, int x1) { o->setMargin(x1); }
    Q_INVOKABLE void MsetOpenExternalLinks(QLabel* o, bool x1) { o->setOpenExternalLinks(x1); }
    Q_INVOKABLE void MsetScaledContents(QLabel* o, bool x1) { o->setScaledContents(x1); }
    Q_INVOKABLE void MsetTextFormat(QLabel* o, Qt::TextFormat x1) { o->setTextFormat(x1); }
    Q_INVOKABLE void MsetTextInteractionFlags(QLabel* o, Qt::TextInteractionFlags x1) { o->setTextInteractionFlags(x1); }
    Q_INVOKABLE void MsetWordWrap(QLabel* o, bool x1) { o->setWordWrap(x1); }
    Q_INVOKABLE QString Mtext(QLabel* o) const { return o->text(); }
    Q_INVOKABLE int MtextFormat(QLabel* o) const { return o->textFormat(); }
    Q_INVOKABLE int MtextInteractionFlags(QLabel* o) const { return o->textInteractionFlags(); }
    Q_INVOKABLE bool MwordWrap(QLabel* o) const { return o->wordWrap(); }
    Q_INVOKABLE int MheightForWidth(QLabel* o, int x1) const { return o->heightForWidth(x1); }
    Q_INVOKABLE QSize MminimumSizeHint(QLabel* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QLabel* o) const { return o->sizeHint(); }
};

class Q56 : public Q108 { // QLineEdit
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LLineEdit(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0) { return new LLineEdit(u, x1, x2); }
    Q_INVOKABLE int Malignment(QLineEdit* o) const { return o->alignment(); }
    Q_INVOKABLE void Mbackspace(QLineEdit* o) { o->backspace(); }
    Q_INVOKABLE QCompleter* Mcompleter(QLineEdit* o) const { return o->completer(); }
    Q_INVOKABLE QMenu* McreateStandardContextMenu(QLineEdit* o) { return o->createStandardContextMenu(); }
    Q_INVOKABLE void McursorBackward(QLineEdit* o, bool x1, int x2 = 1) { o->cursorBackward(x1, x2); }
    Q_INVOKABLE void McursorForward(QLineEdit* o, bool x1, int x2 = 1) { o->cursorForward(x1, x2); }
    Q_INVOKABLE int McursorPosition(QLineEdit* o) const { return o->cursorPosition(); }
    Q_INVOKABLE int McursorPositionAt(QLineEdit* o, const QPoint& x1) { return o->cursorPositionAt(x1); }
    Q_INVOKABLE void McursorWordBackward(QLineEdit* o, bool x1) { o->cursorWordBackward(x1); }
    Q_INVOKABLE void McursorWordForward(QLineEdit* o, bool x1) { o->cursorWordForward(x1); }
    Q_INVOKABLE void Mdel(QLineEdit* o) { o->del(); }
    Q_INVOKABLE void Mdeselect(QLineEdit* o) { o->deselect(); }
    Q_INVOKABLE QString MdisplayText(QLineEdit* o) const { return o->displayText(); }
    Q_INVOKABLE bool MdragEnabled(QLineEdit* o) const { return o->dragEnabled(); }
    Q_INVOKABLE int MechoMode(QLineEdit* o) const { return o->echoMode(); }
    Q_INVOKABLE void Mend(QLineEdit* o, bool x1) { o->end(x1); }
    Q_INVOKABLE bool MhasAcceptableInput(QLineEdit* o) const { return o->hasAcceptableInput(); }
    Q_INVOKABLE bool MhasFrame(QLineEdit* o) const { return o->hasFrame(); }
    Q_INVOKABLE bool MhasSelectedText(QLineEdit* o) const { return o->hasSelectedText(); }
    Q_INVOKABLE void Mhome(QLineEdit* o, bool x1) { o->home(x1); }
    Q_INVOKABLE QString MinputMask(QLineEdit* o) const { return o->inputMask(); }
    Q_INVOKABLE void Minsert(QLineEdit* o, const QString& x1) { o->insert(x1); }
    Q_INVOKABLE bool MisModified(QLineEdit* o) const { return o->isModified(); }
    Q_INVOKABLE bool MisReadOnly(QLineEdit* o) const { return o->isReadOnly(); }
    Q_INVOKABLE bool MisRedoAvailable(QLineEdit* o) const { return o->isRedoAvailable(); }
    Q_INVOKABLE bool MisUndoAvailable(QLineEdit* o) const { return o->isUndoAvailable(); }
    Q_INVOKABLE int MmaxLength(QLineEdit* o) const { return o->maxLength(); }
    Q_INVOKABLE QString MselectedText(QLineEdit* o) const { return o->selectedText(); }
    Q_INVOKABLE int MselectionStart(QLineEdit* o) const { return o->selectionStart(); }
    Q_INVOKABLE void MsetAlignment(QLineEdit* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetCompleter(QLineEdit* o, QCompleter* x1) { o->setCompleter(x1); }
    Q_INVOKABLE void MsetCursorPosition(QLineEdit* o, int x1) { o->setCursorPosition(x1); }
    Q_INVOKABLE void MsetDragEnabled(QLineEdit* o, bool x1) { o->setDragEnabled(x1); }
    Q_INVOKABLE void MsetEchoMode(QLineEdit* o, QLineEdit::EchoMode x1) { o->setEchoMode(x1); }
    Q_INVOKABLE void MsetFrame(QLineEdit* o, bool x1) { o->setFrame(x1); }
    Q_INVOKABLE void MsetInputMask(QLineEdit* o, const QString& x1) { o->setInputMask(x1); }
    Q_INVOKABLE void MsetMaxLength(QLineEdit* o, int x1) { o->setMaxLength(x1); }
    Q_INVOKABLE void MsetModified(QLineEdit* o, bool x1) { o->setModified(x1); }
    Q_INVOKABLE void MsetReadOnly(QLineEdit* o, bool x1) { o->setReadOnly(x1); }
    Q_INVOKABLE void MsetSelection(QLineEdit* o, int x1, int x2) { o->setSelection(x1, x2); }
    Q_INVOKABLE void MsetTextMargins(QLineEdit* o, int x1, int x2, int x3, int x4) { o->setTextMargins(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetTextMargins(QLineEdit* o, const QMargins& x1) { o->setTextMargins(x1); }
    Q_INVOKABLE void MsetValidator(QLineEdit* o, const QValidator* x1) { o->setValidator(x1); }
    Q_INVOKABLE QString Mtext(QLineEdit* o) const { return o->text(); }
    Q_INVOKABLE QMargins MtextMargins(QLineEdit* o) const { return o->textMargins(); }
    Q_INVOKABLE const QValidator* Mvalidator(QLineEdit* o) const { return o->validator(); }
    Q_INVOKABLE bool Mevent(QLineEdit* o, QEvent* x1) { return o->event(x1); }
    Q_INVOKABLE QVariant MinputMethodQuery(QLineEdit* o, Qt::InputMethodQuery x1) const { return o->inputMethodQuery(x1); }
    Q_INVOKABLE QSize MminimumSizeHint(QLineEdit* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QLineEdit* o) const { return o->sizeHint(); }
};

class Q59 : public Q108 { // QMainWindow
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) { return new LMainWindow(u, x1, x2); }
    Q_INVOKABLE void MaddDockWidget(QMainWindow* o, Qt::DockWidgetArea x1, QDockWidget* x2) { o->addDockWidget(x1, x2); }
    Q_INVOKABLE void MaddDockWidget(QMainWindow* o, Qt::DockWidgetArea x1, QDockWidget* x2, Qt::Orientation x3) { o->addDockWidget(x1, x2, x3); }
    Q_INVOKABLE void MaddToolBar(QMainWindow* o, Qt::ToolBarArea x1, QToolBar* x2) { o->addToolBar(x1, x2); }
    Q_INVOKABLE void MaddToolBar(QMainWindow* o, QToolBar* x1) { o->addToolBar(x1); }
    Q_INVOKABLE QToolBar* MaddToolBar(QMainWindow* o, const QString& x1) { return o->addToolBar(x1); }
    Q_INVOKABLE void MaddToolBarBreak(QMainWindow* o, Qt::ToolBarArea x1 = Qt::TopToolBarArea) { o->addToolBarBreak(x1); }
    Q_INVOKABLE QWidget* McentralWidget(QMainWindow* o) const { return o->centralWidget(); }
    Q_INVOKABLE int Mcorner(QMainWindow* o, Qt::Corner x1) const { return o->corner(x1); }
    Q_INVOKABLE QMenu* McreatePopupMenu(QMainWindow* o) { return o->createPopupMenu(); }
    Q_INVOKABLE int MdockOptions(QMainWindow* o) const { return o->dockOptions(); }
    Q_INVOKABLE int MdockWidgetArea(QMainWindow* o, QDockWidget* x1) const { return o->dockWidgetArea(x1); }
    Q_INVOKABLE bool MdocumentMode(QMainWindow* o) const { return o->documentMode(); }
    Q_INVOKABLE QSize MiconSize(QMainWindow* o) const { return o->iconSize(); }
    Q_INVOKABLE void MinsertToolBar(QMainWindow* o, QToolBar* x1, QToolBar* x2) { o->insertToolBar(x1, x2); }
    Q_INVOKABLE void MinsertToolBarBreak(QMainWindow* o, QToolBar* x1) { o->insertToolBarBreak(x1); }
    Q_INVOKABLE bool MisAnimated(QMainWindow* o) const { return o->isAnimated(); }
    Q_INVOKABLE bool MisDockNestingEnabled(QMainWindow* o) const { return o->isDockNestingEnabled(); }
    Q_INVOKABLE QMenuBar* MmenuBar(QMainWindow* o) const { return o->menuBar(); }
    Q_INVOKABLE QWidget* MmenuWidget(QMainWindow* o) const { return o->menuWidget(); }
    Q_INVOKABLE void MremoveDockWidget(QMainWindow* o, QDockWidget* x1) { o->removeDockWidget(x1); }
    Q_INVOKABLE void MremoveToolBar(QMainWindow* o, QToolBar* x1) { o->removeToolBar(x1); }
    Q_INVOKABLE void MremoveToolBarBreak(QMainWindow* o, QToolBar* x1) { o->removeToolBarBreak(x1); }
    Q_INVOKABLE bool MrestoreDockWidget(QMainWindow* o, QDockWidget* x1) { return o->restoreDockWidget(x1); }
    Q_INVOKABLE bool MrestoreState(QMainWindow* o, const QByteArray& x1, int x2 = 0) { return o->restoreState(x1, x2); }
    Q_INVOKABLE QByteArray MsaveState(QMainWindow* o, int x1 = 0) const { return o->saveState(x1); }
    Q_INVOKABLE void MsetCentralWidget(QMainWindow* o, QWidget* x1) { o->setCentralWidget(x1); }
    Q_INVOKABLE void MsetCorner(QMainWindow* o, Qt::Corner x1, Qt::DockWidgetArea x2) { o->setCorner(x1, x2); }
    Q_INVOKABLE void MsetDockOptions(QMainWindow* o, QMainWindow::DockOptions x1) { o->setDockOptions(x1); }
    Q_INVOKABLE void MsetDocumentMode(QMainWindow* o, bool x1) { o->setDocumentMode(x1); }
    Q_INVOKABLE void MsetIconSize(QMainWindow* o, const QSize& x1) { o->setIconSize(x1); }
    Q_INVOKABLE void MsetMenuBar(QMainWindow* o, QMenuBar* x1) { o->setMenuBar(x1); }
    Q_INVOKABLE void MsetMenuWidget(QMainWindow* o, QWidget* x1) { o->setMenuWidget(x1); }
    Q_INVOKABLE void MsetStatusBar(QMainWindow* o, QStatusBar* x1) { o->setStatusBar(x1); }
    Q_INVOKABLE void MsetTabPosition(QMainWindow* o, Qt::DockWidgetAreas x1, QTabWidget::TabPosition x2) { o->setTabPosition(x1, x2); }
    Q_INVOKABLE void MsetTabShape(QMainWindow* o, QTabWidget::TabShape x1) { o->setTabShape(x1); }
    Q_INVOKABLE void MsetToolButtonStyle(QMainWindow* o, Qt::ToolButtonStyle x1) { o->setToolButtonStyle(x1); }
    Q_INVOKABLE void MsetUnifiedTitleAndToolBarOnMac(QMainWindow* o, bool x1) { o->setUnifiedTitleAndToolBarOnMac(x1); }
    Q_INVOKABLE void MsplitDockWidget(QMainWindow* o, QDockWidget* x1, QDockWidget* x2, Qt::Orientation x3) { o->splitDockWidget(x1, x2, x3); }
    Q_INVOKABLE QStatusBar* MstatusBar(QMainWindow* o) const { return o->statusBar(); }
    Q_INVOKABLE int MtabPosition(QMainWindow* o, Qt::DockWidgetArea x1) const { return o->tabPosition(x1); }
    Q_INVOKABLE int MtabShape(QMainWindow* o) const { return o->tabShape(); }
    Q_INVOKABLE QList<QDockWidget*> MtabifiedDockWidgets(QMainWindow* o, QDockWidget* x1) const { return o->tabifiedDockWidgets(x1); }
    Q_INVOKABLE void MtabifyDockWidget(QMainWindow* o, QDockWidget* x1, QDockWidget* x2) { o->tabifyDockWidget(x1, x2); }
    Q_INVOKABLE int MtoolBarArea(QMainWindow* o, QToolBar* x1) const { return o->toolBarArea(x1); }
    Q_INVOKABLE bool MtoolBarBreak(QMainWindow* o, QToolBar* x1) const { return o->toolBarBreak(x1); }
    Q_INVOKABLE int MtoolButtonStyle(QMainWindow* o) const { return o->toolButtonStyle(); }
    Q_INVOKABLE bool MunifiedTitleAndToolBarOnMac(QMainWindow* o) const { return o->unifiedTitleAndToolBarOnMac(); }
};

class Q60 : public Q108 { // QMenu
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LMenu(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0) { return new LMenu(u, x1, x2); }
    Q_INVOKABLE QAction* MactionAt(QMenu* o, const QPoint& x1) const { return o->actionAt(x1); }
    Q_INVOKABLE QRect MactionGeometry(QMenu* o, QAction* x1) const { return o->actionGeometry(x1); }
    Q_INVOKABLE QAction* MactiveAction(QMenu* o) const { return o->activeAction(); }
    Q_INVOKABLE QAction* MaddAction(QMenu* o, const QString& x1) { return o->addAction(x1); }
    Q_INVOKABLE QAction* MaddAction(QMenu* o, const QIcon& x1, const QString& x2) { return o->addAction(x1, x2); }
    Q_INVOKABLE QAction* MaddAction(QMenu* o, const QString& x1, const QObject* x2, const char* x3, const QKeySequence& x4 = 0) { return o->addAction(x1, x2, x3, x4); }
    Q_INVOKABLE QAction* MaddAction(QMenu* o, const QIcon& x1, const QString& x2, const QObject* x3, const char* x4, const QKeySequence& x5 = 0) { return o->addAction(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MaddAction(QMenu* o, QAction* x1) { o->addAction(x1); }
    Q_INVOKABLE QAction* MaddMenu(QMenu* o, QMenu* x1) { return o->addMenu(x1); }
    Q_INVOKABLE QMenu* MaddMenu(QMenu* o, const QString& x1) { return o->addMenu(x1); }
    Q_INVOKABLE QMenu* MaddMenu(QMenu* o, const QIcon& x1, const QString& x2) { return o->addMenu(x1, x2); }
    Q_INVOKABLE QAction* MaddSeparator(QMenu* o) { return o->addSeparator(); }
    Q_INVOKABLE void Mclear(QMenu* o) { o->clear(); }
    Q_INVOKABLE QAction* Mexec(QMenu* o) { return o->exec(); }
    Q_INVOKABLE QAction* Mexec(QMenu* o, const QPoint& x1, QAction* x2 = 0) { return o->exec(x1, x2); }
    Q_INVOKABLE void MhideTearOffMenu(QMenu* o) { o->hideTearOffMenu(); }
    Q_INVOKABLE QIcon Micon(QMenu* o) const { return o->icon(); }
    Q_INVOKABLE QAction* MinsertMenu(QMenu* o, QAction* x1, QMenu* x2) { return o->insertMenu(x1, x2); }
    Q_INVOKABLE QAction* MinsertSeparator(QMenu* o, QAction* x1) { return o->insertSeparator(x1); }
    Q_INVOKABLE bool MisEmpty(QMenu* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisTearOffEnabled(QMenu* o) const { return o->isTearOffEnabled(); }
    Q_INVOKABLE bool MisTearOffMenuVisible(QMenu* o) const { return o->isTearOffMenuVisible(); }
    Q_INVOKABLE QAction* MmenuAction(QMenu* o) const { return o->menuAction(); }
    Q_INVOKABLE void Mpopup(QMenu* o, const QPoint& x1, QAction* x2 = 0) { o->popup(x1, x2); }
    Q_INVOKABLE bool MseparatorsCollapsible(QMenu* o) const { return o->separatorsCollapsible(); }
    Q_INVOKABLE void MsetActiveAction(QMenu* o, QAction* x1) { o->setActiveAction(x1); }
    Q_INVOKABLE void MsetIcon(QMenu* o, const QIcon& x1) { o->setIcon(x1); }
    Q_INVOKABLE void MsetSeparatorsCollapsible(QMenu* o, bool x1) { o->setSeparatorsCollapsible(x1); }
    Q_INVOKABLE void MsetTearOffEnabled(QMenu* o, bool x1) { o->setTearOffEnabled(x1); }
    Q_INVOKABLE void MsetTitle(QMenu* o, const QString& x1) { o->setTitle(x1); }
    Q_INVOKABLE QString Mtitle(QMenu* o) const { return o->title(); }
    Q_INVOKABLE QSize MsizeHint(QMenu* o) const { return o->sizeHint(); }
    Q_INVOKABLE QAction* Sexec(QList<QAction*> x1, const QPoint& x2, QAction* x3, QWidget* x4) { return QMenu::exec(x1, x2, x3, x4); }
    Q_INVOKABLE QAction* Sexec(QList<QAction*> x1, const QPoint& x2, QAction* x3 = 0) { return QMenu::exec(x1, x2, x3); }
};

class Q61 : public Q108 { // QMenuBar
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LMenuBar(u, x1); }
    Q_INVOKABLE QAction* MactiveAction(QMenuBar* o) const { return o->activeAction(); }
    Q_INVOKABLE QAction* MaddAction(QMenuBar* o, const QString& x1) { return o->addAction(x1); }
    Q_INVOKABLE QAction* MaddAction(QMenuBar* o, const QString& x1, const QObject* x2, const char* x3) { return o->addAction(x1, x2, x3); }
    Q_INVOKABLE void MaddAction(QMenuBar* o, QAction* x1) { o->addAction(x1); }
    Q_INVOKABLE QAction* MaddMenu(QMenuBar* o, QMenu* x1) { return o->addMenu(x1); }
    Q_INVOKABLE QMenu* MaddMenu(QMenuBar* o, const QString& x1) { return o->addMenu(x1); }
    Q_INVOKABLE QMenu* MaddMenu(QMenuBar* o, const QIcon& x1, const QString& x2) { return o->addMenu(x1, x2); }
    Q_INVOKABLE QAction* MaddSeparator(QMenuBar* o) { return o->addSeparator(); }
    Q_INVOKABLE void Mclear(QMenuBar* o) { o->clear(); }
    Q_INVOKABLE QAction* MinsertMenu(QMenuBar* o, QAction* x1, QMenu* x2) { return o->insertMenu(x1, x2); }
    Q_INVOKABLE QAction* MinsertSeparator(QMenuBar* o, QAction* x1) { return o->insertSeparator(x1); }
    Q_INVOKABLE bool MisDefaultUp(QMenuBar* o) const { return o->isDefaultUp(); }
    Q_INVOKABLE bool MisNativeMenuBar(QMenuBar* o) const { return o->isNativeMenuBar(); }
    Q_INVOKABLE void MsetActiveAction(QMenuBar* o, QAction* x1) { o->setActiveAction(x1); }
    Q_INVOKABLE void MsetDefaultUp(QMenuBar* o, bool x1) { o->setDefaultUp(x1); }
    Q_INVOKABLE void MsetNativeMenuBar(QMenuBar* o, bool x1) { o->setNativeMenuBar(x1); }
    Q_INVOKABLE int MheightForWidth(QMenuBar* o, int x1) const { return o->heightForWidth(x1); }
    Q_INVOKABLE QSize MminimumSizeHint(QMenuBar* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QMenuBar* o) const { return o->sizeHint(); }
};

class Q62 : public Q28 { // QMessageBox
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LMessageBox(u, x1); }
    Q_INVOKABLE void* C(uint u, QMessageBox::Icon x1, const QString& x2, const QString& x3, QMessageBox::StandardButtons x4 = QMessageBox::NoButton, QWidget* x5 = 0, Qt::WindowFlags x6 = Qt::Dialog|Qt::MSWindowsFixedSizeDialogHint) { return new LMessageBox(u, x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MaddButton(QMessageBox* o, QAbstractButton* x1, QMessageBox::ButtonRole x2) { o->addButton(x1, x2); }
    Q_INVOKABLE QPushButton* MaddButton(QMessageBox* o, const QString& x1, QMessageBox::ButtonRole x2) { return o->addButton(x1, x2); }
    Q_INVOKABLE QPushButton* MaddButton(QMessageBox* o, QMessageBox::StandardButton x1) { return o->addButton(x1); }
    Q_INVOKABLE QAbstractButton* Mbutton(QMessageBox* o, QMessageBox::StandardButton x1) const { return o->button(x1); }
    Q_INVOKABLE int MbuttonRole(QMessageBox* o, QAbstractButton* x1) const { return o->buttonRole(x1); }
    Q_INVOKABLE QList<QAbstractButton*> Mbuttons(QMessageBox* o) const { return o->buttons(); }
    Q_INVOKABLE QAbstractButton* MclickedButton(QMessageBox* o) const { return o->clickedButton(); }
    Q_INVOKABLE QPushButton* MdefaultButton(QMessageBox* o) const { return o->defaultButton(); }
    Q_INVOKABLE QString MdetailedText(QMessageBox* o) const { return o->detailedText(); }
    Q_INVOKABLE QAbstractButton* MescapeButton(QMessageBox* o) const { return o->escapeButton(); }
    Q_INVOKABLE int Micon(QMessageBox* o) const { return o->icon(); }
    Q_INVOKABLE QPixmap MiconPixmap(QMessageBox* o) const { return o->iconPixmap(); }
    Q_INVOKABLE QString MinformativeText(QMessageBox* o) const { return o->informativeText(); }
    Q_INVOKABLE void Mopen(QMessageBox* o, QObject* x1, const char* x2) { o->open(x1, x2); }
    Q_INVOKABLE void MremoveButton(QMessageBox* o, QAbstractButton* x1) { o->removeButton(x1); }
    Q_INVOKABLE void MsetDefaultButton(QMessageBox* o, QPushButton* x1) { o->setDefaultButton(x1); }
    Q_INVOKABLE void MsetDefaultButton(QMessageBox* o, QMessageBox::StandardButton x1) { o->setDefaultButton(x1); }
    Q_INVOKABLE void MsetDetailedText(QMessageBox* o, const QString& x1) { o->setDetailedText(x1); }
    Q_INVOKABLE void MsetEscapeButton(QMessageBox* o, QAbstractButton* x1) { o->setEscapeButton(x1); }
    Q_INVOKABLE void MsetEscapeButton(QMessageBox* o, QMessageBox::StandardButton x1) { o->setEscapeButton(x1); }
    Q_INVOKABLE void MsetIcon(QMessageBox* o, QMessageBox::Icon x1) { o->setIcon(x1); }
    Q_INVOKABLE void MsetIconPixmap(QMessageBox* o, const QPixmap& x1) { o->setIconPixmap(x1); }
    Q_INVOKABLE void MsetInformativeText(QMessageBox* o, const QString& x1) { o->setInformativeText(x1); }
    Q_INVOKABLE void MsetStandardButtons(QMessageBox* o, QMessageBox::StandardButtons x1) { o->setStandardButtons(x1); }
    Q_INVOKABLE void MsetText(QMessageBox* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE void MsetTextFormat(QMessageBox* o, Qt::TextFormat x1) { o->setTextFormat(x1); }
    Q_INVOKABLE void MsetWindowModality(QMessageBox* o, Qt::WindowModality x1) { o->setWindowModality(x1); }
    Q_INVOKABLE void MsetWindowTitle(QMessageBox* o, const QString& x1) { o->setWindowTitle(x1); }
    Q_INVOKABLE int MstandardButton(QMessageBox* o, QAbstractButton* x1) const { return o->standardButton(x1); }
    Q_INVOKABLE int MstandardButtons(QMessageBox* o) const { return o->standardButtons(); }
    Q_INVOKABLE QString Mtext(QMessageBox* o) const { return o->text(); }
    Q_INVOKABLE int MtextFormat(QMessageBox* o) const { return o->textFormat(); }
    Q_INVOKABLE void MsetVisible(QMessageBox* o, bool x1) { o->setVisible(x1); }
    Q_INVOKABLE void Sabout(QWidget* x1, const QString& x2, const QString& x3) { QMessageBox::about(x1, x2, x3); }
    Q_INVOKABLE void SaboutQt(QWidget* x1, const QString& x2 = QString()) { QMessageBox::aboutQt(x1, x2); }
    Q_INVOKABLE int Scritical(QWidget* x1, const QString& x2, const QString& x3, QMessageBox::StandardButtons x4 = QMessageBox::Ok, QMessageBox::StandardButton x5 = QMessageBox::NoButton) { return QMessageBox::critical(x1, x2, x3, x4, x5); }
    Q_INVOKABLE int Sinformation(QWidget* x1, const QString& x2, const QString& x3, QMessageBox::StandardButtons x4 = QMessageBox::Ok, QMessageBox::StandardButton x5 = QMessageBox::NoButton) { return QMessageBox::information(x1, x2, x3, x4, x5); }
    Q_INVOKABLE int Squestion(QWidget* x1, const QString& x2, const QString& x3, QMessageBox::StandardButtons x4 = QMessageBox::Ok, QMessageBox::StandardButton x5 = QMessageBox::NoButton) { return QMessageBox::question(x1, x2, x3, x4, x5); }
    Q_INVOKABLE int Swarning(QWidget* x1, const QString& x2, const QString& x3, QMessageBox::StandardButtons x4 = QMessageBox::Ok, QMessageBox::StandardButton x5 = QMessageBox::NoButton) { return QMessageBox::warning(x1, x2, x3, x4, x5); }
};

class Q67 : public Q108 { // QProgressBar
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LProgressBar(u, x1); }
    Q_INVOKABLE int Malignment(QProgressBar* o) const { return o->alignment(); }
    Q_INVOKABLE QString Mformat(QProgressBar* o) const { return o->format(); }
    Q_INVOKABLE bool MinvertedAppearance(QProgressBar* o) { return o->invertedAppearance(); }
    Q_INVOKABLE bool MisTextVisible(QProgressBar* o) const { return o->isTextVisible(); }
    Q_INVOKABLE int Mmaximum(QProgressBar* o) const { return o->maximum(); }
    Q_INVOKABLE int Mminimum(QProgressBar* o) const { return o->minimum(); }
    Q_INVOKABLE int Morientation(QProgressBar* o) const { return o->orientation(); }
    Q_INVOKABLE void MsetAlignment(QProgressBar* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetFormat(QProgressBar* o, const QString& x1) { o->setFormat(x1); }
    Q_INVOKABLE void MsetInvertedAppearance(QProgressBar* o, bool x1) { o->setInvertedAppearance(x1); }
    Q_INVOKABLE void MsetTextDirection(QProgressBar* o, QProgressBar::Direction x1) { o->setTextDirection(x1); }
    Q_INVOKABLE void MsetTextVisible(QProgressBar* o, bool x1) { o->setTextVisible(x1); }
    Q_INVOKABLE QString Mtext(QProgressBar* o) const { return o->text(); }
    Q_INVOKABLE int MtextDirection(QProgressBar* o) { return o->textDirection(); }
    Q_INVOKABLE int Mvalue(QProgressBar* o) const { return o->value(); }
    Q_INVOKABLE QSize MminimumSizeHint(QProgressBar* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QProgressBar* o) const { return o->sizeHint(); }
};

class Q68 : public Q1 { // QPushButton
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LPushButton(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0) { return new LPushButton(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QIcon& x1, const QString& x2, QWidget* x3 = 0) { return new LPushButton(u, x1, x2, x3); }
    Q_INVOKABLE bool MautoDefault(QPushButton* o) const { return o->autoDefault(); }
    Q_INVOKABLE bool MisDefault(QPushButton* o) const { return o->isDefault(); }
    Q_INVOKABLE bool MisFlat(QPushButton* o) const { return o->isFlat(); }
    Q_INVOKABLE QMenu* Mmenu(QPushButton* o) const { return o->menu(); }
    Q_INVOKABLE void MsetAutoDefault(QPushButton* o, bool x1) { o->setAutoDefault(x1); }
    Q_INVOKABLE void MsetDefault(QPushButton* o, bool x1) { o->setDefault(x1); }
    Q_INVOKABLE void MsetFlat(QPushButton* o, bool x1) { o->setFlat(x1); }
    Q_INVOKABLE void MsetMenu(QPushButton* o, QMenu* x1) { o->setMenu(x1); }
    Q_INVOKABLE QSize MminimumSizeHint(QPushButton* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QPushButton* o) const { return o->sizeHint(); }
};

class Q69 : public Q1 { // QRadioButton
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LRadioButton(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0) { return new LRadioButton(u, x1, x2); }
    Q_INVOKABLE QSize MsizeHint(QRadioButton* o) const { return o->sizeHint(); }
};

class Q71 : public Q8 { // QScrollBar
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LScrollBar(u, x1); }
    Q_INVOKABLE void* C(uint u, Qt::Orientation x1, QWidget* x2 = 0) { return new LScrollBar(u, x1, x2); }
    Q_INVOKABLE bool Mevent(QScrollBar* o, QEvent* x1) { return o->event(x1); }
    Q_INVOKABLE QSize MsizeHint(QScrollBar* o) const { return o->sizeHint(); }
};

class Q73 : public Q8 { // QSlider
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LSlider(u, x1); }
    Q_INVOKABLE void* C(uint u, Qt::Orientation x1, QWidget* x2 = 0) { return new LSlider(u, x1, x2); }
    Q_INVOKABLE void MsetTickInterval(QSlider* o, int x1) { o->setTickInterval(x1); }
    Q_INVOKABLE void MsetTickPosition(QSlider* o, QSlider::TickPosition x1) { o->setTickPosition(x1); }
    Q_INVOKABLE int MtickInterval(QSlider* o) const { return o->tickInterval(); }
    Q_INVOKABLE int MtickPosition(QSlider* o) const { return o->tickPosition(); }
    Q_INVOKABLE bool Mevent(QSlider* o, QEvent* x1) { return o->event(x1); }
    Q_INVOKABLE QSize MminimumSizeHint(QSlider* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QSlider* o) const { return o->sizeHint(); }
};

class Q74 : public Q9 { // QSpinBox
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LSpinBox(u, x1); }
    Q_INVOKABLE QString McleanText(QSpinBox* o) const { return o->cleanText(); }
    Q_INVOKABLE int Mmaximum(QSpinBox* o) const { return o->maximum(); }
    Q_INVOKABLE int Mminimum(QSpinBox* o) const { return o->minimum(); }
    Q_INVOKABLE QString Mprefix(QSpinBox* o) const { return o->prefix(); }
    Q_INVOKABLE void MsetMaximum(QSpinBox* o, int x1) { o->setMaximum(x1); }
    Q_INVOKABLE void MsetMinimum(QSpinBox* o, int x1) { o->setMinimum(x1); }
    Q_INVOKABLE void MsetPrefix(QSpinBox* o, const QString& x1) { o->setPrefix(x1); }
    Q_INVOKABLE void MsetRange(QSpinBox* o, int x1, int x2) { o->setRange(x1, x2); }
    Q_INVOKABLE void MsetSingleStep(QSpinBox* o, int x1) { o->setSingleStep(x1); }
    Q_INVOKABLE void MsetSuffix(QSpinBox* o, const QString& x1) { o->setSuffix(x1); }
    Q_INVOKABLE int MsingleStep(QSpinBox* o) const { return o->singleStep(); }
    Q_INVOKABLE QString Msuffix(QSpinBox* o) const { return o->suffix(); }
    Q_INVOKABLE int Mvalue(QSpinBox* o) const { return o->value(); }
};

class Q75 : public Q108 { // QSplashScreen
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QPixmap& x1 = QPixmap(), Qt::WindowFlags x2 = 0) { return new LSplashScreen(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QWidget* x1, const QPixmap& x2 = QPixmap(), Qt::WindowFlags x3 = 0) { return new LSplashScreen(u, x1, x2, x3); }
    Q_INVOKABLE void Mfinish(QSplashScreen* o, QWidget* x1) { o->finish(x1); }
    Q_INVOKABLE const QPixmap Mpixmap(QSplashScreen* o) const { return o->pixmap(); }
    Q_INVOKABLE void Mrepaint(QSplashScreen* o) { o->repaint(); }
    Q_INVOKABLE void MsetPixmap(QSplashScreen* o, const QPixmap& x1) { o->setPixmap(x1); }
};

class Q76 : public Q37 { // QSplitter
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LSplitter(u, x1); }
    Q_INVOKABLE void* C(uint u, Qt::Orientation x1, QWidget* x2 = 0) { return new LSplitter(u, x1, x2); }
    Q_INVOKABLE void MaddWidget(QSplitter* o, QWidget* x1) { o->addWidget(x1); }
    Q_INVOKABLE bool MchildrenCollapsible(QSplitter* o) const { return o->childrenCollapsible(); }
    Q_INVOKABLE int Mcount(QSplitter* o) const { return o->count(); }
    Q_INVOKABLE int MhandleWidth(QSplitter* o) const { return o->handleWidth(); }
    Q_INVOKABLE int MindexOf(QSplitter* o, QWidget* x1) const { return o->indexOf(x1); }
    Q_INVOKABLE void MinsertWidget(QSplitter* o, int x1, QWidget* x2) { o->insertWidget(x1, x2); }
    Q_INVOKABLE bool MisCollapsible(QSplitter* o, int x1) const { return o->isCollapsible(x1); }
    Q_INVOKABLE bool MopaqueResize(QSplitter* o) const { return o->opaqueResize(); }
    Q_INVOKABLE int Morientation(QSplitter* o) const { return o->orientation(); }
    Q_INVOKABLE void Mrefresh(QSplitter* o) { o->refresh(); }
    Q_INVOKABLE bool MrestoreState(QSplitter* o, const QByteArray& x1) { return o->restoreState(x1); }
    Q_INVOKABLE QByteArray MsaveState(QSplitter* o) const { return o->saveState(); }
    Q_INVOKABLE void MsetChildrenCollapsible(QSplitter* o, bool x1) { o->setChildrenCollapsible(x1); }
    Q_INVOKABLE void MsetCollapsible(QSplitter* o, int x1, bool x2) { o->setCollapsible(x1, x2); }
    Q_INVOKABLE void MsetOpaqueResize(QSplitter* o, bool x1 = true) { o->setOpaqueResize(x1); }
    Q_INVOKABLE void MsetOrientation(QSplitter* o, Qt::Orientation x1) { o->setOrientation(x1); }
    Q_INVOKABLE void MsetSizes(QSplitter* o, const QList<int>& x1) { o->setSizes(x1); }
    Q_INVOKABLE void MsetStretchFactor(QSplitter* o, int x1, int x2) { o->setStretchFactor(x1, x2); }
    Q_INVOKABLE QList<int> Msizes(QSplitter* o) const { return o->sizes(); }
    Q_INVOKABLE QWidget* Mwidget(QSplitter* o, int x1) const { return o->widget(x1); }
    Q_INVOKABLE QSize MminimumSizeHint(QSplitter* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QSplitter* o) const { return o->sizeHint(); }
};

class Q78 : public Q37 { // QStackedWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LStackedWidget(u, x1); }
    Q_INVOKABLE int MaddWidget(QStackedWidget* o, QWidget* x1) { return o->addWidget(x1); }
    Q_INVOKABLE int Mcount(QStackedWidget* o) const { return o->count(); }
    Q_INVOKABLE int McurrentIndex(QStackedWidget* o) const { return o->currentIndex(); }
    Q_INVOKABLE QWidget* McurrentWidget(QStackedWidget* o) const { return o->currentWidget(); }
    Q_INVOKABLE int MindexOf(QStackedWidget* o, QWidget* x1) const { return o->indexOf(x1); }
    Q_INVOKABLE int MinsertWidget(QStackedWidget* o, int x1, QWidget* x2) { return o->insertWidget(x1, x2); }
    Q_INVOKABLE void MremoveWidget(QStackedWidget* o, QWidget* x1) { o->removeWidget(x1); }
    Q_INVOKABLE QWidget* Mwidget(QStackedWidget* o, int x1) const { return o->widget(x1); }
};

class Q80 : public Q108 { // QStatusBar
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LStatusBar(u, x1); }
    Q_INVOKABLE void MaddPermanentWidget(QStatusBar* o, QWidget* x1, int x2 = 0) { o->addPermanentWidget(x1, x2); }
    Q_INVOKABLE void MaddWidget(QStatusBar* o, QWidget* x1, int x2 = 0) { o->addWidget(x1, x2); }
    Q_INVOKABLE QString McurrentMessage(QStatusBar* o) const { return o->currentMessage(); }
    Q_INVOKABLE int MinsertPermanentWidget(QStatusBar* o, int x1, QWidget* x2, int x3 = 0) { return o->insertPermanentWidget(x1, x2, x3); }
    Q_INVOKABLE int MinsertWidget(QStatusBar* o, int x1, QWidget* x2, int x3 = 0) { return o->insertWidget(x1, x2, x3); }
    Q_INVOKABLE bool MisSizeGripEnabled(QStatusBar* o) const { return o->isSizeGripEnabled(); }
    Q_INVOKABLE void MremoveWidget(QStatusBar* o, QWidget* x1) { o->removeWidget(x1); }
    Q_INVOKABLE void MsetSizeGripEnabled(QStatusBar* o, bool x1) { o->setSizeGripEnabled(x1); }
};

class Q82 : public Q108 { // QTabBar
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LTabBar(u, x1); }
    Q_INVOKABLE int MaddTab(QTabBar* o, const QString& x1) { return o->addTab(x1); }
    Q_INVOKABLE int MaddTab(QTabBar* o, const QIcon& x1, const QString& x2) { return o->addTab(x1, x2); }
    Q_INVOKABLE int Mcount(QTabBar* o) const { return o->count(); }
    Q_INVOKABLE int McurrentIndex(QTabBar* o) const { return o->currentIndex(); }
    Q_INVOKABLE bool MdocumentMode(QTabBar* o) const { return o->documentMode(); }
    Q_INVOKABLE bool MdrawBase(QTabBar* o) const { return o->drawBase(); }
    Q_INVOKABLE int MelideMode(QTabBar* o) const { return o->elideMode(); }
    Q_INVOKABLE bool Mexpanding(QTabBar* o) const { return o->expanding(); }
    Q_INVOKABLE QSize MiconSize(QTabBar* o) const { return o->iconSize(); }
    Q_INVOKABLE int MinsertTab(QTabBar* o, int x1, const QString& x2) { return o->insertTab(x1, x2); }
    Q_INVOKABLE int MinsertTab(QTabBar* o, int x1, const QIcon& x2, const QString& x3) { return o->insertTab(x1, x2, x3); }
    Q_INVOKABLE bool MisMovable(QTabBar* o) const { return o->isMovable(); }
    Q_INVOKABLE bool MisTabEnabled(QTabBar* o, int x1) const { return o->isTabEnabled(x1); }
    Q_INVOKABLE void MmoveTab(QTabBar* o, int x1, int x2) { o->moveTab(x1, x2); }
    Q_INVOKABLE void MremoveTab(QTabBar* o, int x1) { o->removeTab(x1); }
    Q_INVOKABLE int MselectionBehaviorOnRemove(QTabBar* o) const { return o->selectionBehaviorOnRemove(); }
    Q_INVOKABLE void MsetDocumentMode(QTabBar* o, bool x1) { o->setDocumentMode(x1); }
    Q_INVOKABLE void MsetDrawBase(QTabBar* o, bool x1) { o->setDrawBase(x1); }
    Q_INVOKABLE void MsetElideMode(QTabBar* o, Qt::TextElideMode x1) { o->setElideMode(x1); }
    Q_INVOKABLE void MsetExpanding(QTabBar* o, bool x1) { o->setExpanding(x1); }
    Q_INVOKABLE void MsetIconSize(QTabBar* o, const QSize& x1) { o->setIconSize(x1); }
    Q_INVOKABLE void MsetMovable(QTabBar* o, bool x1) { o->setMovable(x1); }
    Q_INVOKABLE void MsetSelectionBehaviorOnRemove(QTabBar* o, QTabBar::SelectionBehavior x1) { o->setSelectionBehaviorOnRemove(x1); }
    Q_INVOKABLE void MsetShape(QTabBar* o, QTabBar::Shape x1) { o->setShape(x1); }
    Q_INVOKABLE void MsetTabButton(QTabBar* o, int x1, QTabBar::ButtonPosition x2, QWidget* x3) { o->setTabButton(x1, x2, x3); }
    Q_INVOKABLE void MsetTabData(QTabBar* o, int x1, const QVariant& x2) { o->setTabData(x1, x2); }
    Q_INVOKABLE void MsetTabEnabled(QTabBar* o, int x1, bool x2) { o->setTabEnabled(x1, x2); }
    Q_INVOKABLE void MsetTabIcon(QTabBar* o, int x1, const QIcon& x2) { o->setTabIcon(x1, x2); }
    Q_INVOKABLE void MsetTabText(QTabBar* o, int x1, const QString& x2) { o->setTabText(x1, x2); }
    Q_INVOKABLE void MsetTabTextColor(QTabBar* o, int x1, const QColor& x2) { o->setTabTextColor(x1, x2); }
    Q_INVOKABLE void MsetTabToolTip(QTabBar* o, int x1, const QString& x2) { o->setTabToolTip(x1, x2); }
    Q_INVOKABLE void MsetTabWhatsThis(QTabBar* o, int x1, const QString& x2) { o->setTabWhatsThis(x1, x2); }
    Q_INVOKABLE void MsetTabsClosable(QTabBar* o, bool x1) { o->setTabsClosable(x1); }
    Q_INVOKABLE void MsetUsesScrollButtons(QTabBar* o, bool x1) { o->setUsesScrollButtons(x1); }
    Q_INVOKABLE int Mshape(QTabBar* o) const { return o->shape(); }
    Q_INVOKABLE int MtabAt(QTabBar* o, const QPoint& x1) const { return o->tabAt(x1); }
    Q_INVOKABLE QWidget* MtabButton(QTabBar* o, int x1, QTabBar::ButtonPosition x2) const { return o->tabButton(x1, x2); }
    Q_INVOKABLE QVariant MtabData(QTabBar* o, int x1) const { return o->tabData(x1); }
    Q_INVOKABLE QIcon MtabIcon(QTabBar* o, int x1) const { return o->tabIcon(x1); }
    Q_INVOKABLE QRect MtabRect(QTabBar* o, int x1) const { return o->tabRect(x1); }
    Q_INVOKABLE QString MtabText(QTabBar* o, int x1) const { return o->tabText(x1); }
    Q_INVOKABLE QColor MtabTextColor(QTabBar* o, int x1) const { return o->tabTextColor(x1); }
    Q_INVOKABLE QString MtabToolTip(QTabBar* o, int x1) const { return o->tabToolTip(x1); }
    Q_INVOKABLE QString MtabWhatsThis(QTabBar* o, int x1) const { return o->tabWhatsThis(x1); }
    Q_INVOKABLE bool MtabsClosable(QTabBar* o) const { return o->tabsClosable(); }
    Q_INVOKABLE bool MusesScrollButtons(QTabBar* o) const { return o->usesScrollButtons(); }
    Q_INVOKABLE QSize MminimumSizeHint(QTabBar* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QTabBar* o) const { return o->sizeHint(); }
};

class Q83 : public Q108 { // QTabWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LTabWidget(u, x1); }
    Q_INVOKABLE int MaddTab(QTabWidget* o, QWidget* x1, const QString& x2) { return o->addTab(x1, x2); }
    Q_INVOKABLE int MaddTab(QTabWidget* o, QWidget* x1, const QIcon& x2, const QString& x3) { return o->addTab(x1, x2, x3); }
    Q_INVOKABLE void Mclear(QTabWidget* o) { o->clear(); }
    Q_INVOKABLE QWidget* McornerWidget(QTabWidget* o, Qt::Corner x1 = Qt::TopRightCorner) const { return o->cornerWidget(x1); }
    Q_INVOKABLE int Mcount(QTabWidget* o) const { return o->count(); }
    Q_INVOKABLE int McurrentIndex(QTabWidget* o) const { return o->currentIndex(); }
    Q_INVOKABLE QWidget* McurrentWidget(QTabWidget* o) const { return o->currentWidget(); }
    Q_INVOKABLE bool MdocumentMode(QTabWidget* o) const { return o->documentMode(); }
    Q_INVOKABLE int MelideMode(QTabWidget* o) const { return o->elideMode(); }
    Q_INVOKABLE QSize MiconSize(QTabWidget* o) const { return o->iconSize(); }
    Q_INVOKABLE int MindexOf(QTabWidget* o, QWidget* x1) const { return o->indexOf(x1); }
    Q_INVOKABLE int MinsertTab(QTabWidget* o, int x1, QWidget* x2, const QString& x3) { return o->insertTab(x1, x2, x3); }
    Q_INVOKABLE int MinsertTab(QTabWidget* o, int x1, QWidget* x2, const QIcon& x3, const QString& x4) { return o->insertTab(x1, x2, x3, x4); }
    Q_INVOKABLE bool MisMovable(QTabWidget* o) const { return o->isMovable(); }
    Q_INVOKABLE bool MisTabEnabled(QTabWidget* o, int x1) const { return o->isTabEnabled(x1); }
    Q_INVOKABLE void MremoveTab(QTabWidget* o, int x1) { o->removeTab(x1); }
    Q_INVOKABLE void MsetCornerWidget(QTabWidget* o, QWidget* x1, Qt::Corner x2 = Qt::TopRightCorner) { o->setCornerWidget(x1, x2); }
    Q_INVOKABLE void MsetDocumentMode(QTabWidget* o, bool x1) { o->setDocumentMode(x1); }
    Q_INVOKABLE void MsetElideMode(QTabWidget* o, Qt::TextElideMode x1) { o->setElideMode(x1); }
    Q_INVOKABLE void MsetIconSize(QTabWidget* o, const QSize& x1) { o->setIconSize(x1); }
    Q_INVOKABLE void MsetMovable(QTabWidget* o, bool x1) { o->setMovable(x1); }
    Q_INVOKABLE void MsetTabEnabled(QTabWidget* o, int x1, bool x2) { o->setTabEnabled(x1, x2); }
    Q_INVOKABLE void MsetTabIcon(QTabWidget* o, int x1, const QIcon& x2) { o->setTabIcon(x1, x2); }
    Q_INVOKABLE void MsetTabPosition(QTabWidget* o, QTabWidget::TabPosition x1) { o->setTabPosition(x1); }
    Q_INVOKABLE void MsetTabShape(QTabWidget* o, QTabWidget::TabShape x1) { o->setTabShape(x1); }
    Q_INVOKABLE void MsetTabText(QTabWidget* o, int x1, const QString& x2) { o->setTabText(x1, x2); }
    Q_INVOKABLE void MsetTabToolTip(QTabWidget* o, int x1, const QString& x2) { o->setTabToolTip(x1, x2); }
    Q_INVOKABLE void MsetTabWhatsThis(QTabWidget* o, int x1, const QString& x2) { o->setTabWhatsThis(x1, x2); }
    Q_INVOKABLE void MsetTabsClosable(QTabWidget* o, bool x1) { o->setTabsClosable(x1); }
    Q_INVOKABLE void MsetUsesScrollButtons(QTabWidget* o, bool x1) { o->setUsesScrollButtons(x1); }
    Q_INVOKABLE QIcon MtabIcon(QTabWidget* o, int x1) const { return o->tabIcon(x1); }
    Q_INVOKABLE int MtabPosition(QTabWidget* o) const { return o->tabPosition(); }
    Q_INVOKABLE int MtabShape(QTabWidget* o) const { return o->tabShape(); }
    Q_INVOKABLE QString MtabText(QTabWidget* o, int x1) const { return o->tabText(x1); }
    Q_INVOKABLE QString MtabToolTip(QTabWidget* o, int x1) const { return o->tabToolTip(x1); }
    Q_INVOKABLE QString MtabWhatsThis(QTabWidget* o, int x1) const { return o->tabWhatsThis(x1); }
    Q_INVOKABLE bool MtabsClosable(QTabWidget* o) const { return o->tabsClosable(); }
    Q_INVOKABLE bool MusesScrollButtons(QTabWidget* o) const { return o->usesScrollButtons(); }
    Q_INVOKABLE QWidget* Mwidget(QTabWidget* o, int x1) const { return o->widget(x1); }
    Q_INVOKABLE QSize MminimumSizeHint(QTabWidget* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QTabWidget* o) const { return o->sizeHint(); }
};

class Q86 : public Q92 { // QTextBlockGroup
    Q_OBJECT
public:
};

class Q90 : public Q92 { // QTextFrame
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QTextDocument* x1) { return new LTextFrame(u, x1); }
    Q_INVOKABLE QList<QTextFrame*> MchildFrames(QTextFrame* o) const { return o->childFrames(); }
    Q_INVOKABLE QTextCursor MfirstCursorPosition(QTextFrame* o) const { return o->firstCursorPosition(); }
    Q_INVOKABLE int MfirstPosition(QTextFrame* o) const { return o->firstPosition(); }
    Q_INVOKABLE QTextFrameFormat MframeFormat(QTextFrame* o) const { return o->frameFormat(); }
    Q_INVOKABLE QTextCursor MlastCursorPosition(QTextFrame* o) const { return o->lastCursorPosition(); }
    Q_INVOKABLE int MlastPosition(QTextFrame* o) const { return o->lastPosition(); }
    Q_INVOKABLE QTextFrame* MparentFrame(QTextFrame* o) const { return o->parentFrame(); }
    Q_INVOKABLE void MsetFrameFormat(QTextFrame* o, const QTextFrameFormat& x1) { o->setFrameFormat(x1); }
};

class Q91 : public Q86 { // QTextList
    Q_OBJECT
public:
    Q_INVOKABLE void Madd(QTextList* o, const QTextBlock& x1) { o->add(x1); }
    Q_INVOKABLE int Mcount(QTextList* o) const { return o->count(); }
    Q_INVOKABLE QTextListFormat Mformat(QTextList* o) const { return o->format(); }
    Q_INVOKABLE QTextBlock Mitem(QTextList* o, int x1) const { return o->item(x1); }
    Q_INVOKABLE int MitemNumber(QTextList* o, const QTextBlock& x1) const { return o->itemNumber(x1); }
    Q_INVOKABLE QString MitemText(QTextList* o, const QTextBlock& x1) const { return o->itemText(x1); }
    Q_INVOKABLE void Mremove(QTextList* o, const QTextBlock& x1) { o->remove(x1); }
    Q_INVOKABLE void MremoveItem(QTextList* o, int x1) { o->removeItem(x1); }
    Q_INVOKABLE void MsetFormat(QTextList* o, const QTextListFormat& x1) { o->setFormat(x1); }
};

class Q93 : public Q90 { // QTextTable
    Q_OBJECT
public:
    Q_INVOKABLE void MappendColumns(QTextTable* o, int x1) { o->appendColumns(x1); }
    Q_INVOKABLE void MappendRows(QTextTable* o, int x1) { o->appendRows(x1); }
    Q_INVOKABLE QTextTableCell McellAt(QTextTable* o, int x1, int x2) const { return o->cellAt(x1, x2); }
    Q_INVOKABLE QTextTableCell McellAt(QTextTable* o, int x1) const { return o->cellAt(x1); }
    Q_INVOKABLE QTextTableCell McellAt(QTextTable* o, const QTextCursor& x1) const { return o->cellAt(x1); }
    Q_INVOKABLE int Mcolumns(QTextTable* o) const { return o->columns(); }
    Q_INVOKABLE QTextTableFormat Mformat(QTextTable* o) const { return o->format(); }
    Q_INVOKABLE void MinsertColumns(QTextTable* o, int x1, int x2) { o->insertColumns(x1, x2); }
    Q_INVOKABLE void MinsertRows(QTextTable* o, int x1, int x2) { o->insertRows(x1, x2); }
    Q_INVOKABLE void MmergeCells(QTextTable* o, int x1, int x2, int x3, int x4) { o->mergeCells(x1, x2, x3, x4); }
    Q_INVOKABLE void MmergeCells(QTextTable* o, const QTextCursor& x1) { o->mergeCells(x1); }
    Q_INVOKABLE void MremoveColumns(QTextTable* o, int x1, int x2) { o->removeColumns(x1, x2); }
    Q_INVOKABLE void MremoveRows(QTextTable* o, int x1, int x2) { o->removeRows(x1, x2); }
    Q_INVOKABLE void Mresize(QTextTable* o, int x1, int x2) { o->resize(x1, x2); }
    Q_INVOKABLE QTextCursor MrowEnd(QTextTable* o, const QTextCursor& x1) const { return o->rowEnd(x1); }
    Q_INVOKABLE QTextCursor MrowStart(QTextTable* o, const QTextCursor& x1) const { return o->rowStart(x1); }
    Q_INVOKABLE int Mrows(QTextTable* o) const { return o->rows(); }
    Q_INVOKABLE void MsetFormat(QTextTable* o, const QTextTableFormat& x1) { o->setFormat(x1); }
    Q_INVOKABLE void MsplitCell(QTextTable* o, int x1, int x2, int x3, int x4) { o->splitCell(x1, x2, x3, x4); }
};

class Q95 : public Q25 { // QTimeEdit
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LTimeEdit(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTime& x1, QWidget* x2 = 0) { return new LTimeEdit(u, x1, x2); }
};

class Q97 : public Q108 { // QToolBar
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0) { return new LToolBar(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LToolBar(u, x1); }
    Q_INVOKABLE QAction* MactionAt(QToolBar* o, const QPoint& x1) const { return o->actionAt(x1); }
    Q_INVOKABLE QAction* MactionAt(QToolBar* o, int x1, int x2) const { return o->actionAt(x1, x2); }
    Q_INVOKABLE void MaddAction(QToolBar* o, QAction* x1) { o->addAction(x1); }
    Q_INVOKABLE QAction* MaddAction(QToolBar* o, const QString& x1) { return o->addAction(x1); }
    Q_INVOKABLE QAction* MaddAction(QToolBar* o, const QIcon& x1, const QString& x2) { return o->addAction(x1, x2); }
    Q_INVOKABLE QAction* MaddAction(QToolBar* o, const QString& x1, const QObject* x2, const char* x3) { return o->addAction(x1, x2, x3); }
    Q_INVOKABLE QAction* MaddAction(QToolBar* o, const QIcon& x1, const QString& x2, const QObject* x3, const char* x4) { return o->addAction(x1, x2, x3, x4); }
    Q_INVOKABLE QAction* MaddSeparator(QToolBar* o) { return o->addSeparator(); }
    Q_INVOKABLE QAction* MaddWidget(QToolBar* o, QWidget* x1) { return o->addWidget(x1); }
    Q_INVOKABLE int MallowedAreas(QToolBar* o) const { return o->allowedAreas(); }
    Q_INVOKABLE void Mclear(QToolBar* o) { o->clear(); }
    Q_INVOKABLE QSize MiconSize(QToolBar* o) const { return o->iconSize(); }
    Q_INVOKABLE QAction* MinsertSeparator(QToolBar* o, QAction* x1) { return o->insertSeparator(x1); }
    Q_INVOKABLE QAction* MinsertWidget(QToolBar* o, QAction* x1, QWidget* x2) { return o->insertWidget(x1, x2); }
    Q_INVOKABLE bool MisAreaAllowed(QToolBar* o, Qt::ToolBarArea x1) const { return o->isAreaAllowed(x1); }
    Q_INVOKABLE bool MisFloatable(QToolBar* o) const { return o->isFloatable(); }
    Q_INVOKABLE bool MisFloating(QToolBar* o) const { return o->isFloating(); }
    Q_INVOKABLE bool MisMovable(QToolBar* o) const { return o->isMovable(); }
    Q_INVOKABLE int Morientation(QToolBar* o) const { return o->orientation(); }
    Q_INVOKABLE void MsetAllowedAreas(QToolBar* o, Qt::ToolBarAreas x1) { o->setAllowedAreas(x1); }
    Q_INVOKABLE void MsetFloatable(QToolBar* o, bool x1) { o->setFloatable(x1); }
    Q_INVOKABLE void MsetMovable(QToolBar* o, bool x1) { o->setMovable(x1); }
    Q_INVOKABLE void MsetOrientation(QToolBar* o, Qt::Orientation x1) { o->setOrientation(x1); }
    Q_INVOKABLE QAction* MtoggleViewAction(QToolBar* o) const { return o->toggleViewAction(); }
    Q_INVOKABLE int MtoolButtonStyle(QToolBar* o) const { return o->toolButtonStyle(); }
    Q_INVOKABLE QWidget* MwidgetForAction(QToolBar* o, QAction* x1) const { return o->widgetForAction(x1); }
};

class Q98 : public Q37 { // QToolBox
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) { return new LToolBox(u, x1, x2); }
    Q_INVOKABLE int MaddItem(QToolBox* o, QWidget* x1, const QIcon& x2, const QString& x3) { return o->addItem(x1, x2, x3); }
    Q_INVOKABLE int MaddItem(QToolBox* o, QWidget* x1, const QString& x2) { return o->addItem(x1, x2); }
    Q_INVOKABLE int Mcount(QToolBox* o) const { return o->count(); }
    Q_INVOKABLE int McurrentIndex(QToolBox* o) const { return o->currentIndex(); }
    Q_INVOKABLE QWidget* McurrentWidget(QToolBox* o) const { return o->currentWidget(); }
    Q_INVOKABLE int MindexOf(QToolBox* o, QWidget* x1) const { return o->indexOf(x1); }
    Q_INVOKABLE int MinsertItem(QToolBox* o, int x1, QWidget* x2, const QIcon& x3, const QString& x4) { return o->insertItem(x1, x2, x3, x4); }
    Q_INVOKABLE int MinsertItem(QToolBox* o, int x1, QWidget* x2, const QString& x3) { return o->insertItem(x1, x2, x3); }
    Q_INVOKABLE bool MisItemEnabled(QToolBox* o, int x1) const { return o->isItemEnabled(x1); }
    Q_INVOKABLE QIcon MitemIcon(QToolBox* o, int x1) const { return o->itemIcon(x1); }
    Q_INVOKABLE QString MitemText(QToolBox* o, int x1) const { return o->itemText(x1); }
    Q_INVOKABLE QString MitemToolTip(QToolBox* o, int x1) const { return o->itemToolTip(x1); }
    Q_INVOKABLE void MremoveItem(QToolBox* o, int x1) { o->removeItem(x1); }
    Q_INVOKABLE void MsetItemEnabled(QToolBox* o, int x1, bool x2) { o->setItemEnabled(x1, x2); }
    Q_INVOKABLE void MsetItemIcon(QToolBox* o, int x1, const QIcon& x2) { o->setItemIcon(x1, x2); }
    Q_INVOKABLE void MsetItemText(QToolBox* o, int x1, const QString& x2) { o->setItemText(x1, x2); }
    Q_INVOKABLE void MsetItemToolTip(QToolBox* o, int x1, const QString& x2) { o->setItemToolTip(x1, x2); }
    Q_INVOKABLE QWidget* Mwidget(QToolBox* o, int x1) const { return o->widget(x1); }
};

class Q99 : public Q1 { // QToolButton
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LToolButton(u, x1); }
    Q_INVOKABLE int MarrowType(QToolButton* o) const { return o->arrowType(); }
    Q_INVOKABLE bool MautoRaise(QToolButton* o) const { return o->autoRaise(); }
    Q_INVOKABLE QMenu* Mmenu(QToolButton* o) const { return o->menu(); }
    Q_INVOKABLE int MpopupMode(QToolButton* o) const { return o->popupMode(); }
    Q_INVOKABLE void MsetArrowType(QToolButton* o, Qt::ArrowType x1) { o->setArrowType(x1); }
    Q_INVOKABLE void MsetAutoRaise(QToolButton* o, bool x1) { o->setAutoRaise(x1); }
    Q_INVOKABLE void MsetMenu(QToolButton* o, QMenu* x1) { o->setMenu(x1); }
    Q_INVOKABLE void MsetPopupMode(QToolButton* o, QToolButton::ToolButtonPopupMode x1) { o->setPopupMode(x1); }
    Q_INVOKABLE int MtoolButtonStyle(QToolButton* o) const { return o->toolButtonStyle(); }
    Q_INVOKABLE QSize MminimumSizeHint(QToolButton* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QToolButton* o) const { return o->sizeHint(); }
};

class Q106 : public Q14 { // QVBoxLayout
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LVBoxLayout(u); }
    Q_INVOKABLE void* C(uint u, QWidget* x1) { return new LVBoxLayout(u, x1); }
};

class Q109 : public Q28 { // QWizard
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0, Qt::WindowFlags x2 = 0) { return new LWizard(u, x1, x2); }
    Q_INVOKABLE int MaddPage(QWizard* o, QWizardPage* x1) { return o->addPage(x1); }
    Q_INVOKABLE QAbstractButton* Mbutton(QWizard* o, QWizard::WizardButton x1) const { return o->button(x1); }
    Q_INVOKABLE QString MbuttonText(QWizard* o, QWizard::WizardButton x1) const { return o->buttonText(x1); }
    Q_INVOKABLE int McurrentId(QWizard* o) const { return o->currentId(); }
    Q_INVOKABLE QWizardPage* McurrentPage(QWizard* o) const { return o->currentPage(); }
    Q_INVOKABLE QVariant Mfield(QWizard* o, const QString& x1) const { return o->field(x1); }
    Q_INVOKABLE bool MhasVisitedPage(QWizard* o, int x1) const { return o->hasVisitedPage(x1); }
    Q_INVOKABLE int MnextId(QWizard* o) const { return o->nextId(); }
    Q_INVOKABLE int Moptions(QWizard* o) const { return o->options(); }
    Q_INVOKABLE QWizardPage* Mpage(QWizard* o, int x1) const { return o->page(x1); }
    Q_INVOKABLE QList<int> MpageIds(QWizard* o) const { return o->pageIds(); }
    Q_INVOKABLE QPixmap Mpixmap(QWizard* o, QWizard::WizardPixmap x1) const { return o->pixmap(x1); }
    Q_INVOKABLE void MremovePage(QWizard* o, int x1) { o->removePage(x1); }
    Q_INVOKABLE void MsetButton(QWizard* o, QWizard::WizardButton x1, QAbstractButton* x2) { o->setButton(x1, x2); }
    Q_INVOKABLE void MsetButtonText(QWizard* o, QWizard::WizardButton x1, const QString& x2) { o->setButtonText(x1, x2); }
    Q_INVOKABLE void MsetDefaultProperty(QWizard* o, const char* x1, const char* x2, const char* x3) { o->setDefaultProperty(x1, x2, x3); }
    Q_INVOKABLE void MsetField(QWizard* o, const QString& x1, const QVariant& x2) { o->setField(x1, x2); }
    Q_INVOKABLE void MsetOption(QWizard* o, QWizard::WizardOption x1, bool x2 = true) { o->setOption(x1, x2); }
    Q_INVOKABLE void MsetOptions(QWizard* o, QWizard::WizardOptions x1) { o->setOptions(x1); }
    Q_INVOKABLE void MsetPage(QWizard* o, int x1, QWizardPage* x2) { o->setPage(x1, x2); }
    Q_INVOKABLE void MsetPixmap(QWizard* o, QWizard::WizardPixmap x1, const QPixmap& x2) { o->setPixmap(x1, x2); }
    Q_INVOKABLE void MsetStartId(QWizard* o, int x1) { o->setStartId(x1); }
    Q_INVOKABLE void MsetSubTitleFormat(QWizard* o, Qt::TextFormat x1) { o->setSubTitleFormat(x1); }
    Q_INVOKABLE void MsetTitleFormat(QWizard* o, Qt::TextFormat x1) { o->setTitleFormat(x1); }
    Q_INVOKABLE void MsetWizardStyle(QWizard* o, QWizard::WizardStyle x1) { o->setWizardStyle(x1); }
    Q_INVOKABLE int MstartId(QWizard* o) const { return o->startId(); }
    Q_INVOKABLE int MsubTitleFormat(QWizard* o) const { return o->subTitleFormat(); }
    Q_INVOKABLE bool MtestOption(QWizard* o, QWizard::WizardOption x1) const { return o->testOption(x1); }
    Q_INVOKABLE int MtitleFormat(QWizard* o) const { return o->titleFormat(); }
    Q_INVOKABLE bool MvalidateCurrentPage(QWizard* o) { return o->validateCurrentPage(); }
    Q_INVOKABLE QList<int> MvisitedPages(QWizard* o) const { return o->visitedPages(); }
    Q_INVOKABLE int MwizardStyle(QWizard* o) const { return o->wizardStyle(); }
    Q_INVOKABLE void MsetVisible(QWizard* o, bool x1) { o->setVisible(x1); }
    Q_INVOKABLE QSize MsizeHint(QWizard* o) const { return o->sizeHint(); }
};

class Q7 : public Q37 { // QAbstractScrollArea
    Q_OBJECT
public:
    Q_INVOKABLE void MaddScrollBarWidget(QAbstractScrollArea* o, QWidget* x1, Qt::Alignment x2) { o->addScrollBarWidget(x1, x2); }
    Q_INVOKABLE QWidget* McornerWidget(QAbstractScrollArea* o) const { return o->cornerWidget(); }
    Q_INVOKABLE QScrollBar* MhorizontalScrollBar(QAbstractScrollArea* o) const { return o->horizontalScrollBar(); }
    Q_INVOKABLE int MhorizontalScrollBarPolicy(QAbstractScrollArea* o) const { return o->horizontalScrollBarPolicy(); }
    Q_INVOKABLE QSize MmaximumViewportSize(QAbstractScrollArea* o) const { return o->maximumViewportSize(); }
    Q_INVOKABLE QWidgetList MscrollBarWidgets(QAbstractScrollArea* o, Qt::Alignment x1) { return o->scrollBarWidgets(x1); }
    Q_INVOKABLE void MsetCornerWidget(QAbstractScrollArea* o, QWidget* x1) { o->setCornerWidget(x1); }
    Q_INVOKABLE void MsetHorizontalScrollBar(QAbstractScrollArea* o, QScrollBar* x1) { o->setHorizontalScrollBar(x1); }
    Q_INVOKABLE void MsetHorizontalScrollBarPolicy(QAbstractScrollArea* o, Qt::ScrollBarPolicy x1) { o->setHorizontalScrollBarPolicy(x1); }
    Q_INVOKABLE void MsetVerticalScrollBar(QAbstractScrollArea* o, QScrollBar* x1) { o->setVerticalScrollBar(x1); }
    Q_INVOKABLE void MsetVerticalScrollBarPolicy(QAbstractScrollArea* o, Qt::ScrollBarPolicy x1) { o->setVerticalScrollBarPolicy(x1); }
    Q_INVOKABLE void MsetViewport(QAbstractScrollArea* o, QWidget* x1) { o->setViewport(x1); }
    Q_INVOKABLE QScrollBar* MverticalScrollBar(QAbstractScrollArea* o) const { return o->verticalScrollBar(); }
    Q_INVOKABLE int MverticalScrollBarPolicy(QAbstractScrollArea* o) const { return o->verticalScrollBarPolicy(); }
    Q_INVOKABLE QWidget* Mviewport(QAbstractScrollArea* o) const { return o->viewport(); }
    Q_INVOKABLE QSize MminimumSizeHint(QAbstractScrollArea* o) const { return o->minimumSizeHint(); }
    Q_INVOKABLE QSize MsizeHint(QAbstractScrollArea* o) const { return o->sizeHint(); }
};

class Q21 : public Q68 { // QCommandLinkButton
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LCommandLinkButton(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0) { return new LCommandLinkButton(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const QString& x2, QWidget* x3 = 0) { return new LCommandLinkButton(u, x1, x2, x3); }
    Q_INVOKABLE QString Mdescription(QCommandLinkButton* o) const { return o->description(); }
    Q_INVOKABLE void MsetDescription(QCommandLinkButton* o, const QString& x1) { o->setDescription(x1); }
};

class Q24 : public Q25 { // QDateEdit
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LDateEdit(u, x1); }
    Q_INVOKABLE void* C(uint u, const QDate& x1, QWidget* x2 = 0) { return new LDateEdit(u, x1, x2); }
};

class Q43 : public Q7 { // QGraphicsView
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LGraphicsView(u, x1); }
    Q_INVOKABLE void* C(uint u, QGraphicsScene* x1, QWidget* x2 = 0) { return new LGraphicsView(u, x1, x2); }
    Q_INVOKABLE int Malignment(QGraphicsView* o) const { return o->alignment(); }
    Q_INVOKABLE QBrush MbackgroundBrush(QGraphicsView* o) const { return o->backgroundBrush(); }
    Q_INVOKABLE int McacheMode(QGraphicsView* o) const { return o->cacheMode(); }
    Q_INVOKABLE void McenterOn(QGraphicsView* o, const QPointF& x1) { o->centerOn(x1); }
    Q_INVOKABLE void McenterOn(QGraphicsView* o, qreal x1, qreal x2) { o->centerOn(x1, x2); }
    Q_INVOKABLE void McenterOn(QGraphicsView* o, const QGraphicsItem* x1) { o->centerOn(x1); }
    Q_INVOKABLE int MdragMode(QGraphicsView* o) const { return o->dragMode(); }
    Q_INVOKABLE void MensureVisible(QGraphicsView* o, const QRectF& x1, int x2 = 50, int x3 = 50) { o->ensureVisible(x1, x2, x3); }
    Q_INVOKABLE void MensureVisible(QGraphicsView* o, qreal x1, qreal x2, qreal x3, qreal x4, int x5 = 50, int x6 = 50) { o->ensureVisible(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MensureVisible(QGraphicsView* o, const QGraphicsItem* x1, int x2 = 50, int x3 = 50) { o->ensureVisible(x1, x2, x3); }
    Q_INVOKABLE void MfitInView(QGraphicsView* o, const QRectF& x1, Qt::AspectRatioMode x2 = Qt::IgnoreAspectRatio) { o->fitInView(x1, x2); }
    Q_INVOKABLE void MfitInView(QGraphicsView* o, qreal x1, qreal x2, qreal x3, qreal x4, Qt::AspectRatioMode x5 = Qt::IgnoreAspectRatio) { o->fitInView(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MfitInView(QGraphicsView* o, const QGraphicsItem* x1, Qt::AspectRatioMode x2 = Qt::IgnoreAspectRatio) { o->fitInView(x1, x2); }
    Q_INVOKABLE QBrush MforegroundBrush(QGraphicsView* o) const { return o->foregroundBrush(); }
    Q_INVOKABLE bool MisInteractive(QGraphicsView* o) const { return o->isInteractive(); }
    Q_INVOKABLE bool MisTransformed(QGraphicsView* o) const { return o->isTransformed(); }
    Q_INVOKABLE QGraphicsItem* MitemAt(QGraphicsView* o, const QPoint& x1) const { return o->itemAt(x1); }
    Q_INVOKABLE QGraphicsItem* MitemAt(QGraphicsView* o, int x1, int x2) const { return o->itemAt(x1, x2); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsView* o) const { return o->items(); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsView* o, const QPoint& x1) const { return o->items(x1); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsView* o, int x1, int x2) const { return o->items(x1, x2); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsView* o, int x1, int x2, int x3, int x4, Qt::ItemSelectionMode x5 = Qt::IntersectsItemShape) const { return o->items(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsView* o, const QRect& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { return o->items(x1, x2); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsView* o, const QPolygon& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { return o->items(x1, x2); }
    Q_INVOKABLE QList<QGraphicsItem*> Mitems(QGraphicsView* o, const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { return o->items(x1, x2); }
    Q_INVOKABLE QPoint MmapFromScene(QGraphicsView* o, const QPointF& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPolygon MmapFromScene(QGraphicsView* o, const QRectF& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPolygon MmapFromScene(QGraphicsView* o, const QPolygonF& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPainterPath MmapFromScene(QGraphicsView* o, const QPainterPath& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPoint MmapFromScene(QGraphicsView* o, qreal x1, qreal x2) const { return o->mapFromScene(x1, x2); }
    Q_INVOKABLE QPolygon MmapFromScene(QGraphicsView* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapFromScene(x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MmapToScene(QGraphicsView* o, const QPoint& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPolygonF MmapToScene(QGraphicsView* o, const QRect& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPolygonF MmapToScene(QGraphicsView* o, const QPolygon& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPainterPath MmapToScene(QGraphicsView* o, const QPainterPath& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPointF MmapToScene(QGraphicsView* o, int x1, int x2) const { return o->mapToScene(x1, x2); }
    Q_INVOKABLE QPolygonF MmapToScene(QGraphicsView* o, int x1, int x2, int x3, int x4) const { return o->mapToScene(x1, x2, x3, x4); }
    Q_INVOKABLE QMatrix Mmatrix(QGraphicsView* o) const { return o->matrix(); }
    Q_INVOKABLE int MoptimizationFlags(QGraphicsView* o) const { return o->optimizationFlags(); }
    Q_INVOKABLE void Mrender(QGraphicsView* o, QPainter* x1, const QRectF& x2 = QRectF(), const QRect& x3 = QRect(), Qt::AspectRatioMode x4 = Qt::KeepAspectRatio) { o->render(x1, x2, x3, x4); }
    Q_INVOKABLE int MrenderHints(QGraphicsView* o) const { return o->renderHints(); }
    Q_INVOKABLE void MresetCachedContent(QGraphicsView* o) { o->resetCachedContent(); }
    Q_INVOKABLE void MresetMatrix(QGraphicsView* o) { o->resetMatrix(); }
    Q_INVOKABLE void MresetTransform(QGraphicsView* o) { o->resetTransform(); }
    Q_INVOKABLE int MresizeAnchor(QGraphicsView* o) const { return o->resizeAnchor(); }
    Q_INVOKABLE void Mrotate(QGraphicsView* o, qreal x1) { o->rotate(x1); }
    Q_INVOKABLE int MrubberBandSelectionMode(QGraphicsView* o) const { return o->rubberBandSelectionMode(); }
    Q_INVOKABLE void Mscale(QGraphicsView* o, qreal x1, qreal x2) { o->scale(x1, x2); }
    Q_INVOKABLE QGraphicsScene* Mscene(QGraphicsView* o) const { return o->scene(); }
    Q_INVOKABLE QRectF MsceneRect(QGraphicsView* o) const { return o->sceneRect(); }
    Q_INVOKABLE void MsetAlignment(QGraphicsView* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetBackgroundBrush(QGraphicsView* o, const QBrush& x1) { o->setBackgroundBrush(x1); }
    Q_INVOKABLE void MsetCacheMode(QGraphicsView* o, QGraphicsView::CacheMode x1) { o->setCacheMode(x1); }
    Q_INVOKABLE void MsetDragMode(QGraphicsView* o, QGraphicsView::DragMode x1) { o->setDragMode(x1); }
    Q_INVOKABLE void MsetForegroundBrush(QGraphicsView* o, const QBrush& x1) { o->setForegroundBrush(x1); }
    Q_INVOKABLE void MsetInteractive(QGraphicsView* o, bool x1) { o->setInteractive(x1); }
    Q_INVOKABLE void MsetMatrix(QGraphicsView* o, const QMatrix& x1, bool x2 = false) { o->setMatrix(x1, x2); }
    Q_INVOKABLE void MsetOptimizationFlag(QGraphicsView* o, QGraphicsView::OptimizationFlag x1, bool x2 = true) { o->setOptimizationFlag(x1, x2); }
    Q_INVOKABLE void MsetOptimizationFlags(QGraphicsView* o, QGraphicsView::OptimizationFlags x1) { o->setOptimizationFlags(x1); }
    Q_INVOKABLE void MsetRenderHint(QGraphicsView* o, QPainter::RenderHint x1, bool x2 = true) { o->setRenderHint(x1, x2); }
    Q_INVOKABLE void MsetRenderHints(QGraphicsView* o, QPainter::RenderHints x1) { o->setRenderHints(x1); }
    Q_INVOKABLE void MsetResizeAnchor(QGraphicsView* o, QGraphicsView::ViewportAnchor x1) { o->setResizeAnchor(x1); }
    Q_INVOKABLE void MsetRubberBandSelectionMode(QGraphicsView* o, Qt::ItemSelectionMode x1) { o->setRubberBandSelectionMode(x1); }
    Q_INVOKABLE void MsetScene(QGraphicsView* o, QGraphicsScene* x1) { o->setScene(x1); }
    Q_INVOKABLE void MsetSceneRect(QGraphicsView* o, const QRectF& x1) { o->setSceneRect(x1); }
    Q_INVOKABLE void MsetSceneRect(QGraphicsView* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setSceneRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetTransform(QGraphicsView* o, const QTransform& x1, bool x2 = false) { o->setTransform(x1, x2); }
    Q_INVOKABLE void MsetTransformationAnchor(QGraphicsView* o, QGraphicsView::ViewportAnchor x1) { o->setTransformationAnchor(x1); }
    Q_INVOKABLE void MsetViewportUpdateMode(QGraphicsView* o, QGraphicsView::ViewportUpdateMode x1) { o->setViewportUpdateMode(x1); }
    Q_INVOKABLE void Mshear(QGraphicsView* o, qreal x1, qreal x2) { o->shear(x1, x2); }
    Q_INVOKABLE QTransform Mtransform(QGraphicsView* o) const { return o->transform(); }
    Q_INVOKABLE int MtransformationAnchor(QGraphicsView* o) const { return o->transformationAnchor(); }
    Q_INVOKABLE void Mtranslate(QGraphicsView* o, qreal x1, qreal x2) { o->translate(x1, x2); }
    Q_INVOKABLE QTransform MviewportTransform(QGraphicsView* o) const { return o->viewportTransform(); }
    Q_INVOKABLE int MviewportUpdateMode(QGraphicsView* o) const { return o->viewportUpdateMode(); }
    Q_INVOKABLE QVariant MinputMethodQuery(QGraphicsView* o, Qt::InputMethodQuery x1) const { return o->inputMethodQuery(x1); }
    Q_INVOKABLE QSize MsizeHint(QGraphicsView* o) const { return o->sizeHint(); }
};

class Q66 : public Q7 { // QPlainTextEdit
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LPlainTextEdit(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0) { return new LPlainTextEdit(u, x1, x2); }
    Q_INVOKABLE bool MbackgroundVisible(QPlainTextEdit* o) const { return o->backgroundVisible(); }
    Q_INVOKABLE int MblockCount(QPlainTextEdit* o) const { return o->blockCount(); }
    Q_INVOKABLE bool McanPaste(QPlainTextEdit* o) const { return o->canPaste(); }
    Q_INVOKABLE bool McenterOnScroll(QPlainTextEdit* o) const { return o->centerOnScroll(); }
    Q_INVOKABLE QMenu* McreateStandardContextMenu(QPlainTextEdit* o) { return o->createStandardContextMenu(); }
    Q_INVOKABLE QTextCharFormat McurrentCharFormat(QPlainTextEdit* o) const { return o->currentCharFormat(); }
    Q_INVOKABLE QTextCursor McursorForPosition(QPlainTextEdit* o, const QPoint& x1) const { return o->cursorForPosition(x1); }
    Q_INVOKABLE QRect McursorRect(QPlainTextEdit* o, const QTextCursor& x1) const { return o->cursorRect(x1); }
    Q_INVOKABLE QRect McursorRect(QPlainTextEdit* o) const { return o->cursorRect(); }
    Q_INVOKABLE int McursorWidth(QPlainTextEdit* o) const { return o->cursorWidth(); }
    Q_INVOKABLE QTextDocument* Mdocument(QPlainTextEdit* o) const { return o->document(); }
    Q_INVOKABLE QString MdocumentTitle(QPlainTextEdit* o) const { return o->documentTitle(); }
    Q_INVOKABLE void MensureCursorVisible(QPlainTextEdit* o) { o->ensureCursorVisible(); }
    Q_INVOKABLE QList<QTextEdit::ExtraSelection> MextraSelections(QPlainTextEdit* o) const { return o->extraSelections(); }
    Q_INVOKABLE bool Mfind(QPlainTextEdit* o, const QString& x1, QTextDocument::FindFlags x2 = 0) { return o->find(x1, x2); }
    Q_INVOKABLE bool MisReadOnly(QPlainTextEdit* o) const { return o->isReadOnly(); }
    Q_INVOKABLE bool MisUndoRedoEnabled(QPlainTextEdit* o) const { return o->isUndoRedoEnabled(); }
    Q_INVOKABLE int MlineWrapMode(QPlainTextEdit* o) const { return o->lineWrapMode(); }
    Q_INVOKABLE QVariant MloadResource(QPlainTextEdit* o, int x1, const QUrl& x2) { return o->loadResource(x1, x2); }
    Q_INVOKABLE int MmaximumBlockCount(QPlainTextEdit* o) const { return o->maximumBlockCount(); }
    Q_INVOKABLE void MmergeCurrentCharFormat(QPlainTextEdit* o, const QTextCharFormat& x1) { o->mergeCurrentCharFormat(x1); }
    Q_INVOKABLE void MmoveCursor(QPlainTextEdit* o, QTextCursor::MoveOperation x1, QTextCursor::MoveMode x2 = QTextCursor::MoveAnchor) { o->moveCursor(x1, x2); }
    Q_INVOKABLE bool MoverwriteMode(QPlainTextEdit* o) const { return o->overwriteMode(); }
    Q_INVOKABLE void Mprint(QPlainTextEdit* o, QPrinter* x1) const { o->print(x1); }
    Q_INVOKABLE void MsetBackgroundVisible(QPlainTextEdit* o, bool x1) { o->setBackgroundVisible(x1); }
    Q_INVOKABLE void MsetCenterOnScroll(QPlainTextEdit* o, bool x1) { o->setCenterOnScroll(x1); }
    Q_INVOKABLE void MsetCurrentCharFormat(QPlainTextEdit* o, const QTextCharFormat& x1) { o->setCurrentCharFormat(x1); }
    Q_INVOKABLE void MsetCursorWidth(QPlainTextEdit* o, int x1) { o->setCursorWidth(x1); }
    Q_INVOKABLE void MsetDocument(QPlainTextEdit* o, QTextDocument* x1) { o->setDocument(x1); }
    Q_INVOKABLE void MsetDocumentTitle(QPlainTextEdit* o, const QString& x1) { o->setDocumentTitle(x1); }
    Q_INVOKABLE void MsetExtraSelections(QPlainTextEdit* o, const QList<QTextEdit::ExtraSelection>& x1) { o->setExtraSelections(x1); }
    Q_INVOKABLE void MsetLineWrapMode(QPlainTextEdit* o, QPlainTextEdit::LineWrapMode x1) { o->setLineWrapMode(x1); }
    Q_INVOKABLE void MsetMaximumBlockCount(QPlainTextEdit* o, int x1) { o->setMaximumBlockCount(x1); }
    Q_INVOKABLE void MsetOverwriteMode(QPlainTextEdit* o, bool x1) { o->setOverwriteMode(x1); }
    Q_INVOKABLE void MsetReadOnly(QPlainTextEdit* o, bool x1) { o->setReadOnly(x1); }
    Q_INVOKABLE void MsetTabChangesFocus(QPlainTextEdit* o, bool x1) { o->setTabChangesFocus(x1); }
    Q_INVOKABLE void MsetTabStopWidth(QPlainTextEdit* o, int x1) { o->setTabStopWidth(x1); }
    Q_INVOKABLE void MsetTextCursor(QPlainTextEdit* o, const QTextCursor& x1) { o->setTextCursor(x1); }
    Q_INVOKABLE void MsetTextInteractionFlags(QPlainTextEdit* o, Qt::TextInteractionFlags x1) { o->setTextInteractionFlags(x1); }
    Q_INVOKABLE void MsetUndoRedoEnabled(QPlainTextEdit* o, bool x1) { o->setUndoRedoEnabled(x1); }
    Q_INVOKABLE void MsetWordWrapMode(QPlainTextEdit* o, QTextOption::WrapMode x1) { o->setWordWrapMode(x1); }
    Q_INVOKABLE bool MtabChangesFocus(QPlainTextEdit* o) const { return o->tabChangesFocus(); }
    Q_INVOKABLE int MtabStopWidth(QPlainTextEdit* o) const { return o->tabStopWidth(); }
    Q_INVOKABLE QTextCursor MtextCursor(QPlainTextEdit* o) const { return o->textCursor(); }
    Q_INVOKABLE int MtextInteractionFlags(QPlainTextEdit* o) const { return o->textInteractionFlags(); }
    Q_INVOKABLE QString MtoPlainText(QPlainTextEdit* o) const { return o->toPlainText(); }
    Q_INVOKABLE int MwordWrapMode(QPlainTextEdit* o) const { return o->wordWrapMode(); }
};

class Q70 : public Q7 { // QScrollArea
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LScrollArea(u, x1); }
    Q_INVOKABLE int Malignment(QScrollArea* o) const { return o->alignment(); }
    Q_INVOKABLE void MensureVisible(QScrollArea* o, int x1, int x2, int x3 = 50, int x4 = 50) { o->ensureVisible(x1, x2, x3, x4); }
    Q_INVOKABLE void MensureWidgetVisible(QScrollArea* o, QWidget* x1, int x2 = 50, int x3 = 50) { o->ensureWidgetVisible(x1, x2, x3); }
    Q_INVOKABLE void MsetAlignment(QScrollArea* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetWidget(QScrollArea* o, QWidget* x1) { o->setWidget(x1); }
    Q_INVOKABLE void MsetWidgetResizable(QScrollArea* o, bool x1) { o->setWidgetResizable(x1); }
    Q_INVOKABLE QWidget* MtakeWidget(QScrollArea* o) { return o->takeWidget(); }
    Q_INVOKABLE QWidget* Mwidget(QScrollArea* o) const { return o->widget(); }
    Q_INVOKABLE bool MwidgetResizable(QScrollArea* o) const { return o->widgetResizable(); }
    Q_INVOKABLE bool MfocusNextPrevChild(QScrollArea* o, bool x1) { return o->focusNextPrevChild(x1); }
    Q_INVOKABLE QSize MsizeHint(QScrollArea* o) const { return o->sizeHint(); }
};

class Q89 : public Q7 { // QTextEdit
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LTextEdit(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QWidget* x2 = 0) { return new LTextEdit(u, x1, x2); }
    Q_INVOKABLE bool MacceptRichText(QTextEdit* o) const { return o->acceptRichText(); }
    Q_INVOKABLE int Malignment(QTextEdit* o) const { return o->alignment(); }
    Q_INVOKABLE QString ManchorAt(QTextEdit* o, const QPoint& x1) const { return o->anchorAt(x1); }
    Q_INVOKABLE int MautoFormatting(QTextEdit* o) const { return o->autoFormatting(); }
    Q_INVOKABLE bool McanPaste(QTextEdit* o) const { return o->canPaste(); }
    Q_INVOKABLE QMenu* McreateStandardContextMenu(QTextEdit* o) { return o->createStandardContextMenu(); }
    Q_INVOKABLE QMenu* McreateStandardContextMenu(QTextEdit* o, const QPoint& x1) { return o->createStandardContextMenu(x1); }
    Q_INVOKABLE QTextCharFormat McurrentCharFormat(QTextEdit* o) const { return o->currentCharFormat(); }
    Q_INVOKABLE QFont McurrentFont(QTextEdit* o) const { return o->currentFont(); }
    Q_INVOKABLE QTextCursor McursorForPosition(QTextEdit* o, const QPoint& x1) const { return o->cursorForPosition(x1); }
    Q_INVOKABLE QRect McursorRect(QTextEdit* o, const QTextCursor& x1) const { return o->cursorRect(x1); }
    Q_INVOKABLE QRect McursorRect(QTextEdit* o) const { return o->cursorRect(); }
    Q_INVOKABLE int McursorWidth(QTextEdit* o) const { return o->cursorWidth(); }
    Q_INVOKABLE QTextDocument* Mdocument(QTextEdit* o) const { return o->document(); }
    Q_INVOKABLE QString MdocumentTitle(QTextEdit* o) const { return o->documentTitle(); }
    Q_INVOKABLE void MensureCursorVisible(QTextEdit* o) { o->ensureCursorVisible(); }
    Q_INVOKABLE bool Mfind(QTextEdit* o, const QString& x1, QTextDocument::FindFlags x2 = 0) { return o->find(x1, x2); }
    Q_INVOKABLE QString MfontFamily(QTextEdit* o) const { return o->fontFamily(); }
    Q_INVOKABLE bool MfontItalic(QTextEdit* o) const { return o->fontItalic(); }
    Q_INVOKABLE qreal MfontPointSize(QTextEdit* o) const { return o->fontPointSize(); }
    Q_INVOKABLE bool MfontUnderline(QTextEdit* o) const { return o->fontUnderline(); }
    Q_INVOKABLE int MfontWeight(QTextEdit* o) const { return o->fontWeight(); }
    Q_INVOKABLE bool MisReadOnly(QTextEdit* o) const { return o->isReadOnly(); }
    Q_INVOKABLE bool MisUndoRedoEnabled(QTextEdit* o) const { return o->isUndoRedoEnabled(); }
    Q_INVOKABLE int MlineWrapColumnOrWidth(QTextEdit* o) const { return o->lineWrapColumnOrWidth(); }
    Q_INVOKABLE int MlineWrapMode(QTextEdit* o) const { return o->lineWrapMode(); }
    Q_INVOKABLE QVariant MloadResource(QTextEdit* o, int x1, const QUrl& x2) { return o->loadResource(x1, x2); }
    Q_INVOKABLE void MmergeCurrentCharFormat(QTextEdit* o, const QTextCharFormat& x1) { o->mergeCurrentCharFormat(x1); }
    Q_INVOKABLE void MmoveCursor(QTextEdit* o, QTextCursor::MoveOperation x1, QTextCursor::MoveMode x2 = QTextCursor::MoveAnchor) { o->moveCursor(x1, x2); }
    Q_INVOKABLE bool MoverwriteMode(QTextEdit* o) const { return o->overwriteMode(); }
    Q_INVOKABLE void Mprint(QTextEdit* o, QPrinter* x1) const { o->print(x1); }
    Q_INVOKABLE void MsetAcceptRichText(QTextEdit* o, bool x1) { o->setAcceptRichText(x1); }
    Q_INVOKABLE void MsetAutoFormatting(QTextEdit* o, QTextEdit::AutoFormatting x1) { o->setAutoFormatting(x1); }
    Q_INVOKABLE void MsetCurrentCharFormat(QTextEdit* o, const QTextCharFormat& x1) { o->setCurrentCharFormat(x1); }
    Q_INVOKABLE void MsetCursorWidth(QTextEdit* o, int x1) { o->setCursorWidth(x1); }
    Q_INVOKABLE void MsetDocument(QTextEdit* o, QTextDocument* x1) { o->setDocument(x1); }
    Q_INVOKABLE void MsetDocumentTitle(QTextEdit* o, const QString& x1) { o->setDocumentTitle(x1); }
    Q_INVOKABLE void MsetLineWrapColumnOrWidth(QTextEdit* o, int x1) { o->setLineWrapColumnOrWidth(x1); }
    Q_INVOKABLE void MsetLineWrapMode(QTextEdit* o, QTextEdit::LineWrapMode x1) { o->setLineWrapMode(x1); }
    Q_INVOKABLE void MsetOverwriteMode(QTextEdit* o, bool x1) { o->setOverwriteMode(x1); }
    Q_INVOKABLE void MsetReadOnly(QTextEdit* o, bool x1) { o->setReadOnly(x1); }
    Q_INVOKABLE void MsetTabChangesFocus(QTextEdit* o, bool x1) { o->setTabChangesFocus(x1); }
    Q_INVOKABLE void MsetTabStopWidth(QTextEdit* o, int x1) { o->setTabStopWidth(x1); }
    Q_INVOKABLE void MsetTextCursor(QTextEdit* o, const QTextCursor& x1) { o->setTextCursor(x1); }
    Q_INVOKABLE void MsetTextInteractionFlags(QTextEdit* o, Qt::TextInteractionFlags x1) { o->setTextInteractionFlags(x1); }
    Q_INVOKABLE void MsetUndoRedoEnabled(QTextEdit* o, bool x1) { o->setUndoRedoEnabled(x1); }
    Q_INVOKABLE void MsetWordWrapMode(QTextEdit* o, QTextOption::WrapMode x1) { o->setWordWrapMode(x1); }
    Q_INVOKABLE bool MtabChangesFocus(QTextEdit* o) const { return o->tabChangesFocus(); }
    Q_INVOKABLE int MtabStopWidth(QTextEdit* o) const { return o->tabStopWidth(); }
    Q_INVOKABLE QColor MtextBackgroundColor(QTextEdit* o) const { return o->textBackgroundColor(); }
    Q_INVOKABLE QColor MtextColor(QTextEdit* o) const { return o->textColor(); }
    Q_INVOKABLE QTextCursor MtextCursor(QTextEdit* o) const { return o->textCursor(); }
    Q_INVOKABLE int MtextInteractionFlags(QTextEdit* o) const { return o->textInteractionFlags(); }
    Q_INVOKABLE QString MtoHtml(QTextEdit* o) const { return o->toHtml(); }
    Q_INVOKABLE QString MtoPlainText(QTextEdit* o) const { return o->toPlainText(); }
    Q_INVOKABLE int MwordWrapMode(QTextEdit* o) const { return o->wordWrapMode(); }
};

class Q4 : public Q7 { // QAbstractItemView
    Q_OBJECT
public:
    Q_INVOKABLE bool MalternatingRowColors(QAbstractItemView* o) const { return o->alternatingRowColors(); }
    Q_INVOKABLE int MautoScrollMargin(QAbstractItemView* o) const { return o->autoScrollMargin(); }
    Q_INVOKABLE void MclosePersistentEditor(QAbstractItemView* o, const QModelIndex& x1) { o->closePersistentEditor(x1); }
    Q_INVOKABLE QModelIndex McurrentIndex(QAbstractItemView* o) const { return o->currentIndex(); }
    Q_INVOKABLE int MdefaultDropAction(QAbstractItemView* o) const { return o->defaultDropAction(); }
    Q_INVOKABLE int MdragDropMode(QAbstractItemView* o) const { return o->dragDropMode(); }
    Q_INVOKABLE bool MdragDropOverwriteMode(QAbstractItemView* o) const { return o->dragDropOverwriteMode(); }
    Q_INVOKABLE bool MdragEnabled(QAbstractItemView* o) const { return o->dragEnabled(); }
    Q_INVOKABLE int MeditTriggers(QAbstractItemView* o) const { return o->editTriggers(); }
    Q_INVOKABLE bool MhasAutoScroll(QAbstractItemView* o) const { return o->hasAutoScroll(); }
    Q_INVOKABLE int MhorizontalScrollMode(QAbstractItemView* o) const { return o->horizontalScrollMode(); }
    Q_INVOKABLE QSize MiconSize(QAbstractItemView* o) const { return o->iconSize(); }
    Q_INVOKABLE QModelIndex MindexAt(QAbstractItemView* o, const QPoint& x1) const { return o->indexAt(x1); }
    Q_INVOKABLE QWidget* MindexWidget(QAbstractItemView* o, const QModelIndex& x1) const { return o->indexWidget(x1); }
    Q_INVOKABLE QAbstractItemDelegate* MitemDelegate(QAbstractItemView* o) const { return o->itemDelegate(); }
    Q_INVOKABLE QAbstractItemDelegate* MitemDelegate(QAbstractItemView* o, const QModelIndex& x1) const { return o->itemDelegate(x1); }
    Q_INVOKABLE QAbstractItemDelegate* MitemDelegateForColumn(QAbstractItemView* o, int x1) const { return o->itemDelegateForColumn(x1); }
    Q_INVOKABLE QAbstractItemDelegate* MitemDelegateForRow(QAbstractItemView* o, int x1) const { return o->itemDelegateForRow(x1); }
    Q_INVOKABLE void MkeyboardSearch(QAbstractItemView* o, const QString& x1) { o->keyboardSearch(x1); }
    Q_INVOKABLE QAbstractItemModel* Mmodel(QAbstractItemView* o) const { return o->model(); }
    Q_INVOKABLE void MopenPersistentEditor(QAbstractItemView* o, const QModelIndex& x1) { o->openPersistentEditor(x1); }
    Q_INVOKABLE QModelIndex MrootIndex(QAbstractItemView* o) const { return o->rootIndex(); }
    Q_INVOKABLE void MscrollTo(QAbstractItemView* o, const QModelIndex& x1, QAbstractItemView::ScrollHint x2 = QAbstractItemView::EnsureVisible) { o->scrollTo(x1, x2); }
    Q_INVOKABLE int MselectionBehavior(QAbstractItemView* o) const { return o->selectionBehavior(); }
    Q_INVOKABLE int MselectionMode(QAbstractItemView* o) const { return o->selectionMode(); }
    Q_INVOKABLE QItemSelectionModel* MselectionModel(QAbstractItemView* o) const { return o->selectionModel(); }
    Q_INVOKABLE void MsetAlternatingRowColors(QAbstractItemView* o, bool x1) { o->setAlternatingRowColors(x1); }
    Q_INVOKABLE void MsetAutoScroll(QAbstractItemView* o, bool x1) { o->setAutoScroll(x1); }
    Q_INVOKABLE void MsetAutoScrollMargin(QAbstractItemView* o, int x1) { o->setAutoScrollMargin(x1); }
    Q_INVOKABLE void MsetDefaultDropAction(QAbstractItemView* o, Qt::DropAction x1) { o->setDefaultDropAction(x1); }
    Q_INVOKABLE void MsetDragDropMode(QAbstractItemView* o, QAbstractItemView::DragDropMode x1) { o->setDragDropMode(x1); }
    Q_INVOKABLE void MsetDragDropOverwriteMode(QAbstractItemView* o, bool x1) { o->setDragDropOverwriteMode(x1); }
    Q_INVOKABLE void MsetDragEnabled(QAbstractItemView* o, bool x1) { o->setDragEnabled(x1); }
    Q_INVOKABLE void MsetDropIndicatorShown(QAbstractItemView* o, bool x1) { o->setDropIndicatorShown(x1); }
    Q_INVOKABLE void MsetEditTriggers(QAbstractItemView* o, QAbstractItemView::EditTriggers x1) { o->setEditTriggers(x1); }
    Q_INVOKABLE void MsetHorizontalScrollMode(QAbstractItemView* o, QAbstractItemView::ScrollMode x1) { o->setHorizontalScrollMode(x1); }
    Q_INVOKABLE void MsetIconSize(QAbstractItemView* o, const QSize& x1) { o->setIconSize(x1); }
    Q_INVOKABLE void MsetIndexWidget(QAbstractItemView* o, const QModelIndex& x1, QWidget* x2) { o->setIndexWidget(x1, x2); }
    Q_INVOKABLE void MsetItemDelegate(QAbstractItemView* o, QAbstractItemDelegate* x1) { o->setItemDelegate(x1); }
    Q_INVOKABLE void MsetItemDelegateForColumn(QAbstractItemView* o, int x1, QAbstractItemDelegate* x2) { o->setItemDelegateForColumn(x1, x2); }
    Q_INVOKABLE void MsetItemDelegateForRow(QAbstractItemView* o, int x1, QAbstractItemDelegate* x2) { o->setItemDelegateForRow(x1, x2); }
    Q_INVOKABLE void MsetModel(QAbstractItemView* o, QAbstractItemModel* x1) { o->setModel(x1); }
    Q_INVOKABLE void MsetSelectionBehavior(QAbstractItemView* o, QAbstractItemView::SelectionBehavior x1) { o->setSelectionBehavior(x1); }
    Q_INVOKABLE void MsetSelectionMode(QAbstractItemView* o, QAbstractItemView::SelectionMode x1) { o->setSelectionMode(x1); }
    Q_INVOKABLE void MsetSelectionModel(QAbstractItemView* o, QItemSelectionModel* x1) { o->setSelectionModel(x1); }
    Q_INVOKABLE void MsetTabKeyNavigation(QAbstractItemView* o, bool x1) { o->setTabKeyNavigation(x1); }
    Q_INVOKABLE void MsetTextElideMode(QAbstractItemView* o, Qt::TextElideMode x1) { o->setTextElideMode(x1); }
    Q_INVOKABLE void MsetVerticalScrollMode(QAbstractItemView* o, QAbstractItemView::ScrollMode x1) { o->setVerticalScrollMode(x1); }
    Q_INVOKABLE bool MshowDropIndicator(QAbstractItemView* o) const { return o->showDropIndicator(); }
    Q_INVOKABLE int MsizeHintForColumn(QAbstractItemView* o, int x1) const { return o->sizeHintForColumn(x1); }
    Q_INVOKABLE QSize MsizeHintForIndex(QAbstractItemView* o, const QModelIndex& x1) const { return o->sizeHintForIndex(x1); }
    Q_INVOKABLE int MsizeHintForRow(QAbstractItemView* o, int x1) const { return o->sizeHintForRow(x1); }
    Q_INVOKABLE bool MtabKeyNavigation(QAbstractItemView* o) const { return o->tabKeyNavigation(); }
    Q_INVOKABLE int MtextElideMode(QAbstractItemView* o) const { return o->textElideMode(); }
    Q_INVOKABLE int MverticalScrollMode(QAbstractItemView* o) const { return o->verticalScrollMode(); }
    Q_INVOKABLE QRect MvisualRect(QAbstractItemView* o, const QModelIndex& x1) const { return o->visualRect(x1); }
    Q_INVOKABLE QVariant MinputMethodQuery(QAbstractItemView* o, Qt::InputMethodQuery x1) const { return o->inputMethodQuery(x1); }
};

class Q19 : public Q4 { // QColumnView
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LColumnView(u, x1); }
    Q_INVOKABLE QList<int> McolumnWidths(QColumnView* o) const { return o->columnWidths(); }
    Q_INVOKABLE QWidget* MpreviewWidget(QColumnView* o) const { return o->previewWidget(); }
    Q_INVOKABLE bool MresizeGripsVisible(QColumnView* o) const { return o->resizeGripsVisible(); }
    Q_INVOKABLE void MsetColumnWidths(QColumnView* o, const QList<int>& x1) { o->setColumnWidths(x1); }
    Q_INVOKABLE void MsetPreviewWidget(QColumnView* o, QWidget* x1) { o->setPreviewWidget(x1); }
    Q_INVOKABLE void MsetResizeGripsVisible(QColumnView* o, bool x1) { o->setResizeGripsVisible(x1); }
    Q_INVOKABLE QModelIndex MindexAt(QColumnView* o, const QPoint& x1) const { return o->indexAt(x1); }
    Q_INVOKABLE void MscrollTo(QColumnView* o, const QModelIndex& x1, QColumnView::ScrollHint x2 = QColumnView::EnsureVisible) { o->scrollTo(x1, x2); }
    Q_INVOKABLE void MselectAll(QColumnView* o) { o->selectAll(); }
    Q_INVOKABLE void MsetModel(QColumnView* o, QAbstractItemModel* x1) { o->setModel(x1); }
    Q_INVOKABLE void MsetRootIndex(QColumnView* o, const QModelIndex& x1) { o->setRootIndex(x1); }
    Q_INVOKABLE void MsetSelectionModel(QColumnView* o, QItemSelectionModel* x1) { o->setSelectionModel(x1); }
    Q_INVOKABLE QSize MsizeHint(QColumnView* o) const { return o->sizeHint(); }
    Q_INVOKABLE QRect MvisualRect(QColumnView* o, const QModelIndex& x1) const { return o->visualRect(x1); }
};

class Q48 : public Q4 { // QHeaderView
    Q_OBJECT
public:
    Q_INVOKABLE bool McascadingSectionResizes(QHeaderView* o) const { return o->cascadingSectionResizes(); }
    Q_INVOKABLE int Mcount(QHeaderView* o) const { return o->count(); }
    Q_INVOKABLE int MdefaultAlignment(QHeaderView* o) const { return o->defaultAlignment(); }
    Q_INVOKABLE int MdefaultSectionSize(QHeaderView* o) const { return o->defaultSectionSize(); }
    Q_INVOKABLE int MhiddenSectionCount(QHeaderView* o) const { return o->hiddenSectionCount(); }
    Q_INVOKABLE void MhideSection(QHeaderView* o, int x1) { o->hideSection(x1); }
    Q_INVOKABLE bool MhighlightSections(QHeaderView* o) const { return o->highlightSections(); }
    Q_INVOKABLE bool MisClickable(QHeaderView* o) const { return o->isClickable(); }
    Q_INVOKABLE bool MisMovable(QHeaderView* o) const { return o->isMovable(); }
    Q_INVOKABLE bool MisSectionHidden(QHeaderView* o, int x1) const { return o->isSectionHidden(x1); }
    Q_INVOKABLE bool MisSortIndicatorShown(QHeaderView* o) const { return o->isSortIndicatorShown(); }
    Q_INVOKABLE int Mlength(QHeaderView* o) const { return o->length(); }
    Q_INVOKABLE int MlogicalIndex(QHeaderView* o, int x1) const { return o->logicalIndex(x1); }
    Q_INVOKABLE int MlogicalIndexAt(QHeaderView* o, int x1) const { return o->logicalIndexAt(x1); }
    Q_INVOKABLE int MlogicalIndexAt(QHeaderView* o, int x1, int x2) const { return o->logicalIndexAt(x1, x2); }
    Q_INVOKABLE int MlogicalIndexAt(QHeaderView* o, const QPoint& x1) const { return o->logicalIndexAt(x1); }
    Q_INVOKABLE int MminimumSectionSize(QHeaderView* o) const { return o->minimumSectionSize(); }
    Q_INVOKABLE void MmoveSection(QHeaderView* o, int x1, int x2) { o->moveSection(x1, x2); }
    Q_INVOKABLE int Moffset(QHeaderView* o) const { return o->offset(); }
    Q_INVOKABLE int Morientation(QHeaderView* o) const { return o->orientation(); }
    Q_INVOKABLE int MresizeMode(QHeaderView* o, int x1) const { return o->resizeMode(x1); }
    Q_INVOKABLE void MresizeSection(QHeaderView* o, int x1, int x2) { o->resizeSection(x1, x2); }
    Q_INVOKABLE void MresizeSections(QHeaderView* o, QHeaderView::ResizeMode x1) { o->resizeSections(x1); }
    Q_INVOKABLE bool MrestoreState(QHeaderView* o, const QByteArray& x1) { return o->restoreState(x1); }
    Q_INVOKABLE QByteArray MsaveState(QHeaderView* o) const { return o->saveState(); }
    Q_INVOKABLE int MsectionPosition(QHeaderView* o, int x1) const { return o->sectionPosition(x1); }
    Q_INVOKABLE int MsectionSize(QHeaderView* o, int x1) const { return o->sectionSize(x1); }
    Q_INVOKABLE int MsectionSizeHint(QHeaderView* o, int x1) const { return o->sectionSizeHint(x1); }
    Q_INVOKABLE int MsectionViewportPosition(QHeaderView* o, int x1) const { return o->sectionViewportPosition(x1); }
    Q_INVOKABLE bool MsectionsHidden(QHeaderView* o) const { return o->sectionsHidden(); }
    Q_INVOKABLE bool MsectionsMoved(QHeaderView* o) const { return o->sectionsMoved(); }
    Q_INVOKABLE void MsetCascadingSectionResizes(QHeaderView* o, bool x1) { o->setCascadingSectionResizes(x1); }
    Q_INVOKABLE void MsetClickable(QHeaderView* o, bool x1) { o->setClickable(x1); }
    Q_INVOKABLE void MsetDefaultAlignment(QHeaderView* o, Qt::Alignment x1) { o->setDefaultAlignment(x1); }
    Q_INVOKABLE void MsetDefaultSectionSize(QHeaderView* o, int x1) { o->setDefaultSectionSize(x1); }
    Q_INVOKABLE void MsetHighlightSections(QHeaderView* o, bool x1) { o->setHighlightSections(x1); }
    Q_INVOKABLE void MsetMinimumSectionSize(QHeaderView* o, int x1) { o->setMinimumSectionSize(x1); }
    Q_INVOKABLE void MsetMovable(QHeaderView* o, bool x1) { o->setMovable(x1); }
    Q_INVOKABLE void MsetResizeMode(QHeaderView* o, QHeaderView::ResizeMode x1) { o->setResizeMode(x1); }
    Q_INVOKABLE void MsetResizeMode(QHeaderView* o, int x1, QHeaderView::ResizeMode x2) { o->setResizeMode(x1, x2); }
    Q_INVOKABLE void MsetSectionHidden(QHeaderView* o, int x1, bool x2) { o->setSectionHidden(x1, x2); }
    Q_INVOKABLE void MsetSortIndicator(QHeaderView* o, int x1, Qt::SortOrder x2) { o->setSortIndicator(x1, x2); }
    Q_INVOKABLE void MsetSortIndicatorShown(QHeaderView* o, bool x1) { o->setSortIndicatorShown(x1); }
    Q_INVOKABLE void MsetStretchLastSection(QHeaderView* o, bool x1) { o->setStretchLastSection(x1); }
    Q_INVOKABLE void MshowSection(QHeaderView* o, int x1) { o->showSection(x1); }
    Q_INVOKABLE int MsortIndicatorOrder(QHeaderView* o) const { return o->sortIndicatorOrder(); }
    Q_INVOKABLE int MsortIndicatorSection(QHeaderView* o) const { return o->sortIndicatorSection(); }
    Q_INVOKABLE bool MstretchLastSection(QHeaderView* o) const { return o->stretchLastSection(); }
    Q_INVOKABLE int MstretchSectionCount(QHeaderView* o) const { return o->stretchSectionCount(); }
    Q_INVOKABLE void MswapSections(QHeaderView* o, int x1, int x2) { o->swapSections(x1, x2); }
    Q_INVOKABLE int MvisualIndex(QHeaderView* o, int x1) const { return o->visualIndex(x1); }
    Q_INVOKABLE int MvisualIndexAt(QHeaderView* o, int x1) const { return o->visualIndexAt(x1); }
    Q_INVOKABLE void Mreset(QHeaderView* o) { o->reset(); }
    Q_INVOKABLE void MsetModel(QHeaderView* o, QAbstractItemModel* x1) { o->setModel(x1); }
    Q_INVOKABLE QSize MsizeHint(QHeaderView* o) const { return o->sizeHint(); }
};

class Q57 : public Q4 { // QListView
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LListView(u, x1); }
    Q_INVOKABLE int MbatchSize(QListView* o) const { return o->batchSize(); }
    Q_INVOKABLE void MclearPropertyFlags(QListView* o) { o->clearPropertyFlags(); }
    Q_INVOKABLE int Mflow(QListView* o) const { return o->flow(); }
    Q_INVOKABLE QSize MgridSize(QListView* o) const { return o->gridSize(); }
    Q_INVOKABLE bool MisRowHidden(QListView* o, int x1) const { return o->isRowHidden(x1); }
    Q_INVOKABLE bool MisSelectionRectVisible(QListView* o) const { return o->isSelectionRectVisible(); }
    Q_INVOKABLE bool MisWrapping(QListView* o) const { return o->isWrapping(); }
    Q_INVOKABLE int MlayoutMode(QListView* o) const { return o->layoutMode(); }
    Q_INVOKABLE int MmodelColumn(QListView* o) const { return o->modelColumn(); }
    Q_INVOKABLE int Mmovement(QListView* o) const { return o->movement(); }
    Q_INVOKABLE int MresizeMode(QListView* o) const { return o->resizeMode(); }
    Q_INVOKABLE void MsetBatchSize(QListView* o, int x1) { o->setBatchSize(x1); }
    Q_INVOKABLE void MsetFlow(QListView* o, QListView::Flow x1) { o->setFlow(x1); }
    Q_INVOKABLE void MsetGridSize(QListView* o, const QSize& x1) { o->setGridSize(x1); }
    Q_INVOKABLE void MsetLayoutMode(QListView* o, QListView::LayoutMode x1) { o->setLayoutMode(x1); }
    Q_INVOKABLE void MsetModelColumn(QListView* o, int x1) { o->setModelColumn(x1); }
    Q_INVOKABLE void MsetMovement(QListView* o, QListView::Movement x1) { o->setMovement(x1); }
    Q_INVOKABLE void MsetResizeMode(QListView* o, QListView::ResizeMode x1) { o->setResizeMode(x1); }
    Q_INVOKABLE void MsetRowHidden(QListView* o, int x1, bool x2) { o->setRowHidden(x1, x2); }
    Q_INVOKABLE void MsetSelectionRectVisible(QListView* o, bool x1) { o->setSelectionRectVisible(x1); }
    Q_INVOKABLE void MsetSpacing(QListView* o, int x1) { o->setSpacing(x1); }
    Q_INVOKABLE void MsetUniformItemSizes(QListView* o, bool x1) { o->setUniformItemSizes(x1); }
    Q_INVOKABLE void MsetViewMode(QListView* o, QListView::ViewMode x1) { o->setViewMode(x1); }
    Q_INVOKABLE void MsetWordWrap(QListView* o, bool x1) { o->setWordWrap(x1); }
    Q_INVOKABLE void MsetWrapping(QListView* o, bool x1) { o->setWrapping(x1); }
    Q_INVOKABLE int Mspacing(QListView* o) const { return o->spacing(); }
    Q_INVOKABLE bool MuniformItemSizes(QListView* o) const { return o->uniformItemSizes(); }
    Q_INVOKABLE int MviewMode(QListView* o) const { return o->viewMode(); }
    Q_INVOKABLE bool MwordWrap(QListView* o) const { return o->wordWrap(); }
    Q_INVOKABLE QModelIndex MindexAt(QListView* o, const QPoint& x1) const { return o->indexAt(x1); }
    Q_INVOKABLE void MscrollTo(QListView* o, const QModelIndex& x1, QListView::ScrollHint x2 = QListView::EnsureVisible) { o->scrollTo(x1, x2); }
    Q_INVOKABLE QRect MvisualRect(QListView* o, const QModelIndex& x1) const { return o->visualRect(x1); }
};

class Q58 : public Q57 { // QListWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LListWidget(u, x1); }
    Q_INVOKABLE void MaddItem(QListWidget* o, const QString& x1) { o->addItem(x1); }
    Q_INVOKABLE void MaddItem(QListWidget* o, QListWidgetItem* x1) { o->addItem(x1); }
    Q_INVOKABLE void MaddItems(QListWidget* o, const QStringList& x1) { o->addItems(x1); }
    Q_INVOKABLE void MclosePersistentEditor(QListWidget* o, QListWidgetItem* x1) { o->closePersistentEditor(x1); }
    Q_INVOKABLE int Mcount(QListWidget* o) const { return o->count(); }
    Q_INVOKABLE QListWidgetItem* McurrentItem(QListWidget* o) const { return o->currentItem(); }
    Q_INVOKABLE int McurrentRow(QListWidget* o) const { return o->currentRow(); }
    Q_INVOKABLE void MeditItem(QListWidget* o, QListWidgetItem* x1) { o->editItem(x1); }
    Q_INVOKABLE QList<QListWidgetItem*> MfindItems(QListWidget* o, const QString& x1, Qt::MatchFlags x2) const { return o->findItems(x1, x2); }
    Q_INVOKABLE void MinsertItem(QListWidget* o, int x1, QListWidgetItem* x2) { o->insertItem(x1, x2); }
    Q_INVOKABLE void MinsertItem(QListWidget* o, int x1, const QString& x2) { o->insertItem(x1, x2); }
    Q_INVOKABLE void MinsertItems(QListWidget* o, int x1, const QStringList& x2) { o->insertItems(x1, x2); }
    Q_INVOKABLE bool MisSortingEnabled(QListWidget* o) const { return o->isSortingEnabled(); }
    Q_INVOKABLE QListWidgetItem* Mitem(QListWidget* o, int x1) const { return o->item(x1); }
    Q_INVOKABLE QListWidgetItem* MitemAt(QListWidget* o, const QPoint& x1) const { return o->itemAt(x1); }
    Q_INVOKABLE QListWidgetItem* MitemAt(QListWidget* o, int x1, int x2) const { return o->itemAt(x1, x2); }
    Q_INVOKABLE QWidget* MitemWidget(QListWidget* o, QListWidgetItem* x1) const { return o->itemWidget(x1); }
    Q_INVOKABLE void MopenPersistentEditor(QListWidget* o, QListWidgetItem* x1) { o->openPersistentEditor(x1); }
    Q_INVOKABLE void MremoveItemWidget(QListWidget* o, QListWidgetItem* x1) { o->removeItemWidget(x1); }
    Q_INVOKABLE int Mrow(QListWidget* o, const QListWidgetItem* x1) const { return o->row(x1); }
    Q_INVOKABLE QList<QListWidgetItem*> MselectedItems(QListWidget* o) const { return o->selectedItems(); }
    Q_INVOKABLE void MsetCurrentItem(QListWidget* o, QListWidgetItem* x1) { o->setCurrentItem(x1); }
    Q_INVOKABLE void MsetCurrentItem(QListWidget* o, QListWidgetItem* x1, QItemSelectionModel::SelectionFlags x2) { o->setCurrentItem(x1, x2); }
    Q_INVOKABLE void MsetCurrentRow(QListWidget* o, int x1) { o->setCurrentRow(x1); }
    Q_INVOKABLE void MsetCurrentRow(QListWidget* o, int x1, QItemSelectionModel::SelectionFlags x2) { o->setCurrentRow(x1, x2); }
    Q_INVOKABLE void MsetItemWidget(QListWidget* o, QListWidgetItem* x1, QWidget* x2) { o->setItemWidget(x1, x2); }
    Q_INVOKABLE void MsetSortingEnabled(QListWidget* o, bool x1) { o->setSortingEnabled(x1); }
    Q_INVOKABLE void MsortItems(QListWidget* o, Qt::SortOrder x1 = Qt::AscendingOrder) { o->sortItems(x1); }
    Q_INVOKABLE QListWidgetItem* MtakeItem(QListWidget* o, int x1) { return o->takeItem(x1); }
    Q_INVOKABLE QRect MvisualItemRect(QListWidget* o, const QListWidgetItem* x1) const { return o->visualItemRect(x1); }
    Q_INVOKABLE void MdropEvent(QListWidget* o, QDropEvent* x1) { o->dropEvent(x1); }
};

class Q84 : public Q4 { // QTableView
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LTableView(u, x1); }
    Q_INVOKABLE void MclearSpans(QTableView* o) { o->clearSpans(); }
    Q_INVOKABLE int McolumnAt(QTableView* o, int x1) const { return o->columnAt(x1); }
    Q_INVOKABLE int McolumnSpan(QTableView* o, int x1, int x2) const { return o->columnSpan(x1, x2); }
    Q_INVOKABLE int McolumnViewportPosition(QTableView* o, int x1) const { return o->columnViewportPosition(x1); }
    Q_INVOKABLE int McolumnWidth(QTableView* o, int x1) const { return o->columnWidth(x1); }
    Q_INVOKABLE int MgridStyle(QTableView* o) const { return o->gridStyle(); }
    Q_INVOKABLE QHeaderView* MhorizontalHeader(QTableView* o) const { return o->horizontalHeader(); }
    Q_INVOKABLE bool MisColumnHidden(QTableView* o, int x1) const { return o->isColumnHidden(x1); }
    Q_INVOKABLE bool MisCornerButtonEnabled(QTableView* o) const { return o->isCornerButtonEnabled(); }
    Q_INVOKABLE bool MisRowHidden(QTableView* o, int x1) const { return o->isRowHidden(x1); }
    Q_INVOKABLE bool MisSortingEnabled(QTableView* o) const { return o->isSortingEnabled(); }
    Q_INVOKABLE int MrowAt(QTableView* o, int x1) const { return o->rowAt(x1); }
    Q_INVOKABLE int MrowHeight(QTableView* o, int x1) const { return o->rowHeight(x1); }
    Q_INVOKABLE int MrowSpan(QTableView* o, int x1, int x2) const { return o->rowSpan(x1, x2); }
    Q_INVOKABLE int MrowViewportPosition(QTableView* o, int x1) const { return o->rowViewportPosition(x1); }
    Q_INVOKABLE void MsetColumnHidden(QTableView* o, int x1, bool x2) { o->setColumnHidden(x1, x2); }
    Q_INVOKABLE void MsetColumnWidth(QTableView* o, int x1, int x2) { o->setColumnWidth(x1, x2); }
    Q_INVOKABLE void MsetCornerButtonEnabled(QTableView* o, bool x1) { o->setCornerButtonEnabled(x1); }
    Q_INVOKABLE void MsetGridStyle(QTableView* o, Qt::PenStyle x1) { o->setGridStyle(x1); }
    Q_INVOKABLE void MsetHorizontalHeader(QTableView* o, QHeaderView* x1) { o->setHorizontalHeader(x1); }
    Q_INVOKABLE void MsetRowHeight(QTableView* o, int x1, int x2) { o->setRowHeight(x1, x2); }
    Q_INVOKABLE void MsetRowHidden(QTableView* o, int x1, bool x2) { o->setRowHidden(x1, x2); }
    Q_INVOKABLE void MsetSortingEnabled(QTableView* o, bool x1) { o->setSortingEnabled(x1); }
    Q_INVOKABLE void MsetSpan(QTableView* o, int x1, int x2, int x3, int x4) { o->setSpan(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetVerticalHeader(QTableView* o, QHeaderView* x1) { o->setVerticalHeader(x1); }
    Q_INVOKABLE void MsetWordWrap(QTableView* o, bool x1) { o->setWordWrap(x1); }
    Q_INVOKABLE bool MshowGrid(QTableView* o) const { return o->showGrid(); }
    Q_INVOKABLE void MsortByColumn(QTableView* o, int x1, Qt::SortOrder x2) { o->sortByColumn(x1, x2); }
    Q_INVOKABLE QHeaderView* MverticalHeader(QTableView* o) const { return o->verticalHeader(); }
    Q_INVOKABLE bool MwordWrap(QTableView* o) const { return o->wordWrap(); }
    Q_INVOKABLE QModelIndex MindexAt(QTableView* o, const QPoint& x1) const { return o->indexAt(x1); }
    Q_INVOKABLE void MsetModel(QTableView* o, QAbstractItemModel* x1) { o->setModel(x1); }
    Q_INVOKABLE void MsetRootIndex(QTableView* o, const QModelIndex& x1) { o->setRootIndex(x1); }
    Q_INVOKABLE void MsetSelectionModel(QTableView* o, QItemSelectionModel* x1) { o->setSelectionModel(x1); }
};

class Q85 : public Q84 { // QTableWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LTableWidget(u, x1); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, QWidget* x3 = 0) { return new LTableWidget(u, x1, x2, x3); }
    Q_INVOKABLE QWidget* McellWidget(QTableWidget* o, int x1, int x2) const { return o->cellWidget(x1, x2); }
    Q_INVOKABLE void MclosePersistentEditor(QTableWidget* o, QTableWidgetItem* x1) { o->closePersistentEditor(x1); }
    Q_INVOKABLE int Mcolumn(QTableWidget* o, const QTableWidgetItem* x1) const { return o->column(x1); }
    Q_INVOKABLE int McolumnCount(QTableWidget* o) const { return o->columnCount(); }
    Q_INVOKABLE int McurrentColumn(QTableWidget* o) const { return o->currentColumn(); }
    Q_INVOKABLE QTableWidgetItem* McurrentItem(QTableWidget* o) const { return o->currentItem(); }
    Q_INVOKABLE int McurrentRow(QTableWidget* o) const { return o->currentRow(); }
    Q_INVOKABLE void MeditItem(QTableWidget* o, QTableWidgetItem* x1) { o->editItem(x1); }
    Q_INVOKABLE QList<QTableWidgetItem*> MfindItems(QTableWidget* o, const QString& x1, Qt::MatchFlags x2) const { return o->findItems(x1, x2); }
    Q_INVOKABLE QTableWidgetItem* MhorizontalHeaderItem(QTableWidget* o, int x1) const { return o->horizontalHeaderItem(x1); }
    Q_INVOKABLE QTableWidgetItem* Mitem(QTableWidget* o, int x1, int x2) const { return o->item(x1, x2); }
    Q_INVOKABLE QTableWidgetItem* MitemAt(QTableWidget* o, const QPoint& x1) const { return o->itemAt(x1); }
    Q_INVOKABLE QTableWidgetItem* MitemAt(QTableWidget* o, int x1, int x2) const { return o->itemAt(x1, x2); }
    Q_INVOKABLE const QTableWidgetItem* MitemPrototype(QTableWidget* o) const { return o->itemPrototype(); }
    Q_INVOKABLE void MopenPersistentEditor(QTableWidget* o, QTableWidgetItem* x1) { o->openPersistentEditor(x1); }
    Q_INVOKABLE void MremoveCellWidget(QTableWidget* o, int x1, int x2) { o->removeCellWidget(x1, x2); }
    Q_INVOKABLE int Mrow(QTableWidget* o, const QTableWidgetItem* x1) const { return o->row(x1); }
    Q_INVOKABLE int MrowCount(QTableWidget* o) const { return o->rowCount(); }
    Q_INVOKABLE QList<QTableWidgetItem*> MselectedItems(QTableWidget* o) { return o->selectedItems(); }
    Q_INVOKABLE QList<QTableWidgetSelectionRange> MselectedRanges(QTableWidget* o) const { return o->selectedRanges(); }
    Q_INVOKABLE void MsetCellWidget(QTableWidget* o, int x1, int x2, QWidget* x3) { o->setCellWidget(x1, x2, x3); }
    Q_INVOKABLE void MsetColumnCount(QTableWidget* o, int x1) { o->setColumnCount(x1); }
    Q_INVOKABLE void MsetCurrentCell(QTableWidget* o, int x1, int x2) { o->setCurrentCell(x1, x2); }
    Q_INVOKABLE void MsetCurrentCell(QTableWidget* o, int x1, int x2, QItemSelectionModel::SelectionFlags x3) { o->setCurrentCell(x1, x2, x3); }
    Q_INVOKABLE void MsetCurrentItem(QTableWidget* o, QTableWidgetItem* x1) { o->setCurrentItem(x1); }
    Q_INVOKABLE void MsetCurrentItem(QTableWidget* o, QTableWidgetItem* x1, QItemSelectionModel::SelectionFlags x2) { o->setCurrentItem(x1, x2); }
    Q_INVOKABLE void MsetHorizontalHeaderItem(QTableWidget* o, int x1, QTableWidgetItem* x2) { o->setHorizontalHeaderItem(x1, x2); }
    Q_INVOKABLE void MsetHorizontalHeaderLabels(QTableWidget* o, const QStringList& x1) { o->setHorizontalHeaderLabels(x1); }
    Q_INVOKABLE void MsetItem(QTableWidget* o, int x1, int x2, QTableWidgetItem* x3) { o->setItem(x1, x2, x3); }
    Q_INVOKABLE void MsetItemPrototype(QTableWidget* o, const QTableWidgetItem* x1) { o->setItemPrototype(x1); }
    Q_INVOKABLE void MsetRangeSelected(QTableWidget* o, const QTableWidgetSelectionRange& x1, bool x2) { o->setRangeSelected(x1, x2); }
    Q_INVOKABLE void MsetRowCount(QTableWidget* o, int x1) { o->setRowCount(x1); }
    Q_INVOKABLE void MsetVerticalHeaderItem(QTableWidget* o, int x1, QTableWidgetItem* x2) { o->setVerticalHeaderItem(x1, x2); }
    Q_INVOKABLE void MsetVerticalHeaderLabels(QTableWidget* o, const QStringList& x1) { o->setVerticalHeaderLabels(x1); }
    Q_INVOKABLE void MsortItems(QTableWidget* o, int x1, Qt::SortOrder x2 = Qt::AscendingOrder) { o->sortItems(x1, x2); }
    Q_INVOKABLE QTableWidgetItem* MtakeHorizontalHeaderItem(QTableWidget* o, int x1) { return o->takeHorizontalHeaderItem(x1); }
    Q_INVOKABLE QTableWidgetItem* MtakeItem(QTableWidget* o, int x1, int x2) { return o->takeItem(x1, x2); }
    Q_INVOKABLE QTableWidgetItem* MtakeVerticalHeaderItem(QTableWidget* o, int x1) { return o->takeVerticalHeaderItem(x1); }
    Q_INVOKABLE QTableWidgetItem* MverticalHeaderItem(QTableWidget* o, int x1) const { return o->verticalHeaderItem(x1); }
    Q_INVOKABLE int MvisualColumn(QTableWidget* o, int x1) const { return o->visualColumn(x1); }
    Q_INVOKABLE QRect MvisualItemRect(QTableWidget* o, const QTableWidgetItem* x1) const { return o->visualItemRect(x1); }
    Q_INVOKABLE int MvisualRow(QTableWidget* o, int x1) const { return o->visualRow(x1); }
};

class Q87 : public Q89 { // QTextBrowser
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LTextBrowser(u, x1); }
    Q_INVOKABLE int MbackwardHistoryCount(QTextBrowser* o) const { return o->backwardHistoryCount(); }
    Q_INVOKABLE void MclearHistory(QTextBrowser* o) { o->clearHistory(); }
    Q_INVOKABLE int MforwardHistoryCount(QTextBrowser* o) const { return o->forwardHistoryCount(); }
    Q_INVOKABLE QString MhistoryTitle(QTextBrowser* o, int x1) const { return o->historyTitle(x1); }
    Q_INVOKABLE QUrl MhistoryUrl(QTextBrowser* o, int x1) const { return o->historyUrl(x1); }
    Q_INVOKABLE bool MisBackwardAvailable(QTextBrowser* o) const { return o->isBackwardAvailable(); }
    Q_INVOKABLE bool MisForwardAvailable(QTextBrowser* o) const { return o->isForwardAvailable(); }
    Q_INVOKABLE bool MopenExternalLinks(QTextBrowser* o) const { return o->openExternalLinks(); }
    Q_INVOKABLE bool MopenLinks(QTextBrowser* o) const { return o->openLinks(); }
    Q_INVOKABLE QStringList MsearchPaths(QTextBrowser* o) const { return o->searchPaths(); }
    Q_INVOKABLE void MsetOpenExternalLinks(QTextBrowser* o, bool x1) { o->setOpenExternalLinks(x1); }
    Q_INVOKABLE void MsetOpenLinks(QTextBrowser* o, bool x1) { o->setOpenLinks(x1); }
    Q_INVOKABLE void MsetSearchPaths(QTextBrowser* o, const QStringList& x1) { o->setSearchPaths(x1); }
    Q_INVOKABLE QUrl Msource(QTextBrowser* o) const { return o->source(); }
    Q_INVOKABLE QVariant MloadResource(QTextBrowser* o, int x1, const QUrl& x2) { return o->loadResource(x1, x2); }
};

class Q101 : public Q4 { // QTreeView
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LTreeView(u, x1); }
    Q_INVOKABLE bool MallColumnsShowFocus(QTreeView* o) const { return o->allColumnsShowFocus(); }
    Q_INVOKABLE int MautoExpandDelay(QTreeView* o) const { return o->autoExpandDelay(); }
    Q_INVOKABLE int McolumnAt(QTreeView* o, int x1) const { return o->columnAt(x1); }
    Q_INVOKABLE int McolumnViewportPosition(QTreeView* o, int x1) const { return o->columnViewportPosition(x1); }
    Q_INVOKABLE int McolumnWidth(QTreeView* o, int x1) const { return o->columnWidth(x1); }
    Q_INVOKABLE bool MexpandsOnDoubleClick(QTreeView* o) const { return o->expandsOnDoubleClick(); }
    Q_INVOKABLE QHeaderView* Mheader(QTreeView* o) const { return o->header(); }
    Q_INVOKABLE int Mindentation(QTreeView* o) const { return o->indentation(); }
    Q_INVOKABLE QModelIndex MindexAbove(QTreeView* o, const QModelIndex& x1) const { return o->indexAbove(x1); }
    Q_INVOKABLE QModelIndex MindexBelow(QTreeView* o, const QModelIndex& x1) const { return o->indexBelow(x1); }
    Q_INVOKABLE bool MisAnimated(QTreeView* o) const { return o->isAnimated(); }
    Q_INVOKABLE bool MisColumnHidden(QTreeView* o, int x1) const { return o->isColumnHidden(x1); }
    Q_INVOKABLE bool MisExpanded(QTreeView* o, const QModelIndex& x1) const { return o->isExpanded(x1); }
    Q_INVOKABLE bool MisFirstColumnSpanned(QTreeView* o, int x1, const QModelIndex& x2) const { return o->isFirstColumnSpanned(x1, x2); }
    Q_INVOKABLE bool MisHeaderHidden(QTreeView* o) const { return o->isHeaderHidden(); }
    Q_INVOKABLE bool MisRowHidden(QTreeView* o, int x1, const QModelIndex& x2) const { return o->isRowHidden(x1, x2); }
    Q_INVOKABLE bool MisSortingEnabled(QTreeView* o) const { return o->isSortingEnabled(); }
    Q_INVOKABLE bool MitemsExpandable(QTreeView* o) const { return o->itemsExpandable(); }
    Q_INVOKABLE bool MrootIsDecorated(QTreeView* o) const { return o->rootIsDecorated(); }
    Q_INVOKABLE void MsetAllColumnsShowFocus(QTreeView* o, bool x1) { o->setAllColumnsShowFocus(x1); }
    Q_INVOKABLE void MsetAnimated(QTreeView* o, bool x1) { o->setAnimated(x1); }
    Q_INVOKABLE void MsetAutoExpandDelay(QTreeView* o, int x1) { o->setAutoExpandDelay(x1); }
    Q_INVOKABLE void MsetColumnHidden(QTreeView* o, int x1, bool x2) { o->setColumnHidden(x1, x2); }
    Q_INVOKABLE void MsetColumnWidth(QTreeView* o, int x1, int x2) { o->setColumnWidth(x1, x2); }
    Q_INVOKABLE void MsetExpanded(QTreeView* o, const QModelIndex& x1, bool x2) { o->setExpanded(x1, x2); }
    Q_INVOKABLE void MsetExpandsOnDoubleClick(QTreeView* o, bool x1) { o->setExpandsOnDoubleClick(x1); }
    Q_INVOKABLE void MsetFirstColumnSpanned(QTreeView* o, int x1, const QModelIndex& x2, bool x3) { o->setFirstColumnSpanned(x1, x2, x3); }
    Q_INVOKABLE void MsetHeader(QTreeView* o, QHeaderView* x1) { o->setHeader(x1); }
    Q_INVOKABLE void MsetHeaderHidden(QTreeView* o, bool x1) { o->setHeaderHidden(x1); }
    Q_INVOKABLE void MsetIndentation(QTreeView* o, int x1) { o->setIndentation(x1); }
    Q_INVOKABLE void MsetItemsExpandable(QTreeView* o, bool x1) { o->setItemsExpandable(x1); }
    Q_INVOKABLE void MsetRootIsDecorated(QTreeView* o, bool x1) { o->setRootIsDecorated(x1); }
    Q_INVOKABLE void MsetRowHidden(QTreeView* o, int x1, const QModelIndex& x2, bool x3) { o->setRowHidden(x1, x2, x3); }
    Q_INVOKABLE void MsetSortingEnabled(QTreeView* o, bool x1) { o->setSortingEnabled(x1); }
    Q_INVOKABLE void MsetUniformRowHeights(QTreeView* o, bool x1) { o->setUniformRowHeights(x1); }
    Q_INVOKABLE void MsetWordWrap(QTreeView* o, bool x1) { o->setWordWrap(x1); }
    Q_INVOKABLE void MsortByColumn(QTreeView* o, int x1, Qt::SortOrder x2) { o->sortByColumn(x1, x2); }
    Q_INVOKABLE bool MuniformRowHeights(QTreeView* o) const { return o->uniformRowHeights(); }
    Q_INVOKABLE bool MwordWrap(QTreeView* o) const { return o->wordWrap(); }
    Q_INVOKABLE void MdataChanged(QTreeView* o, const QModelIndex& x1, const QModelIndex& x2) { o->dataChanged(x1, x2); }
    Q_INVOKABLE QModelIndex MindexAt(QTreeView* o, const QPoint& x1) const { return o->indexAt(x1); }
    Q_INVOKABLE void MkeyboardSearch(QTreeView* o, const QString& x1) { o->keyboardSearch(x1); }
    Q_INVOKABLE void Mreset(QTreeView* o) { o->reset(); }
    Q_INVOKABLE void MscrollTo(QTreeView* o, const QModelIndex& x1, QTreeView::ScrollHint x2 = QTreeView::EnsureVisible) { o->scrollTo(x1, x2); }
    Q_INVOKABLE void MselectAll(QTreeView* o) { o->selectAll(); }
    Q_INVOKABLE void MsetModel(QTreeView* o, QAbstractItemModel* x1) { o->setModel(x1); }
    Q_INVOKABLE void MsetRootIndex(QTreeView* o, const QModelIndex& x1) { o->setRootIndex(x1); }
    Q_INVOKABLE void MsetSelectionModel(QTreeView* o, QItemSelectionModel* x1) { o->setSelectionModel(x1); }
    Q_INVOKABLE QRect MvisualRect(QTreeView* o, const QModelIndex& x1) const { return o->visualRect(x1); }
};

class Q102 : public Q101 { // QTreeWidget
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LTreeWidget(u, x1); }
    Q_INVOKABLE void MaddTopLevelItem(QTreeWidget* o, QTreeWidgetItem* x1) { o->addTopLevelItem(x1); }
    Q_INVOKABLE void MaddTopLevelItems(QTreeWidget* o, const QList<QTreeWidgetItem*>& x1) { o->addTopLevelItems(x1); }
    Q_INVOKABLE void MclosePersistentEditor(QTreeWidget* o, QTreeWidgetItem* x1, int x2 = 0) { o->closePersistentEditor(x1, x2); }
    Q_INVOKABLE int McolumnCount(QTreeWidget* o) const { return o->columnCount(); }
    Q_INVOKABLE int McurrentColumn(QTreeWidget* o) const { return o->currentColumn(); }
    Q_INVOKABLE QTreeWidgetItem* McurrentItem(QTreeWidget* o) const { return o->currentItem(); }
    Q_INVOKABLE void MeditItem(QTreeWidget* o, QTreeWidgetItem* x1, int x2 = 0) { o->editItem(x1, x2); }
    Q_INVOKABLE QList<QTreeWidgetItem*> MfindItems(QTreeWidget* o, const QString& x1, Qt::MatchFlags x2, int x3 = 0) const { return o->findItems(x1, x2, x3); }
    Q_INVOKABLE QTreeWidgetItem* MheaderItem(QTreeWidget* o) const { return o->headerItem(); }
    Q_INVOKABLE int MindexOfTopLevelItem(QTreeWidget* o, QTreeWidgetItem* x1) const { return o->indexOfTopLevelItem(x1); }
    Q_INVOKABLE void MinsertTopLevelItem(QTreeWidget* o, int x1, QTreeWidgetItem* x2) { o->insertTopLevelItem(x1, x2); }
    Q_INVOKABLE void MinsertTopLevelItems(QTreeWidget* o, int x1, const QList<QTreeWidgetItem*>& x2) { o->insertTopLevelItems(x1, x2); }
    Q_INVOKABLE QTreeWidgetItem* MinvisibleRootItem(QTreeWidget* o) const { return o->invisibleRootItem(); }
    Q_INVOKABLE bool MisFirstItemColumnSpanned(QTreeWidget* o, const QTreeWidgetItem* x1) const { return o->isFirstItemColumnSpanned(x1); }
    Q_INVOKABLE QTreeWidgetItem* MitemAbove(QTreeWidget* o, const QTreeWidgetItem* x1) const { return o->itemAbove(x1); }
    Q_INVOKABLE QTreeWidgetItem* MitemAt(QTreeWidget* o, const QPoint& x1) const { return o->itemAt(x1); }
    Q_INVOKABLE QTreeWidgetItem* MitemAt(QTreeWidget* o, int x1, int x2) const { return o->itemAt(x1, x2); }
    Q_INVOKABLE QTreeWidgetItem* MitemBelow(QTreeWidget* o, const QTreeWidgetItem* x1) const { return o->itemBelow(x1); }
    Q_INVOKABLE QWidget* MitemWidget(QTreeWidget* o, QTreeWidgetItem* x1, int x2) const { return o->itemWidget(x1, x2); }
    Q_INVOKABLE void MopenPersistentEditor(QTreeWidget* o, QTreeWidgetItem* x1, int x2 = 0) { o->openPersistentEditor(x1, x2); }
    Q_INVOKABLE void MremoveItemWidget(QTreeWidget* o, QTreeWidgetItem* x1, int x2) { o->removeItemWidget(x1, x2); }
    Q_INVOKABLE QList<QTreeWidgetItem*> MselectedItems(QTreeWidget* o) const { return o->selectedItems(); }
    Q_INVOKABLE void MsetColumnCount(QTreeWidget* o, int x1) { o->setColumnCount(x1); }
    Q_INVOKABLE void MsetCurrentItem(QTreeWidget* o, QTreeWidgetItem* x1) { o->setCurrentItem(x1); }
    Q_INVOKABLE void MsetCurrentItem(QTreeWidget* o, QTreeWidgetItem* x1, int x2) { o->setCurrentItem(x1, x2); }
    Q_INVOKABLE void MsetCurrentItem(QTreeWidget* o, QTreeWidgetItem* x1, int x2, QItemSelectionModel::SelectionFlags x3) { o->setCurrentItem(x1, x2, x3); }
    Q_INVOKABLE void MsetFirstItemColumnSpanned(QTreeWidget* o, const QTreeWidgetItem* x1, bool x2) { o->setFirstItemColumnSpanned(x1, x2); }
    Q_INVOKABLE void MsetHeaderItem(QTreeWidget* o, QTreeWidgetItem* x1) { o->setHeaderItem(x1); }
    Q_INVOKABLE void MsetHeaderLabel(QTreeWidget* o, const QString& x1) { o->setHeaderLabel(x1); }
    Q_INVOKABLE void MsetHeaderLabels(QTreeWidget* o, const QStringList& x1) { o->setHeaderLabels(x1); }
    Q_INVOKABLE void MsetItemWidget(QTreeWidget* o, QTreeWidgetItem* x1, int x2, QWidget* x3) { o->setItemWidget(x1, x2, x3); }
    Q_INVOKABLE int MsortColumn(QTreeWidget* o) const { return o->sortColumn(); }
    Q_INVOKABLE void MsortItems(QTreeWidget* o, int x1, Qt::SortOrder x2) { o->sortItems(x1, x2); }
    Q_INVOKABLE QTreeWidgetItem* MtakeTopLevelItem(QTreeWidget* o, int x1) { return o->takeTopLevelItem(x1); }
    Q_INVOKABLE QTreeWidgetItem* MtopLevelItem(QTreeWidget* o, int x1) const { return o->topLevelItem(x1); }
    Q_INVOKABLE int MtopLevelItemCount(QTreeWidget* o) const { return o->topLevelItemCount(); }
    Q_INVOKABLE QRect MvisualItemRect(QTreeWidget* o, const QTreeWidgetItem* x1) const { return o->visualItemRect(x1); }
    Q_INVOKABLE void MsetSelectionModel(QTreeWidget* o, QItemSelectionModel* x1) { o->setSelectionModel(x1); }
};

class Q105 : public Q57 { // QUndoView
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QWidget* x1 = 0) { return new LUndoView(u, x1); }
    Q_INVOKABLE void* C(uint u, QUndoStack* x1, QWidget* x2 = 0) { return new LUndoView(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QUndoGroup* x1, QWidget* x2 = 0) { return new LUndoView(u, x1, x2); }
    Q_INVOKABLE QIcon McleanIcon(QUndoView* o) const { return o->cleanIcon(); }
    Q_INVOKABLE QString MemptyLabel(QUndoView* o) const { return o->emptyLabel(); }
    Q_INVOKABLE QUndoGroup* Mgroup(QUndoView* o) const { return o->group(); }
    Q_INVOKABLE void MsetCleanIcon(QUndoView* o, const QIcon& x1) { o->setCleanIcon(x1); }
    Q_INVOKABLE void MsetEmptyLabel(QUndoView* o, const QString& x1) { o->setEmptyLabel(x1); }
    Q_INVOKABLE QUndoStack* Mstack(QUndoView* o) const { return o->stack(); }
};

#endif
