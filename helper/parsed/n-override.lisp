(defparameter *n-override* '(
  (("QAbstractGraphicsShapeItem" . "QGraphicsItem")
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const")
  (("QActionEvent" . "QEvent"))
  (("QBasicTimer" . NIL))
  (("QBitArray" . NIL))
  (("QBitmap" . "QPixmap"))
  (("QBrush" . NIL))
  (("QChildEvent" . "QEvent"))
  (("QCloseEvent" . "QEvent"))
  (("QColor" . NIL))
  (("QConicalGradient" . "QGradient"))
  (("QContextMenuEvent" . "QInputEvent"))
  (("QCursor" . NIL))
  (("QDate" . NIL))
  (("QDateTime" . NIL))
  (("QDir" . NIL))
  (("QDragEnterEvent" . "QDragMoveEvent"))
  (("QDragLeaveEvent" . "QEvent"))
  (("QDragMoveEvent" . "QDropEvent"))
  (("QDropEvent" . "QEvent")
   "virtual QByteArray encodedData ( const char * ) const"
   "virtual const char * format ( int = 0 ) const"
   "virtual bool provides ( const char * ) const")
  (("QEvent" . NIL))
  (("QFileIconProvider" . NIL)
   "virtual QIcon icon ( IconType ) const")
  (("QFileInfo" . NIL))
  (("QFocusEvent" . "QEvent"))
  (("QFontMetrics" . NIL))
  (("QGradient" . NIL))
  (("QGraphicsEllipseItem" . "QAbstractGraphicsShapeItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
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
   "protected virtual void contextMenuEvent ( QGraphicsSceneContextMenuEvent * )"
   "protected virtual void dragEnterEvent ( QGraphicsSceneDragDropEvent * )"
   "protected virtual void dragLeaveEvent ( QGraphicsSceneDragDropEvent * )"
   "protected virtual void dragMoveEvent ( QGraphicsSceneDragDropEvent * )"
   "protected virtual void dropEvent ( QGraphicsSceneDragDropEvent * )"
   "protected virtual void focusInEvent ( QFocusEvent * )"
   "protected virtual void focusOutEvent ( QFocusEvent * )"
   "protected virtual void hoverEnterEvent ( QGraphicsSceneHoverEvent * )"
   "protected virtual void hoverLeaveEvent ( QGraphicsSceneHoverEvent * )"
   "protected virtual void hoverMoveEvent ( QGraphicsSceneHoverEvent * )"
   "protected virtual void inputMethodEvent ( QInputMethodEvent * )"
   "protected virtual QVariant inputMethodQuery ( Qt::InputMethodQuery ) const"
   "protected virtual QVariant itemChange ( GraphicsItemChange , const QVariant & )"
   "protected virtual void keyPressEvent ( QKeyEvent * )"
   "protected virtual void keyReleaseEvent ( QKeyEvent * )"
   "protected virtual void mouseDoubleClickEvent ( QGraphicsSceneMouseEvent * )"
   "protected virtual void mouseMoveEvent ( QGraphicsSceneMouseEvent * )"
   "protected virtual void mousePressEvent ( QGraphicsSceneMouseEvent * )"
   "protected virtual void mouseReleaseEvent ( QGraphicsSceneMouseEvent * )"
   "protected virtual bool sceneEvent ( QEvent * )"
   "protected virtual bool sceneEventFilter ( QGraphicsItem * , QEvent * )"
   "protected virtual void wheelEvent ( QGraphicsSceneWheelEvent * )")
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
   "protected virtual QSizeF sizeHint ( Qt::SizeHint , const QSizeF & = QSizeF() ) const = 0")
  (("QGraphicsLineItem" . "QGraphicsItem")
   "virtual QRectF boundingRect () const"
   "virtual bool contains ( const QPointF & ) const"
   "virtual bool isObscuredBy ( const QGraphicsItem * ) const"
   "virtual QPainterPath opaqueArea () const"
   "virtual void paint ( QPainter * , const QStyleOptionGraphicsItem * , QWidget * = 0 )"
   "virtual QPainterPath shape () const"
   "virtual int type () const")
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
  (("QHideEvent" . "QEvent"))
  (("QIcon" . NIL))
  (("QImage" . "QPaintDevice"))
  (("QInputEvent" . "QEvent"))
  (("QInputMethodEvent" . "QEvent"))
  (("QItemEditorFactory" . NIL)
   "virtual QWidget * createEditor ( QVariant::Type , QWidget * ) const"
   "virtual QByteArray valuePropertyName ( QVariant::Type ) const")
  (("QItemSelection" . NIL))
  (("QItemSelectionRange" . NIL))
  (("QKeyEvent" . "QInputEvent"))
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
  (("QLinearGradient" . "QGradient"))
  (("QListWidgetItem" . NIL)
   "virtual QListWidgetItem * clone () const"
   "virtual QVariant data ( int ) const"
   "virtual void setData ( int , const QVariant & )")
  (("QLocale" . NIL))
  (("QMatrix" . NIL))
  (("QMatrix4x4" . NIL))
  (("QMetaObject" . NIL))
  (("QModelIndex" . NIL))
  (("QMouseEvent" . "QInputEvent"))
  (("QMoveEvent" . "QEvent"))
  (("QPaintDevice" . NIL)
   "protected virtual int metric ( PaintDeviceMetric ) const")
  (("QPaintEvent" . "QEvent"))
  (("QPainter" . NIL))
  (("QPainterPath" . NIL))
  (("QPalette" . NIL))
  (("QPen" . NIL))
  (("QPicture" . "QPaintDevice")
   "virtual void setData ( const char * , uint )")
  (("QPixmap" . "QPaintDevice"))
  (("QPrinter" . "QPaintDevice"))
  (("QQuaternion" . NIL))
  (("QRadialGradient" . "QGradient"))
  (("QRegExp" . NIL))
  (("QRegion" . NIL))
  (("QResizeEvent" . "QEvent"))
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
  (("QStandardItem" . NIL)
   "virtual QStandardItem * clone () const"
   "virtual QVariant data ( int = Qt::UserRole + 1 ) const"
   "virtual void setData ( const QVariant & , int = Qt::UserRole + 1 )"
   "virtual int type () const")
  (("QTableWidgetItem" . NIL)
   "virtual QTableWidgetItem * clone () const"
   "virtual QVariant data ( int ) const"
   "virtual void setData ( int , const QVariant & )")
  (("QTableWidgetSelectionRange" . NIL))
  (("QTabletEvent" . "QInputEvent"))
  (("QTextBlock" . NIL))
  (("QTextBlockFormat" . "QTextFormat"))
  (("QTextCharFormat" . "QTextFormat"))
  (("QTextCursor" . NIL))
  (("QTextDocumentFragment" . NIL))
  (("QTextFormat" . NIL))
  (("QTextFrameFormat" . "QTextFormat"))
  (("QTextImageFormat" . "QTextCharFormat"))
  (("QTextLength" . NIL))
  (("QTextListFormat" . "QTextFormat"))
  (("QTextOption" . NIL))
  (("QTextTableCell" . NIL))
  (("QTextTableCellFormat" . "QTextCharFormat"))
  (("QTextTableFormat" . "QTextFrameFormat"))
  (("QTime" . NIL))
  (("QTimerEvent" . "QEvent"))
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
  (("QVariant" . NIL))
  (("QVector2D" . NIL))
  (("QVector3D" . NIL))
  (("QVector4D" . NIL))
  (("QWheelEvent" . "QInputEvent"))
))
