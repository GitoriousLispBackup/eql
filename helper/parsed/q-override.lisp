(defparameter *q-override* '(
  (("QAbstractButton" . "QWidget")
   "protected virtual void checkStateSet ()"
   "protected virtual bool hitButton ( const QPoint & ) const"
   "protected virtual void nextCheckState ()")
  (("QAbstractItemDelegate" . "QObject")
   "virtual QWidget * createEditor ( QWidget *, const QStyleOptionViewItem &, const QModelIndex & ) const"
   "virtual bool editorEvent ( QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex & )"
   "virtual void paint ( QPainter *, const QStyleOptionViewItem &, const QModelIndex & ) const = 0"
   "virtual void setEditorData ( QWidget *, const QModelIndex & ) const"
   "virtual void setModelData ( QWidget *, QAbstractItemModel *, const QModelIndex & ) const"
   "virtual QSize sizeHint ( const QStyleOptionViewItem &, const QModelIndex & ) const = 0"
   "virtual void updateEditorGeometry ( QWidget *, const QStyleOptionViewItem &, const QModelIndex & ) const")
  (("QAbstractItemModel" . "QObject")
   "virtual QModelIndex buddy ( const QModelIndex & ) const"
   "virtual bool canFetchMore ( const QModelIndex & ) const"
   "virtual int columnCount ( const QModelIndex & = QModelIndex() ) const = 0"
   "virtual QVariant data ( const QModelIndex &, int = Qt::DisplayRole ) const = 0"
   "virtual bool dropMimeData ( const QMimeData *, Qt::DropAction, int, int, const QModelIndex & )"
   "virtual void fetchMore ( const QModelIndex & )"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual bool hasChildren ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant headerData ( int, Qt::Orientation, int = Qt::DisplayRole ) const"
   "virtual QModelIndex index ( int, int, const QModelIndex & = QModelIndex() ) const = 0"
   "virtual bool insertColumns ( int, int, const QModelIndex & = QModelIndex() )"
   "virtual bool insertRows ( int, int, const QModelIndex & = QModelIndex() )"
   "virtual QModelIndexList match ( const QModelIndex &, int, const QVariant &, int = 1, Qt::MatchFlags = Qt::MatchFlags( Qt::MatchStartsWith | Qt::MatchWrap ) ) const"
   "virtual QMimeData * mimeData ( const QModelIndexList & ) const"
   "virtual QStringList mimeTypes () const"
   "virtual QModelIndex parent ( const QModelIndex & ) const = 0"
   "virtual bool removeColumns ( int, int, const QModelIndex & = QModelIndex() )"
   "virtual bool removeRows ( int, int, const QModelIndex & = QModelIndex() )"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const = 0"
   "virtual bool setData ( const QModelIndex &, const QVariant &, int = Qt::EditRole )"
   "virtual bool setHeaderData ( int, Qt::Orientation, const QVariant &, int = Qt::EditRole )"
   "virtual void sort ( int, Qt::SortOrder = Qt::AscendingOrder )"
   "virtual QSize span ( const QModelIndex & ) const"
   "virtual Qt::DropActions supportedDropActions () const")
  (("QAbstractItemView" . "QAbstractScrollArea")
   "virtual QModelIndex indexAt ( const QPoint & ) const = 0"
   "virtual void keyboardSearch ( const QString & )"
   "virtual void scrollTo ( const QModelIndex &, ScrollHint = EnsureVisible ) = 0"
   "virtual void setModel ( QAbstractItemModel * )"
   "virtual void setSelectionModel ( QItemSelectionModel * )"
   "virtual int sizeHintForColumn ( int ) const"
   "virtual int sizeHintForRow ( int ) const"
   "virtual QRect visualRect ( const QModelIndex & ) const = 0"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "protected virtual bool edit ( const QModelIndex &, EditTrigger, QEvent * )"
   "protected virtual int horizontalOffset () const = 0"
   "protected virtual bool isIndexHidden ( const QModelIndex & ) const = 0"
   "protected virtual QModelIndex moveCursor ( CursorAction, Qt::KeyboardModifiers ) = 0"
   "protected virtual QModelIndexList selectedIndexes () const"
   "protected virtual QItemSelectionModel::SelectionFlags selectionCommand ( const QModelIndex &, const QEvent * = 0 ) const"
   "protected virtual void setSelection ( const QRect &, QItemSelectionModel::SelectionFlags ) = 0"
   "protected virtual void startDrag ( Qt::DropActions )"
   "protected virtual int verticalOffset () const = 0"
   "protected virtual QStyleOptionViewItem viewOptions () const"
   "protected virtual QRegion visualRegionForSelection ( const QItemSelection & ) const = 0")
  (("QAbstractListModel" . "QAbstractItemModel")
   "virtual bool dropMimeData ( const QMimeData *, Qt::DropAction, int, int, const QModelIndex & )"
   "virtual QModelIndex index ( int, int = 0, const QModelIndex & = QModelIndex() ) const")
  (("QAbstractProxyModel" . "QAbstractItemModel")
   "virtual QModelIndex mapFromSource ( const QModelIndex & ) const = 0"
   "virtual QItemSelection mapSelectionFromSource ( const QItemSelection & ) const"
   "virtual QItemSelection mapSelectionToSource ( const QItemSelection & ) const"
   "virtual QModelIndex mapToSource ( const QModelIndex & ) const = 0"
   "virtual void setSourceModel ( QAbstractItemModel * )"
   "virtual QVariant data ( const QModelIndex &, int = Qt::DisplayRole ) const"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual QVariant headerData ( int, Qt::Orientation, int ) const"
   "virtual void revert ()"
   "virtual bool setData ( const QModelIndex &, const QVariant &, int = Qt::EditRole )"
   "virtual bool setHeaderData ( int, Qt::Orientation, const QVariant &, int = Qt::EditRole )"
   "virtual bool submit ()")
  (("QAbstractScrollArea" . "QFrame")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "protected virtual void scrollContentsBy ( int, int )"
   "protected virtual bool viewportEvent ( QEvent * )")
  (("QAbstractSlider" . "QWidget")
   "protected virtual void sliderChange ( SliderChange )")
  (("QAbstractSpinBox" . "QWidget")
   "virtual void fixup ( QString & ) const"
   "virtual void stepBy ( int )"
   "virtual QValidator::State validate ( QString &, int & ) const"
   "virtual bool event ( QEvent * )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "protected virtual StepEnabled stepEnabled () const")
  (("QAbstractTextDocumentLayout" . "QObject")
   "virtual QRectF blockBoundingRect ( const QTextBlock & ) const = 0"
   "virtual QSizeF documentSize () const = 0"
   "virtual void draw ( QPainter *, const PaintContext & ) = 0"
   "virtual QRectF frameBoundingRect ( QTextFrame * ) const = 0"
   "virtual int hitTest ( const QPointF &, Qt::HitTestAccuracy ) const = 0"
   "virtual int pageCount () const = 0"
   "protected virtual void documentChanged ( int, int, int ) = 0"
   "protected virtual void drawInlineObject ( QPainter *, const QRectF &, QTextInlineObject, int, const QTextFormat & )"
   "protected virtual void positionInlineObject ( QTextInlineObject, int, const QTextFormat & )"
   "protected virtual void resizeInlineObject ( QTextInlineObject, int, const QTextFormat & )")
  (("QAction" . "QObject"))
  (("QActionGroup" . "QObject"))
  (("QApplication" . "QCoreApplication")
   "virtual void commitData ( QSessionManager & )"
   "virtual void saveState ( QSessionManager & )"
   "virtual bool notify ( QObject *, QEvent * )")
  (("QBoxLayout" . "QLayout")
   "virtual void addItem ( QLayoutItem * )"
   "virtual int count () const"
   "virtual Qt::Orientations expandingDirections () const"
   "virtual bool hasHeightForWidth () const"
   "virtual int heightForWidth ( int ) const"
   "virtual void invalidate ()"
   "virtual QLayoutItem * itemAt ( int ) const"
   "virtual QSize maximumSize () const"
   "virtual int minimumHeightForWidth ( int ) const"
   "virtual QSize minimumSize () const"
   "virtual void setGeometry ( const QRect & )"
   "virtual QSize sizeHint () const"
   "virtual QLayoutItem * takeAt ( int )")
  (("QButtonGroup" . "QObject"))
  (("QCalendarWidget" . "QWidget")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "protected virtual void paintCell ( QPainter *, const QRect &, const QDate & ) const")
  (("QCheckBox" . "QAbstractButton")
   "virtual QSize sizeHint () const")
  (("QClipboard" . "QObject"))
  (("QColumnView" . "QAbstractItemView")
   "virtual QModelIndex indexAt ( const QPoint & ) const"
   "virtual void scrollTo ( const QModelIndex &, ScrollHint = EnsureVisible )"
   "virtual void selectAll ()"
   "virtual void setModel ( QAbstractItemModel * )"
   "virtual void setRootIndex ( const QModelIndex & )"
   "virtual void setSelectionModel ( QItemSelectionModel * )"
   "virtual QSize sizeHint () const"
   "virtual QRect visualRect ( const QModelIndex & ) const"
   "protected virtual QAbstractItemView * createColumn ( const QModelIndex & )")
  (("QComboBox" . "QWidget")
   "virtual void hidePopup ()"
   "virtual void showPopup ()"
   "virtual bool event ( QEvent * )"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const")
  (("QCommandLinkButton" . "QPushButton"))
  (("QCompleter" . "QObject")
   "virtual QString pathFromIndex ( const QModelIndex & ) const"
   "virtual QStringList splitPath ( const QString & ) const")
  (("QCoreApplication" . "QObject")
   "virtual bool notify ( QObject *, QEvent * )")
  (("QDateEdit" . "QDateTimeEdit"))
  (("QDateTimeEdit" . "QAbstractSpinBox")
   "virtual void clear ()"
   "virtual bool event ( QEvent * )"
   "virtual QSize sizeHint () const"
   "virtual void stepBy ( int )"
   "protected virtual QDateTime dateTimeFromText ( const QString & ) const"
   "protected virtual QString textFromDateTime ( const QDateTime & ) const")
  (("QDesktopWidget" . "QWidget"))
  (("QDial" . "QAbstractSlider")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const")
  (("QDialog" . "QWidget")
   "virtual QSize minimumSizeHint () const"
   "virtual void setVisible ( bool )"
   "virtual QSize sizeHint () const")
  (("QDockWidget" . "QWidget"))
  (("QDoubleSpinBox" . "QAbstractSpinBox")
   "virtual QString textFromValue ( double ) const"
   "virtual double valueFromText ( const QString & ) const"
   "virtual void fixup ( QString & ) const"
   "virtual QValidator::State validate ( QString &, int & ) const")
  (("QDrag" . "QObject"))
  (("QErrorMessage" . "QDialog"))
  (("QFileDialog" . "QDialog")
   "virtual void setVisible ( bool )")
  (("QFontComboBox" . "QComboBox")
   "virtual QSize sizeHint () const")
  (("QFontDialog" . "QDialog")
   "virtual void setVisible ( bool )")
  (("QFormLayout" . "QLayout")
   "virtual void addItem ( QLayoutItem * )"
   "virtual int count () const"
   "virtual Qt::Orientations expandingDirections () const"
   "virtual bool hasHeightForWidth () const"
   "virtual int heightForWidth ( int ) const"
   "virtual void invalidate ()"
   "virtual QLayoutItem * itemAt ( int ) const"
   "virtual QSize minimumSize () const"
   "virtual void setGeometry ( const QRect & )"
   "virtual QSize sizeHint () const"
   "virtual QLayoutItem * takeAt ( int )")
  (("QFrame" . "QWidget")
   "virtual QSize sizeHint () const")
  (("QGraphicsEffect" . "QObject")
   "virtual QRectF boundingRectFor ( const QRectF & ) const"
   "protected virtual void draw ( QPainter * ) = 0"
   "protected virtual void sourceChanged ( ChangeFlags )")
  (("QGraphicsObject" . "QObject"))
  (("QGraphicsProxyWidget" . "QGraphicsWidget")
   "virtual void paint ( QPainter *, const QStyleOptionGraphicsItem *, QWidget * )"
   "virtual void setGeometry ( const QRectF & )"
   "virtual int type () const")
  (("QGraphicsScene" . "QObject")
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "protected virtual void contextMenuEvent ( QGraphicsSceneContextMenuEvent * )"
   "protected virtual void dragEnterEvent ( QGraphicsSceneDragDropEvent * )"
   "protected virtual void dragLeaveEvent ( QGraphicsSceneDragDropEvent * )"
   "protected virtual void dragMoveEvent ( QGraphicsSceneDragDropEvent * )"
   "protected virtual void drawBackground ( QPainter *, const QRectF & )"
   "protected virtual void drawForeground ( QPainter *, const QRectF & )"
   "protected virtual void dropEvent ( QGraphicsSceneDragDropEvent * )"
   "protected virtual void focusInEvent ( QFocusEvent * )"
   "protected virtual void focusOutEvent ( QFocusEvent * )"
   "protected virtual void helpEvent ( QGraphicsSceneHelpEvent * )"
   "protected virtual void inputMethodEvent ( QInputMethodEvent * )"
   "protected virtual void keyPressEvent ( QKeyEvent * )"
   "protected virtual void keyReleaseEvent ( QKeyEvent * )"
   "protected virtual void mouseDoubleClickEvent ( QGraphicsSceneMouseEvent * )"
   "protected virtual void mouseMoveEvent ( QGraphicsSceneMouseEvent * )"
   "protected virtual void mousePressEvent ( QGraphicsSceneMouseEvent * )"
   "protected virtual void mouseReleaseEvent ( QGraphicsSceneMouseEvent * )"
   "protected virtual void wheelEvent ( QGraphicsSceneWheelEvent * )")
  (("QGraphicsTextItem" . "QGraphicsObject")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter *, const QStyleOptionGraphicsItem *, QWidget * )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsView" . "QAbstractScrollArea")
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual QSize sizeHint () const"
   "protected virtual void drawBackground ( QPainter *, const QRectF & )"
   "protected virtual void drawForeground ( QPainter *, const QRectF & )")
  (("QGraphicsWidget" . "QGraphicsObject")
   "virtual void paintWindowFrame ( QPainter *, const QStyleOptionGraphicsItem *, QWidget * = 0 )"
   "virtual QRectF boundingRect () const"
   "virtual void paint ( QPainter *, const QStyleOptionGraphicsItem *, QWidget * = 0 )"
   "virtual void setGeometry ( const QRectF & )"
   "virtual QPainterPath shape () const"
   "virtual int type () const"
   "protected virtual void changeEvent ( QEvent * )"
   "protected virtual void closeEvent ( QCloseEvent * )"
   "protected virtual bool focusNextPrevChild ( bool )"
   "protected virtual void grabKeyboardEvent ( QEvent * )"
   "protected virtual void grabMouseEvent ( QEvent * )"
   "protected virtual void hideEvent ( QHideEvent * )"
   "protected virtual void initStyleOption ( QStyleOption * ) const"
   "protected virtual void moveEvent ( QGraphicsSceneMoveEvent * )"
   "protected virtual void polishEvent ()"
   "protected virtual void resizeEvent ( QGraphicsSceneResizeEvent * )"
   "protected virtual void showEvent ( QShowEvent * )"
   "protected virtual void ungrabKeyboardEvent ( QEvent * )"
   "protected virtual void ungrabMouseEvent ( QEvent * )"
   "protected virtual bool windowFrameEvent ( QEvent * )"
   "protected virtual Qt::WindowFrameSection windowFrameSectionAt ( const QPointF & ) const")
  (("QGridLayout" . "QLayout")
   "virtual int count () const"
   "virtual Qt::Orientations expandingDirections () const"
   "virtual bool hasHeightForWidth () const"
   "virtual int heightForWidth ( int ) const"
   "virtual void invalidate ()"
   "virtual QLayoutItem * itemAt ( int ) const"
   "virtual QSize maximumSize () const"
   "virtual int minimumHeightForWidth ( int ) const"
   "virtual QSize minimumSize () const"
   "virtual void setGeometry ( const QRect & )"
   "virtual QSize sizeHint () const"
   "virtual QLayoutItem * takeAt ( int )")
  (("QGroupBox" . "QWidget")
   "virtual QSize minimumSizeHint () const")
  (("QHBoxLayout" . "QBoxLayout"))
  (("QHeaderView" . "QAbstractItemView")
   "virtual void reset ()"
   "virtual void setModel ( QAbstractItemModel * )"
   "virtual QSize sizeHint () const"
   "protected virtual void paintSection ( QPainter *, const QRect &, int ) const"
   "protected virtual QSize sectionSizeFromContents ( int ) const")
  (("QInputContext" . "QObject")
   "virtual QList<QAction *> actions ()"
   "virtual bool filterEvent ( const QEvent * )"
   "virtual QFont font () const"
   "virtual QString identifierName () = 0"
   "virtual bool isComposing () const = 0"
   "virtual QString language () = 0"
   "virtual void reset () = 0"
   "virtual void setFocusWidget ( QWidget * )"
   "virtual void update ()"
   "virtual void widgetDestroyed ( QWidget * )")
  (("QInputDialog" . "QDialog")
   "virtual void done ( int )"
   "virtual QSize minimumSizeHint () const"
   "virtual void setVisible ( bool )"
   "virtual QSize sizeHint () const")
  (("QItemDelegate" . "QAbstractItemDelegate")
   "virtual QWidget * createEditor ( QWidget *, const QStyleOptionViewItem &, const QModelIndex & ) const"
   "virtual void paint ( QPainter *, const QStyleOptionViewItem &, const QModelIndex & ) const"
   "virtual void setEditorData ( QWidget *, const QModelIndex & ) const"
   "virtual void setModelData ( QWidget *, QAbstractItemModel *, const QModelIndex & ) const"
   "virtual QSize sizeHint ( const QStyleOptionViewItem &, const QModelIndex & ) const"
   "virtual void updateEditorGeometry ( QWidget *, const QStyleOptionViewItem &, const QModelIndex & ) const"
   "protected virtual void drawCheck ( QPainter *, const QStyleOptionViewItem &, const QRect &, Qt::CheckState ) const"
   "protected virtual void drawDecoration ( QPainter *, const QStyleOptionViewItem &, const QRect &, const QPixmap & ) const"
   "protected virtual void drawDisplay ( QPainter *, const QStyleOptionViewItem &, const QRect &, const QString & ) const"
   "protected virtual void drawFocus ( QPainter *, const QStyleOptionViewItem &, const QRect & ) const")
  (("QItemSelectionModel" . "QObject"))
  (("QLCDNumber" . "QFrame")
   "virtual QSize sizeHint () const")
  (("QLabel" . "QFrame")
   "virtual int heightForWidth ( int ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const")
  (("QLayout" . "QObject")
   "virtual void addItem ( QLayoutItem * ) = 0"
   "virtual int count () const = 0"
   "virtual int indexOf ( QWidget * ) const"
   "virtual QLayoutItem * itemAt ( int ) const = 0"
   "virtual QLayoutItem * takeAt ( int ) = 0"
   "virtual Qt::Orientations expandingDirections () const"
   "virtual QRect geometry () const"
   "virtual void invalidate ()"
   "virtual bool isEmpty () const"
   "virtual QLayout * layout ()"
   "virtual QSize maximumSize () const"
   "virtual QSize minimumSize () const"
   "virtual void setGeometry ( const QRect & )")
  (("QLineEdit" . "QWidget")
   "virtual bool event ( QEvent * )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const")
  (("QListView" . "QAbstractItemView")
   "virtual QModelIndex indexAt ( const QPoint & ) const"
   "virtual void scrollTo ( const QModelIndex &, ScrollHint = EnsureVisible )"
   "virtual QRect visualRect ( const QModelIndex & ) const")
  (("QListWidget" . "QListView")
   "virtual void dropEvent ( QDropEvent * )"
   "protected virtual bool dropMimeData ( int, const QMimeData *, Qt::DropAction )"
   "protected virtual QMimeData * mimeData ( const QList<QListWidgetItem *> ) const"
   "protected virtual QStringList mimeTypes () const"
   "protected virtual Qt::DropActions supportedDropActions () const")
  (("QMainWindow" . "QWidget")
   "virtual QMenu * createPopupMenu ()")
  (("QMenu" . "QWidget")
   "virtual QSize sizeHint () const")
  (("QMenuBar" . "QWidget")
   "virtual int heightForWidth ( int ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const")
  (("QMessageBox" . "QDialog")
   "virtual void setVisible ( bool )")
  (("QMimeData" . "QObject")
   "virtual QStringList formats () const"
   "virtual bool hasFormat ( const QString & ) const"
   "protected virtual QVariant retrieveData ( const QString &, QVariant::Type ) const")
  (("QMovie" . "QObject"))
  (("QObject" . NIL)
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject *, QEvent * )"
   "virtual const QMetaObject * metaObject () const"
   "protected virtual void childEvent ( QChildEvent * )"
   "protected virtual void connectNotify ( const char * )"
   "protected virtual void customEvent ( QEvent * )"
   "protected virtual void disconnectNotify ( const char * )"
   "protected virtual void timerEvent ( QTimerEvent * )")
  (("QPlainTextEdit" . "QAbstractScrollArea")
   "virtual QVariant loadResource ( int, const QUrl & )"
   "protected virtual bool canInsertFromMimeData ( const QMimeData * ) const"
   "protected virtual QMimeData * createMimeDataFromSelection () const"
   "protected virtual void insertFromMimeData ( const QMimeData * )")
  (("QProgressBar" . "QWidget")
   "virtual QString text () const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const")
  (("QPushButton" . "QAbstractButton")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const")
  (("QRadioButton" . "QAbstractButton")
   "virtual QSize sizeHint () const")
  (("QScrollArea" . "QAbstractScrollArea")
   "virtual bool focusNextPrevChild ( bool )"
   "virtual QSize sizeHint () const")
  (("QScrollBar" . "QAbstractSlider")
   "virtual bool event ( QEvent * )"
   "virtual QSize sizeHint () const")
  (("QSessionManager" . "QObject"))
  (("QSlider" . "QAbstractSlider")
   "virtual bool event ( QEvent * )"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const")
  (("QSpinBox" . "QAbstractSpinBox")
   "protected virtual QString textFromValue ( int ) const"
   "protected virtual int valueFromText ( const QString & ) const")
  (("QSplashScreen" . "QWidget")
   "protected virtual void drawContents ( QPainter * )")
  (("QSplitter" . "QFrame")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const")
  (("QStackedLayout" . "QLayout")
   "virtual void addItem ( QLayoutItem * )"
   "virtual int count () const"
   "virtual QLayoutItem * itemAt ( int ) const"
   "virtual QSize minimumSize () const"
   "virtual void setGeometry ( const QRect & )"
   "virtual QSize sizeHint () const"
   "virtual QLayoutItem * takeAt ( int )")
  (("QStackedWidget" . "QFrame"))
  (("QStandardItemModel" . "QAbstractItemModel")
   "virtual int columnCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant data ( const QModelIndex &, int = Qt::DisplayRole ) const"
   "virtual bool dropMimeData ( const QMimeData *, Qt::DropAction, int, int, const QModelIndex & )"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual bool hasChildren ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant headerData ( int, Qt::Orientation, int = Qt::DisplayRole ) const"
   "virtual QModelIndex index ( int, int, const QModelIndex & = QModelIndex() ) const"
   "virtual bool insertColumns ( int, int, const QModelIndex & = QModelIndex() )"
   "virtual bool insertRows ( int, int, const QModelIndex & = QModelIndex() )"
   "virtual QMimeData * mimeData ( const QModelIndexList & ) const"
   "virtual QStringList mimeTypes () const"
   "virtual QModelIndex parent ( const QModelIndex & ) const"
   "virtual bool removeColumns ( int, int, const QModelIndex & = QModelIndex() )"
   "virtual bool removeRows ( int, int, const QModelIndex & = QModelIndex() )"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual bool setData ( const QModelIndex &, const QVariant &, int = Qt::EditRole )"
   "virtual bool setHeaderData ( int, Qt::Orientation, const QVariant &, int = Qt::EditRole )"
   "virtual void sort ( int, Qt::SortOrder = Qt::AscendingOrder )"
   "virtual Qt::DropActions supportedDropActions () const")
  (("QStatusBar" . "QWidget"))
  (("QStringListModel" . "QAbstractListModel")
   "virtual QVariant data ( const QModelIndex &, int ) const"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual bool insertRows ( int, int, const QModelIndex & = QModelIndex() )"
   "virtual bool removeRows ( int, int, const QModelIndex & = QModelIndex() )"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual bool setData ( const QModelIndex &, const QVariant &, int = Qt::EditRole )"
   "virtual void sort ( int, Qt::SortOrder = Qt::AscendingOrder )"
   "virtual Qt::DropActions supportedDropActions () const")
  (("QTabBar" . "QWidget")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "protected virtual void tabInserted ( int )"
   "protected virtual void tabLayoutChange ()"
   "protected virtual void tabRemoved ( int )"
   "protected virtual QSize tabSizeHint ( int ) const")
  (("QTabWidget" . "QWidget")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "protected virtual void tabInserted ( int )"
   "protected virtual void tabRemoved ( int )")
  (("QTableView" . "QAbstractItemView")
   "virtual QModelIndex indexAt ( const QPoint & ) const"
   "virtual void setModel ( QAbstractItemModel * )"
   "virtual void setRootIndex ( const QModelIndex & )"
   "virtual void setSelectionModel ( QItemSelectionModel * )")
  (("QTableWidget" . "QTableView")
   "protected virtual bool dropMimeData ( int, int, const QMimeData *, Qt::DropAction )"
   "protected virtual QMimeData * mimeData ( const QList<QTableWidgetItem *> ) const"
   "protected virtual QStringList mimeTypes () const"
   "protected virtual Qt::DropActions supportedDropActions () const")
  (("QTextBlockGroup" . "QTextObject")
   "protected virtual void blockFormatChanged ( const QTextBlock & )"
   "protected virtual void blockInserted ( const QTextBlock & )"
   "protected virtual void blockRemoved ( const QTextBlock & )")
  (("QTextBrowser" . "QTextEdit")
   "virtual QVariant loadResource ( int, const QUrl & )")
  (("QTextDocument" . "QObject")
   "virtual void clear ()"
   "protected virtual QTextObject * createObject ( const QTextFormat & )"
   "protected virtual QVariant loadResource ( int, const QUrl & )")
  (("QTextEdit" . "QAbstractScrollArea")
   "virtual QVariant loadResource ( int, const QUrl & )"
   "protected virtual bool canInsertFromMimeData ( const QMimeData * ) const"
   "protected virtual QMimeData * createMimeDataFromSelection () const"
   "protected virtual void insertFromMimeData ( const QMimeData * )")
  (("QTextFrame" . "QTextObject"))
  (("QTextList" . "QTextBlockGroup"))
  (("QTextObject" . "QObject"))
  (("QTextTable" . "QTextFrame"))
  (("QThread" . "QObject")
   "protected virtual void run ()")
  (("QTimeEdit" . "QDateTimeEdit"))
  (("QTimer" . "QObject"))
  (("QToolBar" . "QWidget"))
  (("QToolBox" . "QFrame")
   "protected virtual void itemInserted ( int )"
   "protected virtual void itemRemoved ( int )")
  (("QToolButton" . "QAbstractButton")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const")
  (("QTranslator" . "QObject")
   "virtual bool isEmpty () const"
   "virtual QString translate ( const char *, const char *, const char * = 0 ) const")
  (("QTreeView" . "QAbstractItemView")
   "virtual void dataChanged ( const QModelIndex &, const QModelIndex & )"
   "virtual QModelIndex indexAt ( const QPoint & ) const"
   "virtual void keyboardSearch ( const QString & )"
   "virtual void reset ()"
   "virtual void scrollTo ( const QModelIndex &, ScrollHint = EnsureVisible )"
   "virtual void selectAll ()"
   "virtual void setModel ( QAbstractItemModel * )"
   "virtual void setRootIndex ( const QModelIndex & )"
   "virtual void setSelectionModel ( QItemSelectionModel * )"
   "virtual QRect visualRect ( const QModelIndex & ) const"
   "protected virtual void drawBranches ( QPainter *, const QRect &, const QModelIndex & ) const"
   "protected virtual void drawRow ( QPainter *, const QStyleOptionViewItem &, const QModelIndex & ) const")
  (("QTreeWidget" . "QTreeView")
   "virtual void setSelectionModel ( QItemSelectionModel * )"
   "protected virtual bool dropMimeData ( QTreeWidgetItem *, int, const QMimeData *, Qt::DropAction )"
   "protected virtual QMimeData * mimeData ( const QList<QTreeWidgetItem *> ) const"
   "protected virtual QStringList mimeTypes () const"
   "protected virtual Qt::DropActions supportedDropActions () const")
  (("QUndoGroup" . "QObject"))
  (("QUndoStack" . "QObject"))
  (("QUndoView" . "QListView"))
  (("QVBoxLayout" . "QBoxLayout"))
  (("QValidator" . "QObject")
   "virtual void fixup ( QString & ) const"
   "virtual State validate ( QString &, int & ) const = 0")
  (("QWidget" . "QObject")
   "virtual int heightForWidth ( int ) const"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "protected virtual void actionEvent ( QActionEvent * )"
   "protected virtual void changeEvent ( QEvent * )"
   "protected virtual void closeEvent ( QCloseEvent * )"
   "protected virtual void contextMenuEvent ( QContextMenuEvent * )"
   "protected virtual void dragEnterEvent ( QDragEnterEvent * )"
   "protected virtual void dragLeaveEvent ( QDragLeaveEvent * )"
   "protected virtual void dragMoveEvent ( QDragMoveEvent * )"
   "protected virtual void dropEvent ( QDropEvent * )"
   "protected virtual void enterEvent ( QEvent * )"
   "protected virtual void focusInEvent ( QFocusEvent * )"
   "protected virtual bool focusNextPrevChild ( bool )"
   "protected virtual void focusOutEvent ( QFocusEvent * )"
   "protected virtual void hideEvent ( QHideEvent * )"
   "protected virtual void inputMethodEvent ( QInputMethodEvent * )"
   "protected virtual void keyPressEvent ( QKeyEvent * )"
   "protected virtual void keyReleaseEvent ( QKeyEvent * )"
   "protected virtual void leaveEvent ( QEvent * )"
   "protected virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "protected virtual void mouseMoveEvent ( QMouseEvent * )"
   "protected virtual void mousePressEvent ( QMouseEvent * )"
   "protected virtual void mouseReleaseEvent ( QMouseEvent * )"
   "protected virtual void moveEvent ( QMoveEvent * )"
   "protected virtual void paintEvent ( QPaintEvent * )"
   "protected virtual void resizeEvent ( QResizeEvent * )"
   "protected virtual void showEvent ( QShowEvent * )"
   "protected virtual void tabletEvent ( QTabletEvent * )"
   "protected virtual void wheelEvent ( QWheelEvent * )")
  (("QWizard" . "QDialog")
   "virtual int nextId () const"
   "virtual bool validateCurrentPage ()"
   "virtual void setVisible ( bool )"
   "virtual QSize sizeHint () const"
   "protected virtual void cleanupPage ( int )"
   "protected virtual void initializePage ( int )")
  (("QWizardPage" . "QWidget")
   "virtual void cleanupPage ()"
   "virtual void initializePage ()"
   "virtual bool isComplete () const"
   "virtual int nextId () const"
   "virtual bool validatePage ()")
  (("QWorkspace" . "QWidget")
   "virtual QSize sizeHint () const")
))
