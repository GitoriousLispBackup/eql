(defparameter *q-override* '(
  (("QAbstractAnimation" . "QObject")
   "virtual int duration () const = 0"
   "virtual void updateCurrentTime ( int ) = 0"
   "virtual void updateDirection ( QAbstractAnimation::Direction )"
   "virtual void updateState ( QAbstractAnimation::State , QAbstractAnimation::State )"
   "virtual bool event ( QEvent * )")
  (("QAbstractButton" . "QWidget")
   "virtual void checkStateSet ()"
   "virtual bool hitButton ( const QPoint & ) const"
   "virtual void nextCheckState ()"
   "virtual void changeEvent ( QEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * ) = 0"
   "virtual void timerEvent ( QTimerEvent * )")
  (("QAbstractItemDelegate" . "QObject")
   "virtual QWidget * createEditor ( QWidget * , const QStyleOptionViewItem & , const QModelIndex & ) const"
   "virtual bool editorEvent ( QEvent * , QAbstractItemModel * , const QStyleOptionViewItem & , const QModelIndex & )"
   "virtual void paint ( QPainter * , const QStyleOptionViewItem & , const QModelIndex & ) const = 0"
   "virtual void setEditorData ( QWidget * , const QModelIndex & ) const"
   "virtual void setModelData ( QWidget * , QAbstractItemModel * , const QModelIndex & ) const"
   "virtual QSize sizeHint ( const QStyleOptionViewItem & , const QModelIndex & ) const = 0"
   "virtual void updateEditorGeometry ( QWidget * , const QStyleOptionViewItem & , const QModelIndex & ) const")
  (("QAbstractItemModel" . "QObject")
   "virtual QModelIndex buddy ( const QModelIndex & ) const"
   "virtual bool canFetchMore ( const QModelIndex & ) const"
   "virtual int columnCount ( const QModelIndex & = QModelIndex() ) const = 0"
   "virtual QVariant data ( const QModelIndex & , int = Qt::DisplayRole ) const = 0"
   "virtual bool dropMimeData ( const QMimeData * , Qt::DropAction , int , int , const QModelIndex & )"
   "virtual void fetchMore ( const QModelIndex & )"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual bool hasChildren ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant headerData ( int , Qt::Orientation , int = Qt::DisplayRole ) const"
   "virtual QModelIndex index ( int , int , const QModelIndex & = QModelIndex() ) const = 0"
   "virtual bool insertColumns ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual bool insertRows ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual QModelIndexList match ( const QModelIndex & , int , const QVariant & , int = 1, Qt::MatchFlags = Qt::MatchFlags( Qt::MatchStartsWith | Qt::MatchWrap ) ) const"
   "virtual QMimeData * mimeData ( const QModelIndexList & ) const"
   "virtual QStringList mimeTypes () const"
   "virtual QModelIndex parent ( const QModelIndex & ) const = 0"
   "virtual bool removeColumns ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual bool removeRows ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const = 0"
   "virtual bool setData ( const QModelIndex & , const QVariant & , int = Qt::EditRole )"
   "virtual bool setHeaderData ( int , Qt::Orientation , const QVariant & , int = Qt::EditRole )"
   "virtual void sort ( int , Qt::SortOrder = Qt::AscendingOrder )"
   "virtual QSize span ( const QModelIndex & ) const"
   "virtual Qt::DropActions supportedDropActions () const")
  (("QAbstractItemView" . "QAbstractScrollArea")
   "virtual QModelIndex indexAt ( const QPoint & ) const = 0"
   "virtual void keyboardSearch ( const QString & )"
   "virtual void scrollTo ( const QModelIndex & , ScrollHint = EnsureVisible ) = 0"
   "virtual void setModel ( QAbstractItemModel * )"
   "virtual void setSelectionModel ( QItemSelectionModel * )"
   "virtual int sizeHintForColumn ( int ) const"
   "virtual int sizeHintForRow ( int ) const"
   "virtual QRect visualRect ( const QModelIndex & ) const = 0"
   "virtual bool edit ( const QModelIndex & , EditTrigger , QEvent * )"
   "virtual int horizontalOffset () const = 0"
   "virtual bool isIndexHidden ( const QModelIndex & ) const = 0"
   "virtual QModelIndex moveCursor ( CursorAction , Qt::KeyboardModifiers ) = 0"
   "virtual QModelIndexList selectedIndexes () const"
   "virtual QItemSelectionModel::SelectionFlags selectionCommand ( const QModelIndex & , const QEvent * = 0 ) const"
   "virtual void setSelection ( const QRect & , QItemSelectionModel::SelectionFlags ) = 0"
   "virtual void startDrag ( Qt::DropActions )"
   "virtual int verticalOffset () const = 0"
   "virtual QStyleOptionViewItem viewOptions () const"
   "virtual QRegion visualRegionForSelection ( const QItemSelection & ) const = 0"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual void dragEnterEvent ( QDragEnterEvent * )"
   "virtual void dragLeaveEvent ( QDragLeaveEvent * )"
   "virtual void dragMoveEvent ( QDragMoveEvent * )"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void timerEvent ( QTimerEvent * )"
   "virtual bool viewportEvent ( QEvent * )")
  (("QAbstractListModel" . "QAbstractItemModel")
   "virtual bool dropMimeData ( const QMimeData * , Qt::DropAction , int , int , const QModelIndex & )"
   "virtual QModelIndex index ( int , int = 0, const QModelIndex & = QModelIndex() ) const")
  (("QAbstractNetworkCache" . "QObject")
   "virtual qint64 cacheSize () const = 0"
   "virtual QNetworkCacheMetaData metaData ( const QUrl & ) = 0"
   "virtual bool remove ( const QUrl & ) = 0"
   "virtual void updateMetaData ( const QNetworkCacheMetaData & ) = 0")
  (("QAbstractPrintDialog" . "QDialog")
   "virtual int exec () = 0")
  (("QAbstractProxyModel" . "QAbstractItemModel")
   "virtual QModelIndex mapFromSource ( const QModelIndex & ) const = 0"
   "virtual QItemSelection mapSelectionFromSource ( const QItemSelection & ) const"
   "virtual QItemSelection mapSelectionToSource ( const QItemSelection & ) const"
   "virtual QModelIndex mapToSource ( const QModelIndex & ) const = 0"
   "virtual void setSourceModel ( QAbstractItemModel * )"
   "virtual QVariant data ( const QModelIndex & , int = Qt::DisplayRole ) const"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual QVariant headerData ( int , Qt::Orientation , int ) const"
   "virtual void revert ()"
   "virtual bool setData ( const QModelIndex & , const QVariant & , int = Qt::EditRole )"
   "virtual bool setHeaderData ( int , Qt::Orientation , const QVariant & , int = Qt::EditRole )"
   "virtual bool submit ()")
  (("QAbstractScrollArea" . "QFrame")
   "virtual void scrollContentsBy ( int , int )"
   "virtual bool viewportEvent ( QEvent * )"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual void dragEnterEvent ( QDragEnterEvent * )"
   "virtual void dragLeaveEvent ( QDragLeaveEvent * )"
   "virtual void dragMoveEvent ( QDragMoveEvent * )"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )")
  (("QAbstractSlider" . "QWidget")
   "virtual void sliderChange ( SliderChange )"
   "virtual void changeEvent ( QEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void timerEvent ( QTimerEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )")
  (("QAbstractSocket" . "QIODevice")
   "virtual bool atEnd () const"
   "virtual qint64 bytesAvailable () const"
   "virtual qint64 bytesToWrite () const"
   "virtual bool canReadLine () const"
   "virtual void close ()"
   "virtual bool isSequential () const"
   "virtual bool waitForBytesWritten ( int = 30000 )"
   "virtual bool waitForReadyRead ( int = 30000 )"
   "virtual qint64 readData ( char * , qint64 )"
   "virtual qint64 readLineData ( char * , qint64 )"
   "virtual qint64 writeData ( const char * , qint64 )")
  (("QAbstractSpinBox" . "QWidget")
   "virtual void fixup ( QString & ) const"
   "virtual void stepBy ( int )"
   "virtual QValidator::State validate ( QString & , int & ) const"
   "virtual StepEnabled stepEnabled () const"
   "virtual bool event ( QEvent * )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual void closeEvent ( QCloseEvent * )"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual void timerEvent ( QTimerEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )")
  (("QAbstractState" . "QObject")
   "virtual void onEntry ( QEvent * ) = 0"
   "virtual void onExit ( QEvent * ) = 0"
   "virtual bool event ( QEvent * )")
  (("QAbstractTableModel" . "QAbstractItemModel")
   "virtual bool dropMimeData ( const QMimeData * , Qt::DropAction , int , int , const QModelIndex & )"
   "virtual QModelIndex index ( int , int , const QModelIndex & = QModelIndex() ) const")
  (("QAbstractTextDocumentLayout" . "QObject")
   "virtual QRectF blockBoundingRect ( const QTextBlock & ) const = 0"
   "virtual QSizeF documentSize () const = 0"
   "virtual void draw ( QPainter * , const PaintContext & ) = 0"
   "virtual QRectF frameBoundingRect ( QTextFrame * ) const = 0"
   "virtual int hitTest ( const QPointF & , Qt::HitTestAccuracy ) const = 0"
   "virtual int pageCount () const = 0"
   "virtual void documentChanged ( int , int , int ) = 0"
   "virtual void drawInlineObject ( QPainter * , const QRectF & , QTextInlineObject , int , const QTextFormat & )"
   "virtual void positionInlineObject ( QTextInlineObject , int , const QTextFormat & )"
   "virtual void resizeInlineObject ( QTextInlineObject , int , const QTextFormat & )")
  (("QAbstractTransition" . "QObject")
   "virtual bool eventTest ( QEvent * ) = 0"
   "virtual void onTransition ( QEvent * ) = 0"
   "virtual bool event ( QEvent * )")
  (("QAction" . "QObject")
   "virtual bool event ( QEvent * )")
  (("QActionGroup" . "QObject"))
  (("QAnimationGroup" . "QAbstractAnimation")
   "virtual bool event ( QEvent * )")
  (("QApplication" . "QCoreApplication")
   "virtual void commitData ( QSessionManager & )"
   "virtual void saveState ( QSessionManager & )"
   "virtual bool notify ( QObject * , QEvent * )"
   "virtual bool event ( QEvent * )")
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
  (("QBuffer" . "QIODevice")
   "virtual bool atEnd () const"
   "virtual bool canReadLine () const"
   "virtual void close ()"
   "virtual bool open ( OpenMode )"
   "virtual qint64 pos () const"
   "virtual bool seek ( qint64 )"
   "virtual qint64 size () const"
   "virtual qint64 readData ( char * , qint64 )"
   "virtual qint64 writeData ( const char * , qint64 )")
  (("QButtonGroup" . "QObject"))
  (("QCDEStyle" . "QMotifStyle")
   "virtual void drawControl ( ControlElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const"
   "virtual void drawPrimitive ( PrimitiveElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const"
   "virtual int pixelMetric ( PixelMetric , const QStyleOption * = 0, const QWidget * = 0 ) const"
   "virtual QPalette standardPalette () const")
  (("QCalendarWidget" . "QWidget")
   "virtual void paintCell ( QPainter * , const QRect & , const QDate & ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )")
  (("QCheckBox" . "QAbstractButton")
   "virtual QSize sizeHint () const"
   "virtual void checkStateSet ()"
   "virtual bool event ( QEvent * )"
   "virtual bool hitButton ( const QPoint & ) const"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void nextCheckState ()"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QCleanlooksStyle" . "QWindowsStyle")
   "virtual void drawComplexControl ( ComplexControl , const QStyleOptionComplex * , QPainter * , const QWidget * ) const"
   "virtual void drawControl ( ControlElement , const QStyleOption * , QPainter * , const QWidget * ) const"
   "virtual void drawItemPixmap ( QPainter * , const QRect & , int , const QPixmap & ) const"
   "virtual void drawItemText ( QPainter * , const QRect & , int , const QPalette & , bool , const QString & , QPalette::ColorRole = QPalette::NoRole ) const"
   "virtual void drawPrimitive ( PrimitiveElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const"
   "virtual QPixmap generatedIconPixmap ( QIcon::Mode , const QPixmap & , const QStyleOption * ) const"
   "virtual SubControl hitTestComplexControl ( ComplexControl , const QStyleOptionComplex * , const QPoint & , const QWidget * = 0 ) const"
   "virtual QRect itemPixmapRect ( const QRect & , int , const QPixmap & ) const"
   "virtual int pixelMetric ( PixelMetric , const QStyleOption * = 0, const QWidget * = 0 ) const"
   "virtual void polish ( QWidget * )"
   "virtual void polish ( QApplication * )"
   "virtual void polish ( QPalette & )"
   "virtual QSize sizeFromContents ( ContentsType , const QStyleOption * , const QSize & , const QWidget * ) const"
   "virtual QPalette standardPalette () const"
   "virtual QPixmap standardPixmap ( StandardPixmap , const QStyleOption * , const QWidget * = 0 ) const"
   "virtual int styleHint ( StyleHint , const QStyleOption * = 0, const QWidget * = 0, QStyleHintReturn * = 0 ) const"
   "virtual QRect subControlRect ( ComplexControl , const QStyleOptionComplex * , SubControl , const QWidget * ) const"
   "virtual QRect subElementRect ( SubElement , const QStyleOption * , const QWidget * = 0 ) const"
   "virtual void unpolish ( QWidget * )"
   "virtual void unpolish ( QApplication * )")
  (("QClipboard" . "QObject")
   "virtual bool event ( QEvent * )")
  (("QColorDialog" . "QDialog")
   "virtual void setVisible ( bool )"
   "virtual void changeEvent ( QEvent * )"
   "virtual void done ( int )")
  (("QColumnView" . "QAbstractItemView")
   "virtual QAbstractItemView * createColumn ( const QModelIndex & )"
   "virtual QModelIndex indexAt ( const QPoint & ) const"
   "virtual void scrollTo ( const QModelIndex & , ScrollHint = EnsureVisible )"
   "virtual void selectAll ()"
   "virtual void setModel ( QAbstractItemModel * )"
   "virtual void setRootIndex ( const QModelIndex & )"
   "virtual void setSelectionModel ( QItemSelectionModel * )"
   "virtual QSize sizeHint () const"
   "virtual QRect visualRect ( const QModelIndex & ) const"
   "virtual void currentChanged ( const QModelIndex & , const QModelIndex & )"
   "virtual int horizontalOffset () const"
   "virtual bool isIndexHidden ( const QModelIndex & ) const"
   "virtual QModelIndex moveCursor ( CursorAction , Qt::KeyboardModifiers )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void rowsInserted ( const QModelIndex & , int , int )"
   "virtual void scrollContentsBy ( int , int )"
   "virtual void setSelection ( const QRect & , QItemSelectionModel::SelectionFlags )"
   "virtual int verticalOffset () const"
   "virtual QRegion visualRegionForSelection ( const QItemSelection & ) const")
  (("QComboBox" . "QWidget")
   "virtual void hidePopup ()"
   "virtual void showPopup ()"
   "virtual bool event ( QEvent * )"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )")
  (("QCommandLinkButton" . "QPushButton")
   "virtual bool event ( QEvent * )"
   "virtual int heightForWidth ( int ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual QSize sizeHint () const")
  (("QCommonStyle" . "QStyle")
   "virtual void drawComplexControl ( ComplexControl , const QStyleOptionComplex * , QPainter * , const QWidget * = 0 ) const"
   "virtual void drawControl ( ControlElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const"
   "virtual void drawPrimitive ( PrimitiveElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const"
   "virtual QPixmap generatedIconPixmap ( QIcon::Mode , const QPixmap & , const QStyleOption * ) const"
   "virtual SubControl hitTestComplexControl ( ComplexControl , const QStyleOptionComplex * , const QPoint & , const QWidget * = 0 ) const"
   "virtual int pixelMetric ( PixelMetric , const QStyleOption * = 0, const QWidget * = 0 ) const"
   "virtual void polish ( QPalette & )"
   "virtual void polish ( QApplication * )"
   "virtual void polish ( QWidget * )"
   "virtual QSize sizeFromContents ( ContentsType , const QStyleOption * , const QSize & , const QWidget * = 0 ) const"
   "virtual QPixmap standardPixmap ( StandardPixmap , const QStyleOption * = 0, const QWidget * = 0 ) const"
   "virtual int styleHint ( StyleHint , const QStyleOption * = 0, const QWidget * = 0, QStyleHintReturn * = 0 ) const"
   "virtual QRect subControlRect ( ComplexControl , const QStyleOptionComplex * , SubControl , const QWidget * = 0 ) const"
   "virtual QRect subElementRect ( SubElement , const QStyleOption * , const QWidget * = 0 ) const"
   "virtual void unpolish ( QWidget * )"
   "virtual void unpolish ( QApplication * )")
  (("QCompleter" . "QObject")
   "virtual QString pathFromIndex ( const QModelIndex & ) const"
   "virtual QStringList splitPath ( const QString & ) const"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )")
  (("QCoreApplication" . "QObject")
   "virtual bool notify ( QObject * , QEvent * )"
   "virtual bool event ( QEvent * )")
  (("QDataWidgetMapper" . "QObject"))
  (("QDateEdit" . "QDateTimeEdit"))
  (("QDateTimeEdit" . "QAbstractSpinBox")
   "virtual QDateTime dateTimeFromText ( const QString & ) const"
   "virtual QString textFromDateTime ( const QDateTime & ) const"
   "virtual void clear ()"
   "virtual bool event ( QEvent * )"
   "virtual QSize sizeHint () const"
   "virtual void stepBy ( int )"
   "virtual void fixup ( QString & ) const"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual StepEnabled stepEnabled () const"
   "virtual QValidator::State validate ( QString & , int & ) const"
   "virtual void wheelEvent ( QWheelEvent * )")
  (("QDesktopWidget" . "QWidget")
   "virtual void resizeEvent ( QResizeEvent * )")
  (("QDial" . "QAbstractSlider")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual bool event ( QEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void sliderChange ( SliderChange )")
  (("QDialog" . "QWidget")
   "virtual QSize minimumSizeHint () const"
   "virtual void setVisible ( bool )"
   "virtual QSize sizeHint () const"
   "virtual void closeEvent ( QCloseEvent * )"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )")
  (("QDialogButtonBox" . "QWidget")
   "virtual void changeEvent ( QEvent * )"
   "virtual bool event ( QEvent * )")
  (("QDirModel" . "QAbstractItemModel")
   "virtual int columnCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant data ( const QModelIndex & , int = Qt::DisplayRole ) const"
   "virtual bool dropMimeData ( const QMimeData * , Qt::DropAction , int , int , const QModelIndex & )"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual bool hasChildren ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant headerData ( int , Qt::Orientation , int = Qt::DisplayRole ) const"
   "virtual QModelIndex index ( int , int , const QModelIndex & = QModelIndex() ) const"
   "virtual QMimeData * mimeData ( const QModelIndexList & ) const"
   "virtual QStringList mimeTypes () const"
   "virtual QModelIndex parent ( const QModelIndex & ) const"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual bool setData ( const QModelIndex & , const QVariant & , int = Qt::EditRole )"
   "virtual void sort ( int , Qt::SortOrder = Qt::AscendingOrder )"
   "virtual Qt::DropActions supportedDropActions () const")
  (("QDockWidget" . "QWidget")
   "virtual void changeEvent ( QEvent * )"
   "virtual void closeEvent ( QCloseEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QDoubleSpinBox" . "QAbstractSpinBox")
   "virtual QString textFromValue ( double ) const"
   "virtual double valueFromText ( const QString & ) const"
   "virtual void fixup ( QString & ) const"
   "virtual QValidator::State validate ( QString & , int & ) const")
  (("QDoubleValidator" . "QValidator")
   "virtual void setRange ( double , double , int = 0 )"
   "virtual QValidator::State validate ( QString & , int & ) const")
  (("QDrag" . "QObject"))
  (("QErrorMessage" . "QDialog")
   "virtual void changeEvent ( QEvent * )"
   "virtual void done ( int )")
  (("QEventLoop" . "QObject"))
  (("QEventTransition" . "QAbstractTransition")
   "virtual bool event ( QEvent * )"
   "virtual bool eventTest ( QEvent * )"
   "virtual void onTransition ( QEvent * )")
  (("QFile" . "QIODevice")
   "virtual bool atEnd () const"
   "virtual void close ()"
   "virtual bool isSequential () const"
   "virtual bool open ( OpenMode )"
   "virtual qint64 pos () const"
   "virtual bool seek ( qint64 )"
   "virtual qint64 size () const"
   "virtual qint64 readData ( char * , qint64 )"
   "virtual qint64 readLineData ( char * , qint64 )"
   "virtual qint64 writeData ( const char * , qint64 )")
  (("QFileDialog" . "QDialog")
   "virtual void setVisible ( bool )"
   "virtual void accept ()"
   "virtual void changeEvent ( QEvent * )"
   "virtual void done ( int )")
  (("QFileSystemModel" . "QAbstractItemModel")
   "virtual bool canFetchMore ( const QModelIndex & ) const"
   "virtual int columnCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant data ( const QModelIndex & , int = Qt::DisplayRole ) const"
   "virtual bool dropMimeData ( const QMimeData * , Qt::DropAction , int , int , const QModelIndex & )"
   "virtual void fetchMore ( const QModelIndex & )"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual bool hasChildren ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant headerData ( int , Qt::Orientation , int = Qt::DisplayRole ) const"
   "virtual QModelIndex index ( int , int , const QModelIndex & = QModelIndex() ) const"
   "virtual QMimeData * mimeData ( const QModelIndexList & ) const"
   "virtual QStringList mimeTypes () const"
   "virtual QModelIndex parent ( const QModelIndex & ) const"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual bool setData ( const QModelIndex & , const QVariant & , int = Qt::EditRole )"
   "virtual void sort ( int , Qt::SortOrder = Qt::AscendingOrder )"
   "virtual Qt::DropActions supportedDropActions () const"
   "virtual bool event ( QEvent * )"
   "virtual void timerEvent ( QTimerEvent * )")
  (("QFileSystemWatcher" . "QObject"))
  (("QFinalState" . "QAbstractState")
   "virtual bool event ( QEvent * )"
   "virtual void onEntry ( QEvent * )"
   "virtual void onExit ( QEvent * )")
  (("QFocusFrame" . "QWidget")
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QFontComboBox" . "QComboBox")
   "virtual QSize sizeHint () const"
   "virtual bool event ( QEvent * )")
  (("QFontDialog" . "QDialog")
   "virtual void setVisible ( bool )"
   "virtual void changeEvent ( QEvent * )"
   "virtual void done ( int )")
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
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QFtp" . "QObject"))
  (("QGLShader" . "QObject"))
  (("QGLShaderProgram" . "QObject")
   "virtual bool link ()")
  (("QGLWidget" . "QWidget")
   "virtual void glDraw ()"
   "virtual void glInit ()"
   "virtual void initializeGL ()"
   "virtual void initializeOverlayGL ()"
   "virtual void paintGL ()"
   "virtual void paintOverlayGL ()"
   "virtual void resizeGL ( int , int )"
   "virtual void resizeOverlayGL ( int , int )"
   "virtual bool event ( QEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )")
  (("QGesture" . "QObject"))
  (("QGraphicsAnchor" . "QObject"))
  (("QGraphicsBlurEffect" . "QGraphicsEffect")
   "virtual QRectF boundingRectFor ( const QRectF & ) const"
   "virtual void draw ( QPainter * )")
  (("QGraphicsColorizeEffect" . "QGraphicsEffect")
   "virtual void draw ( QPainter * )")
  (("QGraphicsDropShadowEffect" . "QGraphicsEffect")
   "virtual QRectF boundingRectFor ( const QRectF & ) const"
   "virtual void draw ( QPainter * )")
  (("QGraphicsEffect" . "QObject")
   "virtual QRectF boundingRectFor ( const QRectF & ) const"
   "virtual void draw ( QPainter * ) = 0"
   "virtual void sourceChanged ( ChangeFlags )")
  (("QGraphicsObject" . "QObject"))
  (("QGraphicsOpacityEffect" . "QGraphicsEffect")
   "virtual void draw ( QPainter * )")
  (("QGraphicsProxyWidget" . "QGraphicsWidget")
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * )"
   "virtual void setGeometry ( const QRectF & )"
   "virtual int type () const"
   "virtual void contextMenuEvent ( QGraphicsSceneContextMenuEvent * )"
   "virtual void dragEnterEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dragLeaveEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dragMoveEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dropEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void grabMouseEvent ( QEvent * )"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void hoverEnterEvent ( QGraphicsSceneHoverEvent * )"
   "virtual void hoverLeaveEvent ( QGraphicsSceneHoverEvent * )"
   "virtual void hoverMoveEvent ( QGraphicsSceneHoverEvent * )"
   "virtual QVariant itemChange ( GraphicsItemChange , const QVariant & )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseMoveEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mousePressEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseReleaseEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void resizeEvent ( QGraphicsSceneResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & = QSizeF() ) const"
   "virtual void ungrabMouseEvent ( QEvent * )"
   "virtual void wheelEvent ( QGraphicsSceneWheelEvent * )")
  (("QGraphicsRotation" . "QGraphicsTransform")
   "virtual void applyTo ( QMatrix4x4 * ) const")
  (("QGraphicsScale" . "QGraphicsTransform")
   "virtual void applyTo ( QMatrix4x4 * ) const")
  (("QGraphicsScene" . "QObject")
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual void contextMenuEvent ( QGraphicsSceneContextMenuEvent * )"
   "virtual void dragEnterEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dragLeaveEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dragMoveEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void drawBackground ( QPainter * , const QRectF & )"
   "virtual void drawForeground ( QPainter * , const QRectF & )"
   "virtual void dropEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void helpEvent ( QGraphicsSceneHelpEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseMoveEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mousePressEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseReleaseEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void wheelEvent ( QGraphicsSceneWheelEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )")
  (("QGraphicsSvgItem" . "QGraphicsObject")
   "virtual QRectF boundingRect () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual int type () const")
  (("QGraphicsTextItem" . "QGraphicsObject")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * )"
   "virtual QPainterPath shape () const"
   "virtual int type () const"
   "virtual void contextMenuEvent ( QGraphicsSceneContextMenuEvent * )"
   "virtual void dragEnterEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dragLeaveEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dragMoveEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dropEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void hoverEnterEvent ( QGraphicsSceneHoverEvent * )"
   "virtual void hoverLeaveEvent ( QGraphicsSceneHoverEvent * )"
   "virtual void hoverMoveEvent ( QGraphicsSceneHoverEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseMoveEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mousePressEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseReleaseEvent ( QGraphicsSceneMouseEvent * )"
   "virtual bool sceneEvent ( QEvent * )")
  (("QGraphicsTransform" . "QObject")
   "virtual void applyTo ( QMatrix4x4 * ) const = 0")
  (("QGraphicsView" . "QAbstractScrollArea")
   "virtual void drawBackground ( QPainter * , const QRectF & )"
   "virtual void drawForeground ( QPainter * , const QRectF & )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual QSize sizeHint () const"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual void dragEnterEvent ( QDragEnterEvent * )"
   "virtual void dragLeaveEvent ( QDragLeaveEvent * )"
   "virtual void dragMoveEvent ( QDragMoveEvent * )"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void scrollContentsBy ( int , int )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual bool viewportEvent ( QEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )")
  (("QGraphicsWebView" . "QGraphicsWidget")
   "virtual bool event ( QEvent * )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual QVariant itemChange ( GraphicsItemChange , const QVariant & )"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual void setGeometry ( const QRectF & )"
   "virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & ) const"
   "virtual void updateGeometry ()"
   "virtual void contextMenuEvent ( QGraphicsSceneContextMenuEvent * )"
   "virtual void dragEnterEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dragLeaveEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dragMoveEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void dropEvent ( QGraphicsSceneDragDropEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void hoverLeaveEvent ( QGraphicsSceneHoverEvent * )"
   "virtual void hoverMoveEvent ( QGraphicsSceneHoverEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseMoveEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mousePressEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseReleaseEvent ( QGraphicsSceneMouseEvent * )"
   "virtual bool sceneEvent ( QEvent * )"
   "virtual void wheelEvent ( QGraphicsSceneWheelEvent * )")
  (("QGraphicsWidget" . "QGraphicsObject")
   "virtual void paintWindowFrame ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual void changeEvent ( QEvent * )"
   "virtual void closeEvent ( QCloseEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void grabKeyboardEvent ( QEvent * )"
   "virtual void grabMouseEvent ( QEvent * )"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void initStyleOption ( QStyleOption * ) const"
   "virtual void moveEvent ( QGraphicsSceneMoveEvent * )"
   "virtual void polishEvent ()"
   "virtual void resizeEvent ( QGraphicsSceneResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual void ungrabKeyboardEvent ( QEvent * )"
   "virtual void ungrabMouseEvent ( QEvent * )"
   "virtual bool windowFrameEvent ( QEvent * )"
   "virtual Qt::WindowFrameSection windowFrameSectionAt ( const QPointF & ) const"
   "virtual QRectF boundingRect () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual void setGeometry ( const QRectF & )"
   "virtual QPainterPath shape () const"
   "virtual int type () const"
   "virtual bool event ( QEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void hoverLeaveEvent ( QGraphicsSceneHoverEvent * )"
   "virtual void hoverMoveEvent ( QGraphicsSceneHoverEvent * )"
   "virtual QVariant itemChange ( GraphicsItemChange , const QVariant & )"
   "virtual bool sceneEvent ( QEvent * )"
   "virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & = QSizeF() ) const"
   "virtual void updateGeometry ()")
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
   "virtual QLayoutItem * takeAt ( int )"
   "virtual void addItem ( QLayoutItem * )")
  (("QGroupBox" . "QWidget")
   "virtual QSize minimumSizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual void childEvent ( QChildEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )")
  (("QHBoxLayout" . "QBoxLayout"))
  (("QHeaderView" . "QAbstractItemView")
   "virtual void paintSection ( QPainter * , const QRect & , int ) const"
   "virtual QSize sectionSizeFromContents ( int ) const"
   "virtual void reset ()"
   "virtual void setModel ( QAbstractItemModel * )"
   "virtual QSize sizeHint () const"
   "virtual void currentChanged ( const QModelIndex & , const QModelIndex & )"
   "virtual bool event ( QEvent * )"
   "virtual int horizontalOffset () const"
   "virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void setSelection ( const QRect & , QItemSelectionModel::SelectionFlags )"
   "virtual int verticalOffset () const"
   "virtual bool viewportEvent ( QEvent * )")
  (("QHelpContentModel" . "QAbstractItemModel")
   "virtual int columnCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant data ( const QModelIndex & , int ) const"
   "virtual QModelIndex index ( int , int , const QModelIndex & = QModelIndex() ) const"
   "virtual QModelIndex parent ( const QModelIndex & ) const"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const")
  (("QHelpContentWidget" . "QTreeView"))
  (("QHelpEngineCore" . "QObject"))
  (("QHelpIndexModel" . "QStringListModel"))
  (("QHelpIndexWidget" . "QListView"))
  (("QHelpSearchEngine" . "QObject"))
  (("QHelpSearchQueryWidget" . "QWidget"))
  (("QHelpSearchResultWidget" . "QWidget"))
  (("QHistoryState" . "QAbstractState")
   "virtual bool event ( QEvent * )"
   "virtual void onEntry ( QEvent * )"
   "virtual void onExit ( QEvent * )")
  (("QIODevice" . "QObject")
   "virtual bool atEnd () const"
   "virtual qint64 bytesAvailable () const"
   "virtual qint64 bytesToWrite () const"
   "virtual bool canReadLine () const"
   "virtual void close ()"
   "virtual bool isSequential () const"
   "virtual bool open ( OpenMode )"
   "virtual qint64 pos () const"
   "virtual bool reset ()"
   "virtual bool seek ( qint64 )"
   "virtual qint64 size () const"
   "virtual bool waitForBytesWritten ( int )"
   "virtual bool waitForReadyRead ( int )"
   "virtual qint64 readData ( char * , qint64 ) = 0"
   "virtual qint64 readLineData ( char * , qint64 )"
   "virtual qint64 writeData ( const char * , qint64 ) = 0")
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
  (("QIntValidator" . "QValidator")
   "virtual void setRange ( int , int )"
   "virtual QValidator::State validate ( QString & , int & ) const")
  (("QItemDelegate" . "QAbstractItemDelegate")
   "virtual void drawCheck ( QPainter * , const QStyleOptionViewItem & , const QRect & , Qt::CheckState ) const"
   "virtual void drawDecoration ( QPainter * , const QStyleOptionViewItem & , const QRect & , const QPixmap & ) const"
   "virtual void drawDisplay ( QPainter * , const QStyleOptionViewItem & , const QRect & , const QString & ) const"
   "virtual void drawFocus ( QPainter * , const QStyleOptionViewItem & , const QRect & ) const"
   "virtual QWidget * createEditor ( QWidget * , const QStyleOptionViewItem & , const QModelIndex & ) const"
   "virtual void paint ( QPainter * , const QStyleOptionViewItem & , const QModelIndex & ) const"
   "virtual void setEditorData ( QWidget * , const QModelIndex & ) const"
   "virtual void setModelData ( QWidget * , QAbstractItemModel * , const QModelIndex & ) const"
   "virtual QSize sizeHint ( const QStyleOptionViewItem & , const QModelIndex & ) const"
   "virtual void updateEditorGeometry ( QWidget * , const QStyleOptionViewItem & , const QModelIndex & ) const"
   "virtual bool editorEvent ( QEvent * , QAbstractItemModel * , const QStyleOptionViewItem & , const QModelIndex & )"
   "virtual bool eventFilter ( QObject * , QEvent * )")
  (("QItemSelectionModel" . "QObject"))
  (("QKeyEventTransition" . "QEventTransition")
   "virtual bool eventTest ( QEvent * )"
   "virtual void onTransition ( QEvent * )")
  (("QLCDNumber" . "QFrame")
   "virtual QSize sizeHint () const"
   "virtual bool event ( QEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QLabel" . "QFrame")
   "virtual int heightForWidth ( int ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
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
   "virtual void setGeometry ( const QRect & )"
   "virtual void childEvent ( QChildEvent * )")
  (("QLibrary" . "QObject"))
  (("QLineEdit" . "QWidget")
   "virtual bool event ( QEvent * )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual void dragEnterEvent ( QDragEnterEvent * )"
   "virtual void dragLeaveEvent ( QDragLeaveEvent * )"
   "virtual void dragMoveEvent ( QDragMoveEvent * )"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QListView" . "QAbstractItemView")
   "virtual QModelIndex indexAt ( const QPoint & ) const"
   "virtual void scrollTo ( const QModelIndex & , ScrollHint = EnsureVisible )"
   "virtual QRect visualRect ( const QModelIndex & ) const"
   "virtual void currentChanged ( const QModelIndex & , const QModelIndex & )"
   "virtual void dataChanged ( const QModelIndex & , const QModelIndex & )"
   "virtual void dragLeaveEvent ( QDragLeaveEvent * )"
   "virtual void dragMoveEvent ( QDragMoveEvent * )"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual int horizontalOffset () const"
   "virtual bool isIndexHidden ( const QModelIndex & ) const"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual QModelIndex moveCursor ( CursorAction , Qt::KeyboardModifiers )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void rowsAboutToBeRemoved ( const QModelIndex & , int , int )"
   "virtual void rowsInserted ( const QModelIndex & , int , int )"
   "virtual QModelIndexList selectedIndexes () const"
   "virtual void selectionChanged ( const QItemSelection & , const QItemSelection & )"
   "virtual void setSelection ( const QRect & , QItemSelectionModel::SelectionFlags )"
   "virtual void startDrag ( Qt::DropActions )"
   "virtual void timerEvent ( QTimerEvent * )"
   "virtual void updateGeometries ()"
   "virtual int verticalOffset () const"
   "virtual QStyleOptionViewItem viewOptions () const"
   "virtual QRegion visualRegionForSelection ( const QItemSelection & ) const")
  (("QListWidget" . "QListView")
   "virtual bool dropMimeData ( int , const QMimeData * , Qt::DropAction )"
   "virtual QMimeData * mimeData ( const QList<QListWidgetItem *> ) const"
   "virtual QStringList mimeTypes () const"
   "virtual Qt::DropActions supportedDropActions () const"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual bool event ( QEvent * )")
  (("QLocalServer" . "QObject")
   "virtual bool hasPendingConnections () const"
   "virtual QLocalSocket * nextPendingConnection ()"
   "virtual void incomingConnection ( quintptr )")
  (("QLocalSocket" . "QIODevice")
   "virtual qint64 bytesAvailable () const"
   "virtual qint64 bytesToWrite () const"
   "virtual bool canReadLine () const"
   "virtual void close ()"
   "virtual bool isSequential () const"
   "virtual bool waitForBytesWritten ( int = 30000 )"
   "virtual bool waitForReadyRead ( int = 30000 )"
   "virtual qint64 readData ( char * , qint64 )"
   "virtual qint64 writeData ( const char * , qint64 )")
  (("QMainWindow" . "QWidget")
   "virtual QMenu * createPopupMenu ()"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual bool event ( QEvent * )")
  (("QMdiArea" . "QAbstractScrollArea")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void childEvent ( QChildEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void scrollContentsBy ( int , int )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual void timerEvent ( QTimerEvent * )"
   "virtual bool viewportEvent ( QEvent * )")
  (("QMdiSubWindow" . "QWidget")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual void childEvent ( QChildEvent * )"
   "virtual void closeEvent ( QCloseEvent * )"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void leaveEvent ( QEvent * )"
   "virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void moveEvent ( QMoveEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual void timerEvent ( QTimerEvent * )")
  (("QMenu" . "QWidget")
   "virtual QSize sizeHint () const"
   "virtual void actionEvent ( QActionEvent * )"
   "virtual void changeEvent ( QEvent * )"
   "virtual void enterEvent ( QEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void leaveEvent ( QEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void timerEvent ( QTimerEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )")
  (("QMenuBar" . "QWidget")
   "virtual int heightForWidth ( int ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void actionEvent ( QActionEvent * )"
   "virtual void changeEvent ( QEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void leaveEvent ( QEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void timerEvent ( QTimerEvent * )")
  (("QMessageBox" . "QDialog")
   "virtual void setVisible ( bool )"
   "virtual void changeEvent ( QEvent * )"
   "virtual void closeEvent ( QCloseEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )")
  (("QMimeData" . "QObject")
   "virtual QStringList formats () const"
   "virtual bool hasFormat ( const QString & ) const"
   "virtual QVariant retrieveData ( const QString & , QVariant::Type ) const")
  (("QMotifStyle" . "QCommonStyle")
   "virtual void drawComplexControl ( ComplexControl , const QStyleOptionComplex * , QPainter * , const QWidget * = 0 ) const"
   "virtual void drawControl ( ControlElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const"
   "virtual void drawPrimitive ( PrimitiveElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const"
   "virtual bool event ( QEvent * )"
   "virtual int pixelMetric ( PixelMetric , const QStyleOption * = 0, const QWidget * = 0 ) const"
   "virtual void polish ( QPalette & )"
   "virtual QSize sizeFromContents ( ContentsType , const QStyleOption * , const QSize & , const QWidget * = 0 ) const"
   "virtual QPalette standardPalette () const"
   "virtual QPixmap standardPixmap ( StandardPixmap , const QStyleOption * , const QWidget * = 0 ) const"
   "virtual int styleHint ( StyleHint , const QStyleOption * = 0, const QWidget * = 0, QStyleHintReturn * = 0 ) const"
   "virtual QRect subControlRect ( ComplexControl , const QStyleOptionComplex * , SubControl , const QWidget * = 0 ) const"
   "virtual QRect subElementRect ( SubElement , const QStyleOption * , const QWidget * = 0 ) const"
   "virtual void timerEvent ( QTimerEvent * )")
  (("QMouseEventTransition" . "QEventTransition")
   "virtual bool eventTest ( QEvent * )"
   "virtual void onTransition ( QEvent * )")
  (("QMovie" . "QObject"))
  (("QNetworkAccessManager" . "QObject"))
  (("QNetworkCookieJar" . "QObject")
   "virtual QList<QNetworkCookie> cookiesForUrl ( const QUrl & ) const"
   "virtual bool setCookiesFromUrl ( const QList<QNetworkCookie> & , const QUrl & )")
  (("QNetworkDiskCache" . "QAbstractNetworkCache")
   "virtual qint64 expire ()"
   "virtual qint64 cacheSize () const"
   "virtual QNetworkCacheMetaData metaData ( const QUrl & )"
   "virtual bool remove ( const QUrl & )"
   "virtual void updateMetaData ( const QNetworkCacheMetaData & )")
  (("QNetworkReply" . "QIODevice")
   "virtual void abort () = 0"
   "virtual void setReadBufferSize ( qint64 )"
   "virtual void close ()")
  (("QObject" . NIL)
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual const QMetaObject * metaObject () const"
   "virtual void childEvent ( QChildEvent * )"
   "virtual void connectNotify ( const char * )"
   "virtual void customEvent ( QEvent * )"
   "virtual void disconnectNotify ( const char * )"
   "virtual void timerEvent ( QTimerEvent * )")
  (("QPageSetupDialog" . "QDialog")
   "virtual void setVisible ( bool )")
  (("QPanGesture" . "QGesture"))
  (("QParallelAnimationGroup" . "QAnimationGroup")
   "virtual int duration () const"
   "virtual bool event ( QEvent * )"
   "virtual void updateCurrentTime ( int )"
   "virtual void updateDirection ( QAbstractAnimation::Direction )"
   "virtual void updateState ( QAbstractAnimation::State , QAbstractAnimation::State )")
  (("QPauseAnimation" . "QAbstractAnimation")
   "virtual int duration () const"
   "virtual bool event ( QEvent * )"
   "virtual void updateCurrentTime ( int )")
  (("QPinchGesture" . "QGesture"))
  (("QPlainTextDocumentLayout" . "QAbstractTextDocumentLayout")
   "virtual QRectF blockBoundingRect ( const QTextBlock & ) const"
   "virtual QSizeF documentSize () const"
   "virtual void draw ( QPainter *, const PaintContext & )"
   "virtual QRectF frameBoundingRect ( QTextFrame * ) const"
   "virtual int hitTest ( const QPointF &, Qt::HitTestAccuracy ) const"
   "virtual int pageCount () const"
   "virtual void documentChanged ( int , int , int )")
  (("QPlainTextEdit" . "QAbstractScrollArea")
   "virtual QVariant loadResource ( int , const QUrl & )"
   "virtual bool canInsertFromMimeData ( const QMimeData * ) const"
   "virtual QMimeData * createMimeDataFromSelection () const"
   "virtual void insertFromMimeData ( const QMimeData * )"
   "virtual void changeEvent ( QEvent * )"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual void dragEnterEvent ( QDragEnterEvent * )"
   "virtual void dragLeaveEvent ( QDragLeaveEvent * )"
   "virtual void dragMoveEvent ( QDragMoveEvent * )"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void scrollContentsBy ( int , int )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )")
  (("QPlastiqueStyle" . "QWindowsStyle")
   "virtual void drawComplexControl ( ComplexControl , const QStyleOptionComplex * , QPainter * , const QWidget * ) const"
   "virtual void drawControl ( ControlElement , const QStyleOption * , QPainter * , const QWidget * ) const"
   "virtual void drawPrimitive ( PrimitiveElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const"
   "virtual SubControl hitTestComplexControl ( ComplexControl , const QStyleOptionComplex * , const QPoint & , const QWidget * = 0 ) const"
   "virtual int pixelMetric ( PixelMetric , const QStyleOption * = 0, const QWidget * = 0 ) const"
   "virtual void polish ( QWidget * )"
   "virtual void polish ( QApplication * )"
   "virtual void polish ( QPalette & )"
   "virtual QSize sizeFromContents ( ContentsType , const QStyleOption * , const QSize & , const QWidget * ) const"
   "virtual QPalette standardPalette () const"
   "virtual QPixmap standardPixmap ( StandardPixmap , const QStyleOption * , const QWidget * = 0 ) const"
   "virtual int styleHint ( StyleHint , const QStyleOption * = 0, const QWidget * = 0, QStyleHintReturn * = 0 ) const"
   "virtual QRect subControlRect ( ComplexControl , const QStyleOptionComplex * , SubControl , const QWidget * ) const"
   "virtual QRect subElementRect ( SubElement , const QStyleOption * , const QWidget * ) const"
   "virtual void unpolish ( QWidget * )"
   "virtual void unpolish ( QApplication * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void timerEvent ( QTimerEvent * )")
  (("QPluginLoader" . "QObject"))
  (("QPrintDialog" . "QAbstractPrintDialog")
   "virtual void done ( int )"
   "virtual int exec ()"
   "virtual void setVisible ( bool )")
  (("QPrintPreviewDialog" . "QDialog")
   "virtual void done ( int )"
   "virtual void setVisible ( bool )")
  (("QPrintPreviewWidget" . "QWidget")
   "virtual void setVisible ( bool )")
  (("QProcess" . "QIODevice")
   "virtual void setupChildProcess ()"
   "virtual bool atEnd () const"
   "virtual qint64 bytesAvailable () const"
   "virtual qint64 bytesToWrite () const"
   "virtual bool canReadLine () const"
   "virtual void close ()"
   "virtual bool isSequential () const"
   "virtual bool waitForBytesWritten ( int = 30000 )"
   "virtual bool waitForReadyRead ( int = 30000 )"
   "virtual qint64 readData ( char * , qint64 )"
   "virtual qint64 writeData ( const char * , qint64 )")
  (("QProgressBar" . "QWidget")
   "virtual QString text () const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual bool event ( QEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QProgressDialog" . "QDialog")
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual void closeEvent ( QCloseEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )")
  (("QPropertyAnimation" . "QVariantAnimation")
   "virtual bool event ( QEvent * )"
   "virtual void updateCurrentValue ( const QVariant & )"
   "virtual void updateState ( QAbstractAnimation::State , QAbstractAnimation::State )")
  (("QPushButton" . "QAbstractButton")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual bool event ( QEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QRadioButton" . "QAbstractButton")
   "virtual QSize sizeHint () const"
   "virtual bool event ( QEvent * )"
   "virtual bool hitButton ( const QPoint & ) const"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QRegExpValidator" . "QValidator")
   "virtual QValidator::State validate ( QString & , int & ) const")
  (("QRubberBand" . "QWidget")
   "virtual void changeEvent ( QEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void moveEvent ( QMoveEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )")
  (("QScrollArea" . "QAbstractScrollArea")
   "virtual bool focusNextPrevChild ( bool )"
   "virtual QSize sizeHint () const"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void scrollContentsBy ( int , int )")
  (("QScrollBar" . "QAbstractSlider")
   "virtual bool event ( QEvent * )"
   "virtual QSize sizeHint () const"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void sliderChange ( SliderChange )")
  (("QSequentialAnimationGroup" . "QAnimationGroup")
   "virtual int duration () const"
   "virtual bool event ( QEvent * )"
   "virtual void updateCurrentTime ( int )"
   "virtual void updateDirection ( QAbstractAnimation::Direction )"
   "virtual void updateState ( QAbstractAnimation::State , QAbstractAnimation::State )")
  (("QSessionManager" . "QObject"))
  (("QSettings" . "QObject")
   "virtual bool event ( QEvent * )")
  (("QShortcut" . "QObject"))
  (("QSignalTransition" . "QAbstractTransition")
   "virtual bool event ( QEvent * )"
   "virtual bool eventTest ( QEvent * )"
   "virtual void onTransition ( QEvent * )")
  (("QSizeGrip" . "QWidget")
   "virtual void setVisible ( bool )"
   "virtual QSize sizeHint () const"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void moveEvent ( QMoveEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void showEvent ( QShowEvent * )")
  (("QSlider" . "QAbstractSlider")
   "virtual bool event ( QEvent * )"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QSortFilterProxyModel" . "QAbstractProxyModel")
   "virtual bool filterAcceptsColumn ( int , const QModelIndex & ) const"
   "virtual bool filterAcceptsRow ( int , const QModelIndex & ) const"
   "virtual bool lessThan ( const QModelIndex & , const QModelIndex & ) const"
   "virtual QModelIndex buddy ( const QModelIndex & ) const"
   "virtual bool canFetchMore ( const QModelIndex & ) const"
   "virtual int columnCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant data ( const QModelIndex & , int = Qt::DisplayRole ) const"
   "virtual bool dropMimeData ( const QMimeData * , Qt::DropAction , int , int , const QModelIndex & )"
   "virtual void fetchMore ( const QModelIndex & )"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual bool hasChildren ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant headerData ( int , Qt::Orientation , int = Qt::DisplayRole ) const"
   "virtual QModelIndex index ( int , int , const QModelIndex & = QModelIndex() ) const"
   "virtual bool insertColumns ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual bool insertRows ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual QModelIndex mapFromSource ( const QModelIndex & ) const"
   "virtual QItemSelection mapSelectionFromSource ( const QItemSelection & ) const"
   "virtual QItemSelection mapSelectionToSource ( const QItemSelection & ) const"
   "virtual QModelIndex mapToSource ( const QModelIndex & ) const"
   "virtual QModelIndexList match ( const QModelIndex & , int , const QVariant & , int = 1, Qt::MatchFlags = Qt::MatchFlags( Qt::MatchStartsWith | Qt::MatchWrap ) ) const"
   "virtual QMimeData * mimeData ( const QModelIndexList & ) const"
   "virtual QStringList mimeTypes () const"
   "virtual QModelIndex parent ( const QModelIndex & ) const"
   "virtual bool removeColumns ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual bool removeRows ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual bool setData ( const QModelIndex & , const QVariant & , int = Qt::EditRole )"
   "virtual bool setHeaderData ( int , Qt::Orientation , const QVariant & , int = Qt::EditRole )"
   "virtual void setSourceModel ( QAbstractItemModel * )"
   "virtual void sort ( int , Qt::SortOrder = Qt::AscendingOrder )"
   "virtual QSize span ( const QModelIndex & ) const"
   "virtual Qt::DropActions supportedDropActions () const")
  (("QSound" . "QObject"))
  (("QSpinBox" . "QAbstractSpinBox")
   "virtual QString textFromValue ( int ) const"
   "virtual int valueFromText ( const QString & ) const"
   "virtual bool event ( QEvent * )"
   "virtual void fixup ( QString & ) const"
   "virtual QValidator::State validate ( QString & , int & ) const")
  (("QSplashScreen" . "QWidget")
   "virtual void drawContents ( QPainter * )"
   "virtual bool event ( QEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )")
  (("QSplitter" . "QFrame")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual void childEvent ( QChildEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )")
  (("QSplitterHandle" . "QWidget")
   "virtual QSize sizeHint () const"
   "virtual bool event ( QEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QSqlDriver" . "QObject")
   "virtual bool beginTransaction ()"
   "virtual void close () = 0"
   "virtual bool commitTransaction ()"
   "virtual QSqlResult * createResult () const = 0"
   "virtual QString escapeIdentifier ( const QString & , IdentifierType ) const"
   "virtual QString formatValue ( const QSqlField & , bool = false ) const"
   "virtual QVariant handle () const"
   "virtual bool hasFeature ( DriverFeature ) const = 0"
   "virtual bool isOpen () const"
   "virtual bool open ( const QString & , const QString & = QString(), const QString & = QString(), const QString & = QString(), int = -1, const QString & = QString() ) = 0"
   "virtual QSqlIndex primaryIndex ( const QString & ) const"
   "virtual QSqlRecord record ( const QString & ) const"
   "virtual bool rollbackTransaction ()"
   "virtual QString sqlStatement ( StatementType , const QString & , const QSqlRecord & , bool ) const"
   "virtual QStringList tables ( QSql::TableType ) const"
   "virtual void setLastError ( const QSqlError & )"
   "virtual void setOpen ( bool )"
   "virtual void setOpenError ( bool )")
  (("QSqlQueryModel" . "QAbstractTableModel")
   "virtual void clear ()"
   "virtual void queryChange ()"
   "virtual bool canFetchMore ( const QModelIndex & = QModelIndex() ) const"
   "virtual int columnCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant data ( const QModelIndex & , int = Qt::DisplayRole ) const"
   "virtual void fetchMore ( const QModelIndex & = QModelIndex() )"
   "virtual QVariant headerData ( int , Qt::Orientation , int = Qt::DisplayRole ) const"
   "virtual bool insertColumns ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual bool removeColumns ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual bool setHeaderData ( int , Qt::Orientation , const QVariant & , int = Qt::EditRole )")
  (("QSqlRelationalDelegate" . "QItemDelegate")
   "virtual QWidget * createEditor ( QWidget * , const QStyleOptionViewItem & , const QModelIndex & ) const"
   "virtual void setEditorData ( QWidget * , const QModelIndex & ) const"
   "virtual void setModelData ( QWidget * , QAbstractItemModel * , const QModelIndex & ) const")
  (("QSqlRelationalTableModel" . "QSqlTableModel")
   "virtual QSqlTableModel * relationModel ( int ) const"
   "virtual void setRelation ( int , const QSqlRelation & )"
   "virtual void clear ()"
   "virtual QVariant data ( const QModelIndex & , int = Qt::DisplayRole ) const"
   "virtual bool removeColumns ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual bool select ()"
   "virtual bool setData ( const QModelIndex & , const QVariant & , int = Qt::EditRole )"
   "virtual void setTable ( const QString & )"
   "virtual bool insertRowIntoTable ( const QSqlRecord & )"
   "virtual QString orderByClause () const"
   "virtual QString selectStatement () const"
   "virtual bool updateRowInTable ( int , const QSqlRecord & )")
  (("QSqlTableModel" . "QSqlQueryModel")
   "virtual void revertRow ( int )"
   "virtual bool select ()"
   "virtual void setEditStrategy ( EditStrategy )"
   "virtual void setFilter ( const QString & )"
   "virtual void setSort ( int , Qt::SortOrder )"
   "virtual void setTable ( const QString & )"
   "virtual bool deleteRowFromTable ( int )"
   "virtual bool insertRowIntoTable ( const QSqlRecord & )"
   "virtual QString orderByClause () const"
   "virtual QString selectStatement () const"
   "virtual bool updateRowInTable ( int , const QSqlRecord & )"
   "virtual void clear ()"
   "virtual QVariant data ( const QModelIndex & , int = Qt::DisplayRole ) const"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual QVariant headerData ( int , Qt::Orientation , int = Qt::DisplayRole ) const"
   "virtual bool insertRows ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual bool removeColumns ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual bool removeRows ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual bool setData ( const QModelIndex & , const QVariant & , int = Qt::EditRole )"
   "virtual void sort ( int , Qt::SortOrder )")
  (("QStackedLayout" . "QLayout")
   "virtual void addItem ( QLayoutItem * )"
   "virtual int count () const"
   "virtual QLayoutItem * itemAt ( int ) const"
   "virtual QSize minimumSize () const"
   "virtual void setGeometry ( const QRect & )"
   "virtual QSize sizeHint () const"
   "virtual QLayoutItem * takeAt ( int )")
  (("QStackedWidget" . "QFrame")
   "virtual bool event ( QEvent * )")
  (("QStandardItemModel" . "QAbstractItemModel")
   "virtual int columnCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant data ( const QModelIndex & , int = Qt::DisplayRole ) const"
   "virtual bool dropMimeData ( const QMimeData * , Qt::DropAction , int , int , const QModelIndex & )"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual bool hasChildren ( const QModelIndex & = QModelIndex() ) const"
   "virtual QVariant headerData ( int , Qt::Orientation , int = Qt::DisplayRole ) const"
   "virtual QModelIndex index ( int , int , const QModelIndex & = QModelIndex() ) const"
   "virtual bool insertColumns ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual bool insertRows ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual QMimeData * mimeData ( const QModelIndexList & ) const"
   "virtual QStringList mimeTypes () const"
   "virtual QModelIndex parent ( const QModelIndex & ) const"
   "virtual bool removeColumns ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual bool removeRows ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual bool setData ( const QModelIndex & , const QVariant & , int = Qt::EditRole )"
   "virtual bool setHeaderData ( int , Qt::Orientation , const QVariant & , int = Qt::EditRole )"
   "virtual void sort ( int , Qt::SortOrder = Qt::AscendingOrder )"
   "virtual Qt::DropActions supportedDropActions () const")
  (("QState" . "QAbstractState")
   "virtual bool event ( QEvent * )"
   "virtual void onEntry ( QEvent * )"
   "virtual void onExit ( QEvent * )")
  (("QStateMachine" . "QState")
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void onEntry ( QEvent * )"
   "virtual void onExit ( QEvent * )")
  (("QStatusBar" . "QWidget")
   "virtual bool event ( QEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )")
  (("QStringListModel" . "QAbstractListModel")
   "virtual QVariant data ( const QModelIndex & , int ) const"
   "virtual Qt::ItemFlags flags ( const QModelIndex & ) const"
   "virtual bool insertRows ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual bool removeRows ( int , int , const QModelIndex & = QModelIndex() )"
   "virtual int rowCount ( const QModelIndex & = QModelIndex() ) const"
   "virtual bool setData ( const QModelIndex & , const QVariant & , int = Qt::EditRole )"
   "virtual void sort ( int , Qt::SortOrder = Qt::AscendingOrder )"
   "virtual Qt::DropActions supportedDropActions () const")
  (("QStyle" . "QObject")
   "virtual void drawComplexControl ( ComplexControl , const QStyleOptionComplex * , QPainter * , const QWidget * = 0 ) const = 0"
   "virtual void drawControl ( ControlElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const = 0"
   "virtual void drawItemPixmap ( QPainter * , const QRect & , int , const QPixmap & ) const"
   "virtual void drawItemText ( QPainter * , const QRect & , int , const QPalette & , bool , const QString & , QPalette::ColorRole = QPalette::NoRole ) const"
   "virtual void drawPrimitive ( PrimitiveElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const = 0"
   "virtual QPixmap generatedIconPixmap ( QIcon::Mode , const QPixmap & , const QStyleOption * ) const = 0"
   "virtual SubControl hitTestComplexControl ( ComplexControl , const QStyleOptionComplex * , const QPoint & , const QWidget * = 0 ) const = 0"
   "virtual QRect itemPixmapRect ( const QRect & , int , const QPixmap & ) const"
   "virtual QRect itemTextRect ( const QFontMetrics & , const QRect & , int , bool , const QString & ) const"
   "virtual int pixelMetric ( PixelMetric , const QStyleOption * = 0, const QWidget * = 0 ) const = 0"
   "virtual void polish ( QWidget * )"
   "virtual void polish ( QApplication * )"
   "virtual void polish ( QPalette & )"
   "virtual QSize sizeFromContents ( ContentsType , const QStyleOption * , const QSize & , const QWidget * = 0 ) const = 0"
   "virtual QPalette standardPalette () const"
   "virtual int styleHint ( StyleHint , const QStyleOption * = 0, const QWidget * = 0, QStyleHintReturn * = 0 ) const = 0"
   "virtual QRect subControlRect ( ComplexControl , const QStyleOptionComplex * , SubControl , const QWidget * = 0 ) const = 0"
   "virtual QRect subElementRect ( SubElement , const QStyleOption * , const QWidget * = 0 ) const = 0"
   "virtual void unpolish ( QWidget * )"
   "virtual void unpolish ( QApplication * )")
  (("QStyledItemDelegate" . "QAbstractItemDelegate")
   "virtual QString displayText ( const QVariant & , const QLocale & ) const"
   "virtual void initStyleOption ( QStyleOptionViewItem * , const QModelIndex & ) const"
   "virtual QWidget * createEditor ( QWidget * , const QStyleOptionViewItem & , const QModelIndex & ) const"
   "virtual void paint ( QPainter * , const QStyleOptionViewItem & , const QModelIndex & ) const"
   "virtual void setEditorData ( QWidget * , const QModelIndex & ) const"
   "virtual void setModelData ( QWidget * , QAbstractItemModel * , const QModelIndex & ) const"
   "virtual QSize sizeHint ( const QStyleOptionViewItem & , const QModelIndex & ) const"
   "virtual void updateEditorGeometry ( QWidget * , const QStyleOptionViewItem & , const QModelIndex & ) const"
   "virtual bool editorEvent ( QEvent * , QAbstractItemModel * , const QStyleOptionViewItem & , const QModelIndex & )"
   "virtual bool eventFilter ( QObject * , QEvent * )")
  (("QSvgRenderer" . "QObject"))
  (("QSvgWidget" . "QWidget")
   "virtual QSize sizeHint () const"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QSwipeGesture" . "QGesture"))
  (("QSyntaxHighlighter" . "QObject")
   "virtual void highlightBlock ( const QString & ) = 0")
  (("QSystemTrayIcon" . "QObject")
   "virtual bool event ( QEvent * )")
  (("QTabBar" . "QWidget")
   "virtual void tabInserted ( int )"
   "virtual void tabLayoutChange ()"
   "virtual void tabRemoved ( int )"
   "virtual QSize tabSizeHint ( int ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )")
  (("QTabWidget" . "QWidget")
   "virtual void tabInserted ( int )"
   "virtual void tabRemoved ( int )"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )")
  (("QTableView" . "QAbstractItemView")
   "virtual QModelIndex indexAt ( const QPoint & ) const"
   "virtual void setModel ( QAbstractItemModel * )"
   "virtual void setRootIndex ( const QModelIndex & )"
   "virtual void setSelectionModel ( QItemSelectionModel * )"
   "virtual void currentChanged ( const QModelIndex & , const QModelIndex & )"
   "virtual int horizontalOffset () const"
   "virtual bool isIndexHidden ( const QModelIndex & ) const"
   "virtual QModelIndex moveCursor ( CursorAction , Qt::KeyboardModifiers )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual QModelIndexList selectedIndexes () const"
   "virtual void selectionChanged ( const QItemSelection & , const QItemSelection & )"
   "virtual void setSelection ( const QRect & , QItemSelectionModel::SelectionFlags )"
   "virtual int sizeHintForColumn ( int ) const"
   "virtual int sizeHintForRow ( int ) const"
   "virtual void timerEvent ( QTimerEvent * )"
   "virtual void updateGeometries ()"
   "virtual int verticalOffset () const"
   "virtual QStyleOptionViewItem viewOptions () const")
  (("QTableWidget" . "QTableView")
   "virtual bool dropMimeData ( int , int , const QMimeData * , Qt::DropAction )"
   "virtual QMimeData * mimeData ( const QList<QTableWidgetItem *> ) const"
   "virtual QStringList mimeTypes () const"
   "virtual Qt::DropActions supportedDropActions () const"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual bool event ( QEvent * )")
  (("QTapAndHoldGesture" . "QGesture"))
  (("QTapGesture" . "QGesture"))
  (("QTcpServer" . "QObject")
   "virtual bool hasPendingConnections () const"
   "virtual QTcpSocket * nextPendingConnection ()"
   "virtual void incomingConnection ( int )")
  (("QTcpSocket" . "QAbstractSocket"))
  (("QTextBlockGroup" . "QTextObject")
   "virtual void blockFormatChanged ( const QTextBlock & )"
   "virtual void blockInserted ( const QTextBlock & )"
   "virtual void blockRemoved ( const QTextBlock & )")
  (("QTextBrowser" . "QTextEdit")
   "virtual QVariant loadResource ( int , const QUrl & )"
   "virtual bool event ( QEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )")
  (("QTextDocument" . "QObject")
   "virtual void clear ()"
   "virtual QTextObject * createObject ( const QTextFormat & )"
   "virtual QVariant loadResource ( int , const QUrl & )")
  (("QTextEdit" . "QAbstractScrollArea")
   "virtual QVariant loadResource ( int , const QUrl & )"
   "virtual bool canInsertFromMimeData ( const QMimeData * ) const"
   "virtual QMimeData * createMimeDataFromSelection () const"
   "virtual void insertFromMimeData ( const QMimeData * )"
   "virtual void changeEvent ( QEvent * )"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual void dragEnterEvent ( QDragEnterEvent * )"
   "virtual void dragLeaveEvent ( QDragLeaveEvent * )"
   "virtual void dragMoveEvent ( QDragMoveEvent * )"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void scrollContentsBy ( int , int )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )")
  (("QTextFrame" . "QTextObject"))
  (("QTextList" . "QTextBlockGroup"))
  (("QTextObject" . "QObject"))
  (("QTextTable" . "QTextFrame"))
  (("QTimeEdit" . "QDateTimeEdit"))
  (("QTimeLine" . "QObject")
   "virtual qreal valueForTime ( int ) const"
   "virtual void timerEvent ( QTimerEvent * )")
  (("QTimer" . "QObject")
   "virtual void timerEvent ( QTimerEvent * )")
  (("QToolBar" . "QWidget")
   "virtual void actionEvent ( QActionEvent * )"
   "virtual void changeEvent ( QEvent * )"
   "virtual void childEvent ( QChildEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )")
  (("QToolBox" . "QFrame")
   "virtual void itemInserted ( int )"
   "virtual void itemRemoved ( int )"
   "virtual void changeEvent ( QEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual void showEvent ( QShowEvent * )")
  (("QToolButton" . "QAbstractButton")
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void actionEvent ( QActionEvent * )"
   "virtual void changeEvent ( QEvent * )"
   "virtual void enterEvent ( QEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual bool hitButton ( const QPoint & ) const"
   "virtual void leaveEvent ( QEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void nextCheckState ()"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void timerEvent ( QTimerEvent * )")
  (("QTranslator" . "QObject")
   "virtual bool isEmpty () const"
   "virtual QString translate ( const char * , const char * , const char * = 0 ) const")
  (("QTreeView" . "QAbstractItemView")
   "virtual void drawBranches ( QPainter * , const QRect & , const QModelIndex & ) const"
   "virtual void drawRow ( QPainter * , const QStyleOptionViewItem & , const QModelIndex & ) const"
   "virtual void dataChanged ( const QModelIndex & , const QModelIndex & )"
   "virtual QModelIndex indexAt ( const QPoint & ) const"
   "virtual void keyboardSearch ( const QString & )"
   "virtual void reset ()"
   "virtual void scrollTo ( const QModelIndex & , ScrollHint = EnsureVisible )"
   "virtual void selectAll ()"
   "virtual void setModel ( QAbstractItemModel * )"
   "virtual void setRootIndex ( const QModelIndex & )"
   "virtual void setSelectionModel ( QItemSelectionModel * )"
   "virtual QRect visualRect ( const QModelIndex & ) const"
   "virtual void currentChanged ( const QModelIndex & , const QModelIndex & )"
   "virtual void dragMoveEvent ( QDragMoveEvent * )"
   "virtual int horizontalOffset () const"
   "virtual bool isIndexHidden ( const QModelIndex & ) const"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual QModelIndex moveCursor ( CursorAction , Qt::KeyboardModifiers )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void rowsAboutToBeRemoved ( const QModelIndex & , int , int )"
   "virtual void rowsInserted ( const QModelIndex & , int , int )"
   "virtual void scrollContentsBy ( int , int )"
   "virtual QModelIndexList selectedIndexes () const"
   "virtual void selectionChanged ( const QItemSelection & , const QItemSelection & )"
   "virtual void setSelection ( const QRect & , QItemSelectionModel::SelectionFlags )"
   "virtual int sizeHintForColumn ( int ) const"
   "virtual void timerEvent ( QTimerEvent * )"
   "virtual void updateGeometries ()"
   "virtual int verticalOffset () const"
   "virtual bool viewportEvent ( QEvent * )"
   "virtual QRegion visualRegionForSelection ( const QItemSelection & ) const")
  (("QTreeWidget" . "QTreeView")
   "virtual bool dropMimeData ( QTreeWidgetItem * , int , const QMimeData * , Qt::DropAction )"
   "virtual QMimeData * mimeData ( const QList<QTreeWidgetItem *> ) const"
   "virtual QStringList mimeTypes () const"
   "virtual Qt::DropActions supportedDropActions () const"
   "virtual void setSelectionModel ( QItemSelectionModel * )"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual bool event ( QEvent * )")
  (("QUdpSocket" . "QAbstractSocket"))
  (("QUndoGroup" . "QObject"))
  (("QUndoStack" . "QObject"))
  (("QUndoView" . "QListView"))
  (("QVBoxLayout" . "QBoxLayout"))
  (("QValidator" . "QObject")
   "virtual void fixup ( QString & ) const"
   "virtual State validate ( QString & , int & ) const = 0")
  (("QVariantAnimation" . "QAbstractAnimation")
   "virtual QVariant interpolated ( const QVariant & , const QVariant & , qreal ) const"
   "virtual void updateCurrentValue ( const QVariant & ) = 0"
   "virtual int duration () const"
   "virtual bool event ( QEvent * )"
   "virtual void updateCurrentTime ( int )"
   "virtual void updateState ( QAbstractAnimation::State , QAbstractAnimation::State )")
  (("QWebFrame" . "QObject")
   "virtual bool event ( QEvent * )")
  (("QWebHistoryInterface" . "QObject")
   "virtual void addHistoryEntry ( const QString & ) = 0"
   "virtual bool historyContains ( const QString & ) const = 0")
  (("QWebInspector" . "QWidget")
   "virtual bool event ( QEvent * )"
   "virtual QSize sizeHint () const"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )")
  (("QWebPage" . "QObject")
   "virtual bool extension ( Extension , const ExtensionOption * = 0, ExtensionReturn * = 0 )"
   "virtual bool supportsExtension ( Extension ) const"
   "virtual void triggerAction ( WebAction , bool = false )"
   "virtual bool acceptNavigationRequest ( QWebFrame * , const QNetworkRequest & , NavigationType )"
   "virtual QString chooseFile ( QWebFrame * , const QString & )"
   "virtual QObject * createPlugin ( const QString & , const QUrl & , const QStringList & , const QStringList & )"
   "virtual QWebPage * createWindow ( WebWindowType )"
   "virtual void javaScriptAlert ( QWebFrame * , const QString & )"
   "virtual bool javaScriptConfirm ( QWebFrame * , const QString & )"
   "virtual void javaScriptConsoleMessage ( const QString & , int , const QString & )"
   "virtual bool javaScriptPrompt ( QWebFrame * , const QString & , const QString & , QString * )"
   "virtual QString userAgentForUrl ( const QUrl & ) const"
   "virtual bool event ( QEvent * )")
  (("QWebPluginFactory" . "QObject")
   "virtual QObject * create ( const QString & , const QUrl & , const QStringList & , const QStringList & ) const = 0"
   "virtual bool extension ( Extension , const ExtensionOption * = 0, ExtensionReturn * = 0 )"
   "virtual QList<Plugin> plugins () const = 0"
   "virtual void refreshPlugins ()"
   "virtual bool supportsExtension ( Extension ) const")
  (("QWebView" . "QWidget")
   "virtual QWebView * createWindow ( QWebPage::WebWindowType )"
   "virtual bool event ( QEvent * )"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual void dragEnterEvent ( QDragEnterEvent * )"
   "virtual void dragLeaveEvent ( QDragLeaveEvent * )"
   "virtual void dragMoveEvent ( QDragMoveEvent * )"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )")
  (("QWidget" . "QObject")
   "virtual int heightForWidth ( int ) const"
   "virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "virtual QSize minimumSizeHint () const"
   "virtual QSize sizeHint () const"
   "virtual void actionEvent ( QActionEvent * )"
   "virtual void changeEvent ( QEvent * )"
   "virtual void closeEvent ( QCloseEvent * )"
   "virtual void contextMenuEvent ( QContextMenuEvent * )"
   "virtual void dragEnterEvent ( QDragEnterEvent * )"
   "virtual void dragLeaveEvent ( QDragLeaveEvent * )"
   "virtual void dragMoveEvent ( QDragMoveEvent * )"
   "virtual void dropEvent ( QDropEvent * )"
   "virtual void enterEvent ( QEvent * )"
   "virtual void focusInEvent ( QFocusEvent * )"
   "virtual bool focusNextPrevChild ( bool )"
   "virtual void focusOutEvent ( QFocusEvent * )"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void inputMethodEvent ( QInputMethodEvent * )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void leaveEvent ( QEvent * )"
   "virtual void mouseDoubleClickEvent ( QMouseEvent * )"
   "virtual void mouseMoveEvent ( QMouseEvent * )"
   "virtual void mousePressEvent ( QMouseEvent * )"
   "virtual void mouseReleaseEvent ( QMouseEvent * )"
   "virtual void moveEvent ( QMoveEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual void tabletEvent ( QTabletEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual int metric ( PaintDeviceMetric ) const")
  (("QWidgetAction" . "QAction")
   "virtual QWidget * createWidget ( QWidget * )"
   "virtual void deleteWidget ( QWidget * )"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )")
  (("QWindowsStyle" . "QCommonStyle")
   "virtual void drawComplexControl ( ComplexControl , const QStyleOptionComplex * , QPainter * , const QWidget * = 0 ) const"
   "virtual void drawControl ( ControlElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const"
   "virtual void drawPrimitive ( PrimitiveElement , const QStyleOption * , QPainter * , const QWidget * = 0 ) const"
   "virtual int pixelMetric ( PixelMetric , const QStyleOption * = 0, const QWidget * = 0 ) const"
   "virtual void polish ( QApplication * )"
   "virtual void polish ( QWidget * )"
   "virtual void polish ( QPalette & )"
   "virtual QSize sizeFromContents ( ContentsType , const QStyleOption * , const QSize & , const QWidget * = 0 ) const"
   "virtual QPixmap standardPixmap ( StandardPixmap , const QStyleOption * , const QWidget * = 0 ) const"
   "virtual int styleHint ( StyleHint , const QStyleOption * = 0, const QWidget * = 0, QStyleHintReturn * = 0 ) const"
   "virtual QRect subElementRect ( SubElement , const QStyleOption * , const QWidget * = 0 ) const"
   "virtual void unpolish ( QApplication * )"
   "virtual void unpolish ( QWidget * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void timerEvent ( QTimerEvent * )")
  (("QWizard" . "QDialog")
   "virtual int nextId () const"
   "virtual bool validateCurrentPage ()"
   "virtual void cleanupPage ( int )"
   "virtual void initializePage ( int )"
   "virtual void setVisible ( bool )"
   "virtual QSize sizeHint () const"
   "virtual void done ( int )"
   "virtual bool event ( QEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )")
  (("QWizardPage" . "QWidget")
   "virtual void cleanupPage ()"
   "virtual void initializePage ()"
   "virtual bool isComplete () const"
   "virtual int nextId () const"
   "virtual bool validatePage ()")
  (("QWorkspace" . "QWidget")
   "virtual QSize sizeHint () const"
   "virtual void changeEvent ( QEvent * )"
   "virtual void childEvent ( QChildEvent * )"
   "virtual bool event ( QEvent * )"
   "virtual bool eventFilter ( QObject * , QEvent * )"
   "virtual void hideEvent ( QHideEvent * )"
   "virtual void paintEvent ( QPaintEvent * )"
   "virtual void resizeEvent ( QResizeEvent * )"
   "virtual void showEvent ( QShowEvent * )"
   "virtual void wheelEvent ( QWheelEvent * )")
))
