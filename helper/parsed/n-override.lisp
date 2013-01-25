(defparameter *n-override* '(
  (("QAbstractGraphicsShapeItem" . "QGraphicsItem")
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const")
  (("QAccessible" . NIL))
  (("QAccessibleEvent" . "QEvent"))
  (("QAccessibleInterface" . "QAccessible")
   "virtual QString actionText ( int , Text , int ) const = 0"
   "virtual int childAt ( int , int ) const = 0"
   "virtual int childCount () const = 0"
   "virtual bool doAction ( int , int , const QVariantList & = QVariantList() ) = 0"
   "virtual int indexOfChild ( const QAccessibleInterface * ) const = 0"
   "virtual bool isValid () const = 0"
   "virtual QObject * object () const = 0"
   "virtual QRect rect ( int ) const = 0"
   "virtual Relation relationTo ( int , const QAccessibleInterface * , int ) const = 0"
   "virtual Role role ( int ) const = 0"
   "virtual void setText ( Text , int , const QString & ) = 0"
   "virtual State state ( int ) const = 0"
   "virtual QString text ( Text , int ) const = 0"
   "virtual int userActionCount ( int ) const = 0")
  (("QAccessibleObject" . "QAccessibleInterface")
   "virtual QString actionText ( int , Text , int ) const"
   "virtual bool doAction ( int , int , const QVariantList & )"
   "virtual bool isValid () const"
   "virtual QObject * object () const"
   "virtual QRect rect ( int ) const"
   "virtual void setText ( Text , int , const QString & )"
   "virtual int userActionCount ( int ) const")
  (("QAccessibleWidget" . "QAccessibleObject")
   "virtual QString actionText ( int , Text , int ) const"
   "virtual int childAt ( int , int ) const"
   "virtual int childCount () const"
   "virtual bool doAction ( int , int , const QVariantList & )"
   "virtual int indexOfChild ( const QAccessibleInterface * ) const"
   "virtual QRect rect ( int ) const"
   "virtual Relation relationTo ( int , const QAccessibleInterface * , int ) const"
   "virtual Role role ( int ) const"
   "virtual State state ( int ) const"
   "virtual QString text ( Text , int ) const"
   "virtual int userActionCount ( int ) const")
  (("QActionEvent" . "QEvent"))
  (("QAuthenticator" . NIL))
  (("QBasicTimer" . NIL))
  (("QBitArray" . NIL))
  (("QBitmap" . "QPixmap"))
  (("QBrush" . NIL))
  (("QChildEvent" . "QEvent"))
  (("QCloseEvent" . "QEvent"))
  (("QColor" . NIL))
  (("QConicalGradient" . "QGradient"))
  (("QContextMenuEvent" . "QInputEvent"))
  (("QCryptographicHash" . NIL))
  (("QCursor" . NIL))
  (("QDate" . NIL))
  (("QDateTime" . NIL))
  (("QDesktopServices" . NIL))
  (("QDir" . NIL))
  (("QDirIterator" . NIL))
  (("QDragEnterEvent" . "QDragMoveEvent"))
  (("QDragLeaveEvent" . "QEvent"))
  (("QDragMoveEvent" . "QDropEvent"))
  (("QDropEvent" . "QEvent")
   "virtual QByteArray encodedData ( const char * ) const"
   "virtual const char * format ( int = 0 ) const"
   "virtual bool provides ( const char * ) const")
  (("QDynamicPropertyChangeEvent" . "QEvent"))
  (("QEasingCurve" . NIL))
  (("QEvent" . NIL))
  (("QFileIconProvider" . NIL)
   "virtual QIcon icon ( IconType ) const"
   "virtual QIcon icon ( const QFileInfo & ) const"
   "virtual QString type ( const QFileInfo & ) const")
  (("QFileInfo" . NIL))
  (("QFileOpenEvent" . "QEvent"))
  (("QFocusEvent" . "QEvent"))
  (("QFont" . NIL))
  (("QFontDatabase" . NIL))
  (("QFontInfo" . NIL))
  (("QFontMetrics" . NIL))
  (("QGLColormap" . NIL))
  (("QGLContext" . NIL)
   "virtual bool create ( const QGLContext * = 0 )"
   "virtual void doneCurrent ()"
   "virtual void makeCurrent ()"
   "virtual void swapBuffers () const"
   "virtual bool chooseContext ( const QGLContext * = 0 )")
  (("QGLFormat" . NIL))
  (("QGLFramebufferObject" . "QPaintDevice")
   "virtual int metric ( PaintDeviceMetric ) const")
  (("QGLFramebufferObjectFormat" . NIL))
  (("QGLPixelBuffer" . "QPaintDevice")
   "virtual int metric ( PaintDeviceMetric ) const")
  (("QGestureEvent" . "QEvent"))
  (("QGradient" . NIL))
  (("QGraphicsAnchorLayout" . "QGraphicsLayout")
   "virtual int count () const"
   "virtual void invalidate ()"
   "virtual QGraphicsLayoutItem * itemAt ( int ) const"
   "virtual void removeAt ( int )"
   "virtual void setGeometry ( const QRectF & )"
   "virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & = QSizeF() ) const")
  (("QGraphicsEllipseItem" . "QAbstractGraphicsShapeItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsGridLayout" . "QGraphicsLayout")
   "virtual int count () const"
   "virtual void invalidate ()"
   "virtual QGraphicsLayoutItem * itemAt ( int ) const"
   "virtual void removeAt ( int )"
   "virtual void setGeometry ( const QRectF & )"
   "virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & = QSizeF() ) const")
  (("QGraphicsItem" . NIL)
   "virtual void advance ( int )"
   "virtual QRectF boundingRect () const = 0"
   "virtual bool collidesWithItem ( const QGraphicsItem * , Qt::ItemSelectionMode = Qt::IntersectsItemShape ) const"
   "virtual bool collidesWithPath ( const QPainterPath & , Qt::ItemSelectionMode = Qt::IntersectsItemShape ) const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 ) = 0"
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
   "virtual QVariant itemChange ( GraphicsItemChange , const QVariant & )"
   "virtual void keyPressEvent ( QKeyEvent * )"
   "virtual void keyReleaseEvent ( QKeyEvent * )"
   "virtual void mouseDoubleClickEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseMoveEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mousePressEvent ( QGraphicsSceneMouseEvent * )"
   "virtual void mouseReleaseEvent ( QGraphicsSceneMouseEvent * )"
   "virtual bool sceneEvent ( QEvent * )"
   "virtual bool sceneEventFilter ( QGraphicsItem * , QEvent * )"
   "virtual void wheelEvent ( QGraphicsSceneWheelEvent * )")
  (("QGraphicsItemGroup" . "QGraphicsItem")
   "virtual QRectF boundingRect () const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual int type () const")
  (("QGraphicsLayout" . "QGraphicsLayoutItem")
   "virtual int count () const = 0"
   "virtual void invalidate ()"
   "virtual QGraphicsLayoutItem * itemAt ( int ) const = 0"
   "virtual void removeAt ( int ) = 0"
   "virtual void widgetEvent ( QEvent * )"
   "virtual void updateGeometry ()")
  (("QGraphicsLayoutItem" . NIL)
   "virtual void setGeometry ( const QRectF & )"
   "virtual void updateGeometry ()"
   "virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & = QSizeF() ) const = 0")
  (("QGraphicsLineItem" . "QGraphicsItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsLinearLayout" . "QGraphicsLayout")
   "virtual int count () const"
   "virtual void invalidate ()"
   "virtual QGraphicsLayoutItem * itemAt ( int ) const"
   "virtual void removeAt ( int )"
   "virtual void setGeometry ( const QRectF & )"
   "virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & = QSizeF() ) const")
  (("QGraphicsPathItem" . "QAbstractGraphicsShapeItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsPixmapItem" . "QGraphicsItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsPolygonItem" . "QAbstractGraphicsShapeItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsRectItem" . "QAbstractGraphicsShapeItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QGraphicsSceneContextMenuEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneDragDropEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneEvent" . "QEvent"))
  (("QGraphicsSceneHelpEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneHoverEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneMouseEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneMoveEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneResizeEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSceneWheelEvent" . "QGraphicsSceneEvent"))
  (("QGraphicsSimpleTextItem" . "QAbstractGraphicsShapeItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
  (("QHelpContentItem" . NIL))
  (("QHelpEvent" . "QEvent"))
  (("QHelpSearchQuery" . NIL))
  (("QHideEvent" . "QEvent"))
  (("QHostAddress" . NIL))
  (("QHostInfo" . NIL))
  (("QHoverEvent" . "QEvent"))
  (("QIcon" . NIL))
  (("QIconDragEvent" . "QEvent"))
  (("QImage" . "QPaintDevice"))
  (("QInputEvent" . "QEvent"))
  (("QInputMethodEvent" . "QEvent"))
  (("QItemEditorFactory" . NIL)
   "virtual QWidget * createEditor ( QVariant::Type , QWidget * ) const"
   "virtual QByteArray valuePropertyName ( QVariant::Type ) const")
  (("QItemSelection" . NIL))
  (("QItemSelectionRange" . NIL))
  (("QKeyEvent" . "QInputEvent"))
  (("QKeySequence" . NIL))
  (("QLayoutItem" . NIL)
   "virtual Qt::Orientations expandingDirections () const = 0"
   "virtual QRect geometry () const = 0"
   "virtual bool hasHeightForWidth () const"
   "virtual int heightForWidth ( int ) const"
   "virtual void invalidate ()"
   "virtual bool isEmpty () const = 0"
   "virtual QLayout * layout ()"
   "virtual QSize maximumSize () const = 0"
   "virtual int minimumHeightForWidth ( int ) const"
   "virtual QSize minimumSize () const = 0"
   "virtual void setGeometry ( const QRect & ) = 0"
   "virtual QSize sizeHint () const = 0"
   "virtual QSpacerItem * spacerItem ()"
   "virtual QWidget * widget ()")
  (("QLibraryInfo" . NIL))
  (("QLinearGradient" . "QGradient"))
  (("QListWidgetItem" . NIL)
   "virtual QListWidgetItem * clone () const"
   "virtual QVariant data ( int ) const"
   "virtual void setData ( int , const QVariant & )")
  (("QLocale" . NIL))
  (("QMargins" . NIL))
  (("QMatrix" . NIL))
  (("QMatrix4x4" . NIL))
  (("QMetaObject" . NIL))
  (("QModelIndex" . NIL))
  (("QMouseEvent" . "QInputEvent"))
  (("QMoveEvent" . "QEvent"))
  (("QNetworkAddressEntry" . NIL))
  (("QNetworkCacheMetaData" . NIL))
  (("QNetworkCookie" . NIL))
  (("QNetworkInterface" . NIL))
  (("QNetworkProxy" . NIL))
  (("QNetworkProxyFactory" . NIL)
   "virtual QList<QNetworkProxy> queryProxy ( const QNetworkProxyQuery & = QNetworkProxyQuery() ) = 0")
  (("QNetworkProxyQuery" . NIL))
  (("QNetworkRequest" . NIL))
  (("QPaintDevice" . NIL)
   "virtual int metric ( PaintDeviceMetric ) const")
  (("QPaintEvent" . "QEvent"))
  (("QPainter" . NIL))
  (("QPainterPath" . NIL))
  (("QPainterPathStroker" . NIL))
  (("QPalette" . NIL))
  (("QPen" . NIL))
  (("QPersistentModelIndex" . NIL))
  (("QPicture" . "QPaintDevice")
   "virtual void setData ( const char * , uint )")
  (("QPixmap" . "QPaintDevice"))
  (("QPixmapCache" . NIL))
  (("QPrinter" . "QPaintDevice"))
  (("QPrinterInfo" . NIL))
  (("QProcessEnvironment" . NIL))
  (("QQuaternion" . NIL))
  (("QRadialGradient" . "QGradient"))
  (("QReadLocker" . NIL))
  (("QReadWriteLock" . NIL))
  (("QRegExp" . NIL))
  (("QRegion" . NIL))
  (("QResizeEvent" . "QEvent"))
  (("QRunnable" . NIL)
   "virtual void run () = 0")
  (("QSemaphore" . NIL))
  (("QShortcutEvent" . "QEvent"))
  (("QShowEvent" . "QEvent"))
  (("QSizePolicy" . NIL))
  (("QSpacerItem" . "QLayoutItem")
   "virtual Qt::Orientations expandingDirections () const"
   "virtual QRect geometry () const"
   "virtual bool isEmpty () const"
   "virtual QSize maximumSize () const"
   "virtual QSize minimumSize () const"
   "virtual void setGeometry ( const QRect & )"
   "virtual QSize sizeHint () const"
   "virtual QSpacerItem * spacerItem ()")
  (("QSqlDatabase" . NIL))
  (("QSqlError" . NIL))
  (("QSqlField" . NIL))
  (("QSqlIndex" . "QSqlRecord"))
  (("QSqlQuery" . NIL))
  (("QSqlRecord" . NIL))
  (("QSqlRelation" . NIL))
  (("QSqlResult" . NIL)
   "virtual QVariant handle () const"
   "virtual void bindValue ( int , const QVariant & , QSql::ParamType )"
   "virtual void bindValue ( const QString & , const QVariant & , QSql::ParamType )"
   "virtual QVariant data ( int ) = 0"
   "virtual bool exec ()"
   "virtual bool fetch ( int ) = 0"
   "virtual bool fetchFirst () = 0"
   "virtual bool fetchLast () = 0"
   "virtual bool fetchNext ()"
   "virtual bool fetchPrevious ()"
   "virtual bool isNull ( int ) = 0"
   "virtual QVariant lastInsertId () const"
   "virtual int numRowsAffected () = 0"
   "virtual bool prepare ( const QString & )"
   "virtual QSqlRecord record () const"
   "virtual bool reset ( const QString & ) = 0"
   "virtual bool savePrepare ( const QString & )"
   "virtual void setActive ( bool )"
   "virtual void setAt ( int )"
   "virtual void setForwardOnly ( bool )"
   "virtual void setLastError ( const QSqlError & )"
   "virtual void setQuery ( const QString & )"
   "virtual void setSelect ( bool )"
   "virtual int size () = 0")
  (("QSslCertificate" . NIL))
  (("QSslCipher" . NIL))
  (("QSslConfiguration" . NIL))
  (("QSslError" . NIL))
  (("QSslKey" . NIL))
  (("QStandardItem" . NIL)
   "virtual QStandardItem * clone () const"
   "virtual QVariant data ( int = Qt::UserRole + 1 ) const"
   "virtual void setData ( const QVariant & , int = Qt::UserRole + 1 )"
   "virtual int type () const")
  (("QStatusTipEvent" . "QEvent"))
  (("QStyleOption" . NIL))
  (("QStyleOptionGraphicsItem" . "QStyleOption"))
  (("QSvgGenerator" . "QPaintDevice")
   "virtual int metric ( QPaintDevice::PaintDeviceMetric ) const")
  (("QSystemSemaphore" . NIL))
  (("QTableWidgetItem" . NIL)
   "virtual QTableWidgetItem * clone () const"
   "virtual QVariant data ( int ) const"
   "virtual void setData ( int , const QVariant & )")
  (("QTableWidgetSelectionRange" . NIL))
  (("QTabletEvent" . "QInputEvent"))
  (("QTextBlock" . NIL))
  (("QTextBlockFormat" . "QTextFormat"))
  (("QTextBlockUserData" . NIL))
  (("QTextBoundaryFinder" . NIL))
  (("QTextCharFormat" . "QTextFormat"))
  (("QTextCodec" . NIL)
   "virtual QList<QByteArray> aliases () const"
   "virtual int mibEnum () const = 0"
   "virtual QByteArray name () const = 0"
   "virtual QByteArray convertFromUnicode ( const QChar * , int , ConverterState * ) const = 0"
   "virtual QString convertToUnicode ( const char * , int , ConverterState * ) const = 0")
  (("QTextCursor" . NIL))
  (("QTextDecoder" . NIL))
  (("QTextDocumentFragment" . NIL))
  (("QTextDocumentWriter" . NIL))
  (("QTextEncoder" . NIL))
  (("QTextFormat" . NIL))
  (("QTextFragment" . NIL))
  (("QTextFrameFormat" . "QTextFormat"))
  (("QTextImageFormat" . "QTextCharFormat"))
  (("QTextLayout" . NIL))
  (("QTextLength" . NIL))
  (("QTextLine" . NIL))
  (("QTextListFormat" . "QTextFormat"))
  (("QTextOption" . NIL))
  (("QTextTableCell" . NIL))
  (("QTextTableCellFormat" . "QTextCharFormat"))
  (("QTextTableFormat" . "QTextFrameFormat"))
  (("QTime" . NIL))
  (("QTimerEvent" . "QEvent"))
  (("QToolTip" . NIL))
  (("QTouchEvent" . "QInputEvent"))
  (("QTransform" . NIL))
  (("QTreeWidgetItem" . NIL)
   "virtual QTreeWidgetItem * clone () const"
   "virtual QVariant data ( int , int ) const"
   "virtual void setData ( int , int , const QVariant & )")
  (("QUndoCommand" . NIL)
   "virtual int id () const"
   "virtual bool mergeWith ( const QUndoCommand * )"
   "virtual void redo ()"
   "virtual void undo ()")
  (("QUrl" . NIL))
  (("QUrlInfo" . NIL)
   "virtual void setDir ( bool )"
   "virtual void setFile ( bool )"
   "virtual void setGroup ( const QString & )"
   "virtual void setLastModified ( const QDateTime & )"
   "virtual void setName ( const QString & )"
   "virtual void setOwner ( const QString & )"
   "virtual void setPermissions ( int )"
   "virtual void setReadable ( bool )"
   "virtual void setSize ( qint64 )"
   "virtual void setSymLink ( bool )"
   "virtual void setWritable ( bool )")
  (("QVariant" . NIL))
  (("QVector2D" . NIL))
  (("QVector3D" . NIL))
  (("QVector4D" . NIL))
  (("QWebDatabase" . NIL))
  (("QWebElement" . NIL))
  (("QWebElementCollection" . NIL))
  (("QWebHistory" . NIL))
  (("QWebHistoryItem" . NIL))
  (("QWebHitTestResult" . NIL))
  (("QWebSecurityOrigin" . NIL))
  (("QWebSettings" . NIL))
  (("QWhatsThis" . NIL))
  (("QWhatsThisClickedEvent" . "QEvent"))
  (("QWheelEvent" . "QInputEvent"))
  (("QWidgetItem" . "QLayoutItem")
   "virtual Qt::Orientations expandingDirections () const"
   "virtual QRect geometry () const"
   "virtual bool hasHeightForWidth () const"
   "virtual int heightForWidth ( int ) const"
   "virtual bool isEmpty () const"
   "virtual QSize maximumSize () const"
   "virtual QSize minimumSize () const"
   "virtual void setGeometry ( const QRect & )"
   "virtual QSize sizeHint () const"
   "virtual QWidget * widget ()")
  (("QWindowStateChangeEvent" . "QEvent"))
  (("QWriteLocker" . NIL))
))
