(defpackage :eql
  (:use :cl)
  (:export
   #:|abort|
   #:|about.QMessageBox|
   #:|aboutQt.QMessageBox|
   #:|aboutQt|
   #:|aboutToActivate|
   #:|aboutToClose|
   #:|aboutToHide|
   #:|aboutToQuit|
   #:|aboutToShow|
   #:|absoluteDir|
   #:|absoluteFilePath|
   #:|absolutePath|
   #:|acceleration|
   #:|accept(QGesture*)|
   #:|accept(Qt::GestureType)|
   #:|acceptDrops|
   #:|acceptHoverEvents|
   #:|acceptMode|
   #:|acceptProposedAction|
   #:|acceptRichText|
   #:|acceptTouchEvents|
   #:|acceptedMouseButtons|
   #:|accepted|
   #:|accept|
   #:|accessibleDescription|
   #:|accessibleName|
   #:|accessibleText|
   #:|acquire|
   #:|actionAt|
   #:|actionChanged|
   #:|actionGeometry|
   #:|actionGroup|
   #:|actionText|
   #:|actionTriggered|
   #:|actions|
   #:|action|
   #:|activateNextSubWindow|
   #:|activateNextWindow|
   #:|activatePreviousSubWindow|
   #:|activatePreviousWindow|
   #:|activateWindow|
   #:|activated(QModelIndex)|
   #:|activated(QString)|
   #:|activated(int)|
   #:|activatedAmbiguously|
   #:|activated|
   #:|activate|
   #:|activationOrder|
   #:|activeAction|
   #:|activeGestures|
   #:|activeModalWidget.QApplication|
   #:|activePanel|
   #:|activePopupWidget.QApplication|
   #:|activeStackChanged|
   #:|activeStack|
   #:|activeSubWindow|
   #:|activeWindow.QApplication|
   #:|activeWindow|
   #:|actualNumCopies|
   #:|actualSize|
   #:|addAction(QAction*)|
   #:|addAction(QIcon...)|
   #:|addAction(QString)|
   #:|addAction(QString...)|
   #:|addActions|
   #:|addAction|
   #:|addAnchors|
   #:|addAnchor|
   #:|addAnimation|
   #:|addApplicationFont.QFontDatabase|
   #:|addApplicationFontFromData.QFontDatabase|
   #:|addButton(QAbstractButton*...)|
   #:|addButton(QString...)|
   #:|addButton|
   #:|addChildLayoutItem|
   #:|addChildren|
   #:|addChild|
   #:|addControllingSignal|
   #:|addCornerAnchors|
   #:|addData|
   #:|addDays|
   #:|addDefaultAnimation|
   #:|addDockWidget|
   #:|addEllipse|
   #:|addEncodedQueryItem|
   #:|addFile|
   #:|addItem(QIcon...)|
   #:|addItem(QListWidgetItem*)|
   #:|addItem(QString)|
   #:|addItem(QString...)|
   #:|addItems|
   #:|addItem|
   #:|addLayout|
   #:|addLibraryPath.QCoreApplication|
   #:|addLine|
   #:|addMSecs|
   #:|addMapping|
   #:|addMenu(QMenu*)|
   #:|addMenu(QString)|
   #:|addMenu|
   #:|addMonths|
   #:|addPage|
   #:|addPaths|
   #:|addPath|
   #:|addPause|
   #:|addPermanentWidget|
   #:|addPixmap|
   #:|addPolygon|
   #:|addQueryItem|
   #:|addRect|
   #:|addRegion|
   #:|addResource|
   #:|addRoundedRect|
   #:|addRow(QLayout*)|
   #:|addRow(QString,QLayout*)|
   #:|addRow(QString,QWidget*)|
   #:|addRow(QString...)|
   #:|addRow(QWidget*)|
   #:|addRow(QWidget*,QLayout*)|
   #:|addRow(QWidget*,QWidget*)|
   #:|addRow(QWidget*...)|
   #:|addRow|
   #:|addScrollBarWidget|
   #:|addSearchPath.QDir|
   #:|addSecs|
   #:|addSeparator|
   #:|addSimpleText|
   #:|addSpacerItem|
   #:|addSpacing|
   #:|addStack|
   #:|addState|
   #:|addStep|
   #:|addStretch|
   #:|addStrut|
   #:|addSubWindow|
   #:|addTab|
   #:|addText|
   #:|addToGroup|
   #:|addToolBar(QString)|
   #:|addToolBar(QToolBar*)|
   #:|addToolBarBreak|
   #:|addToolBar|
   #:|addTopLevelItems|
   #:|addTopLevelItem|
   #:|addTransition(QAbstractState*)|
   #:|addTransition(QAbstractTransition*)|
   #:|addTransition|
   #:|addWidget|
   #:|addWindow|
   #:|addYears|
   #:|added|
   #:|add|
   #:|adjoint|
   #:|adjustSize|
   #:|advance|
   #:|alert.QApplication|
   #:|aliases|
   #:|alignedRect.QStyle|
   #:|alignment|
   #:|allColumnsShowFocus|
   #:|allEncodedQueryItemValues|
   #:|allFormats|
   #:|allGray|
   #:|allKeys|
   #:|allQueryItemValues|
   #:|allWidgets.QApplication|
   #:|allowedAreasChanged|
   #:|allowedAreas|
   #:|allowsErrorInteraction|
   #:|allowsInteraction|
   #:|alphaF|
   #:|alpha|
   #:|alternateBase|
   #:|alternatingRowColors|
   #:|amText|
   #:|amplitude|
   #:|anchorAt|
   #:|anchorClicked|
   #:|anchorHref|
   #:|anchorNames|
   #:|anchor|
   #:|angleAtPercent|
   #:|angleChanged|
   #:|angle|
   #:|animateClick|
   #:|animationAt|
   #:|animationCount|
   #:|animations|
   #:|answerRect|
   #:|appendColumns|
   #:|appendColumn|
   #:|appendHtml|
   #:|appendPlainText|
   #:|appendRow(QList<QStandardItem*>)|
   #:|appendRow(QStandardItem*)|
   #:|appendRows|
   #:|appendRow|
   #:|appendUndoItem|
   #:|append|
   #:|applicationDirPath.QCoreApplication|
   #:|applicationFilePath.QCoreApplication|
   #:|applicationFontFamilies.QFontDatabase|
   #:|applicationName.QCoreApplication|
   #:|applicationName|
   #:|applicationPid.QCoreApplication|
   #:|applicationVersion.QCoreApplication|
   #:|applyTo|
   #:|arcMoveTo|
   #:|arcTo|
   #:|arguments.QCoreApplication|
   #:|arrangeIcons|
   #:|arrowType|
   #:|ascent|
   #:|assignProperty|
   #:|associatedGraphicsWidgets|
   #:|associatedWidgets|
   #:|atBlockEnd|
   #:|atBlockStart|
   #:|atEnd|
   #:|atStart|
   #:|at|
   #:|authority|
   #:|autoClose|
   #:|autoDefault|
   #:|autoDelete|
   #:|autoExclusive|
   #:|autoExpandDelay|
   #:|autoFillBackground|
   #:|autoFormatting|
   #:|autoRaise|
   #:|autoRepeatDelay|
   #:|autoRepeatInterval|
   #:|autoRepeat|
   #:|autoReset|
   #:|autoScrollMargin|
   #:|autoSipEnabled|
   #:|availableCodecs.QTextCodec|
   #:|availableGeometry(QPoint)|
   #:|availableGeometry(const QWidget*)|
   #:|availableGeometry(int)|
   #:|availableGeometry|
   #:|availableMibs.QTextCodec|
   #:|availableRedoSteps|
   #:|availableSizes|
   #:|availableUndoSteps|
   #:|available|
   #:|averageCharWidth|
   #:|axisChanged|
   #:|axis|
   #:|backgroundBrush|
   #:|backgroundColor|
   #:|backgroundMode|
   #:|backgroundRole|
   #:|backgroundVisible|
   #:|background|
   #:|backspace|
   #:|backwardAvailable|
   #:|backwardHistoryCount|
   #:|backward|
   #:|back|
   #:|baseName|
   #:|baseSize|
   #:|base|
   #:|batchSize|
   #:|beep.QApplication|
   #:|before|
   #:|begin(QImage*)|
   #:|begin(QPicture*)|
   #:|begin(QPixmap*)|
   #:|begin(QPrinter*)|
   #:|begin(QWidget*)|
   #:|beginEditBlock|
   #:|beginGroup|
   #:|beginInsertColumns|
   #:|beginInsertRows|
   #:|beginLayout|
   #:|beginMacro|
   #:|beginMoveColumns|
   #:|beginMoveRows|
   #:|beginNativePainting|
   #:|beginReadArray|
   #:|beginRemoveColumns|
   #:|beginRemoveRows|
   #:|beginResetModel|
   #:|beginWriteArray|
   #:|begin|
   #:|bitmap|
   #:|blackF|
   #:|black|
   #:|blockBoundingGeometry|
   #:|blockBoundingRect|
   #:|blockCharFormat|
   #:|blockCountChanged|
   #:|blockCount|
   #:|blockFormatIndex|
   #:|blockFormat|
   #:|blockList|
   #:|blockNumber|
   #:|blockSignals|
   #:|block|
   #:|blueF|
   #:|blue|
   #:|blurHintsChanged|
   #:|blurHints|
   #:|blurRadiusChanged|
   #:|blurRadius|
   #:|bold|
   #:|boolProperty|
   #:|borderBrush|
   #:|borderStyle|
   #:|border|
   #:|bottomMargin|
   #:|bottomPadding|
   #:|bottomRight|
   #:|bottomRow|
   #:|bottom|
   #:|boundaryReasons|
   #:|boundingRect(QChar)|
   #:|boundingRect(QRect...)|
   #:|boundingRect(QRectF,QString...)|
   #:|boundingRect(QRectF,int...)|
   #:|boundingRect(QRectF...)|
   #:|boundingRect(QString)|
   #:|boundingRectFor|
   #:|boundingRect|
   #:|boundingRegionGranularity|
   #:|boundingRegion|
   #:|brightText|
   #:|brushOrigin|
   #:|brushProperty|
   #:|brush|
   #:|bspTreeDepth|
   #:|buddy|
   #:|buffer|
   #:|buildDate.QLibraryInfo|
   #:|buildKey.QLibraryInfo|
   #:|bundleName|
   #:|buttonClicked(QAbstractButton*)|
   #:|buttonClicked(int)|
   #:|buttonClicked|
   #:|buttonDownPos|
   #:|buttonDownScenePos|
   #:|buttonDownScreenPos|
   #:|buttonPressed(QAbstractButton*)|
   #:|buttonPressed(int)|
   #:|buttonPressed|
   #:|buttonReleased(QAbstractButton*)|
   #:|buttonReleased(int)|
   #:|buttonReleased|
   #:|buttonRole|
   #:|buttonSymbols|
   #:|buttonText|
   #:|buttons|
   #:|button|
   #:|byteCount|
   #:|bytesAvailable|
   #:|bytesPerLine|
   #:|bytesToWrite|
   #:|bytesWritten|
   #:|c.QLocale|
   #:|cacheEnabled|
   #:|cacheKey|
   #:|cacheLimit.QPixmapCache|
   #:|cacheMode|
   #:|caching|
   #:|calendarPopup|
   #:|calendarWidget|
   #:|canConvert|
   #:|canEncode(QChar)|
   #:|canEncode(QString)|
   #:|canEncode|
   #:|canFetchMore|
   #:|canPaste|
   #:|canReadLine|
   #:|canRedoChanged|
   #:|canRedo|
   #:|canUndoChanged|
   #:|canUndo|
   #:|cancelButtonText|
   #:|cancelDelayedEvent|
   #:|canceledGestures|
   #:|canceled|
   #:|cancel|
   #:|canonicalFilePath|
   #:|canonicalPath|
   #:|capStyle|
   #:|capitalization|
   #:|captureCount|
   #:|capturedTexts|
   #:|cap|
   #:|cascadeSubWindows|
   #:|cascade|
   #:|cascadingSectionResizes|
   #:|caseSensitivity|
   #:|cdUp|
   #:|cd|
   #:|cellActivated|
   #:|cellAt(QTextCursor)|
   #:|cellAt(int)|
   #:|cellAt|
   #:|cellChanged|
   #:|cellClicked|
   #:|cellDoubleClicked|
   #:|cellEntered|
   #:|cellPadding|
   #:|cellPressed|
   #:|cellRect|
   #:|cellSpacing|
   #:|cellWidget|
   #:|centerButtons|
   #:|centerCursor|
   #:|centerOn(QPointF)|
   #:|centerOn(const QGraphicsItem*)|
   #:|centerOnScroll|
   #:|centerOn|
   #:|centerPoint|
   #:|center|
   #:|centralWidget|
   #:|changeBrightness|
   #:|changeContrast|
   #:|changeFlags|
   #:|changeGamma|
   #:|changeInterval|
   #:|changeOverrideCursor.QApplication|
   #:|changePersistentIndexList|
   #:|changePersistentIndex|
   #:|changeSize|
   #:|changed|
   #:|charFormatIndex|
   #:|charFormat|
   #:|characterAt|
   #:|characterCount|
   #:|checkConnectArgs.QMetaObject|
   #:|checkOverflow(double)|
   #:|checkOverflow(int)|
   #:|checkOverflow|
   #:|checkState|
   #:|checkedAction|
   #:|checkedButton|
   #:|checkedId|
   #:|childAt|
   #:|childCount|
   #:|childFrames|
   #:|childGroups|
   #:|childIndicatorPolicy|
   #:|childItems|
   #:|childKeys|
   #:|childMode|
   #:|childrenBoundingRect|
   #:|childrenChanged|
   #:|childrenCollapsible|
   #:|childrenRect|
   #:|childrenRegion|
   #:|children|
   #:|child|
   #:|classInfoCount|
   #:|classInfoOffset|
   #:|className|
   #:|cleanChanged|
   #:|cleanIcon|
   #:|cleanIndex|
   #:|cleanPath.QDir|
   #:|cleanText|
   #:|cleanupPage|
   #:|clear.QPixmapCache|
   #:|clearAdditionalFormats|
   #:|clearBackground|
   #:|clearBit|
   #:|clearColumnWidthConstraints|
   #:|clearContents|
   #:|clearEditText|
   #:|clearError|
   #:|clearFocus|
   #:|clearForeground|
   #:|clearHistory|
   #:|clearLayout|
   #:|clearMapping|
   #:|clearMask|
   #:|clearMaximumDateTime|
   #:|clearMaximumDate|
   #:|clearMaximumTime|
   #:|clearMessage|
   #:|clearMinimumDateTime|
   #:|clearMinimumDate|
   #:|clearMinimumTime|
   #:|clearPropertyFlags|
   #:|clearProperty|
   #:|clearSelection|
   #:|clearSpans|
   #:|clear|
   #:|clickedButton|
   #:|clicked|
   #:|click|
   #:|clipPath|
   #:|clipRegion|
   #:|clipboard.QApplication|
   #:|clone|
   #:|closeActiveSubWindow|
   #:|closeActiveWindow|
   #:|closeAllSubWindows|
   #:|closeAllWindows|
   #:|closeEditor|
   #:|closePersistentEditor|
   #:|closeReadChannel|
   #:|closeSubpath|
   #:|closeWriteChannel|
   #:|closestAcceptableSize.QLayout|
   #:|closestLegalPosition|
   #:|close|
   #:|closingDown.QCoreApplication|
   #:|codecForCStrings.QTextCodec|
   #:|codecForHtml.QTextCodec|
   #:|codecForLocale.QTextCodec|
   #:|codecForMib.QTextCodec|
   #:|codecForName(QByteArray).QTextCodec|
   #:|codecForName(const char*).QTextCodec|
   #:|codecForName.QTextCodec|
   #:|codecForTr.QTextCodec|
   #:|codecForUtfText.QTextCodec|
   #:|codec|
   #:|collapseAll|
   #:|collapseItem|
   #:|collapsed|
   #:|collapse|
   #:|collateCopies|
   #:|collidesWithItem|
   #:|collidesWithPath|
   #:|collidingItems|
   #:|colorChanged|
   #:|colorCount|
   #:|colorData|
   #:|colorMode|
   #:|colorNames.QColor|
   #:|colorProperty|
   #:|colorSelected|
   #:|colorSpec.QApplication|
   #:|colorTable|
   #:|color|
   #:|columnAlignment|
   #:|columnAt|
   #:|columnCountChanged|
   #:|columnCount|
   #:|columnIntersectsSelection|
   #:|columnMaximumWidth|
   #:|columnMinimumWidth|
   #:|columnMoved|
   #:|columnNumber|
   #:|columnPreferredWidth|
   #:|columnResized|
   #:|columnSpacing|
   #:|columnSpan|
   #:|columnStretchFactor|
   #:|columnStretch|
   #:|columnViewportPosition|
   #:|columnWidthConstraints|
   #:|columnWidths|
   #:|columnWidth|
   #:|columnsAboutToBeInserted|
   #:|columnsAboutToBeMoved|
   #:|columnsAboutToBeRemoved|
   #:|columnsInserted|
   #:|columnsMoved|
   #:|columnsRemoved|
   #:|columns|
   #:|column|
   #:|combinedLayoutSpacing|
   #:|combinedTransform|
   #:|comboBoxItems|
   #:|command|
   #:|commitDataRequest|
   #:|commitData|
   #:|commitString|
   #:|commonAncestorItem|
   #:|completeBaseName|
   #:|completeChanged|
   #:|completeSuffix|
   #:|completer|
   #:|complete|
   #:|completionColumn|
   #:|completionCount|
   #:|completionModel|
   #:|completionMode|
   #:|completionPrefix|
   #:|completionRole|
   #:|compositionMode|
   #:|confirmOverwrite|
   #:|conjugate|
   #:|connect.QObject|
   #:|connectPath|
   #:|connectSlotsByName.QMetaObject|
   #:|connect|
   #:|constructorCount|
   #:|contains(QPainterPath)|
   #:|contains(QPoint)|
   #:|contains(QPointF)|
   #:|contains(QRect)|
   #:|contains(QRectF)|
   #:|contains|
   #:|contentOffset|
   #:|contentsChanged|
   #:|contentsChange|
   #:|contentsMargins|
   #:|contentsRect|
   #:|contextMenuPolicy|
   #:|contextMenu|
   #:|context|
   #:|controlPointRect|
   #:|controlTypes|
   #:|controlType|
   #:|convertToFormat(QImage::Format,QVector<QRgb>)|
   #:|convertToFormat(QImage::Format,Qt::ImageConversionFlags)|
   #:|convertToFormat|
   #:|convertTo|
   #:|convert|
   #:|coordinateMode|
   #:|copy.QFile|
   #:|copyAvailable|
   #:|copy|
   #:|cornerWidget|
   #:|corner|
   #:|correctionMode|
   #:|countryToString.QLocale|
   #:|country|
   #:|count|
   #:|createAction.QWhatsThis|
   #:|createAlphaMask|
   #:|createEditor|
   #:|createHeuristicMask|
   #:|createItemGroup|
   #:|createLine|
   #:|createList(QTextListFormat)|
   #:|createList(QTextListFormat::Style)|
   #:|createList|
   #:|createMaskFromColor|
   #:|createPopupMenu|
   #:|createProxyForChildWidget|
   #:|createRedoAction|
   #:|createStandardContextMenu|
   #:|createStroke|
   #:|createUndoAction|
   #:|createdWidgets|
   #:|created|
   #:|creator|
   #:|critical.QMessageBox|
   #:|crossProduct.QVector3D|
   #:|cubicTo|
   #:|current.QDir|
   #:|currentAnimationChanged|
   #:|currentAnimation|
   #:|currentBlockState|
   #:|currentBlockUserData|
   #:|currentBlock|
   #:|currentCellChanged|
   #:|currentChanged(QWidget*)|
   #:|currentChanged(int)|
   #:|currentChanged|
   #:|currentCharFormatChanged|
   #:|currentCharFormat|
   #:|currentColorChanged|
   #:|currentColorGroup|
   #:|currentColor|
   #:|currentColumnChanged|
   #:|currentColumn|
   #:|currentCompletion|
   #:|currentDate.QDate|
   #:|currentDateTime.QDateTime|
   #:|currentFontChanged|
   #:|currentFont|
   #:|currentFrameNumber|
   #:|currentFrame|
   #:|currentIdChanged|
   #:|currentId|
   #:|currentImage|
   #:|currentIndexChanged(QString)|
   #:|currentIndexChanged(int)|
   #:|currentIndexChanged|
   #:|currentIndex|
   #:|currentItemChanged|
   #:|currentItem|
   #:|currentList|
   #:|currentLoopChanged|
   #:|currentLoopTime|
   #:|currentLoop|
   #:|currentMessage|
   #:|currentPageChanged|
   #:|currentPage|
   #:|currentPath.QDir|
   #:|currentPixmap|
   #:|currentPosition|
   #:|currentRowChanged|
   #:|currentRow|
   #:|currentSectionIndex|
   #:|currentSection|
   #:|currentSubWindow|
   #:|currentTable|
   #:|currentTextChanged|
   #:|currentText|
   #:|currentTime.QTime|
   #:|currentTime|
   #:|currentValue|
   #:|currentWidget|
   #:|cursorBackward|
   #:|cursorFlashTime.QApplication|
   #:|cursorForPosition|
   #:|cursorForward|
   #:|cursorPositionAt|
   #:|cursorPositionChanged|
   #:|cursorPosition|
   #:|cursorRect|
   #:|cursorToX|
   #:|cursorWidth|
   #:|cursorWordBackward|
   #:|cursorWordForward|
   #:|cursor|
   #:|curveShape|
   #:|curveThreshold|
   #:|customButtonClicked|
   #:|customColor.QColorDialog|
   #:|customContextMenuRequested|
   #:|customCount.QColorDialog|
   #:|cut|
   #:|cyanF|
   #:|cyan|
   #:|darker|
   #:|dark|
   #:|dashOffset|
   #:|dashPattern|
   #:|dataChanged|
   #:|data|
   #:|dateChanged|
   #:|dateEditAcceptDelay|
   #:|dateFormat|
   #:|dateTextFormat|
   #:|dateTimeChanged|
   #:|dateTimeFormat|
   #:|dateTime|
   #:|date|
   #:|dayName|
   #:|dayOfWeek|
   #:|dayOfYear|
   #:|daysInMonth|
   #:|daysInYear|
   #:|daysTo|
   #:|day|
   #:|decimalPoint|
   #:|decimals|
   #:|decodeName(QByteArray).QFile|
   #:|decodeName(const char*).QFile|
   #:|decodeName.QFile|
   #:|defaultAlignment|
   #:|defaultAnimations|
   #:|defaultButton|
   #:|defaultDepth.QPixmap|
   #:|defaultDropAction|
   #:|defaultFactory.QItemEditorFactory|
   #:|defaultFamily|
   #:|defaultFont|
   #:|defaultFormat.QSettings|
   #:|defaultSectionSize|
   #:|defaultState|
   #:|defaultStyleSheet|
   #:|defaultSuffix|
   #:|defaultTextColor|
   #:|defaultTextOption|
   #:|defaultWidget|
   #:|deleteChar|
   #:|deleteLater|
   #:|deletePreviousChar|
   #:|delta|
   #:|del|
   #:|depth|
   #:|descent|
   #:|description|
   #:|deselect|
   #:|desktop.QApplication|
   #:|desktopSettingsAware.QApplication|
   #:|destroyItemGroup|
   #:|destroyed|
   #:|destroy|
   #:|detach|
   #:|detailedText|
   #:|determinant|
   #:|deviceTransform|
   #:|deviceType|
   #:|device|
   #:|dialMoved|
   #:|dialPressed|
   #:|dialReleased|
   #:|digitCount|
   #:|dirName|
   #:|directionChanged|
   #:|direction|
   #:|directories|
   #:|directoryChanged|
   #:|directoryEntered|
   #:|directoryLoaded|
   #:|directory|
   #:|dirtyRegionOffset|
   #:|dir|
   #:|discardCommand|
   #:|disconnect(const QObject*)|
   #:|disconnect(const QObject*...)|
   #:|disconnect(const char*)|
   #:|disconnect(const char*...)|
   #:|disconnect.QObject|
   #:|disconnect|
   #:|display(QString)|
   #:|display(double)|
   #:|display(int)|
   #:|displayFormat|
   #:|displayName.QDesktopServices|
   #:|displayText|
   #:|displayedSections|
   #:|display|
   #:|distanceToLine|
   #:|distanceToPlane|
   #:|doAction|
   #:|doItemsLayout|
   #:|docName|
   #:|dockLocationChanged|
   #:|dockOptions|
   #:|dockWidgetArea|
   #:|documentLayoutChanged|
   #:|documentLayout|
   #:|documentMargin|
   #:|documentMode|
   #:|documentSizeChanged|
   #:|documentSize|
   #:|documentTitle|
   #:|document|
   #:|done|
   #:|dotProduct.QVector2D|
   #:|dotProduct.QVector3D|
   #:|dotProduct.QVector4D|
   #:|dotsPerMeterX|
   #:|dotsPerMeterY|
   #:|doubleClickInterval.QApplication|
   #:|doubleClicked|
   #:|doubleDecimals|
   #:|doubleMaximum|
   #:|doubleMinimum|
   #:|doubleProperty|
   #:|doubleSidedPrinting|
   #:|doubleValueChanged|
   #:|doubleValueSelected|
   #:|doubleValue|
   #:|dragDropMode|
   #:|dragDropOverwriteMode|
   #:|dragEnabled|
   #:|dragMode|
   #:|drawArc(QRect...)|
   #:|drawArc(QRectF...)|
   #:|drawArc|
   #:|drawBackground|
   #:|drawBase|
   #:|drawChord(QRect...)|
   #:|drawChord(QRectF...)|
   #:|drawChord|
   #:|drawComplexControl|
   #:|drawContents|
   #:|drawControl|
   #:|drawConvexPolygon(QPolygon)|
   #:|drawConvexPolygon(QPolygonF)|
   #:|drawConvexPolygon|
   #:|drawCursor|
   #:|drawEllipse(QPoint...)|
   #:|drawEllipse(QPointF...)|
   #:|drawEllipse(QRect)|
   #:|drawEllipse(QRectF)|
   #:|drawEllipse|
   #:|drawImage(QPoint...)|
   #:|drawImage(QPointF...)|
   #:|drawImage(QRect...)|
   #:|drawImage(QRectF...)|
   #:|drawImage(int...)|
   #:|drawImage|
   #:|drawItemPixmap|
   #:|drawItemText|
   #:|drawLine(QLine)|
   #:|drawLine(QLineF)|
   #:|drawLine(QPoint...)|
   #:|drawLine(QPointF...)|
   #:|drawLines(QVector<QLine>)|
   #:|drawLines(QVector<QLineF>)|
   #:|drawLines(QVector<QPoint>)|
   #:|drawLines(QVector<QPointF>)|
   #:|drawLines(const QLine*...)|
   #:|drawLines(const QLineF*...)|
   #:|drawLines(const QPointF*...)|
   #:|drawLines|
   #:|drawLine|
   #:|drawPath|
   #:|drawPicture(QPoint...)|
   #:|drawPicture(QPointF...)|
   #:|drawPicture|
   #:|drawPie(QRect...)|
   #:|drawPie(QRectF...)|
   #:|drawPie|
   #:|drawPixmap(QPoint...)|
   #:|drawPixmap(QPointF...)|
   #:|drawPixmap(QRect...)|
   #:|drawPixmap(QRectF...)|
   #:|drawPixmap(int...)|
   #:|drawPixmap|
   #:|drawPoint(QPoint)|
   #:|drawPoint(QPointF)|
   #:|drawPoints(QPolygon)|
   #:|drawPoints(QPolygonF)|
   #:|drawPoints|
   #:|drawPoint|
   #:|drawPolygon(QPolygon)|
   #:|drawPolygon(QPolygon...)|
   #:|drawPolygon(QPolygonF)|
   #:|drawPolygon(QPolygonF...)|
   #:|drawPolygon(const QPointF*...)|
   #:|drawPolygon|
   #:|drawPolyline(QPolygon)|
   #:|drawPolyline(QPolygonF)|
   #:|drawPolyline|
   #:|drawPrimitive|
   #:|drawRect(QRect)|
   #:|drawRect(QRectF)|
   #:|drawRects(QVector<QRect>)|
   #:|drawRects(QVector<QRectF>)|
   #:|drawRects(const QRect*...)|
   #:|drawRects(const QRectF*...)|
   #:|drawRects|
   #:|drawRect|
   #:|drawRoundedRect(QRect...)|
   #:|drawRoundedRect(QRectF...)|
   #:|drawRoundedRect|
   #:|drawSource|
   #:|drawText(QPoint...)|
   #:|drawText(QPointF...)|
   #:|drawText(QRect...)|
   #:|drawText(QRectF,QString...)|
   #:|drawText(QRectF,int...)|
   #:|drawText(QRectF...)|
   #:|drawText(int...)|
   #:|drawText|
   #:|drawTiledPixmap(QRect...)|
   #:|drawTiledPixmap(QRectF...)|
   #:|drawTiledPixmap|
   #:|drawTree|
   #:|draw|
   #:|drives.QDir|
   #:|dropAction|
   #:|dropEvent|
   #:|dropIndicatorPosition|
   #:|dropMimeData|
   #:|dumpObjectInfo|
   #:|dumpObjectTree|
   #:|duplex|
   #:|duplicatesEnabled|
   #:|duration|
   #:|dx|
   #:|dynamicPropertyNames|
   #:|dynamicSortFilter|
   #:|dy|
   #:|easingCurve|
   #:|echoMode|
   #:|editItem|
   #:|editTextChanged|
   #:|editTriggers|
   #:|editingFinished|
   #:|editorDestroyed|
   #:|editorEvent|
   #:|edit|
   #:|effectiveOpacity|
   #:|effectiveSizeHint|
   #:|elapsed|
   #:|elementCount|
   #:|elideMode|
   #:|elidedText|
   #:|emitDataChanged|
   #:|emitSelectionChanged|
   #:|emptyLabel|
   #:|enabledChanged|
   #:|encodeName.QFile|
   #:|encodedData|
   #:|encodedFragment|
   #:|encodedHost|
   #:|encodedPassword|
   #:|encodedPath|
   #:|encodedQueryItemValue|
   #:|encodedQuery|
   #:|encodedUserName|
   #:|endArray|
   #:|endEditBlock|
   #:|endFrame|
   #:|endGroup|
   #:|endInsertColumns|
   #:|endInsertRows|
   #:|endLayout|
   #:|endMacro|
   #:|endMoveColumns|
   #:|endMoveRows|
   #:|endNativePainting|
   #:|endRemoveColumns|
   #:|endRemoveRows|
   #:|endResetModel|
   #:|endValue|
   #:|end|
   #:|ensureBlockLayout|
   #:|ensureCursorVisible|
   #:|ensurePolished|
   #:|ensureVisible(QRectF)|
   #:|ensureVisible(QRectF...)|
   #:|ensureVisible(const QGraphicsItem*)|
   #:|ensureVisible(const QGraphicsItem*...)|
   #:|ensureVisible|
   #:|ensureWidgetVisible|
   #:|enterWhatsThisMode.QWhatsThis|
   #:|entered|
   #:|entryInfoList(QDir::Filters)|
   #:|entryInfoList(QDir::Filters...)|
   #:|entryInfoList(QStringList)|
   #:|entryInfoList(QStringList...)|
   #:|entryInfoList|
   #:|entryList(QDir::Filters)|
   #:|entryList(QDir::Filters...)|
   #:|entryList(QStringList)|
   #:|entryList(QStringList...)|
   #:|entryList|
   #:|enumeratorCount|
   #:|enumeratorOffset|
   #:|eraseRect(QRect)|
   #:|eraseRect(QRectF)|
   #:|eraseRect|
   #:|errorState|
   #:|errorString|
   #:|error|
   #:|escape.QRegExp|
   #:|escapeButton|
   #:|eventFilter|
   #:|eventSource|
   #:|eventType|
   #:|event|
   #:|exactMatch|
   #:|exclusive|
   #:|exec.QApplication|
   #:|exec.QCoreApplication|
   #:|exec.QMenu|
   #:|execute.QProcess|
   #:|executeDelayedItemsLayout|
   #:|exec|
   #:|exists.QFile|
   #:|exists|
   #:|exit.QCoreApplication|
   #:|exitCode|
   #:|exitStatus|
   #:|exited|
   #:|exit|
   #:|expandAll|
   #:|expandItem|
   #:|expandToDepth|
   #:|expanded|
   #:|expandingDirections|
   #:|expanding|
   #:|expandsOnDoubleClick|
   #:|expand|
   #:|exponential|
   #:|extraSelections|
   #:|fallbacksEnabled|
   #:|families|
   #:|family|
   #:|featuresChanged|
   #:|features|
   #:|fetchMore|
   #:|fieldGrowthPolicy|
   #:|field|
   #:|fileChanged|
   #:|fileIcon|
   #:|fileInfo|
   #:|fileMode|
   #:|fileName|
   #:|filePath|
   #:|fileRenamed|
   #:|fileSelected|
   #:|filesSelected|
   #:|files|
   #:|file|
   #:|fillPath|
   #:|fillRect(QRect,QBrush)|
   #:|fillRect(QRect,QColor)|
   #:|fillRect(QRect,Qt::BrushStyle)|
   #:|fillRect(QRect,Qt::GlobalColor)|
   #:|fillRect(QRect...)|
   #:|fillRect(QRectF,QBrush)|
   #:|fillRect(QRectF,QColor)|
   #:|fillRect(QRectF,Qt::BrushStyle)|
   #:|fillRect(QRectF,Qt::GlobalColor)|
   #:|fillRect(QRectF...)|
   #:|fillRect(int,int,int,int,QBrush)|
   #:|fillRect(int,int,int,int,QColor)|
   #:|fillRect(int,int,int,int,Qt::BrushStyle)|
   #:|fillRect(int,int,int,int,Qt::GlobalColor)|
   #:|fillRect|
   #:|fillRule|
   #:|fill|
   #:|filterCaseSensitivity|
   #:|filterEvent|
   #:|filterKeyColumn|
   #:|filterRegExp|
   #:|filterRole|
   #:|filterSelected|
   #:|filtersChildEvents|
   #:|filter|
   #:|finalStop|
   #:|find(QRegExp)|
   #:|find(QRegExp,QTextCursor)|
   #:|find(QRegExp,QTextCursor...)|
   #:|find(QRegExp,int)|
   #:|find(QRegExp,int...)|
   #:|find(QRegExp...)|
   #:|find(QString)|
   #:|find(QString,QTextCursor)|
   #:|find(QString,QTextCursor...)|
   #:|find(QString,int)|
   #:|find(QString,int...)|
   #:|find(QString...)|
   #:|find.QPixmapCache|
   #:|findBlockByLineNumber|
   #:|findBlockByNumber|
   #:|findBlock|
   #:|findBufferChanged|
   #:|findData|
   #:|findItems|
   #:|findText|
   #:|find|
   #:|finished|
   #:|finish|
   #:|firstBlock|
   #:|firstCursorPosition|
   #:|firstDayOfWeek|
   #:|firstLineNumber|
   #:|firstPosition|
   #:|firstVisibleBlock|
   #:|fitInView(QRectF)|
   #:|fitInView(QRectF...)|
   #:|fitInView(const QGraphicsItem*)|
   #:|fitInView(const QGraphicsItem*...)|
   #:|fitInView|
   #:|fitToWidth|
   #:|fixedPitch|
   #:|fixup|
   #:|flags|
   #:|flipCoordinates|
   #:|flow|
   #:|flush.QCoreApplication|
   #:|flush|
   #:|focalPoint|
   #:|focusChanged|
   #:|focusItem|
   #:|focusNextChild|
   #:|focusNextPrevChild|
   #:|focusPolicy|
   #:|focusPreviousChild|
   #:|focusProxy|
   #:|focusWidget.QApplication|
   #:|focusWidget|
   #:|font(const QWidget*).QApplication|
   #:|font(const char*).QApplication|
   #:|font.QApplication|
   #:|font.QToolTip|
   #:|fontCapitalization|
   #:|fontDatabaseChanged|
   #:|fontEmbeddingEnabled|
   #:|fontFamily|
   #:|fontFilters|
   #:|fontFixedPitch|
   #:|fontInfo|
   #:|fontItalic|
   #:|fontKerning|
   #:|fontLetterSpacing|
   #:|fontMetrics.QApplication|
   #:|fontMetrics|
   #:|fontOverline|
   #:|fontPointSize|
   #:|fontSelected|
   #:|fontStrikeOut|
   #:|fontStyleHint|
   #:|fontStyleStrategy|
   #:|fontUnderline|
   #:|fontWeight|
   #:|fontWordSpacing|
   #:|font|
   #:|forceShow|
   #:|foregroundBrush|
   #:|foregroundRole|
   #:|foreground|
   #:|formAlignment|
   #:|formatIndex|
   #:|formats|
   #:|format|
   #:|forwardAvailable|
   #:|forwardHistoryCount|
   #:|forward|
   #:|fragment|
   #:|frameBoundingRect|
   #:|frameChanged|
   #:|frameCount|
   #:|frameForTime|
   #:|frameFormat|
   #:|frameGeometry|
   #:|frameRect|
   #:|frameShadow|
   #:|frameShape|
   #:|frameSize|
   #:|frameStyle|
   #:|frameWidth|
   #:|fromAce.QUrl|
   #:|fromAxisAndAngle.QQuaternion|
   #:|fromCmyk.QColor|
   #:|fromCmykF.QColor|
   #:|fromData.QImage|
   #:|fromEncoded.QUrl|
   #:|fromHsl.QColor|
   #:|fromHslF.QColor|
   #:|fromHsv.QColor|
   #:|fromHsvF.QColor|
   #:|fromHtml.QTextDocumentFragment|
   #:|fromImage.QBitmap|
   #:|fromImage.QPixmap|
   #:|fromJulianDay.QDate|
   #:|fromLocalFile.QUrl|
   #:|fromNativeSeparators.QDir|
   #:|fromPage|
   #:|fromPercentEncoding.QUrl|
   #:|fromPlainText.QTextDocumentFragment|
   #:|fromRgb.QColor|
   #:|fromRgbF.QColor|
   #:|fromRgba.QColor|
   #:|fromScale.QTransform|
   #:|fromString(QString,QString).QDateTime|
   #:|fromString(QString,QString).QDate|
   #:|fromString(QString,QString).QTime|
   #:|fromString(QString,Qt::DateFormat).QDateTime|
   #:|fromString(QString,Qt::DateFormat).QDate|
   #:|fromString(QString,Qt::DateFormat).QTime|
   #:|fromString.QDateTime|
   #:|fromString.QDate|
   #:|fromString.QKeySequence|
   #:|fromString.QTime|
   #:|fromString|
   #:|fromTheme.QIcon|
   #:|fromTime_t.QDateTime|
   #:|fromTranslate.QTransform|
   #:|fromUnicode|
   #:|fromUserInput.QUrl|
   #:|frustum|
   #:|fullPage|
   #:|generatedIconPixmap|
   #:|geometriesChanged|
   #:|geometryChanged|
   #:|geometry|
   #:|gestureCancelPolicy|
   #:|gestureType|
   #:|gestures|
   #:|gesture|
   #:|getChar|
   #:|getColor.QColorDialog|
   #:|getDouble.QInputDialog|
   #:|getExistingDirectory.QFileDialog|
   #:|getFont(bool*,QFont).QFontDialog|
   #:|getFont(bool*,QWidget*).QFontDialog|
   #:|getFont.QFontDialog|
   #:|getInt.QInputDialog|
   #:|getItem.QInputDialog|
   #:|getOpenFileName.QFileDialog|
   #:|getOpenFileNames.QFileDialog|
   #:|getSaveFileName.QFileDialog|
   #:|getText.QInputDialog|
   #:|globalPos|
   #:|globalRestorePolicy|
   #:|globalStrut.QApplication|
   #:|globalX|
   #:|globalY|
   #:|gotFocus|
   #:|grabGesture|
   #:|grabKeyboard|
   #:|grabMouse|
   #:|grabShortcut|
   #:|grabWidget(QWidget*,QRect).QPixmap|
   #:|grabWidget(QWidget*,int).QPixmap|
   #:|grabWidget.QPixmap|
   #:|gradient|
   #:|graphicsEffect|
   #:|graphicsItem|
   #:|graphicsProxyWidget|
   #:|greenF|
   #:|green|
   #:|gridSize|
   #:|gridStyle|
   #:|groupId|
   #:|groupSeparator|
   #:|group|
   #:|handleWidth|
   #:|handle|
   #:|hasAcceptableInput|
   #:|hasAlphaChannel|
   #:|hasAlpha|
   #:|hasAutoScroll|
   #:|hasChildren|
   #:|hasClipping|
   #:|hasColor|
   #:|hasComplexSelection|
   #:|hasCursor|
   #:|hasEncodedQueryItem|
   #:|hasFocus|
   #:|hasFormat|
   #:|hasFragment|
   #:|hasFrame|
   #:|hasHeightForWidth|
   #:|hasHotSpot|
   #:|hasHtml|
   #:|hasImage|
   #:|hasIndex|
   #:|hasMouseTracking|
   #:|hasNext|
   #:|hasPendingEvents.QCoreApplication|
   #:|hasProperty|
   #:|hasQueryItem|
   #:|hasQuery|
   #:|hasScaledContents|
   #:|hasSelectedText|
   #:|hasSelection|
   #:|hasText|
   #:|hasThemeIcon.QIcon|
   #:|hasTracking|
   #:|hasUrls|
   #:|hasVisitedPage|
   #:|hash.QCryptographicHash|
   #:|headerDataChanged|
   #:|headerData|
   #:|headerItem|
   #:|headerRowCount|
   #:|headerTextFormat|
   #:|header|
   #:|heightChanged|
   #:|heightForWidth|
   #:|heightMM|
   #:|height|
   #:|helpEvent|
   #:|helpRequested|
   #:|hiResGlobalPos|
   #:|hiResGlobalX|
   #:|hiResGlobalY|
   #:|hiddenSectionCount|
   #:|hideColumn|
   #:|hideOrShow|
   #:|hidePopup|
   #:|hideRow|
   #:|hideSection|
   #:|hideTearOffMenu|
   #:|hideText.QToolTip|
   #:|hideText.QWhatsThis|
   #:|hide|
   #:|highlightSections|
   #:|highlighted(QModelIndex)|
   #:|highlighted(QString)|
   #:|highlighted(QUrl)|
   #:|highlighted(int)|
   #:|highlightedText|
   #:|highlighted|
   #:|highlight|
   #:|historyChanged|
   #:|historyTitle|
   #:|historyType|
   #:|historyUrl|
   #:|history|
   #:|hitTestComplexControl|
   #:|hitTestPath|
   #:|hitTest|
   #:|home.QDir|
   #:|homePath.QDir|
   #:|home|
   #:|horizontalDirection|
   #:|horizontalHeaderFormat|
   #:|horizontalHeaderItem|
   #:|horizontalHeader|
   #:|horizontalPolicy|
   #:|horizontalScrollBarPolicy|
   #:|horizontalScrollBar|
   #:|horizontalScrollMode|
   #:|horizontalScrollbarAction|
   #:|horizontalScrollbarValueChanged|
   #:|horizontalSpacing|
   #:|horizontalStretch|
   #:|host|
   #:|hotSpot|
   #:|hour|
   #:|hovered|
   #:|hover|
   #:|href|
   #:|hslHueF|
   #:|hslHue|
   #:|hslSaturationF|
   #:|hslSaturation|
   #:|hsvHueF|
   #:|hsvHue|
   #:|hsvSaturationF|
   #:|hsvSaturation|
   #:|html|
   #:|hueF|
   #:|hue|
   #:|icon(QFileIconProvider::IconType)|
   #:|icon(QFileInfo)|
   #:|iconPixmap|
   #:|iconProvider|
   #:|iconSizeChanged|
   #:|iconSize|
   #:|iconText|
   #:|icon|
   #:|idealWidth|
   #:|identifierName|
   #:|idnWhitelist.QUrl|
   #:|id|
   #:|ignore(QGesture*)|
   #:|ignore(Qt::GestureType)|
   #:|ignore|
   #:|imageData|
   #:|image|
   #:|inFont|
   #:|inWhatsThisMode.QWhatsThis|
   #:|indentWidth|
   #:|indentation|
   #:|indent|
   #:|index(QString...)|
   #:|index(int...)|
   #:|indexAbove|
   #:|indexAt|
   #:|indexBelow|
   #:|indexChanged|
   #:|indexFromItem|
   #:|indexIn|
   #:|indexOfAnimation|
   #:|indexOfChild|
   #:|indexOfClassInfo|
   #:|indexOfConstructor|
   #:|indexOfEnumerator|
   #:|indexOfMethod|
   #:|indexOfProperty|
   #:|indexOfSignal|
   #:|indexOfSlot|
   #:|indexOfTopLevelItem|
   #:|indexOf|
   #:|indexRowSizeHint|
   #:|indexWidget|
   #:|indexesMoved|
   #:|indexes|
   #:|index|
   #:|information.QMessageBox|
   #:|informativeText|
   #:|inherits|
   #:|iniCodec|
   #:|initFrom|
   #:|initStyleOption|
   #:|initialState|
   #:|initializeColumn|
   #:|initializePage|
   #:|inputContext|
   #:|inputMask|
   #:|inputMethodHints|
   #:|inputMethodQuery|
   #:|inputMode|
   #:|insert.QPixmapCache|
   #:|insertActions|
   #:|insertAction|
   #:|insertAnimation|
   #:|insertBlock|
   #:|insertChildren|
   #:|insertChild|
   #:|insertColumn(int,QList<QStandardItem*>)|
   #:|insertColumn(int,QModelIndex)|
   #:|insertColumns|
   #:|insertColumn|
   #:|insertFragment|
   #:|insertFrame|
   #:|insertHtml|
   #:|insertImage(QImage)|
   #:|insertImage(QImage...)|
   #:|insertImage(QString)|
   #:|insertImage(QTextImageFormat)|
   #:|insertImage(QTextImageFormat...)|
   #:|insertImage|
   #:|insertItem(int,QIcon...)|
   #:|insertItem(int,QListWidgetItem*)|
   #:|insertItem(int,QString)|
   #:|insertItem(int,QString...)|
   #:|insertItems|
   #:|insertItem|
   #:|insertLayout|
   #:|insertList(QTextListFormat)|
   #:|insertList(QTextListFormat::Style)|
   #:|insertList|
   #:|insertMenu|
   #:|insertPause|
   #:|insertPermanentWidget|
   #:|insertPlainText|
   #:|insertPolicy|
   #:|insertRow(int,QLayout*)|
   #:|insertRow(int,QList<QStandardItem*>)|
   #:|insertRow(int,QModelIndex)|
   #:|insertRow(int,QStandardItem*)|
   #:|insertRow(int,QString,QLayout*)|
   #:|insertRow(int,QString,QWidget*)|
   #:|insertRow(int,QString...)|
   #:|insertRow(int,QWidget*)|
   #:|insertRow(int,QWidget*,QLayout*)|
   #:|insertRow(int,QWidget*,QWidget*)|
   #:|insertRow(int,QWidget*...)|
   #:|insertRows(int,QList<QStandardItem*>)|
   #:|insertRows(int,int)|
   #:|insertRows|
   #:|insertRow|
   #:|insertSeparator|
   #:|insertSpacerItem|
   #:|insertSpacing|
   #:|insertStretch|
   #:|insertSubstitution.QFont|
   #:|insertSubstitutions.QFont|
   #:|insertTable|
   #:|insertTab|
   #:|insertText|
   #:|insertToolBarBreak|
   #:|insertToolBar|
   #:|insertTopLevelItems|
   #:|insertTopLevelItem|
   #:|insertWidget|
   #:|insert|
   #:|installEventFilter|
   #:|installFactory.QAccessible|
   #:|installSceneEventFilter|
   #:|installTranslator.QCoreApplication|
   #:|instance.QCoreApplication|
   #:|instance|
   #:|intMaximum|
   #:|intMinimum|
   #:|intProperty|
   #:|intStep|
   #:|intValueChanged|
   #:|intValueSelected|
   #:|intValue|
   #:|internalDelayedPopup|
   #:|internalId|
   #:|internalSetSloppyAction|
   #:|interpretText|
   #:|intersected(QRect)|
   #:|intersected(QRegion)|
   #:|intersected|
   #:|intersects(QPainterPath)|
   #:|intersects(QRect)|
   #:|intersects(QRectF)|
   #:|intersects(QRegion)|
   #:|intersects|
   #:|interval|
   #:|invalidateFilter|
   #:|invalidateScene|
   #:|invalidate|
   #:|invertPixels|
   #:|invertedAppearance|
   #:|invertedControls|
   #:|inverted|
   #:|invisibleRootItem|
   #:|invokeMethod|
   #:|isAbsolutePath.QDir|
   #:|isAbsolute|
   #:|isAccelerated|
   #:|isAccepted(QGesture*)|
   #:|isAccepted(Qt::GestureType)|
   #:|isAccepted|
   #:|isActivated|
   #:|isActive.QAccessible|
   #:|isActiveWindow|
   #:|isActive|
   #:|isAffine|
   #:|isAmbiguous|
   #:|isAncestorOf|
   #:|isAnchor|
   #:|isAnimated|
   #:|isAreaAllowed|
   #:|isAtBoundary|
   #:|isAutoRepeat|
   #:|isAvailable.QSound|
   #:|isBackwardAvailable|
   #:|isBitmapScalable|
   #:|isBlockFormat|
   #:|isBrushSet|
   #:|isBundle|
   #:|isCharFormat|
   #:|isCheckable|
   #:|isChecked|
   #:|isClean|
   #:|isClickable|
   #:|isClipped|
   #:|isCollapsible|
   #:|isColumnHidden|
   #:|isColumnSelected|
   #:|isComboBoxEditable|
   #:|isCommitPage|
   #:|isComplete|
   #:|isComposing|
   #:|isCopyOf|
   #:|isCornerButtonEnabled|
   #:|isCosmetic|
   #:|isDateEditEnabled|
   #:|isDefaultUp|
   #:|isDefault|
   #:|isDir|
   #:|isDisabled|
   #:|isDockNestingEnabled|
   #:|isDown|
   #:|isDragEnabled|
   #:|isDropEnabled|
   #:|isEditable|
   #:|isEffectEnabled.QApplication|
   #:|isEmpty|
   #:|isEnabledTo|
   #:|isEnabled|
   #:|isEqual|
   #:|isExclusive|
   #:|isExecutable|
   #:|isExpanded|
   #:|isFile|
   #:|isFinalPage|
   #:|isFinished|
   #:|isFirstColumnSpanned|
   #:|isFirstItemColumnSpanned|
   #:|isFixedPitch|
   #:|isFlat|
   #:|isFloatable|
   #:|isFloating|
   #:|isForwardAvailable|
   #:|isFrameFormat|
   #:|isFullScreen|
   #:|isGrayscale|
   #:|isGridVisible|
   #:|isHeaderHidden|
   #:|isHidden|
   #:|isIconVisibleInMenu|
   #:|isIdentity|
   #:|isImageFormat|
   #:|isInteractive|
   #:|isInvertible|
   #:|isItemEnabled|
   #:|isLayout|
   #:|isLeapYear.QDate|
   #:|isLeftToRight.QApplication|
   #:|isLibrary.QLibrary|
   #:|isListFormat|
   #:|isLoaded|
   #:|isMaximized|
   #:|isMinimal|
   #:|isMinimized|
   #:|isModal|
   #:|isModified|
   #:|isMovable|
   #:|isNameFilterDetailsVisible|
   #:|isNativeMenuBar|
   #:|isNavigationBarVisible|
   #:|isNull|
   #:|isObscuredBy|
   #:|isObscured|
   #:|isOpaque|
   #:|isOpen|
   #:|isPanel|
   #:|isParentOf|
   #:|isPhase2|
   #:|isQBitmap|
   #:|isReadOnly|
   #:|isReadable|
   #:|isRedoAvailable|
   #:|isRelativePath.QDir|
   #:|isRelative|
   #:|isRightToLeft.QApplication|
   #:|isRoot|
   #:|isRotating|
   #:|isRowHidden|
   #:|isRowSelected|
   #:|isRunning|
   #:|isScalable|
   #:|isScaling|
   #:|isSectionHidden|
   #:|isSelectable|
   #:|isSelected|
   #:|isSelectionRectVisible|
   #:|isSeparator|
   #:|isSequential|
   #:|isSessionRestored|
   #:|isShaded|
   #:|isSingleShot|
   #:|isSizeGripEnabled|
   #:|isSliderDown|
   #:|isSmoothlyScalable|
   #:|isSolid|
   #:|isSortCacheEnabled|
   #:|isSortIndicatorShown|
   #:|isSortLocaleAware|
   #:|isSortingEnabled|
   #:|isSymLink|
   #:|isSystemTrayAvailable.QSystemTrayIcon|
   #:|isTabEnabled|
   #:|isTableCellFormat|
   #:|isTableFormat|
   #:|isTearOffEnabled|
   #:|isTearOffMenuVisible|
   #:|isTextModeEnabled|
   #:|isTextVisible|
   #:|isTransformed|
   #:|isTranslating|
   #:|isTristate|
   #:|isUnderMouse|
   #:|isUndoAvailable|
   #:|isUndoRedoEnabled|
   #:|isValid.QDate|
   #:|isValid.QTime|
   #:|isValidCursorPosition|
   #:|isValid|
   #:|isVirtualDesktop|
   #:|isVisible.QToolTip|
   #:|isVisibleTo|
   #:|isVisible|
   #:|isWidgetType|
   #:|isWidget|
   #:|isWindowModified|
   #:|isWindow|
   #:|isWrapping|
   #:|isWritable|
   #:|italic|
   #:|itemAbove|
   #:|itemActivated|
   #:|itemAtPosition|
   #:|itemAt|
   #:|itemBelow|
   #:|itemChanged|
   #:|itemClicked|
   #:|itemCollapsed|
   #:|itemData|
   #:|itemDelegateForColumn|
   #:|itemDelegateForRow|
   #:|itemDelegate|
   #:|itemDoubleClicked|
   #:|itemEditorFactory|
   #:|itemEntered|
   #:|itemExpanded|
   #:|itemFromIndex|
   #:|itemIcon|
   #:|itemIndexMethod|
   #:|itemNumber|
   #:|itemPixmapRect|
   #:|itemPressed|
   #:|itemPrototype|
   #:|itemSelectionChanged|
   #:|itemSpacing|
   #:|itemTextRect|
   #:|itemText|
   #:|itemToolTip|
   #:|itemTransform|
   #:|itemWidget|
   #:|items(QPainterPath)|
   #:|items(QPainterPath...)|
   #:|items(QPoint)|
   #:|items(QPointF...)|
   #:|items(QPolygon)|
   #:|items(QPolygon...)|
   #:|items(QPolygonF...)|
   #:|items(QRect)|
   #:|items(QRect...)|
   #:|items(QRectF...)|
   #:|items(int...)|
   #:|itemsBoundingRect|
   #:|itemsExpandable|
   #:|items|
   #:|item|
   #:|joinPreviousEditBlock|
   #:|joinStyle|
   #:|jumpToFrame|
   #:|jumpToNextFrame|
   #:|kerning|
   #:|keyBindings.QKeySequence|
   #:|keyValueAt|
   #:|keyboardGrabber.QWidget|
   #:|keyboardInputDirection.QApplication|
   #:|keyboardInputInterval.QApplication|
   #:|keyboardInputLocale.QApplication|
   #:|keyboardModifiers.QApplication|
   #:|keyboardModifiers|
   #:|keyboardPageStep|
   #:|keyboardSearch|
   #:|keyboardSingleStep|
   #:|keyboardTracking|
   #:|key|
   #:|killTimer|
   #:|kill|
   #:|labelAlignment|
   #:|labelForField(QLayout*)|
   #:|labelForField(QWidget*)|
   #:|labelForField|
   #:|labelText|
   #:|languageToString.QLocale|
   #:|language|
   #:|lastBlock|
   #:|lastCenterPoint|
   #:|lastCursorPosition|
   #:|lastIndexIn|
   #:|lastModified|
   #:|lastOffset|
   #:|lastPosition|
   #:|lastPos|
   #:|lastRead|
   #:|lastResortFamily|
   #:|lastResortFont|
   #:|lastRotationAngle|
   #:|lastScaleFactor|
   #:|lastScenePos|
   #:|lastScreenPos|
   #:|lastWindowClosed|
   #:|layoutAboutToBeChanged|
   #:|layoutChanged|
   #:|layoutDirection.QApplication|
   #:|layoutDirection|
   #:|layoutMode|
   #:|layoutSpacingImplementation|
   #:|layoutSpacing|
   #:|layout|
   #:|lazyChildCount|
   #:|leadingIncluded|
   #:|leading|
   #:|leaveWhatsThisMode.QWhatsThis|
   #:|leftBearing|
   #:|leftColumn|
   #:|leftMargin|
   #:|leftPadding|
   #:|left|
   #:|lengthProperty|
   #:|lengthSquared|
   #:|lengthVectorProperty|
   #:|length|
   #:|letterSpacingType|
   #:|letterSpacing|
   #:|levelOfDetailFromTransform.QStyleOptionGraphicsItem|
   #:|libraryPaths.QCoreApplication|
   #:|licensedProducts.QLibraryInfo|
   #:|licensee.QLibraryInfo|
   #:|lighter|
   #:|lightnessF|
   #:|lightness|
   #:|light|
   #:|lineAt|
   #:|lineCount|
   #:|lineEdit|
   #:|lineForTextPosition|
   #:|lineNumber|
   #:|lineSpacing|
   #:|lineTo|
   #:|lineWidth|
   #:|lineWrapColumnOrWidth|
   #:|lineWrapMode|
   #:|line|
   #:|link.QFile|
   #:|linkActivated|
   #:|linkHovered|
   #:|linkVisited|
   #:|link|
   #:|listWidget|
   #:|loadFromData|
   #:|loadHints|
   #:|loadResource|
   #:|load|
   #:|locale|
   #:|location.QLibraryInfo|
   #:|lockForRead|
   #:|lockForWrite|
   #:|logicalDpiX|
   #:|logicalDpiY|
   #:|logicalIndexAt(QPoint)|
   #:|logicalIndexAt(int)|
   #:|logicalIndexAt|
   #:|logicalIndex|
   #:|longDayName.QDate|
   #:|longMonthName.QDate|
   #:|lookAt|
   #:|loopCount|
   #:|loopsRemaining|
   #:|loops|
   #:|lostFocus|
   #:|lower|
   #:|m11|
   #:|m12|
   #:|m13|
   #:|m21|
   #:|m22|
   #:|m23|
   #:|m31|
   #:|m32|
   #:|m33|
   #:|machine|
   #:|magentaF|
   #:|magenta|
   #:|makeAbsolute|
   #:|makeDecoder|
   #:|makeEncoder|
   #:|map(QLine)|
   #:|map(QLineF)|
   #:|map(QPainterPath)|
   #:|map(QPoint)|
   #:|map(QPointF)|
   #:|map(QPolygon)|
   #:|map(QPolygonF)|
   #:|map(QRegion)|
   #:|map(QVector3D)|
   #:|map(QVector4D)|
   #:|mapFromGlobal|
   #:|mapFromItem(const QGraphicsItem*,QPainterPath)|
   #:|mapFromItem(const QGraphicsItem*,QPointF)|
   #:|mapFromItem(const QGraphicsItem*,QPolygonF)|
   #:|mapFromItem(const QGraphicsItem*,QRectF)|
   #:|mapFromItem|
   #:|mapFromParent(QPainterPath)|
   #:|mapFromParent(QPointF)|
   #:|mapFromParent(QPolygonF)|
   #:|mapFromParent(QRectF)|
   #:|mapFromParent|
   #:|mapFromScene(QPainterPath)|
   #:|mapFromScene(QPointF)|
   #:|mapFromScene(QPolygonF)|
   #:|mapFromScene(QRectF)|
   #:|mapFromScene|
   #:|mapFromSource|
   #:|mapFrom|
   #:|mapRect(QRect)|
   #:|mapRect(QRectF)|
   #:|mapRectFromItem|
   #:|mapRectFromParent|
   #:|mapRectFromScene|
   #:|mapRectToItem|
   #:|mapRectToParent|
   #:|mapRectToScene|
   #:|mapRect|
   #:|mapSelectionFromSource|
   #:|mapSelectionToSource|
   #:|mapToGlobal|
   #:|mapToGraphicsScene|
   #:|mapToItem(const QGraphicsItem*,QPainterPath)|
   #:|mapToItem(const QGraphicsItem*,QPointF)|
   #:|mapToItem(const QGraphicsItem*,QPolygonF)|
   #:|mapToItem(const QGraphicsItem*,QRectF)|
   #:|mapToItem|
   #:|mapToParent(QPainterPath)|
   #:|mapToParent(QPointF)|
   #:|mapToParent(QPolygonF)|
   #:|mapToParent(QRectF)|
   #:|mapToParent|
   #:|mapToPolygon|
   #:|mapToScene(QPainterPath)|
   #:|mapToScene(QPoint)|
   #:|mapToScene(QPointF)|
   #:|mapToScene(QPolygon)|
   #:|mapToScene(QPolygonF)|
   #:|mapToScene(QRect)|
   #:|mapToScene(QRectF)|
   #:|mapToScene|
   #:|mapToSource|
   #:|mapTo|
   #:|mapVector|
   #:|mappedPropertyName|
   #:|mappedSection|
   #:|mappedWidgetAt|
   #:|map|
   #:|margin|
   #:|markContentsDirty|
   #:|mask|
   #:|match(QString...).QDir|
   #:|match(QStringList...).QDir|
   #:|match.QDir|
   #:|matchedLength|
   #:|matches|
   #:|match|
   #:|matrix|
   #:|maxCount|
   #:|maxLength|
   #:|maxPage|
   #:|maxVisibleItems|
   #:|maxWidth|
   #:|maximumBlockCount|
   #:|maximumDateTime|
   #:|maximumDate|
   #:|maximumHeight|
   #:|maximumSize|
   #:|maximumTime|
   #:|maximumViewportSize|
   #:|maximumWidth|
   #:|maximum|
   #:|mdiArea|
   #:|measurementSystem|
   #:|menuAction|
   #:|menuBar|
   #:|menuRole|
   #:|menuWidget|
   #:|menu|
   #:|mergeBlockCharFormat|
   #:|mergeBlockFormat|
   #:|mergeCells|
   #:|mergeCharFormat|
   #:|mergeCurrentCharFormat|
   #:|mergeWith|
   #:|merge|
   #:|messageChanged|
   #:|messageClicked|
   #:|message|
   #:|metaInformation|
   #:|metaObject|
   #:|methodCount|
   #:|methodOffset|
   #:|mibEnum|
   #:|midLineWidth|
   #:|midlight|
   #:|mid|
   #:|mimeData|
   #:|mimeTypes|
   #:|minLeftBearing|
   #:|minPage|
   #:|minRightBearing|
   #:|minimumContentsLength|
   #:|minimumDateTime|
   #:|minimumDate|
   #:|minimumDuration|
   #:|minimumHeightForWidth|
   #:|minimumHeight|
   #:|minimumSectionSize|
   #:|minimumSizeHint|
   #:|minimumSize|
   #:|minimumTime|
   #:|minimumWidth|
   #:|minimum|
   #:|minute|
   #:|mirrored|
   #:|miterLimit|
   #:|mkdir|
   #:|mkpath|
   #:|mnemonic.QKeySequence|
   #:|modelAboutToBeReset|
   #:|modelColumn|
   #:|modelReset|
   #:|modelSorting|
   #:|model|
   #:|mode|
   #:|modificationChanged|
   #:|modifierMask|
   #:|modifiers|
   #:|monthName|
   #:|monthShown|
   #:|month|
   #:|mouseButtons.QApplication|
   #:|mouseButtons|
   #:|mouseGrabber.QWidget|
   #:|mouseGrabberItem|
   #:|movableChanged|
   #:|moveBy|
   #:|moveCursor|
   #:|movePosition|
   #:|moveSection|
   #:|moveSplitter|
   #:|moveTab|
   #:|moveToThread|
   #:|moveTo|
   #:|movement|
   #:|move|
   #:|movie|
   #:|msecsTo|
   #:|msec|
   #:|myComputer|
   #:|nameFilterDisables|
   #:|nameFilters|
   #:|nameToType.QVariant|
   #:|name|
   #:|nativeParentWidget|
   #:|naturalTextRect|
   #:|naturalTextWidth|
   #:|negativeSign|
   #:|newPage|
   #:|newPos|
   #:|newProxyWidget|
   #:|newSize|
   #:|nextCursorPosition|
   #:|nextFrameDelay|
   #:|nextId|
   #:|nextInFocusChain|
   #:|next|
   #:|nlerp.QQuaternion|
   #:|nonBreakableLines|
   #:|normal.QVector3D|
   #:|normalGeometry|
   #:|normalMatrix|
   #:|normalizedSignature.QMetaObject|
   #:|normalizedType.QMetaObject|
   #:|normalized|
   #:|normalize|
   #:|notation|
   #:|notchSize|
   #:|notchTarget|
   #:|notchesVisible|
   #:|notify|
   #:|numCopies|
   #:|numberOptions|
   #:|objectForFormat|
   #:|objectIndex|
   #:|objectName|
   #:|objectType|
   #:|object|
   #:|offsetChanged|
   #:|offset|
   #:|okButtonText|
   #:|oldPos|
   #:|oldSize|
   #:|oldState|
   #:|opacityChanged|
   #:|opacityMaskChanged|
   #:|opacityMask|
   #:|opacity|
   #:|opaqueArea|
   #:|opaqueResize|
   #:|openExternalLinks|
   #:|openLinks|
   #:|openMode|
   #:|openPersistentEditor|
   #:|openUrl.QDesktopServices|
   #:|open|
   #:|optimizationFlags|
   #:|optimize|
   #:|options|
   #:|organizationDomain.QCoreApplication|
   #:|organizationName.QCoreApplication|
   #:|organizationName|
   #:|orientationChanged|
   #:|orientation|
   #:|originChanged|
   #:|originCorner|
   #:|origin|
   #:|ortho(QRect)|
   #:|ortho(QRectF)|
   #:|ortho|
   #:|outputFileName|
   #:|outputFormat|
   #:|overflow|
   #:|overlinePos|
   #:|overline|
   #:|overrideCursor.QApplication|
   #:|overrideWindowFlags|
   #:|overshoot|
   #:|overwriteMode|
   #:|ownedByLayout|
   #:|ownerDestroyed|
   #:|ownerId|
   #:|owner|
   #:|ownsClipboard|
   #:|ownsFindBuffer|
   #:|ownsSelection|
   #:|padding|
   #:|pageAdded|
   #:|pageBreakPolicy|
   #:|pageCountChanged|
   #:|pageCount|
   #:|pageIds|
   #:|pageOrder|
   #:|pageRect|
   #:|pageRemoved|
   #:|pageSize|
   #:|pageStep|
   #:|page|
   #:|paint(QPainter*,QRect...)|
   #:|paint(QPainter*,int...)|
   #:|paintDevice|
   #:|paintRequested|
   #:|paintWindowFrame|
   #:|paintingActive|
   #:|paint|
   #:|palette(const QWidget*).QApplication|
   #:|palette(const char*).QApplication|
   #:|palette.QApplication|
   #:|palette.QToolTip|
   #:|palette|
   #:|panelModality|
   #:|panel|
   #:|paperRect|
   #:|paperSize|
   #:|paperSource|
   #:|parentChanged|
   #:|parentFrame|
   #:|parentItem|
   #:|parentLayoutItem|
   #:|parentObject|
   #:|parentState|
   #:|parentWidget|
   #:|parent|
   #:|password|
   #:|paste|
   #:|pathFromIndex|
   #:|path|
   #:|patternSyntax|
   #:|pattern|
   #:|pause|
   #:|peek|
   #:|penProperty|
   #:|pen|
   #:|percentAtLength|
   #:|percent|
   #:|period|
   #:|permissions.QFile|
   #:|permissions|
   #:|permission|
   #:|persistentIndexList|
   #:|perspective|
   #:|physicalDpiX|
   #:|physicalDpiY|
   #:|picture|
   #:|pixelIndex|
   #:|pixelMetric|
   #:|pixelSize|
   #:|pixel|
   #:|pixmap(QSize)|
   #:|pixmap(QSize...)|
   #:|pixmap(int)|
   #:|pixmap(int,QIcon::Mode)|
   #:|pixmap(int,QIcon::Mode...)|
   #:|pixmap(int,int)|
   #:|pixmap(int,int...)|
   #:|pixmap(int...)|
   #:|pixmap|
   #:|play.QSound|
   #:|play|
   #:|pmText|
   #:|pointAtPercent|
   #:|pointSizeF|
   #:|pointSizes|
   #:|pointSize|
   #:|pointerType|
   #:|polish(QApplication*)|
   #:|polish(QPalette&)|
   #:|polish(QWidget*)|
   #:|polished|
   #:|polish|
   #:|polygon|
   #:|popupMode|
   #:|popup|
   #:|port|
   #:|pos.QCursor|
   #:|posF|
   #:|position|
   #:|positiveSign|
   #:|possibleActions|
   #:|postDelayedEvent|
   #:|postEvent.QCoreApplication|
   #:|postEvent|
   #:|pos|
   #:|preeditAreaPosition|
   #:|preeditAreaText|
   #:|preeditString|
   #:|preferredHeight|
   #:|preferredSize|
   #:|preferredWidth|
   #:|prefix|
   #:|prepareGeometryChange|
   #:|pressed|
   #:|pressure|
   #:|previewChanged|
   #:|previewWidget|
   #:|previousBlockState|
   #:|previousCursorPosition|
   #:|previousInFocusChain|
   #:|previous|
   #:|primaryScreen|
   #:|printProgram|
   #:|printRange|
   #:|printerName|
   #:|printerState|
   #:|printer|
   #:|print|
   #:|priority|
   #:|processChannelMode|
   #:|processEnvironment|
   #:|processEvents.QCoreApplication|
   #:|processEvents|
   #:|propertiesAssigned|
   #:|propertyCount|
   #:|propertyName|
   #:|propertyOffset|
   #:|property|
   #:|proposedAction|
   #:|provides|
   #:|proxyModel|
   #:|proxy|
   #:|push|
   #:|putChar|
   #:|quadToQuad.QTransform|
   #:|quadToSquare.QTransform|
   #:|quadTo|
   #:|queryAccessibleInterface.QAccessible|
   #:|queryItemValue|
   #:|queryPairDelimiter|
   #:|queryValueDelimiter|
   #:|question.QMessageBox|
   #:|quitOnLastWindowClosed.QApplication|
   #:|quit|
   #:|radius|
   #:|raise|
   #:|rangeChanged|
   #:|rawMode|
   #:|rawName|
   #:|rawValue|
   #:|readAllStandardError|
   #:|readAllStandardOutput|
   #:|readAll|
   #:|readChannelFinished|
   #:|readChannel|
   #:|readLine|
   #:|readWriteLock|
   #:|readyReadStandardError|
   #:|readyReadStandardOutput|
   #:|readyRead|
   #:|read|
   #:|reason|
   #:|receivers|
   #:|rectCount|
   #:|rectForIndex|
   #:|rects|
   #:|rect|
   #:|redF|
   #:|redoAvailable|
   #:|redoTextChanged|
   #:|redoText|
   #:|redo|
   #:|red|
   #:|reexpand|
   #:|reformat|
   #:|refresh|
   #:|regExp|
   #:|region|
   #:|registerEditor|
   #:|registerEventType.QEvent|
   #:|registerField|
   #:|registerFormat.QSettings|
   #:|rehighlightBlock|
   #:|rehighlight|
   #:|rejected|
   #:|reject|
   #:|relationTo|
   #:|relativeFilePath|
   #:|releaseKeyboard|
   #:|releaseMouse|
   #:|releaseShortcut|
   #:|releaseWidget|
   #:|released|
   #:|release|
   #:|reload|
   #:|relock|
   #:|remove.QFile|
   #:|remove.QPixmapCache|
   #:|removeAction|
   #:|removeAllApplicationFonts.QFontDatabase|
   #:|removeAllEncodedQueryItems|
   #:|removeAllQueryItems|
   #:|removeAnimation|
   #:|removeApplicationFont.QFontDatabase|
   #:|removeAt|
   #:|removeButton|
   #:|removeCellWidget|
   #:|removeChild|
   #:|removeColumns|
   #:|removeColumn|
   #:|removeDefaultAnimation|
   #:|removeDockWidget|
   #:|removeEncodedQueryItem|
   #:|removeEventFilter|
   #:|removeFactory.QAccessible|
   #:|removeFormat|
   #:|removeFromGroup|
   #:|removeItemWidget|
   #:|removeItem|
   #:|removeLibraryPath.QCoreApplication|
   #:|removeMapping|
   #:|removePage|
   #:|removePaths|
   #:|removePath|
   #:|removePostedEvents.QCoreApplication|
   #:|removeQueryItem|
   #:|removeRows|
   #:|removeRow|
   #:|removeSceneEventFilter|
   #:|removeSelectedText|
   #:|removeStack|
   #:|removeState|
   #:|removeSubWindow|
   #:|removeSubstitution.QFont|
   #:|removeTab|
   #:|removeToolBarBreak|
   #:|removeToolBar|
   #:|removeTransition|
   #:|removeTranslator.QCoreApplication|
   #:|removeWidget|
   #:|removed|
   #:|remove|
   #:|rename.QFile|
   #:|rename|
   #:|renderHints|
   #:|render|
   #:|repaint(QRect)|
   #:|repaint(QRegion)|
   #:|repaint|
   #:|repeatAction|
   #:|replacementLength|
   #:|replacementStart|
   #:|requestPhase2|
   #:|requestUpdate|
   #:|requestWidget|
   #:|resetCachedContent|
   #:|resetMatrix|
   #:|resetTransform|
   #:|reset|
   #:|resize.QFile|
   #:|resizeAnchor|
   #:|resizeColumnToContents|
   #:|resizeColumnsToContents|
   #:|resizeGripsVisible|
   #:|resizeMode|
   #:|resizeRowToContents|
   #:|resizeRowsToContents|
   #:|resizeSections|
   #:|resizeSection|
   #:|resized|
   #:|resize|
   #:|resolution|
   #:|resolveSymlinks|
   #:|resolved|
   #:|resolve|
   #:|resource|
   #:|restartCommand|
   #:|restartHint|
   #:|restart|
   #:|restoreDockWidget|
   #:|restoreGeometry|
   #:|restoreOverrideCursor.QApplication|
   #:|restoreState|
   #:|restore|
   #:|result|
   #:|resume|
   #:|returnPressed|
   #:|revert|
   #:|revision|
   #:|rgbSwapped|
   #:|rgba|
   #:|rgb|
   #:|rightBearing|
   #:|rightColumn|
   #:|rightMargin|
   #:|rightPadding|
   #:|right|
   #:|rmdir|
   #:|rmpath|
   #:|role|
   #:|root.QDir|
   #:|rootDirectory|
   #:|rootFrame|
   #:|rootIndex|
   #:|rootIsDecorated|
   #:|rootModelIndex|
   #:|rootPath.QDir|
   #:|rootPathChanged|
   #:|rootPath|
   #:|rotateRadians|
   #:|rotatedVector|
   #:|rotate|
   #:|rotationAngle|
   #:|rotationChanged|
   #:|rotation|
   #:|rowAlignment|
   #:|rowAt|
   #:|rowCountChanged|
   #:|rowCount|
   #:|rowEnd|
   #:|rowHeight|
   #:|rowIntersectsSelection|
   #:|rowMaximumHeight|
   #:|rowMinimumHeight|
   #:|rowMoved|
   #:|rowPreferredHeight|
   #:|rowResized|
   #:|rowSpacing|
   #:|rowSpan|
   #:|rowStart|
   #:|rowStretchFactor|
   #:|rowStretch|
   #:|rowViewportPosition|
   #:|rowWrapPolicy|
   #:|rowsAboutToBeInserted|
   #:|rowsAboutToBeMoved|
   #:|rowsAboutToBeRemoved|
   #:|rowsInserted|
   #:|rowsMoved|
   #:|rowsRemoved|
   #:|rows|
   #:|row|
   #:|rubberBandSelectionMode|
   #:|run|
   #:|saturationF|
   #:|saturation|
   #:|saveGeometry|
   #:|saveStateRequest|
   #:|saveState|
   #:|save|
   #:|scalar|
   #:|scale(QVector3D)|
   #:|scale(qreal)|
   #:|scaleChanged|
   #:|scaleFactor|
   #:|scaled(QSize...)|
   #:|scaled(int...)|
   #:|scaledSize|
   #:|scaledToHeight|
   #:|scaledToWidth|
   #:|scaled|
   #:|scale|
   #:|sceneBoundingRect|
   #:|scenePos|
   #:|sceneRectChanged|
   #:|sceneRect|
   #:|sceneTransform|
   #:|scene|
   #:|scheduleDelayedItemsLayout|
   #:|scheme|
   #:|scope|
   #:|screenCountChanged|
   #:|screenCount|
   #:|screenGeometry(QPoint)|
   #:|screenGeometry(const QWidget*)|
   #:|screenGeometry(int)|
   #:|screenGeometry|
   #:|screenNumber(QPoint)|
   #:|screenNumber(const QWidget*)|
   #:|screenNumber|
   #:|screenPos|
   #:|screen|
   #:|scrollBarWidgets|
   #:|scrollBarsEnabled|
   #:|scrollDirtyRegion|
   #:|scrollToAnchor|
   #:|scrollToBottom|
   #:|scrollToItem|
   #:|scrollToTop|
   #:|scrollTo|
   #:|scroll|
   #:|searchPaths.QDir|
   #:|searchPaths|
   #:|second|
   #:|secsTo|
   #:|sectionAt|
   #:|sectionAutoResize|
   #:|sectionClicked|
   #:|sectionCountChanged|
   #:|sectionCount|
   #:|sectionDoubleClicked|
   #:|sectionEntered|
   #:|sectionHandleDoubleClicked|
   #:|sectionMoved|
   #:|sectionPosition|
   #:|sectionPressed|
   #:|sectionResized|
   #:|sectionSizeHint|
   #:|sectionSize|
   #:|sectionText|
   #:|sectionViewportPosition|
   #:|sectionsAboutToBeRemoved|
   #:|sectionsHidden|
   #:|sectionsInserted|
   #:|sectionsMoved|
   #:|seek|
   #:|segmentStyle|
   #:|select(QItemSelection...)|
   #:|select(QModelIndex...)|
   #:|selectAll|
   #:|selectColumn|
   #:|selectFile|
   #:|selectNameFilter|
   #:|selectRow|
   #:|selectedColor|
   #:|selectedColumns|
   #:|selectedDate|
   #:|selectedFiles|
   #:|selectedFont|
   #:|selectedIndexes|
   #:|selectedItems|
   #:|selectedNameFilter|
   #:|selectedRanges|
   #:|selectedRows|
   #:|selectedText|
   #:|selected|
   #:|selectionArea|
   #:|selectionBehaviorOnRemove|
   #:|selectionBehavior|
   #:|selectionChanged|
   #:|selectionEnd|
   #:|selectionModel|
   #:|selectionMode|
   #:|selectionStart|
   #:|selection|
   #:|select|
   #:|sendEvent.QCoreApplication|
   #:|sendEvent|
   #:|sendPostedEvents.QCoreApplication|
   #:|senderObject|
   #:|sender|
   #:|separator.QDir|
   #:|separatorsCollapsible|
   #:|sessionId|
   #:|sessionKey|
   #:|setAccelerated|
   #:|setAcceleration|
   #:|setAccelerator|
   #:|setAcceptDrops|
   #:|setAcceptHoverEvents|
   #:|setAcceptMode|
   #:|setAcceptRichText|
   #:|setAcceptTouchEvents|
   #:|setAccepted(QGesture*...)|
   #:|setAccepted(Qt::GestureType...)|
   #:|setAcceptedMouseButtons|
   #:|setAccepted|
   #:|setAccessibleDescription|
   #:|setAccessibleName|
   #:|setAccessibleText|
   #:|setActionGroup|
   #:|setActivationOrder|
   #:|setActiveAction|
   #:|setActivePanel|
   #:|setActiveStack|
   #:|setActiveSubWindow|
   #:|setActiveWindow.QApplication|
   #:|setActiveWindow|
   #:|setActive|
   #:|setAlignment(QLayout*...)|
   #:|setAlignment(QWidget*...)|
   #:|setAlignment|
   #:|setAllColumnsShowFocus|
   #:|setAllPagesViewMode|
   #:|setAllowedAreas|
   #:|setAlphaF|
   #:|setAlpha|
   #:|setAlternatingRowColors|
   #:|setAmplitude|
   #:|setAnchorHref|
   #:|setAnchorNames|
   #:|setAnchor|
   #:|setAngle|
   #:|setAnimated|
   #:|setApplicationName.QCoreApplication|
   #:|setApplicationVersion.QCoreApplication|
   #:|setArrayIndex|
   #:|setArrowType|
   #:|setAttribute.QCoreApplication|
   #:|setAttribute|
   #:|setAuthority|
   #:|setAutoClose|
   #:|setAutoDefault|
   #:|setAutoDelete|
   #:|setAutoExclusive|
   #:|setAutoExpandDelay|
   #:|setAutoFillBackground|
   #:|setAutoFormatting|
   #:|setAutoRaise|
   #:|setAutoRepeatDelay|
   #:|setAutoRepeatInterval|
   #:|setAutoRepeat|
   #:|setAutoReset|
   #:|setAutoScrollMargin|
   #:|setAutoScroll|
   #:|setAutoSipEnabled|
   #:|setAxis(QVector3D)|
   #:|setAxis(Qt::Axis)|
   #:|setAxis|
   #:|setBackgroundBrush|
   #:|setBackgroundColor|
   #:|setBackgroundMode|
   #:|setBackgroundRole|
   #:|setBackgroundVisible|
   #:|setBackground|
   #:|setBar|
   #:|setBaseSize|
   #:|setBatchSize|
   #:|setBinMode|
   #:|setBit|
   #:|setBlockCharFormat|
   #:|setBlockFormat|
   #:|setBlueF|
   #:|setBlue|
   #:|setBlurHints|
   #:|setBlurRadius|
   #:|setBold|
   #:|setBorderBrush|
   #:|setBorderStyle|
   #:|setBorder|
   #:|setBottomMargin|
   #:|setBottomPadding|
   #:|setBottom|
   #:|setBoundingRect|
   #:|setBoundingRegionGranularity|
   #:|setBrush(QBrush)|
   #:|setBrush(Qt::BrushStyle)|
   #:|setBrushOrigin(QPoint)|
   #:|setBrushOrigin(QPointF)|
   #:|setBrushOrigin|
   #:|setBrush|
   #:|setBspTreeDepth|
   #:|setBuddy|
   #:|setBuffer|
   #:|setButtonSymbols|
   #:|setButtonText|
   #:|setButton|
   #:|setCacheEnabled|
   #:|setCacheLimit.QPixmapCache|
   #:|setCacheMode|
   #:|setCaching|
   #:|setCalendarPopup|
   #:|setCalendarWidget|
   #:|setCancelButtonText|
   #:|setCancelButton|
   #:|setCapStyle|
   #:|setCapitalization|
   #:|setCascadingSectionResizes|
   #:|setCaseSensitivity|
   #:|setCellPadding|
   #:|setCellSpacing|
   #:|setCellWidget|
   #:|setCenterButtons|
   #:|setCenterOnScroll|
   #:|setCenterPoint|
   #:|setCenter|
   #:|setCentralWidget|
   #:|setChangeFlags|
   #:|setCharFormat|
   #:|setCheckState|
   #:|setCheckable|
   #:|setChecked|
   #:|setChildIndicatorPolicy|
   #:|setChildMode|
   #:|setChildrenCollapsible|
   #:|setChild|
   #:|setCleanIcon|
   #:|setClean|
   #:|setClickable|
   #:|setClipPath|
   #:|setClipRect(QRect)|
   #:|setClipRect(QRect...)|
   #:|setClipRect(QRectF)|
   #:|setClipRect(QRectF...)|
   #:|setClipRect|
   #:|setClipRegion|
   #:|setClipping|
   #:|setCmykF|
   #:|setCmyk|
   #:|setCodecForCStrings.QTextCodec|
   #:|setCodecForLocale.QTextCodec|
   #:|setCodecForTr.QTextCodec|
   #:|setCodec|
   #:|setCollapsible|
   #:|setCollateCopies|
   #:|setColor(QColor)|
   #:|setColor(Qt::GlobalColor)|
   #:|setColorAt|
   #:|setColorCount|
   #:|setColorData|
   #:|setColorGroup|
   #:|setColorMode|
   #:|setColorSpec.QApplication|
   #:|setColorTable|
   #:|setColor|
   #:|setColumnAlignment|
   #:|setColumnCount|
   #:|setColumnFixedWidth|
   #:|setColumnHidden|
   #:|setColumnMaximumWidth|
   #:|setColumnMinimumWidth|
   #:|setColumnPreferredWidth|
   #:|setColumnSpacing|
   #:|setColumnStretchFactor|
   #:|setColumnStretch|
   #:|setColumnWidthConstraints|
   #:|setColumnWidths|
   #:|setColumnWidth|
   #:|setColumn|
   #:|setComboBoxEditable|
   #:|setComboBoxItems|
   #:|setCommitPage|
   #:|setCommitString|
   #:|setCompleter|
   #:|setCompletionColumn|
   #:|setCompletionMode|
   #:|setCompletionPrefix|
   #:|setCompletionRole|
   #:|setCompositionMode|
   #:|setConfirmOverwrite|
   #:|setContentsMargins|
   #:|setContextMenuPolicy|
   #:|setContextMenu|
   #:|setContext|
   #:|setControlType|
   #:|setCoordinateMode|
   #:|setCornerButtonEnabled|
   #:|setCornerWidget|
   #:|setCorner|
   #:|setCorrectionMode|
   #:|setCosmetic|
   #:|setCreator|
   #:|setCurrent.QDir|
   #:|setCurrentBlockState|
   #:|setCurrentBlockUserData|
   #:|setCurrentCell|
   #:|setCurrentCharFormat|
   #:|setCurrentColorGroup|
   #:|setCurrentColor|
   #:|setCurrentFont|
   #:|setCurrentIndex|
   #:|setCurrentItem|
   #:|setCurrentModelIndex|
   #:|setCurrentPage|
   #:|setCurrentRow|
   #:|setCurrentSectionIndex|
   #:|setCurrentSection|
   #:|setCurrentTab|
   #:|setCurrentTime|
   #:|setCurrentWidget|
   #:|setCursorFlashTime.QApplication|
   #:|setCursorPosition|
   #:|setCursorWidth|
   #:|setCursor|
   #:|setCurveShape|
   #:|setCurveThreshold|
   #:|setCustomColor.QColorDialog|
   #:|setDashOffset|
   #:|setDashPattern(QVector<qreal>)|
   #:|setDashPattern(Qt::PenStyle)|
   #:|setDashPattern|
   #:|setData|
   #:|setDateEditAcceptDelay|
   #:|setDateEditEnabled|
   #:|setDateRange|
   #:|setDateTextFormat|
   #:|setDateTimeRange|
   #:|setDateTime|
   #:|setDate|
   #:|setDecMode|
   #:|setDecimals|
   #:|setDecodingFunction.QFile|
   #:|setDefault.QLocale|
   #:|setDefaultAction|
   #:|setDefaultAlignment|
   #:|setDefaultButton(QMessageBox::StandardButton)|
   #:|setDefaultButton(QPushButton*)|
   #:|setDefaultButton|
   #:|setDefaultDropAction|
   #:|setDefaultFactory.QItemEditorFactory|
   #:|setDefaultFont|
   #:|setDefaultFormat.QSettings|
   #:|setDefaultProperty|
   #:|setDefaultSectionSize|
   #:|setDefaultState|
   #:|setDefaultStyleSheet|
   #:|setDefaultSuffix|
   #:|setDefaultTextColor|
   #:|setDefaultTextOption|
   #:|setDefaultUp|
   #:|setDefaultWidget|
   #:|setDefault|
   #:|setDescription|
   #:|setDesktopSettingsAware.QApplication|
   #:|setDetailedText|
   #:|setDigitCount|
   #:|setDirection|
   #:|setDirectory(QDir)|
   #:|setDirectory(QString)|
   #:|setDirectory|
   #:|setDirtyRegion|
   #:|setDisabled|
   #:|setDiscardCommand|
   #:|setDisplayFormat|
   #:|setDocName|
   #:|setDockNestingEnabled|
   #:|setDockOptions|
   #:|setDocumentLayout|
   #:|setDocumentMargin|
   #:|setDocumentMode|
   #:|setDocumentTitle|
   #:|setDocument|
   #:|setDotsPerMeterX|
   #:|setDotsPerMeterY|
   #:|setDoubleClickInterval.QApplication|
   #:|setDoubleDecimals|
   #:|setDoubleMaximum|
   #:|setDoubleMinimum|
   #:|setDoubleRange|
   #:|setDoubleSidedPrinting|
   #:|setDoubleValue|
   #:|setDown|
   #:|setDragCursor|
   #:|setDragDropMode|
   #:|setDragDropOverwriteMode|
   #:|setDragEnabled|
   #:|setDragMode|
   #:|setDrawBase|
   #:|setDropAction|
   #:|setDropEnabled|
   #:|setDropIndicatorShown|
   #:|setDuplex|
   #:|setDuplicatesEnabled|
   #:|setDuration|
   #:|setDynamicSortFilter|
   #:|setEasingCurve|
   #:|setEchoMode|
   #:|setEditText|
   #:|setEditTriggers|
   #:|setEditable|
   #:|setEditorData|
   #:|setEffectEnabled.QApplication|
   #:|setElementPositionAt|
   #:|setElideMode|
   #:|setEmptyLabel|
   #:|setEnabled|
   #:|setEncodedFragment|
   #:|setEncodedHost|
   #:|setEncodedPassword|
   #:|setEncodedPath|
   #:|setEncodedQuery|
   #:|setEncodedUrl|
   #:|setEncodedUserName|
   #:|setEncodingFunction.QFile|
   #:|setEndFrame|
   #:|setEndValue|
   #:|setErrorState|
   #:|setErrorString|
   #:|setEscapeButton(QAbstractButton*)|
   #:|setEscapeButton(QMessageBox::StandardButton)|
   #:|setEscapeButton|
   #:|setEventSource|
   #:|setEventType|
   #:|setExclusive|
   #:|setExpanded|
   #:|setExpanding|
   #:|setExpandsOnDoubleClick|
   #:|setExtraSelections|
   #:|setFacingPagesViewMode|
   #:|setFallbacksEnabled|
   #:|setFamily|
   #:|setFeatures|
   #:|setFieldGrowthPolicy|
   #:|setField|
   #:|setFile(QFile)|
   #:|setFile(QString)|
   #:|setFileMode|
   #:|setFileNameAndVersion(QString,QString)|
   #:|setFileNameAndVersion(QString,int)|
   #:|setFileName|
   #:|setFile|
   #:|setFillRule|
   #:|setFilterCaseSensitivity|
   #:|setFilterFixedString|
   #:|setFilterKeyColumn|
   #:|setFilterRegExp(QRegExp)|
   #:|setFilterRegExp(QString)|
   #:|setFilterRegExp|
   #:|setFilterRole|
   #:|setFilterWildcard|
   #:|setFiltersChildEvents|
   #:|setFilter|
   #:|setFinalPage|
   #:|setFinalStop|
   #:|setFirstColumnSpanned|
   #:|setFirstDayOfWeek|
   #:|setFirstItemColumnSpanned|
   #:|setFixedHeight|
   #:|setFixedPitch|
   #:|setFixedSize|
   #:|setFixedWidth|
   #:|setFlags|
   #:|setFlag|
   #:|setFlat|
   #:|setFloatable|
   #:|setFloating|
   #:|setFlow|
   #:|setFocalPoint|
   #:|setFocusItem|
   #:|setFocusPolicy|
   #:|setFocusProxy|
   #:|setFocusWidget|
   #:|setFocus|
   #:|setFont.QApplication|
   #:|setFont.QToolTip|
   #:|setFontCapitalization|
   #:|setFontEmbeddingEnabled|
   #:|setFontFamily|
   #:|setFontFilters|
   #:|setFontFixedPitch|
   #:|setFontItalic|
   #:|setFontKerning|
   #:|setFontLetterSpacing|
   #:|setFontOverline|
   #:|setFontPointSize|
   #:|setFontStrikeOut|
   #:|setFontStyleHint|
   #:|setFontStyleStrategy|
   #:|setFontUnderline|
   #:|setFontWeight|
   #:|setFontWordSpacing|
   #:|setFont|
   #:|setForegroundBrush|
   #:|setForegroundRole|
   #:|setForeground|
   #:|setFormAlignment|
   #:|setFormat(int,int,QColor)|
   #:|setFormat(int,int,QFont)|
   #:|setFormat(int,int,QTextCharFormat)|
   #:|setFormat|
   #:|setFragment|
   #:|setFrameFormat|
   #:|setFrameRange|
   #:|setFrameRect|
   #:|setFrameShadow|
   #:|setFrameShape|
   #:|setFrameStyle|
   #:|setFrame|
   #:|setFromTo|
   #:|setFullPage|
   #:|setGeometry|
   #:|setGestureCancelPolicy|
   #:|setGlobalRestorePolicy|
   #:|setGlobalStrut.QApplication|
   #:|setGraphicsEffect|
   #:|setGraphicsItem|
   #:|setGraphicsSystem.QApplication|
   #:|setGreenF|
   #:|setGreen|
   #:|setGridSize|
   #:|setGridStyle|
   #:|setGridVisible|
   #:|setGroup|
   #:|setHMS|
   #:|setHeaderData|
   #:|setHeaderHidden|
   #:|setHeaderItem|
   #:|setHeaderLabels|
   #:|setHeaderLabel|
   #:|setHeaderRowCount|
   #:|setHeaderTextFormat|
   #:|setHeader|
   #:|setHeight(QTextLength)|
   #:|setHeight(qreal)|
   #:|setHeightForWidth|
   #:|setHeight|
   #:|setHelp|
   #:|setHexMode|
   #:|setHidden|
   #:|setHighlightSections|
   #:|setHistoryType|
   #:|setHistory|
   #:|setHitTestPath|
   #:|setHorizontalHeaderFormat|
   #:|setHorizontalHeaderItem|
   #:|setHorizontalHeaderLabels|
   #:|setHorizontalHeader|
   #:|setHorizontalPolicy|
   #:|setHorizontalScrollBarPolicy|
   #:|setHorizontalScrollBar|
   #:|setHorizontalScrollMode|
   #:|setHorizontalSpacing|
   #:|setHorizontalStretch|
   #:|setHost|
   #:|setHotSpot|
   #:|setHslF|
   #:|setHsl|
   #:|setHsvF|
   #:|setHsv|
   #:|setHtml|
   #:|setIconPixmap|
   #:|setIconProvider|
   #:|setIconSize|
   #:|setIconText|
   #:|setIconVisibleInMenu|
   #:|setIcon|
   #:|setIdnWhitelist.QUrl|
   #:|setId|
   #:|setImageData|
   #:|setImage|
   #:|setIndentWidth|
   #:|setIndentation|
   #:|setIndent|
   #:|setIndexWidget|
   #:|setIndex|
   #:|setInformativeText|
   #:|setIniCodec(QTextCodec*)|
   #:|setIniCodec(const char*)|
   #:|setIniCodec|
   #:|setInitialState|
   #:|setInputContext|
   #:|setInputMask|
   #:|setInputMethodHints|
   #:|setInputMode|
   #:|setInsertPolicy|
   #:|setIntMaximum|
   #:|setIntMinimum|
   #:|setIntRange|
   #:|setIntStep|
   #:|setIntValue|
   #:|setInteractive|
   #:|setInterval|
   #:|setInvertedAppearance|
   #:|setInvertedControls|
   #:|setItalic|
   #:|setItemData|
   #:|setItemDelegateForColumn|
   #:|setItemDelegateForRow|
   #:|setItemDelegate|
   #:|setItemEditorFactory|
   #:|setItemEnabled|
   #:|setItemIcon|
   #:|setItemIndexMethod|
   #:|setItemPrototype|
   #:|setItemSpacing|
   #:|setItemText|
   #:|setItemToolTip|
   #:|setItemWidget|
   #:|setItemsExpandable|
   #:|setItem|
   #:|setJoinStyle|
   #:|setKerning|
   #:|setKeyboardInputInterval.QApplication|
   #:|setKeyboardPageStep|
   #:|setKeyboardSingleStep|
   #:|setKeyboardTracking|
   #:|setKey|
   #:|setLabelAlignment|
   #:|setLabelText|
   #:|setLabel|
   #:|setLandscapeOrientation|
   #:|setLastCenterPoint|
   #:|setLastOffset|
   #:|setLastRotationAngle|
   #:|setLastScaleFactor|
   #:|setLayoutDirection.QApplication|
   #:|setLayoutDirection|
   #:|setLayoutMode|
   #:|setLayout|
   #:|setLazyChildCount|
   #:|setLeadingIncluded|
   #:|setLeftMargin|
   #:|setLeftPadding|
   #:|setLeft|
   #:|setLetterSpacing|
   #:|setLibraryPaths.QCoreApplication|
   #:|setLineCount|
   #:|setLineEdit|
   #:|setLineWidth|
   #:|setLineWrapColumnOrWidth|
   #:|setLineWrapMode|
   #:|setLine|
   #:|setLoadHints|
   #:|setLocale|
   #:|setLoopCount|
   #:|setLoops|
   #:|setManagerProperty(QString,QString)|
   #:|setManagerProperty(QString,QStringList)|
   #:|setMargin|
   #:|setMask(QBitmap)|
   #:|setMask(QRegion)|
   #:|setMask|
   #:|setMatrix|
   #:|setMaxCount|
   #:|setMaxLength|
   #:|setMaxVisibleItems|
   #:|setMaximumBlockCount|
   #:|setMaximumDateTime|
   #:|setMaximumDate|
   #:|setMaximumHeight|
   #:|setMaximumSize|
   #:|setMaximumTime|
   #:|setMaximumWidth|
   #:|setMaximum|
   #:|setMenuBar|
   #:|setMenuRole|
   #:|setMenuWidget|
   #:|setMenu|
   #:|setMetaInformation|
   #:|setMidLineWidth|
   #:|setMimeData|
   #:|setMinMax|
   #:|setMinimal|
   #:|setMinimumContentsLength|
   #:|setMinimumDateTime|
   #:|setMinimumDate|
   #:|setMinimumDuration|
   #:|setMinimumHeight|
   #:|setMinimumSectionSize|
   #:|setMinimumSize|
   #:|setMinimumTime|
   #:|setMinimumWidth|
   #:|setMinimum|
   #:|setMiterLimit|
   #:|setModal|
   #:|setModelColumn|
   #:|setModelData|
   #:|setModelSorting|
   #:|setModel|
   #:|setMode|
   #:|setModified|
   #:|setModifierMask|
   #:|setMouseTracking|
   #:|setMovable|
   #:|setMovement|
   #:|setMovie|
   #:|setNameFilterDetailsVisible|
   #:|setNameFilterDisables|
   #:|setNameFilters|
   #:|setNameFilter|
   #:|setNamedColor|
   #:|setName|
   #:|setNativeMenuBar|
   #:|setNavigationBarVisible|
   #:|setNonBreakableLines|
   #:|setNotation|
   #:|setNotchTarget|
   #:|setNotchesVisible|
   #:|setNum(double)|
   #:|setNum(int)|
   #:|setNumColumns|
   #:|setNumCopies|
   #:|setNumberOptions|
   #:|setNum|
   #:|setObjectIndex|
   #:|setObjectName|
   #:|setObjectType|
   #:|setOctMode|
   #:|setOffset(QPointF)|
   #:|setOffset(qreal)|
   #:|setOffsetToLastSection|
   #:|setOffsetToSectionPosition|
   #:|setOffset|
   #:|setOkButtonText|
   #:|setOn|
   #:|setOpacityMask|
   #:|setOpacity|
   #:|setOpaqueResize|
   #:|setOpenExternalLinks|
   #:|setOpenLinks|
   #:|setOpenMode|
   #:|setOptimizationFlags|
   #:|setOptimizationFlag|
   #:|setOptionTabs|
   #:|setOptions|
   #:|setOption|
   #:|setOrganizationDomain.QCoreApplication|
   #:|setOrganizationName.QCoreApplication|
   #:|setOrientation|
   #:|setOriginCorner|
   #:|setOrigin|
   #:|setOutputFileName|
   #:|setOutputFormat|
   #:|setOverline|
   #:|setOverrideCursor.QApplication|
   #:|setOvershoot|
   #:|setOverwriteMode|
   #:|setOwnedByLayout|
   #:|setPadding|
   #:|setPageBreakPolicy|
   #:|setPageMargins|
   #:|setPageOrder|
   #:|setPageSize|
   #:|setPageStep|
   #:|setPage|
   #:|setPaintDevice|
   #:|setPalette.QApplication|
   #:|setPalette.QToolTip|
   #:|setPalette|
   #:|setPanelModality|
   #:|setPaperSize|
   #:|setPaperSource|
   #:|setParentItem|
   #:|setParentLayoutItem|
   #:|setParent|
   #:|setPassword|
   #:|setPath.QSettings|
   #:|setPath|
   #:|setPatternSyntax|
   #:|setPattern|
   #:|setPaused|
   #:|setPen(QColor)|
   #:|setPen(QPen)|
   #:|setPen(Qt::PenStyle)|
   #:|setPen|
   #:|setPeriod|
   #:|setPermissions.QFile|
   #:|setPermissions|
   #:|setPicture|
   #:|setPixelSize|
   #:|setPixel|
   #:|setPixmap|
   #:|setPlainText|
   #:|setPointSizeF|
   #:|setPointSize|
   #:|setPolygon|
   #:|setPopupMode|
   #:|setPopup|
   #:|setPortraitOrientation|
   #:|setPort|
   #:|setPos.QCursor|
   #:|setPositionForIndex|
   #:|setPosition|
   #:|setPos|
   #:|setPreeditArea|
   #:|setPreferredHeight|
   #:|setPreferredSize|
   #:|setPreferredWidth|
   #:|setPrefix|
   #:|setPreviewWidget|
   #:|setPrintProgram|
   #:|setPrintRange|
   #:|setPrinterName|
   #:|setPriority|
   #:|setProcessChannelMode|
   #:|setProcessEnvironment|
   #:|setProcessState|
   #:|setProperty(int,QVariant)|
   #:|setProperty(int,QVector<QTextLength>)|
   #:|setPropertyName|
   #:|setProperty|
   #:|setProxyModel|
   #:|setQueryDelimiters|
   #:|setQuitOnLastWindowClosed.QApplication|
   #:|setRadius|
   #:|setRangeSelected|
   #:|setRange|
   #:|setRawMode|
   #:|setRawName|
   #:|setReadChannel|
   #:|setReadOnly|
   #:|setRects|
   #:|setRect|
   #:|setRedF|
   #:|setRed|
   #:|setRegExp|
   #:|setRenderHints|
   #:|setRenderHint|
   #:|setRepeatAction|
   #:|setResizeAnchor|
   #:|setResizeGripsVisible|
   #:|setResizeMode|
   #:|setResolution|
   #:|setResolveSymlinks|
   #:|setRestartCommand|
   #:|setRestartHint|
   #:|setResult|
   #:|setRevision|
   #:|setRgbF|
   #:|setRgba|
   #:|setRgb|
   #:|setRightMargin|
   #:|setRightPadding|
   #:|setRight|
   #:|setRootIndex|
   #:|setRootIsDecorated|
   #:|setRootModelIndex|
   #:|setRootObject.QAccessible|
   #:|setRootPath|
   #:|setRotationAngle|
   #:|setRotation|
   #:|setRowAlignment|
   #:|setRowCount|
   #:|setRowFixedHeight|
   #:|setRowHeight|
   #:|setRowHidden|
   #:|setRowMaximumHeight|
   #:|setRowMinimumHeight|
   #:|setRowPreferredHeight|
   #:|setRowSpacing|
   #:|setRowStretchFactor|
   #:|setRowStretch|
   #:|setRowWrapPolicy|
   #:|setRow|
   #:|setRubberBandSelectionMode|
   #:|setRubberBand|
   #:|setScalar|
   #:|setScaleFactor|
   #:|setScaledContents|
   #:|setScaledSize|
   #:|setScale|
   #:|setSceneRect|
   #:|setScene|
   #:|setScheme|
   #:|setScrollBarsEnabled|
   #:|setSearchPaths.QDir|
   #:|setSearchPaths|
   #:|setSectionHidden|
   #:|setSegmentStyle|
   #:|setSelectable|
   #:|setSelectedDate|
   #:|setSelectedSection|
   #:|setSelected|
   #:|setSelectionArea|
   #:|setSelectionBehaviorOnRemove|
   #:|setSelectionBehavior|
   #:|setSelectionModel|
   #:|setSelectionMode|
   #:|setSelectionRectVisible|
   #:|setSelection|
   #:|setSenderObject|
   #:|setSeparatorsCollapsible|
   #:|setSeparator|
   #:|setShapeMode|
   #:|setShape|
   #:|setShortcutAutoRepeat|
   #:|setShortcutContext|
   #:|setShortcutEnabled|
   #:|setShortcuts(QKeySequence::StandardKey)|
   #:|setShortcuts(QList<QKeySequence>)|
   #:|setShortcuts|
   #:|setShortcut|
   #:|setShowGrid|
   #:|setShown|
   #:|setSidebarUrls|
   #:|setSignal|
   #:|setSinglePageViewMode|
   #:|setSingleShot|
   #:|setSingleStep|
   #:|setSizeAdjustPolicy|
   #:|setSizeConstraint|
   #:|setSizeGripEnabled|
   #:|setSizeHint|
   #:|setSizeIncrement|
   #:|setSizePolicy|
   #:|setSizes|
   #:|setSliderDown|
   #:|setSliderPosition|
   #:|setSmallDecimalPoint|
   #:|setSoftKeyRole|
   #:|setSortCacheEnabled|
   #:|setSortCaseSensitivity|
   #:|setSortIndicatorShown|
   #:|setSortIndicator|
   #:|setSortLocaleAware|
   #:|setSortRole|
   #:|setSortingEnabled|
   #:|setSorting|
   #:|setSourceModel|
   #:|setSource|
   #:|setSpacing|
   #:|setSpanAngle|
   #:|setSpan|
   #:|setSpecialValueText|
   #:|setSpeed|
   #:|setSpread|
   #:|setStackingMode|
   #:|setStack|
   #:|setStandardButtons|
   #:|setStandardColor.QColorDialog|
   #:|setStandardErrorFile|
   #:|setStandardInputFile|
   #:|setStandardOutputFile|
   #:|setStandardOutputProcess|
   #:|setStartAngle|
   #:|setStartCenterPoint|
   #:|setStartDragDistance.QApplication|
   #:|setStartDragTime.QApplication|
   #:|setStartFrame|
   #:|setStartId|
   #:|setStartValue|
   #:|setStart|
   #:|setState|
   #:|setStatusBar|
   #:|setStatusTip|
   #:|setStickyFocus|
   #:|setStops|
   #:|setStrength|
   #:|setStretchFactor(QLayout*...)|
   #:|setStretchFactor(QWidget*...)|
   #:|setStretchFactor|
   #:|setStretchLastSection|
   #:|setStretch|
   #:|setStrikeOut|
   #:|setStringList|
   #:|setStyle(QString).QApplication|
   #:|setStyle(QStyle*).QApplication|
   #:|setStyle.QApplication|
   #:|setStyleHint|
   #:|setStyleSheet|
   #:|setStyleStrategy|
   #:|setStyle|
   #:|setSubTitleFormat|
   #:|setSubTitle|
   #:|setSubmitPolicy|
   #:|setSuffix|
   #:|setSupportedDragActions|
   #:|setSwipeAngle|
   #:|setSystemMenu|
   #:|setTabArray|
   #:|setTabBar|
   #:|setTabButton|
   #:|setTabChangesFocus|
   #:|setTabData|
   #:|setTabEnabled|
   #:|setTabIcon|
   #:|setTabKeyNavigation|
   #:|setTabOrder.QGraphicsWidget|
   #:|setTabOrder.QWidget|
   #:|setTabPositions|
   #:|setTabPosition|
   #:|setTabShape|
   #:|setTabStopWidth|
   #:|setTabStop|
   #:|setTabTextColor|
   #:|setTabText|
   #:|setTabToolTip|
   #:|setTabWhatsThis|
   #:|setTabsClosable|
   #:|setTargetObject|
   #:|setTargetStates|
   #:|setTargetState|
   #:|setTearOffEnabled|
   #:|setTextAlignment|
   #:|setTextBackgroundColor|
   #:|setTextColor|
   #:|setTextCursor|
   #:|setTextDirection|
   #:|setTextEchoMode|
   #:|setTextElideMode|
   #:|setTextFormat|
   #:|setTextIndent|
   #:|setTextInteractionFlags|
   #:|setTextMargins|
   #:|setTextModeEnabled|
   #:|setTextOption|
   #:|setTextOutline|
   #:|setTextPosition|
   #:|setTextValue|
   #:|setTextVisible|
   #:|setTextWidth|
   #:|setTextureImage|
   #:|setTexture|
   #:|setText|
   #:|setThemeName.QIcon|
   #:|setThemeSearchPaths.QIcon|
   #:|setTickInterval|
   #:|setTickPosition|
   #:|setTimeRange|
   #:|setTimeSpec|
   #:|setTime_t|
   #:|setTime|
   #:|setTitleBarWidget|
   #:|setTitleFormat|
   #:|setTitle|
   #:|setToIdentity|
   #:|setToolButtonStyle|
   #:|setToolTip|
   #:|setTopMargin|
   #:|setTopPadding|
   #:|setTop|
   #:|setTotalChangeFlags|
   #:|setTotalRotationAngle|
   #:|setTotalScaleFactor|
   #:|setTracking|
   #:|setTransformOriginPoint|
   #:|setTransformationAnchor|
   #:|setTransformationMode|
   #:|setTransformations|
   #:|setTransform|
   #:|setTristate|
   #:|setType|
   #:|setUnderlineColor|
   #:|setUnderlineStyle|
   #:|setUnderline|
   #:|setUndoLimit|
   #:|setUndoRedoEnabled|
   #:|setUnifiedTitleAndToolBarOnMac|
   #:|setUniformItemSizes|
   #:|setUniformRowHeights|
   #:|setUpdateInterval|
   #:|setUpdatesEnabled|
   #:|setUrls|
   #:|setUrl|
   #:|setUseDesignMetrics|
   #:|setUseHighlightColors|
   #:|setUserData|
   #:|setUserInfo|
   #:|setUserName|
   #:|setUserState|
   #:|setUsesBigPixmap|
   #:|setUsesScrollButtons|
   #:|setUsesTextLabel|
   #:|setValidator|
   #:|setValue|
   #:|setVector|
   #:|setVerticalAlignment|
   #:|setVerticalHeaderFormat|
   #:|setVerticalHeaderItem|
   #:|setVerticalHeaderLabels|
   #:|setVerticalHeader|
   #:|setVerticalPolicy|
   #:|setVerticalScrollBarPolicy|
   #:|setVerticalScrollBar|
   #:|setVerticalScrollMode|
   #:|setVerticalSpacing|
   #:|setVerticalStretch|
   #:|setViewMode|
   #:|setViewTransformEnabled|
   #:|setViewportMargins|
   #:|setViewportUpdateMode|
   #:|setViewport|
   #:|setView|
   #:|setVisible|
   #:|setVisualNavigation|
   #:|setWeekdayTextFormat|
   #:|setWeight|
   #:|setWhatsThis|
   #:|setWheelScrollLines.QApplication|
   #:|setWidgetResizable|
   #:|setWidget|
   #:|setWidth(QTextLength)|
   #:|setWidth(qreal)|
   #:|setWidthF|
   #:|setWidth|
   #:|setWindowFilePath|
   #:|setWindowFlags|
   #:|setWindowFrameMargins|
   #:|setWindowIcon.QApplication|
   #:|setWindowIconText|
   #:|setWindowIcon|
   #:|setWindowModality|
   #:|setWindowModified|
   #:|setWindowOpacity|
   #:|setWindowRole|
   #:|setWindowState|
   #:|setWindowTitle|
   #:|setWindow|
   #:|setWizardStyle|
   #:|setWordSpacing|
   #:|setWordWrapMode|
   #:|setWordWrap|
   #:|setWorkingDirectory|
   #:|setWorldMatrixEnabled|
   #:|setWorldTransform|
   #:|setWrapAround|
   #:|setWrapMode|
   #:|setWrapping|
   #:|setWritingSystem|
   #:|setW|
   #:|setXOffset|
   #:|setXScale|
   #:|setX|
   #:|setYOffset|
   #:|setYScale|
   #:|setY|
   #:|setZScale|
   #:|setZValue|
   #:|setZoomFactor|
   #:|setZoomMode|
   #:|setZ|
   #:|setupViewport|
   #:|shadow|
   #:|shapeMode|
   #:|shape|
   #:|shear|
   #:|shortDayName.QDate|
   #:|shortMonthName.QDate|
   #:|shortcutContext|
   #:|shortcutId|
   #:|shortcuts|
   #:|shortcut|
   #:|showColumn|
   #:|showDropIndicator|
   #:|showExtension|
   #:|showFullScreen|
   #:|showGrid|
   #:|showMaximized|
   #:|showMenu|
   #:|showMessage|
   #:|showMinimized|
   #:|showNextMonth|
   #:|showNextYear|
   #:|showNormal|
   #:|showPage|
   #:|showPopup|
   #:|showPreviousMonth|
   #:|showPreviousYear|
   #:|showRow|
   #:|showSection|
   #:|showSelectedDate|
   #:|showShaded|
   #:|showStatusText|
   #:|showSystemMenu|
   #:|showText.QToolTip|
   #:|showText.QWhatsThis|
   #:|showToday|
   #:|show|
   #:|sibling|
   #:|sidebarUrls|
   #:|signalsBlocked|
   #:|signal|
   #:|simplified|
   #:|singleStep|
   #:|sizeAdjustPolicy|
   #:|sizeConstraint|
   #:|sizeFromContents|
   #:|sizeHintChanged|
   #:|sizeHintForColumn|
   #:|sizeHintForIndex|
   #:|sizeHintForRow|
   #:|sizeHint|
   #:|sizeIncrement|
   #:|sizePolicy|
   #:|sizes|
   #:|size|
   #:|slerp.QQuaternion|
   #:|sliderMoved|
   #:|sliderPositionFromValue.QStyle|
   #:|sliderPosition|
   #:|sliderPressed|
   #:|sliderReleased|
   #:|sliderValueFromPosition.QStyle|
   #:|slopeAtPercent|
   #:|smallDecimalPoint|
   #:|smoothSizes|
   #:|softKeyRole|
   #:|sortByColumn|
   #:|sortCaseSensitivity|
   #:|sortChildren|
   #:|sortColumn|
   #:|sortIndicatorChanged|
   #:|sortIndicatorOrder|
   #:|sortIndicatorSection|
   #:|sortItems|
   #:|sortOrder|
   #:|sortRole|
   #:|sorting|
   #:|sort|
   #:|sourceBoundingRect|
   #:|sourceChanged|
   #:|sourceIsPixmap|
   #:|sourceModel|
   #:|sourceState|
   #:|source|
   #:|spacerItem|
   #:|spacing|
   #:|spanAngle|
   #:|span|
   #:|specialValueText|
   #:|spec|
   #:|speed|
   #:|split.QItemSelection|
   #:|splitCell|
   #:|splitDockWidget|
   #:|splitPath|
   #:|splitterMoved|
   #:|splitter|
   #:|spontaneous|
   #:|spread|
   #:|squareToQuad.QTransform|
   #:|stackBefore|
   #:|stackUnder|
   #:|stackingMode|
   #:|stacks|
   #:|stack|
   #:|standaloneDayName|
   #:|standaloneMonthName|
   #:|standardButtons|
   #:|standardButton|
   #:|standardFormat|
   #:|standardIconImplementation|
   #:|standardIcon|
   #:|standardPalette|
   #:|standardPixmap|
   #:|standardSizes.QFontDatabase|
   #:|start(QString,QProcess::OpenMode)|
   #:|start(QString,QStringList)|
   #:|startAngle|
   #:|startCenterPoint|
   #:|startDetached.QProcess|
   #:|startDragDistance.QApplication|
   #:|startDragTime.QApplication|
   #:|startFrame|
   #:|startId|
   #:|startTimer|
   #:|startValue|
   #:|started|
   #:|startingUp.QCoreApplication|
   #:|start|
   #:|stateChanged|
   #:|state|
   #:|staticInstances.QPluginLoader|
   #:|staticMetaObject.QObject|
   #:|statusBar|
   #:|statusTip|
   #:|status|
   #:|stepBy|
   #:|stepDown|
   #:|stepUp|
   #:|stickyFocus|
   #:|stopped|
   #:|stops|
   #:|stop|
   #:|storageLocation.QDesktopServices|
   #:|strengthChanged|
   #:|strength|
   #:|stretchFactor|
   #:|stretchLastSection|
   #:|stretchSectionCount|
   #:|stretch|
   #:|strikeOutPos|
   #:|strikeOut|
   #:|stringList|
   #:|stringProperty|
   #:|string|
   #:|strokePath|
   #:|style.QApplication|
   #:|styleHint|
   #:|styleSheet|
   #:|styleStrategy|
   #:|styleString(QFont)|
   #:|styleString(QFontInfo)|
   #:|styleString|
   #:|styles|
   #:|style|
   #:|subControlRect|
   #:|subElementRect|
   #:|subTitleFormat|
   #:|subTitle|
   #:|subWidgetRect|
   #:|subWindowActivated|
   #:|subWindowList|
   #:|submitPolicy|
   #:|submit|
   #:|substitute.QFont|
   #:|substitutes.QFont|
   #:|substitutions.QFont|
   #:|subtractStep|
   #:|subtracted|
   #:|suffix|
   #:|superClass|
   #:|supportedDocumentFormats.QTextDocumentWriter|
   #:|supportedDragActions|
   #:|supportedDropActions|
   #:|supportedFormats.QMovie|
   #:|supportedPaperSizes|
   #:|supportedResolutions|
   #:|supportsFindBuffer|
   #:|supportsMessages.QSystemTrayIcon|
   #:|supportsSelection|
   #:|supportsThreadedFontRendering.QFontDatabase|
   #:|swapSections|
   #:|swipeAngle|
   #:|symLinkTarget.QFile|
   #:|symLinkTarget|
   #:|syncX.QApplication|
   #:|sync|
   #:|system.QLocale|
   #:|systemEnvironment.QProcessEnvironment|
   #:|systemEnvironment.QProcess|
   #:|systemMenu|
   #:|tabArray|
   #:|tabAt|
   #:|tabBar|
   #:|tabButton|
   #:|tabChangesFocus|
   #:|tabCloseRequested|
   #:|tabData|
   #:|tabIcon|
   #:|tabKeyNavigation|
   #:|tabMoved|
   #:|tabPositions|
   #:|tabPosition|
   #:|tabRect|
   #:|tabShape|
   #:|tabStopWidth|
   #:|tabStop|
   #:|tabTextColor|
   #:|tabText|
   #:|tabToolTip|
   #:|tabWhatsThis|
   #:|tabifiedDockWidgets|
   #:|tabifyDockWidget|
   #:|tableCellFormatIndex|
   #:|tableWidget|
   #:|tabsClosable|
   #:|takeAnimation|
   #:|takeAt|
   #:|takeChildren|
   #:|takeChild|
   #:|takeColumn|
   #:|takeHorizontalHeaderItem|
   #:|takeItem|
   #:|takeRow|
   #:|takeTopLevelItem|
   #:|takeVerticalHeaderItem|
   #:|takeWidget|
   #:|tangentialPressure|
   #:|targetChanged|
   #:|targetObject|
   #:|targetStates|
   #:|targetState|
   #:|target|
   #:|temp.QDir|
   #:|tempPath.QDir|
   #:|terminate|
   #:|testAttribute.QCoreApplication|
   #:|testAttribute|
   #:|testBit|
   #:|testOption|
   #:|testRenderHint|
   #:|text(QClipboard::Mode)|
   #:|text(QString&)|
   #:|text.QToolTip|
   #:|textAlignment|
   #:|textBackgroundColor|
   #:|textChanged|
   #:|textColor|
   #:|textCursor|
   #:|textDirection|
   #:|textEchoMode|
   #:|textEdited|
   #:|textElideMode|
   #:|textFormat|
   #:|textFromValue|
   #:|textIndent|
   #:|textInteractionFlags|
   #:|textKeys|
   #:|textLength|
   #:|textList|
   #:|textMargins|
   #:|textOption|
   #:|textOutline|
   #:|textStart|
   #:|textValueChanged|
   #:|textValueSelected|
   #:|textValue|
   #:|textWidth|
   #:|textureImage|
   #:|texture|
   #:|text|
   #:|themeName.QIcon|
   #:|themeSearchPaths.QIcon|
   #:|thread|
   #:|tickInterval|
   #:|tickPosition|
   #:|tightBoundingRect|
   #:|tileSubWindows|
   #:|tile|
   #:|timeChanged|
   #:|timeFormat|
   #:|timeSpec|
   #:|timeout|
   #:|timerId|
   #:|time|
   #:|tip|
   #:|titleBarWidget|
   #:|titleFormat|
   #:|title|
   #:|toAce.QUrl|
   #:|toAffine|
   #:|toBitArray|
   #:|toBlockFormat|
   #:|toBool|
   #:|toByteArray|
   #:|toCharFormat|
   #:|toChar|
   #:|toCmyk|
   #:|toDate(QString,QLocale::FormatType)|
   #:|toDate(QString,QString)|
   #:|toDateTime(QString,QLocale::FormatType)|
   #:|toDateTime(QString,QString)|
   #:|toDateTime|
   #:|toDate|
   #:|toDouble|
   #:|toEncoded|
   #:|toEnd|
   #:|toFillPolygon(QMatrix)|
   #:|toFillPolygon(QTransform)|
   #:|toFillPolygons(QMatrix)|
   #:|toFillPolygons(QTransform)|
   #:|toFillPolygons|
   #:|toFillPolygon|
   #:|toFirst|
   #:|toFloat|
   #:|toFrameFormat|
   #:|toGraphicsObject|
   #:|toHsl|
   #:|toHsv|
   #:|toHtml|
   #:|toImageFormat|
   #:|toImage|
   #:|toInt|
   #:|toJulianDay|
   #:|toLast|
   #:|toLineF|
   #:|toLine|
   #:|toListFormat|
   #:|toLocalFile|
   #:|toLocalTime|
   #:|toLocale|
   #:|toLongLong|
   #:|toNativeSeparators.QDir|
   #:|toNextBoundary|
   #:|toNext|
   #:|toPage|
   #:|toPercentEncoding.QUrl|
   #:|toPlainText|
   #:|toPointF|
   #:|toPoint|
   #:|toPreviousBoundary|
   #:|toPrevious|
   #:|toReal|
   #:|toRectF|
   #:|toRect|
   #:|toRegExp|
   #:|toReversed|
   #:|toRgb|
   #:|toShort|
   #:|toSizeF|
   #:|toSize|
   #:|toStart|
   #:|toString(QDate)|
   #:|toString(QDate,QLocale::FormatType)|
   #:|toString(QDate,QString)|
   #:|toString(QDate...)|
   #:|toString(QDateTime)|
   #:|toString(QDateTime,QLocale::FormatType)|
   #:|toString(QDateTime,QString)|
   #:|toString(QDateTime...)|
   #:|toString(QString)|
   #:|toString(QTime)|
   #:|toString(QTime,QLocale::FormatType)|
   #:|toString(QTime,QString)|
   #:|toString(QTime...)|
   #:|toString(Qt::DateFormat)|
   #:|toString(double)|
   #:|toString(double...)|
   #:|toString(float)|
   #:|toString(float...)|
   #:|toString(int)|
   #:|toString(qlonglong)|
   #:|toString(qulonglong)|
   #:|toString(short)|
   #:|toString(uint)|
   #:|toString(ushort)|
   #:|toStringList|
   #:|toString|
   #:|toSubpathPolygons(QMatrix)|
   #:|toSubpathPolygons(QTransform)|
   #:|toSubpathPolygons|
   #:|toTableCellFormat|
   #:|toTableFormat|
   #:|toTime(QString,QLocale::FormatType)|
   #:|toTime(QString,QString)|
   #:|toTimeSpec|
   #:|toTime_t|
   #:|toTime|
   #:|toTransform|
   #:|toUInt|
   #:|toULongLong|
   #:|toUShort|
   #:|toUTC|
   #:|toUnicode(QByteArray)|
   #:|toUnicode(const char*)|
   #:|toUnicode|
   #:|toUrl|
   #:|toVector2DAffine|
   #:|toVector2D|
   #:|toVector3DAffine|
   #:|toVector3D|
   #:|toVector4D|
   #:|toggleBit|
   #:|toggleDirection|
   #:|toggleViewAction|
   #:|toggled|
   #:|toggle|
   #:|toolBarArea|
   #:|toolBarBreak|
   #:|toolButtonStyleChanged|
   #:|toolButtonStyle|
   #:|toolTipBase|
   #:|toolTipText|
   #:|toolTip|
   #:|topLeft|
   #:|topLevelAt.QApplication|
   #:|topLevelChanged|
   #:|topLevelItemCount|
   #:|topLevelItem|
   #:|topLevelWidgets.QApplication|
   #:|topLevelWidget|
   #:|topMargin|
   #:|topPadding|
   #:|topRow|
   #:|top|
   #:|totalChangeFlags|
   #:|totalDuration|
   #:|totalRotationAngle|
   #:|totalScaleFactor|
   #:|touchPointStates|
   #:|touchPoints|
   #:|tr.QObject|
   #:|trUtf8.QObject|
   #:|transformOriginPoint|
   #:|transformationAnchor|
   #:|transformationMode|
   #:|transformations|
   #:|transformed(QMatrix)|
   #:|transformed(QMatrix...)|
   #:|transformed(QTransform)|
   #:|transformed(QTransform...)|
   #:|transformed|
   #:|transform|
   #:|translate(QPoint)|
   #:|translate(QPointF)|
   #:|translate.QCoreApplication|
   #:|translated|
   #:|translate|
   #:|transposed|
   #:|transpose|
   #:|treeWidget|
   #:|triggerAction|
   #:|triggered|
   #:|trigger|
   #:|trueMatrix(QMatrix...).QImage|
   #:|trueMatrix(QMatrix...).QPixmap|
   #:|trueMatrix(QTransform...).QImage|
   #:|trueMatrix(QTransform...).QPixmap|
   #:|trueMatrix.QImage|
   #:|trueMatrix.QPixmap|
   #:|truncate|
   #:|tryAcquire|
   #:|tryLockForRead|
   #:|tryLockForWrite|
   #:|type.QApplication|
   #:|typeName|
   #:|typeToName.QVariant|
   #:|type|
   #:|underMouse|
   #:|underlineColor|
   #:|underlinePos|
   #:|underlineStyle|
   #:|underline|
   #:|undoAvailable|
   #:|undoCommandAdded|
   #:|undoLimit|
   #:|undoTextChanged|
   #:|undoText|
   #:|undo|
   #:|ungetChar|
   #:|ungrabGesture|
   #:|ungrabKeyboard|
   #:|ungrabMouse|
   #:|unifiedTitleAndToolBarOnMac|
   #:|uniformItemSizes|
   #:|uniformRowHeights|
   #:|uniqueId|
   #:|united(QRect)|
   #:|united(QRegion)|
   #:|united|
   #:|unixSignal|
   #:|unload|
   #:|unlock|
   #:|unpolish(QApplication*)|
   #:|unpolish(QWidget*)|
   #:|unpolish|
   #:|unsetCursor|
   #:|unsetError|
   #:|unsetHotSpot|
   #:|unsetLayoutDirection|
   #:|unsetLocale|
   #:|unsetSpacing|
   #:|unsetWindowFrameMargins|
   #:|update(QRect)|
   #:|update(QRegion)|
   #:|updateAccessibility.QAccessible|
   #:|updateBlock|
   #:|updateBoundingRect|
   #:|updateCells|
   #:|updateCell|
   #:|updateEditorData|
   #:|updateEditorGeometries|
   #:|updateEditorGeometry|
   #:|updateGeometries|
   #:|updateGeometry|
   #:|updateInterval|
   #:|updateMicroFocus|
   #:|updatePreviewWidget|
   #:|updatePreview|
   #:|updateRequest|
   #:|updateSceneRect|
   #:|updateScene|
   #:|updateSection|
   #:|updated|
   #:|updatesEnabled|
   #:|update|
   #:|urls|
   #:|url|
   #:|useDesignMetrics|
   #:|useHighlightColors|
   #:|userActionCount|
   #:|userData|
   #:|userInfo|
   #:|userName|
   #:|userState|
   #:|userType|
   #:|usesScrollButtons|
   #:|validateCurrentPage|
   #:|validatePage|
   #:|validate|
   #:|validator|
   #:|valid|
   #:|valueChanged(QString)|
   #:|valueChanged(double)|
   #:|valueChanged(int)|
   #:|valueChanged|
   #:|valueForProgress|
   #:|valueForTime|
   #:|valueFromText|
   #:|valueF|
   #:|valuePropertyName|
   #:|value|
   #:|vector|
   #:|verticalAlignment|
   #:|verticalDirection|
   #:|verticalHeaderFormat|
   #:|verticalHeaderItem|
   #:|verticalHeader|
   #:|verticalPolicy|
   #:|verticalScrollBarPolicy|
   #:|verticalScrollBar|
   #:|verticalScrollMode|
   #:|verticalScrollbarAction|
   #:|verticalScrollbarValueChanged|
   #:|verticalSpacing|
   #:|verticalStretch|
   #:|viewMode|
   #:|viewTransformEnabled|
   #:|viewportEntered|
   #:|viewportTransform|
   #:|viewportUpdateMode|
   #:|viewport|
   #:|views|
   #:|view|
   #:|visibilityChanged|
   #:|visibleChanged|
   #:|visibleRegion|
   #:|visitedPages|
   #:|visualAlignment.QStyle|
   #:|visualColumn|
   #:|visualIndexAt|
   #:|visualIndex|
   #:|visualItemRect|
   #:|visualNavigation|
   #:|visualPos.QStyle|
   #:|visualRect.QStyle|
   #:|visualRect|
   #:|visualRow|
   #:|waitForBytesWritten|
   #:|waitForFinished|
   #:|waitForReadyRead|
   #:|waitForStarted|
   #:|wakeUp|
   #:|warning.QMessageBox|
   #:|wasCanceled|
   #:|weekdayTextFormat|
   #:|weight|
   #:|whatsThis|
   #:|wheelScrollLines.QApplication|
   #:|widgetAt.QApplication|
   #:|widgetDestroyed|
   #:|widgetEvent|
   #:|widgetForAction|
   #:|widgetRemoved|
   #:|widgetResizable|
   #:|widget|
   #:|width(QChar)|
   #:|width(QString)|
   #:|widthChanged|
   #:|widthF|
   #:|widthMM|
   #:|width|
   #:|windowActivated|
   #:|windowFilePath|
   #:|windowFlags|
   #:|windowFrameGeometry|
   #:|windowFrameRect|
   #:|windowIcon.QApplication|
   #:|windowIconText|
   #:|windowIcon|
   #:|windowList|
   #:|windowModality|
   #:|windowOpacity|
   #:|windowRole|
   #:|windowStateChanged|
   #:|windowState|
   #:|windowText|
   #:|windowTitle|
   #:|windowType|
   #:|window|
   #:|wizardStyle|
   #:|wizard|
   #:|wordSpacing|
   #:|wordWrapMode|
   #:|wordWrap|
   #:|workAreaResized|
   #:|workingDirectory|
   #:|worldMatrixEnabled|
   #:|worldTransform|
   #:|wrapAround|
   #:|wrapMode|
   #:|wrapping|
   #:|write(QByteArray)|
   #:|write(QTextDocumentFragment)|
   #:|write(const QTextDocument*)|
   #:|write(const char*)|
   #:|write|
   #:|writingSystemName.QFontDatabase|
   #:|writingSystemSample.QFontDatabase|
   #:|writingSystem|
   #:|w|
   #:|xChanged|
   #:|xHeight|
   #:|xOffset|
   #:|xScaleChanged|
   #:|xScale|
   #:|xTilt|
   #:|xToCursor|
   #:|xored|
   #:|x|
   #:|yChanged|
   #:|yOffset|
   #:|yScaleChanged|
   #:|yScale|
   #:|yTilt|
   #:|yearShown|
   #:|year|
   #:|yellowF|
   #:|yellow|
   #:|y|
   #:|zChanged|
   #:|zScaleChanged|
   #:|zScale|
   #:|zValue|
   #:|zeroDigit|
   #:|zoomFactor|
   #:|zoomIn|
   #:|zoomMode|
   #:|zoomOut|
   #:|z|))

(in-package :eql)

(defun |abort| (object &rest arguments)
  (%qinvoke-method object nil "abort" arguments))

(defun |about.QMessageBox| (&rest arguments)
  (%qinvoke-method "QMessageBox" nil "about" arguments))

(defun |aboutQt.QMessageBox| (&rest arguments)
  (%qinvoke-method "QMessageBox" nil "aboutQt" arguments))

(defun |aboutQt| (object &rest arguments)
  (%qinvoke-method object nil "aboutQt" arguments))

(defun |aboutToActivate| (object &rest arguments)
  (%qinvoke-method object nil "aboutToActivate" arguments))

(defun |aboutToClose| (object &rest arguments)
  (%qinvoke-method object nil "aboutToClose" arguments))

(defun |aboutToHide| (object &rest arguments)
  (%qinvoke-method object nil "aboutToHide" arguments))

(defun |aboutToQuit| (object &rest arguments)
  (%qinvoke-method object nil "aboutToQuit" arguments))

(defun |aboutToShow| (object &rest arguments)
  (%qinvoke-method object nil "aboutToShow" arguments))

(defun |absoluteDir| (object &rest arguments)
  (%qinvoke-method object nil "absoluteDir" arguments))

(defun |absoluteFilePath| (object &rest arguments)
  (%qinvoke-method object nil "absoluteFilePath" arguments))

(defun |absolutePath| (object &rest arguments)
  (%qinvoke-method object nil "absolutePath" arguments))

(defun |acceleration| (object &rest arguments)
  (%qinvoke-method object nil "acceleration" arguments))

(defun |accept(QGesture*)| (object &rest arguments)
  (%qinvoke-method object nil "accept(QGesture*)" arguments))

(defun |accept(Qt::GestureType)| (object &rest arguments)
  (%qinvoke-method object nil "accept(Qt::GestureType)" arguments))

(defun |acceptDrops| (object &rest arguments)
  (%qinvoke-method object nil "acceptDrops" arguments))

(defun |acceptHoverEvents| (object &rest arguments)
  (%qinvoke-method object nil "acceptHoverEvents" arguments))

(defun |acceptMode| (object &rest arguments)
  (%qinvoke-method object nil "acceptMode" arguments))

(defun |acceptProposedAction| (object &rest arguments)
  (%qinvoke-method object nil "acceptProposedAction" arguments))

(defun |acceptRichText| (object &rest arguments)
  (%qinvoke-method object nil "acceptRichText" arguments))

(defun |acceptTouchEvents| (object &rest arguments)
  (%qinvoke-method object nil "acceptTouchEvents" arguments))

(defun |acceptedMouseButtons| (object &rest arguments)
  (%qinvoke-method object nil "acceptedMouseButtons" arguments))

(defun |accepted| (object &rest arguments)
  (%qinvoke-method object nil "accepted" arguments))

(defun |accept| (object &rest arguments)
  (%qinvoke-method object nil "accept" arguments))

(defun |accessibleDescription| (object &rest arguments)
  (%qinvoke-method object nil "accessibleDescription" arguments))

(defun |accessibleName| (object &rest arguments)
  (%qinvoke-method object nil "accessibleName" arguments))

(defun |accessibleText| (object &rest arguments)
  (%qinvoke-method object nil "accessibleText" arguments))

(defun |acquire| (object &rest arguments)
  (%qinvoke-method object nil "acquire" arguments))

(defun |actionAt| (object &rest arguments)
  (%qinvoke-method object nil "actionAt" arguments))

(defun |actionChanged| (object &rest arguments)
  (%qinvoke-method object nil "actionChanged" arguments))

(defun |actionGeometry| (object &rest arguments)
  (%qinvoke-method object nil "actionGeometry" arguments))

(defun |actionGroup| (object &rest arguments)
  (%qinvoke-method object nil "actionGroup" arguments))

(defun |actionText| (object &rest arguments)
  (%qinvoke-method object nil "actionText" arguments))

(defun |actionTriggered| (object &rest arguments)
  (%qinvoke-method object nil "actionTriggered" arguments))

(defun |actions| (object &rest arguments)
  (%qinvoke-method object nil "actions" arguments))

(defun |action| (object &rest arguments)
  (%qinvoke-method object nil "action" arguments))

(defun |activateNextSubWindow| (object &rest arguments)
  (%qinvoke-method object nil "activateNextSubWindow" arguments))

(defun |activateNextWindow| (object &rest arguments)
  (%qinvoke-method object nil "activateNextWindow" arguments))

(defun |activatePreviousSubWindow| (object &rest arguments)
  (%qinvoke-method object nil "activatePreviousSubWindow" arguments))

(defun |activatePreviousWindow| (object &rest arguments)
  (%qinvoke-method object nil "activatePreviousWindow" arguments))

(defun |activateWindow| (object &rest arguments)
  (%qinvoke-method object nil "activateWindow" arguments))

(defun |activated(QModelIndex)| (object &rest arguments)
  (%qinvoke-method object nil "activated(QModelIndex)" arguments))

(defun |activated(QString)| (object &rest arguments)
  (%qinvoke-method object nil "activated(QString)" arguments))

(defun |activated(int)| (object &rest arguments)
  (%qinvoke-method object nil "activated(int)" arguments))

(defun |activatedAmbiguously| (object &rest arguments)
  (%qinvoke-method object nil "activatedAmbiguously" arguments))

(defun |activated| (object &rest arguments)
  (%qinvoke-method object nil "activated" arguments))

(defun |activate| (object &rest arguments)
  (%qinvoke-method object nil "activate" arguments))

(defun |activationOrder| (object &rest arguments)
  (%qinvoke-method object nil "activationOrder" arguments))

(defun |activeAction| (object &rest arguments)
  (%qinvoke-method object nil "activeAction" arguments))

(defun |activeGestures| (object &rest arguments)
  (%qinvoke-method object nil "activeGestures" arguments))

(defun |activeModalWidget.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "activeModalWidget" arguments))

(defun |activePanel| (object &rest arguments)
  (%qinvoke-method object nil "activePanel" arguments))

(defun |activePopupWidget.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "activePopupWidget" arguments))

(defun |activeStackChanged| (object &rest arguments)
  (%qinvoke-method object nil "activeStackChanged" arguments))

(defun |activeStack| (object &rest arguments)
  (%qinvoke-method object nil "activeStack" arguments))

(defun |activeSubWindow| (object &rest arguments)
  (%qinvoke-method object nil "activeSubWindow" arguments))

(defun |activeWindow.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "activeWindow" arguments))

(defun |activeWindow| (object &rest arguments)
  (%qinvoke-method object nil "activeWindow" arguments))

(defun |actualNumCopies| (object &rest arguments)
  (%qinvoke-method object nil "actualNumCopies" arguments))

(defun |actualSize| (object &rest arguments)
  (%qinvoke-method object nil "actualSize" arguments))

(defun |addAction(QAction*)| (object &rest arguments)
  (%qinvoke-method object nil "addAction(QAction*)" arguments))

(defun |addAction(QIcon...)| (object &rest arguments)
  (%qinvoke-method object nil "addAction(QIcon...)" arguments))

(defun |addAction(QString)| (object &rest arguments)
  (%qinvoke-method object nil "addAction(QString)" arguments))

(defun |addAction(QString...)| (object &rest arguments)
  (%qinvoke-method object nil "addAction(QString...)" arguments))

(defun |addActions| (object &rest arguments)
  (%qinvoke-method object nil "addActions" arguments))

(defun |addAction| (object &rest arguments)
  (%qinvoke-method object nil "addAction" arguments))

(defun |addAnchors| (object &rest arguments)
  (%qinvoke-method object nil "addAnchors" arguments))

(defun |addAnchor| (object &rest arguments)
  (%qinvoke-method object nil "addAnchor" arguments))

(defun |addAnimation| (object &rest arguments)
  (%qinvoke-method object nil "addAnimation" arguments))

(defun |addApplicationFont.QFontDatabase| (&rest arguments)
  (%qinvoke-method "QFontDatabase" nil "addApplicationFont" arguments))

(defun |addApplicationFontFromData.QFontDatabase| (&rest arguments)
  (%qinvoke-method "QFontDatabase" nil "addApplicationFontFromData" arguments))

(defun |addButton(QAbstractButton*...)| (object &rest arguments)
  (%qinvoke-method object nil "addButton(QAbstractButton*...)" arguments))

(defun |addButton(QString...)| (object &rest arguments)
  (%qinvoke-method object nil "addButton(QString...)" arguments))

(defun |addButton| (object &rest arguments)
  (%qinvoke-method object nil "addButton" arguments))

(defun |addChildLayoutItem| (object &rest arguments)
  (%qinvoke-method object nil "addChildLayoutItem" arguments))

(defun |addChildren| (object &rest arguments)
  (%qinvoke-method object nil "addChildren" arguments))

(defun |addChild| (object &rest arguments)
  (%qinvoke-method object nil "addChild" arguments))

(defun |addControllingSignal| (object &rest arguments)
  (%qinvoke-method object nil "addControllingSignal" arguments))

(defun |addCornerAnchors| (object &rest arguments)
  (%qinvoke-method object nil "addCornerAnchors" arguments))

(defun |addData| (object &rest arguments)
  (%qinvoke-method object nil "addData" arguments))

(defun |addDays| (object &rest arguments)
  (%qinvoke-method object nil "addDays" arguments))

(defun |addDefaultAnimation| (object &rest arguments)
  (%qinvoke-method object nil "addDefaultAnimation" arguments))

(defun |addDockWidget| (object &rest arguments)
  (%qinvoke-method object nil "addDockWidget" arguments))

(defun |addEllipse| (object &rest arguments)
  (%qinvoke-method object nil "addEllipse" arguments))

(defun |addEncodedQueryItem| (object &rest arguments)
  (%qinvoke-method object nil "addEncodedQueryItem" arguments))

(defun |addFile| (object &rest arguments)
  (%qinvoke-method object nil "addFile" arguments))

(defun |addItem(QIcon...)| (object &rest arguments)
  (%qinvoke-method object nil "addItem(QIcon...)" arguments))

(defun |addItem(QListWidgetItem*)| (object &rest arguments)
  (%qinvoke-method object nil "addItem(QListWidgetItem*)" arguments))

(defun |addItem(QString)| (object &rest arguments)
  (%qinvoke-method object nil "addItem(QString)" arguments))

(defun |addItem(QString...)| (object &rest arguments)
  (%qinvoke-method object nil "addItem(QString...)" arguments))

(defun |addItems| (object &rest arguments)
  (%qinvoke-method object nil "addItems" arguments))

(defun |addItem| (object &rest arguments)
  (%qinvoke-method object nil "addItem" arguments))

(defun |addLayout| (object &rest arguments)
  (%qinvoke-method object nil "addLayout" arguments))

(defun |addLibraryPath.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "addLibraryPath" arguments))

(defun |addLine| (object &rest arguments)
  (%qinvoke-method object nil "addLine" arguments))

(defun |addMSecs| (object &rest arguments)
  (%qinvoke-method object nil "addMSecs" arguments))

(defun |addMapping| (object &rest arguments)
  (%qinvoke-method object nil "addMapping" arguments))

(defun |addMenu(QMenu*)| (object &rest arguments)
  (%qinvoke-method object nil "addMenu(QMenu*)" arguments))

(defun |addMenu(QString)| (object &rest arguments)
  (%qinvoke-method object nil "addMenu(QString)" arguments))

(defun |addMenu| (object &rest arguments)
  (%qinvoke-method object nil "addMenu" arguments))

(defun |addMonths| (object &rest arguments)
  (%qinvoke-method object nil "addMonths" arguments))

(defun |addPage| (object &rest arguments)
  (%qinvoke-method object nil "addPage" arguments))

(defun |addPaths| (object &rest arguments)
  (%qinvoke-method object nil "addPaths" arguments))

(defun |addPath| (object &rest arguments)
  (%qinvoke-method object nil "addPath" arguments))

(defun |addPause| (object &rest arguments)
  (%qinvoke-method object nil "addPause" arguments))

(defun |addPermanentWidget| (object &rest arguments)
  (%qinvoke-method object nil "addPermanentWidget" arguments))

(defun |addPixmap| (object &rest arguments)
  (%qinvoke-method object nil "addPixmap" arguments))

(defun |addPolygon| (object &rest arguments)
  (%qinvoke-method object nil "addPolygon" arguments))

(defun |addQueryItem| (object &rest arguments)
  (%qinvoke-method object nil "addQueryItem" arguments))

(defun |addRect| (object &rest arguments)
  (%qinvoke-method object nil "addRect" arguments))

(defun |addRegion| (object &rest arguments)
  (%qinvoke-method object nil "addRegion" arguments))

(defun |addResource| (object &rest arguments)
  (%qinvoke-method object nil "addResource" arguments))

(defun |addRoundedRect| (object &rest arguments)
  (%qinvoke-method object nil "addRoundedRect" arguments))

(defun |addRow(QLayout*)| (object &rest arguments)
  (%qinvoke-method object nil "addRow(QLayout*)" arguments))

(defun |addRow(QString,QLayout*)| (object &rest arguments)
  (%qinvoke-method object nil "addRow(QString,QLayout*)" arguments))

(defun |addRow(QString,QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "addRow(QString,QWidget*)" arguments))

(defun |addRow(QString...)| (object &rest arguments)
  (%qinvoke-method object nil "addRow(QString...)" arguments))

(defun |addRow(QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "addRow(QWidget*)" arguments))

(defun |addRow(QWidget*,QLayout*)| (object &rest arguments)
  (%qinvoke-method object nil "addRow(QWidget*,QLayout*)" arguments))

(defun |addRow(QWidget*,QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "addRow(QWidget*,QWidget*)" arguments))

(defun |addRow(QWidget*...)| (object &rest arguments)
  (%qinvoke-method object nil "addRow(QWidget*...)" arguments))

(defun |addRow| (object &rest arguments)
  (%qinvoke-method object nil "addRow" arguments))

(defun |addScrollBarWidget| (object &rest arguments)
  (%qinvoke-method object nil "addScrollBarWidget" arguments))

(defun |addSearchPath.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "addSearchPath" arguments))

(defun |addSecs| (object &rest arguments)
  (%qinvoke-method object nil "addSecs" arguments))

(defun |addSeparator| (object &rest arguments)
  (%qinvoke-method object nil "addSeparator" arguments))

(defun |addSimpleText| (object &rest arguments)
  (%qinvoke-method object nil "addSimpleText" arguments))

(defun |addSpacerItem| (object &rest arguments)
  (%qinvoke-method object nil "addSpacerItem" arguments))

(defun |addSpacing| (object &rest arguments)
  (%qinvoke-method object nil "addSpacing" arguments))

(defun |addStack| (object &rest arguments)
  (%qinvoke-method object nil "addStack" arguments))

(defun |addState| (object &rest arguments)
  (%qinvoke-method object nil "addState" arguments))

(defun |addStep| (object &rest arguments)
  (%qinvoke-method object nil "addStep" arguments))

(defun |addStretch| (object &rest arguments)
  (%qinvoke-method object nil "addStretch" arguments))

(defun |addStrut| (object &rest arguments)
  (%qinvoke-method object nil "addStrut" arguments))

(defun |addSubWindow| (object &rest arguments)
  (%qinvoke-method object nil "addSubWindow" arguments))

(defun |addTab| (object &rest arguments)
  (%qinvoke-method object nil "addTab" arguments))

(defun |addText| (object &rest arguments)
  (%qinvoke-method object nil "addText" arguments))

(defun |addToGroup| (object &rest arguments)
  (%qinvoke-method object nil "addToGroup" arguments))

(defun |addToolBar(QString)| (object &rest arguments)
  (%qinvoke-method object nil "addToolBar(QString)" arguments))

(defun |addToolBar(QToolBar*)| (object &rest arguments)
  (%qinvoke-method object nil "addToolBar(QToolBar*)" arguments))

(defun |addToolBarBreak| (object &rest arguments)
  (%qinvoke-method object nil "addToolBarBreak" arguments))

(defun |addToolBar| (object &rest arguments)
  (%qinvoke-method object nil "addToolBar" arguments))

(defun |addTopLevelItems| (object &rest arguments)
  (%qinvoke-method object nil "addTopLevelItems" arguments))

(defun |addTopLevelItem| (object &rest arguments)
  (%qinvoke-method object nil "addTopLevelItem" arguments))

(defun |addTransition(QAbstractState*)| (object &rest arguments)
  (%qinvoke-method object nil "addTransition(QAbstractState*)" arguments))

(defun |addTransition(QAbstractTransition*)| (object &rest arguments)
  (%qinvoke-method object nil "addTransition(QAbstractTransition*)" arguments))

(defun |addTransition| (object &rest arguments)
  (%qinvoke-method object nil "addTransition" arguments))

(defun |addWidget| (object &rest arguments)
  (%qinvoke-method object nil "addWidget" arguments))

(defun |addWindow| (object &rest arguments)
  (%qinvoke-method object nil "addWindow" arguments))

(defun |addYears| (object &rest arguments)
  (%qinvoke-method object nil "addYears" arguments))

(defun |added| (object &rest arguments)
  (%qinvoke-method object nil "added" arguments))

(defun |add| (object &rest arguments)
  (%qinvoke-method object nil "add" arguments))

(defun |adjoint| (object &rest arguments)
  (%qinvoke-method object nil "adjoint" arguments))

(defun |adjustSize| (object &rest arguments)
  (%qinvoke-method object nil "adjustSize" arguments))

(defun |advance| (object &rest arguments)
  (%qinvoke-method object nil "advance" arguments))

(defun |alert.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "alert" arguments))

(defun |aliases| (object &rest arguments)
  (%qinvoke-method object nil "aliases" arguments))

(defun |alignedRect.QStyle| (&rest arguments)
  (%qinvoke-method "QStyle" nil "alignedRect" arguments))

(defun |alignment| (object &rest arguments)
  (%qinvoke-method object nil "alignment" arguments))

(defun |allColumnsShowFocus| (object &rest arguments)
  (%qinvoke-method object nil "allColumnsShowFocus" arguments))

(defun |allEncodedQueryItemValues| (object &rest arguments)
  (%qinvoke-method object nil "allEncodedQueryItemValues" arguments))

(defun |allFormats| (object &rest arguments)
  (%qinvoke-method object nil "allFormats" arguments))

(defun |allGray| (object &rest arguments)
  (%qinvoke-method object nil "allGray" arguments))

(defun |allKeys| (object &rest arguments)
  (%qinvoke-method object nil "allKeys" arguments))

(defun |allQueryItemValues| (object &rest arguments)
  (%qinvoke-method object nil "allQueryItemValues" arguments))

(defun |allWidgets.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "allWidgets" arguments))

(defun |allowedAreasChanged| (object &rest arguments)
  (%qinvoke-method object nil "allowedAreasChanged" arguments))

(defun |allowedAreas| (object &rest arguments)
  (%qinvoke-method object nil "allowedAreas" arguments))

(defun |allowsErrorInteraction| (object &rest arguments)
  (%qinvoke-method object nil "allowsErrorInteraction" arguments))

(defun |allowsInteraction| (object &rest arguments)
  (%qinvoke-method object nil "allowsInteraction" arguments))

(defun |alphaF| (object &rest arguments)
  (%qinvoke-method object nil "alphaF" arguments))

(defun |alpha| (object &rest arguments)
  (%qinvoke-method object nil "alpha" arguments))

(defun |alternateBase| (object &rest arguments)
  (%qinvoke-method object nil "alternateBase" arguments))

(defun |alternatingRowColors| (object &rest arguments)
  (%qinvoke-method object nil "alternatingRowColors" arguments))

(defun |amText| (object &rest arguments)
  (%qinvoke-method object nil "amText" arguments))

(defun |amplitude| (object &rest arguments)
  (%qinvoke-method object nil "amplitude" arguments))

(defun |anchorAt| (object &rest arguments)
  (%qinvoke-method object nil "anchorAt" arguments))

(defun |anchorClicked| (object &rest arguments)
  (%qinvoke-method object nil "anchorClicked" arguments))

(defun |anchorHref| (object &rest arguments)
  (%qinvoke-method object nil "anchorHref" arguments))

(defun |anchorNames| (object &rest arguments)
  (%qinvoke-method object nil "anchorNames" arguments))

(defun |anchor| (object &rest arguments)
  (%qinvoke-method object nil "anchor" arguments))

(defun |angleAtPercent| (object &rest arguments)
  (%qinvoke-method object nil "angleAtPercent" arguments))

(defun |angleChanged| (object &rest arguments)
  (%qinvoke-method object nil "angleChanged" arguments))

(defun |angle| (object &rest arguments)
  (%qinvoke-method object nil "angle" arguments))

(defun |animateClick| (object &rest arguments)
  (%qinvoke-method object nil "animateClick" arguments))

(defun |animationAt| (object &rest arguments)
  (%qinvoke-method object nil "animationAt" arguments))

(defun |animationCount| (object &rest arguments)
  (%qinvoke-method object nil "animationCount" arguments))

(defun |animations| (object &rest arguments)
  (%qinvoke-method object nil "animations" arguments))

(defun |answerRect| (object &rest arguments)
  (%qinvoke-method object nil "answerRect" arguments))

(defun |appendColumns| (object &rest arguments)
  (%qinvoke-method object nil "appendColumns" arguments))

(defun |appendColumn| (object &rest arguments)
  (%qinvoke-method object nil "appendColumn" arguments))

(defun |appendHtml| (object &rest arguments)
  (%qinvoke-method object nil "appendHtml" arguments))

(defun |appendPlainText| (object &rest arguments)
  (%qinvoke-method object nil "appendPlainText" arguments))

(defun |appendRow(QList<QStandardItem*>)| (object &rest arguments)
  (%qinvoke-method object nil "appendRow(QList<QStandardItem*>)" arguments))

(defun |appendRow(QStandardItem*)| (object &rest arguments)
  (%qinvoke-method object nil "appendRow(QStandardItem*)" arguments))

(defun |appendRows| (object &rest arguments)
  (%qinvoke-method object nil "appendRows" arguments))

(defun |appendRow| (object &rest arguments)
  (%qinvoke-method object nil "appendRow" arguments))

(defun |appendUndoItem| (object &rest arguments)
  (%qinvoke-method object nil "appendUndoItem" arguments))

(defun |append| (object &rest arguments)
  (%qinvoke-method object nil "append" arguments))

(defun |applicationDirPath.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "applicationDirPath" arguments))

(defun |applicationFilePath.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "applicationFilePath" arguments))

(defun |applicationFontFamilies.QFontDatabase| (&rest arguments)
  (%qinvoke-method "QFontDatabase" nil "applicationFontFamilies" arguments))

(defun |applicationName.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "applicationName" arguments))

(defun |applicationName| (object &rest arguments)
  (%qinvoke-method object nil "applicationName" arguments))

(defun |applicationPid.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "applicationPid" arguments))

(defun |applicationVersion.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "applicationVersion" arguments))

(defun |applyTo| (object &rest arguments)
  (%qinvoke-method object nil "applyTo" arguments))

(defun |arcMoveTo| (object &rest arguments)
  (%qinvoke-method object nil "arcMoveTo" arguments))

(defun |arcTo| (object &rest arguments)
  (%qinvoke-method object nil "arcTo" arguments))

(defun |arguments.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "arguments" arguments))

(defun |arrangeIcons| (object &rest arguments)
  (%qinvoke-method object nil "arrangeIcons" arguments))

(defun |arrowType| (object &rest arguments)
  (%qinvoke-method object nil "arrowType" arguments))

(defun |ascent| (object &rest arguments)
  (%qinvoke-method object nil "ascent" arguments))

(defun |assignProperty| (object &rest arguments)
  (%qinvoke-method object nil "assignProperty" arguments))

(defun |associatedGraphicsWidgets| (object &rest arguments)
  (%qinvoke-method object nil "associatedGraphicsWidgets" arguments))

(defun |associatedWidgets| (object &rest arguments)
  (%qinvoke-method object nil "associatedWidgets" arguments))

(defun |atBlockEnd| (object &rest arguments)
  (%qinvoke-method object nil "atBlockEnd" arguments))

(defun |atBlockStart| (object &rest arguments)
  (%qinvoke-method object nil "atBlockStart" arguments))

(defun |atEnd| (object &rest arguments)
  (%qinvoke-method object nil "atEnd" arguments))

(defun |atStart| (object &rest arguments)
  (%qinvoke-method object nil "atStart" arguments))

(defun |at| (object &rest arguments)
  (%qinvoke-method object nil "at" arguments))

(defun |authority| (object &rest arguments)
  (%qinvoke-method object nil "authority" arguments))

(defun |autoClose| (object &rest arguments)
  (%qinvoke-method object nil "autoClose" arguments))

(defun |autoDefault| (object &rest arguments)
  (%qinvoke-method object nil "autoDefault" arguments))

(defun |autoDelete| (object &rest arguments)
  (%qinvoke-method object nil "autoDelete" arguments))

(defun |autoExclusive| (object &rest arguments)
  (%qinvoke-method object nil "autoExclusive" arguments))

(defun |autoExpandDelay| (object &rest arguments)
  (%qinvoke-method object nil "autoExpandDelay" arguments))

(defun |autoFillBackground| (object &rest arguments)
  (%qinvoke-method object nil "autoFillBackground" arguments))

(defun |autoFormatting| (object &rest arguments)
  (%qinvoke-method object nil "autoFormatting" arguments))

(defun |autoRaise| (object &rest arguments)
  (%qinvoke-method object nil "autoRaise" arguments))

(defun |autoRepeatDelay| (object &rest arguments)
  (%qinvoke-method object nil "autoRepeatDelay" arguments))

(defun |autoRepeatInterval| (object &rest arguments)
  (%qinvoke-method object nil "autoRepeatInterval" arguments))

(defun |autoRepeat| (object &rest arguments)
  (%qinvoke-method object nil "autoRepeat" arguments))

(defun |autoReset| (object &rest arguments)
  (%qinvoke-method object nil "autoReset" arguments))

(defun |autoScrollMargin| (object &rest arguments)
  (%qinvoke-method object nil "autoScrollMargin" arguments))

(defun |autoSipEnabled| (object &rest arguments)
  (%qinvoke-method object nil "autoSipEnabled" arguments))

(defun |availableCodecs.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "availableCodecs" arguments))

(defun |availableGeometry(QPoint)| (object &rest arguments)
  (%qinvoke-method object nil "availableGeometry(QPoint)" arguments))

(defun |availableGeometry(const QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "availableGeometry(const QWidget*)" arguments))

(defun |availableGeometry(int)| (object &rest arguments)
  (%qinvoke-method object nil "availableGeometry(int)" arguments))

(defun |availableGeometry| (object &rest arguments)
  (%qinvoke-method object nil "availableGeometry" arguments))

(defun |availableMibs.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "availableMibs" arguments))

(defun |availableRedoSteps| (object &rest arguments)
  (%qinvoke-method object nil "availableRedoSteps" arguments))

(defun |availableSizes| (object &rest arguments)
  (%qinvoke-method object nil "availableSizes" arguments))

(defun |availableUndoSteps| (object &rest arguments)
  (%qinvoke-method object nil "availableUndoSteps" arguments))

(defun |available| (object &rest arguments)
  (%qinvoke-method object nil "available" arguments))

(defun |averageCharWidth| (object &rest arguments)
  (%qinvoke-method object nil "averageCharWidth" arguments))

(defun |axisChanged| (object &rest arguments)
  (%qinvoke-method object nil "axisChanged" arguments))

(defun |axis| (object &rest arguments)
  (%qinvoke-method object nil "axis" arguments))

(defun |backgroundBrush| (object &rest arguments)
  (%qinvoke-method object nil "backgroundBrush" arguments))

(defun |backgroundColor| (object &rest arguments)
  (%qinvoke-method object nil "backgroundColor" arguments))

(defun |backgroundMode| (object &rest arguments)
  (%qinvoke-method object nil "backgroundMode" arguments))

(defun |backgroundRole| (object &rest arguments)
  (%qinvoke-method object nil "backgroundRole" arguments))

(defun |backgroundVisible| (object &rest arguments)
  (%qinvoke-method object nil "backgroundVisible" arguments))

(defun |background| (object &rest arguments)
  (%qinvoke-method object nil "background" arguments))

(defun |backspace| (object &rest arguments)
  (%qinvoke-method object nil "backspace" arguments))

(defun |backwardAvailable| (object &rest arguments)
  (%qinvoke-method object nil "backwardAvailable" arguments))

(defun |backwardHistoryCount| (object &rest arguments)
  (%qinvoke-method object nil "backwardHistoryCount" arguments))

(defun |backward| (object &rest arguments)
  (%qinvoke-method object nil "backward" arguments))

(defun |back| (object &rest arguments)
  (%qinvoke-method object nil "back" arguments))

(defun |baseName| (object &rest arguments)
  (%qinvoke-method object nil "baseName" arguments))

(defun |baseSize| (object &rest arguments)
  (%qinvoke-method object nil "baseSize" arguments))

(defun |base| (object &rest arguments)
  (%qinvoke-method object nil "base" arguments))

(defun |batchSize| (object &rest arguments)
  (%qinvoke-method object nil "batchSize" arguments))

(defun |beep.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "beep" arguments))

(defun |before| (object &rest arguments)
  (%qinvoke-method object nil "before" arguments))

(defun |begin(QImage*)| (object &rest arguments)
  (%qinvoke-method object nil "begin(QImage*)" arguments))

(defun |begin(QPicture*)| (object &rest arguments)
  (%qinvoke-method object nil "begin(QPicture*)" arguments))

(defun |begin(QPixmap*)| (object &rest arguments)
  (%qinvoke-method object nil "begin(QPixmap*)" arguments))

(defun |begin(QPrinter*)| (object &rest arguments)
  (%qinvoke-method object nil "begin(QPrinter*)" arguments))

(defun |begin(QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "begin(QWidget*)" arguments))

(defun |beginEditBlock| (object &rest arguments)
  (%qinvoke-method object nil "beginEditBlock" arguments))

(defun |beginGroup| (object &rest arguments)
  (%qinvoke-method object nil "beginGroup" arguments))

(defun |beginInsertColumns| (object &rest arguments)
  (%qinvoke-method object nil "beginInsertColumns" arguments))

(defun |beginInsertRows| (object &rest arguments)
  (%qinvoke-method object nil "beginInsertRows" arguments))

(defun |beginLayout| (object &rest arguments)
  (%qinvoke-method object nil "beginLayout" arguments))

(defun |beginMacro| (object &rest arguments)
  (%qinvoke-method object nil "beginMacro" arguments))

(defun |beginMoveColumns| (object &rest arguments)
  (%qinvoke-method object nil "beginMoveColumns" arguments))

(defun |beginMoveRows| (object &rest arguments)
  (%qinvoke-method object nil "beginMoveRows" arguments))

(defun |beginNativePainting| (object &rest arguments)
  (%qinvoke-method object nil "beginNativePainting" arguments))

(defun |beginReadArray| (object &rest arguments)
  (%qinvoke-method object nil "beginReadArray" arguments))

(defun |beginRemoveColumns| (object &rest arguments)
  (%qinvoke-method object nil "beginRemoveColumns" arguments))

(defun |beginRemoveRows| (object &rest arguments)
  (%qinvoke-method object nil "beginRemoveRows" arguments))

(defun |beginResetModel| (object &rest arguments)
  (%qinvoke-method object nil "beginResetModel" arguments))

(defun |beginWriteArray| (object &rest arguments)
  (%qinvoke-method object nil "beginWriteArray" arguments))

(defun |begin| (object &rest arguments)
  (%qinvoke-method object nil "begin" arguments))

(defun |bitmap| (object &rest arguments)
  (%qinvoke-method object nil "bitmap" arguments))

(defun |blackF| (object &rest arguments)
  (%qinvoke-method object nil "blackF" arguments))

(defun |black| (object &rest arguments)
  (%qinvoke-method object nil "black" arguments))

(defun |blockBoundingGeometry| (object &rest arguments)
  (%qinvoke-method object nil "blockBoundingGeometry" arguments))

(defun |blockBoundingRect| (object &rest arguments)
  (%qinvoke-method object nil "blockBoundingRect" arguments))

(defun |blockCharFormat| (object &rest arguments)
  (%qinvoke-method object nil "blockCharFormat" arguments))

(defun |blockCountChanged| (object &rest arguments)
  (%qinvoke-method object nil "blockCountChanged" arguments))

(defun |blockCount| (object &rest arguments)
  (%qinvoke-method object nil "blockCount" arguments))

(defun |blockFormatIndex| (object &rest arguments)
  (%qinvoke-method object nil "blockFormatIndex" arguments))

(defun |blockFormat| (object &rest arguments)
  (%qinvoke-method object nil "blockFormat" arguments))

(defun |blockList| (object &rest arguments)
  (%qinvoke-method object nil "blockList" arguments))

(defun |blockNumber| (object &rest arguments)
  (%qinvoke-method object nil "blockNumber" arguments))

(defun |blockSignals| (object &rest arguments)
  (%qinvoke-method object nil "blockSignals" arguments))

(defun |block| (object &rest arguments)
  (%qinvoke-method object nil "block" arguments))

(defun |blueF| (object &rest arguments)
  (%qinvoke-method object nil "blueF" arguments))

(defun |blue| (object &rest arguments)
  (%qinvoke-method object nil "blue" arguments))

(defun |blurHintsChanged| (object &rest arguments)
  (%qinvoke-method object nil "blurHintsChanged" arguments))

(defun |blurHints| (object &rest arguments)
  (%qinvoke-method object nil "blurHints" arguments))

(defun |blurRadiusChanged| (object &rest arguments)
  (%qinvoke-method object nil "blurRadiusChanged" arguments))

(defun |blurRadius| (object &rest arguments)
  (%qinvoke-method object nil "blurRadius" arguments))

(defun |bold| (object &rest arguments)
  (%qinvoke-method object nil "bold" arguments))

(defun |boolProperty| (object &rest arguments)
  (%qinvoke-method object nil "boolProperty" arguments))

(defun |borderBrush| (object &rest arguments)
  (%qinvoke-method object nil "borderBrush" arguments))

(defun |borderStyle| (object &rest arguments)
  (%qinvoke-method object nil "borderStyle" arguments))

(defun |border| (object &rest arguments)
  (%qinvoke-method object nil "border" arguments))

(defun |bottomMargin| (object &rest arguments)
  (%qinvoke-method object nil "bottomMargin" arguments))

(defun |bottomPadding| (object &rest arguments)
  (%qinvoke-method object nil "bottomPadding" arguments))

(defun |bottomRight| (object &rest arguments)
  (%qinvoke-method object nil "bottomRight" arguments))

(defun |bottomRow| (object &rest arguments)
  (%qinvoke-method object nil "bottomRow" arguments))

(defun |bottom| (object &rest arguments)
  (%qinvoke-method object nil "bottom" arguments))

(defun |boundaryReasons| (object &rest arguments)
  (%qinvoke-method object nil "boundaryReasons" arguments))

(defun |boundingRect(QChar)| (object &rest arguments)
  (%qinvoke-method object nil "boundingRect(QChar)" arguments))

(defun |boundingRect(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "boundingRect(QRect...)" arguments))

(defun |boundingRect(QRectF,QString...)| (object &rest arguments)
  (%qinvoke-method object nil "boundingRect(QRectF,QString...)" arguments))

(defun |boundingRect(QRectF,int...)| (object &rest arguments)
  (%qinvoke-method object nil "boundingRect(QRectF,int...)" arguments))

(defun |boundingRect(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "boundingRect(QRectF...)" arguments))

(defun |boundingRect(QString)| (object &rest arguments)
  (%qinvoke-method object nil "boundingRect(QString)" arguments))

(defun |boundingRectFor| (object &rest arguments)
  (%qinvoke-method object nil "boundingRectFor" arguments))

(defun |boundingRect| (object &rest arguments)
  (%qinvoke-method object nil "boundingRect" arguments))

(defun |boundingRegionGranularity| (object &rest arguments)
  (%qinvoke-method object nil "boundingRegionGranularity" arguments))

(defun |boundingRegion| (object &rest arguments)
  (%qinvoke-method object nil "boundingRegion" arguments))

(defun |brightText| (object &rest arguments)
  (%qinvoke-method object nil "brightText" arguments))

(defun |brushOrigin| (object &rest arguments)
  (%qinvoke-method object nil "brushOrigin" arguments))

(defun |brushProperty| (object &rest arguments)
  (%qinvoke-method object nil "brushProperty" arguments))

(defun |brush| (object &rest arguments)
  (%qinvoke-method object nil "brush" arguments))

(defun |bspTreeDepth| (object &rest arguments)
  (%qinvoke-method object nil "bspTreeDepth" arguments))

(defun |buddy| (object &rest arguments)
  (%qinvoke-method object nil "buddy" arguments))

(defun |buffer| (object &rest arguments)
  (%qinvoke-method object nil "buffer" arguments))

(defun |buildDate.QLibraryInfo| (&rest arguments)
  (%qinvoke-method "QLibraryInfo" nil "buildDate" arguments))

(defun |buildKey.QLibraryInfo| (&rest arguments)
  (%qinvoke-method "QLibraryInfo" nil "buildKey" arguments))

(defun |bundleName| (object &rest arguments)
  (%qinvoke-method object nil "bundleName" arguments))

(defun |buttonClicked(QAbstractButton*)| (object &rest arguments)
  (%qinvoke-method object nil "buttonClicked(QAbstractButton*)" arguments))

(defun |buttonClicked(int)| (object &rest arguments)
  (%qinvoke-method object nil "buttonClicked(int)" arguments))

(defun |buttonClicked| (object &rest arguments)
  (%qinvoke-method object nil "buttonClicked" arguments))

(defun |buttonDownPos| (object &rest arguments)
  (%qinvoke-method object nil "buttonDownPos" arguments))

(defun |buttonDownScenePos| (object &rest arguments)
  (%qinvoke-method object nil "buttonDownScenePos" arguments))

(defun |buttonDownScreenPos| (object &rest arguments)
  (%qinvoke-method object nil "buttonDownScreenPos" arguments))

(defun |buttonPressed(QAbstractButton*)| (object &rest arguments)
  (%qinvoke-method object nil "buttonPressed(QAbstractButton*)" arguments))

(defun |buttonPressed(int)| (object &rest arguments)
  (%qinvoke-method object nil "buttonPressed(int)" arguments))

(defun |buttonPressed| (object &rest arguments)
  (%qinvoke-method object nil "buttonPressed" arguments))

(defun |buttonReleased(QAbstractButton*)| (object &rest arguments)
  (%qinvoke-method object nil "buttonReleased(QAbstractButton*)" arguments))

(defun |buttonReleased(int)| (object &rest arguments)
  (%qinvoke-method object nil "buttonReleased(int)" arguments))

(defun |buttonReleased| (object &rest arguments)
  (%qinvoke-method object nil "buttonReleased" arguments))

(defun |buttonRole| (object &rest arguments)
  (%qinvoke-method object nil "buttonRole" arguments))

(defun |buttonSymbols| (object &rest arguments)
  (%qinvoke-method object nil "buttonSymbols" arguments))

(defun |buttonText| (object &rest arguments)
  (%qinvoke-method object nil "buttonText" arguments))

(defun |buttons| (object &rest arguments)
  (%qinvoke-method object nil "buttons" arguments))

(defun |button| (object &rest arguments)
  (%qinvoke-method object nil "button" arguments))

(defun |byteCount| (object &rest arguments)
  (%qinvoke-method object nil "byteCount" arguments))

(defun |bytesAvailable| (object &rest arguments)
  (%qinvoke-method object nil "bytesAvailable" arguments))

(defun |bytesPerLine| (object &rest arguments)
  (%qinvoke-method object nil "bytesPerLine" arguments))

(defun |bytesToWrite| (object &rest arguments)
  (%qinvoke-method object nil "bytesToWrite" arguments))

(defun |bytesWritten| (object &rest arguments)
  (%qinvoke-method object nil "bytesWritten" arguments))

(defun |c.QLocale| (&rest arguments)
  (%qinvoke-method "QLocale" nil "c" arguments))

(defun |cacheEnabled| (object &rest arguments)
  (%qinvoke-method object nil "cacheEnabled" arguments))

(defun |cacheKey| (object &rest arguments)
  (%qinvoke-method object nil "cacheKey" arguments))

(defun |cacheLimit.QPixmapCache| (&rest arguments)
  (%qinvoke-method "QPixmapCache" nil "cacheLimit" arguments))

(defun |cacheMode| (object &rest arguments)
  (%qinvoke-method object nil "cacheMode" arguments))

(defun |caching| (object &rest arguments)
  (%qinvoke-method object nil "caching" arguments))

(defun |calendarPopup| (object &rest arguments)
  (%qinvoke-method object nil "calendarPopup" arguments))

(defun |calendarWidget| (object &rest arguments)
  (%qinvoke-method object nil "calendarWidget" arguments))

(defun |canConvert| (object &rest arguments)
  (%qinvoke-method object nil "canConvert" arguments))

(defun |canEncode(QChar)| (object &rest arguments)
  (%qinvoke-method object nil "canEncode(QChar)" arguments))

(defun |canEncode(QString)| (object &rest arguments)
  (%qinvoke-method object nil "canEncode(QString)" arguments))

(defun |canEncode| (object &rest arguments)
  (%qinvoke-method object nil "canEncode" arguments))

(defun |canFetchMore| (object &rest arguments)
  (%qinvoke-method object nil "canFetchMore" arguments))

(defun |canPaste| (object &rest arguments)
  (%qinvoke-method object nil "canPaste" arguments))

(defun |canReadLine| (object &rest arguments)
  (%qinvoke-method object nil "canReadLine" arguments))

(defun |canRedoChanged| (object &rest arguments)
  (%qinvoke-method object nil "canRedoChanged" arguments))

(defun |canRedo| (object &rest arguments)
  (%qinvoke-method object nil "canRedo" arguments))

(defun |canUndoChanged| (object &rest arguments)
  (%qinvoke-method object nil "canUndoChanged" arguments))

(defun |canUndo| (object &rest arguments)
  (%qinvoke-method object nil "canUndo" arguments))

(defun |cancelButtonText| (object &rest arguments)
  (%qinvoke-method object nil "cancelButtonText" arguments))

(defun |cancelDelayedEvent| (object &rest arguments)
  (%qinvoke-method object nil "cancelDelayedEvent" arguments))

(defun |canceledGestures| (object &rest arguments)
  (%qinvoke-method object nil "canceledGestures" arguments))

(defun |canceled| (object &rest arguments)
  (%qinvoke-method object nil "canceled" arguments))

(defun |cancel| (object &rest arguments)
  (%qinvoke-method object nil "cancel" arguments))

(defun |canonicalFilePath| (object &rest arguments)
  (%qinvoke-method object nil "canonicalFilePath" arguments))

(defun |canonicalPath| (object &rest arguments)
  (%qinvoke-method object nil "canonicalPath" arguments))

(defun |capStyle| (object &rest arguments)
  (%qinvoke-method object nil "capStyle" arguments))

(defun |capitalization| (object &rest arguments)
  (%qinvoke-method object nil "capitalization" arguments))

(defun |captureCount| (object &rest arguments)
  (%qinvoke-method object nil "captureCount" arguments))

(defun |capturedTexts| (object &rest arguments)
  (%qinvoke-method object nil "capturedTexts" arguments))

(defun |cap| (object &rest arguments)
  (%qinvoke-method object nil "cap" arguments))

(defun |cascadeSubWindows| (object &rest arguments)
  (%qinvoke-method object nil "cascadeSubWindows" arguments))

(defun |cascade| (object &rest arguments)
  (%qinvoke-method object nil "cascade" arguments))

(defun |cascadingSectionResizes| (object &rest arguments)
  (%qinvoke-method object nil "cascadingSectionResizes" arguments))

(defun |caseSensitivity| (object &rest arguments)
  (%qinvoke-method object nil "caseSensitivity" arguments))

(defun |cdUp| (object &rest arguments)
  (%qinvoke-method object nil "cdUp" arguments))

(defun |cd| (object &rest arguments)
  (%qinvoke-method object nil "cd" arguments))

(defun |cellActivated| (object &rest arguments)
  (%qinvoke-method object nil "cellActivated" arguments))

(defun |cellAt(QTextCursor)| (object &rest arguments)
  (%qinvoke-method object nil "cellAt(QTextCursor)" arguments))

(defun |cellAt(int)| (object &rest arguments)
  (%qinvoke-method object nil "cellAt(int)" arguments))

(defun |cellAt| (object &rest arguments)
  (%qinvoke-method object nil "cellAt" arguments))

(defun |cellChanged| (object &rest arguments)
  (%qinvoke-method object nil "cellChanged" arguments))

(defun |cellClicked| (object &rest arguments)
  (%qinvoke-method object nil "cellClicked" arguments))

(defun |cellDoubleClicked| (object &rest arguments)
  (%qinvoke-method object nil "cellDoubleClicked" arguments))

(defun |cellEntered| (object &rest arguments)
  (%qinvoke-method object nil "cellEntered" arguments))

(defun |cellPadding| (object &rest arguments)
  (%qinvoke-method object nil "cellPadding" arguments))

(defun |cellPressed| (object &rest arguments)
  (%qinvoke-method object nil "cellPressed" arguments))

(defun |cellRect| (object &rest arguments)
  (%qinvoke-method object nil "cellRect" arguments))

(defun |cellSpacing| (object &rest arguments)
  (%qinvoke-method object nil "cellSpacing" arguments))

(defun |cellWidget| (object &rest arguments)
  (%qinvoke-method object nil "cellWidget" arguments))

(defun |centerButtons| (object &rest arguments)
  (%qinvoke-method object nil "centerButtons" arguments))

(defun |centerCursor| (object &rest arguments)
  (%qinvoke-method object nil "centerCursor" arguments))

(defun |centerOn(QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "centerOn(QPointF)" arguments))

(defun |centerOn(const QGraphicsItem*)| (object &rest arguments)
  (%qinvoke-method object nil "centerOn(const QGraphicsItem*)" arguments))

(defun |centerOnScroll| (object &rest arguments)
  (%qinvoke-method object nil "centerOnScroll" arguments))

(defun |centerOn| (object &rest arguments)
  (%qinvoke-method object nil "centerOn" arguments))

(defun |centerPoint| (object &rest arguments)
  (%qinvoke-method object nil "centerPoint" arguments))

(defun |center| (object &rest arguments)
  (%qinvoke-method object nil "center" arguments))

(defun |centralWidget| (object &rest arguments)
  (%qinvoke-method object nil "centralWidget" arguments))

(defun |changeBrightness| (object &rest arguments)
  (%qinvoke-method object nil "changeBrightness" arguments))

(defun |changeContrast| (object &rest arguments)
  (%qinvoke-method object nil "changeContrast" arguments))

(defun |changeFlags| (object &rest arguments)
  (%qinvoke-method object nil "changeFlags" arguments))

(defun |changeGamma| (object &rest arguments)
  (%qinvoke-method object nil "changeGamma" arguments))

(defun |changeInterval| (object &rest arguments)
  (%qinvoke-method object nil "changeInterval" arguments))

(defun |changeOverrideCursor.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "changeOverrideCursor" arguments))

(defun |changePersistentIndexList| (object &rest arguments)
  (%qinvoke-method object nil "changePersistentIndexList" arguments))

(defun |changePersistentIndex| (object &rest arguments)
  (%qinvoke-method object nil "changePersistentIndex" arguments))

(defun |changeSize| (object &rest arguments)
  (%qinvoke-method object nil "changeSize" arguments))

(defun |changed| (object &rest arguments)
  (%qinvoke-method object nil "changed" arguments))

(defun |charFormatIndex| (object &rest arguments)
  (%qinvoke-method object nil "charFormatIndex" arguments))

(defun |charFormat| (object &rest arguments)
  (%qinvoke-method object nil "charFormat" arguments))

(defun |characterAt| (object &rest arguments)
  (%qinvoke-method object nil "characterAt" arguments))

(defun |characterCount| (object &rest arguments)
  (%qinvoke-method object nil "characterCount" arguments))

(defun |checkConnectArgs.QMetaObject| (&rest arguments)
  (%qinvoke-method "QMetaObject" nil "checkConnectArgs" arguments))

(defun |checkOverflow(double)| (object &rest arguments)
  (%qinvoke-method object nil "checkOverflow(double)" arguments))

(defun |checkOverflow(int)| (object &rest arguments)
  (%qinvoke-method object nil "checkOverflow(int)" arguments))

(defun |checkOverflow| (object &rest arguments)
  (%qinvoke-method object nil "checkOverflow" arguments))

(defun |checkState| (object &rest arguments)
  (%qinvoke-method object nil "checkState" arguments))

(defun |checkedAction| (object &rest arguments)
  (%qinvoke-method object nil "checkedAction" arguments))

(defun |checkedButton| (object &rest arguments)
  (%qinvoke-method object nil "checkedButton" arguments))

(defun |checkedId| (object &rest arguments)
  (%qinvoke-method object nil "checkedId" arguments))

(defun |childAt| (object &rest arguments)
  (%qinvoke-method object nil "childAt" arguments))

(defun |childCount| (object &rest arguments)
  (%qinvoke-method object nil "childCount" arguments))

(defun |childFrames| (object &rest arguments)
  (%qinvoke-method object nil "childFrames" arguments))

(defun |childGroups| (object &rest arguments)
  (%qinvoke-method object nil "childGroups" arguments))

(defun |childIndicatorPolicy| (object &rest arguments)
  (%qinvoke-method object nil "childIndicatorPolicy" arguments))

(defun |childItems| (object &rest arguments)
  (%qinvoke-method object nil "childItems" arguments))

(defun |childKeys| (object &rest arguments)
  (%qinvoke-method object nil "childKeys" arguments))

(defun |childMode| (object &rest arguments)
  (%qinvoke-method object nil "childMode" arguments))

(defun |childrenBoundingRect| (object &rest arguments)
  (%qinvoke-method object nil "childrenBoundingRect" arguments))

(defun |childrenChanged| (object &rest arguments)
  (%qinvoke-method object nil "childrenChanged" arguments))

(defun |childrenCollapsible| (object &rest arguments)
  (%qinvoke-method object nil "childrenCollapsible" arguments))

(defun |childrenRect| (object &rest arguments)
  (%qinvoke-method object nil "childrenRect" arguments))

(defun |childrenRegion| (object &rest arguments)
  (%qinvoke-method object nil "childrenRegion" arguments))

(defun |children| (object &rest arguments)
  (%qinvoke-method object nil "children" arguments))

(defun |child| (object &rest arguments)
  (%qinvoke-method object nil "child" arguments))

(defun |classInfoCount| (object &rest arguments)
  (%qinvoke-method object nil "classInfoCount" arguments))

(defun |classInfoOffset| (object &rest arguments)
  (%qinvoke-method object nil "classInfoOffset" arguments))

(defun |className| (object &rest arguments)
  (%qinvoke-method object nil "className" arguments))

(defun |cleanChanged| (object &rest arguments)
  (%qinvoke-method object nil "cleanChanged" arguments))

(defun |cleanIcon| (object &rest arguments)
  (%qinvoke-method object nil "cleanIcon" arguments))

(defun |cleanIndex| (object &rest arguments)
  (%qinvoke-method object nil "cleanIndex" arguments))

(defun |cleanPath.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "cleanPath" arguments))

(defun |cleanText| (object &rest arguments)
  (%qinvoke-method object nil "cleanText" arguments))

(defun |cleanupPage| (object &rest arguments)
  (%qinvoke-method object nil "cleanupPage" arguments))

(defun |clear.QPixmapCache| (&rest arguments)
  (%qinvoke-method "QPixmapCache" nil "clear" arguments))

(defun |clearAdditionalFormats| (object &rest arguments)
  (%qinvoke-method object nil "clearAdditionalFormats" arguments))

(defun |clearBackground| (object &rest arguments)
  (%qinvoke-method object nil "clearBackground" arguments))

(defun |clearBit| (object &rest arguments)
  (%qinvoke-method object nil "clearBit" arguments))

(defun |clearColumnWidthConstraints| (object &rest arguments)
  (%qinvoke-method object nil "clearColumnWidthConstraints" arguments))

(defun |clearContents| (object &rest arguments)
  (%qinvoke-method object nil "clearContents" arguments))

(defun |clearEditText| (object &rest arguments)
  (%qinvoke-method object nil "clearEditText" arguments))

(defun |clearError| (object &rest arguments)
  (%qinvoke-method object nil "clearError" arguments))

(defun |clearFocus| (object &rest arguments)
  (%qinvoke-method object nil "clearFocus" arguments))

(defun |clearForeground| (object &rest arguments)
  (%qinvoke-method object nil "clearForeground" arguments))

(defun |clearHistory| (object &rest arguments)
  (%qinvoke-method object nil "clearHistory" arguments))

(defun |clearLayout| (object &rest arguments)
  (%qinvoke-method object nil "clearLayout" arguments))

(defun |clearMapping| (object &rest arguments)
  (%qinvoke-method object nil "clearMapping" arguments))

(defun |clearMask| (object &rest arguments)
  (%qinvoke-method object nil "clearMask" arguments))

(defun |clearMaximumDateTime| (object &rest arguments)
  (%qinvoke-method object nil "clearMaximumDateTime" arguments))

(defun |clearMaximumDate| (object &rest arguments)
  (%qinvoke-method object nil "clearMaximumDate" arguments))

(defun |clearMaximumTime| (object &rest arguments)
  (%qinvoke-method object nil "clearMaximumTime" arguments))

(defun |clearMessage| (object &rest arguments)
  (%qinvoke-method object nil "clearMessage" arguments))

(defun |clearMinimumDateTime| (object &rest arguments)
  (%qinvoke-method object nil "clearMinimumDateTime" arguments))

(defun |clearMinimumDate| (object &rest arguments)
  (%qinvoke-method object nil "clearMinimumDate" arguments))

(defun |clearMinimumTime| (object &rest arguments)
  (%qinvoke-method object nil "clearMinimumTime" arguments))

(defun |clearPropertyFlags| (object &rest arguments)
  (%qinvoke-method object nil "clearPropertyFlags" arguments))

(defun |clearProperty| (object &rest arguments)
  (%qinvoke-method object nil "clearProperty" arguments))

(defun |clearSelection| (object &rest arguments)
  (%qinvoke-method object nil "clearSelection" arguments))

(defun |clearSpans| (object &rest arguments)
  (%qinvoke-method object nil "clearSpans" arguments))

(defun |clear| (object &rest arguments)
  (%qinvoke-method object nil "clear" arguments))

(defun |clickedButton| (object &rest arguments)
  (%qinvoke-method object nil "clickedButton" arguments))

(defun |clicked| (object &rest arguments)
  (%qinvoke-method object nil "clicked" arguments))

(defun |click| (object &rest arguments)
  (%qinvoke-method object nil "click" arguments))

(defun |clipPath| (object &rest arguments)
  (%qinvoke-method object nil "clipPath" arguments))

(defun |clipRegion| (object &rest arguments)
  (%qinvoke-method object nil "clipRegion" arguments))

(defun |clipboard.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "clipboard" arguments))

(defun |clone| (object &rest arguments)
  (%qinvoke-method object nil "clone" arguments))

(defun |closeActiveSubWindow| (object &rest arguments)
  (%qinvoke-method object nil "closeActiveSubWindow" arguments))

(defun |closeActiveWindow| (object &rest arguments)
  (%qinvoke-method object nil "closeActiveWindow" arguments))

(defun |closeAllSubWindows| (object &rest arguments)
  (%qinvoke-method object nil "closeAllSubWindows" arguments))

(defun |closeAllWindows| (object &rest arguments)
  (%qinvoke-method object nil "closeAllWindows" arguments))

(defun |closeEditor| (object &rest arguments)
  (%qinvoke-method object nil "closeEditor" arguments))

(defun |closePersistentEditor| (object &rest arguments)
  (%qinvoke-method object nil "closePersistentEditor" arguments))

(defun |closeReadChannel| (object &rest arguments)
  (%qinvoke-method object nil "closeReadChannel" arguments))

(defun |closeSubpath| (object &rest arguments)
  (%qinvoke-method object nil "closeSubpath" arguments))

(defun |closeWriteChannel| (object &rest arguments)
  (%qinvoke-method object nil "closeWriteChannel" arguments))

(defun |closestAcceptableSize.QLayout| (&rest arguments)
  (%qinvoke-method "QLayout" nil "closestAcceptableSize" arguments))

(defun |closestLegalPosition| (object &rest arguments)
  (%qinvoke-method object nil "closestLegalPosition" arguments))

(defun |close| (object &rest arguments)
  (%qinvoke-method object nil "close" arguments))

(defun |closingDown.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "closingDown" arguments))

(defun |codecForCStrings.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "codecForCStrings" arguments))

(defun |codecForHtml.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "codecForHtml" arguments))

(defun |codecForLocale.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "codecForLocale" arguments))

(defun |codecForMib.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "codecForMib" arguments))

(defun |codecForName(QByteArray).QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "codecForName(QByteArray)" arguments))

(defun |codecForName(const char*).QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "codecForName(const char*)" arguments))

(defun |codecForName.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "codecForName" arguments))

(defun |codecForTr.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "codecForTr" arguments))

(defun |codecForUtfText.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "codecForUtfText" arguments))

(defun |codec| (object &rest arguments)
  (%qinvoke-method object nil "codec" arguments))

(defun |collapseAll| (object &rest arguments)
  (%qinvoke-method object nil "collapseAll" arguments))

(defun |collapseItem| (object &rest arguments)
  (%qinvoke-method object nil "collapseItem" arguments))

(defun |collapsed| (object &rest arguments)
  (%qinvoke-method object nil "collapsed" arguments))

(defun |collapse| (object &rest arguments)
  (%qinvoke-method object nil "collapse" arguments))

(defun |collateCopies| (object &rest arguments)
  (%qinvoke-method object nil "collateCopies" arguments))

(defun |collidesWithItem| (object &rest arguments)
  (%qinvoke-method object nil "collidesWithItem" arguments))

(defun |collidesWithPath| (object &rest arguments)
  (%qinvoke-method object nil "collidesWithPath" arguments))

(defun |collidingItems| (object &rest arguments)
  (%qinvoke-method object nil "collidingItems" arguments))

(defun |colorChanged| (object &rest arguments)
  (%qinvoke-method object nil "colorChanged" arguments))

(defun |colorCount| (object &rest arguments)
  (%qinvoke-method object nil "colorCount" arguments))

(defun |colorData| (object &rest arguments)
  (%qinvoke-method object nil "colorData" arguments))

(defun |colorMode| (object &rest arguments)
  (%qinvoke-method object nil "colorMode" arguments))

(defun |colorNames.QColor| (&rest arguments)
  (%qinvoke-method "QColor" nil "colorNames" arguments))

(defun |colorProperty| (object &rest arguments)
  (%qinvoke-method object nil "colorProperty" arguments))

(defun |colorSelected| (object &rest arguments)
  (%qinvoke-method object nil "colorSelected" arguments))

(defun |colorSpec.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "colorSpec" arguments))

(defun |colorTable| (object &rest arguments)
  (%qinvoke-method object nil "colorTable" arguments))

(defun |color| (object &rest arguments)
  (%qinvoke-method object nil "color" arguments))

(defun |columnAlignment| (object &rest arguments)
  (%qinvoke-method object nil "columnAlignment" arguments))

(defun |columnAt| (object &rest arguments)
  (%qinvoke-method object nil "columnAt" arguments))

(defun |columnCountChanged| (object &rest arguments)
  (%qinvoke-method object nil "columnCountChanged" arguments))

(defun |columnCount| (object &rest arguments)
  (%qinvoke-method object nil "columnCount" arguments))

(defun |columnIntersectsSelection| (object &rest arguments)
  (%qinvoke-method object nil "columnIntersectsSelection" arguments))

(defun |columnMaximumWidth| (object &rest arguments)
  (%qinvoke-method object nil "columnMaximumWidth" arguments))

(defun |columnMinimumWidth| (object &rest arguments)
  (%qinvoke-method object nil "columnMinimumWidth" arguments))

(defun |columnMoved| (object &rest arguments)
  (%qinvoke-method object nil "columnMoved" arguments))

(defun |columnNumber| (object &rest arguments)
  (%qinvoke-method object nil "columnNumber" arguments))

(defun |columnPreferredWidth| (object &rest arguments)
  (%qinvoke-method object nil "columnPreferredWidth" arguments))

(defun |columnResized| (object &rest arguments)
  (%qinvoke-method object nil "columnResized" arguments))

(defun |columnSpacing| (object &rest arguments)
  (%qinvoke-method object nil "columnSpacing" arguments))

(defun |columnSpan| (object &rest arguments)
  (%qinvoke-method object nil "columnSpan" arguments))

(defun |columnStretchFactor| (object &rest arguments)
  (%qinvoke-method object nil "columnStretchFactor" arguments))

(defun |columnStretch| (object &rest arguments)
  (%qinvoke-method object nil "columnStretch" arguments))

(defun |columnViewportPosition| (object &rest arguments)
  (%qinvoke-method object nil "columnViewportPosition" arguments))

(defun |columnWidthConstraints| (object &rest arguments)
  (%qinvoke-method object nil "columnWidthConstraints" arguments))

(defun |columnWidths| (object &rest arguments)
  (%qinvoke-method object nil "columnWidths" arguments))

(defun |columnWidth| (object &rest arguments)
  (%qinvoke-method object nil "columnWidth" arguments))

(defun |columnsAboutToBeInserted| (object &rest arguments)
  (%qinvoke-method object nil "columnsAboutToBeInserted" arguments))

(defun |columnsAboutToBeMoved| (object &rest arguments)
  (%qinvoke-method object nil "columnsAboutToBeMoved" arguments))

(defun |columnsAboutToBeRemoved| (object &rest arguments)
  (%qinvoke-method object nil "columnsAboutToBeRemoved" arguments))

(defun |columnsInserted| (object &rest arguments)
  (%qinvoke-method object nil "columnsInserted" arguments))

(defun |columnsMoved| (object &rest arguments)
  (%qinvoke-method object nil "columnsMoved" arguments))

(defun |columnsRemoved| (object &rest arguments)
  (%qinvoke-method object nil "columnsRemoved" arguments))

(defun |columns| (object &rest arguments)
  (%qinvoke-method object nil "columns" arguments))

(defun |column| (object &rest arguments)
  (%qinvoke-method object nil "column" arguments))

(defun |combinedLayoutSpacing| (object &rest arguments)
  (%qinvoke-method object nil "combinedLayoutSpacing" arguments))

(defun |combinedTransform| (object &rest arguments)
  (%qinvoke-method object nil "combinedTransform" arguments))

(defun |comboBoxItems| (object &rest arguments)
  (%qinvoke-method object nil "comboBoxItems" arguments))

(defun |command| (object &rest arguments)
  (%qinvoke-method object nil "command" arguments))

(defun |commitDataRequest| (object &rest arguments)
  (%qinvoke-method object nil "commitDataRequest" arguments))

(defun |commitData| (object &rest arguments)
  (%qinvoke-method object nil "commitData" arguments))

(defun |commitString| (object &rest arguments)
  (%qinvoke-method object nil "commitString" arguments))

(defun |commonAncestorItem| (object &rest arguments)
  (%qinvoke-method object nil "commonAncestorItem" arguments))

(defun |completeBaseName| (object &rest arguments)
  (%qinvoke-method object nil "completeBaseName" arguments))

(defun |completeChanged| (object &rest arguments)
  (%qinvoke-method object nil "completeChanged" arguments))

(defun |completeSuffix| (object &rest arguments)
  (%qinvoke-method object nil "completeSuffix" arguments))

(defun |completer| (object &rest arguments)
  (%qinvoke-method object nil "completer" arguments))

(defun |complete| (object &rest arguments)
  (%qinvoke-method object nil "complete" arguments))

(defun |completionColumn| (object &rest arguments)
  (%qinvoke-method object nil "completionColumn" arguments))

(defun |completionCount| (object &rest arguments)
  (%qinvoke-method object nil "completionCount" arguments))

(defun |completionModel| (object &rest arguments)
  (%qinvoke-method object nil "completionModel" arguments))

(defun |completionMode| (object &rest arguments)
  (%qinvoke-method object nil "completionMode" arguments))

(defun |completionPrefix| (object &rest arguments)
  (%qinvoke-method object nil "completionPrefix" arguments))

(defun |completionRole| (object &rest arguments)
  (%qinvoke-method object nil "completionRole" arguments))

(defun |compositionMode| (object &rest arguments)
  (%qinvoke-method object nil "compositionMode" arguments))

(defun |confirmOverwrite| (object &rest arguments)
  (%qinvoke-method object nil "confirmOverwrite" arguments))

(defun |conjugate| (object &rest arguments)
  (%qinvoke-method object nil "conjugate" arguments))

(defun |connect.QObject| (&rest arguments)
  (%qinvoke-method "QObject" nil "connect" arguments))

(defun |connectPath| (object &rest arguments)
  (%qinvoke-method object nil "connectPath" arguments))

(defun |connectSlotsByName.QMetaObject| (&rest arguments)
  (%qinvoke-method "QMetaObject" nil "connectSlotsByName" arguments))

(defun |connect| (object &rest arguments)
  (%qinvoke-method object nil "connect" arguments))

(defun |constructorCount| (object &rest arguments)
  (%qinvoke-method object nil "constructorCount" arguments))

(defun |contains(QPainterPath)| (object &rest arguments)
  (%qinvoke-method object nil "contains(QPainterPath)" arguments))

(defun |contains(QPoint)| (object &rest arguments)
  (%qinvoke-method object nil "contains(QPoint)" arguments))

(defun |contains(QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "contains(QPointF)" arguments))

(defun |contains(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "contains(QRect)" arguments))

(defun |contains(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "contains(QRectF)" arguments))

(defun |contains| (object &rest arguments)
  (%qinvoke-method object nil "contains" arguments))

(defun |contentOffset| (object &rest arguments)
  (%qinvoke-method object nil "contentOffset" arguments))

(defun |contentsChanged| (object &rest arguments)
  (%qinvoke-method object nil "contentsChanged" arguments))

(defun |contentsChange| (object &rest arguments)
  (%qinvoke-method object nil "contentsChange" arguments))

(defun |contentsMargins| (object &rest arguments)
  (%qinvoke-method object nil "contentsMargins" arguments))

(defun |contentsRect| (object &rest arguments)
  (%qinvoke-method object nil "contentsRect" arguments))

(defun |contextMenuPolicy| (object &rest arguments)
  (%qinvoke-method object nil "contextMenuPolicy" arguments))

(defun |contextMenu| (object &rest arguments)
  (%qinvoke-method object nil "contextMenu" arguments))

(defun |context| (object &rest arguments)
  (%qinvoke-method object nil "context" arguments))

(defun |controlPointRect| (object &rest arguments)
  (%qinvoke-method object nil "controlPointRect" arguments))

(defun |controlTypes| (object &rest arguments)
  (%qinvoke-method object nil "controlTypes" arguments))

(defun |controlType| (object &rest arguments)
  (%qinvoke-method object nil "controlType" arguments))

(defun |convertToFormat(QImage::Format,QVector<QRgb>)| (object &rest arguments)
  (%qinvoke-method object nil "convertToFormat(QImage::Format,QVector<QRgb>)" arguments))

(defun |convertToFormat(QImage::Format,Qt::ImageConversionFlags)| (object &rest arguments)
  (%qinvoke-method object nil "convertToFormat(QImage::Format,Qt::ImageConversionFlags)" arguments))

(defun |convertToFormat| (object &rest arguments)
  (%qinvoke-method object nil "convertToFormat" arguments))

(defun |convertTo| (object &rest arguments)
  (%qinvoke-method object nil "convertTo" arguments))

(defun |convert| (object &rest arguments)
  (%qinvoke-method object nil "convert" arguments))

(defun |coordinateMode| (object &rest arguments)
  (%qinvoke-method object nil "coordinateMode" arguments))

(defun |copy.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "copy" arguments))

(defun |copyAvailable| (object &rest arguments)
  (%qinvoke-method object nil "copyAvailable" arguments))

(defun |copy| (object &rest arguments)
  (%qinvoke-method object nil "copy" arguments))

(defun |cornerWidget| (object &rest arguments)
  (%qinvoke-method object nil "cornerWidget" arguments))

(defun |corner| (object &rest arguments)
  (%qinvoke-method object nil "corner" arguments))

(defun |correctionMode| (object &rest arguments)
  (%qinvoke-method object nil "correctionMode" arguments))

(defun |countryToString.QLocale| (&rest arguments)
  (%qinvoke-method "QLocale" nil "countryToString" arguments))

(defun |country| (object &rest arguments)
  (%qinvoke-method object nil "country" arguments))

(defun |count| (object &rest arguments)
  (%qinvoke-method object nil "count" arguments))

(defun |createAction.QWhatsThis| (&rest arguments)
  (%qinvoke-method "QWhatsThis" nil "createAction" arguments))

(defun |createAlphaMask| (object &rest arguments)
  (%qinvoke-method object nil "createAlphaMask" arguments))

(defun |createEditor| (object &rest arguments)
  (%qinvoke-method object nil "createEditor" arguments))

(defun |createHeuristicMask| (object &rest arguments)
  (%qinvoke-method object nil "createHeuristicMask" arguments))

(defun |createItemGroup| (object &rest arguments)
  (%qinvoke-method object nil "createItemGroup" arguments))

(defun |createLine| (object &rest arguments)
  (%qinvoke-method object nil "createLine" arguments))

(defun |createList(QTextListFormat)| (object &rest arguments)
  (%qinvoke-method object nil "createList(QTextListFormat)" arguments))

(defun |createList(QTextListFormat::Style)| (object &rest arguments)
  (%qinvoke-method object nil "createList(QTextListFormat::Style)" arguments))

(defun |createList| (object &rest arguments)
  (%qinvoke-method object nil "createList" arguments))

(defun |createMaskFromColor| (object &rest arguments)
  (%qinvoke-method object nil "createMaskFromColor" arguments))

(defun |createPopupMenu| (object &rest arguments)
  (%qinvoke-method object nil "createPopupMenu" arguments))

(defun |createProxyForChildWidget| (object &rest arguments)
  (%qinvoke-method object nil "createProxyForChildWidget" arguments))

(defun |createRedoAction| (object &rest arguments)
  (%qinvoke-method object nil "createRedoAction" arguments))

(defun |createStandardContextMenu| (object &rest arguments)
  (%qinvoke-method object nil "createStandardContextMenu" arguments))

(defun |createStroke| (object &rest arguments)
  (%qinvoke-method object nil "createStroke" arguments))

(defun |createUndoAction| (object &rest arguments)
  (%qinvoke-method object nil "createUndoAction" arguments))

(defun |createdWidgets| (object &rest arguments)
  (%qinvoke-method object nil "createdWidgets" arguments))

(defun |created| (object &rest arguments)
  (%qinvoke-method object nil "created" arguments))

(defun |creator| (object &rest arguments)
  (%qinvoke-method object nil "creator" arguments))

(defun |critical.QMessageBox| (&rest arguments)
  (%qinvoke-method "QMessageBox" nil "critical" arguments))

(defun |crossProduct.QVector3D| (&rest arguments)
  (%qinvoke-method "QVector3D" nil "crossProduct" arguments))

(defun |cubicTo| (object &rest arguments)
  (%qinvoke-method object nil "cubicTo" arguments))

(defun |current.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "current" arguments))

(defun |currentAnimationChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentAnimationChanged" arguments))

(defun |currentAnimation| (object &rest arguments)
  (%qinvoke-method object nil "currentAnimation" arguments))

(defun |currentBlockState| (object &rest arguments)
  (%qinvoke-method object nil "currentBlockState" arguments))

(defun |currentBlockUserData| (object &rest arguments)
  (%qinvoke-method object nil "currentBlockUserData" arguments))

(defun |currentBlock| (object &rest arguments)
  (%qinvoke-method object nil "currentBlock" arguments))

(defun |currentCellChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentCellChanged" arguments))

(defun |currentChanged(QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "currentChanged(QWidget*)" arguments))

(defun |currentChanged(int)| (object &rest arguments)
  (%qinvoke-method object nil "currentChanged(int)" arguments))

(defun |currentChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentChanged" arguments))

(defun |currentCharFormatChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentCharFormatChanged" arguments))

(defun |currentCharFormat| (object &rest arguments)
  (%qinvoke-method object nil "currentCharFormat" arguments))

(defun |currentColorChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentColorChanged" arguments))

(defun |currentColorGroup| (object &rest arguments)
  (%qinvoke-method object nil "currentColorGroup" arguments))

(defun |currentColor| (object &rest arguments)
  (%qinvoke-method object nil "currentColor" arguments))

(defun |currentColumnChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentColumnChanged" arguments))

(defun |currentColumn| (object &rest arguments)
  (%qinvoke-method object nil "currentColumn" arguments))

(defun |currentCompletion| (object &rest arguments)
  (%qinvoke-method object nil "currentCompletion" arguments))

(defun |currentDate.QDate| (&rest arguments)
  (%qinvoke-method "QDate" nil "currentDate" arguments))

(defun |currentDateTime.QDateTime| (&rest arguments)
  (%qinvoke-method "QDateTime" nil "currentDateTime" arguments))

(defun |currentFontChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentFontChanged" arguments))

(defun |currentFont| (object &rest arguments)
  (%qinvoke-method object nil "currentFont" arguments))

(defun |currentFrameNumber| (object &rest arguments)
  (%qinvoke-method object nil "currentFrameNumber" arguments))

(defun |currentFrame| (object &rest arguments)
  (%qinvoke-method object nil "currentFrame" arguments))

(defun |currentIdChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentIdChanged" arguments))

(defun |currentId| (object &rest arguments)
  (%qinvoke-method object nil "currentId" arguments))

(defun |currentImage| (object &rest arguments)
  (%qinvoke-method object nil "currentImage" arguments))

(defun |currentIndexChanged(QString)| (object &rest arguments)
  (%qinvoke-method object nil "currentIndexChanged(QString)" arguments))

(defun |currentIndexChanged(int)| (object &rest arguments)
  (%qinvoke-method object nil "currentIndexChanged(int)" arguments))

(defun |currentIndexChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentIndexChanged" arguments))

(defun |currentIndex| (object &rest arguments)
  (%qinvoke-method object nil "currentIndex" arguments))

(defun |currentItemChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentItemChanged" arguments))

(defun |currentItem| (object &rest arguments)
  (%qinvoke-method object nil "currentItem" arguments))

(defun |currentList| (object &rest arguments)
  (%qinvoke-method object nil "currentList" arguments))

(defun |currentLoopChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentLoopChanged" arguments))

(defun |currentLoopTime| (object &rest arguments)
  (%qinvoke-method object nil "currentLoopTime" arguments))

(defun |currentLoop| (object &rest arguments)
  (%qinvoke-method object nil "currentLoop" arguments))

(defun |currentMessage| (object &rest arguments)
  (%qinvoke-method object nil "currentMessage" arguments))

(defun |currentPageChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentPageChanged" arguments))

(defun |currentPage| (object &rest arguments)
  (%qinvoke-method object nil "currentPage" arguments))

(defun |currentPath.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "currentPath" arguments))

(defun |currentPixmap| (object &rest arguments)
  (%qinvoke-method object nil "currentPixmap" arguments))

(defun |currentPosition| (object &rest arguments)
  (%qinvoke-method object nil "currentPosition" arguments))

(defun |currentRowChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentRowChanged" arguments))

(defun |currentRow| (object &rest arguments)
  (%qinvoke-method object nil "currentRow" arguments))

(defun |currentSectionIndex| (object &rest arguments)
  (%qinvoke-method object nil "currentSectionIndex" arguments))

(defun |currentSection| (object &rest arguments)
  (%qinvoke-method object nil "currentSection" arguments))

(defun |currentSubWindow| (object &rest arguments)
  (%qinvoke-method object nil "currentSubWindow" arguments))

(defun |currentTable| (object &rest arguments)
  (%qinvoke-method object nil "currentTable" arguments))

(defun |currentTextChanged| (object &rest arguments)
  (%qinvoke-method object nil "currentTextChanged" arguments))

(defun |currentText| (object &rest arguments)
  (%qinvoke-method object nil "currentText" arguments))

(defun |currentTime.QTime| (&rest arguments)
  (%qinvoke-method "QTime" nil "currentTime" arguments))

(defun |currentTime| (object &rest arguments)
  (%qinvoke-method object nil "currentTime" arguments))

(defun |currentValue| (object &rest arguments)
  (%qinvoke-method object nil "currentValue" arguments))

(defun |currentWidget| (object &rest arguments)
  (%qinvoke-method object nil "currentWidget" arguments))

(defun |cursorBackward| (object &rest arguments)
  (%qinvoke-method object nil "cursorBackward" arguments))

(defun |cursorFlashTime.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "cursorFlashTime" arguments))

(defun |cursorForPosition| (object &rest arguments)
  (%qinvoke-method object nil "cursorForPosition" arguments))

(defun |cursorForward| (object &rest arguments)
  (%qinvoke-method object nil "cursorForward" arguments))

(defun |cursorPositionAt| (object &rest arguments)
  (%qinvoke-method object nil "cursorPositionAt" arguments))

(defun |cursorPositionChanged| (object &rest arguments)
  (%qinvoke-method object nil "cursorPositionChanged" arguments))

(defun |cursorPosition| (object &rest arguments)
  (%qinvoke-method object nil "cursorPosition" arguments))

(defun |cursorRect| (object &rest arguments)
  (%qinvoke-method object nil "cursorRect" arguments))

(defun |cursorToX| (object &rest arguments)
  (%qinvoke-method object nil "cursorToX" arguments))

(defun |cursorWidth| (object &rest arguments)
  (%qinvoke-method object nil "cursorWidth" arguments))

(defun |cursorWordBackward| (object &rest arguments)
  (%qinvoke-method object nil "cursorWordBackward" arguments))

(defun |cursorWordForward| (object &rest arguments)
  (%qinvoke-method object nil "cursorWordForward" arguments))

(defun |cursor| (object &rest arguments)
  (%qinvoke-method object nil "cursor" arguments))

(defun |curveShape| (object &rest arguments)
  (%qinvoke-method object nil "curveShape" arguments))

(defun |curveThreshold| (object &rest arguments)
  (%qinvoke-method object nil "curveThreshold" arguments))

(defun |customButtonClicked| (object &rest arguments)
  (%qinvoke-method object nil "customButtonClicked" arguments))

(defun |customColor.QColorDialog| (&rest arguments)
  (%qinvoke-method "QColorDialog" nil "customColor" arguments))

(defun |customContextMenuRequested| (object &rest arguments)
  (%qinvoke-method object nil "customContextMenuRequested" arguments))

(defun |customCount.QColorDialog| (&rest arguments)
  (%qinvoke-method "QColorDialog" nil "customCount" arguments))

(defun |cut| (object &rest arguments)
  (%qinvoke-method object nil "cut" arguments))

(defun |cyanF| (object &rest arguments)
  (%qinvoke-method object nil "cyanF" arguments))

(defun |cyan| (object &rest arguments)
  (%qinvoke-method object nil "cyan" arguments))

(defun |darker| (object &rest arguments)
  (%qinvoke-method object nil "darker" arguments))

(defun |dark| (object &rest arguments)
  (%qinvoke-method object nil "dark" arguments))

(defun |dashOffset| (object &rest arguments)
  (%qinvoke-method object nil "dashOffset" arguments))

(defun |dashPattern| (object &rest arguments)
  (%qinvoke-method object nil "dashPattern" arguments))

(defun |dataChanged| (object &rest arguments)
  (%qinvoke-method object nil "dataChanged" arguments))

(defun |data| (object &rest arguments)
  (%qinvoke-method object nil "data" arguments))

(defun |dateChanged| (object &rest arguments)
  (%qinvoke-method object nil "dateChanged" arguments))

(defun |dateEditAcceptDelay| (object &rest arguments)
  (%qinvoke-method object nil "dateEditAcceptDelay" arguments))

(defun |dateFormat| (object &rest arguments)
  (%qinvoke-method object nil "dateFormat" arguments))

(defun |dateTextFormat| (object &rest arguments)
  (%qinvoke-method object nil "dateTextFormat" arguments))

(defun |dateTimeChanged| (object &rest arguments)
  (%qinvoke-method object nil "dateTimeChanged" arguments))

(defun |dateTimeFormat| (object &rest arguments)
  (%qinvoke-method object nil "dateTimeFormat" arguments))

(defun |dateTime| (object &rest arguments)
  (%qinvoke-method object nil "dateTime" arguments))

(defun |date| (object &rest arguments)
  (%qinvoke-method object nil "date" arguments))

(defun |dayName| (object &rest arguments)
  (%qinvoke-method object nil "dayName" arguments))

(defun |dayOfWeek| (object &rest arguments)
  (%qinvoke-method object nil "dayOfWeek" arguments))

(defun |dayOfYear| (object &rest arguments)
  (%qinvoke-method object nil "dayOfYear" arguments))

(defun |daysInMonth| (object &rest arguments)
  (%qinvoke-method object nil "daysInMonth" arguments))

(defun |daysInYear| (object &rest arguments)
  (%qinvoke-method object nil "daysInYear" arguments))

(defun |daysTo| (object &rest arguments)
  (%qinvoke-method object nil "daysTo" arguments))

(defun |day| (object &rest arguments)
  (%qinvoke-method object nil "day" arguments))

(defun |decimalPoint| (object &rest arguments)
  (%qinvoke-method object nil "decimalPoint" arguments))

(defun |decimals| (object &rest arguments)
  (%qinvoke-method object nil "decimals" arguments))

(defun |decodeName(QByteArray).QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "decodeName(QByteArray)" arguments))

(defun |decodeName(const char*).QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "decodeName(const char*)" arguments))

(defun |decodeName.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "decodeName" arguments))

(defun |defaultAlignment| (object &rest arguments)
  (%qinvoke-method object nil "defaultAlignment" arguments))

(defun |defaultAnimations| (object &rest arguments)
  (%qinvoke-method object nil "defaultAnimations" arguments))

(defun |defaultButton| (object &rest arguments)
  (%qinvoke-method object nil "defaultButton" arguments))

(defun |defaultDepth.QPixmap| (&rest arguments)
  (%qinvoke-method "QPixmap" nil "defaultDepth" arguments))

(defun |defaultDropAction| (object &rest arguments)
  (%qinvoke-method object nil "defaultDropAction" arguments))

(defun |defaultFactory.QItemEditorFactory| (&rest arguments)
  (%qinvoke-method "QItemEditorFactory" nil "defaultFactory" arguments))

(defun |defaultFamily| (object &rest arguments)
  (%qinvoke-method object nil "defaultFamily" arguments))

(defun |defaultFont| (object &rest arguments)
  (%qinvoke-method object nil "defaultFont" arguments))

(defun |defaultFormat.QSettings| (&rest arguments)
  (%qinvoke-method "QSettings" nil "defaultFormat" arguments))

(defun |defaultSectionSize| (object &rest arguments)
  (%qinvoke-method object nil "defaultSectionSize" arguments))

(defun |defaultState| (object &rest arguments)
  (%qinvoke-method object nil "defaultState" arguments))

(defun |defaultStyleSheet| (object &rest arguments)
  (%qinvoke-method object nil "defaultStyleSheet" arguments))

(defun |defaultSuffix| (object &rest arguments)
  (%qinvoke-method object nil "defaultSuffix" arguments))

(defun |defaultTextColor| (object &rest arguments)
  (%qinvoke-method object nil "defaultTextColor" arguments))

(defun |defaultTextOption| (object &rest arguments)
  (%qinvoke-method object nil "defaultTextOption" arguments))

(defun |defaultWidget| (object &rest arguments)
  (%qinvoke-method object nil "defaultWidget" arguments))

(defun |deleteChar| (object &rest arguments)
  (%qinvoke-method object nil "deleteChar" arguments))

(defun |deleteLater| (object &rest arguments)
  (%qinvoke-method object nil "deleteLater" arguments))

(defun |deletePreviousChar| (object &rest arguments)
  (%qinvoke-method object nil "deletePreviousChar" arguments))

(defun |delta| (object &rest arguments)
  (%qinvoke-method object nil "delta" arguments))

(defun |del| (object &rest arguments)
  (%qinvoke-method object nil "del" arguments))

(defun |depth| (object &rest arguments)
  (%qinvoke-method object nil "depth" arguments))

(defun |descent| (object &rest arguments)
  (%qinvoke-method object nil "descent" arguments))

(defun |description| (object &rest arguments)
  (%qinvoke-method object nil "description" arguments))

(defun |deselect| (object &rest arguments)
  (%qinvoke-method object nil "deselect" arguments))

(defun |desktop.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "desktop" arguments))

(defun |desktopSettingsAware.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "desktopSettingsAware" arguments))

(defun |destroyItemGroup| (object &rest arguments)
  (%qinvoke-method object nil "destroyItemGroup" arguments))

(defun |destroyed| (object &rest arguments)
  (%qinvoke-method object nil "destroyed" arguments))

(defun |destroy| (object &rest arguments)
  (%qinvoke-method object nil "destroy" arguments))

(defun |detach| (object &rest arguments)
  (%qinvoke-method object nil "detach" arguments))

(defun |detailedText| (object &rest arguments)
  (%qinvoke-method object nil "detailedText" arguments))

(defun |determinant| (object &rest arguments)
  (%qinvoke-method object nil "determinant" arguments))

(defun |deviceTransform| (object &rest arguments)
  (%qinvoke-method object nil "deviceTransform" arguments))

(defun |deviceType| (object &rest arguments)
  (%qinvoke-method object nil "deviceType" arguments))

(defun |device| (object &rest arguments)
  (%qinvoke-method object nil "device" arguments))

(defun |dialMoved| (object &rest arguments)
  (%qinvoke-method object nil "dialMoved" arguments))

(defun |dialPressed| (object &rest arguments)
  (%qinvoke-method object nil "dialPressed" arguments))

(defun |dialReleased| (object &rest arguments)
  (%qinvoke-method object nil "dialReleased" arguments))

(defun |digitCount| (object &rest arguments)
  (%qinvoke-method object nil "digitCount" arguments))

(defun |dirName| (object &rest arguments)
  (%qinvoke-method object nil "dirName" arguments))

(defun |directionChanged| (object &rest arguments)
  (%qinvoke-method object nil "directionChanged" arguments))

(defun |direction| (object &rest arguments)
  (%qinvoke-method object nil "direction" arguments))

(defun |directories| (object &rest arguments)
  (%qinvoke-method object nil "directories" arguments))

(defun |directoryChanged| (object &rest arguments)
  (%qinvoke-method object nil "directoryChanged" arguments))

(defun |directoryEntered| (object &rest arguments)
  (%qinvoke-method object nil "directoryEntered" arguments))

(defun |directoryLoaded| (object &rest arguments)
  (%qinvoke-method object nil "directoryLoaded" arguments))

(defun |directory| (object &rest arguments)
  (%qinvoke-method object nil "directory" arguments))

(defun |dirtyRegionOffset| (object &rest arguments)
  (%qinvoke-method object nil "dirtyRegionOffset" arguments))

(defun |dir| (object &rest arguments)
  (%qinvoke-method object nil "dir" arguments))

(defun |discardCommand| (object &rest arguments)
  (%qinvoke-method object nil "discardCommand" arguments))

(defun |disconnect(const QObject*)| (object &rest arguments)
  (%qinvoke-method object nil "disconnect(const QObject*)" arguments))

(defun |disconnect(const QObject*...)| (object &rest arguments)
  (%qinvoke-method object nil "disconnect(const QObject*...)" arguments))

(defun |disconnect(const char*)| (object &rest arguments)
  (%qinvoke-method object nil "disconnect(const char*)" arguments))

(defun |disconnect(const char*...)| (object &rest arguments)
  (%qinvoke-method object nil "disconnect(const char*...)" arguments))

(defun |disconnect.QObject| (&rest arguments)
  (%qinvoke-method "QObject" nil "disconnect" arguments))

(defun |disconnect| (object &rest arguments)
  (%qinvoke-method object nil "disconnect" arguments))

(defun |display(QString)| (object &rest arguments)
  (%qinvoke-method object nil "display(QString)" arguments))

(defun |display(double)| (object &rest arguments)
  (%qinvoke-method object nil "display(double)" arguments))

(defun |display(int)| (object &rest arguments)
  (%qinvoke-method object nil "display(int)" arguments))

(defun |displayFormat| (object &rest arguments)
  (%qinvoke-method object nil "displayFormat" arguments))

(defun |displayName.QDesktopServices| (&rest arguments)
  (%qinvoke-method "QDesktopServices" nil "displayName" arguments))

(defun |displayText| (object &rest arguments)
  (%qinvoke-method object nil "displayText" arguments))

(defun |displayedSections| (object &rest arguments)
  (%qinvoke-method object nil "displayedSections" arguments))

(defun |display| (object &rest arguments)
  (%qinvoke-method object nil "display" arguments))

(defun |distanceToLine| (object &rest arguments)
  (%qinvoke-method object nil "distanceToLine" arguments))

(defun |distanceToPlane| (object &rest arguments)
  (%qinvoke-method object nil "distanceToPlane" arguments))

(defun |doAction| (object &rest arguments)
  (%qinvoke-method object nil "doAction" arguments))

(defun |doItemsLayout| (object &rest arguments)
  (%qinvoke-method object nil "doItemsLayout" arguments))

(defun |docName| (object &rest arguments)
  (%qinvoke-method object nil "docName" arguments))

(defun |dockLocationChanged| (object &rest arguments)
  (%qinvoke-method object nil "dockLocationChanged" arguments))

(defun |dockOptions| (object &rest arguments)
  (%qinvoke-method object nil "dockOptions" arguments))

(defun |dockWidgetArea| (object &rest arguments)
  (%qinvoke-method object nil "dockWidgetArea" arguments))

(defun |documentLayoutChanged| (object &rest arguments)
  (%qinvoke-method object nil "documentLayoutChanged" arguments))

(defun |documentLayout| (object &rest arguments)
  (%qinvoke-method object nil "documentLayout" arguments))

(defun |documentMargin| (object &rest arguments)
  (%qinvoke-method object nil "documentMargin" arguments))

(defun |documentMode| (object &rest arguments)
  (%qinvoke-method object nil "documentMode" arguments))

(defun |documentSizeChanged| (object &rest arguments)
  (%qinvoke-method object nil "documentSizeChanged" arguments))

(defun |documentSize| (object &rest arguments)
  (%qinvoke-method object nil "documentSize" arguments))

(defun |documentTitle| (object &rest arguments)
  (%qinvoke-method object nil "documentTitle" arguments))

(defun |document| (object &rest arguments)
  (%qinvoke-method object nil "document" arguments))

(defun |done| (object &rest arguments)
  (%qinvoke-method object nil "done" arguments))

(defun |dotProduct.QVector2D| (&rest arguments)
  (%qinvoke-method "QVector2D" nil "dotProduct" arguments))

(defun |dotProduct.QVector3D| (&rest arguments)
  (%qinvoke-method "QVector3D" nil "dotProduct" arguments))

(defun |dotProduct.QVector4D| (&rest arguments)
  (%qinvoke-method "QVector4D" nil "dotProduct" arguments))

(defun |dotsPerMeterX| (object &rest arguments)
  (%qinvoke-method object nil "dotsPerMeterX" arguments))

(defun |dotsPerMeterY| (object &rest arguments)
  (%qinvoke-method object nil "dotsPerMeterY" arguments))

(defun |doubleClickInterval.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "doubleClickInterval" arguments))

(defun |doubleClicked| (object &rest arguments)
  (%qinvoke-method object nil "doubleClicked" arguments))

(defun |doubleDecimals| (object &rest arguments)
  (%qinvoke-method object nil "doubleDecimals" arguments))

(defun |doubleMaximum| (object &rest arguments)
  (%qinvoke-method object nil "doubleMaximum" arguments))

(defun |doubleMinimum| (object &rest arguments)
  (%qinvoke-method object nil "doubleMinimum" arguments))

(defun |doubleProperty| (object &rest arguments)
  (%qinvoke-method object nil "doubleProperty" arguments))

(defun |doubleSidedPrinting| (object &rest arguments)
  (%qinvoke-method object nil "doubleSidedPrinting" arguments))

(defun |doubleValueChanged| (object &rest arguments)
  (%qinvoke-method object nil "doubleValueChanged" arguments))

(defun |doubleValueSelected| (object &rest arguments)
  (%qinvoke-method object nil "doubleValueSelected" arguments))

(defun |doubleValue| (object &rest arguments)
  (%qinvoke-method object nil "doubleValue" arguments))

(defun |dragDropMode| (object &rest arguments)
  (%qinvoke-method object nil "dragDropMode" arguments))

(defun |dragDropOverwriteMode| (object &rest arguments)
  (%qinvoke-method object nil "dragDropOverwriteMode" arguments))

(defun |dragEnabled| (object &rest arguments)
  (%qinvoke-method object nil "dragEnabled" arguments))

(defun |dragMode| (object &rest arguments)
  (%qinvoke-method object nil "dragMode" arguments))

(defun |drawArc(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "drawArc(QRect...)" arguments))

(defun |drawArc(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawArc(QRectF...)" arguments))

(defun |drawArc| (object &rest arguments)
  (%qinvoke-method object nil "drawArc" arguments))

(defun |drawBackground| (object &rest arguments)
  (%qinvoke-method object nil "drawBackground" arguments))

(defun |drawBase| (object &rest arguments)
  (%qinvoke-method object nil "drawBase" arguments))

(defun |drawChord(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "drawChord(QRect...)" arguments))

(defun |drawChord(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawChord(QRectF...)" arguments))

(defun |drawChord| (object &rest arguments)
  (%qinvoke-method object nil "drawChord" arguments))

(defun |drawComplexControl| (object &rest arguments)
  (%qinvoke-method object nil "drawComplexControl" arguments))

(defun |drawContents| (object &rest arguments)
  (%qinvoke-method object nil "drawContents" arguments))

(defun |drawControl| (object &rest arguments)
  (%qinvoke-method object nil "drawControl" arguments))

(defun |drawConvexPolygon(QPolygon)| (object &rest arguments)
  (%qinvoke-method object nil "drawConvexPolygon(QPolygon)" arguments))

(defun |drawConvexPolygon(QPolygonF)| (object &rest arguments)
  (%qinvoke-method object nil "drawConvexPolygon(QPolygonF)" arguments))

(defun |drawConvexPolygon| (object &rest arguments)
  (%qinvoke-method object nil "drawConvexPolygon" arguments))

(defun |drawCursor| (object &rest arguments)
  (%qinvoke-method object nil "drawCursor" arguments))

(defun |drawEllipse(QPoint...)| (object &rest arguments)
  (%qinvoke-method object nil "drawEllipse(QPoint...)" arguments))

(defun |drawEllipse(QPointF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawEllipse(QPointF...)" arguments))

(defun |drawEllipse(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "drawEllipse(QRect)" arguments))

(defun |drawEllipse(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "drawEllipse(QRectF)" arguments))

(defun |drawEllipse| (object &rest arguments)
  (%qinvoke-method object nil "drawEllipse" arguments))

(defun |drawImage(QPoint...)| (object &rest arguments)
  (%qinvoke-method object nil "drawImage(QPoint...)" arguments))

(defun |drawImage(QPointF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawImage(QPointF...)" arguments))

(defun |drawImage(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "drawImage(QRect...)" arguments))

(defun |drawImage(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawImage(QRectF...)" arguments))

(defun |drawImage(int...)| (object &rest arguments)
  (%qinvoke-method object nil "drawImage(int...)" arguments))

(defun |drawImage| (object &rest arguments)
  (%qinvoke-method object nil "drawImage" arguments))

(defun |drawItemPixmap| (object &rest arguments)
  (%qinvoke-method object nil "drawItemPixmap" arguments))

(defun |drawItemText| (object &rest arguments)
  (%qinvoke-method object nil "drawItemText" arguments))

(defun |drawLine(QLine)| (object &rest arguments)
  (%qinvoke-method object nil "drawLine(QLine)" arguments))

(defun |drawLine(QLineF)| (object &rest arguments)
  (%qinvoke-method object nil "drawLine(QLineF)" arguments))

(defun |drawLine(QPoint...)| (object &rest arguments)
  (%qinvoke-method object nil "drawLine(QPoint...)" arguments))

(defun |drawLine(QPointF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawLine(QPointF...)" arguments))

(defun |drawLines(QVector<QLine>)| (object &rest arguments)
  (%qinvoke-method object nil "drawLines(QVector<QLine>)" arguments))

(defun |drawLines(QVector<QLineF>)| (object &rest arguments)
  (%qinvoke-method object nil "drawLines(QVector<QLineF>)" arguments))

(defun |drawLines(QVector<QPoint>)| (object &rest arguments)
  (%qinvoke-method object nil "drawLines(QVector<QPoint>)" arguments))

(defun |drawLines(QVector<QPointF>)| (object &rest arguments)
  (%qinvoke-method object nil "drawLines(QVector<QPointF>)" arguments))

(defun |drawLines(const QLine*...)| (object &rest arguments)
  (%qinvoke-method object nil "drawLines(const QLine*...)" arguments))

(defun |drawLines(const QLineF*...)| (object &rest arguments)
  (%qinvoke-method object nil "drawLines(const QLineF*...)" arguments))

(defun |drawLines(const QPointF*...)| (object &rest arguments)
  (%qinvoke-method object nil "drawLines(const QPointF*...)" arguments))

(defun |drawLines| (object &rest arguments)
  (%qinvoke-method object nil "drawLines" arguments))

(defun |drawLine| (object &rest arguments)
  (%qinvoke-method object nil "drawLine" arguments))

(defun |drawPath| (object &rest arguments)
  (%qinvoke-method object nil "drawPath" arguments))

(defun |drawPicture(QPoint...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPicture(QPoint...)" arguments))

(defun |drawPicture(QPointF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPicture(QPointF...)" arguments))

(defun |drawPicture| (object &rest arguments)
  (%qinvoke-method object nil "drawPicture" arguments))

(defun |drawPie(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPie(QRect...)" arguments))

(defun |drawPie(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPie(QRectF...)" arguments))

(defun |drawPie| (object &rest arguments)
  (%qinvoke-method object nil "drawPie" arguments))

(defun |drawPixmap(QPoint...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPixmap(QPoint...)" arguments))

(defun |drawPixmap(QPointF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPixmap(QPointF...)" arguments))

(defun |drawPixmap(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPixmap(QRect...)" arguments))

(defun |drawPixmap(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPixmap(QRectF...)" arguments))

(defun |drawPixmap(int...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPixmap(int...)" arguments))

(defun |drawPixmap| (object &rest arguments)
  (%qinvoke-method object nil "drawPixmap" arguments))

(defun |drawPoint(QPoint)| (object &rest arguments)
  (%qinvoke-method object nil "drawPoint(QPoint)" arguments))

(defun |drawPoint(QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "drawPoint(QPointF)" arguments))

(defun |drawPoints(QPolygon)| (object &rest arguments)
  (%qinvoke-method object nil "drawPoints(QPolygon)" arguments))

(defun |drawPoints(QPolygonF)| (object &rest arguments)
  (%qinvoke-method object nil "drawPoints(QPolygonF)" arguments))

(defun |drawPoints| (object &rest arguments)
  (%qinvoke-method object nil "drawPoints" arguments))

(defun |drawPoint| (object &rest arguments)
  (%qinvoke-method object nil "drawPoint" arguments))

(defun |drawPolygon(QPolygon)| (object &rest arguments)
  (%qinvoke-method object nil "drawPolygon(QPolygon)" arguments))

(defun |drawPolygon(QPolygon...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPolygon(QPolygon...)" arguments))

(defun |drawPolygon(QPolygonF)| (object &rest arguments)
  (%qinvoke-method object nil "drawPolygon(QPolygonF)" arguments))

(defun |drawPolygon(QPolygonF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPolygon(QPolygonF...)" arguments))

(defun |drawPolygon(const QPointF*...)| (object &rest arguments)
  (%qinvoke-method object nil "drawPolygon(const QPointF*...)" arguments))

(defun |drawPolygon| (object &rest arguments)
  (%qinvoke-method object nil "drawPolygon" arguments))

(defun |drawPolyline(QPolygon)| (object &rest arguments)
  (%qinvoke-method object nil "drawPolyline(QPolygon)" arguments))

(defun |drawPolyline(QPolygonF)| (object &rest arguments)
  (%qinvoke-method object nil "drawPolyline(QPolygonF)" arguments))

(defun |drawPolyline| (object &rest arguments)
  (%qinvoke-method object nil "drawPolyline" arguments))

(defun |drawPrimitive| (object &rest arguments)
  (%qinvoke-method object nil "drawPrimitive" arguments))

(defun |drawRect(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "drawRect(QRect)" arguments))

(defun |drawRect(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "drawRect(QRectF)" arguments))

(defun |drawRects(QVector<QRect>)| (object &rest arguments)
  (%qinvoke-method object nil "drawRects(QVector<QRect>)" arguments))

(defun |drawRects(QVector<QRectF>)| (object &rest arguments)
  (%qinvoke-method object nil "drawRects(QVector<QRectF>)" arguments))

(defun |drawRects(const QRect*...)| (object &rest arguments)
  (%qinvoke-method object nil "drawRects(const QRect*...)" arguments))

(defun |drawRects(const QRectF*...)| (object &rest arguments)
  (%qinvoke-method object nil "drawRects(const QRectF*...)" arguments))

(defun |drawRects| (object &rest arguments)
  (%qinvoke-method object nil "drawRects" arguments))

(defun |drawRect| (object &rest arguments)
  (%qinvoke-method object nil "drawRect" arguments))

(defun |drawRoundedRect(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "drawRoundedRect(QRect...)" arguments))

(defun |drawRoundedRect(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawRoundedRect(QRectF...)" arguments))

(defun |drawRoundedRect| (object &rest arguments)
  (%qinvoke-method object nil "drawRoundedRect" arguments))

(defun |drawSource| (object &rest arguments)
  (%qinvoke-method object nil "drawSource" arguments))

(defun |drawText(QPoint...)| (object &rest arguments)
  (%qinvoke-method object nil "drawText(QPoint...)" arguments))

(defun |drawText(QPointF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawText(QPointF...)" arguments))

(defun |drawText(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "drawText(QRect...)" arguments))

(defun |drawText(QRectF,QString...)| (object &rest arguments)
  (%qinvoke-method object nil "drawText(QRectF,QString...)" arguments))

(defun |drawText(QRectF,int...)| (object &rest arguments)
  (%qinvoke-method object nil "drawText(QRectF,int...)" arguments))

(defun |drawText(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawText(QRectF...)" arguments))

(defun |drawText(int...)| (object &rest arguments)
  (%qinvoke-method object nil "drawText(int...)" arguments))

(defun |drawText| (object &rest arguments)
  (%qinvoke-method object nil "drawText" arguments))

(defun |drawTiledPixmap(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "drawTiledPixmap(QRect...)" arguments))

(defun |drawTiledPixmap(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "drawTiledPixmap(QRectF...)" arguments))

(defun |drawTiledPixmap| (object &rest arguments)
  (%qinvoke-method object nil "drawTiledPixmap" arguments))

(defun |drawTree| (object &rest arguments)
  (%qinvoke-method object nil "drawTree" arguments))

(defun |draw| (object &rest arguments)
  (%qinvoke-method object nil "draw" arguments))

(defun |drives.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "drives" arguments))

(defun |dropAction| (object &rest arguments)
  (%qinvoke-method object nil "dropAction" arguments))

(defun |dropEvent| (object &rest arguments)
  (%qinvoke-method object nil "dropEvent" arguments))

(defun |dropIndicatorPosition| (object &rest arguments)
  (%qinvoke-method object nil "dropIndicatorPosition" arguments))

(defun |dropMimeData| (object &rest arguments)
  (%qinvoke-method object nil "dropMimeData" arguments))

(defun |dumpObjectInfo| (object &rest arguments)
  (%qinvoke-method object nil "dumpObjectInfo" arguments))

(defun |dumpObjectTree| (object &rest arguments)
  (%qinvoke-method object nil "dumpObjectTree" arguments))

(defun |duplex| (object &rest arguments)
  (%qinvoke-method object nil "duplex" arguments))

(defun |duplicatesEnabled| (object &rest arguments)
  (%qinvoke-method object nil "duplicatesEnabled" arguments))

(defun |duration| (object &rest arguments)
  (%qinvoke-method object nil "duration" arguments))

(defun |dx| (object &rest arguments)
  (%qinvoke-method object nil "dx" arguments))

(defun |dynamicPropertyNames| (object &rest arguments)
  (%qinvoke-method object nil "dynamicPropertyNames" arguments))

(defun |dynamicSortFilter| (object &rest arguments)
  (%qinvoke-method object nil "dynamicSortFilter" arguments))

(defun |dy| (object &rest arguments)
  (%qinvoke-method object nil "dy" arguments))

(defun |easingCurve| (object &rest arguments)
  (%qinvoke-method object nil "easingCurve" arguments))

(defun |echoMode| (object &rest arguments)
  (%qinvoke-method object nil "echoMode" arguments))

(defun |editItem| (object &rest arguments)
  (%qinvoke-method object nil "editItem" arguments))

(defun |editTextChanged| (object &rest arguments)
  (%qinvoke-method object nil "editTextChanged" arguments))

(defun |editTriggers| (object &rest arguments)
  (%qinvoke-method object nil "editTriggers" arguments))

(defun |editingFinished| (object &rest arguments)
  (%qinvoke-method object nil "editingFinished" arguments))

(defun |editorDestroyed| (object &rest arguments)
  (%qinvoke-method object nil "editorDestroyed" arguments))

(defun |editorEvent| (object &rest arguments)
  (%qinvoke-method object nil "editorEvent" arguments))

(defun |edit| (object &rest arguments)
  (%qinvoke-method object nil "edit" arguments))

(defun |effectiveOpacity| (object &rest arguments)
  (%qinvoke-method object nil "effectiveOpacity" arguments))

(defun |effectiveSizeHint| (object &rest arguments)
  (%qinvoke-method object nil "effectiveSizeHint" arguments))

(defun |elapsed| (object &rest arguments)
  (%qinvoke-method object nil "elapsed" arguments))

(defun |elementCount| (object &rest arguments)
  (%qinvoke-method object nil "elementCount" arguments))

(defun |elideMode| (object &rest arguments)
  (%qinvoke-method object nil "elideMode" arguments))

(defun |elidedText| (object &rest arguments)
  (%qinvoke-method object nil "elidedText" arguments))

(defun |emitDataChanged| (object &rest arguments)
  (%qinvoke-method object nil "emitDataChanged" arguments))

(defun |emitSelectionChanged| (object &rest arguments)
  (%qinvoke-method object nil "emitSelectionChanged" arguments))

(defun |emptyLabel| (object &rest arguments)
  (%qinvoke-method object nil "emptyLabel" arguments))

(defun |enabledChanged| (object &rest arguments)
  (%qinvoke-method object nil "enabledChanged" arguments))

(defun |encodeName.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "encodeName" arguments))

(defun |encodedData| (object &rest arguments)
  (%qinvoke-method object nil "encodedData" arguments))

(defun |encodedFragment| (object &rest arguments)
  (%qinvoke-method object nil "encodedFragment" arguments))

(defun |encodedHost| (object &rest arguments)
  (%qinvoke-method object nil "encodedHost" arguments))

(defun |encodedPassword| (object &rest arguments)
  (%qinvoke-method object nil "encodedPassword" arguments))

(defun |encodedPath| (object &rest arguments)
  (%qinvoke-method object nil "encodedPath" arguments))

(defun |encodedQueryItemValue| (object &rest arguments)
  (%qinvoke-method object nil "encodedQueryItemValue" arguments))

(defun |encodedQuery| (object &rest arguments)
  (%qinvoke-method object nil "encodedQuery" arguments))

(defun |encodedUserName| (object &rest arguments)
  (%qinvoke-method object nil "encodedUserName" arguments))

(defun |endArray| (object &rest arguments)
  (%qinvoke-method object nil "endArray" arguments))

(defun |endEditBlock| (object &rest arguments)
  (%qinvoke-method object nil "endEditBlock" arguments))

(defun |endFrame| (object &rest arguments)
  (%qinvoke-method object nil "endFrame" arguments))

(defun |endGroup| (object &rest arguments)
  (%qinvoke-method object nil "endGroup" arguments))

(defun |endInsertColumns| (object &rest arguments)
  (%qinvoke-method object nil "endInsertColumns" arguments))

(defun |endInsertRows| (object &rest arguments)
  (%qinvoke-method object nil "endInsertRows" arguments))

(defun |endLayout| (object &rest arguments)
  (%qinvoke-method object nil "endLayout" arguments))

(defun |endMacro| (object &rest arguments)
  (%qinvoke-method object nil "endMacro" arguments))

(defun |endMoveColumns| (object &rest arguments)
  (%qinvoke-method object nil "endMoveColumns" arguments))

(defun |endMoveRows| (object &rest arguments)
  (%qinvoke-method object nil "endMoveRows" arguments))

(defun |endNativePainting| (object &rest arguments)
  (%qinvoke-method object nil "endNativePainting" arguments))

(defun |endRemoveColumns| (object &rest arguments)
  (%qinvoke-method object nil "endRemoveColumns" arguments))

(defun |endRemoveRows| (object &rest arguments)
  (%qinvoke-method object nil "endRemoveRows" arguments))

(defun |endResetModel| (object &rest arguments)
  (%qinvoke-method object nil "endResetModel" arguments))

(defun |endValue| (object &rest arguments)
  (%qinvoke-method object nil "endValue" arguments))

(defun |end| (object &rest arguments)
  (%qinvoke-method object nil "end" arguments))

(defun |ensureBlockLayout| (object &rest arguments)
  (%qinvoke-method object nil "ensureBlockLayout" arguments))

(defun |ensureCursorVisible| (object &rest arguments)
  (%qinvoke-method object nil "ensureCursorVisible" arguments))

(defun |ensurePolished| (object &rest arguments)
  (%qinvoke-method object nil "ensurePolished" arguments))

(defun |ensureVisible(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "ensureVisible(QRectF)" arguments))

(defun |ensureVisible(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "ensureVisible(QRectF...)" arguments))

(defun |ensureVisible(const QGraphicsItem*)| (object &rest arguments)
  (%qinvoke-method object nil "ensureVisible(const QGraphicsItem*)" arguments))

(defun |ensureVisible(const QGraphicsItem*...)| (object &rest arguments)
  (%qinvoke-method object nil "ensureVisible(const QGraphicsItem*...)" arguments))

(defun |ensureVisible| (object &rest arguments)
  (%qinvoke-method object nil "ensureVisible" arguments))

(defun |ensureWidgetVisible| (object &rest arguments)
  (%qinvoke-method object nil "ensureWidgetVisible" arguments))

(defun |enterWhatsThisMode.QWhatsThis| (&rest arguments)
  (%qinvoke-method "QWhatsThis" nil "enterWhatsThisMode" arguments))

(defun |entered| (object &rest arguments)
  (%qinvoke-method object nil "entered" arguments))

(defun |entryInfoList(QDir::Filters)| (object &rest arguments)
  (%qinvoke-method object nil "entryInfoList(QDir::Filters)" arguments))

(defun |entryInfoList(QDir::Filters...)| (object &rest arguments)
  (%qinvoke-method object nil "entryInfoList(QDir::Filters...)" arguments))

(defun |entryInfoList(QStringList)| (object &rest arguments)
  (%qinvoke-method object nil "entryInfoList(QStringList)" arguments))

(defun |entryInfoList(QStringList...)| (object &rest arguments)
  (%qinvoke-method object nil "entryInfoList(QStringList...)" arguments))

(defun |entryInfoList| (object &rest arguments)
  (%qinvoke-method object nil "entryInfoList" arguments))

(defun |entryList(QDir::Filters)| (object &rest arguments)
  (%qinvoke-method object nil "entryList(QDir::Filters)" arguments))

(defun |entryList(QDir::Filters...)| (object &rest arguments)
  (%qinvoke-method object nil "entryList(QDir::Filters...)" arguments))

(defun |entryList(QStringList)| (object &rest arguments)
  (%qinvoke-method object nil "entryList(QStringList)" arguments))

(defun |entryList(QStringList...)| (object &rest arguments)
  (%qinvoke-method object nil "entryList(QStringList...)" arguments))

(defun |entryList| (object &rest arguments)
  (%qinvoke-method object nil "entryList" arguments))

(defun |enumeratorCount| (object &rest arguments)
  (%qinvoke-method object nil "enumeratorCount" arguments))

(defun |enumeratorOffset| (object &rest arguments)
  (%qinvoke-method object nil "enumeratorOffset" arguments))

(defun |eraseRect(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "eraseRect(QRect)" arguments))

(defun |eraseRect(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "eraseRect(QRectF)" arguments))

(defun |eraseRect| (object &rest arguments)
  (%qinvoke-method object nil "eraseRect" arguments))

(defun |errorState| (object &rest arguments)
  (%qinvoke-method object nil "errorState" arguments))

(defun |errorString| (object &rest arguments)
  (%qinvoke-method object nil "errorString" arguments))

(defun |error| (object &rest arguments)
  (%qinvoke-method object nil "error" arguments))

(defun |escape.QRegExp| (&rest arguments)
  (%qinvoke-method "QRegExp" nil "escape" arguments))

(defun |escapeButton| (object &rest arguments)
  (%qinvoke-method object nil "escapeButton" arguments))

(defun |eventFilter| (object &rest arguments)
  (%qinvoke-method object nil "eventFilter" arguments))

(defun |eventSource| (object &rest arguments)
  (%qinvoke-method object nil "eventSource" arguments))

(defun |eventType| (object &rest arguments)
  (%qinvoke-method object nil "eventType" arguments))

(defun |event| (object &rest arguments)
  (%qinvoke-method object nil "event" arguments))

(defun |exactMatch| (object &rest arguments)
  (%qinvoke-method object nil "exactMatch" arguments))

(defun |exclusive| (object &rest arguments)
  (%qinvoke-method object nil "exclusive" arguments))

(defun |exec.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "exec" arguments))

(defun |exec.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "exec" arguments))

(defun |exec.QMenu| (&rest arguments)
  (%qinvoke-method "QMenu" nil "exec" arguments))

(defun |execute.QProcess| (&rest arguments)
  (%qinvoke-method "QProcess" nil "execute" arguments))

(defun |executeDelayedItemsLayout| (object &rest arguments)
  (%qinvoke-method object nil "executeDelayedItemsLayout" arguments))

(defun |exec| (object &rest arguments)
  (%qinvoke-method object nil "exec" arguments))

(defun |exists.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "exists" arguments))

(defun |exists| (object &rest arguments)
  (%qinvoke-method object nil "exists" arguments))

(defun |exit.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "exit" arguments))

(defun |exitCode| (object &rest arguments)
  (%qinvoke-method object nil "exitCode" arguments))

(defun |exitStatus| (object &rest arguments)
  (%qinvoke-method object nil "exitStatus" arguments))

(defun |exited| (object &rest arguments)
  (%qinvoke-method object nil "exited" arguments))

(defun |exit| (object &rest arguments)
  (%qinvoke-method object nil "exit" arguments))

(defun |expandAll| (object &rest arguments)
  (%qinvoke-method object nil "expandAll" arguments))

(defun |expandItem| (object &rest arguments)
  (%qinvoke-method object nil "expandItem" arguments))

(defun |expandToDepth| (object &rest arguments)
  (%qinvoke-method object nil "expandToDepth" arguments))

(defun |expanded| (object &rest arguments)
  (%qinvoke-method object nil "expanded" arguments))

(defun |expandingDirections| (object &rest arguments)
  (%qinvoke-method object nil "expandingDirections" arguments))

(defun |expanding| (object &rest arguments)
  (%qinvoke-method object nil "expanding" arguments))

(defun |expandsOnDoubleClick| (object &rest arguments)
  (%qinvoke-method object nil "expandsOnDoubleClick" arguments))

(defun |expand| (object &rest arguments)
  (%qinvoke-method object nil "expand" arguments))

(defun |exponential| (object &rest arguments)
  (%qinvoke-method object nil "exponential" arguments))

(defun |extraSelections| (object &rest arguments)
  (%qinvoke-method object nil "extraSelections" arguments))

(defun |fallbacksEnabled| (object &rest arguments)
  (%qinvoke-method object nil "fallbacksEnabled" arguments))

(defun |families| (object &rest arguments)
  (%qinvoke-method object nil "families" arguments))

(defun |family| (object &rest arguments)
  (%qinvoke-method object nil "family" arguments))

(defun |featuresChanged| (object &rest arguments)
  (%qinvoke-method object nil "featuresChanged" arguments))

(defun |features| (object &rest arguments)
  (%qinvoke-method object nil "features" arguments))

(defun |fetchMore| (object &rest arguments)
  (%qinvoke-method object nil "fetchMore" arguments))

(defun |fieldGrowthPolicy| (object &rest arguments)
  (%qinvoke-method object nil "fieldGrowthPolicy" arguments))

(defun |field| (object &rest arguments)
  (%qinvoke-method object nil "field" arguments))

(defun |fileChanged| (object &rest arguments)
  (%qinvoke-method object nil "fileChanged" arguments))

(defun |fileIcon| (object &rest arguments)
  (%qinvoke-method object nil "fileIcon" arguments))

(defun |fileInfo| (object &rest arguments)
  (%qinvoke-method object nil "fileInfo" arguments))

(defun |fileMode| (object &rest arguments)
  (%qinvoke-method object nil "fileMode" arguments))

(defun |fileName| (object &rest arguments)
  (%qinvoke-method object nil "fileName" arguments))

(defun |filePath| (object &rest arguments)
  (%qinvoke-method object nil "filePath" arguments))

(defun |fileRenamed| (object &rest arguments)
  (%qinvoke-method object nil "fileRenamed" arguments))

(defun |fileSelected| (object &rest arguments)
  (%qinvoke-method object nil "fileSelected" arguments))

(defun |filesSelected| (object &rest arguments)
  (%qinvoke-method object nil "filesSelected" arguments))

(defun |files| (object &rest arguments)
  (%qinvoke-method object nil "files" arguments))

(defun |file| (object &rest arguments)
  (%qinvoke-method object nil "file" arguments))

(defun |fillPath| (object &rest arguments)
  (%qinvoke-method object nil "fillPath" arguments))

(defun |fillRect(QRect,QBrush)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(QRect,QBrush)" arguments))

(defun |fillRect(QRect,QColor)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(QRect,QColor)" arguments))

(defun |fillRect(QRect,Qt::BrushStyle)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(QRect,Qt::BrushStyle)" arguments))

(defun |fillRect(QRect,Qt::GlobalColor)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(QRect,Qt::GlobalColor)" arguments))

(defun |fillRect(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(QRect...)" arguments))

(defun |fillRect(QRectF,QBrush)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(QRectF,QBrush)" arguments))

(defun |fillRect(QRectF,QColor)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(QRectF,QColor)" arguments))

(defun |fillRect(QRectF,Qt::BrushStyle)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(QRectF,Qt::BrushStyle)" arguments))

(defun |fillRect(QRectF,Qt::GlobalColor)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(QRectF,Qt::GlobalColor)" arguments))

(defun |fillRect(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(QRectF...)" arguments))

(defun |fillRect(int,int,int,int,QBrush)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(int,int,int,int,QBrush)" arguments))

(defun |fillRect(int,int,int,int,QColor)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(int,int,int,int,QColor)" arguments))

(defun |fillRect(int,int,int,int,Qt::BrushStyle)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(int,int,int,int,Qt::BrushStyle)" arguments))

(defun |fillRect(int,int,int,int,Qt::GlobalColor)| (object &rest arguments)
  (%qinvoke-method object nil "fillRect(int,int,int,int,Qt::GlobalColor)" arguments))

(defun |fillRect| (object &rest arguments)
  (%qinvoke-method object nil "fillRect" arguments))

(defun |fillRule| (object &rest arguments)
  (%qinvoke-method object nil "fillRule" arguments))

(defun |fill| (object &rest arguments)
  (%qinvoke-method object nil "fill" arguments))

(defun |filterCaseSensitivity| (object &rest arguments)
  (%qinvoke-method object nil "filterCaseSensitivity" arguments))

(defun |filterEvent| (object &rest arguments)
  (%qinvoke-method object nil "filterEvent" arguments))

(defun |filterKeyColumn| (object &rest arguments)
  (%qinvoke-method object nil "filterKeyColumn" arguments))

(defun |filterRegExp| (object &rest arguments)
  (%qinvoke-method object nil "filterRegExp" arguments))

(defun |filterRole| (object &rest arguments)
  (%qinvoke-method object nil "filterRole" arguments))

(defun |filterSelected| (object &rest arguments)
  (%qinvoke-method object nil "filterSelected" arguments))

(defun |filtersChildEvents| (object &rest arguments)
  (%qinvoke-method object nil "filtersChildEvents" arguments))

(defun |filter| (object &rest arguments)
  (%qinvoke-method object nil "filter" arguments))

(defun |finalStop| (object &rest arguments)
  (%qinvoke-method object nil "finalStop" arguments))

(defun |find(QRegExp)| (object &rest arguments)
  (%qinvoke-method object nil "find(QRegExp)" arguments))

(defun |find(QRegExp,QTextCursor)| (object &rest arguments)
  (%qinvoke-method object nil "find(QRegExp,QTextCursor)" arguments))

(defun |find(QRegExp,QTextCursor...)| (object &rest arguments)
  (%qinvoke-method object nil "find(QRegExp,QTextCursor...)" arguments))

(defun |find(QRegExp,int)| (object &rest arguments)
  (%qinvoke-method object nil "find(QRegExp,int)" arguments))

(defun |find(QRegExp,int...)| (object &rest arguments)
  (%qinvoke-method object nil "find(QRegExp,int...)" arguments))

(defun |find(QRegExp...)| (object &rest arguments)
  (%qinvoke-method object nil "find(QRegExp...)" arguments))

(defun |find(QString)| (object &rest arguments)
  (%qinvoke-method object nil "find(QString)" arguments))

(defun |find(QString,QTextCursor)| (object &rest arguments)
  (%qinvoke-method object nil "find(QString,QTextCursor)" arguments))

(defun |find(QString,QTextCursor...)| (object &rest arguments)
  (%qinvoke-method object nil "find(QString,QTextCursor...)" arguments))

(defun |find(QString,int)| (object &rest arguments)
  (%qinvoke-method object nil "find(QString,int)" arguments))

(defun |find(QString,int...)| (object &rest arguments)
  (%qinvoke-method object nil "find(QString,int...)" arguments))

(defun |find(QString...)| (object &rest arguments)
  (%qinvoke-method object nil "find(QString...)" arguments))

(defun |find.QPixmapCache| (&rest arguments)
  (%qinvoke-method "QPixmapCache" nil "find" arguments))

(defun |findBlockByLineNumber| (object &rest arguments)
  (%qinvoke-method object nil "findBlockByLineNumber" arguments))

(defun |findBlockByNumber| (object &rest arguments)
  (%qinvoke-method object nil "findBlockByNumber" arguments))

(defun |findBlock| (object &rest arguments)
  (%qinvoke-method object nil "findBlock" arguments))

(defun |findBufferChanged| (object &rest arguments)
  (%qinvoke-method object nil "findBufferChanged" arguments))

(defun |findData| (object &rest arguments)
  (%qinvoke-method object nil "findData" arguments))

(defun |findItems| (object &rest arguments)
  (%qinvoke-method object nil "findItems" arguments))

(defun |findText| (object &rest arguments)
  (%qinvoke-method object nil "findText" arguments))

(defun |find| (object &rest arguments)
  (%qinvoke-method object nil "find" arguments))

(defun |finished| (object &rest arguments)
  (%qinvoke-method object nil "finished" arguments))

(defun |finish| (object &rest arguments)
  (%qinvoke-method object nil "finish" arguments))

(defun |firstBlock| (object &rest arguments)
  (%qinvoke-method object nil "firstBlock" arguments))

(defun |firstCursorPosition| (object &rest arguments)
  (%qinvoke-method object nil "firstCursorPosition" arguments))

(defun |firstDayOfWeek| (object &rest arguments)
  (%qinvoke-method object nil "firstDayOfWeek" arguments))

(defun |firstLineNumber| (object &rest arguments)
  (%qinvoke-method object nil "firstLineNumber" arguments))

(defun |firstPosition| (object &rest arguments)
  (%qinvoke-method object nil "firstPosition" arguments))

(defun |firstVisibleBlock| (object &rest arguments)
  (%qinvoke-method object nil "firstVisibleBlock" arguments))

(defun |fitInView(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "fitInView(QRectF)" arguments))

(defun |fitInView(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "fitInView(QRectF...)" arguments))

(defun |fitInView(const QGraphicsItem*)| (object &rest arguments)
  (%qinvoke-method object nil "fitInView(const QGraphicsItem*)" arguments))

(defun |fitInView(const QGraphicsItem*...)| (object &rest arguments)
  (%qinvoke-method object nil "fitInView(const QGraphicsItem*...)" arguments))

(defun |fitInView| (object &rest arguments)
  (%qinvoke-method object nil "fitInView" arguments))

(defun |fitToWidth| (object &rest arguments)
  (%qinvoke-method object nil "fitToWidth" arguments))

(defun |fixedPitch| (object &rest arguments)
  (%qinvoke-method object nil "fixedPitch" arguments))

(defun |fixup| (object &rest arguments)
  (%qinvoke-method object nil "fixup" arguments))

(defun |flags| (object &rest arguments)
  (%qinvoke-method object nil "flags" arguments))

(defun |flipCoordinates| (object &rest arguments)
  (%qinvoke-method object nil "flipCoordinates" arguments))

(defun |flow| (object &rest arguments)
  (%qinvoke-method object nil "flow" arguments))

(defun |flush.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "flush" arguments))

(defun |flush| (object &rest arguments)
  (%qinvoke-method object nil "flush" arguments))

(defun |focalPoint| (object &rest arguments)
  (%qinvoke-method object nil "focalPoint" arguments))

(defun |focusChanged| (object &rest arguments)
  (%qinvoke-method object nil "focusChanged" arguments))

(defun |focusItem| (object &rest arguments)
  (%qinvoke-method object nil "focusItem" arguments))

(defun |focusNextChild| (object &rest arguments)
  (%qinvoke-method object nil "focusNextChild" arguments))

(defun |focusNextPrevChild| (object &rest arguments)
  (%qinvoke-method object nil "focusNextPrevChild" arguments))

(defun |focusPolicy| (object &rest arguments)
  (%qinvoke-method object nil "focusPolicy" arguments))

(defun |focusPreviousChild| (object &rest arguments)
  (%qinvoke-method object nil "focusPreviousChild" arguments))

(defun |focusProxy| (object &rest arguments)
  (%qinvoke-method object nil "focusProxy" arguments))

(defun |focusWidget.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "focusWidget" arguments))

(defun |focusWidget| (object &rest arguments)
  (%qinvoke-method object nil "focusWidget" arguments))

(defun |font(const QWidget*).QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "font(const QWidget*)" arguments))

(defun |font(const char*).QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "font(const char*)" arguments))

(defun |font.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "font" arguments))

(defun |font.QToolTip| (&rest arguments)
  (%qinvoke-method "QToolTip" nil "font" arguments))

(defun |fontCapitalization| (object &rest arguments)
  (%qinvoke-method object nil "fontCapitalization" arguments))

(defun |fontDatabaseChanged| (object &rest arguments)
  (%qinvoke-method object nil "fontDatabaseChanged" arguments))

(defun |fontEmbeddingEnabled| (object &rest arguments)
  (%qinvoke-method object nil "fontEmbeddingEnabled" arguments))

(defun |fontFamily| (object &rest arguments)
  (%qinvoke-method object nil "fontFamily" arguments))

(defun |fontFilters| (object &rest arguments)
  (%qinvoke-method object nil "fontFilters" arguments))

(defun |fontFixedPitch| (object &rest arguments)
  (%qinvoke-method object nil "fontFixedPitch" arguments))

(defun |fontInfo| (object &rest arguments)
  (%qinvoke-method object nil "fontInfo" arguments))

(defun |fontItalic| (object &rest arguments)
  (%qinvoke-method object nil "fontItalic" arguments))

(defun |fontKerning| (object &rest arguments)
  (%qinvoke-method object nil "fontKerning" arguments))

(defun |fontLetterSpacing| (object &rest arguments)
  (%qinvoke-method object nil "fontLetterSpacing" arguments))

(defun |fontMetrics.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "fontMetrics" arguments))

(defun |fontMetrics| (object &rest arguments)
  (%qinvoke-method object nil "fontMetrics" arguments))

(defun |fontOverline| (object &rest arguments)
  (%qinvoke-method object nil "fontOverline" arguments))

(defun |fontPointSize| (object &rest arguments)
  (%qinvoke-method object nil "fontPointSize" arguments))

(defun |fontSelected| (object &rest arguments)
  (%qinvoke-method object nil "fontSelected" arguments))

(defun |fontStrikeOut| (object &rest arguments)
  (%qinvoke-method object nil "fontStrikeOut" arguments))

(defun |fontStyleHint| (object &rest arguments)
  (%qinvoke-method object nil "fontStyleHint" arguments))

(defun |fontStyleStrategy| (object &rest arguments)
  (%qinvoke-method object nil "fontStyleStrategy" arguments))

(defun |fontUnderline| (object &rest arguments)
  (%qinvoke-method object nil "fontUnderline" arguments))

(defun |fontWeight| (object &rest arguments)
  (%qinvoke-method object nil "fontWeight" arguments))

(defun |fontWordSpacing| (object &rest arguments)
  (%qinvoke-method object nil "fontWordSpacing" arguments))

(defun |font| (object &rest arguments)
  (%qinvoke-method object nil "font" arguments))

(defun |forceShow| (object &rest arguments)
  (%qinvoke-method object nil "forceShow" arguments))

(defun |foregroundBrush| (object &rest arguments)
  (%qinvoke-method object nil "foregroundBrush" arguments))

(defun |foregroundRole| (object &rest arguments)
  (%qinvoke-method object nil "foregroundRole" arguments))

(defun |foreground| (object &rest arguments)
  (%qinvoke-method object nil "foreground" arguments))

(defun |formAlignment| (object &rest arguments)
  (%qinvoke-method object nil "formAlignment" arguments))

(defun |formatIndex| (object &rest arguments)
  (%qinvoke-method object nil "formatIndex" arguments))

(defun |formats| (object &rest arguments)
  (%qinvoke-method object nil "formats" arguments))

(defun |format| (object &rest arguments)
  (%qinvoke-method object nil "format" arguments))

(defun |forwardAvailable| (object &rest arguments)
  (%qinvoke-method object nil "forwardAvailable" arguments))

(defun |forwardHistoryCount| (object &rest arguments)
  (%qinvoke-method object nil "forwardHistoryCount" arguments))

(defun |forward| (object &rest arguments)
  (%qinvoke-method object nil "forward" arguments))

(defun |fragment| (object &rest arguments)
  (%qinvoke-method object nil "fragment" arguments))

(defun |frameBoundingRect| (object &rest arguments)
  (%qinvoke-method object nil "frameBoundingRect" arguments))

(defun |frameChanged| (object &rest arguments)
  (%qinvoke-method object nil "frameChanged" arguments))

(defun |frameCount| (object &rest arguments)
  (%qinvoke-method object nil "frameCount" arguments))

(defun |frameForTime| (object &rest arguments)
  (%qinvoke-method object nil "frameForTime" arguments))

(defun |frameFormat| (object &rest arguments)
  (%qinvoke-method object nil "frameFormat" arguments))

(defun |frameGeometry| (object &rest arguments)
  (%qinvoke-method object nil "frameGeometry" arguments))

(defun |frameRect| (object &rest arguments)
  (%qinvoke-method object nil "frameRect" arguments))

(defun |frameShadow| (object &rest arguments)
  (%qinvoke-method object nil "frameShadow" arguments))

(defun |frameShape| (object &rest arguments)
  (%qinvoke-method object nil "frameShape" arguments))

(defun |frameSize| (object &rest arguments)
  (%qinvoke-method object nil "frameSize" arguments))

(defun |frameStyle| (object &rest arguments)
  (%qinvoke-method object nil "frameStyle" arguments))

(defun |frameWidth| (object &rest arguments)
  (%qinvoke-method object nil "frameWidth" arguments))

(defun |fromAce.QUrl| (&rest arguments)
  (%qinvoke-method "QUrl" nil "fromAce" arguments))

(defun |fromAxisAndAngle.QQuaternion| (&rest arguments)
  (%qinvoke-method "QQuaternion" nil "fromAxisAndAngle" arguments))

(defun |fromCmyk.QColor| (&rest arguments)
  (%qinvoke-method "QColor" nil "fromCmyk" arguments))

(defun |fromCmykF.QColor| (&rest arguments)
  (%qinvoke-method "QColor" nil "fromCmykF" arguments))

(defun |fromData.QImage| (&rest arguments)
  (%qinvoke-method "QImage" nil "fromData" arguments))

(defun |fromEncoded.QUrl| (&rest arguments)
  (%qinvoke-method "QUrl" nil "fromEncoded" arguments))

(defun |fromHsl.QColor| (&rest arguments)
  (%qinvoke-method "QColor" nil "fromHsl" arguments))

(defun |fromHslF.QColor| (&rest arguments)
  (%qinvoke-method "QColor" nil "fromHslF" arguments))

(defun |fromHsv.QColor| (&rest arguments)
  (%qinvoke-method "QColor" nil "fromHsv" arguments))

(defun |fromHsvF.QColor| (&rest arguments)
  (%qinvoke-method "QColor" nil "fromHsvF" arguments))

(defun |fromHtml.QTextDocumentFragment| (&rest arguments)
  (%qinvoke-method "QTextDocumentFragment" nil "fromHtml" arguments))

(defun |fromImage.QBitmap| (&rest arguments)
  (%qinvoke-method "QBitmap" nil "fromImage" arguments))

(defun |fromImage.QPixmap| (&rest arguments)
  (%qinvoke-method "QPixmap" nil "fromImage" arguments))

(defun |fromJulianDay.QDate| (&rest arguments)
  (%qinvoke-method "QDate" nil "fromJulianDay" arguments))

(defun |fromLocalFile.QUrl| (&rest arguments)
  (%qinvoke-method "QUrl" nil "fromLocalFile" arguments))

(defun |fromNativeSeparators.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "fromNativeSeparators" arguments))

(defun |fromPage| (object &rest arguments)
  (%qinvoke-method object nil "fromPage" arguments))

(defun |fromPercentEncoding.QUrl| (&rest arguments)
  (%qinvoke-method "QUrl" nil "fromPercentEncoding" arguments))

(defun |fromPlainText.QTextDocumentFragment| (&rest arguments)
  (%qinvoke-method "QTextDocumentFragment" nil "fromPlainText" arguments))

(defun |fromRgb.QColor| (&rest arguments)
  (%qinvoke-method "QColor" nil "fromRgb" arguments))

(defun |fromRgbF.QColor| (&rest arguments)
  (%qinvoke-method "QColor" nil "fromRgbF" arguments))

(defun |fromRgba.QColor| (&rest arguments)
  (%qinvoke-method "QColor" nil "fromRgba" arguments))

(defun |fromScale.QTransform| (&rest arguments)
  (%qinvoke-method "QTransform" nil "fromScale" arguments))

(defun |fromString(QString,QString).QDateTime| (&rest arguments)
  (%qinvoke-method "QDateTime" nil "fromString(QString,QString)" arguments))

(defun |fromString(QString,QString).QDate| (&rest arguments)
  (%qinvoke-method "QDate" nil "fromString(QString,QString)" arguments))

(defun |fromString(QString,QString).QTime| (&rest arguments)
  (%qinvoke-method "QTime" nil "fromString(QString,QString)" arguments))

(defun |fromString(QString,Qt::DateFormat).QDateTime| (&rest arguments)
  (%qinvoke-method "QDateTime" nil "fromString(QString,Qt::DateFormat)" arguments))

(defun |fromString(QString,Qt::DateFormat).QDate| (&rest arguments)
  (%qinvoke-method "QDate" nil "fromString(QString,Qt::DateFormat)" arguments))

(defun |fromString(QString,Qt::DateFormat).QTime| (&rest arguments)
  (%qinvoke-method "QTime" nil "fromString(QString,Qt::DateFormat)" arguments))

(defun |fromString.QDateTime| (&rest arguments)
  (%qinvoke-method "QDateTime" nil "fromString" arguments))

(defun |fromString.QDate| (&rest arguments)
  (%qinvoke-method "QDate" nil "fromString" arguments))

(defun |fromString.QKeySequence| (&rest arguments)
  (%qinvoke-method "QKeySequence" nil "fromString" arguments))

(defun |fromString.QTime| (&rest arguments)
  (%qinvoke-method "QTime" nil "fromString" arguments))

(defun |fromString| (object &rest arguments)
  (%qinvoke-method object nil "fromString" arguments))

(defun |fromTheme.QIcon| (&rest arguments)
  (%qinvoke-method "QIcon" nil "fromTheme" arguments))

(defun |fromTime_t.QDateTime| (&rest arguments)
  (%qinvoke-method "QDateTime" nil "fromTime_t" arguments))

(defun |fromTranslate.QTransform| (&rest arguments)
  (%qinvoke-method "QTransform" nil "fromTranslate" arguments))

(defun |fromUnicode| (object &rest arguments)
  (%qinvoke-method object nil "fromUnicode" arguments))

(defun |fromUserInput.QUrl| (&rest arguments)
  (%qinvoke-method "QUrl" nil "fromUserInput" arguments))

(defun |frustum| (object &rest arguments)
  (%qinvoke-method object nil "frustum" arguments))

(defun |fullPage| (object &rest arguments)
  (%qinvoke-method object nil "fullPage" arguments))

(defun |generatedIconPixmap| (object &rest arguments)
  (%qinvoke-method object nil "generatedIconPixmap" arguments))

(defun |geometriesChanged| (object &rest arguments)
  (%qinvoke-method object nil "geometriesChanged" arguments))

(defun |geometryChanged| (object &rest arguments)
  (%qinvoke-method object nil "geometryChanged" arguments))

(defun |geometry| (object &rest arguments)
  (%qinvoke-method object nil "geometry" arguments))

(defun |gestureCancelPolicy| (object &rest arguments)
  (%qinvoke-method object nil "gestureCancelPolicy" arguments))

(defun |gestureType| (object &rest arguments)
  (%qinvoke-method object nil "gestureType" arguments))

(defun |gestures| (object &rest arguments)
  (%qinvoke-method object nil "gestures" arguments))

(defun |gesture| (object &rest arguments)
  (%qinvoke-method object nil "gesture" arguments))

(defun |getChar| (object &rest arguments)
  (%qinvoke-method object nil "getChar" arguments))

(defun |getColor.QColorDialog| (&rest arguments)
  (%qinvoke-method "QColorDialog" nil "getColor" arguments))

(defun |getDouble.QInputDialog| (&rest arguments)
  (%qinvoke-method "QInputDialog" nil "getDouble" arguments))

(defun |getExistingDirectory.QFileDialog| (&rest arguments)
  (%qinvoke-method "QFileDialog" nil "getExistingDirectory" arguments))

(defun |getFont(bool*,QFont).QFontDialog| (&rest arguments)
  (%qinvoke-method "QFontDialog" nil "getFont(bool*,QFont)" arguments))

(defun |getFont(bool*,QWidget*).QFontDialog| (&rest arguments)
  (%qinvoke-method "QFontDialog" nil "getFont(bool*,QWidget*)" arguments))

(defun |getFont.QFontDialog| (&rest arguments)
  (%qinvoke-method "QFontDialog" nil "getFont" arguments))

(defun |getInt.QInputDialog| (&rest arguments)
  (%qinvoke-method "QInputDialog" nil "getInt" arguments))

(defun |getItem.QInputDialog| (&rest arguments)
  (%qinvoke-method "QInputDialog" nil "getItem" arguments))

(defun |getOpenFileName.QFileDialog| (&rest arguments)
  (%qinvoke-method "QFileDialog" nil "getOpenFileName" arguments))

(defun |getOpenFileNames.QFileDialog| (&rest arguments)
  (%qinvoke-method "QFileDialog" nil "getOpenFileNames" arguments))

(defun |getSaveFileName.QFileDialog| (&rest arguments)
  (%qinvoke-method "QFileDialog" nil "getSaveFileName" arguments))

(defun |getText.QInputDialog| (&rest arguments)
  (%qinvoke-method "QInputDialog" nil "getText" arguments))

(defun |globalPos| (object &rest arguments)
  (%qinvoke-method object nil "globalPos" arguments))

(defun |globalRestorePolicy| (object &rest arguments)
  (%qinvoke-method object nil "globalRestorePolicy" arguments))

(defun |globalStrut.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "globalStrut" arguments))

(defun |globalX| (object &rest arguments)
  (%qinvoke-method object nil "globalX" arguments))

(defun |globalY| (object &rest arguments)
  (%qinvoke-method object nil "globalY" arguments))

(defun |gotFocus| (object &rest arguments)
  (%qinvoke-method object nil "gotFocus" arguments))

(defun |grabGesture| (object &rest arguments)
  (%qinvoke-method object nil "grabGesture" arguments))

(defun |grabKeyboard| (object &rest arguments)
  (%qinvoke-method object nil "grabKeyboard" arguments))

(defun |grabMouse| (object &rest arguments)
  (%qinvoke-method object nil "grabMouse" arguments))

(defun |grabShortcut| (object &rest arguments)
  (%qinvoke-method object nil "grabShortcut" arguments))

(defun |grabWidget(QWidget*,QRect).QPixmap| (&rest arguments)
  (%qinvoke-method "QPixmap" nil "grabWidget(QWidget*,QRect)" arguments))

(defun |grabWidget(QWidget*,int).QPixmap| (&rest arguments)
  (%qinvoke-method "QPixmap" nil "grabWidget(QWidget*,int)" arguments))

(defun |grabWidget.QPixmap| (&rest arguments)
  (%qinvoke-method "QPixmap" nil "grabWidget" arguments))

(defun |gradient| (object &rest arguments)
  (%qinvoke-method object nil "gradient" arguments))

(defun |graphicsEffect| (object &rest arguments)
  (%qinvoke-method object nil "graphicsEffect" arguments))

(defun |graphicsItem| (object &rest arguments)
  (%qinvoke-method object nil "graphicsItem" arguments))

(defun |graphicsProxyWidget| (object &rest arguments)
  (%qinvoke-method object nil "graphicsProxyWidget" arguments))

(defun |greenF| (object &rest arguments)
  (%qinvoke-method object nil "greenF" arguments))

(defun |green| (object &rest arguments)
  (%qinvoke-method object nil "green" arguments))

(defun |gridSize| (object &rest arguments)
  (%qinvoke-method object nil "gridSize" arguments))

(defun |gridStyle| (object &rest arguments)
  (%qinvoke-method object nil "gridStyle" arguments))

(defun |groupId| (object &rest arguments)
  (%qinvoke-method object nil "groupId" arguments))

(defun |groupSeparator| (object &rest arguments)
  (%qinvoke-method object nil "groupSeparator" arguments))

(defun |group| (object &rest arguments)
  (%qinvoke-method object nil "group" arguments))

(defun |handleWidth| (object &rest arguments)
  (%qinvoke-method object nil "handleWidth" arguments))

(defun |handle| (object &rest arguments)
  (%qinvoke-method object nil "handle" arguments))

(defun |hasAcceptableInput| (object &rest arguments)
  (%qinvoke-method object nil "hasAcceptableInput" arguments))

(defun |hasAlphaChannel| (object &rest arguments)
  (%qinvoke-method object nil "hasAlphaChannel" arguments))

(defun |hasAlpha| (object &rest arguments)
  (%qinvoke-method object nil "hasAlpha" arguments))

(defun |hasAutoScroll| (object &rest arguments)
  (%qinvoke-method object nil "hasAutoScroll" arguments))

(defun |hasChildren| (object &rest arguments)
  (%qinvoke-method object nil "hasChildren" arguments))

(defun |hasClipping| (object &rest arguments)
  (%qinvoke-method object nil "hasClipping" arguments))

(defun |hasColor| (object &rest arguments)
  (%qinvoke-method object nil "hasColor" arguments))

(defun |hasComplexSelection| (object &rest arguments)
  (%qinvoke-method object nil "hasComplexSelection" arguments))

(defun |hasCursor| (object &rest arguments)
  (%qinvoke-method object nil "hasCursor" arguments))

(defun |hasEncodedQueryItem| (object &rest arguments)
  (%qinvoke-method object nil "hasEncodedQueryItem" arguments))

(defun |hasFocus| (object &rest arguments)
  (%qinvoke-method object nil "hasFocus" arguments))

(defun |hasFormat| (object &rest arguments)
  (%qinvoke-method object nil "hasFormat" arguments))

(defun |hasFragment| (object &rest arguments)
  (%qinvoke-method object nil "hasFragment" arguments))

(defun |hasFrame| (object &rest arguments)
  (%qinvoke-method object nil "hasFrame" arguments))

(defun |hasHeightForWidth| (object &rest arguments)
  (%qinvoke-method object nil "hasHeightForWidth" arguments))

(defun |hasHotSpot| (object &rest arguments)
  (%qinvoke-method object nil "hasHotSpot" arguments))

(defun |hasHtml| (object &rest arguments)
  (%qinvoke-method object nil "hasHtml" arguments))

(defun |hasImage| (object &rest arguments)
  (%qinvoke-method object nil "hasImage" arguments))

(defun |hasIndex| (object &rest arguments)
  (%qinvoke-method object nil "hasIndex" arguments))

(defun |hasMouseTracking| (object &rest arguments)
  (%qinvoke-method object nil "hasMouseTracking" arguments))

(defun |hasNext| (object &rest arguments)
  (%qinvoke-method object nil "hasNext" arguments))

(defun |hasPendingEvents.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "hasPendingEvents" arguments))

(defun |hasProperty| (object &rest arguments)
  (%qinvoke-method object nil "hasProperty" arguments))

(defun |hasQueryItem| (object &rest arguments)
  (%qinvoke-method object nil "hasQueryItem" arguments))

(defun |hasQuery| (object &rest arguments)
  (%qinvoke-method object nil "hasQuery" arguments))

(defun |hasScaledContents| (object &rest arguments)
  (%qinvoke-method object nil "hasScaledContents" arguments))

(defun |hasSelectedText| (object &rest arguments)
  (%qinvoke-method object nil "hasSelectedText" arguments))

(defun |hasSelection| (object &rest arguments)
  (%qinvoke-method object nil "hasSelection" arguments))

(defun |hasText| (object &rest arguments)
  (%qinvoke-method object nil "hasText" arguments))

(defun |hasThemeIcon.QIcon| (&rest arguments)
  (%qinvoke-method "QIcon" nil "hasThemeIcon" arguments))

(defun |hasTracking| (object &rest arguments)
  (%qinvoke-method object nil "hasTracking" arguments))

(defun |hasUrls| (object &rest arguments)
  (%qinvoke-method object nil "hasUrls" arguments))

(defun |hasVisitedPage| (object &rest arguments)
  (%qinvoke-method object nil "hasVisitedPage" arguments))

(defun |hash.QCryptographicHash| (&rest arguments)
  (%qinvoke-method "QCryptographicHash" nil "hash" arguments))

(defun |headerDataChanged| (object &rest arguments)
  (%qinvoke-method object nil "headerDataChanged" arguments))

(defun |headerData| (object &rest arguments)
  (%qinvoke-method object nil "headerData" arguments))

(defun |headerItem| (object &rest arguments)
  (%qinvoke-method object nil "headerItem" arguments))

(defun |headerRowCount| (object &rest arguments)
  (%qinvoke-method object nil "headerRowCount" arguments))

(defun |headerTextFormat| (object &rest arguments)
  (%qinvoke-method object nil "headerTextFormat" arguments))

(defun |header| (object &rest arguments)
  (%qinvoke-method object nil "header" arguments))

(defun |heightChanged| (object &rest arguments)
  (%qinvoke-method object nil "heightChanged" arguments))

(defun |heightForWidth| (object &rest arguments)
  (%qinvoke-method object nil "heightForWidth" arguments))

(defun |heightMM| (object &rest arguments)
  (%qinvoke-method object nil "heightMM" arguments))

(defun |height| (object &rest arguments)
  (%qinvoke-method object nil "height" arguments))

(defun |helpEvent| (object &rest arguments)
  (%qinvoke-method object nil "helpEvent" arguments))

(defun |helpRequested| (object &rest arguments)
  (%qinvoke-method object nil "helpRequested" arguments))

(defun |hiResGlobalPos| (object &rest arguments)
  (%qinvoke-method object nil "hiResGlobalPos" arguments))

(defun |hiResGlobalX| (object &rest arguments)
  (%qinvoke-method object nil "hiResGlobalX" arguments))

(defun |hiResGlobalY| (object &rest arguments)
  (%qinvoke-method object nil "hiResGlobalY" arguments))

(defun |hiddenSectionCount| (object &rest arguments)
  (%qinvoke-method object nil "hiddenSectionCount" arguments))

(defun |hideColumn| (object &rest arguments)
  (%qinvoke-method object nil "hideColumn" arguments))

(defun |hideOrShow| (object &rest arguments)
  (%qinvoke-method object nil "hideOrShow" arguments))

(defun |hidePopup| (object &rest arguments)
  (%qinvoke-method object nil "hidePopup" arguments))

(defun |hideRow| (object &rest arguments)
  (%qinvoke-method object nil "hideRow" arguments))

(defun |hideSection| (object &rest arguments)
  (%qinvoke-method object nil "hideSection" arguments))

(defun |hideTearOffMenu| (object &rest arguments)
  (%qinvoke-method object nil "hideTearOffMenu" arguments))

(defun |hideText.QToolTip| (&rest arguments)
  (%qinvoke-method "QToolTip" nil "hideText" arguments))

(defun |hideText.QWhatsThis| (&rest arguments)
  (%qinvoke-method "QWhatsThis" nil "hideText" arguments))

(defun |hide| (object &rest arguments)
  (%qinvoke-method object nil "hide" arguments))

(defun |highlightSections| (object &rest arguments)
  (%qinvoke-method object nil "highlightSections" arguments))

(defun |highlighted(QModelIndex)| (object &rest arguments)
  (%qinvoke-method object nil "highlighted(QModelIndex)" arguments))

(defun |highlighted(QString)| (object &rest arguments)
  (%qinvoke-method object nil "highlighted(QString)" arguments))

(defun |highlighted(QUrl)| (object &rest arguments)
  (%qinvoke-method object nil "highlighted(QUrl)" arguments))

(defun |highlighted(int)| (object &rest arguments)
  (%qinvoke-method object nil "highlighted(int)" arguments))

(defun |highlightedText| (object &rest arguments)
  (%qinvoke-method object nil "highlightedText" arguments))

(defun |highlighted| (object &rest arguments)
  (%qinvoke-method object nil "highlighted" arguments))

(defun |highlight| (object &rest arguments)
  (%qinvoke-method object nil "highlight" arguments))

(defun |historyChanged| (object &rest arguments)
  (%qinvoke-method object nil "historyChanged" arguments))

(defun |historyTitle| (object &rest arguments)
  (%qinvoke-method object nil "historyTitle" arguments))

(defun |historyType| (object &rest arguments)
  (%qinvoke-method object nil "historyType" arguments))

(defun |historyUrl| (object &rest arguments)
  (%qinvoke-method object nil "historyUrl" arguments))

(defun |history| (object &rest arguments)
  (%qinvoke-method object nil "history" arguments))

(defun |hitTestComplexControl| (object &rest arguments)
  (%qinvoke-method object nil "hitTestComplexControl" arguments))

(defun |hitTestPath| (object &rest arguments)
  (%qinvoke-method object nil "hitTestPath" arguments))

(defun |hitTest| (object &rest arguments)
  (%qinvoke-method object nil "hitTest" arguments))

(defun |home.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "home" arguments))

(defun |homePath.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "homePath" arguments))

(defun |home| (object &rest arguments)
  (%qinvoke-method object nil "home" arguments))

(defun |horizontalDirection| (object &rest arguments)
  (%qinvoke-method object nil "horizontalDirection" arguments))

(defun |horizontalHeaderFormat| (object &rest arguments)
  (%qinvoke-method object nil "horizontalHeaderFormat" arguments))

(defun |horizontalHeaderItem| (object &rest arguments)
  (%qinvoke-method object nil "horizontalHeaderItem" arguments))

(defun |horizontalHeader| (object &rest arguments)
  (%qinvoke-method object nil "horizontalHeader" arguments))

(defun |horizontalPolicy| (object &rest arguments)
  (%qinvoke-method object nil "horizontalPolicy" arguments))

(defun |horizontalScrollBarPolicy| (object &rest arguments)
  (%qinvoke-method object nil "horizontalScrollBarPolicy" arguments))

(defun |horizontalScrollBar| (object &rest arguments)
  (%qinvoke-method object nil "horizontalScrollBar" arguments))

(defun |horizontalScrollMode| (object &rest arguments)
  (%qinvoke-method object nil "horizontalScrollMode" arguments))

(defun |horizontalScrollbarAction| (object &rest arguments)
  (%qinvoke-method object nil "horizontalScrollbarAction" arguments))

(defun |horizontalScrollbarValueChanged| (object &rest arguments)
  (%qinvoke-method object nil "horizontalScrollbarValueChanged" arguments))

(defun |horizontalSpacing| (object &rest arguments)
  (%qinvoke-method object nil "horizontalSpacing" arguments))

(defun |horizontalStretch| (object &rest arguments)
  (%qinvoke-method object nil "horizontalStretch" arguments))

(defun |host| (object &rest arguments)
  (%qinvoke-method object nil "host" arguments))

(defun |hotSpot| (object &rest arguments)
  (%qinvoke-method object nil "hotSpot" arguments))

(defun |hour| (object &rest arguments)
  (%qinvoke-method object nil "hour" arguments))

(defun |hovered| (object &rest arguments)
  (%qinvoke-method object nil "hovered" arguments))

(defun |hover| (object &rest arguments)
  (%qinvoke-method object nil "hover" arguments))

(defun |href| (object &rest arguments)
  (%qinvoke-method object nil "href" arguments))

(defun |hslHueF| (object &rest arguments)
  (%qinvoke-method object nil "hslHueF" arguments))

(defun |hslHue| (object &rest arguments)
  (%qinvoke-method object nil "hslHue" arguments))

(defun |hslSaturationF| (object &rest arguments)
  (%qinvoke-method object nil "hslSaturationF" arguments))

(defun |hslSaturation| (object &rest arguments)
  (%qinvoke-method object nil "hslSaturation" arguments))

(defun |hsvHueF| (object &rest arguments)
  (%qinvoke-method object nil "hsvHueF" arguments))

(defun |hsvHue| (object &rest arguments)
  (%qinvoke-method object nil "hsvHue" arguments))

(defun |hsvSaturationF| (object &rest arguments)
  (%qinvoke-method object nil "hsvSaturationF" arguments))

(defun |hsvSaturation| (object &rest arguments)
  (%qinvoke-method object nil "hsvSaturation" arguments))

(defun |html| (object &rest arguments)
  (%qinvoke-method object nil "html" arguments))

(defun |hueF| (object &rest arguments)
  (%qinvoke-method object nil "hueF" arguments))

(defun |hue| (object &rest arguments)
  (%qinvoke-method object nil "hue" arguments))

(defun |icon(QFileIconProvider::IconType)| (object &rest arguments)
  (%qinvoke-method object nil "icon(QFileIconProvider::IconType)" arguments))

(defun |icon(QFileInfo)| (object &rest arguments)
  (%qinvoke-method object nil "icon(QFileInfo)" arguments))

(defun |iconPixmap| (object &rest arguments)
  (%qinvoke-method object nil "iconPixmap" arguments))

(defun |iconProvider| (object &rest arguments)
  (%qinvoke-method object nil "iconProvider" arguments))

(defun |iconSizeChanged| (object &rest arguments)
  (%qinvoke-method object nil "iconSizeChanged" arguments))

(defun |iconSize| (object &rest arguments)
  (%qinvoke-method object nil "iconSize" arguments))

(defun |iconText| (object &rest arguments)
  (%qinvoke-method object nil "iconText" arguments))

(defun |icon| (object &rest arguments)
  (%qinvoke-method object nil "icon" arguments))

(defun |idealWidth| (object &rest arguments)
  (%qinvoke-method object nil "idealWidth" arguments))

(defun |identifierName| (object &rest arguments)
  (%qinvoke-method object nil "identifierName" arguments))

(defun |idnWhitelist.QUrl| (&rest arguments)
  (%qinvoke-method "QUrl" nil "idnWhitelist" arguments))

(defun |id| (object &rest arguments)
  (%qinvoke-method object nil "id" arguments))

(defun |ignore(QGesture*)| (object &rest arguments)
  (%qinvoke-method object nil "ignore(QGesture*)" arguments))

(defun |ignore(Qt::GestureType)| (object &rest arguments)
  (%qinvoke-method object nil "ignore(Qt::GestureType)" arguments))

(defun |ignore| (object &rest arguments)
  (%qinvoke-method object nil "ignore" arguments))

(defun |imageData| (object &rest arguments)
  (%qinvoke-method object nil "imageData" arguments))

(defun |image| (object &rest arguments)
  (%qinvoke-method object nil "image" arguments))

(defun |inFont| (object &rest arguments)
  (%qinvoke-method object nil "inFont" arguments))

(defun |inWhatsThisMode.QWhatsThis| (&rest arguments)
  (%qinvoke-method "QWhatsThis" nil "inWhatsThisMode" arguments))

(defun |indentWidth| (object &rest arguments)
  (%qinvoke-method object nil "indentWidth" arguments))

(defun |indentation| (object &rest arguments)
  (%qinvoke-method object nil "indentation" arguments))

(defun |indent| (object &rest arguments)
  (%qinvoke-method object nil "indent" arguments))

(defun |index(QString...)| (object &rest arguments)
  (%qinvoke-method object nil "index(QString...)" arguments))

(defun |index(int...)| (object &rest arguments)
  (%qinvoke-method object nil "index(int...)" arguments))

(defun |indexAbove| (object &rest arguments)
  (%qinvoke-method object nil "indexAbove" arguments))

(defun |indexAt| (object &rest arguments)
  (%qinvoke-method object nil "indexAt" arguments))

(defun |indexBelow| (object &rest arguments)
  (%qinvoke-method object nil "indexBelow" arguments))

(defun |indexChanged| (object &rest arguments)
  (%qinvoke-method object nil "indexChanged" arguments))

(defun |indexFromItem| (object &rest arguments)
  (%qinvoke-method object nil "indexFromItem" arguments))

(defun |indexIn| (object &rest arguments)
  (%qinvoke-method object nil "indexIn" arguments))

(defun |indexOfAnimation| (object &rest arguments)
  (%qinvoke-method object nil "indexOfAnimation" arguments))

(defun |indexOfChild| (object &rest arguments)
  (%qinvoke-method object nil "indexOfChild" arguments))

(defun |indexOfClassInfo| (object &rest arguments)
  (%qinvoke-method object nil "indexOfClassInfo" arguments))

(defun |indexOfConstructor| (object &rest arguments)
  (%qinvoke-method object nil "indexOfConstructor" arguments))

(defun |indexOfEnumerator| (object &rest arguments)
  (%qinvoke-method object nil "indexOfEnumerator" arguments))

(defun |indexOfMethod| (object &rest arguments)
  (%qinvoke-method object nil "indexOfMethod" arguments))

(defun |indexOfProperty| (object &rest arguments)
  (%qinvoke-method object nil "indexOfProperty" arguments))

(defun |indexOfSignal| (object &rest arguments)
  (%qinvoke-method object nil "indexOfSignal" arguments))

(defun |indexOfSlot| (object &rest arguments)
  (%qinvoke-method object nil "indexOfSlot" arguments))

(defun |indexOfTopLevelItem| (object &rest arguments)
  (%qinvoke-method object nil "indexOfTopLevelItem" arguments))

(defun |indexOf| (object &rest arguments)
  (%qinvoke-method object nil "indexOf" arguments))

(defun |indexRowSizeHint| (object &rest arguments)
  (%qinvoke-method object nil "indexRowSizeHint" arguments))

(defun |indexWidget| (object &rest arguments)
  (%qinvoke-method object nil "indexWidget" arguments))

(defun |indexesMoved| (object &rest arguments)
  (%qinvoke-method object nil "indexesMoved" arguments))

(defun |indexes| (object &rest arguments)
  (%qinvoke-method object nil "indexes" arguments))

(defun |index| (object &rest arguments)
  (%qinvoke-method object nil "index" arguments))

(defun |information.QMessageBox| (&rest arguments)
  (%qinvoke-method "QMessageBox" nil "information" arguments))

(defun |informativeText| (object &rest arguments)
  (%qinvoke-method object nil "informativeText" arguments))

(defun |inherits| (object &rest arguments)
  (%qinvoke-method object nil "inherits" arguments))

(defun |iniCodec| (object &rest arguments)
  (%qinvoke-method object nil "iniCodec" arguments))

(defun |initFrom| (object &rest arguments)
  (%qinvoke-method object nil "initFrom" arguments))

(defun |initStyleOption| (object &rest arguments)
  (%qinvoke-method object nil "initStyleOption" arguments))

(defun |initialState| (object &rest arguments)
  (%qinvoke-method object nil "initialState" arguments))

(defun |initializeColumn| (object &rest arguments)
  (%qinvoke-method object nil "initializeColumn" arguments))

(defun |initializePage| (object &rest arguments)
  (%qinvoke-method object nil "initializePage" arguments))

(defun |inputContext| (object &rest arguments)
  (%qinvoke-method object nil "inputContext" arguments))

(defun |inputMask| (object &rest arguments)
  (%qinvoke-method object nil "inputMask" arguments))

(defun |inputMethodHints| (object &rest arguments)
  (%qinvoke-method object nil "inputMethodHints" arguments))

(defun |inputMethodQuery| (object &rest arguments)
  (%qinvoke-method object nil "inputMethodQuery" arguments))

(defun |inputMode| (object &rest arguments)
  (%qinvoke-method object nil "inputMode" arguments))

(defun |insert.QPixmapCache| (&rest arguments)
  (%qinvoke-method "QPixmapCache" nil "insert" arguments))

(defun |insertActions| (object &rest arguments)
  (%qinvoke-method object nil "insertActions" arguments))

(defun |insertAction| (object &rest arguments)
  (%qinvoke-method object nil "insertAction" arguments))

(defun |insertAnimation| (object &rest arguments)
  (%qinvoke-method object nil "insertAnimation" arguments))

(defun |insertBlock| (object &rest arguments)
  (%qinvoke-method object nil "insertBlock" arguments))

(defun |insertChildren| (object &rest arguments)
  (%qinvoke-method object nil "insertChildren" arguments))

(defun |insertChild| (object &rest arguments)
  (%qinvoke-method object nil "insertChild" arguments))

(defun |insertColumn(int,QList<QStandardItem*>)| (object &rest arguments)
  (%qinvoke-method object nil "insertColumn(int,QList<QStandardItem*>)" arguments))

(defun |insertColumn(int,QModelIndex)| (object &rest arguments)
  (%qinvoke-method object nil "insertColumn(int,QModelIndex)" arguments))

(defun |insertColumns| (object &rest arguments)
  (%qinvoke-method object nil "insertColumns" arguments))

(defun |insertColumn| (object &rest arguments)
  (%qinvoke-method object nil "insertColumn" arguments))

(defun |insertFragment| (object &rest arguments)
  (%qinvoke-method object nil "insertFragment" arguments))

(defun |insertFrame| (object &rest arguments)
  (%qinvoke-method object nil "insertFrame" arguments))

(defun |insertHtml| (object &rest arguments)
  (%qinvoke-method object nil "insertHtml" arguments))

(defun |insertImage(QImage)| (object &rest arguments)
  (%qinvoke-method object nil "insertImage(QImage)" arguments))

(defun |insertImage(QImage...)| (object &rest arguments)
  (%qinvoke-method object nil "insertImage(QImage...)" arguments))

(defun |insertImage(QString)| (object &rest arguments)
  (%qinvoke-method object nil "insertImage(QString)" arguments))

(defun |insertImage(QTextImageFormat)| (object &rest arguments)
  (%qinvoke-method object nil "insertImage(QTextImageFormat)" arguments))

(defun |insertImage(QTextImageFormat...)| (object &rest arguments)
  (%qinvoke-method object nil "insertImage(QTextImageFormat...)" arguments))

(defun |insertImage| (object &rest arguments)
  (%qinvoke-method object nil "insertImage" arguments))

(defun |insertItem(int,QIcon...)| (object &rest arguments)
  (%qinvoke-method object nil "insertItem(int,QIcon...)" arguments))

(defun |insertItem(int,QListWidgetItem*)| (object &rest arguments)
  (%qinvoke-method object nil "insertItem(int,QListWidgetItem*)" arguments))

(defun |insertItem(int,QString)| (object &rest arguments)
  (%qinvoke-method object nil "insertItem(int,QString)" arguments))

(defun |insertItem(int,QString...)| (object &rest arguments)
  (%qinvoke-method object nil "insertItem(int,QString...)" arguments))

(defun |insertItems| (object &rest arguments)
  (%qinvoke-method object nil "insertItems" arguments))

(defun |insertItem| (object &rest arguments)
  (%qinvoke-method object nil "insertItem" arguments))

(defun |insertLayout| (object &rest arguments)
  (%qinvoke-method object nil "insertLayout" arguments))

(defun |insertList(QTextListFormat)| (object &rest arguments)
  (%qinvoke-method object nil "insertList(QTextListFormat)" arguments))

(defun |insertList(QTextListFormat::Style)| (object &rest arguments)
  (%qinvoke-method object nil "insertList(QTextListFormat::Style)" arguments))

(defun |insertList| (object &rest arguments)
  (%qinvoke-method object nil "insertList" arguments))

(defun |insertMenu| (object &rest arguments)
  (%qinvoke-method object nil "insertMenu" arguments))

(defun |insertPause| (object &rest arguments)
  (%qinvoke-method object nil "insertPause" arguments))

(defun |insertPermanentWidget| (object &rest arguments)
  (%qinvoke-method object nil "insertPermanentWidget" arguments))

(defun |insertPlainText| (object &rest arguments)
  (%qinvoke-method object nil "insertPlainText" arguments))

(defun |insertPolicy| (object &rest arguments)
  (%qinvoke-method object nil "insertPolicy" arguments))

(defun |insertRow(int,QLayout*)| (object &rest arguments)
  (%qinvoke-method object nil "insertRow(int,QLayout*)" arguments))

(defun |insertRow(int,QList<QStandardItem*>)| (object &rest arguments)
  (%qinvoke-method object nil "insertRow(int,QList<QStandardItem*>)" arguments))

(defun |insertRow(int,QModelIndex)| (object &rest arguments)
  (%qinvoke-method object nil "insertRow(int,QModelIndex)" arguments))

(defun |insertRow(int,QStandardItem*)| (object &rest arguments)
  (%qinvoke-method object nil "insertRow(int,QStandardItem*)" arguments))

(defun |insertRow(int,QString,QLayout*)| (object &rest arguments)
  (%qinvoke-method object nil "insertRow(int,QString,QLayout*)" arguments))

(defun |insertRow(int,QString,QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "insertRow(int,QString,QWidget*)" arguments))

(defun |insertRow(int,QString...)| (object &rest arguments)
  (%qinvoke-method object nil "insertRow(int,QString...)" arguments))

(defun |insertRow(int,QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "insertRow(int,QWidget*)" arguments))

(defun |insertRow(int,QWidget*,QLayout*)| (object &rest arguments)
  (%qinvoke-method object nil "insertRow(int,QWidget*,QLayout*)" arguments))

(defun |insertRow(int,QWidget*,QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "insertRow(int,QWidget*,QWidget*)" arguments))

(defun |insertRow(int,QWidget*...)| (object &rest arguments)
  (%qinvoke-method object nil "insertRow(int,QWidget*...)" arguments))

(defun |insertRows(int,QList<QStandardItem*>)| (object &rest arguments)
  (%qinvoke-method object nil "insertRows(int,QList<QStandardItem*>)" arguments))

(defun |insertRows(int,int)| (object &rest arguments)
  (%qinvoke-method object nil "insertRows(int,int)" arguments))

(defun |insertRows| (object &rest arguments)
  (%qinvoke-method object nil "insertRows" arguments))

(defun |insertRow| (object &rest arguments)
  (%qinvoke-method object nil "insertRow" arguments))

(defun |insertSeparator| (object &rest arguments)
  (%qinvoke-method object nil "insertSeparator" arguments))

(defun |insertSpacerItem| (object &rest arguments)
  (%qinvoke-method object nil "insertSpacerItem" arguments))

(defun |insertSpacing| (object &rest arguments)
  (%qinvoke-method object nil "insertSpacing" arguments))

(defun |insertStretch| (object &rest arguments)
  (%qinvoke-method object nil "insertStretch" arguments))

(defun |insertSubstitution.QFont| (&rest arguments)
  (%qinvoke-method "QFont" nil "insertSubstitution" arguments))

(defun |insertSubstitutions.QFont| (&rest arguments)
  (%qinvoke-method "QFont" nil "insertSubstitutions" arguments))

(defun |insertTable| (object &rest arguments)
  (%qinvoke-method object nil "insertTable" arguments))

(defun |insertTab| (object &rest arguments)
  (%qinvoke-method object nil "insertTab" arguments))

(defun |insertText| (object &rest arguments)
  (%qinvoke-method object nil "insertText" arguments))

(defun |insertToolBarBreak| (object &rest arguments)
  (%qinvoke-method object nil "insertToolBarBreak" arguments))

(defun |insertToolBar| (object &rest arguments)
  (%qinvoke-method object nil "insertToolBar" arguments))

(defun |insertTopLevelItems| (object &rest arguments)
  (%qinvoke-method object nil "insertTopLevelItems" arguments))

(defun |insertTopLevelItem| (object &rest arguments)
  (%qinvoke-method object nil "insertTopLevelItem" arguments))

(defun |insertWidget| (object &rest arguments)
  (%qinvoke-method object nil "insertWidget" arguments))

(defun |insert| (object &rest arguments)
  (%qinvoke-method object nil "insert" arguments))

(defun |installEventFilter| (object &rest arguments)
  (%qinvoke-method object nil "installEventFilter" arguments))

(defun |installFactory.QAccessible| (&rest arguments)
  (%qinvoke-method "QAccessible" nil "installFactory" arguments))

(defun |installSceneEventFilter| (object &rest arguments)
  (%qinvoke-method object nil "installSceneEventFilter" arguments))

(defun |installTranslator.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "installTranslator" arguments))

(defun |instance.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "instance" arguments))

(defun |instance| (object &rest arguments)
  (%qinvoke-method object nil "instance" arguments))

(defun |intMaximum| (object &rest arguments)
  (%qinvoke-method object nil "intMaximum" arguments))

(defun |intMinimum| (object &rest arguments)
  (%qinvoke-method object nil "intMinimum" arguments))

(defun |intProperty| (object &rest arguments)
  (%qinvoke-method object nil "intProperty" arguments))

(defun |intStep| (object &rest arguments)
  (%qinvoke-method object nil "intStep" arguments))

(defun |intValueChanged| (object &rest arguments)
  (%qinvoke-method object nil "intValueChanged" arguments))

(defun |intValueSelected| (object &rest arguments)
  (%qinvoke-method object nil "intValueSelected" arguments))

(defun |intValue| (object &rest arguments)
  (%qinvoke-method object nil "intValue" arguments))

(defun |internalDelayedPopup| (object &rest arguments)
  (%qinvoke-method object nil "internalDelayedPopup" arguments))

(defun |internalId| (object &rest arguments)
  (%qinvoke-method object nil "internalId" arguments))

(defun |internalSetSloppyAction| (object &rest arguments)
  (%qinvoke-method object nil "internalSetSloppyAction" arguments))

(defun |interpretText| (object &rest arguments)
  (%qinvoke-method object nil "interpretText" arguments))

(defun |intersected(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "intersected(QRect)" arguments))

(defun |intersected(QRegion)| (object &rest arguments)
  (%qinvoke-method object nil "intersected(QRegion)" arguments))

(defun |intersected| (object &rest arguments)
  (%qinvoke-method object nil "intersected" arguments))

(defun |intersects(QPainterPath)| (object &rest arguments)
  (%qinvoke-method object nil "intersects(QPainterPath)" arguments))

(defun |intersects(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "intersects(QRect)" arguments))

(defun |intersects(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "intersects(QRectF)" arguments))

(defun |intersects(QRegion)| (object &rest arguments)
  (%qinvoke-method object nil "intersects(QRegion)" arguments))

(defun |intersects| (object &rest arguments)
  (%qinvoke-method object nil "intersects" arguments))

(defun |interval| (object &rest arguments)
  (%qinvoke-method object nil "interval" arguments))

(defun |invalidateFilter| (object &rest arguments)
  (%qinvoke-method object nil "invalidateFilter" arguments))

(defun |invalidateScene| (object &rest arguments)
  (%qinvoke-method object nil "invalidateScene" arguments))

(defun |invalidate| (object &rest arguments)
  (%qinvoke-method object nil "invalidate" arguments))

(defun |invertPixels| (object &rest arguments)
  (%qinvoke-method object nil "invertPixels" arguments))

(defun |invertedAppearance| (object &rest arguments)
  (%qinvoke-method object nil "invertedAppearance" arguments))

(defun |invertedControls| (object &rest arguments)
  (%qinvoke-method object nil "invertedControls" arguments))

(defun |inverted| (object &rest arguments)
  (%qinvoke-method object nil "inverted" arguments))

(defun |invisibleRootItem| (object &rest arguments)
  (%qinvoke-method object nil "invisibleRootItem" arguments))

(defun |invokeMethod| (object &rest arguments)
  (%qinvoke-method object nil "invokeMethod" arguments))

(defun |isAbsolutePath.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "isAbsolutePath" arguments))

(defun |isAbsolute| (object &rest arguments)
  (%qinvoke-method object nil "isAbsolute" arguments))

(defun |isAccelerated| (object &rest arguments)
  (%qinvoke-method object nil "isAccelerated" arguments))

(defun |isAccepted(QGesture*)| (object &rest arguments)
  (%qinvoke-method object nil "isAccepted(QGesture*)" arguments))

(defun |isAccepted(Qt::GestureType)| (object &rest arguments)
  (%qinvoke-method object nil "isAccepted(Qt::GestureType)" arguments))

(defun |isAccepted| (object &rest arguments)
  (%qinvoke-method object nil "isAccepted" arguments))

(defun |isActivated| (object &rest arguments)
  (%qinvoke-method object nil "isActivated" arguments))

(defun |isActive.QAccessible| (&rest arguments)
  (%qinvoke-method "QAccessible" nil "isActive" arguments))

(defun |isActiveWindow| (object &rest arguments)
  (%qinvoke-method object nil "isActiveWindow" arguments))

(defun |isActive| (object &rest arguments)
  (%qinvoke-method object nil "isActive" arguments))

(defun |isAffine| (object &rest arguments)
  (%qinvoke-method object nil "isAffine" arguments))

(defun |isAmbiguous| (object &rest arguments)
  (%qinvoke-method object nil "isAmbiguous" arguments))

(defun |isAncestorOf| (object &rest arguments)
  (%qinvoke-method object nil "isAncestorOf" arguments))

(defun |isAnchor| (object &rest arguments)
  (%qinvoke-method object nil "isAnchor" arguments))

(defun |isAnimated| (object &rest arguments)
  (%qinvoke-method object nil "isAnimated" arguments))

(defun |isAreaAllowed| (object &rest arguments)
  (%qinvoke-method object nil "isAreaAllowed" arguments))

(defun |isAtBoundary| (object &rest arguments)
  (%qinvoke-method object nil "isAtBoundary" arguments))

(defun |isAutoRepeat| (object &rest arguments)
  (%qinvoke-method object nil "isAutoRepeat" arguments))

(defun |isAvailable.QSound| (&rest arguments)
  (%qinvoke-method "QSound" nil "isAvailable" arguments))

(defun |isBackwardAvailable| (object &rest arguments)
  (%qinvoke-method object nil "isBackwardAvailable" arguments))

(defun |isBitmapScalable| (object &rest arguments)
  (%qinvoke-method object nil "isBitmapScalable" arguments))

(defun |isBlockFormat| (object &rest arguments)
  (%qinvoke-method object nil "isBlockFormat" arguments))

(defun |isBrushSet| (object &rest arguments)
  (%qinvoke-method object nil "isBrushSet" arguments))

(defun |isBundle| (object &rest arguments)
  (%qinvoke-method object nil "isBundle" arguments))

(defun |isCharFormat| (object &rest arguments)
  (%qinvoke-method object nil "isCharFormat" arguments))

(defun |isCheckable| (object &rest arguments)
  (%qinvoke-method object nil "isCheckable" arguments))

(defun |isChecked| (object &rest arguments)
  (%qinvoke-method object nil "isChecked" arguments))

(defun |isClean| (object &rest arguments)
  (%qinvoke-method object nil "isClean" arguments))

(defun |isClickable| (object &rest arguments)
  (%qinvoke-method object nil "isClickable" arguments))

(defun |isClipped| (object &rest arguments)
  (%qinvoke-method object nil "isClipped" arguments))

(defun |isCollapsible| (object &rest arguments)
  (%qinvoke-method object nil "isCollapsible" arguments))

(defun |isColumnHidden| (object &rest arguments)
  (%qinvoke-method object nil "isColumnHidden" arguments))

(defun |isColumnSelected| (object &rest arguments)
  (%qinvoke-method object nil "isColumnSelected" arguments))

(defun |isComboBoxEditable| (object &rest arguments)
  (%qinvoke-method object nil "isComboBoxEditable" arguments))

(defun |isCommitPage| (object &rest arguments)
  (%qinvoke-method object nil "isCommitPage" arguments))

(defun |isComplete| (object &rest arguments)
  (%qinvoke-method object nil "isComplete" arguments))

(defun |isComposing| (object &rest arguments)
  (%qinvoke-method object nil "isComposing" arguments))

(defun |isCopyOf| (object &rest arguments)
  (%qinvoke-method object nil "isCopyOf" arguments))

(defun |isCornerButtonEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isCornerButtonEnabled" arguments))

(defun |isCosmetic| (object &rest arguments)
  (%qinvoke-method object nil "isCosmetic" arguments))

(defun |isDateEditEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isDateEditEnabled" arguments))

(defun |isDefaultUp| (object &rest arguments)
  (%qinvoke-method object nil "isDefaultUp" arguments))

(defun |isDefault| (object &rest arguments)
  (%qinvoke-method object nil "isDefault" arguments))

(defun |isDir| (object &rest arguments)
  (%qinvoke-method object nil "isDir" arguments))

(defun |isDisabled| (object &rest arguments)
  (%qinvoke-method object nil "isDisabled" arguments))

(defun |isDockNestingEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isDockNestingEnabled" arguments))

(defun |isDown| (object &rest arguments)
  (%qinvoke-method object nil "isDown" arguments))

(defun |isDragEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isDragEnabled" arguments))

(defun |isDropEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isDropEnabled" arguments))

(defun |isEditable| (object &rest arguments)
  (%qinvoke-method object nil "isEditable" arguments))

(defun |isEffectEnabled.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "isEffectEnabled" arguments))

(defun |isEmpty| (object &rest arguments)
  (%qinvoke-method object nil "isEmpty" arguments))

(defun |isEnabledTo| (object &rest arguments)
  (%qinvoke-method object nil "isEnabledTo" arguments))

(defun |isEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isEnabled" arguments))

(defun |isEqual| (object &rest arguments)
  (%qinvoke-method object nil "isEqual" arguments))

(defun |isExclusive| (object &rest arguments)
  (%qinvoke-method object nil "isExclusive" arguments))

(defun |isExecutable| (object &rest arguments)
  (%qinvoke-method object nil "isExecutable" arguments))

(defun |isExpanded| (object &rest arguments)
  (%qinvoke-method object nil "isExpanded" arguments))

(defun |isFile| (object &rest arguments)
  (%qinvoke-method object nil "isFile" arguments))

(defun |isFinalPage| (object &rest arguments)
  (%qinvoke-method object nil "isFinalPage" arguments))

(defun |isFinished| (object &rest arguments)
  (%qinvoke-method object nil "isFinished" arguments))

(defun |isFirstColumnSpanned| (object &rest arguments)
  (%qinvoke-method object nil "isFirstColumnSpanned" arguments))

(defun |isFirstItemColumnSpanned| (object &rest arguments)
  (%qinvoke-method object nil "isFirstItemColumnSpanned" arguments))

(defun |isFixedPitch| (object &rest arguments)
  (%qinvoke-method object nil "isFixedPitch" arguments))

(defun |isFlat| (object &rest arguments)
  (%qinvoke-method object nil "isFlat" arguments))

(defun |isFloatable| (object &rest arguments)
  (%qinvoke-method object nil "isFloatable" arguments))

(defun |isFloating| (object &rest arguments)
  (%qinvoke-method object nil "isFloating" arguments))

(defun |isForwardAvailable| (object &rest arguments)
  (%qinvoke-method object nil "isForwardAvailable" arguments))

(defun |isFrameFormat| (object &rest arguments)
  (%qinvoke-method object nil "isFrameFormat" arguments))

(defun |isFullScreen| (object &rest arguments)
  (%qinvoke-method object nil "isFullScreen" arguments))

(defun |isGrayscale| (object &rest arguments)
  (%qinvoke-method object nil "isGrayscale" arguments))

(defun |isGridVisible| (object &rest arguments)
  (%qinvoke-method object nil "isGridVisible" arguments))

(defun |isHeaderHidden| (object &rest arguments)
  (%qinvoke-method object nil "isHeaderHidden" arguments))

(defun |isHidden| (object &rest arguments)
  (%qinvoke-method object nil "isHidden" arguments))

(defun |isIconVisibleInMenu| (object &rest arguments)
  (%qinvoke-method object nil "isIconVisibleInMenu" arguments))

(defun |isIdentity| (object &rest arguments)
  (%qinvoke-method object nil "isIdentity" arguments))

(defun |isImageFormat| (object &rest arguments)
  (%qinvoke-method object nil "isImageFormat" arguments))

(defun |isInteractive| (object &rest arguments)
  (%qinvoke-method object nil "isInteractive" arguments))

(defun |isInvertible| (object &rest arguments)
  (%qinvoke-method object nil "isInvertible" arguments))

(defun |isItemEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isItemEnabled" arguments))

(defun |isLayout| (object &rest arguments)
  (%qinvoke-method object nil "isLayout" arguments))

(defun |isLeapYear.QDate| (&rest arguments)
  (%qinvoke-method "QDate" nil "isLeapYear" arguments))

(defun |isLeftToRight.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "isLeftToRight" arguments))

(defun |isLibrary.QLibrary| (&rest arguments)
  (%qinvoke-method "QLibrary" nil "isLibrary" arguments))

(defun |isListFormat| (object &rest arguments)
  (%qinvoke-method object nil "isListFormat" arguments))

(defun |isLoaded| (object &rest arguments)
  (%qinvoke-method object nil "isLoaded" arguments))

(defun |isMaximized| (object &rest arguments)
  (%qinvoke-method object nil "isMaximized" arguments))

(defun |isMinimal| (object &rest arguments)
  (%qinvoke-method object nil "isMinimal" arguments))

(defun |isMinimized| (object &rest arguments)
  (%qinvoke-method object nil "isMinimized" arguments))

(defun |isModal| (object &rest arguments)
  (%qinvoke-method object nil "isModal" arguments))

(defun |isModified| (object &rest arguments)
  (%qinvoke-method object nil "isModified" arguments))

(defun |isMovable| (object &rest arguments)
  (%qinvoke-method object nil "isMovable" arguments))

(defun |isNameFilterDetailsVisible| (object &rest arguments)
  (%qinvoke-method object nil "isNameFilterDetailsVisible" arguments))

(defun |isNativeMenuBar| (object &rest arguments)
  (%qinvoke-method object nil "isNativeMenuBar" arguments))

(defun |isNavigationBarVisible| (object &rest arguments)
  (%qinvoke-method object nil "isNavigationBarVisible" arguments))

(defun |isNull| (object &rest arguments)
  (%qinvoke-method object nil "isNull" arguments))

(defun |isObscuredBy| (object &rest arguments)
  (%qinvoke-method object nil "isObscuredBy" arguments))

(defun |isObscured| (object &rest arguments)
  (%qinvoke-method object nil "isObscured" arguments))

(defun |isOpaque| (object &rest arguments)
  (%qinvoke-method object nil "isOpaque" arguments))

(defun |isOpen| (object &rest arguments)
  (%qinvoke-method object nil "isOpen" arguments))

(defun |isPanel| (object &rest arguments)
  (%qinvoke-method object nil "isPanel" arguments))

(defun |isParentOf| (object &rest arguments)
  (%qinvoke-method object nil "isParentOf" arguments))

(defun |isPhase2| (object &rest arguments)
  (%qinvoke-method object nil "isPhase2" arguments))

(defun |isQBitmap| (object &rest arguments)
  (%qinvoke-method object nil "isQBitmap" arguments))

(defun |isReadOnly| (object &rest arguments)
  (%qinvoke-method object nil "isReadOnly" arguments))

(defun |isReadable| (object &rest arguments)
  (%qinvoke-method object nil "isReadable" arguments))

(defun |isRedoAvailable| (object &rest arguments)
  (%qinvoke-method object nil "isRedoAvailable" arguments))

(defun |isRelativePath.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "isRelativePath" arguments))

(defun |isRelative| (object &rest arguments)
  (%qinvoke-method object nil "isRelative" arguments))

(defun |isRightToLeft.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "isRightToLeft" arguments))

(defun |isRoot| (object &rest arguments)
  (%qinvoke-method object nil "isRoot" arguments))

(defun |isRotating| (object &rest arguments)
  (%qinvoke-method object nil "isRotating" arguments))

(defun |isRowHidden| (object &rest arguments)
  (%qinvoke-method object nil "isRowHidden" arguments))

(defun |isRowSelected| (object &rest arguments)
  (%qinvoke-method object nil "isRowSelected" arguments))

(defun |isRunning| (object &rest arguments)
  (%qinvoke-method object nil "isRunning" arguments))

(defun |isScalable| (object &rest arguments)
  (%qinvoke-method object nil "isScalable" arguments))

(defun |isScaling| (object &rest arguments)
  (%qinvoke-method object nil "isScaling" arguments))

(defun |isSectionHidden| (object &rest arguments)
  (%qinvoke-method object nil "isSectionHidden" arguments))

(defun |isSelectable| (object &rest arguments)
  (%qinvoke-method object nil "isSelectable" arguments))

(defun |isSelected| (object &rest arguments)
  (%qinvoke-method object nil "isSelected" arguments))

(defun |isSelectionRectVisible| (object &rest arguments)
  (%qinvoke-method object nil "isSelectionRectVisible" arguments))

(defun |isSeparator| (object &rest arguments)
  (%qinvoke-method object nil "isSeparator" arguments))

(defun |isSequential| (object &rest arguments)
  (%qinvoke-method object nil "isSequential" arguments))

(defun |isSessionRestored| (object &rest arguments)
  (%qinvoke-method object nil "isSessionRestored" arguments))

(defun |isShaded| (object &rest arguments)
  (%qinvoke-method object nil "isShaded" arguments))

(defun |isSingleShot| (object &rest arguments)
  (%qinvoke-method object nil "isSingleShot" arguments))

(defun |isSizeGripEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isSizeGripEnabled" arguments))

(defun |isSliderDown| (object &rest arguments)
  (%qinvoke-method object nil "isSliderDown" arguments))

(defun |isSmoothlyScalable| (object &rest arguments)
  (%qinvoke-method object nil "isSmoothlyScalable" arguments))

(defun |isSolid| (object &rest arguments)
  (%qinvoke-method object nil "isSolid" arguments))

(defun |isSortCacheEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isSortCacheEnabled" arguments))

(defun |isSortIndicatorShown| (object &rest arguments)
  (%qinvoke-method object nil "isSortIndicatorShown" arguments))

(defun |isSortLocaleAware| (object &rest arguments)
  (%qinvoke-method object nil "isSortLocaleAware" arguments))

(defun |isSortingEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isSortingEnabled" arguments))

(defun |isSymLink| (object &rest arguments)
  (%qinvoke-method object nil "isSymLink" arguments))

(defun |isSystemTrayAvailable.QSystemTrayIcon| (&rest arguments)
  (%qinvoke-method "QSystemTrayIcon" nil "isSystemTrayAvailable" arguments))

(defun |isTabEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isTabEnabled" arguments))

(defun |isTableCellFormat| (object &rest arguments)
  (%qinvoke-method object nil "isTableCellFormat" arguments))

(defun |isTableFormat| (object &rest arguments)
  (%qinvoke-method object nil "isTableFormat" arguments))

(defun |isTearOffEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isTearOffEnabled" arguments))

(defun |isTearOffMenuVisible| (object &rest arguments)
  (%qinvoke-method object nil "isTearOffMenuVisible" arguments))

(defun |isTextModeEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isTextModeEnabled" arguments))

(defun |isTextVisible| (object &rest arguments)
  (%qinvoke-method object nil "isTextVisible" arguments))

(defun |isTransformed| (object &rest arguments)
  (%qinvoke-method object nil "isTransformed" arguments))

(defun |isTranslating| (object &rest arguments)
  (%qinvoke-method object nil "isTranslating" arguments))

(defun |isTristate| (object &rest arguments)
  (%qinvoke-method object nil "isTristate" arguments))

(defun |isUnderMouse| (object &rest arguments)
  (%qinvoke-method object nil "isUnderMouse" arguments))

(defun |isUndoAvailable| (object &rest arguments)
  (%qinvoke-method object nil "isUndoAvailable" arguments))

(defun |isUndoRedoEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isUndoRedoEnabled" arguments))

(defun |isValid.QDate| (&rest arguments)
  (%qinvoke-method "QDate" nil "isValid" arguments))

(defun |isValid.QTime| (&rest arguments)
  (%qinvoke-method "QTime" nil "isValid" arguments))

(defun |isValidCursorPosition| (object &rest arguments)
  (%qinvoke-method object nil "isValidCursorPosition" arguments))

(defun |isValid| (object &rest arguments)
  (%qinvoke-method object nil "isValid" arguments))

(defun |isVirtualDesktop| (object &rest arguments)
  (%qinvoke-method object nil "isVirtualDesktop" arguments))

(defun |isVisible.QToolTip| (&rest arguments)
  (%qinvoke-method "QToolTip" nil "isVisible" arguments))

(defun |isVisibleTo| (object &rest arguments)
  (%qinvoke-method object nil "isVisibleTo" arguments))

(defun |isVisible| (object &rest arguments)
  (%qinvoke-method object nil "isVisible" arguments))

(defun |isWidgetType| (object &rest arguments)
  (%qinvoke-method object nil "isWidgetType" arguments))

(defun |isWidget| (object &rest arguments)
  (%qinvoke-method object nil "isWidget" arguments))

(defun |isWindowModified| (object &rest arguments)
  (%qinvoke-method object nil "isWindowModified" arguments))

(defun |isWindow| (object &rest arguments)
  (%qinvoke-method object nil "isWindow" arguments))

(defun |isWrapping| (object &rest arguments)
  (%qinvoke-method object nil "isWrapping" arguments))

(defun |isWritable| (object &rest arguments)
  (%qinvoke-method object nil "isWritable" arguments))

(defun |italic| (object &rest arguments)
  (%qinvoke-method object nil "italic" arguments))

(defun |itemAbove| (object &rest arguments)
  (%qinvoke-method object nil "itemAbove" arguments))

(defun |itemActivated| (object &rest arguments)
  (%qinvoke-method object nil "itemActivated" arguments))

(defun |itemAtPosition| (object &rest arguments)
  (%qinvoke-method object nil "itemAtPosition" arguments))

(defun |itemAt| (object &rest arguments)
  (%qinvoke-method object nil "itemAt" arguments))

(defun |itemBelow| (object &rest arguments)
  (%qinvoke-method object nil "itemBelow" arguments))

(defun |itemChanged| (object &rest arguments)
  (%qinvoke-method object nil "itemChanged" arguments))

(defun |itemClicked| (object &rest arguments)
  (%qinvoke-method object nil "itemClicked" arguments))

(defun |itemCollapsed| (object &rest arguments)
  (%qinvoke-method object nil "itemCollapsed" arguments))

(defun |itemData| (object &rest arguments)
  (%qinvoke-method object nil "itemData" arguments))

(defun |itemDelegateForColumn| (object &rest arguments)
  (%qinvoke-method object nil "itemDelegateForColumn" arguments))

(defun |itemDelegateForRow| (object &rest arguments)
  (%qinvoke-method object nil "itemDelegateForRow" arguments))

(defun |itemDelegate| (object &rest arguments)
  (%qinvoke-method object nil "itemDelegate" arguments))

(defun |itemDoubleClicked| (object &rest arguments)
  (%qinvoke-method object nil "itemDoubleClicked" arguments))

(defun |itemEditorFactory| (object &rest arguments)
  (%qinvoke-method object nil "itemEditorFactory" arguments))

(defun |itemEntered| (object &rest arguments)
  (%qinvoke-method object nil "itemEntered" arguments))

(defun |itemExpanded| (object &rest arguments)
  (%qinvoke-method object nil "itemExpanded" arguments))

(defun |itemFromIndex| (object &rest arguments)
  (%qinvoke-method object nil "itemFromIndex" arguments))

(defun |itemIcon| (object &rest arguments)
  (%qinvoke-method object nil "itemIcon" arguments))

(defun |itemIndexMethod| (object &rest arguments)
  (%qinvoke-method object nil "itemIndexMethod" arguments))

(defun |itemNumber| (object &rest arguments)
  (%qinvoke-method object nil "itemNumber" arguments))

(defun |itemPixmapRect| (object &rest arguments)
  (%qinvoke-method object nil "itemPixmapRect" arguments))

(defun |itemPressed| (object &rest arguments)
  (%qinvoke-method object nil "itemPressed" arguments))

(defun |itemPrototype| (object &rest arguments)
  (%qinvoke-method object nil "itemPrototype" arguments))

(defun |itemSelectionChanged| (object &rest arguments)
  (%qinvoke-method object nil "itemSelectionChanged" arguments))

(defun |itemSpacing| (object &rest arguments)
  (%qinvoke-method object nil "itemSpacing" arguments))

(defun |itemTextRect| (object &rest arguments)
  (%qinvoke-method object nil "itemTextRect" arguments))

(defun |itemText| (object &rest arguments)
  (%qinvoke-method object nil "itemText" arguments))

(defun |itemToolTip| (object &rest arguments)
  (%qinvoke-method object nil "itemToolTip" arguments))

(defun |itemTransform| (object &rest arguments)
  (%qinvoke-method object nil "itemTransform" arguments))

(defun |itemWidget| (object &rest arguments)
  (%qinvoke-method object nil "itemWidget" arguments))

(defun |items(QPainterPath)| (object &rest arguments)
  (%qinvoke-method object nil "items(QPainterPath)" arguments))

(defun |items(QPainterPath...)| (object &rest arguments)
  (%qinvoke-method object nil "items(QPainterPath...)" arguments))

(defun |items(QPoint)| (object &rest arguments)
  (%qinvoke-method object nil "items(QPoint)" arguments))

(defun |items(QPointF...)| (object &rest arguments)
  (%qinvoke-method object nil "items(QPointF...)" arguments))

(defun |items(QPolygon)| (object &rest arguments)
  (%qinvoke-method object nil "items(QPolygon)" arguments))

(defun |items(QPolygon...)| (object &rest arguments)
  (%qinvoke-method object nil "items(QPolygon...)" arguments))

(defun |items(QPolygonF...)| (object &rest arguments)
  (%qinvoke-method object nil "items(QPolygonF...)" arguments))

(defun |items(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "items(QRect)" arguments))

(defun |items(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "items(QRect...)" arguments))

(defun |items(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "items(QRectF...)" arguments))

(defun |items(int...)| (object &rest arguments)
  (%qinvoke-method object nil "items(int...)" arguments))

(defun |itemsBoundingRect| (object &rest arguments)
  (%qinvoke-method object nil "itemsBoundingRect" arguments))

(defun |itemsExpandable| (object &rest arguments)
  (%qinvoke-method object nil "itemsExpandable" arguments))

(defun |items| (object &rest arguments)
  (%qinvoke-method object nil "items" arguments))

(defun |item| (object &rest arguments)
  (%qinvoke-method object nil "item" arguments))

(defun |joinPreviousEditBlock| (object &rest arguments)
  (%qinvoke-method object nil "joinPreviousEditBlock" arguments))

(defun |joinStyle| (object &rest arguments)
  (%qinvoke-method object nil "joinStyle" arguments))

(defun |jumpToFrame| (object &rest arguments)
  (%qinvoke-method object nil "jumpToFrame" arguments))

(defun |jumpToNextFrame| (object &rest arguments)
  (%qinvoke-method object nil "jumpToNextFrame" arguments))

(defun |kerning| (object &rest arguments)
  (%qinvoke-method object nil "kerning" arguments))

(defun |keyBindings.QKeySequence| (&rest arguments)
  (%qinvoke-method "QKeySequence" nil "keyBindings" arguments))

(defun |keyValueAt| (object &rest arguments)
  (%qinvoke-method object nil "keyValueAt" arguments))

(defun |keyboardGrabber.QWidget| (&rest arguments)
  (%qinvoke-method "QWidget" nil "keyboardGrabber" arguments))

(defun |keyboardInputDirection.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "keyboardInputDirection" arguments))

(defun |keyboardInputInterval.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "keyboardInputInterval" arguments))

(defun |keyboardInputLocale.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "keyboardInputLocale" arguments))

(defun |keyboardModifiers.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "keyboardModifiers" arguments))

(defun |keyboardModifiers| (object &rest arguments)
  (%qinvoke-method object nil "keyboardModifiers" arguments))

(defun |keyboardPageStep| (object &rest arguments)
  (%qinvoke-method object nil "keyboardPageStep" arguments))

(defun |keyboardSearch| (object &rest arguments)
  (%qinvoke-method object nil "keyboardSearch" arguments))

(defun |keyboardSingleStep| (object &rest arguments)
  (%qinvoke-method object nil "keyboardSingleStep" arguments))

(defun |keyboardTracking| (object &rest arguments)
  (%qinvoke-method object nil "keyboardTracking" arguments))

(defun |key| (object &rest arguments)
  (%qinvoke-method object nil "key" arguments))

(defun |killTimer| (object &rest arguments)
  (%qinvoke-method object nil "killTimer" arguments))

(defun |kill| (object &rest arguments)
  (%qinvoke-method object nil "kill" arguments))

(defun |labelAlignment| (object &rest arguments)
  (%qinvoke-method object nil "labelAlignment" arguments))

(defun |labelForField(QLayout*)| (object &rest arguments)
  (%qinvoke-method object nil "labelForField(QLayout*)" arguments))

(defun |labelForField(QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "labelForField(QWidget*)" arguments))

(defun |labelForField| (object &rest arguments)
  (%qinvoke-method object nil "labelForField" arguments))

(defun |labelText| (object &rest arguments)
  (%qinvoke-method object nil "labelText" arguments))

(defun |languageToString.QLocale| (&rest arguments)
  (%qinvoke-method "QLocale" nil "languageToString" arguments))

(defun |language| (object &rest arguments)
  (%qinvoke-method object nil "language" arguments))

(defun |lastBlock| (object &rest arguments)
  (%qinvoke-method object nil "lastBlock" arguments))

(defun |lastCenterPoint| (object &rest arguments)
  (%qinvoke-method object nil "lastCenterPoint" arguments))

(defun |lastCursorPosition| (object &rest arguments)
  (%qinvoke-method object nil "lastCursorPosition" arguments))

(defun |lastIndexIn| (object &rest arguments)
  (%qinvoke-method object nil "lastIndexIn" arguments))

(defun |lastModified| (object &rest arguments)
  (%qinvoke-method object nil "lastModified" arguments))

(defun |lastOffset| (object &rest arguments)
  (%qinvoke-method object nil "lastOffset" arguments))

(defun |lastPosition| (object &rest arguments)
  (%qinvoke-method object nil "lastPosition" arguments))

(defun |lastPos| (object &rest arguments)
  (%qinvoke-method object nil "lastPos" arguments))

(defun |lastRead| (object &rest arguments)
  (%qinvoke-method object nil "lastRead" arguments))

(defun |lastResortFamily| (object &rest arguments)
  (%qinvoke-method object nil "lastResortFamily" arguments))

(defun |lastResortFont| (object &rest arguments)
  (%qinvoke-method object nil "lastResortFont" arguments))

(defun |lastRotationAngle| (object &rest arguments)
  (%qinvoke-method object nil "lastRotationAngle" arguments))

(defun |lastScaleFactor| (object &rest arguments)
  (%qinvoke-method object nil "lastScaleFactor" arguments))

(defun |lastScenePos| (object &rest arguments)
  (%qinvoke-method object nil "lastScenePos" arguments))

(defun |lastScreenPos| (object &rest arguments)
  (%qinvoke-method object nil "lastScreenPos" arguments))

(defun |lastWindowClosed| (object &rest arguments)
  (%qinvoke-method object nil "lastWindowClosed" arguments))

(defun |layoutAboutToBeChanged| (object &rest arguments)
  (%qinvoke-method object nil "layoutAboutToBeChanged" arguments))

(defun |layoutChanged| (object &rest arguments)
  (%qinvoke-method object nil "layoutChanged" arguments))

(defun |layoutDirection.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "layoutDirection" arguments))

(defun |layoutDirection| (object &rest arguments)
  (%qinvoke-method object nil "layoutDirection" arguments))

(defun |layoutMode| (object &rest arguments)
  (%qinvoke-method object nil "layoutMode" arguments))

(defun |layoutSpacingImplementation| (object &rest arguments)
  (%qinvoke-method object nil "layoutSpacingImplementation" arguments))

(defun |layoutSpacing| (object &rest arguments)
  (%qinvoke-method object nil "layoutSpacing" arguments))

(defun |layout| (object &rest arguments)
  (%qinvoke-method object nil "layout" arguments))

(defun |lazyChildCount| (object &rest arguments)
  (%qinvoke-method object nil "lazyChildCount" arguments))

(defun |leadingIncluded| (object &rest arguments)
  (%qinvoke-method object nil "leadingIncluded" arguments))

(defun |leading| (object &rest arguments)
  (%qinvoke-method object nil "leading" arguments))

(defun |leaveWhatsThisMode.QWhatsThis| (&rest arguments)
  (%qinvoke-method "QWhatsThis" nil "leaveWhatsThisMode" arguments))

(defun |leftBearing| (object &rest arguments)
  (%qinvoke-method object nil "leftBearing" arguments))

(defun |leftColumn| (object &rest arguments)
  (%qinvoke-method object nil "leftColumn" arguments))

(defun |leftMargin| (object &rest arguments)
  (%qinvoke-method object nil "leftMargin" arguments))

(defun |leftPadding| (object &rest arguments)
  (%qinvoke-method object nil "leftPadding" arguments))

(defun |left| (object &rest arguments)
  (%qinvoke-method object nil "left" arguments))

(defun |lengthProperty| (object &rest arguments)
  (%qinvoke-method object nil "lengthProperty" arguments))

(defun |lengthSquared| (object &rest arguments)
  (%qinvoke-method object nil "lengthSquared" arguments))

(defun |lengthVectorProperty| (object &rest arguments)
  (%qinvoke-method object nil "lengthVectorProperty" arguments))

(defun |length| (object &rest arguments)
  (%qinvoke-method object nil "length" arguments))

(defun |letterSpacingType| (object &rest arguments)
  (%qinvoke-method object nil "letterSpacingType" arguments))

(defun |letterSpacing| (object &rest arguments)
  (%qinvoke-method object nil "letterSpacing" arguments))

(defun |levelOfDetailFromTransform.QStyleOptionGraphicsItem| (&rest arguments)
  (%qinvoke-method "QStyleOptionGraphicsItem" nil "levelOfDetailFromTransform" arguments))

(defun |libraryPaths.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "libraryPaths" arguments))

(defun |licensedProducts.QLibraryInfo| (&rest arguments)
  (%qinvoke-method "QLibraryInfo" nil "licensedProducts" arguments))

(defun |licensee.QLibraryInfo| (&rest arguments)
  (%qinvoke-method "QLibraryInfo" nil "licensee" arguments))

(defun |lighter| (object &rest arguments)
  (%qinvoke-method object nil "lighter" arguments))

(defun |lightnessF| (object &rest arguments)
  (%qinvoke-method object nil "lightnessF" arguments))

(defun |lightness| (object &rest arguments)
  (%qinvoke-method object nil "lightness" arguments))

(defun |light| (object &rest arguments)
  (%qinvoke-method object nil "light" arguments))

(defun |lineAt| (object &rest arguments)
  (%qinvoke-method object nil "lineAt" arguments))

(defun |lineCount| (object &rest arguments)
  (%qinvoke-method object nil "lineCount" arguments))

(defun |lineEdit| (object &rest arguments)
  (%qinvoke-method object nil "lineEdit" arguments))

(defun |lineForTextPosition| (object &rest arguments)
  (%qinvoke-method object nil "lineForTextPosition" arguments))

(defun |lineNumber| (object &rest arguments)
  (%qinvoke-method object nil "lineNumber" arguments))

(defun |lineSpacing| (object &rest arguments)
  (%qinvoke-method object nil "lineSpacing" arguments))

(defun |lineTo| (object &rest arguments)
  (%qinvoke-method object nil "lineTo" arguments))

(defun |lineWidth| (object &rest arguments)
  (%qinvoke-method object nil "lineWidth" arguments))

(defun |lineWrapColumnOrWidth| (object &rest arguments)
  (%qinvoke-method object nil "lineWrapColumnOrWidth" arguments))

(defun |lineWrapMode| (object &rest arguments)
  (%qinvoke-method object nil "lineWrapMode" arguments))

(defun |line| (object &rest arguments)
  (%qinvoke-method object nil "line" arguments))

(defun |link.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "link" arguments))

(defun |linkActivated| (object &rest arguments)
  (%qinvoke-method object nil "linkActivated" arguments))

(defun |linkHovered| (object &rest arguments)
  (%qinvoke-method object nil "linkHovered" arguments))

(defun |linkVisited| (object &rest arguments)
  (%qinvoke-method object nil "linkVisited" arguments))

(defun |link| (object &rest arguments)
  (%qinvoke-method object nil "link" arguments))

(defun |listWidget| (object &rest arguments)
  (%qinvoke-method object nil "listWidget" arguments))

(defun |loadFromData| (object &rest arguments)
  (%qinvoke-method object nil "loadFromData" arguments))

(defun |loadHints| (object &rest arguments)
  (%qinvoke-method object nil "loadHints" arguments))

(defun |loadResource| (object &rest arguments)
  (%qinvoke-method object nil "loadResource" arguments))

(defun |load| (object &rest arguments)
  (%qinvoke-method object nil "load" arguments))

(defun |locale| (object &rest arguments)
  (%qinvoke-method object nil "locale" arguments))

(defun |location.QLibraryInfo| (&rest arguments)
  (%qinvoke-method "QLibraryInfo" nil "location" arguments))

(defun |lockForRead| (object &rest arguments)
  (%qinvoke-method object nil "lockForRead" arguments))

(defun |lockForWrite| (object &rest arguments)
  (%qinvoke-method object nil "lockForWrite" arguments))

(defun |logicalDpiX| (object &rest arguments)
  (%qinvoke-method object nil "logicalDpiX" arguments))

(defun |logicalDpiY| (object &rest arguments)
  (%qinvoke-method object nil "logicalDpiY" arguments))

(defun |logicalIndexAt(QPoint)| (object &rest arguments)
  (%qinvoke-method object nil "logicalIndexAt(QPoint)" arguments))

(defun |logicalIndexAt(int)| (object &rest arguments)
  (%qinvoke-method object nil "logicalIndexAt(int)" arguments))

(defun |logicalIndexAt| (object &rest arguments)
  (%qinvoke-method object nil "logicalIndexAt" arguments))

(defun |logicalIndex| (object &rest arguments)
  (%qinvoke-method object nil "logicalIndex" arguments))

(defun |longDayName.QDate| (&rest arguments)
  (%qinvoke-method "QDate" nil "longDayName" arguments))

(defun |longMonthName.QDate| (&rest arguments)
  (%qinvoke-method "QDate" nil "longMonthName" arguments))

(defun |lookAt| (object &rest arguments)
  (%qinvoke-method object nil "lookAt" arguments))

(defun |loopCount| (object &rest arguments)
  (%qinvoke-method object nil "loopCount" arguments))

(defun |loopsRemaining| (object &rest arguments)
  (%qinvoke-method object nil "loopsRemaining" arguments))

(defun |loops| (object &rest arguments)
  (%qinvoke-method object nil "loops" arguments))

(defun |lostFocus| (object &rest arguments)
  (%qinvoke-method object nil "lostFocus" arguments))

(defun |lower| (object &rest arguments)
  (%qinvoke-method object nil "lower" arguments))

(defun |m11| (object &rest arguments)
  (%qinvoke-method object nil "m11" arguments))

(defun |m12| (object &rest arguments)
  (%qinvoke-method object nil "m12" arguments))

(defun |m13| (object &rest arguments)
  (%qinvoke-method object nil "m13" arguments))

(defun |m21| (object &rest arguments)
  (%qinvoke-method object nil "m21" arguments))

(defun |m22| (object &rest arguments)
  (%qinvoke-method object nil "m22" arguments))

(defun |m23| (object &rest arguments)
  (%qinvoke-method object nil "m23" arguments))

(defun |m31| (object &rest arguments)
  (%qinvoke-method object nil "m31" arguments))

(defun |m32| (object &rest arguments)
  (%qinvoke-method object nil "m32" arguments))

(defun |m33| (object &rest arguments)
  (%qinvoke-method object nil "m33" arguments))

(defun |machine| (object &rest arguments)
  (%qinvoke-method object nil "machine" arguments))

(defun |magentaF| (object &rest arguments)
  (%qinvoke-method object nil "magentaF" arguments))

(defun |magenta| (object &rest arguments)
  (%qinvoke-method object nil "magenta" arguments))

(defun |makeAbsolute| (object &rest arguments)
  (%qinvoke-method object nil "makeAbsolute" arguments))

(defun |makeDecoder| (object &rest arguments)
  (%qinvoke-method object nil "makeDecoder" arguments))

(defun |makeEncoder| (object &rest arguments)
  (%qinvoke-method object nil "makeEncoder" arguments))

(defun |map(QLine)| (object &rest arguments)
  (%qinvoke-method object nil "map(QLine)" arguments))

(defun |map(QLineF)| (object &rest arguments)
  (%qinvoke-method object nil "map(QLineF)" arguments))

(defun |map(QPainterPath)| (object &rest arguments)
  (%qinvoke-method object nil "map(QPainterPath)" arguments))

(defun |map(QPoint)| (object &rest arguments)
  (%qinvoke-method object nil "map(QPoint)" arguments))

(defun |map(QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "map(QPointF)" arguments))

(defun |map(QPolygon)| (object &rest arguments)
  (%qinvoke-method object nil "map(QPolygon)" arguments))

(defun |map(QPolygonF)| (object &rest arguments)
  (%qinvoke-method object nil "map(QPolygonF)" arguments))

(defun |map(QRegion)| (object &rest arguments)
  (%qinvoke-method object nil "map(QRegion)" arguments))

(defun |map(QVector3D)| (object &rest arguments)
  (%qinvoke-method object nil "map(QVector3D)" arguments))

(defun |map(QVector4D)| (object &rest arguments)
  (%qinvoke-method object nil "map(QVector4D)" arguments))

(defun |mapFromGlobal| (object &rest arguments)
  (%qinvoke-method object nil "mapFromGlobal" arguments))

(defun |mapFromItem(const QGraphicsItem*,QPainterPath)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromItem(const QGraphicsItem*,QPainterPath)" arguments))

(defun |mapFromItem(const QGraphicsItem*,QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromItem(const QGraphicsItem*,QPointF)" arguments))

(defun |mapFromItem(const QGraphicsItem*,QPolygonF)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromItem(const QGraphicsItem*,QPolygonF)" arguments))

(defun |mapFromItem(const QGraphicsItem*,QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromItem(const QGraphicsItem*,QRectF)" arguments))

(defun |mapFromItem| (object &rest arguments)
  (%qinvoke-method object nil "mapFromItem" arguments))

(defun |mapFromParent(QPainterPath)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromParent(QPainterPath)" arguments))

(defun |mapFromParent(QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromParent(QPointF)" arguments))

(defun |mapFromParent(QPolygonF)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromParent(QPolygonF)" arguments))

(defun |mapFromParent(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromParent(QRectF)" arguments))

(defun |mapFromParent| (object &rest arguments)
  (%qinvoke-method object nil "mapFromParent" arguments))

(defun |mapFromScene(QPainterPath)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromScene(QPainterPath)" arguments))

(defun |mapFromScene(QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromScene(QPointF)" arguments))

(defun |mapFromScene(QPolygonF)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromScene(QPolygonF)" arguments))

(defun |mapFromScene(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "mapFromScene(QRectF)" arguments))

(defun |mapFromScene| (object &rest arguments)
  (%qinvoke-method object nil "mapFromScene" arguments))

(defun |mapFromSource| (object &rest arguments)
  (%qinvoke-method object nil "mapFromSource" arguments))

(defun |mapFrom| (object &rest arguments)
  (%qinvoke-method object nil "mapFrom" arguments))

(defun |mapRect(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "mapRect(QRect)" arguments))

(defun |mapRect(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "mapRect(QRectF)" arguments))

(defun |mapRectFromItem| (object &rest arguments)
  (%qinvoke-method object nil "mapRectFromItem" arguments))

(defun |mapRectFromParent| (object &rest arguments)
  (%qinvoke-method object nil "mapRectFromParent" arguments))

(defun |mapRectFromScene| (object &rest arguments)
  (%qinvoke-method object nil "mapRectFromScene" arguments))

(defun |mapRectToItem| (object &rest arguments)
  (%qinvoke-method object nil "mapRectToItem" arguments))

(defun |mapRectToParent| (object &rest arguments)
  (%qinvoke-method object nil "mapRectToParent" arguments))

(defun |mapRectToScene| (object &rest arguments)
  (%qinvoke-method object nil "mapRectToScene" arguments))

(defun |mapRect| (object &rest arguments)
  (%qinvoke-method object nil "mapRect" arguments))

(defun |mapSelectionFromSource| (object &rest arguments)
  (%qinvoke-method object nil "mapSelectionFromSource" arguments))

(defun |mapSelectionToSource| (object &rest arguments)
  (%qinvoke-method object nil "mapSelectionToSource" arguments))

(defun |mapToGlobal| (object &rest arguments)
  (%qinvoke-method object nil "mapToGlobal" arguments))

(defun |mapToGraphicsScene| (object &rest arguments)
  (%qinvoke-method object nil "mapToGraphicsScene" arguments))

(defun |mapToItem(const QGraphicsItem*,QPainterPath)| (object &rest arguments)
  (%qinvoke-method object nil "mapToItem(const QGraphicsItem*,QPainterPath)" arguments))

(defun |mapToItem(const QGraphicsItem*,QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "mapToItem(const QGraphicsItem*,QPointF)" arguments))

(defun |mapToItem(const QGraphicsItem*,QPolygonF)| (object &rest arguments)
  (%qinvoke-method object nil "mapToItem(const QGraphicsItem*,QPolygonF)" arguments))

(defun |mapToItem(const QGraphicsItem*,QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "mapToItem(const QGraphicsItem*,QRectF)" arguments))

(defun |mapToItem| (object &rest arguments)
  (%qinvoke-method object nil "mapToItem" arguments))

(defun |mapToParent(QPainterPath)| (object &rest arguments)
  (%qinvoke-method object nil "mapToParent(QPainterPath)" arguments))

(defun |mapToParent(QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "mapToParent(QPointF)" arguments))

(defun |mapToParent(QPolygonF)| (object &rest arguments)
  (%qinvoke-method object nil "mapToParent(QPolygonF)" arguments))

(defun |mapToParent(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "mapToParent(QRectF)" arguments))

(defun |mapToParent| (object &rest arguments)
  (%qinvoke-method object nil "mapToParent" arguments))

(defun |mapToPolygon| (object &rest arguments)
  (%qinvoke-method object nil "mapToPolygon" arguments))

(defun |mapToScene(QPainterPath)| (object &rest arguments)
  (%qinvoke-method object nil "mapToScene(QPainterPath)" arguments))

(defun |mapToScene(QPoint)| (object &rest arguments)
  (%qinvoke-method object nil "mapToScene(QPoint)" arguments))

(defun |mapToScene(QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "mapToScene(QPointF)" arguments))

(defun |mapToScene(QPolygon)| (object &rest arguments)
  (%qinvoke-method object nil "mapToScene(QPolygon)" arguments))

(defun |mapToScene(QPolygonF)| (object &rest arguments)
  (%qinvoke-method object nil "mapToScene(QPolygonF)" arguments))

(defun |mapToScene(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "mapToScene(QRect)" arguments))

(defun |mapToScene(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "mapToScene(QRectF)" arguments))

(defun |mapToScene| (object &rest arguments)
  (%qinvoke-method object nil "mapToScene" arguments))

(defun |mapToSource| (object &rest arguments)
  (%qinvoke-method object nil "mapToSource" arguments))

(defun |mapTo| (object &rest arguments)
  (%qinvoke-method object nil "mapTo" arguments))

(defun |mapVector| (object &rest arguments)
  (%qinvoke-method object nil "mapVector" arguments))

(defun |mappedPropertyName| (object &rest arguments)
  (%qinvoke-method object nil "mappedPropertyName" arguments))

(defun |mappedSection| (object &rest arguments)
  (%qinvoke-method object nil "mappedSection" arguments))

(defun |mappedWidgetAt| (object &rest arguments)
  (%qinvoke-method object nil "mappedWidgetAt" arguments))

(defun |map| (object &rest arguments)
  (%qinvoke-method object nil "map" arguments))

(defun |margin| (object &rest arguments)
  (%qinvoke-method object nil "margin" arguments))

(defun |markContentsDirty| (object &rest arguments)
  (%qinvoke-method object nil "markContentsDirty" arguments))

(defun |mask| (object &rest arguments)
  (%qinvoke-method object nil "mask" arguments))

(defun |match(QString...).QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "match(QString...)" arguments))

(defun |match(QStringList...).QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "match(QStringList...)" arguments))

(defun |match.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "match" arguments))

(defun |matchedLength| (object &rest arguments)
  (%qinvoke-method object nil "matchedLength" arguments))

(defun |matches| (object &rest arguments)
  (%qinvoke-method object nil "matches" arguments))

(defun |match| (object &rest arguments)
  (%qinvoke-method object nil "match" arguments))

(defun |matrix| (object &rest arguments)
  (%qinvoke-method object nil "matrix" arguments))

(defun |maxCount| (object &rest arguments)
  (%qinvoke-method object nil "maxCount" arguments))

(defun |maxLength| (object &rest arguments)
  (%qinvoke-method object nil "maxLength" arguments))

(defun |maxPage| (object &rest arguments)
  (%qinvoke-method object nil "maxPage" arguments))

(defun |maxVisibleItems| (object &rest arguments)
  (%qinvoke-method object nil "maxVisibleItems" arguments))

(defun |maxWidth| (object &rest arguments)
  (%qinvoke-method object nil "maxWidth" arguments))

(defun |maximumBlockCount| (object &rest arguments)
  (%qinvoke-method object nil "maximumBlockCount" arguments))

(defun |maximumDateTime| (object &rest arguments)
  (%qinvoke-method object nil "maximumDateTime" arguments))

(defun |maximumDate| (object &rest arguments)
  (%qinvoke-method object nil "maximumDate" arguments))

(defun |maximumHeight| (object &rest arguments)
  (%qinvoke-method object nil "maximumHeight" arguments))

(defun |maximumSize| (object &rest arguments)
  (%qinvoke-method object nil "maximumSize" arguments))

(defun |maximumTime| (object &rest arguments)
  (%qinvoke-method object nil "maximumTime" arguments))

(defun |maximumViewportSize| (object &rest arguments)
  (%qinvoke-method object nil "maximumViewportSize" arguments))

(defun |maximumWidth| (object &rest arguments)
  (%qinvoke-method object nil "maximumWidth" arguments))

(defun |maximum| (object &rest arguments)
  (%qinvoke-method object nil "maximum" arguments))

(defun |mdiArea| (object &rest arguments)
  (%qinvoke-method object nil "mdiArea" arguments))

(defun |measurementSystem| (object &rest arguments)
  (%qinvoke-method object nil "measurementSystem" arguments))

(defun |menuAction| (object &rest arguments)
  (%qinvoke-method object nil "menuAction" arguments))

(defun |menuBar| (object &rest arguments)
  (%qinvoke-method object nil "menuBar" arguments))

(defun |menuRole| (object &rest arguments)
  (%qinvoke-method object nil "menuRole" arguments))

(defun |menuWidget| (object &rest arguments)
  (%qinvoke-method object nil "menuWidget" arguments))

(defun |menu| (object &rest arguments)
  (%qinvoke-method object nil "menu" arguments))

(defun |mergeBlockCharFormat| (object &rest arguments)
  (%qinvoke-method object nil "mergeBlockCharFormat" arguments))

(defun |mergeBlockFormat| (object &rest arguments)
  (%qinvoke-method object nil "mergeBlockFormat" arguments))

(defun |mergeCells| (object &rest arguments)
  (%qinvoke-method object nil "mergeCells" arguments))

(defun |mergeCharFormat| (object &rest arguments)
  (%qinvoke-method object nil "mergeCharFormat" arguments))

(defun |mergeCurrentCharFormat| (object &rest arguments)
  (%qinvoke-method object nil "mergeCurrentCharFormat" arguments))

(defun |mergeWith| (object &rest arguments)
  (%qinvoke-method object nil "mergeWith" arguments))

(defun |merge| (object &rest arguments)
  (%qinvoke-method object nil "merge" arguments))

(defun |messageChanged| (object &rest arguments)
  (%qinvoke-method object nil "messageChanged" arguments))

(defun |messageClicked| (object &rest arguments)
  (%qinvoke-method object nil "messageClicked" arguments))

(defun |message| (object &rest arguments)
  (%qinvoke-method object nil "message" arguments))

(defun |metaInformation| (object &rest arguments)
  (%qinvoke-method object nil "metaInformation" arguments))

(defun |metaObject| (object &rest arguments)
  (%qinvoke-method object nil "metaObject" arguments))

(defun |methodCount| (object &rest arguments)
  (%qinvoke-method object nil "methodCount" arguments))

(defun |methodOffset| (object &rest arguments)
  (%qinvoke-method object nil "methodOffset" arguments))

(defun |mibEnum| (object &rest arguments)
  (%qinvoke-method object nil "mibEnum" arguments))

(defun |midLineWidth| (object &rest arguments)
  (%qinvoke-method object nil "midLineWidth" arguments))

(defun |midlight| (object &rest arguments)
  (%qinvoke-method object nil "midlight" arguments))

(defun |mid| (object &rest arguments)
  (%qinvoke-method object nil "mid" arguments))

(defun |mimeData| (object &rest arguments)
  (%qinvoke-method object nil "mimeData" arguments))

(defun |mimeTypes| (object &rest arguments)
  (%qinvoke-method object nil "mimeTypes" arguments))

(defun |minLeftBearing| (object &rest arguments)
  (%qinvoke-method object nil "minLeftBearing" arguments))

(defun |minPage| (object &rest arguments)
  (%qinvoke-method object nil "minPage" arguments))

(defun |minRightBearing| (object &rest arguments)
  (%qinvoke-method object nil "minRightBearing" arguments))

(defun |minimumContentsLength| (object &rest arguments)
  (%qinvoke-method object nil "minimumContentsLength" arguments))

(defun |minimumDateTime| (object &rest arguments)
  (%qinvoke-method object nil "minimumDateTime" arguments))

(defun |minimumDate| (object &rest arguments)
  (%qinvoke-method object nil "minimumDate" arguments))

(defun |minimumDuration| (object &rest arguments)
  (%qinvoke-method object nil "minimumDuration" arguments))

(defun |minimumHeightForWidth| (object &rest arguments)
  (%qinvoke-method object nil "minimumHeightForWidth" arguments))

(defun |minimumHeight| (object &rest arguments)
  (%qinvoke-method object nil "minimumHeight" arguments))

(defun |minimumSectionSize| (object &rest arguments)
  (%qinvoke-method object nil "minimumSectionSize" arguments))

(defun |minimumSizeHint| (object &rest arguments)
  (%qinvoke-method object nil "minimumSizeHint" arguments))

(defun |minimumSize| (object &rest arguments)
  (%qinvoke-method object nil "minimumSize" arguments))

(defun |minimumTime| (object &rest arguments)
  (%qinvoke-method object nil "minimumTime" arguments))

(defun |minimumWidth| (object &rest arguments)
  (%qinvoke-method object nil "minimumWidth" arguments))

(defun |minimum| (object &rest arguments)
  (%qinvoke-method object nil "minimum" arguments))

(defun |minute| (object &rest arguments)
  (%qinvoke-method object nil "minute" arguments))

(defun |mirrored| (object &rest arguments)
  (%qinvoke-method object nil "mirrored" arguments))

(defun |miterLimit| (object &rest arguments)
  (%qinvoke-method object nil "miterLimit" arguments))

(defun |mkdir| (object &rest arguments)
  (%qinvoke-method object nil "mkdir" arguments))

(defun |mkpath| (object &rest arguments)
  (%qinvoke-method object nil "mkpath" arguments))

(defun |mnemonic.QKeySequence| (&rest arguments)
  (%qinvoke-method "QKeySequence" nil "mnemonic" arguments))

(defun |modelAboutToBeReset| (object &rest arguments)
  (%qinvoke-method object nil "modelAboutToBeReset" arguments))

(defun |modelColumn| (object &rest arguments)
  (%qinvoke-method object nil "modelColumn" arguments))

(defun |modelReset| (object &rest arguments)
  (%qinvoke-method object nil "modelReset" arguments))

(defun |modelSorting| (object &rest arguments)
  (%qinvoke-method object nil "modelSorting" arguments))

(defun |model| (object &rest arguments)
  (%qinvoke-method object nil "model" arguments))

(defun |mode| (object &rest arguments)
  (%qinvoke-method object nil "mode" arguments))

(defun |modificationChanged| (object &rest arguments)
  (%qinvoke-method object nil "modificationChanged" arguments))

(defun |modifierMask| (object &rest arguments)
  (%qinvoke-method object nil "modifierMask" arguments))

(defun |modifiers| (object &rest arguments)
  (%qinvoke-method object nil "modifiers" arguments))

(defun |monthName| (object &rest arguments)
  (%qinvoke-method object nil "monthName" arguments))

(defun |monthShown| (object &rest arguments)
  (%qinvoke-method object nil "monthShown" arguments))

(defun |month| (object &rest arguments)
  (%qinvoke-method object nil "month" arguments))

(defun |mouseButtons.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "mouseButtons" arguments))

(defun |mouseButtons| (object &rest arguments)
  (%qinvoke-method object nil "mouseButtons" arguments))

(defun |mouseGrabber.QWidget| (&rest arguments)
  (%qinvoke-method "QWidget" nil "mouseGrabber" arguments))

(defun |mouseGrabberItem| (object &rest arguments)
  (%qinvoke-method object nil "mouseGrabberItem" arguments))

(defun |movableChanged| (object &rest arguments)
  (%qinvoke-method object nil "movableChanged" arguments))

(defun |moveBy| (object &rest arguments)
  (%qinvoke-method object nil "moveBy" arguments))

(defun |moveCursor| (object &rest arguments)
  (%qinvoke-method object nil "moveCursor" arguments))

(defun |movePosition| (object &rest arguments)
  (%qinvoke-method object nil "movePosition" arguments))

(defun |moveSection| (object &rest arguments)
  (%qinvoke-method object nil "moveSection" arguments))

(defun |moveSplitter| (object &rest arguments)
  (%qinvoke-method object nil "moveSplitter" arguments))

(defun |moveTab| (object &rest arguments)
  (%qinvoke-method object nil "moveTab" arguments))

(defun |moveToThread| (object &rest arguments)
  (%qinvoke-method object nil "moveToThread" arguments))

(defun |moveTo| (object &rest arguments)
  (%qinvoke-method object nil "moveTo" arguments))

(defun |movement| (object &rest arguments)
  (%qinvoke-method object nil "movement" arguments))

(defun |move| (object &rest arguments)
  (%qinvoke-method object nil "move" arguments))

(defun |movie| (object &rest arguments)
  (%qinvoke-method object nil "movie" arguments))

(defun |msecsTo| (object &rest arguments)
  (%qinvoke-method object nil "msecsTo" arguments))

(defun |msec| (object &rest arguments)
  (%qinvoke-method object nil "msec" arguments))

(defun |myComputer| (object &rest arguments)
  (%qinvoke-method object nil "myComputer" arguments))

(defun |nameFilterDisables| (object &rest arguments)
  (%qinvoke-method object nil "nameFilterDisables" arguments))

(defun |nameFilters| (object &rest arguments)
  (%qinvoke-method object nil "nameFilters" arguments))

(defun |nameToType.QVariant| (&rest arguments)
  (%qinvoke-method "QVariant" nil "nameToType" arguments))

(defun |name| (object &rest arguments)
  (%qinvoke-method object nil "name" arguments))

(defun |nativeParentWidget| (object &rest arguments)
  (%qinvoke-method object nil "nativeParentWidget" arguments))

(defun |naturalTextRect| (object &rest arguments)
  (%qinvoke-method object nil "naturalTextRect" arguments))

(defun |naturalTextWidth| (object &rest arguments)
  (%qinvoke-method object nil "naturalTextWidth" arguments))

(defun |negativeSign| (object &rest arguments)
  (%qinvoke-method object nil "negativeSign" arguments))

(defun |newPage| (object &rest arguments)
  (%qinvoke-method object nil "newPage" arguments))

(defun |newPos| (object &rest arguments)
  (%qinvoke-method object nil "newPos" arguments))

(defun |newProxyWidget| (object &rest arguments)
  (%qinvoke-method object nil "newProxyWidget" arguments))

(defun |newSize| (object &rest arguments)
  (%qinvoke-method object nil "newSize" arguments))

(defun |nextCursorPosition| (object &rest arguments)
  (%qinvoke-method object nil "nextCursorPosition" arguments))

(defun |nextFrameDelay| (object &rest arguments)
  (%qinvoke-method object nil "nextFrameDelay" arguments))

(defun |nextId| (object &rest arguments)
  (%qinvoke-method object nil "nextId" arguments))

(defun |nextInFocusChain| (object &rest arguments)
  (%qinvoke-method object nil "nextInFocusChain" arguments))

(defun |next| (object &rest arguments)
  (%qinvoke-method object nil "next" arguments))

(defun |nlerp.QQuaternion| (&rest arguments)
  (%qinvoke-method "QQuaternion" nil "nlerp" arguments))

(defun |nonBreakableLines| (object &rest arguments)
  (%qinvoke-method object nil "nonBreakableLines" arguments))

(defun |normal.QVector3D| (&rest arguments)
  (%qinvoke-method "QVector3D" nil "normal" arguments))

(defun |normalGeometry| (object &rest arguments)
  (%qinvoke-method object nil "normalGeometry" arguments))

(defun |normalMatrix| (object &rest arguments)
  (%qinvoke-method object nil "normalMatrix" arguments))

(defun |normalizedSignature.QMetaObject| (&rest arguments)
  (%qinvoke-method "QMetaObject" nil "normalizedSignature" arguments))

(defun |normalizedType.QMetaObject| (&rest arguments)
  (%qinvoke-method "QMetaObject" nil "normalizedType" arguments))

(defun |normalized| (object &rest arguments)
  (%qinvoke-method object nil "normalized" arguments))

(defun |normalize| (object &rest arguments)
  (%qinvoke-method object nil "normalize" arguments))

(defun |notation| (object &rest arguments)
  (%qinvoke-method object nil "notation" arguments))

(defun |notchSize| (object &rest arguments)
  (%qinvoke-method object nil "notchSize" arguments))

(defun |notchTarget| (object &rest arguments)
  (%qinvoke-method object nil "notchTarget" arguments))

(defun |notchesVisible| (object &rest arguments)
  (%qinvoke-method object nil "notchesVisible" arguments))

(defun |notify| (object &rest arguments)
  (%qinvoke-method object nil "notify" arguments))

(defun |numCopies| (object &rest arguments)
  (%qinvoke-method object nil "numCopies" arguments))

(defun |numberOptions| (object &rest arguments)
  (%qinvoke-method object nil "numberOptions" arguments))

(defun |objectForFormat| (object &rest arguments)
  (%qinvoke-method object nil "objectForFormat" arguments))

(defun |objectIndex| (object &rest arguments)
  (%qinvoke-method object nil "objectIndex" arguments))

(defun |objectName| (object &rest arguments)
  (%qinvoke-method object nil "objectName" arguments))

(defun |objectType| (object &rest arguments)
  (%qinvoke-method object nil "objectType" arguments))

(defun |object| (object &rest arguments)
  (%qinvoke-method object nil "object" arguments))

(defun |offsetChanged| (object &rest arguments)
  (%qinvoke-method object nil "offsetChanged" arguments))

(defun |offset| (object &rest arguments)
  (%qinvoke-method object nil "offset" arguments))

(defun |okButtonText| (object &rest arguments)
  (%qinvoke-method object nil "okButtonText" arguments))

(defun |oldPos| (object &rest arguments)
  (%qinvoke-method object nil "oldPos" arguments))

(defun |oldSize| (object &rest arguments)
  (%qinvoke-method object nil "oldSize" arguments))

(defun |oldState| (object &rest arguments)
  (%qinvoke-method object nil "oldState" arguments))

(defun |opacityChanged| (object &rest arguments)
  (%qinvoke-method object nil "opacityChanged" arguments))

(defun |opacityMaskChanged| (object &rest arguments)
  (%qinvoke-method object nil "opacityMaskChanged" arguments))

(defun |opacityMask| (object &rest arguments)
  (%qinvoke-method object nil "opacityMask" arguments))

(defun |opacity| (object &rest arguments)
  (%qinvoke-method object nil "opacity" arguments))

(defun |opaqueArea| (object &rest arguments)
  (%qinvoke-method object nil "opaqueArea" arguments))

(defun |opaqueResize| (object &rest arguments)
  (%qinvoke-method object nil "opaqueResize" arguments))

(defun |openExternalLinks| (object &rest arguments)
  (%qinvoke-method object nil "openExternalLinks" arguments))

(defun |openLinks| (object &rest arguments)
  (%qinvoke-method object nil "openLinks" arguments))

(defun |openMode| (object &rest arguments)
  (%qinvoke-method object nil "openMode" arguments))

(defun |openPersistentEditor| (object &rest arguments)
  (%qinvoke-method object nil "openPersistentEditor" arguments))

(defun |openUrl.QDesktopServices| (&rest arguments)
  (%qinvoke-method "QDesktopServices" nil "openUrl" arguments))

(defun |open| (object &rest arguments)
  (%qinvoke-method object nil "open" arguments))

(defun |optimizationFlags| (object &rest arguments)
  (%qinvoke-method object nil "optimizationFlags" arguments))

(defun |optimize| (object &rest arguments)
  (%qinvoke-method object nil "optimize" arguments))

(defun |options| (object &rest arguments)
  (%qinvoke-method object nil "options" arguments))

(defun |organizationDomain.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "organizationDomain" arguments))

(defun |organizationName.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "organizationName" arguments))

(defun |organizationName| (object &rest arguments)
  (%qinvoke-method object nil "organizationName" arguments))

(defun |orientationChanged| (object &rest arguments)
  (%qinvoke-method object nil "orientationChanged" arguments))

(defun |orientation| (object &rest arguments)
  (%qinvoke-method object nil "orientation" arguments))

(defun |originChanged| (object &rest arguments)
  (%qinvoke-method object nil "originChanged" arguments))

(defun |originCorner| (object &rest arguments)
  (%qinvoke-method object nil "originCorner" arguments))

(defun |origin| (object &rest arguments)
  (%qinvoke-method object nil "origin" arguments))

(defun |ortho(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "ortho(QRect)" arguments))

(defun |ortho(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "ortho(QRectF)" arguments))

(defun |ortho| (object &rest arguments)
  (%qinvoke-method object nil "ortho" arguments))

(defun |outputFileName| (object &rest arguments)
  (%qinvoke-method object nil "outputFileName" arguments))

(defun |outputFormat| (object &rest arguments)
  (%qinvoke-method object nil "outputFormat" arguments))

(defun |overflow| (object &rest arguments)
  (%qinvoke-method object nil "overflow" arguments))

(defun |overlinePos| (object &rest arguments)
  (%qinvoke-method object nil "overlinePos" arguments))

(defun |overline| (object &rest arguments)
  (%qinvoke-method object nil "overline" arguments))

(defun |overrideCursor.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "overrideCursor" arguments))

(defun |overrideWindowFlags| (object &rest arguments)
  (%qinvoke-method object nil "overrideWindowFlags" arguments))

(defun |overshoot| (object &rest arguments)
  (%qinvoke-method object nil "overshoot" arguments))

(defun |overwriteMode| (object &rest arguments)
  (%qinvoke-method object nil "overwriteMode" arguments))

(defun |ownedByLayout| (object &rest arguments)
  (%qinvoke-method object nil "ownedByLayout" arguments))

(defun |ownerDestroyed| (object &rest arguments)
  (%qinvoke-method object nil "ownerDestroyed" arguments))

(defun |ownerId| (object &rest arguments)
  (%qinvoke-method object nil "ownerId" arguments))

(defun |owner| (object &rest arguments)
  (%qinvoke-method object nil "owner" arguments))

(defun |ownsClipboard| (object &rest arguments)
  (%qinvoke-method object nil "ownsClipboard" arguments))

(defun |ownsFindBuffer| (object &rest arguments)
  (%qinvoke-method object nil "ownsFindBuffer" arguments))

(defun |ownsSelection| (object &rest arguments)
  (%qinvoke-method object nil "ownsSelection" arguments))

(defun |padding| (object &rest arguments)
  (%qinvoke-method object nil "padding" arguments))

(defun |pageAdded| (object &rest arguments)
  (%qinvoke-method object nil "pageAdded" arguments))

(defun |pageBreakPolicy| (object &rest arguments)
  (%qinvoke-method object nil "pageBreakPolicy" arguments))

(defun |pageCountChanged| (object &rest arguments)
  (%qinvoke-method object nil "pageCountChanged" arguments))

(defun |pageCount| (object &rest arguments)
  (%qinvoke-method object nil "pageCount" arguments))

(defun |pageIds| (object &rest arguments)
  (%qinvoke-method object nil "pageIds" arguments))

(defun |pageOrder| (object &rest arguments)
  (%qinvoke-method object nil "pageOrder" arguments))

(defun |pageRect| (object &rest arguments)
  (%qinvoke-method object nil "pageRect" arguments))

(defun |pageRemoved| (object &rest arguments)
  (%qinvoke-method object nil "pageRemoved" arguments))

(defun |pageSize| (object &rest arguments)
  (%qinvoke-method object nil "pageSize" arguments))

(defun |pageStep| (object &rest arguments)
  (%qinvoke-method object nil "pageStep" arguments))

(defun |page| (object &rest arguments)
  (%qinvoke-method object nil "page" arguments))

(defun |paint(QPainter*,QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "paint(QPainter*,QRect...)" arguments))

(defun |paint(QPainter*,int...)| (object &rest arguments)
  (%qinvoke-method object nil "paint(QPainter*,int...)" arguments))

(defun |paintDevice| (object &rest arguments)
  (%qinvoke-method object nil "paintDevice" arguments))

(defun |paintRequested| (object &rest arguments)
  (%qinvoke-method object nil "paintRequested" arguments))

(defun |paintWindowFrame| (object &rest arguments)
  (%qinvoke-method object nil "paintWindowFrame" arguments))

(defun |paintingActive| (object &rest arguments)
  (%qinvoke-method object nil "paintingActive" arguments))

(defun |paint| (object &rest arguments)
  (%qinvoke-method object nil "paint" arguments))

(defun |palette(const QWidget*).QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "palette(const QWidget*)" arguments))

(defun |palette(const char*).QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "palette(const char*)" arguments))

(defun |palette.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "palette" arguments))

(defun |palette.QToolTip| (&rest arguments)
  (%qinvoke-method "QToolTip" nil "palette" arguments))

(defun |palette| (object &rest arguments)
  (%qinvoke-method object nil "palette" arguments))

(defun |panelModality| (object &rest arguments)
  (%qinvoke-method object nil "panelModality" arguments))

(defun |panel| (object &rest arguments)
  (%qinvoke-method object nil "panel" arguments))

(defun |paperRect| (object &rest arguments)
  (%qinvoke-method object nil "paperRect" arguments))

(defun |paperSize| (object &rest arguments)
  (%qinvoke-method object nil "paperSize" arguments))

(defun |paperSource| (object &rest arguments)
  (%qinvoke-method object nil "paperSource" arguments))

(defun |parentChanged| (object &rest arguments)
  (%qinvoke-method object nil "parentChanged" arguments))

(defun |parentFrame| (object &rest arguments)
  (%qinvoke-method object nil "parentFrame" arguments))

(defun |parentItem| (object &rest arguments)
  (%qinvoke-method object nil "parentItem" arguments))

(defun |parentLayoutItem| (object &rest arguments)
  (%qinvoke-method object nil "parentLayoutItem" arguments))

(defun |parentObject| (object &rest arguments)
  (%qinvoke-method object nil "parentObject" arguments))

(defun |parentState| (object &rest arguments)
  (%qinvoke-method object nil "parentState" arguments))

(defun |parentWidget| (object &rest arguments)
  (%qinvoke-method object nil "parentWidget" arguments))

(defun |parent| (object &rest arguments)
  (%qinvoke-method object nil "parent" arguments))

(defun |password| (object &rest arguments)
  (%qinvoke-method object nil "password" arguments))

(defun |paste| (object &rest arguments)
  (%qinvoke-method object nil "paste" arguments))

(defun |pathFromIndex| (object &rest arguments)
  (%qinvoke-method object nil "pathFromIndex" arguments))

(defun |path| (object &rest arguments)
  (%qinvoke-method object nil "path" arguments))

(defun |patternSyntax| (object &rest arguments)
  (%qinvoke-method object nil "patternSyntax" arguments))

(defun |pattern| (object &rest arguments)
  (%qinvoke-method object nil "pattern" arguments))

(defun |pause| (object &rest arguments)
  (%qinvoke-method object nil "pause" arguments))

(defun |peek| (object &rest arguments)
  (%qinvoke-method object nil "peek" arguments))

(defun |penProperty| (object &rest arguments)
  (%qinvoke-method object nil "penProperty" arguments))

(defun |pen| (object &rest arguments)
  (%qinvoke-method object nil "pen" arguments))

(defun |percentAtLength| (object &rest arguments)
  (%qinvoke-method object nil "percentAtLength" arguments))

(defun |percent| (object &rest arguments)
  (%qinvoke-method object nil "percent" arguments))

(defun |period| (object &rest arguments)
  (%qinvoke-method object nil "period" arguments))

(defun |permissions.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "permissions" arguments))

(defun |permissions| (object &rest arguments)
  (%qinvoke-method object nil "permissions" arguments))

(defun |permission| (object &rest arguments)
  (%qinvoke-method object nil "permission" arguments))

(defun |persistentIndexList| (object &rest arguments)
  (%qinvoke-method object nil "persistentIndexList" arguments))

(defun |perspective| (object &rest arguments)
  (%qinvoke-method object nil "perspective" arguments))

(defun |physicalDpiX| (object &rest arguments)
  (%qinvoke-method object nil "physicalDpiX" arguments))

(defun |physicalDpiY| (object &rest arguments)
  (%qinvoke-method object nil "physicalDpiY" arguments))

(defun |picture| (object &rest arguments)
  (%qinvoke-method object nil "picture" arguments))

(defun |pixelIndex| (object &rest arguments)
  (%qinvoke-method object nil "pixelIndex" arguments))

(defun |pixelMetric| (object &rest arguments)
  (%qinvoke-method object nil "pixelMetric" arguments))

(defun |pixelSize| (object &rest arguments)
  (%qinvoke-method object nil "pixelSize" arguments))

(defun |pixel| (object &rest arguments)
  (%qinvoke-method object nil "pixel" arguments))

(defun |pixmap(QSize)| (object &rest arguments)
  (%qinvoke-method object nil "pixmap(QSize)" arguments))

(defun |pixmap(QSize...)| (object &rest arguments)
  (%qinvoke-method object nil "pixmap(QSize...)" arguments))

(defun |pixmap(int)| (object &rest arguments)
  (%qinvoke-method object nil "pixmap(int)" arguments))

(defun |pixmap(int,QIcon::Mode)| (object &rest arguments)
  (%qinvoke-method object nil "pixmap(int,QIcon::Mode)" arguments))

(defun |pixmap(int,QIcon::Mode...)| (object &rest arguments)
  (%qinvoke-method object nil "pixmap(int,QIcon::Mode...)" arguments))

(defun |pixmap(int,int)| (object &rest arguments)
  (%qinvoke-method object nil "pixmap(int,int)" arguments))

(defun |pixmap(int,int...)| (object &rest arguments)
  (%qinvoke-method object nil "pixmap(int,int...)" arguments))

(defun |pixmap(int...)| (object &rest arguments)
  (%qinvoke-method object nil "pixmap(int...)" arguments))

(defun |pixmap| (object &rest arguments)
  (%qinvoke-method object nil "pixmap" arguments))

(defun |play.QSound| (&rest arguments)
  (%qinvoke-method "QSound" nil "play" arguments))

(defun |play| (object &rest arguments)
  (%qinvoke-method object nil "play" arguments))

(defun |pmText| (object &rest arguments)
  (%qinvoke-method object nil "pmText" arguments))

(defun |pointAtPercent| (object &rest arguments)
  (%qinvoke-method object nil "pointAtPercent" arguments))

(defun |pointSizeF| (object &rest arguments)
  (%qinvoke-method object nil "pointSizeF" arguments))

(defun |pointSizes| (object &rest arguments)
  (%qinvoke-method object nil "pointSizes" arguments))

(defun |pointSize| (object &rest arguments)
  (%qinvoke-method object nil "pointSize" arguments))

(defun |pointerType| (object &rest arguments)
  (%qinvoke-method object nil "pointerType" arguments))

(defun |polish(QApplication*)| (object &rest arguments)
  (%qinvoke-method object nil "polish(QApplication*)" arguments))

(defun |polish(QPalette&)| (object &rest arguments)
  (%qinvoke-method object nil "polish(QPalette&)" arguments))

(defun |polish(QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "polish(QWidget*)" arguments))

(defun |polished| (object &rest arguments)
  (%qinvoke-method object nil "polished" arguments))

(defun |polish| (object &rest arguments)
  (%qinvoke-method object nil "polish" arguments))

(defun |polygon| (object &rest arguments)
  (%qinvoke-method object nil "polygon" arguments))

(defun |popupMode| (object &rest arguments)
  (%qinvoke-method object nil "popupMode" arguments))

(defun |popup| (object &rest arguments)
  (%qinvoke-method object nil "popup" arguments))

(defun |port| (object &rest arguments)
  (%qinvoke-method object nil "port" arguments))

(defun |pos.QCursor| (&rest arguments)
  (%qinvoke-method "QCursor" nil "pos" arguments))

(defun |posF| (object &rest arguments)
  (%qinvoke-method object nil "posF" arguments))

(defun |position| (object &rest arguments)
  (%qinvoke-method object nil "position" arguments))

(defun |positiveSign| (object &rest arguments)
  (%qinvoke-method object nil "positiveSign" arguments))

(defun |possibleActions| (object &rest arguments)
  (%qinvoke-method object nil "possibleActions" arguments))

(defun |postDelayedEvent| (object &rest arguments)
  (%qinvoke-method object nil "postDelayedEvent" arguments))

(defun |postEvent.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "postEvent" arguments))

(defun |postEvent| (object &rest arguments)
  (%qinvoke-method object nil "postEvent" arguments))

(defun |pos| (object &rest arguments)
  (%qinvoke-method object nil "pos" arguments))

(defun |preeditAreaPosition| (object &rest arguments)
  (%qinvoke-method object nil "preeditAreaPosition" arguments))

(defun |preeditAreaText| (object &rest arguments)
  (%qinvoke-method object nil "preeditAreaText" arguments))

(defun |preeditString| (object &rest arguments)
  (%qinvoke-method object nil "preeditString" arguments))

(defun |preferredHeight| (object &rest arguments)
  (%qinvoke-method object nil "preferredHeight" arguments))

(defun |preferredSize| (object &rest arguments)
  (%qinvoke-method object nil "preferredSize" arguments))

(defun |preferredWidth| (object &rest arguments)
  (%qinvoke-method object nil "preferredWidth" arguments))

(defun |prefix| (object &rest arguments)
  (%qinvoke-method object nil "prefix" arguments))

(defun |prepareGeometryChange| (object &rest arguments)
  (%qinvoke-method object nil "prepareGeometryChange" arguments))

(defun |pressed| (object &rest arguments)
  (%qinvoke-method object nil "pressed" arguments))

(defun |pressure| (object &rest arguments)
  (%qinvoke-method object nil "pressure" arguments))

(defun |previewChanged| (object &rest arguments)
  (%qinvoke-method object nil "previewChanged" arguments))

(defun |previewWidget| (object &rest arguments)
  (%qinvoke-method object nil "previewWidget" arguments))

(defun |previousBlockState| (object &rest arguments)
  (%qinvoke-method object nil "previousBlockState" arguments))

(defun |previousCursorPosition| (object &rest arguments)
  (%qinvoke-method object nil "previousCursorPosition" arguments))

(defun |previousInFocusChain| (object &rest arguments)
  (%qinvoke-method object nil "previousInFocusChain" arguments))

(defun |previous| (object &rest arguments)
  (%qinvoke-method object nil "previous" arguments))

(defun |primaryScreen| (object &rest arguments)
  (%qinvoke-method object nil "primaryScreen" arguments))

(defun |printProgram| (object &rest arguments)
  (%qinvoke-method object nil "printProgram" arguments))

(defun |printRange| (object &rest arguments)
  (%qinvoke-method object nil "printRange" arguments))

(defun |printerName| (object &rest arguments)
  (%qinvoke-method object nil "printerName" arguments))

(defun |printerState| (object &rest arguments)
  (%qinvoke-method object nil "printerState" arguments))

(defun |printer| (object &rest arguments)
  (%qinvoke-method object nil "printer" arguments))

(defun |print| (object &rest arguments)
  (%qinvoke-method object nil "print" arguments))

(defun |priority| (object &rest arguments)
  (%qinvoke-method object nil "priority" arguments))

(defun |processChannelMode| (object &rest arguments)
  (%qinvoke-method object nil "processChannelMode" arguments))

(defun |processEnvironment| (object &rest arguments)
  (%qinvoke-method object nil "processEnvironment" arguments))

(defun |processEvents.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "processEvents" arguments))

(defun |processEvents| (object &rest arguments)
  (%qinvoke-method object nil "processEvents" arguments))

(defun |propertiesAssigned| (object &rest arguments)
  (%qinvoke-method object nil "propertiesAssigned" arguments))

(defun |propertyCount| (object &rest arguments)
  (%qinvoke-method object nil "propertyCount" arguments))

(defun |propertyName| (object &rest arguments)
  (%qinvoke-method object nil "propertyName" arguments))

(defun |propertyOffset| (object &rest arguments)
  (%qinvoke-method object nil "propertyOffset" arguments))

(defun |property| (object &rest arguments)
  (%qinvoke-method object nil "property" arguments))

(defun |proposedAction| (object &rest arguments)
  (%qinvoke-method object nil "proposedAction" arguments))

(defun |provides| (object &rest arguments)
  (%qinvoke-method object nil "provides" arguments))

(defun |proxyModel| (object &rest arguments)
  (%qinvoke-method object nil "proxyModel" arguments))

(defun |proxy| (object &rest arguments)
  (%qinvoke-method object nil "proxy" arguments))

(defun |push| (object &rest arguments)
  (%qinvoke-method object nil "push" arguments))

(defun |putChar| (object &rest arguments)
  (%qinvoke-method object nil "putChar" arguments))

(defun |quadToQuad.QTransform| (&rest arguments)
  (%qinvoke-method "QTransform" nil "quadToQuad" arguments))

(defun |quadToSquare.QTransform| (&rest arguments)
  (%qinvoke-method "QTransform" nil "quadToSquare" arguments))

(defun |quadTo| (object &rest arguments)
  (%qinvoke-method object nil "quadTo" arguments))

(defun |queryAccessibleInterface.QAccessible| (&rest arguments)
  (%qinvoke-method "QAccessible" nil "queryAccessibleInterface" arguments))

(defun |queryItemValue| (object &rest arguments)
  (%qinvoke-method object nil "queryItemValue" arguments))

(defun |queryPairDelimiter| (object &rest arguments)
  (%qinvoke-method object nil "queryPairDelimiter" arguments))

(defun |queryValueDelimiter| (object &rest arguments)
  (%qinvoke-method object nil "queryValueDelimiter" arguments))

(defun |question.QMessageBox| (&rest arguments)
  (%qinvoke-method "QMessageBox" nil "question" arguments))

(defun |quitOnLastWindowClosed.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "quitOnLastWindowClosed" arguments))

(defun |quit| (object &rest arguments)
  (%qinvoke-method object nil "quit" arguments))

(defun |radius| (object &rest arguments)
  (%qinvoke-method object nil "radius" arguments))

(defun |raise| (object &rest arguments)
  (%qinvoke-method object nil "raise" arguments))

(defun |rangeChanged| (object &rest arguments)
  (%qinvoke-method object nil "rangeChanged" arguments))

(defun |rawMode| (object &rest arguments)
  (%qinvoke-method object nil "rawMode" arguments))

(defun |rawName| (object &rest arguments)
  (%qinvoke-method object nil "rawName" arguments))

(defun |rawValue| (object &rest arguments)
  (%qinvoke-method object nil "rawValue" arguments))

(defun |readAllStandardError| (object &rest arguments)
  (%qinvoke-method object nil "readAllStandardError" arguments))

(defun |readAllStandardOutput| (object &rest arguments)
  (%qinvoke-method object nil "readAllStandardOutput" arguments))

(defun |readAll| (object &rest arguments)
  (%qinvoke-method object nil "readAll" arguments))

(defun |readChannelFinished| (object &rest arguments)
  (%qinvoke-method object nil "readChannelFinished" arguments))

(defun |readChannel| (object &rest arguments)
  (%qinvoke-method object nil "readChannel" arguments))

(defun |readLine| (object &rest arguments)
  (%qinvoke-method object nil "readLine" arguments))

(defun |readWriteLock| (object &rest arguments)
  (%qinvoke-method object nil "readWriteLock" arguments))

(defun |readyReadStandardError| (object &rest arguments)
  (%qinvoke-method object nil "readyReadStandardError" arguments))

(defun |readyReadStandardOutput| (object &rest arguments)
  (%qinvoke-method object nil "readyReadStandardOutput" arguments))

(defun |readyRead| (object &rest arguments)
  (%qinvoke-method object nil "readyRead" arguments))

(defun |read| (object &rest arguments)
  (%qinvoke-method object nil "read" arguments))

(defun |reason| (object &rest arguments)
  (%qinvoke-method object nil "reason" arguments))

(defun |receivers| (object &rest arguments)
  (%qinvoke-method object nil "receivers" arguments))

(defun |rectCount| (object &rest arguments)
  (%qinvoke-method object nil "rectCount" arguments))

(defun |rectForIndex| (object &rest arguments)
  (%qinvoke-method object nil "rectForIndex" arguments))

(defun |rects| (object &rest arguments)
  (%qinvoke-method object nil "rects" arguments))

(defun |rect| (object &rest arguments)
  (%qinvoke-method object nil "rect" arguments))

(defun |redF| (object &rest arguments)
  (%qinvoke-method object nil "redF" arguments))

(defun |redoAvailable| (object &rest arguments)
  (%qinvoke-method object nil "redoAvailable" arguments))

(defun |redoTextChanged| (object &rest arguments)
  (%qinvoke-method object nil "redoTextChanged" arguments))

(defun |redoText| (object &rest arguments)
  (%qinvoke-method object nil "redoText" arguments))

(defun |redo| (object &rest arguments)
  (%qinvoke-method object nil "redo" arguments))

(defun |red| (object &rest arguments)
  (%qinvoke-method object nil "red" arguments))

(defun |reexpand| (object &rest arguments)
  (%qinvoke-method object nil "reexpand" arguments))

(defun |reformat| (object &rest arguments)
  (%qinvoke-method object nil "reformat" arguments))

(defun |refresh| (object &rest arguments)
  (%qinvoke-method object nil "refresh" arguments))

(defun |regExp| (object &rest arguments)
  (%qinvoke-method object nil "regExp" arguments))

(defun |region| (object &rest arguments)
  (%qinvoke-method object nil "region" arguments))

(defun |registerEditor| (object &rest arguments)
  (%qinvoke-method object nil "registerEditor" arguments))

(defun |registerEventType.QEvent| (&rest arguments)
  (%qinvoke-method "QEvent" nil "registerEventType" arguments))

(defun |registerField| (object &rest arguments)
  (%qinvoke-method object nil "registerField" arguments))

(defun |registerFormat.QSettings| (&rest arguments)
  (%qinvoke-method "QSettings" nil "registerFormat" arguments))

(defun |rehighlightBlock| (object &rest arguments)
  (%qinvoke-method object nil "rehighlightBlock" arguments))

(defun |rehighlight| (object &rest arguments)
  (%qinvoke-method object nil "rehighlight" arguments))

(defun |rejected| (object &rest arguments)
  (%qinvoke-method object nil "rejected" arguments))

(defun |reject| (object &rest arguments)
  (%qinvoke-method object nil "reject" arguments))

(defun |relationTo| (object &rest arguments)
  (%qinvoke-method object nil "relationTo" arguments))

(defun |relativeFilePath| (object &rest arguments)
  (%qinvoke-method object nil "relativeFilePath" arguments))

(defun |releaseKeyboard| (object &rest arguments)
  (%qinvoke-method object nil "releaseKeyboard" arguments))

(defun |releaseMouse| (object &rest arguments)
  (%qinvoke-method object nil "releaseMouse" arguments))

(defun |releaseShortcut| (object &rest arguments)
  (%qinvoke-method object nil "releaseShortcut" arguments))

(defun |releaseWidget| (object &rest arguments)
  (%qinvoke-method object nil "releaseWidget" arguments))

(defun |released| (object &rest arguments)
  (%qinvoke-method object nil "released" arguments))

(defun |release| (object &rest arguments)
  (%qinvoke-method object nil "release" arguments))

(defun |reload| (object &rest arguments)
  (%qinvoke-method object nil "reload" arguments))

(defun |relock| (object &rest arguments)
  (%qinvoke-method object nil "relock" arguments))

(defun |remove.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "remove" arguments))

(defun |remove.QPixmapCache| (&rest arguments)
  (%qinvoke-method "QPixmapCache" nil "remove" arguments))

(defun |removeAction| (object &rest arguments)
  (%qinvoke-method object nil "removeAction" arguments))

(defun |removeAllApplicationFonts.QFontDatabase| (&rest arguments)
  (%qinvoke-method "QFontDatabase" nil "removeAllApplicationFonts" arguments))

(defun |removeAllEncodedQueryItems| (object &rest arguments)
  (%qinvoke-method object nil "removeAllEncodedQueryItems" arguments))

(defun |removeAllQueryItems| (object &rest arguments)
  (%qinvoke-method object nil "removeAllQueryItems" arguments))

(defun |removeAnimation| (object &rest arguments)
  (%qinvoke-method object nil "removeAnimation" arguments))

(defun |removeApplicationFont.QFontDatabase| (&rest arguments)
  (%qinvoke-method "QFontDatabase" nil "removeApplicationFont" arguments))

(defun |removeAt| (object &rest arguments)
  (%qinvoke-method object nil "removeAt" arguments))

(defun |removeButton| (object &rest arguments)
  (%qinvoke-method object nil "removeButton" arguments))

(defun |removeCellWidget| (object &rest arguments)
  (%qinvoke-method object nil "removeCellWidget" arguments))

(defun |removeChild| (object &rest arguments)
  (%qinvoke-method object nil "removeChild" arguments))

(defun |removeColumns| (object &rest arguments)
  (%qinvoke-method object nil "removeColumns" arguments))

(defun |removeColumn| (object &rest arguments)
  (%qinvoke-method object nil "removeColumn" arguments))

(defun |removeDefaultAnimation| (object &rest arguments)
  (%qinvoke-method object nil "removeDefaultAnimation" arguments))

(defun |removeDockWidget| (object &rest arguments)
  (%qinvoke-method object nil "removeDockWidget" arguments))

(defun |removeEncodedQueryItem| (object &rest arguments)
  (%qinvoke-method object nil "removeEncodedQueryItem" arguments))

(defun |removeEventFilter| (object &rest arguments)
  (%qinvoke-method object nil "removeEventFilter" arguments))

(defun |removeFactory.QAccessible| (&rest arguments)
  (%qinvoke-method "QAccessible" nil "removeFactory" arguments))

(defun |removeFormat| (object &rest arguments)
  (%qinvoke-method object nil "removeFormat" arguments))

(defun |removeFromGroup| (object &rest arguments)
  (%qinvoke-method object nil "removeFromGroup" arguments))

(defun |removeItemWidget| (object &rest arguments)
  (%qinvoke-method object nil "removeItemWidget" arguments))

(defun |removeItem| (object &rest arguments)
  (%qinvoke-method object nil "removeItem" arguments))

(defun |removeLibraryPath.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "removeLibraryPath" arguments))

(defun |removeMapping| (object &rest arguments)
  (%qinvoke-method object nil "removeMapping" arguments))

(defun |removePage| (object &rest arguments)
  (%qinvoke-method object nil "removePage" arguments))

(defun |removePaths| (object &rest arguments)
  (%qinvoke-method object nil "removePaths" arguments))

(defun |removePath| (object &rest arguments)
  (%qinvoke-method object nil "removePath" arguments))

(defun |removePostedEvents.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "removePostedEvents" arguments))

(defun |removeQueryItem| (object &rest arguments)
  (%qinvoke-method object nil "removeQueryItem" arguments))

(defun |removeRows| (object &rest arguments)
  (%qinvoke-method object nil "removeRows" arguments))

(defun |removeRow| (object &rest arguments)
  (%qinvoke-method object nil "removeRow" arguments))

(defun |removeSceneEventFilter| (object &rest arguments)
  (%qinvoke-method object nil "removeSceneEventFilter" arguments))

(defun |removeSelectedText| (object &rest arguments)
  (%qinvoke-method object nil "removeSelectedText" arguments))

(defun |removeStack| (object &rest arguments)
  (%qinvoke-method object nil "removeStack" arguments))

(defun |removeState| (object &rest arguments)
  (%qinvoke-method object nil "removeState" arguments))

(defun |removeSubWindow| (object &rest arguments)
  (%qinvoke-method object nil "removeSubWindow" arguments))

(defun |removeSubstitution.QFont| (&rest arguments)
  (%qinvoke-method "QFont" nil "removeSubstitution" arguments))

(defun |removeTab| (object &rest arguments)
  (%qinvoke-method object nil "removeTab" arguments))

(defun |removeToolBarBreak| (object &rest arguments)
  (%qinvoke-method object nil "removeToolBarBreak" arguments))

(defun |removeToolBar| (object &rest arguments)
  (%qinvoke-method object nil "removeToolBar" arguments))

(defun |removeTransition| (object &rest arguments)
  (%qinvoke-method object nil "removeTransition" arguments))

(defun |removeTranslator.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "removeTranslator" arguments))

(defun |removeWidget| (object &rest arguments)
  (%qinvoke-method object nil "removeWidget" arguments))

(defun |removed| (object &rest arguments)
  (%qinvoke-method object nil "removed" arguments))

(defun |remove| (object &rest arguments)
  (%qinvoke-method object nil "remove" arguments))

(defun |rename.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "rename" arguments))

(defun |rename| (object &rest arguments)
  (%qinvoke-method object nil "rename" arguments))

(defun |renderHints| (object &rest arguments)
  (%qinvoke-method object nil "renderHints" arguments))

(defun |render| (object &rest arguments)
  (%qinvoke-method object nil "render" arguments))

(defun |repaint(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "repaint(QRect)" arguments))

(defun |repaint(QRegion)| (object &rest arguments)
  (%qinvoke-method object nil "repaint(QRegion)" arguments))

(defun |repaint| (object &rest arguments)
  (%qinvoke-method object nil "repaint" arguments))

(defun |repeatAction| (object &rest arguments)
  (%qinvoke-method object nil "repeatAction" arguments))

(defun |replacementLength| (object &rest arguments)
  (%qinvoke-method object nil "replacementLength" arguments))

(defun |replacementStart| (object &rest arguments)
  (%qinvoke-method object nil "replacementStart" arguments))

(defun |requestPhase2| (object &rest arguments)
  (%qinvoke-method object nil "requestPhase2" arguments))

(defun |requestUpdate| (object &rest arguments)
  (%qinvoke-method object nil "requestUpdate" arguments))

(defun |requestWidget| (object &rest arguments)
  (%qinvoke-method object nil "requestWidget" arguments))

(defun |resetCachedContent| (object &rest arguments)
  (%qinvoke-method object nil "resetCachedContent" arguments))

(defun |resetMatrix| (object &rest arguments)
  (%qinvoke-method object nil "resetMatrix" arguments))

(defun |resetTransform| (object &rest arguments)
  (%qinvoke-method object nil "resetTransform" arguments))

(defun |reset| (object &rest arguments)
  (%qinvoke-method object nil "reset" arguments))

(defun |resize.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "resize" arguments))

(defun |resizeAnchor| (object &rest arguments)
  (%qinvoke-method object nil "resizeAnchor" arguments))

(defun |resizeColumnToContents| (object &rest arguments)
  (%qinvoke-method object nil "resizeColumnToContents" arguments))

(defun |resizeColumnsToContents| (object &rest arguments)
  (%qinvoke-method object nil "resizeColumnsToContents" arguments))

(defun |resizeGripsVisible| (object &rest arguments)
  (%qinvoke-method object nil "resizeGripsVisible" arguments))

(defun |resizeMode| (object &rest arguments)
  (%qinvoke-method object nil "resizeMode" arguments))

(defun |resizeRowToContents| (object &rest arguments)
  (%qinvoke-method object nil "resizeRowToContents" arguments))

(defun |resizeRowsToContents| (object &rest arguments)
  (%qinvoke-method object nil "resizeRowsToContents" arguments))

(defun |resizeSections| (object &rest arguments)
  (%qinvoke-method object nil "resizeSections" arguments))

(defun |resizeSection| (object &rest arguments)
  (%qinvoke-method object nil "resizeSection" arguments))

(defun |resized| (object &rest arguments)
  (%qinvoke-method object nil "resized" arguments))

(defun |resize| (object &rest arguments)
  (%qinvoke-method object nil "resize" arguments))

(defun |resolution| (object &rest arguments)
  (%qinvoke-method object nil "resolution" arguments))

(defun |resolveSymlinks| (object &rest arguments)
  (%qinvoke-method object nil "resolveSymlinks" arguments))

(defun |resolved| (object &rest arguments)
  (%qinvoke-method object nil "resolved" arguments))

(defun |resolve| (object &rest arguments)
  (%qinvoke-method object nil "resolve" arguments))

(defun |resource| (object &rest arguments)
  (%qinvoke-method object nil "resource" arguments))

(defun |restartCommand| (object &rest arguments)
  (%qinvoke-method object nil "restartCommand" arguments))

(defun |restartHint| (object &rest arguments)
  (%qinvoke-method object nil "restartHint" arguments))

(defun |restart| (object &rest arguments)
  (%qinvoke-method object nil "restart" arguments))

(defun |restoreDockWidget| (object &rest arguments)
  (%qinvoke-method object nil "restoreDockWidget" arguments))

(defun |restoreGeometry| (object &rest arguments)
  (%qinvoke-method object nil "restoreGeometry" arguments))

(defun |restoreOverrideCursor.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "restoreOverrideCursor" arguments))

(defun |restoreState| (object &rest arguments)
  (%qinvoke-method object nil "restoreState" arguments))

(defun |restore| (object &rest arguments)
  (%qinvoke-method object nil "restore" arguments))

(defun |result| (object &rest arguments)
  (%qinvoke-method object nil "result" arguments))

(defun |resume| (object &rest arguments)
  (%qinvoke-method object nil "resume" arguments))

(defun |returnPressed| (object &rest arguments)
  (%qinvoke-method object nil "returnPressed" arguments))

(defun |revert| (object &rest arguments)
  (%qinvoke-method object nil "revert" arguments))

(defun |revision| (object &rest arguments)
  (%qinvoke-method object nil "revision" arguments))

(defun |rgbSwapped| (object &rest arguments)
  (%qinvoke-method object nil "rgbSwapped" arguments))

(defun |rgba| (object &rest arguments)
  (%qinvoke-method object nil "rgba" arguments))

(defun |rgb| (object &rest arguments)
  (%qinvoke-method object nil "rgb" arguments))

(defun |rightBearing| (object &rest arguments)
  (%qinvoke-method object nil "rightBearing" arguments))

(defun |rightColumn| (object &rest arguments)
  (%qinvoke-method object nil "rightColumn" arguments))

(defun |rightMargin| (object &rest arguments)
  (%qinvoke-method object nil "rightMargin" arguments))

(defun |rightPadding| (object &rest arguments)
  (%qinvoke-method object nil "rightPadding" arguments))

(defun |right| (object &rest arguments)
  (%qinvoke-method object nil "right" arguments))

(defun |rmdir| (object &rest arguments)
  (%qinvoke-method object nil "rmdir" arguments))

(defun |rmpath| (object &rest arguments)
  (%qinvoke-method object nil "rmpath" arguments))

(defun |role| (object &rest arguments)
  (%qinvoke-method object nil "role" arguments))

(defun |root.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "root" arguments))

(defun |rootDirectory| (object &rest arguments)
  (%qinvoke-method object nil "rootDirectory" arguments))

(defun |rootFrame| (object &rest arguments)
  (%qinvoke-method object nil "rootFrame" arguments))

(defun |rootIndex| (object &rest arguments)
  (%qinvoke-method object nil "rootIndex" arguments))

(defun |rootIsDecorated| (object &rest arguments)
  (%qinvoke-method object nil "rootIsDecorated" arguments))

(defun |rootModelIndex| (object &rest arguments)
  (%qinvoke-method object nil "rootModelIndex" arguments))

(defun |rootPath.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "rootPath" arguments))

(defun |rootPathChanged| (object &rest arguments)
  (%qinvoke-method object nil "rootPathChanged" arguments))

(defun |rootPath| (object &rest arguments)
  (%qinvoke-method object nil "rootPath" arguments))

(defun |rotateRadians| (object &rest arguments)
  (%qinvoke-method object nil "rotateRadians" arguments))

(defun |rotatedVector| (object &rest arguments)
  (%qinvoke-method object nil "rotatedVector" arguments))

(defun |rotate| (object &rest arguments)
  (%qinvoke-method object nil "rotate" arguments))

(defun |rotationAngle| (object &rest arguments)
  (%qinvoke-method object nil "rotationAngle" arguments))

(defun |rotationChanged| (object &rest arguments)
  (%qinvoke-method object nil "rotationChanged" arguments))

(defun |rotation| (object &rest arguments)
  (%qinvoke-method object nil "rotation" arguments))

(defun |rowAlignment| (object &rest arguments)
  (%qinvoke-method object nil "rowAlignment" arguments))

(defun |rowAt| (object &rest arguments)
  (%qinvoke-method object nil "rowAt" arguments))

(defun |rowCountChanged| (object &rest arguments)
  (%qinvoke-method object nil "rowCountChanged" arguments))

(defun |rowCount| (object &rest arguments)
  (%qinvoke-method object nil "rowCount" arguments))

(defun |rowEnd| (object &rest arguments)
  (%qinvoke-method object nil "rowEnd" arguments))

(defun |rowHeight| (object &rest arguments)
  (%qinvoke-method object nil "rowHeight" arguments))

(defun |rowIntersectsSelection| (object &rest arguments)
  (%qinvoke-method object nil "rowIntersectsSelection" arguments))

(defun |rowMaximumHeight| (object &rest arguments)
  (%qinvoke-method object nil "rowMaximumHeight" arguments))

(defun |rowMinimumHeight| (object &rest arguments)
  (%qinvoke-method object nil "rowMinimumHeight" arguments))

(defun |rowMoved| (object &rest arguments)
  (%qinvoke-method object nil "rowMoved" arguments))

(defun |rowPreferredHeight| (object &rest arguments)
  (%qinvoke-method object nil "rowPreferredHeight" arguments))

(defun |rowResized| (object &rest arguments)
  (%qinvoke-method object nil "rowResized" arguments))

(defun |rowSpacing| (object &rest arguments)
  (%qinvoke-method object nil "rowSpacing" arguments))

(defun |rowSpan| (object &rest arguments)
  (%qinvoke-method object nil "rowSpan" arguments))

(defun |rowStart| (object &rest arguments)
  (%qinvoke-method object nil "rowStart" arguments))

(defun |rowStretchFactor| (object &rest arguments)
  (%qinvoke-method object nil "rowStretchFactor" arguments))

(defun |rowStretch| (object &rest arguments)
  (%qinvoke-method object nil "rowStretch" arguments))

(defun |rowViewportPosition| (object &rest arguments)
  (%qinvoke-method object nil "rowViewportPosition" arguments))

(defun |rowWrapPolicy| (object &rest arguments)
  (%qinvoke-method object nil "rowWrapPolicy" arguments))

(defun |rowsAboutToBeInserted| (object &rest arguments)
  (%qinvoke-method object nil "rowsAboutToBeInserted" arguments))

(defun |rowsAboutToBeMoved| (object &rest arguments)
  (%qinvoke-method object nil "rowsAboutToBeMoved" arguments))

(defun |rowsAboutToBeRemoved| (object &rest arguments)
  (%qinvoke-method object nil "rowsAboutToBeRemoved" arguments))

(defun |rowsInserted| (object &rest arguments)
  (%qinvoke-method object nil "rowsInserted" arguments))

(defun |rowsMoved| (object &rest arguments)
  (%qinvoke-method object nil "rowsMoved" arguments))

(defun |rowsRemoved| (object &rest arguments)
  (%qinvoke-method object nil "rowsRemoved" arguments))

(defun |rows| (object &rest arguments)
  (%qinvoke-method object nil "rows" arguments))

(defun |row| (object &rest arguments)
  (%qinvoke-method object nil "row" arguments))

(defun |rubberBandSelectionMode| (object &rest arguments)
  (%qinvoke-method object nil "rubberBandSelectionMode" arguments))

(defun |run| (object &rest arguments)
  (%qinvoke-method object nil "run" arguments))

(defun |saturationF| (object &rest arguments)
  (%qinvoke-method object nil "saturationF" arguments))

(defun |saturation| (object &rest arguments)
  (%qinvoke-method object nil "saturation" arguments))

(defun |saveGeometry| (object &rest arguments)
  (%qinvoke-method object nil "saveGeometry" arguments))

(defun |saveStateRequest| (object &rest arguments)
  (%qinvoke-method object nil "saveStateRequest" arguments))

(defun |saveState| (object &rest arguments)
  (%qinvoke-method object nil "saveState" arguments))

(defun |save| (object &rest arguments)
  (%qinvoke-method object nil "save" arguments))

(defun |scalar| (object &rest arguments)
  (%qinvoke-method object nil "scalar" arguments))

(defun |scale(QVector3D)| (object &rest arguments)
  (%qinvoke-method object nil "scale(QVector3D)" arguments))

(defun |scale(qreal)| (object &rest arguments)
  (%qinvoke-method object nil "scale(qreal)" arguments))

(defun |scaleChanged| (object &rest arguments)
  (%qinvoke-method object nil "scaleChanged" arguments))

(defun |scaleFactor| (object &rest arguments)
  (%qinvoke-method object nil "scaleFactor" arguments))

(defun |scaled(QSize...)| (object &rest arguments)
  (%qinvoke-method object nil "scaled(QSize...)" arguments))

(defun |scaled(int...)| (object &rest arguments)
  (%qinvoke-method object nil "scaled(int...)" arguments))

(defun |scaledSize| (object &rest arguments)
  (%qinvoke-method object nil "scaledSize" arguments))

(defun |scaledToHeight| (object &rest arguments)
  (%qinvoke-method object nil "scaledToHeight" arguments))

(defun |scaledToWidth| (object &rest arguments)
  (%qinvoke-method object nil "scaledToWidth" arguments))

(defun |scaled| (object &rest arguments)
  (%qinvoke-method object nil "scaled" arguments))

(defun |scale| (object &rest arguments)
  (%qinvoke-method object nil "scale" arguments))

(defun |sceneBoundingRect| (object &rest arguments)
  (%qinvoke-method object nil "sceneBoundingRect" arguments))

(defun |scenePos| (object &rest arguments)
  (%qinvoke-method object nil "scenePos" arguments))

(defun |sceneRectChanged| (object &rest arguments)
  (%qinvoke-method object nil "sceneRectChanged" arguments))

(defun |sceneRect| (object &rest arguments)
  (%qinvoke-method object nil "sceneRect" arguments))

(defun |sceneTransform| (object &rest arguments)
  (%qinvoke-method object nil "sceneTransform" arguments))

(defun |scene| (object &rest arguments)
  (%qinvoke-method object nil "scene" arguments))

(defun |scheduleDelayedItemsLayout| (object &rest arguments)
  (%qinvoke-method object nil "scheduleDelayedItemsLayout" arguments))

(defun |scheme| (object &rest arguments)
  (%qinvoke-method object nil "scheme" arguments))

(defun |scope| (object &rest arguments)
  (%qinvoke-method object nil "scope" arguments))

(defun |screenCountChanged| (object &rest arguments)
  (%qinvoke-method object nil "screenCountChanged" arguments))

(defun |screenCount| (object &rest arguments)
  (%qinvoke-method object nil "screenCount" arguments))

(defun |screenGeometry(QPoint)| (object &rest arguments)
  (%qinvoke-method object nil "screenGeometry(QPoint)" arguments))

(defun |screenGeometry(const QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "screenGeometry(const QWidget*)" arguments))

(defun |screenGeometry(int)| (object &rest arguments)
  (%qinvoke-method object nil "screenGeometry(int)" arguments))

(defun |screenGeometry| (object &rest arguments)
  (%qinvoke-method object nil "screenGeometry" arguments))

(defun |screenNumber(QPoint)| (object &rest arguments)
  (%qinvoke-method object nil "screenNumber(QPoint)" arguments))

(defun |screenNumber(const QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "screenNumber(const QWidget*)" arguments))

(defun |screenNumber| (object &rest arguments)
  (%qinvoke-method object nil "screenNumber" arguments))

(defun |screenPos| (object &rest arguments)
  (%qinvoke-method object nil "screenPos" arguments))

(defun |screen| (object &rest arguments)
  (%qinvoke-method object nil "screen" arguments))

(defun |scrollBarWidgets| (object &rest arguments)
  (%qinvoke-method object nil "scrollBarWidgets" arguments))

(defun |scrollBarsEnabled| (object &rest arguments)
  (%qinvoke-method object nil "scrollBarsEnabled" arguments))

(defun |scrollDirtyRegion| (object &rest arguments)
  (%qinvoke-method object nil "scrollDirtyRegion" arguments))

(defun |scrollToAnchor| (object &rest arguments)
  (%qinvoke-method object nil "scrollToAnchor" arguments))

(defun |scrollToBottom| (object &rest arguments)
  (%qinvoke-method object nil "scrollToBottom" arguments))

(defun |scrollToItem| (object &rest arguments)
  (%qinvoke-method object nil "scrollToItem" arguments))

(defun |scrollToTop| (object &rest arguments)
  (%qinvoke-method object nil "scrollToTop" arguments))

(defun |scrollTo| (object &rest arguments)
  (%qinvoke-method object nil "scrollTo" arguments))

(defun |scroll| (object &rest arguments)
  (%qinvoke-method object nil "scroll" arguments))

(defun |searchPaths.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "searchPaths" arguments))

(defun |searchPaths| (object &rest arguments)
  (%qinvoke-method object nil "searchPaths" arguments))

(defun |second| (object &rest arguments)
  (%qinvoke-method object nil "second" arguments))

(defun |secsTo| (object &rest arguments)
  (%qinvoke-method object nil "secsTo" arguments))

(defun |sectionAt| (object &rest arguments)
  (%qinvoke-method object nil "sectionAt" arguments))

(defun |sectionAutoResize| (object &rest arguments)
  (%qinvoke-method object nil "sectionAutoResize" arguments))

(defun |sectionClicked| (object &rest arguments)
  (%qinvoke-method object nil "sectionClicked" arguments))

(defun |sectionCountChanged| (object &rest arguments)
  (%qinvoke-method object nil "sectionCountChanged" arguments))

(defun |sectionCount| (object &rest arguments)
  (%qinvoke-method object nil "sectionCount" arguments))

(defun |sectionDoubleClicked| (object &rest arguments)
  (%qinvoke-method object nil "sectionDoubleClicked" arguments))

(defun |sectionEntered| (object &rest arguments)
  (%qinvoke-method object nil "sectionEntered" arguments))

(defun |sectionHandleDoubleClicked| (object &rest arguments)
  (%qinvoke-method object nil "sectionHandleDoubleClicked" arguments))

(defun |sectionMoved| (object &rest arguments)
  (%qinvoke-method object nil "sectionMoved" arguments))

(defun |sectionPosition| (object &rest arguments)
  (%qinvoke-method object nil "sectionPosition" arguments))

(defun |sectionPressed| (object &rest arguments)
  (%qinvoke-method object nil "sectionPressed" arguments))

(defun |sectionResized| (object &rest arguments)
  (%qinvoke-method object nil "sectionResized" arguments))

(defun |sectionSizeHint| (object &rest arguments)
  (%qinvoke-method object nil "sectionSizeHint" arguments))

(defun |sectionSize| (object &rest arguments)
  (%qinvoke-method object nil "sectionSize" arguments))

(defun |sectionText| (object &rest arguments)
  (%qinvoke-method object nil "sectionText" arguments))

(defun |sectionViewportPosition| (object &rest arguments)
  (%qinvoke-method object nil "sectionViewportPosition" arguments))

(defun |sectionsAboutToBeRemoved| (object &rest arguments)
  (%qinvoke-method object nil "sectionsAboutToBeRemoved" arguments))

(defun |sectionsHidden| (object &rest arguments)
  (%qinvoke-method object nil "sectionsHidden" arguments))

(defun |sectionsInserted| (object &rest arguments)
  (%qinvoke-method object nil "sectionsInserted" arguments))

(defun |sectionsMoved| (object &rest arguments)
  (%qinvoke-method object nil "sectionsMoved" arguments))

(defun |seek| (object &rest arguments)
  (%qinvoke-method object nil "seek" arguments))

(defun |segmentStyle| (object &rest arguments)
  (%qinvoke-method object nil "segmentStyle" arguments))

(defun |select(QItemSelection...)| (object &rest arguments)
  (%qinvoke-method object nil "select(QItemSelection...)" arguments))

(defun |select(QModelIndex...)| (object &rest arguments)
  (%qinvoke-method object nil "select(QModelIndex...)" arguments))

(defun |selectAll| (object &rest arguments)
  (%qinvoke-method object nil "selectAll" arguments))

(defun |selectColumn| (object &rest arguments)
  (%qinvoke-method object nil "selectColumn" arguments))

(defun |selectFile| (object &rest arguments)
  (%qinvoke-method object nil "selectFile" arguments))

(defun |selectNameFilter| (object &rest arguments)
  (%qinvoke-method object nil "selectNameFilter" arguments))

(defun |selectRow| (object &rest arguments)
  (%qinvoke-method object nil "selectRow" arguments))

(defun |selectedColor| (object &rest arguments)
  (%qinvoke-method object nil "selectedColor" arguments))

(defun |selectedColumns| (object &rest arguments)
  (%qinvoke-method object nil "selectedColumns" arguments))

(defun |selectedDate| (object &rest arguments)
  (%qinvoke-method object nil "selectedDate" arguments))

(defun |selectedFiles| (object &rest arguments)
  (%qinvoke-method object nil "selectedFiles" arguments))

(defun |selectedFont| (object &rest arguments)
  (%qinvoke-method object nil "selectedFont" arguments))

(defun |selectedIndexes| (object &rest arguments)
  (%qinvoke-method object nil "selectedIndexes" arguments))

(defun |selectedItems| (object &rest arguments)
  (%qinvoke-method object nil "selectedItems" arguments))

(defun |selectedNameFilter| (object &rest arguments)
  (%qinvoke-method object nil "selectedNameFilter" arguments))

(defun |selectedRanges| (object &rest arguments)
  (%qinvoke-method object nil "selectedRanges" arguments))

(defun |selectedRows| (object &rest arguments)
  (%qinvoke-method object nil "selectedRows" arguments))

(defun |selectedText| (object &rest arguments)
  (%qinvoke-method object nil "selectedText" arguments))

(defun |selected| (object &rest arguments)
  (%qinvoke-method object nil "selected" arguments))

(defun |selectionArea| (object &rest arguments)
  (%qinvoke-method object nil "selectionArea" arguments))

(defun |selectionBehaviorOnRemove| (object &rest arguments)
  (%qinvoke-method object nil "selectionBehaviorOnRemove" arguments))

(defun |selectionBehavior| (object &rest arguments)
  (%qinvoke-method object nil "selectionBehavior" arguments))

(defun |selectionChanged| (object &rest arguments)
  (%qinvoke-method object nil "selectionChanged" arguments))

(defun |selectionEnd| (object &rest arguments)
  (%qinvoke-method object nil "selectionEnd" arguments))

(defun |selectionModel| (object &rest arguments)
  (%qinvoke-method object nil "selectionModel" arguments))

(defun |selectionMode| (object &rest arguments)
  (%qinvoke-method object nil "selectionMode" arguments))

(defun |selectionStart| (object &rest arguments)
  (%qinvoke-method object nil "selectionStart" arguments))

(defun |selection| (object &rest arguments)
  (%qinvoke-method object nil "selection" arguments))

(defun |select| (object &rest arguments)
  (%qinvoke-method object nil "select" arguments))

(defun |sendEvent.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "sendEvent" arguments))

(defun |sendEvent| (object &rest arguments)
  (%qinvoke-method object nil "sendEvent" arguments))

(defun |sendPostedEvents.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "sendPostedEvents" arguments))

(defun |senderObject| (object &rest arguments)
  (%qinvoke-method object nil "senderObject" arguments))

(defun |sender| (object &rest arguments)
  (%qinvoke-method object nil "sender" arguments))

(defun |separator.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "separator" arguments))

(defun |separatorsCollapsible| (object &rest arguments)
  (%qinvoke-method object nil "separatorsCollapsible" arguments))

(defun |sessionId| (object &rest arguments)
  (%qinvoke-method object nil "sessionId" arguments))

(defun |sessionKey| (object &rest arguments)
  (%qinvoke-method object nil "sessionKey" arguments))

(defun |setAccelerated| (object &rest arguments)
  (%qinvoke-method object nil "setAccelerated" arguments))

(defun |setAcceleration| (object &rest arguments)
  (%qinvoke-method object nil "setAcceleration" arguments))

(defun |setAccelerator| (object &rest arguments)
  (%qinvoke-method object nil "setAccelerator" arguments))

(defun |setAcceptDrops| (object &rest arguments)
  (%qinvoke-method object nil "setAcceptDrops" arguments))

(defun |setAcceptHoverEvents| (object &rest arguments)
  (%qinvoke-method object nil "setAcceptHoverEvents" arguments))

(defun |setAcceptMode| (object &rest arguments)
  (%qinvoke-method object nil "setAcceptMode" arguments))

(defun |setAcceptRichText| (object &rest arguments)
  (%qinvoke-method object nil "setAcceptRichText" arguments))

(defun |setAcceptTouchEvents| (object &rest arguments)
  (%qinvoke-method object nil "setAcceptTouchEvents" arguments))

(defun |setAccepted(QGesture*...)| (object &rest arguments)
  (%qinvoke-method object nil "setAccepted(QGesture*...)" arguments))

(defun |setAccepted(Qt::GestureType...)| (object &rest arguments)
  (%qinvoke-method object nil "setAccepted(Qt::GestureType...)" arguments))

(defun |setAcceptedMouseButtons| (object &rest arguments)
  (%qinvoke-method object nil "setAcceptedMouseButtons" arguments))

(defun |setAccepted| (object &rest arguments)
  (%qinvoke-method object nil "setAccepted" arguments))

(defun |setAccessibleDescription| (object &rest arguments)
  (%qinvoke-method object nil "setAccessibleDescription" arguments))

(defun |setAccessibleName| (object &rest arguments)
  (%qinvoke-method object nil "setAccessibleName" arguments))

(defun |setAccessibleText| (object &rest arguments)
  (%qinvoke-method object nil "setAccessibleText" arguments))

(defun |setActionGroup| (object &rest arguments)
  (%qinvoke-method object nil "setActionGroup" arguments))

(defun |setActivationOrder| (object &rest arguments)
  (%qinvoke-method object nil "setActivationOrder" arguments))

(defun |setActiveAction| (object &rest arguments)
  (%qinvoke-method object nil "setActiveAction" arguments))

(defun |setActivePanel| (object &rest arguments)
  (%qinvoke-method object nil "setActivePanel" arguments))

(defun |setActiveStack| (object &rest arguments)
  (%qinvoke-method object nil "setActiveStack" arguments))

(defun |setActiveSubWindow| (object &rest arguments)
  (%qinvoke-method object nil "setActiveSubWindow" arguments))

(defun |setActiveWindow.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setActiveWindow" arguments))

(defun |setActiveWindow| (object &rest arguments)
  (%qinvoke-method object nil "setActiveWindow" arguments))

(defun |setActive| (object &rest arguments)
  (%qinvoke-method object nil "setActive" arguments))

(defun |setAlignment(QLayout*...)| (object &rest arguments)
  (%qinvoke-method object nil "setAlignment(QLayout*...)" arguments))

(defun |setAlignment(QWidget*...)| (object &rest arguments)
  (%qinvoke-method object nil "setAlignment(QWidget*...)" arguments))

(defun |setAlignment| (object &rest arguments)
  (%qinvoke-method object nil "setAlignment" arguments))

(defun |setAllColumnsShowFocus| (object &rest arguments)
  (%qinvoke-method object nil "setAllColumnsShowFocus" arguments))

(defun |setAllPagesViewMode| (object &rest arguments)
  (%qinvoke-method object nil "setAllPagesViewMode" arguments))

(defun |setAllowedAreas| (object &rest arguments)
  (%qinvoke-method object nil "setAllowedAreas" arguments))

(defun |setAlphaF| (object &rest arguments)
  (%qinvoke-method object nil "setAlphaF" arguments))

(defun |setAlpha| (object &rest arguments)
  (%qinvoke-method object nil "setAlpha" arguments))

(defun |setAlternatingRowColors| (object &rest arguments)
  (%qinvoke-method object nil "setAlternatingRowColors" arguments))

(defun |setAmplitude| (object &rest arguments)
  (%qinvoke-method object nil "setAmplitude" arguments))

(defun |setAnchorHref| (object &rest arguments)
  (%qinvoke-method object nil "setAnchorHref" arguments))

(defun |setAnchorNames| (object &rest arguments)
  (%qinvoke-method object nil "setAnchorNames" arguments))

(defun |setAnchor| (object &rest arguments)
  (%qinvoke-method object nil "setAnchor" arguments))

(defun |setAngle| (object &rest arguments)
  (%qinvoke-method object nil "setAngle" arguments))

(defun |setAnimated| (object &rest arguments)
  (%qinvoke-method object nil "setAnimated" arguments))

(defun |setApplicationName.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "setApplicationName" arguments))

(defun |setApplicationVersion.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "setApplicationVersion" arguments))

(defun |setArrayIndex| (object &rest arguments)
  (%qinvoke-method object nil "setArrayIndex" arguments))

(defun |setArrowType| (object &rest arguments)
  (%qinvoke-method object nil "setArrowType" arguments))

(defun |setAttribute.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "setAttribute" arguments))

(defun |setAttribute| (object &rest arguments)
  (%qinvoke-method object nil "setAttribute" arguments))

(defun |setAuthority| (object &rest arguments)
  (%qinvoke-method object nil "setAuthority" arguments))

(defun |setAutoClose| (object &rest arguments)
  (%qinvoke-method object nil "setAutoClose" arguments))

(defun |setAutoDefault| (object &rest arguments)
  (%qinvoke-method object nil "setAutoDefault" arguments))

(defun |setAutoDelete| (object &rest arguments)
  (%qinvoke-method object nil "setAutoDelete" arguments))

(defun |setAutoExclusive| (object &rest arguments)
  (%qinvoke-method object nil "setAutoExclusive" arguments))

(defun |setAutoExpandDelay| (object &rest arguments)
  (%qinvoke-method object nil "setAutoExpandDelay" arguments))

(defun |setAutoFillBackground| (object &rest arguments)
  (%qinvoke-method object nil "setAutoFillBackground" arguments))

(defun |setAutoFormatting| (object &rest arguments)
  (%qinvoke-method object nil "setAutoFormatting" arguments))

(defun |setAutoRaise| (object &rest arguments)
  (%qinvoke-method object nil "setAutoRaise" arguments))

(defun |setAutoRepeatDelay| (object &rest arguments)
  (%qinvoke-method object nil "setAutoRepeatDelay" arguments))

(defun |setAutoRepeatInterval| (object &rest arguments)
  (%qinvoke-method object nil "setAutoRepeatInterval" arguments))

(defun |setAutoRepeat| (object &rest arguments)
  (%qinvoke-method object nil "setAutoRepeat" arguments))

(defun |setAutoReset| (object &rest arguments)
  (%qinvoke-method object nil "setAutoReset" arguments))

(defun |setAutoScrollMargin| (object &rest arguments)
  (%qinvoke-method object nil "setAutoScrollMargin" arguments))

(defun |setAutoScroll| (object &rest arguments)
  (%qinvoke-method object nil "setAutoScroll" arguments))

(defun |setAutoSipEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setAutoSipEnabled" arguments))

(defun |setAxis(QVector3D)| (object &rest arguments)
  (%qinvoke-method object nil "setAxis(QVector3D)" arguments))

(defun |setAxis(Qt::Axis)| (object &rest arguments)
  (%qinvoke-method object nil "setAxis(Qt::Axis)" arguments))

(defun |setAxis| (object &rest arguments)
  (%qinvoke-method object nil "setAxis" arguments))

(defun |setBackgroundBrush| (object &rest arguments)
  (%qinvoke-method object nil "setBackgroundBrush" arguments))

(defun |setBackgroundColor| (object &rest arguments)
  (%qinvoke-method object nil "setBackgroundColor" arguments))

(defun |setBackgroundMode| (object &rest arguments)
  (%qinvoke-method object nil "setBackgroundMode" arguments))

(defun |setBackgroundRole| (object &rest arguments)
  (%qinvoke-method object nil "setBackgroundRole" arguments))

(defun |setBackgroundVisible| (object &rest arguments)
  (%qinvoke-method object nil "setBackgroundVisible" arguments))

(defun |setBackground| (object &rest arguments)
  (%qinvoke-method object nil "setBackground" arguments))

(defun |setBar| (object &rest arguments)
  (%qinvoke-method object nil "setBar" arguments))

(defun |setBaseSize| (object &rest arguments)
  (%qinvoke-method object nil "setBaseSize" arguments))

(defun |setBatchSize| (object &rest arguments)
  (%qinvoke-method object nil "setBatchSize" arguments))

(defun |setBinMode| (object &rest arguments)
  (%qinvoke-method object nil "setBinMode" arguments))

(defun |setBit| (object &rest arguments)
  (%qinvoke-method object nil "setBit" arguments))

(defun |setBlockCharFormat| (object &rest arguments)
  (%qinvoke-method object nil "setBlockCharFormat" arguments))

(defun |setBlockFormat| (object &rest arguments)
  (%qinvoke-method object nil "setBlockFormat" arguments))

(defun |setBlueF| (object &rest arguments)
  (%qinvoke-method object nil "setBlueF" arguments))

(defun |setBlue| (object &rest arguments)
  (%qinvoke-method object nil "setBlue" arguments))

(defun |setBlurHints| (object &rest arguments)
  (%qinvoke-method object nil "setBlurHints" arguments))

(defun |setBlurRadius| (object &rest arguments)
  (%qinvoke-method object nil "setBlurRadius" arguments))

(defun |setBold| (object &rest arguments)
  (%qinvoke-method object nil "setBold" arguments))

(defun |setBorderBrush| (object &rest arguments)
  (%qinvoke-method object nil "setBorderBrush" arguments))

(defun |setBorderStyle| (object &rest arguments)
  (%qinvoke-method object nil "setBorderStyle" arguments))

(defun |setBorder| (object &rest arguments)
  (%qinvoke-method object nil "setBorder" arguments))

(defun |setBottomMargin| (object &rest arguments)
  (%qinvoke-method object nil "setBottomMargin" arguments))

(defun |setBottomPadding| (object &rest arguments)
  (%qinvoke-method object nil "setBottomPadding" arguments))

(defun |setBottom| (object &rest arguments)
  (%qinvoke-method object nil "setBottom" arguments))

(defun |setBoundingRect| (object &rest arguments)
  (%qinvoke-method object nil "setBoundingRect" arguments))

(defun |setBoundingRegionGranularity| (object &rest arguments)
  (%qinvoke-method object nil "setBoundingRegionGranularity" arguments))

(defun |setBrush(QBrush)| (object &rest arguments)
  (%qinvoke-method object nil "setBrush(QBrush)" arguments))

(defun |setBrush(Qt::BrushStyle)| (object &rest arguments)
  (%qinvoke-method object nil "setBrush(Qt::BrushStyle)" arguments))

(defun |setBrushOrigin(QPoint)| (object &rest arguments)
  (%qinvoke-method object nil "setBrushOrigin(QPoint)" arguments))

(defun |setBrushOrigin(QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "setBrushOrigin(QPointF)" arguments))

(defun |setBrushOrigin| (object &rest arguments)
  (%qinvoke-method object nil "setBrushOrigin" arguments))

(defun |setBrush| (object &rest arguments)
  (%qinvoke-method object nil "setBrush" arguments))

(defun |setBspTreeDepth| (object &rest arguments)
  (%qinvoke-method object nil "setBspTreeDepth" arguments))

(defun |setBuddy| (object &rest arguments)
  (%qinvoke-method object nil "setBuddy" arguments))

(defun |setBuffer| (object &rest arguments)
  (%qinvoke-method object nil "setBuffer" arguments))

(defun |setButtonSymbols| (object &rest arguments)
  (%qinvoke-method object nil "setButtonSymbols" arguments))

(defun |setButtonText| (object &rest arguments)
  (%qinvoke-method object nil "setButtonText" arguments))

(defun |setButton| (object &rest arguments)
  (%qinvoke-method object nil "setButton" arguments))

(defun |setCacheEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setCacheEnabled" arguments))

(defun |setCacheLimit.QPixmapCache| (&rest arguments)
  (%qinvoke-method "QPixmapCache" nil "setCacheLimit" arguments))

(defun |setCacheMode| (object &rest arguments)
  (%qinvoke-method object nil "setCacheMode" arguments))

(defun |setCaching| (object &rest arguments)
  (%qinvoke-method object nil "setCaching" arguments))

(defun |setCalendarPopup| (object &rest arguments)
  (%qinvoke-method object nil "setCalendarPopup" arguments))

(defun |setCalendarWidget| (object &rest arguments)
  (%qinvoke-method object nil "setCalendarWidget" arguments))

(defun |setCancelButtonText| (object &rest arguments)
  (%qinvoke-method object nil "setCancelButtonText" arguments))

(defun |setCancelButton| (object &rest arguments)
  (%qinvoke-method object nil "setCancelButton" arguments))

(defun |setCapStyle| (object &rest arguments)
  (%qinvoke-method object nil "setCapStyle" arguments))

(defun |setCapitalization| (object &rest arguments)
  (%qinvoke-method object nil "setCapitalization" arguments))

(defun |setCascadingSectionResizes| (object &rest arguments)
  (%qinvoke-method object nil "setCascadingSectionResizes" arguments))

(defun |setCaseSensitivity| (object &rest arguments)
  (%qinvoke-method object nil "setCaseSensitivity" arguments))

(defun |setCellPadding| (object &rest arguments)
  (%qinvoke-method object nil "setCellPadding" arguments))

(defun |setCellSpacing| (object &rest arguments)
  (%qinvoke-method object nil "setCellSpacing" arguments))

(defun |setCellWidget| (object &rest arguments)
  (%qinvoke-method object nil "setCellWidget" arguments))

(defun |setCenterButtons| (object &rest arguments)
  (%qinvoke-method object nil "setCenterButtons" arguments))

(defun |setCenterOnScroll| (object &rest arguments)
  (%qinvoke-method object nil "setCenterOnScroll" arguments))

(defun |setCenterPoint| (object &rest arguments)
  (%qinvoke-method object nil "setCenterPoint" arguments))

(defun |setCenter| (object &rest arguments)
  (%qinvoke-method object nil "setCenter" arguments))

(defun |setCentralWidget| (object &rest arguments)
  (%qinvoke-method object nil "setCentralWidget" arguments))

(defun |setChangeFlags| (object &rest arguments)
  (%qinvoke-method object nil "setChangeFlags" arguments))

(defun |setCharFormat| (object &rest arguments)
  (%qinvoke-method object nil "setCharFormat" arguments))

(defun |setCheckState| (object &rest arguments)
  (%qinvoke-method object nil "setCheckState" arguments))

(defun |setCheckable| (object &rest arguments)
  (%qinvoke-method object nil "setCheckable" arguments))

(defun |setChecked| (object &rest arguments)
  (%qinvoke-method object nil "setChecked" arguments))

(defun |setChildIndicatorPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setChildIndicatorPolicy" arguments))

(defun |setChildMode| (object &rest arguments)
  (%qinvoke-method object nil "setChildMode" arguments))

(defun |setChildrenCollapsible| (object &rest arguments)
  (%qinvoke-method object nil "setChildrenCollapsible" arguments))

(defun |setChild| (object &rest arguments)
  (%qinvoke-method object nil "setChild" arguments))

(defun |setCleanIcon| (object &rest arguments)
  (%qinvoke-method object nil "setCleanIcon" arguments))

(defun |setClean| (object &rest arguments)
  (%qinvoke-method object nil "setClean" arguments))

(defun |setClickable| (object &rest arguments)
  (%qinvoke-method object nil "setClickable" arguments))

(defun |setClipPath| (object &rest arguments)
  (%qinvoke-method object nil "setClipPath" arguments))

(defun |setClipRect(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "setClipRect(QRect)" arguments))

(defun |setClipRect(QRect...)| (object &rest arguments)
  (%qinvoke-method object nil "setClipRect(QRect...)" arguments))

(defun |setClipRect(QRectF)| (object &rest arguments)
  (%qinvoke-method object nil "setClipRect(QRectF)" arguments))

(defun |setClipRect(QRectF...)| (object &rest arguments)
  (%qinvoke-method object nil "setClipRect(QRectF...)" arguments))

(defun |setClipRect| (object &rest arguments)
  (%qinvoke-method object nil "setClipRect" arguments))

(defun |setClipRegion| (object &rest arguments)
  (%qinvoke-method object nil "setClipRegion" arguments))

(defun |setClipping| (object &rest arguments)
  (%qinvoke-method object nil "setClipping" arguments))

(defun |setCmykF| (object &rest arguments)
  (%qinvoke-method object nil "setCmykF" arguments))

(defun |setCmyk| (object &rest arguments)
  (%qinvoke-method object nil "setCmyk" arguments))

(defun |setCodecForCStrings.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "setCodecForCStrings" arguments))

(defun |setCodecForLocale.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "setCodecForLocale" arguments))

(defun |setCodecForTr.QTextCodec| (&rest arguments)
  (%qinvoke-method "QTextCodec" nil "setCodecForTr" arguments))

(defun |setCodec| (object &rest arguments)
  (%qinvoke-method object nil "setCodec" arguments))

(defun |setCollapsible| (object &rest arguments)
  (%qinvoke-method object nil "setCollapsible" arguments))

(defun |setCollateCopies| (object &rest arguments)
  (%qinvoke-method object nil "setCollateCopies" arguments))

(defun |setColor(QColor)| (object &rest arguments)
  (%qinvoke-method object nil "setColor(QColor)" arguments))

(defun |setColor(Qt::GlobalColor)| (object &rest arguments)
  (%qinvoke-method object nil "setColor(Qt::GlobalColor)" arguments))

(defun |setColorAt| (object &rest arguments)
  (%qinvoke-method object nil "setColorAt" arguments))

(defun |setColorCount| (object &rest arguments)
  (%qinvoke-method object nil "setColorCount" arguments))

(defun |setColorData| (object &rest arguments)
  (%qinvoke-method object nil "setColorData" arguments))

(defun |setColorGroup| (object &rest arguments)
  (%qinvoke-method object nil "setColorGroup" arguments))

(defun |setColorMode| (object &rest arguments)
  (%qinvoke-method object nil "setColorMode" arguments))

(defun |setColorSpec.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setColorSpec" arguments))

(defun |setColorTable| (object &rest arguments)
  (%qinvoke-method object nil "setColorTable" arguments))

(defun |setColor| (object &rest arguments)
  (%qinvoke-method object nil "setColor" arguments))

(defun |setColumnAlignment| (object &rest arguments)
  (%qinvoke-method object nil "setColumnAlignment" arguments))

(defun |setColumnCount| (object &rest arguments)
  (%qinvoke-method object nil "setColumnCount" arguments))

(defun |setColumnFixedWidth| (object &rest arguments)
  (%qinvoke-method object nil "setColumnFixedWidth" arguments))

(defun |setColumnHidden| (object &rest arguments)
  (%qinvoke-method object nil "setColumnHidden" arguments))

(defun |setColumnMaximumWidth| (object &rest arguments)
  (%qinvoke-method object nil "setColumnMaximumWidth" arguments))

(defun |setColumnMinimumWidth| (object &rest arguments)
  (%qinvoke-method object nil "setColumnMinimumWidth" arguments))

(defun |setColumnPreferredWidth| (object &rest arguments)
  (%qinvoke-method object nil "setColumnPreferredWidth" arguments))

(defun |setColumnSpacing| (object &rest arguments)
  (%qinvoke-method object nil "setColumnSpacing" arguments))

(defun |setColumnStretchFactor| (object &rest arguments)
  (%qinvoke-method object nil "setColumnStretchFactor" arguments))

(defun |setColumnStretch| (object &rest arguments)
  (%qinvoke-method object nil "setColumnStretch" arguments))

(defun |setColumnWidthConstraints| (object &rest arguments)
  (%qinvoke-method object nil "setColumnWidthConstraints" arguments))

(defun |setColumnWidths| (object &rest arguments)
  (%qinvoke-method object nil "setColumnWidths" arguments))

(defun |setColumnWidth| (object &rest arguments)
  (%qinvoke-method object nil "setColumnWidth" arguments))

(defun |setColumn| (object &rest arguments)
  (%qinvoke-method object nil "setColumn" arguments))

(defun |setComboBoxEditable| (object &rest arguments)
  (%qinvoke-method object nil "setComboBoxEditable" arguments))

(defun |setComboBoxItems| (object &rest arguments)
  (%qinvoke-method object nil "setComboBoxItems" arguments))

(defun |setCommitPage| (object &rest arguments)
  (%qinvoke-method object nil "setCommitPage" arguments))

(defun |setCommitString| (object &rest arguments)
  (%qinvoke-method object nil "setCommitString" arguments))

(defun |setCompleter| (object &rest arguments)
  (%qinvoke-method object nil "setCompleter" arguments))

(defun |setCompletionColumn| (object &rest arguments)
  (%qinvoke-method object nil "setCompletionColumn" arguments))

(defun |setCompletionMode| (object &rest arguments)
  (%qinvoke-method object nil "setCompletionMode" arguments))

(defun |setCompletionPrefix| (object &rest arguments)
  (%qinvoke-method object nil "setCompletionPrefix" arguments))

(defun |setCompletionRole| (object &rest arguments)
  (%qinvoke-method object nil "setCompletionRole" arguments))

(defun |setCompositionMode| (object &rest arguments)
  (%qinvoke-method object nil "setCompositionMode" arguments))

(defun |setConfirmOverwrite| (object &rest arguments)
  (%qinvoke-method object nil "setConfirmOverwrite" arguments))

(defun |setContentsMargins| (object &rest arguments)
  (%qinvoke-method object nil "setContentsMargins" arguments))

(defun |setContextMenuPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setContextMenuPolicy" arguments))

(defun |setContextMenu| (object &rest arguments)
  (%qinvoke-method object nil "setContextMenu" arguments))

(defun |setContext| (object &rest arguments)
  (%qinvoke-method object nil "setContext" arguments))

(defun |setControlType| (object &rest arguments)
  (%qinvoke-method object nil "setControlType" arguments))

(defun |setCoordinateMode| (object &rest arguments)
  (%qinvoke-method object nil "setCoordinateMode" arguments))

(defun |setCornerButtonEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setCornerButtonEnabled" arguments))

(defun |setCornerWidget| (object &rest arguments)
  (%qinvoke-method object nil "setCornerWidget" arguments))

(defun |setCorner| (object &rest arguments)
  (%qinvoke-method object nil "setCorner" arguments))

(defun |setCorrectionMode| (object &rest arguments)
  (%qinvoke-method object nil "setCorrectionMode" arguments))

(defun |setCosmetic| (object &rest arguments)
  (%qinvoke-method object nil "setCosmetic" arguments))

(defun |setCreator| (object &rest arguments)
  (%qinvoke-method object nil "setCreator" arguments))

(defun |setCurrent.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "setCurrent" arguments))

(defun |setCurrentBlockState| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentBlockState" arguments))

(defun |setCurrentBlockUserData| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentBlockUserData" arguments))

(defun |setCurrentCell| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentCell" arguments))

(defun |setCurrentCharFormat| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentCharFormat" arguments))

(defun |setCurrentColorGroup| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentColorGroup" arguments))

(defun |setCurrentColor| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentColor" arguments))

(defun |setCurrentFont| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentFont" arguments))

(defun |setCurrentIndex| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentIndex" arguments))

(defun |setCurrentItem| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentItem" arguments))

(defun |setCurrentModelIndex| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentModelIndex" arguments))

(defun |setCurrentPage| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentPage" arguments))

(defun |setCurrentRow| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentRow" arguments))

(defun |setCurrentSectionIndex| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentSectionIndex" arguments))

(defun |setCurrentSection| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentSection" arguments))

(defun |setCurrentTab| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentTab" arguments))

(defun |setCurrentTime| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentTime" arguments))

(defun |setCurrentWidget| (object &rest arguments)
  (%qinvoke-method object nil "setCurrentWidget" arguments))

(defun |setCursorFlashTime.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setCursorFlashTime" arguments))

(defun |setCursorPosition| (object &rest arguments)
  (%qinvoke-method object nil "setCursorPosition" arguments))

(defun |setCursorWidth| (object &rest arguments)
  (%qinvoke-method object nil "setCursorWidth" arguments))

(defun |setCursor| (object &rest arguments)
  (%qinvoke-method object nil "setCursor" arguments))

(defun |setCurveShape| (object &rest arguments)
  (%qinvoke-method object nil "setCurveShape" arguments))

(defun |setCurveThreshold| (object &rest arguments)
  (%qinvoke-method object nil "setCurveThreshold" arguments))

(defun |setCustomColor.QColorDialog| (&rest arguments)
  (%qinvoke-method "QColorDialog" nil "setCustomColor" arguments))

(defun |setDashOffset| (object &rest arguments)
  (%qinvoke-method object nil "setDashOffset" arguments))

(defun |setDashPattern(QVector<qreal>)| (object &rest arguments)
  (%qinvoke-method object nil "setDashPattern(QVector<qreal>)" arguments))

(defun |setDashPattern(Qt::PenStyle)| (object &rest arguments)
  (%qinvoke-method object nil "setDashPattern(Qt::PenStyle)" arguments))

(defun |setDashPattern| (object &rest arguments)
  (%qinvoke-method object nil "setDashPattern" arguments))

(defun |setData| (object &rest arguments)
  (%qinvoke-method object nil "setData" arguments))

(defun |setDateEditAcceptDelay| (object &rest arguments)
  (%qinvoke-method object nil "setDateEditAcceptDelay" arguments))

(defun |setDateEditEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setDateEditEnabled" arguments))

(defun |setDateRange| (object &rest arguments)
  (%qinvoke-method object nil "setDateRange" arguments))

(defun |setDateTextFormat| (object &rest arguments)
  (%qinvoke-method object nil "setDateTextFormat" arguments))

(defun |setDateTimeRange| (object &rest arguments)
  (%qinvoke-method object nil "setDateTimeRange" arguments))

(defun |setDateTime| (object &rest arguments)
  (%qinvoke-method object nil "setDateTime" arguments))

(defun |setDate| (object &rest arguments)
  (%qinvoke-method object nil "setDate" arguments))

(defun |setDecMode| (object &rest arguments)
  (%qinvoke-method object nil "setDecMode" arguments))

(defun |setDecimals| (object &rest arguments)
  (%qinvoke-method object nil "setDecimals" arguments))

(defun |setDecodingFunction.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "setDecodingFunction" arguments))

(defun |setDefault.QLocale| (&rest arguments)
  (%qinvoke-method "QLocale" nil "setDefault" arguments))

(defun |setDefaultAction| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultAction" arguments))

(defun |setDefaultAlignment| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultAlignment" arguments))

(defun |setDefaultButton(QMessageBox::StandardButton)| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultButton(QMessageBox::StandardButton)" arguments))

(defun |setDefaultButton(QPushButton*)| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultButton(QPushButton*)" arguments))

(defun |setDefaultButton| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultButton" arguments))

(defun |setDefaultDropAction| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultDropAction" arguments))

(defun |setDefaultFactory.QItemEditorFactory| (&rest arguments)
  (%qinvoke-method "QItemEditorFactory" nil "setDefaultFactory" arguments))

(defun |setDefaultFont| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultFont" arguments))

(defun |setDefaultFormat.QSettings| (&rest arguments)
  (%qinvoke-method "QSettings" nil "setDefaultFormat" arguments))

(defun |setDefaultProperty| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultProperty" arguments))

(defun |setDefaultSectionSize| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultSectionSize" arguments))

(defun |setDefaultState| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultState" arguments))

(defun |setDefaultStyleSheet| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultStyleSheet" arguments))

(defun |setDefaultSuffix| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultSuffix" arguments))

(defun |setDefaultTextColor| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultTextColor" arguments))

(defun |setDefaultTextOption| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultTextOption" arguments))

(defun |setDefaultUp| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultUp" arguments))

(defun |setDefaultWidget| (object &rest arguments)
  (%qinvoke-method object nil "setDefaultWidget" arguments))

(defun |setDefault| (object &rest arguments)
  (%qinvoke-method object nil "setDefault" arguments))

(defun |setDescription| (object &rest arguments)
  (%qinvoke-method object nil "setDescription" arguments))

(defun |setDesktopSettingsAware.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setDesktopSettingsAware" arguments))

(defun |setDetailedText| (object &rest arguments)
  (%qinvoke-method object nil "setDetailedText" arguments))

(defun |setDigitCount| (object &rest arguments)
  (%qinvoke-method object nil "setDigitCount" arguments))

(defun |setDirection| (object &rest arguments)
  (%qinvoke-method object nil "setDirection" arguments))

(defun |setDirectory(QDir)| (object &rest arguments)
  (%qinvoke-method object nil "setDirectory(QDir)" arguments))

(defun |setDirectory(QString)| (object &rest arguments)
  (%qinvoke-method object nil "setDirectory(QString)" arguments))

(defun |setDirectory| (object &rest arguments)
  (%qinvoke-method object nil "setDirectory" arguments))

(defun |setDirtyRegion| (object &rest arguments)
  (%qinvoke-method object nil "setDirtyRegion" arguments))

(defun |setDisabled| (object &rest arguments)
  (%qinvoke-method object nil "setDisabled" arguments))

(defun |setDiscardCommand| (object &rest arguments)
  (%qinvoke-method object nil "setDiscardCommand" arguments))

(defun |setDisplayFormat| (object &rest arguments)
  (%qinvoke-method object nil "setDisplayFormat" arguments))

(defun |setDocName| (object &rest arguments)
  (%qinvoke-method object nil "setDocName" arguments))

(defun |setDockNestingEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setDockNestingEnabled" arguments))

(defun |setDockOptions| (object &rest arguments)
  (%qinvoke-method object nil "setDockOptions" arguments))

(defun |setDocumentLayout| (object &rest arguments)
  (%qinvoke-method object nil "setDocumentLayout" arguments))

(defun |setDocumentMargin| (object &rest arguments)
  (%qinvoke-method object nil "setDocumentMargin" arguments))

(defun |setDocumentMode| (object &rest arguments)
  (%qinvoke-method object nil "setDocumentMode" arguments))

(defun |setDocumentTitle| (object &rest arguments)
  (%qinvoke-method object nil "setDocumentTitle" arguments))

(defun |setDocument| (object &rest arguments)
  (%qinvoke-method object nil "setDocument" arguments))

(defun |setDotsPerMeterX| (object &rest arguments)
  (%qinvoke-method object nil "setDotsPerMeterX" arguments))

(defun |setDotsPerMeterY| (object &rest arguments)
  (%qinvoke-method object nil "setDotsPerMeterY" arguments))

(defun |setDoubleClickInterval.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setDoubleClickInterval" arguments))

(defun |setDoubleDecimals| (object &rest arguments)
  (%qinvoke-method object nil "setDoubleDecimals" arguments))

(defun |setDoubleMaximum| (object &rest arguments)
  (%qinvoke-method object nil "setDoubleMaximum" arguments))

(defun |setDoubleMinimum| (object &rest arguments)
  (%qinvoke-method object nil "setDoubleMinimum" arguments))

(defun |setDoubleRange| (object &rest arguments)
  (%qinvoke-method object nil "setDoubleRange" arguments))

(defun |setDoubleSidedPrinting| (object &rest arguments)
  (%qinvoke-method object nil "setDoubleSidedPrinting" arguments))

(defun |setDoubleValue| (object &rest arguments)
  (%qinvoke-method object nil "setDoubleValue" arguments))

(defun |setDown| (object &rest arguments)
  (%qinvoke-method object nil "setDown" arguments))

(defun |setDragCursor| (object &rest arguments)
  (%qinvoke-method object nil "setDragCursor" arguments))

(defun |setDragDropMode| (object &rest arguments)
  (%qinvoke-method object nil "setDragDropMode" arguments))

(defun |setDragDropOverwriteMode| (object &rest arguments)
  (%qinvoke-method object nil "setDragDropOverwriteMode" arguments))

(defun |setDragEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setDragEnabled" arguments))

(defun |setDragMode| (object &rest arguments)
  (%qinvoke-method object nil "setDragMode" arguments))

(defun |setDrawBase| (object &rest arguments)
  (%qinvoke-method object nil "setDrawBase" arguments))

(defun |setDropAction| (object &rest arguments)
  (%qinvoke-method object nil "setDropAction" arguments))

(defun |setDropEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setDropEnabled" arguments))

(defun |setDropIndicatorShown| (object &rest arguments)
  (%qinvoke-method object nil "setDropIndicatorShown" arguments))

(defun |setDuplex| (object &rest arguments)
  (%qinvoke-method object nil "setDuplex" arguments))

(defun |setDuplicatesEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setDuplicatesEnabled" arguments))

(defun |setDuration| (object &rest arguments)
  (%qinvoke-method object nil "setDuration" arguments))

(defun |setDynamicSortFilter| (object &rest arguments)
  (%qinvoke-method object nil "setDynamicSortFilter" arguments))

(defun |setEasingCurve| (object &rest arguments)
  (%qinvoke-method object nil "setEasingCurve" arguments))

(defun |setEchoMode| (object &rest arguments)
  (%qinvoke-method object nil "setEchoMode" arguments))

(defun |setEditText| (object &rest arguments)
  (%qinvoke-method object nil "setEditText" arguments))

(defun |setEditTriggers| (object &rest arguments)
  (%qinvoke-method object nil "setEditTriggers" arguments))

(defun |setEditable| (object &rest arguments)
  (%qinvoke-method object nil "setEditable" arguments))

(defun |setEditorData| (object &rest arguments)
  (%qinvoke-method object nil "setEditorData" arguments))

(defun |setEffectEnabled.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setEffectEnabled" arguments))

(defun |setElementPositionAt| (object &rest arguments)
  (%qinvoke-method object nil "setElementPositionAt" arguments))

(defun |setElideMode| (object &rest arguments)
  (%qinvoke-method object nil "setElideMode" arguments))

(defun |setEmptyLabel| (object &rest arguments)
  (%qinvoke-method object nil "setEmptyLabel" arguments))

(defun |setEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setEnabled" arguments))

(defun |setEncodedFragment| (object &rest arguments)
  (%qinvoke-method object nil "setEncodedFragment" arguments))

(defun |setEncodedHost| (object &rest arguments)
  (%qinvoke-method object nil "setEncodedHost" arguments))

(defun |setEncodedPassword| (object &rest arguments)
  (%qinvoke-method object nil "setEncodedPassword" arguments))

(defun |setEncodedPath| (object &rest arguments)
  (%qinvoke-method object nil "setEncodedPath" arguments))

(defun |setEncodedQuery| (object &rest arguments)
  (%qinvoke-method object nil "setEncodedQuery" arguments))

(defun |setEncodedUrl| (object &rest arguments)
  (%qinvoke-method object nil "setEncodedUrl" arguments))

(defun |setEncodedUserName| (object &rest arguments)
  (%qinvoke-method object nil "setEncodedUserName" arguments))

(defun |setEncodingFunction.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "setEncodingFunction" arguments))

(defun |setEndFrame| (object &rest arguments)
  (%qinvoke-method object nil "setEndFrame" arguments))

(defun |setEndValue| (object &rest arguments)
  (%qinvoke-method object nil "setEndValue" arguments))

(defun |setErrorState| (object &rest arguments)
  (%qinvoke-method object nil "setErrorState" arguments))

(defun |setErrorString| (object &rest arguments)
  (%qinvoke-method object nil "setErrorString" arguments))

(defun |setEscapeButton(QAbstractButton*)| (object &rest arguments)
  (%qinvoke-method object nil "setEscapeButton(QAbstractButton*)" arguments))

(defun |setEscapeButton(QMessageBox::StandardButton)| (object &rest arguments)
  (%qinvoke-method object nil "setEscapeButton(QMessageBox::StandardButton)" arguments))

(defun |setEscapeButton| (object &rest arguments)
  (%qinvoke-method object nil "setEscapeButton" arguments))

(defun |setEventSource| (object &rest arguments)
  (%qinvoke-method object nil "setEventSource" arguments))

(defun |setEventType| (object &rest arguments)
  (%qinvoke-method object nil "setEventType" arguments))

(defun |setExclusive| (object &rest arguments)
  (%qinvoke-method object nil "setExclusive" arguments))

(defun |setExpanded| (object &rest arguments)
  (%qinvoke-method object nil "setExpanded" arguments))

(defun |setExpanding| (object &rest arguments)
  (%qinvoke-method object nil "setExpanding" arguments))

(defun |setExpandsOnDoubleClick| (object &rest arguments)
  (%qinvoke-method object nil "setExpandsOnDoubleClick" arguments))

(defun |setExtraSelections| (object &rest arguments)
  (%qinvoke-method object nil "setExtraSelections" arguments))

(defun |setFacingPagesViewMode| (object &rest arguments)
  (%qinvoke-method object nil "setFacingPagesViewMode" arguments))

(defun |setFallbacksEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setFallbacksEnabled" arguments))

(defun |setFamily| (object &rest arguments)
  (%qinvoke-method object nil "setFamily" arguments))

(defun |setFeatures| (object &rest arguments)
  (%qinvoke-method object nil "setFeatures" arguments))

(defun |setFieldGrowthPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setFieldGrowthPolicy" arguments))

(defun |setField| (object &rest arguments)
  (%qinvoke-method object nil "setField" arguments))

(defun |setFile(QFile)| (object &rest arguments)
  (%qinvoke-method object nil "setFile(QFile)" arguments))

(defun |setFile(QString)| (object &rest arguments)
  (%qinvoke-method object nil "setFile(QString)" arguments))

(defun |setFileMode| (object &rest arguments)
  (%qinvoke-method object nil "setFileMode" arguments))

(defun |setFileNameAndVersion(QString,QString)| (object &rest arguments)
  (%qinvoke-method object nil "setFileNameAndVersion(QString,QString)" arguments))

(defun |setFileNameAndVersion(QString,int)| (object &rest arguments)
  (%qinvoke-method object nil "setFileNameAndVersion(QString,int)" arguments))

(defun |setFileName| (object &rest arguments)
  (%qinvoke-method object nil "setFileName" arguments))

(defun |setFile| (object &rest arguments)
  (%qinvoke-method object nil "setFile" arguments))

(defun |setFillRule| (object &rest arguments)
  (%qinvoke-method object nil "setFillRule" arguments))

(defun |setFilterCaseSensitivity| (object &rest arguments)
  (%qinvoke-method object nil "setFilterCaseSensitivity" arguments))

(defun |setFilterFixedString| (object &rest arguments)
  (%qinvoke-method object nil "setFilterFixedString" arguments))

(defun |setFilterKeyColumn| (object &rest arguments)
  (%qinvoke-method object nil "setFilterKeyColumn" arguments))

(defun |setFilterRegExp(QRegExp)| (object &rest arguments)
  (%qinvoke-method object nil "setFilterRegExp(QRegExp)" arguments))

(defun |setFilterRegExp(QString)| (object &rest arguments)
  (%qinvoke-method object nil "setFilterRegExp(QString)" arguments))

(defun |setFilterRegExp| (object &rest arguments)
  (%qinvoke-method object nil "setFilterRegExp" arguments))

(defun |setFilterRole| (object &rest arguments)
  (%qinvoke-method object nil "setFilterRole" arguments))

(defun |setFilterWildcard| (object &rest arguments)
  (%qinvoke-method object nil "setFilterWildcard" arguments))

(defun |setFiltersChildEvents| (object &rest arguments)
  (%qinvoke-method object nil "setFiltersChildEvents" arguments))

(defun |setFilter| (object &rest arguments)
  (%qinvoke-method object nil "setFilter" arguments))

(defun |setFinalPage| (object &rest arguments)
  (%qinvoke-method object nil "setFinalPage" arguments))

(defun |setFinalStop| (object &rest arguments)
  (%qinvoke-method object nil "setFinalStop" arguments))

(defun |setFirstColumnSpanned| (object &rest arguments)
  (%qinvoke-method object nil "setFirstColumnSpanned" arguments))

(defun |setFirstDayOfWeek| (object &rest arguments)
  (%qinvoke-method object nil "setFirstDayOfWeek" arguments))

(defun |setFirstItemColumnSpanned| (object &rest arguments)
  (%qinvoke-method object nil "setFirstItemColumnSpanned" arguments))

(defun |setFixedHeight| (object &rest arguments)
  (%qinvoke-method object nil "setFixedHeight" arguments))

(defun |setFixedPitch| (object &rest arguments)
  (%qinvoke-method object nil "setFixedPitch" arguments))

(defun |setFixedSize| (object &rest arguments)
  (%qinvoke-method object nil "setFixedSize" arguments))

(defun |setFixedWidth| (object &rest arguments)
  (%qinvoke-method object nil "setFixedWidth" arguments))

(defun |setFlags| (object &rest arguments)
  (%qinvoke-method object nil "setFlags" arguments))

(defun |setFlag| (object &rest arguments)
  (%qinvoke-method object nil "setFlag" arguments))

(defun |setFlat| (object &rest arguments)
  (%qinvoke-method object nil "setFlat" arguments))

(defun |setFloatable| (object &rest arguments)
  (%qinvoke-method object nil "setFloatable" arguments))

(defun |setFloating| (object &rest arguments)
  (%qinvoke-method object nil "setFloating" arguments))

(defun |setFlow| (object &rest arguments)
  (%qinvoke-method object nil "setFlow" arguments))

(defun |setFocalPoint| (object &rest arguments)
  (%qinvoke-method object nil "setFocalPoint" arguments))

(defun |setFocusItem| (object &rest arguments)
  (%qinvoke-method object nil "setFocusItem" arguments))

(defun |setFocusPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setFocusPolicy" arguments))

(defun |setFocusProxy| (object &rest arguments)
  (%qinvoke-method object nil "setFocusProxy" arguments))

(defun |setFocusWidget| (object &rest arguments)
  (%qinvoke-method object nil "setFocusWidget" arguments))

(defun |setFocus| (object &rest arguments)
  (%qinvoke-method object nil "setFocus" arguments))

(defun |setFont.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setFont" arguments))

(defun |setFont.QToolTip| (&rest arguments)
  (%qinvoke-method "QToolTip" nil "setFont" arguments))

(defun |setFontCapitalization| (object &rest arguments)
  (%qinvoke-method object nil "setFontCapitalization" arguments))

(defun |setFontEmbeddingEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setFontEmbeddingEnabled" arguments))

(defun |setFontFamily| (object &rest arguments)
  (%qinvoke-method object nil "setFontFamily" arguments))

(defun |setFontFilters| (object &rest arguments)
  (%qinvoke-method object nil "setFontFilters" arguments))

(defun |setFontFixedPitch| (object &rest arguments)
  (%qinvoke-method object nil "setFontFixedPitch" arguments))

(defun |setFontItalic| (object &rest arguments)
  (%qinvoke-method object nil "setFontItalic" arguments))

(defun |setFontKerning| (object &rest arguments)
  (%qinvoke-method object nil "setFontKerning" arguments))

(defun |setFontLetterSpacing| (object &rest arguments)
  (%qinvoke-method object nil "setFontLetterSpacing" arguments))

(defun |setFontOverline| (object &rest arguments)
  (%qinvoke-method object nil "setFontOverline" arguments))

(defun |setFontPointSize| (object &rest arguments)
  (%qinvoke-method object nil "setFontPointSize" arguments))

(defun |setFontStrikeOut| (object &rest arguments)
  (%qinvoke-method object nil "setFontStrikeOut" arguments))

(defun |setFontStyleHint| (object &rest arguments)
  (%qinvoke-method object nil "setFontStyleHint" arguments))

(defun |setFontStyleStrategy| (object &rest arguments)
  (%qinvoke-method object nil "setFontStyleStrategy" arguments))

(defun |setFontUnderline| (object &rest arguments)
  (%qinvoke-method object nil "setFontUnderline" arguments))

(defun |setFontWeight| (object &rest arguments)
  (%qinvoke-method object nil "setFontWeight" arguments))

(defun |setFontWordSpacing| (object &rest arguments)
  (%qinvoke-method object nil "setFontWordSpacing" arguments))

(defun |setFont| (object &rest arguments)
  (%qinvoke-method object nil "setFont" arguments))

(defun |setForegroundBrush| (object &rest arguments)
  (%qinvoke-method object nil "setForegroundBrush" arguments))

(defun |setForegroundRole| (object &rest arguments)
  (%qinvoke-method object nil "setForegroundRole" arguments))

(defun |setForeground| (object &rest arguments)
  (%qinvoke-method object nil "setForeground" arguments))

(defun |setFormAlignment| (object &rest arguments)
  (%qinvoke-method object nil "setFormAlignment" arguments))

(defun |setFormat(int,int,QColor)| (object &rest arguments)
  (%qinvoke-method object nil "setFormat(int,int,QColor)" arguments))

(defun |setFormat(int,int,QFont)| (object &rest arguments)
  (%qinvoke-method object nil "setFormat(int,int,QFont)" arguments))

(defun |setFormat(int,int,QTextCharFormat)| (object &rest arguments)
  (%qinvoke-method object nil "setFormat(int,int,QTextCharFormat)" arguments))

(defun |setFormat| (object &rest arguments)
  (%qinvoke-method object nil "setFormat" arguments))

(defun |setFragment| (object &rest arguments)
  (%qinvoke-method object nil "setFragment" arguments))

(defun |setFrameFormat| (object &rest arguments)
  (%qinvoke-method object nil "setFrameFormat" arguments))

(defun |setFrameRange| (object &rest arguments)
  (%qinvoke-method object nil "setFrameRange" arguments))

(defun |setFrameRect| (object &rest arguments)
  (%qinvoke-method object nil "setFrameRect" arguments))

(defun |setFrameShadow| (object &rest arguments)
  (%qinvoke-method object nil "setFrameShadow" arguments))

(defun |setFrameShape| (object &rest arguments)
  (%qinvoke-method object nil "setFrameShape" arguments))

(defun |setFrameStyle| (object &rest arguments)
  (%qinvoke-method object nil "setFrameStyle" arguments))

(defun |setFrame| (object &rest arguments)
  (%qinvoke-method object nil "setFrame" arguments))

(defun |setFromTo| (object &rest arguments)
  (%qinvoke-method object nil "setFromTo" arguments))

(defun |setFullPage| (object &rest arguments)
  (%qinvoke-method object nil "setFullPage" arguments))

(defun |setGeometry| (object &rest arguments)
  (%qinvoke-method object nil "setGeometry" arguments))

(defun |setGestureCancelPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setGestureCancelPolicy" arguments))

(defun |setGlobalRestorePolicy| (object &rest arguments)
  (%qinvoke-method object nil "setGlobalRestorePolicy" arguments))

(defun |setGlobalStrut.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setGlobalStrut" arguments))

(defun |setGraphicsEffect| (object &rest arguments)
  (%qinvoke-method object nil "setGraphicsEffect" arguments))

(defun |setGraphicsItem| (object &rest arguments)
  (%qinvoke-method object nil "setGraphicsItem" arguments))

(defun |setGraphicsSystem.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setGraphicsSystem" arguments))

(defun |setGreenF| (object &rest arguments)
  (%qinvoke-method object nil "setGreenF" arguments))

(defun |setGreen| (object &rest arguments)
  (%qinvoke-method object nil "setGreen" arguments))

(defun |setGridSize| (object &rest arguments)
  (%qinvoke-method object nil "setGridSize" arguments))

(defun |setGridStyle| (object &rest arguments)
  (%qinvoke-method object nil "setGridStyle" arguments))

(defun |setGridVisible| (object &rest arguments)
  (%qinvoke-method object nil "setGridVisible" arguments))

(defun |setGroup| (object &rest arguments)
  (%qinvoke-method object nil "setGroup" arguments))

(defun |setHMS| (object &rest arguments)
  (%qinvoke-method object nil "setHMS" arguments))

(defun |setHeaderData| (object &rest arguments)
  (%qinvoke-method object nil "setHeaderData" arguments))

(defun |setHeaderHidden| (object &rest arguments)
  (%qinvoke-method object nil "setHeaderHidden" arguments))

(defun |setHeaderItem| (object &rest arguments)
  (%qinvoke-method object nil "setHeaderItem" arguments))

(defun |setHeaderLabels| (object &rest arguments)
  (%qinvoke-method object nil "setHeaderLabels" arguments))

(defun |setHeaderLabel| (object &rest arguments)
  (%qinvoke-method object nil "setHeaderLabel" arguments))

(defun |setHeaderRowCount| (object &rest arguments)
  (%qinvoke-method object nil "setHeaderRowCount" arguments))

(defun |setHeaderTextFormat| (object &rest arguments)
  (%qinvoke-method object nil "setHeaderTextFormat" arguments))

(defun |setHeader| (object &rest arguments)
  (%qinvoke-method object nil "setHeader" arguments))

(defun |setHeight(QTextLength)| (object &rest arguments)
  (%qinvoke-method object nil "setHeight(QTextLength)" arguments))

(defun |setHeight(qreal)| (object &rest arguments)
  (%qinvoke-method object nil "setHeight(qreal)" arguments))

(defun |setHeightForWidth| (object &rest arguments)
  (%qinvoke-method object nil "setHeightForWidth" arguments))

(defun |setHeight| (object &rest arguments)
  (%qinvoke-method object nil "setHeight" arguments))

(defun |setHelp| (object &rest arguments)
  (%qinvoke-method object nil "setHelp" arguments))

(defun |setHexMode| (object &rest arguments)
  (%qinvoke-method object nil "setHexMode" arguments))

(defun |setHidden| (object &rest arguments)
  (%qinvoke-method object nil "setHidden" arguments))

(defun |setHighlightSections| (object &rest arguments)
  (%qinvoke-method object nil "setHighlightSections" arguments))

(defun |setHistoryType| (object &rest arguments)
  (%qinvoke-method object nil "setHistoryType" arguments))

(defun |setHistory| (object &rest arguments)
  (%qinvoke-method object nil "setHistory" arguments))

(defun |setHitTestPath| (object &rest arguments)
  (%qinvoke-method object nil "setHitTestPath" arguments))

(defun |setHorizontalHeaderFormat| (object &rest arguments)
  (%qinvoke-method object nil "setHorizontalHeaderFormat" arguments))

(defun |setHorizontalHeaderItem| (object &rest arguments)
  (%qinvoke-method object nil "setHorizontalHeaderItem" arguments))

(defun |setHorizontalHeaderLabels| (object &rest arguments)
  (%qinvoke-method object nil "setHorizontalHeaderLabels" arguments))

(defun |setHorizontalHeader| (object &rest arguments)
  (%qinvoke-method object nil "setHorizontalHeader" arguments))

(defun |setHorizontalPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setHorizontalPolicy" arguments))

(defun |setHorizontalScrollBarPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setHorizontalScrollBarPolicy" arguments))

(defun |setHorizontalScrollBar| (object &rest arguments)
  (%qinvoke-method object nil "setHorizontalScrollBar" arguments))

(defun |setHorizontalScrollMode| (object &rest arguments)
  (%qinvoke-method object nil "setHorizontalScrollMode" arguments))

(defun |setHorizontalSpacing| (object &rest arguments)
  (%qinvoke-method object nil "setHorizontalSpacing" arguments))

(defun |setHorizontalStretch| (object &rest arguments)
  (%qinvoke-method object nil "setHorizontalStretch" arguments))

(defun |setHost| (object &rest arguments)
  (%qinvoke-method object nil "setHost" arguments))

(defun |setHotSpot| (object &rest arguments)
  (%qinvoke-method object nil "setHotSpot" arguments))

(defun |setHslF| (object &rest arguments)
  (%qinvoke-method object nil "setHslF" arguments))

(defun |setHsl| (object &rest arguments)
  (%qinvoke-method object nil "setHsl" arguments))

(defun |setHsvF| (object &rest arguments)
  (%qinvoke-method object nil "setHsvF" arguments))

(defun |setHsv| (object &rest arguments)
  (%qinvoke-method object nil "setHsv" arguments))

(defun |setHtml| (object &rest arguments)
  (%qinvoke-method object nil "setHtml" arguments))

(defun |setIconPixmap| (object &rest arguments)
  (%qinvoke-method object nil "setIconPixmap" arguments))

(defun |setIconProvider| (object &rest arguments)
  (%qinvoke-method object nil "setIconProvider" arguments))

(defun |setIconSize| (object &rest arguments)
  (%qinvoke-method object nil "setIconSize" arguments))

(defun |setIconText| (object &rest arguments)
  (%qinvoke-method object nil "setIconText" arguments))

(defun |setIconVisibleInMenu| (object &rest arguments)
  (%qinvoke-method object nil "setIconVisibleInMenu" arguments))

(defun |setIcon| (object &rest arguments)
  (%qinvoke-method object nil "setIcon" arguments))

(defun |setIdnWhitelist.QUrl| (&rest arguments)
  (%qinvoke-method "QUrl" nil "setIdnWhitelist" arguments))

(defun |setId| (object &rest arguments)
  (%qinvoke-method object nil "setId" arguments))

(defun |setImageData| (object &rest arguments)
  (%qinvoke-method object nil "setImageData" arguments))

(defun |setImage| (object &rest arguments)
  (%qinvoke-method object nil "setImage" arguments))

(defun |setIndentWidth| (object &rest arguments)
  (%qinvoke-method object nil "setIndentWidth" arguments))

(defun |setIndentation| (object &rest arguments)
  (%qinvoke-method object nil "setIndentation" arguments))

(defun |setIndent| (object &rest arguments)
  (%qinvoke-method object nil "setIndent" arguments))

(defun |setIndexWidget| (object &rest arguments)
  (%qinvoke-method object nil "setIndexWidget" arguments))

(defun |setIndex| (object &rest arguments)
  (%qinvoke-method object nil "setIndex" arguments))

(defun |setInformativeText| (object &rest arguments)
  (%qinvoke-method object nil "setInformativeText" arguments))

(defun |setIniCodec(QTextCodec*)| (object &rest arguments)
  (%qinvoke-method object nil "setIniCodec(QTextCodec*)" arguments))

(defun |setIniCodec(const char*)| (object &rest arguments)
  (%qinvoke-method object nil "setIniCodec(const char*)" arguments))

(defun |setIniCodec| (object &rest arguments)
  (%qinvoke-method object nil "setIniCodec" arguments))

(defun |setInitialState| (object &rest arguments)
  (%qinvoke-method object nil "setInitialState" arguments))

(defun |setInputContext| (object &rest arguments)
  (%qinvoke-method object nil "setInputContext" arguments))

(defun |setInputMask| (object &rest arguments)
  (%qinvoke-method object nil "setInputMask" arguments))

(defun |setInputMethodHints| (object &rest arguments)
  (%qinvoke-method object nil "setInputMethodHints" arguments))

(defun |setInputMode| (object &rest arguments)
  (%qinvoke-method object nil "setInputMode" arguments))

(defun |setInsertPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setInsertPolicy" arguments))

(defun |setIntMaximum| (object &rest arguments)
  (%qinvoke-method object nil "setIntMaximum" arguments))

(defun |setIntMinimum| (object &rest arguments)
  (%qinvoke-method object nil "setIntMinimum" arguments))

(defun |setIntRange| (object &rest arguments)
  (%qinvoke-method object nil "setIntRange" arguments))

(defun |setIntStep| (object &rest arguments)
  (%qinvoke-method object nil "setIntStep" arguments))

(defun |setIntValue| (object &rest arguments)
  (%qinvoke-method object nil "setIntValue" arguments))

(defun |setInteractive| (object &rest arguments)
  (%qinvoke-method object nil "setInteractive" arguments))

(defun |setInterval| (object &rest arguments)
  (%qinvoke-method object nil "setInterval" arguments))

(defun |setInvertedAppearance| (object &rest arguments)
  (%qinvoke-method object nil "setInvertedAppearance" arguments))

(defun |setInvertedControls| (object &rest arguments)
  (%qinvoke-method object nil "setInvertedControls" arguments))

(defun |setItalic| (object &rest arguments)
  (%qinvoke-method object nil "setItalic" arguments))

(defun |setItemData| (object &rest arguments)
  (%qinvoke-method object nil "setItemData" arguments))

(defun |setItemDelegateForColumn| (object &rest arguments)
  (%qinvoke-method object nil "setItemDelegateForColumn" arguments))

(defun |setItemDelegateForRow| (object &rest arguments)
  (%qinvoke-method object nil "setItemDelegateForRow" arguments))

(defun |setItemDelegate| (object &rest arguments)
  (%qinvoke-method object nil "setItemDelegate" arguments))

(defun |setItemEditorFactory| (object &rest arguments)
  (%qinvoke-method object nil "setItemEditorFactory" arguments))

(defun |setItemEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setItemEnabled" arguments))

(defun |setItemIcon| (object &rest arguments)
  (%qinvoke-method object nil "setItemIcon" arguments))

(defun |setItemIndexMethod| (object &rest arguments)
  (%qinvoke-method object nil "setItemIndexMethod" arguments))

(defun |setItemPrototype| (object &rest arguments)
  (%qinvoke-method object nil "setItemPrototype" arguments))

(defun |setItemSpacing| (object &rest arguments)
  (%qinvoke-method object nil "setItemSpacing" arguments))

(defun |setItemText| (object &rest arguments)
  (%qinvoke-method object nil "setItemText" arguments))

(defun |setItemToolTip| (object &rest arguments)
  (%qinvoke-method object nil "setItemToolTip" arguments))

(defun |setItemWidget| (object &rest arguments)
  (%qinvoke-method object nil "setItemWidget" arguments))

(defun |setItemsExpandable| (object &rest arguments)
  (%qinvoke-method object nil "setItemsExpandable" arguments))

(defun |setItem| (object &rest arguments)
  (%qinvoke-method object nil "setItem" arguments))

(defun |setJoinStyle| (object &rest arguments)
  (%qinvoke-method object nil "setJoinStyle" arguments))

(defun |setKerning| (object &rest arguments)
  (%qinvoke-method object nil "setKerning" arguments))

(defun |setKeyboardInputInterval.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setKeyboardInputInterval" arguments))

(defun |setKeyboardPageStep| (object &rest arguments)
  (%qinvoke-method object nil "setKeyboardPageStep" arguments))

(defun |setKeyboardSingleStep| (object &rest arguments)
  (%qinvoke-method object nil "setKeyboardSingleStep" arguments))

(defun |setKeyboardTracking| (object &rest arguments)
  (%qinvoke-method object nil "setKeyboardTracking" arguments))

(defun |setKey| (object &rest arguments)
  (%qinvoke-method object nil "setKey" arguments))

(defun |setLabelAlignment| (object &rest arguments)
  (%qinvoke-method object nil "setLabelAlignment" arguments))

(defun |setLabelText| (object &rest arguments)
  (%qinvoke-method object nil "setLabelText" arguments))

(defun |setLabel| (object &rest arguments)
  (%qinvoke-method object nil "setLabel" arguments))

(defun |setLandscapeOrientation| (object &rest arguments)
  (%qinvoke-method object nil "setLandscapeOrientation" arguments))

(defun |setLastCenterPoint| (object &rest arguments)
  (%qinvoke-method object nil "setLastCenterPoint" arguments))

(defun |setLastOffset| (object &rest arguments)
  (%qinvoke-method object nil "setLastOffset" arguments))

(defun |setLastRotationAngle| (object &rest arguments)
  (%qinvoke-method object nil "setLastRotationAngle" arguments))

(defun |setLastScaleFactor| (object &rest arguments)
  (%qinvoke-method object nil "setLastScaleFactor" arguments))

(defun |setLayoutDirection.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setLayoutDirection" arguments))

(defun |setLayoutDirection| (object &rest arguments)
  (%qinvoke-method object nil "setLayoutDirection" arguments))

(defun |setLayoutMode| (object &rest arguments)
  (%qinvoke-method object nil "setLayoutMode" arguments))

(defun |setLayout| (object &rest arguments)
  (%qinvoke-method object nil "setLayout" arguments))

(defun |setLazyChildCount| (object &rest arguments)
  (%qinvoke-method object nil "setLazyChildCount" arguments))

(defun |setLeadingIncluded| (object &rest arguments)
  (%qinvoke-method object nil "setLeadingIncluded" arguments))

(defun |setLeftMargin| (object &rest arguments)
  (%qinvoke-method object nil "setLeftMargin" arguments))

(defun |setLeftPadding| (object &rest arguments)
  (%qinvoke-method object nil "setLeftPadding" arguments))

(defun |setLeft| (object &rest arguments)
  (%qinvoke-method object nil "setLeft" arguments))

(defun |setLetterSpacing| (object &rest arguments)
  (%qinvoke-method object nil "setLetterSpacing" arguments))

(defun |setLibraryPaths.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "setLibraryPaths" arguments))

(defun |setLineCount| (object &rest arguments)
  (%qinvoke-method object nil "setLineCount" arguments))

(defun |setLineEdit| (object &rest arguments)
  (%qinvoke-method object nil "setLineEdit" arguments))

(defun |setLineWidth| (object &rest arguments)
  (%qinvoke-method object nil "setLineWidth" arguments))

(defun |setLineWrapColumnOrWidth| (object &rest arguments)
  (%qinvoke-method object nil "setLineWrapColumnOrWidth" arguments))

(defun |setLineWrapMode| (object &rest arguments)
  (%qinvoke-method object nil "setLineWrapMode" arguments))

(defun |setLine| (object &rest arguments)
  (%qinvoke-method object nil "setLine" arguments))

(defun |setLoadHints| (object &rest arguments)
  (%qinvoke-method object nil "setLoadHints" arguments))

(defun |setLocale| (object &rest arguments)
  (%qinvoke-method object nil "setLocale" arguments))

(defun |setLoopCount| (object &rest arguments)
  (%qinvoke-method object nil "setLoopCount" arguments))

(defun |setLoops| (object &rest arguments)
  (%qinvoke-method object nil "setLoops" arguments))

(defun |setManagerProperty(QString,QString)| (object &rest arguments)
  (%qinvoke-method object nil "setManagerProperty(QString,QString)" arguments))

(defun |setManagerProperty(QString,QStringList)| (object &rest arguments)
  (%qinvoke-method object nil "setManagerProperty(QString,QStringList)" arguments))

(defun |setMargin| (object &rest arguments)
  (%qinvoke-method object nil "setMargin" arguments))

(defun |setMask(QBitmap)| (object &rest arguments)
  (%qinvoke-method object nil "setMask(QBitmap)" arguments))

(defun |setMask(QRegion)| (object &rest arguments)
  (%qinvoke-method object nil "setMask(QRegion)" arguments))

(defun |setMask| (object &rest arguments)
  (%qinvoke-method object nil "setMask" arguments))

(defun |setMatrix| (object &rest arguments)
  (%qinvoke-method object nil "setMatrix" arguments))

(defun |setMaxCount| (object &rest arguments)
  (%qinvoke-method object nil "setMaxCount" arguments))

(defun |setMaxLength| (object &rest arguments)
  (%qinvoke-method object nil "setMaxLength" arguments))

(defun |setMaxVisibleItems| (object &rest arguments)
  (%qinvoke-method object nil "setMaxVisibleItems" arguments))

(defun |setMaximumBlockCount| (object &rest arguments)
  (%qinvoke-method object nil "setMaximumBlockCount" arguments))

(defun |setMaximumDateTime| (object &rest arguments)
  (%qinvoke-method object nil "setMaximumDateTime" arguments))

(defun |setMaximumDate| (object &rest arguments)
  (%qinvoke-method object nil "setMaximumDate" arguments))

(defun |setMaximumHeight| (object &rest arguments)
  (%qinvoke-method object nil "setMaximumHeight" arguments))

(defun |setMaximumSize| (object &rest arguments)
  (%qinvoke-method object nil "setMaximumSize" arguments))

(defun |setMaximumTime| (object &rest arguments)
  (%qinvoke-method object nil "setMaximumTime" arguments))

(defun |setMaximumWidth| (object &rest arguments)
  (%qinvoke-method object nil "setMaximumWidth" arguments))

(defun |setMaximum| (object &rest arguments)
  (%qinvoke-method object nil "setMaximum" arguments))

(defun |setMenuBar| (object &rest arguments)
  (%qinvoke-method object nil "setMenuBar" arguments))

(defun |setMenuRole| (object &rest arguments)
  (%qinvoke-method object nil "setMenuRole" arguments))

(defun |setMenuWidget| (object &rest arguments)
  (%qinvoke-method object nil "setMenuWidget" arguments))

(defun |setMenu| (object &rest arguments)
  (%qinvoke-method object nil "setMenu" arguments))

(defun |setMetaInformation| (object &rest arguments)
  (%qinvoke-method object nil "setMetaInformation" arguments))

(defun |setMidLineWidth| (object &rest arguments)
  (%qinvoke-method object nil "setMidLineWidth" arguments))

(defun |setMimeData| (object &rest arguments)
  (%qinvoke-method object nil "setMimeData" arguments))

(defun |setMinMax| (object &rest arguments)
  (%qinvoke-method object nil "setMinMax" arguments))

(defun |setMinimal| (object &rest arguments)
  (%qinvoke-method object nil "setMinimal" arguments))

(defun |setMinimumContentsLength| (object &rest arguments)
  (%qinvoke-method object nil "setMinimumContentsLength" arguments))

(defun |setMinimumDateTime| (object &rest arguments)
  (%qinvoke-method object nil "setMinimumDateTime" arguments))

(defun |setMinimumDate| (object &rest arguments)
  (%qinvoke-method object nil "setMinimumDate" arguments))

(defun |setMinimumDuration| (object &rest arguments)
  (%qinvoke-method object nil "setMinimumDuration" arguments))

(defun |setMinimumHeight| (object &rest arguments)
  (%qinvoke-method object nil "setMinimumHeight" arguments))

(defun |setMinimumSectionSize| (object &rest arguments)
  (%qinvoke-method object nil "setMinimumSectionSize" arguments))

(defun |setMinimumSize| (object &rest arguments)
  (%qinvoke-method object nil "setMinimumSize" arguments))

(defun |setMinimumTime| (object &rest arguments)
  (%qinvoke-method object nil "setMinimumTime" arguments))

(defun |setMinimumWidth| (object &rest arguments)
  (%qinvoke-method object nil "setMinimumWidth" arguments))

(defun |setMinimum| (object &rest arguments)
  (%qinvoke-method object nil "setMinimum" arguments))

(defun |setMiterLimit| (object &rest arguments)
  (%qinvoke-method object nil "setMiterLimit" arguments))

(defun |setModal| (object &rest arguments)
  (%qinvoke-method object nil "setModal" arguments))

(defun |setModelColumn| (object &rest arguments)
  (%qinvoke-method object nil "setModelColumn" arguments))

(defun |setModelData| (object &rest arguments)
  (%qinvoke-method object nil "setModelData" arguments))

(defun |setModelSorting| (object &rest arguments)
  (%qinvoke-method object nil "setModelSorting" arguments))

(defun |setModel| (object &rest arguments)
  (%qinvoke-method object nil "setModel" arguments))

(defun |setMode| (object &rest arguments)
  (%qinvoke-method object nil "setMode" arguments))

(defun |setModified| (object &rest arguments)
  (%qinvoke-method object nil "setModified" arguments))

(defun |setModifierMask| (object &rest arguments)
  (%qinvoke-method object nil "setModifierMask" arguments))

(defun |setMouseTracking| (object &rest arguments)
  (%qinvoke-method object nil "setMouseTracking" arguments))

(defun |setMovable| (object &rest arguments)
  (%qinvoke-method object nil "setMovable" arguments))

(defun |setMovement| (object &rest arguments)
  (%qinvoke-method object nil "setMovement" arguments))

(defun |setMovie| (object &rest arguments)
  (%qinvoke-method object nil "setMovie" arguments))

(defun |setNameFilterDetailsVisible| (object &rest arguments)
  (%qinvoke-method object nil "setNameFilterDetailsVisible" arguments))

(defun |setNameFilterDisables| (object &rest arguments)
  (%qinvoke-method object nil "setNameFilterDisables" arguments))

(defun |setNameFilters| (object &rest arguments)
  (%qinvoke-method object nil "setNameFilters" arguments))

(defun |setNameFilter| (object &rest arguments)
  (%qinvoke-method object nil "setNameFilter" arguments))

(defun |setNamedColor| (object &rest arguments)
  (%qinvoke-method object nil "setNamedColor" arguments))

(defun |setName| (object &rest arguments)
  (%qinvoke-method object nil "setName" arguments))

(defun |setNativeMenuBar| (object &rest arguments)
  (%qinvoke-method object nil "setNativeMenuBar" arguments))

(defun |setNavigationBarVisible| (object &rest arguments)
  (%qinvoke-method object nil "setNavigationBarVisible" arguments))

(defun |setNonBreakableLines| (object &rest arguments)
  (%qinvoke-method object nil "setNonBreakableLines" arguments))

(defun |setNotation| (object &rest arguments)
  (%qinvoke-method object nil "setNotation" arguments))

(defun |setNotchTarget| (object &rest arguments)
  (%qinvoke-method object nil "setNotchTarget" arguments))

(defun |setNotchesVisible| (object &rest arguments)
  (%qinvoke-method object nil "setNotchesVisible" arguments))

(defun |setNum(double)| (object &rest arguments)
  (%qinvoke-method object nil "setNum(double)" arguments))

(defun |setNum(int)| (object &rest arguments)
  (%qinvoke-method object nil "setNum(int)" arguments))

(defun |setNumColumns| (object &rest arguments)
  (%qinvoke-method object nil "setNumColumns" arguments))

(defun |setNumCopies| (object &rest arguments)
  (%qinvoke-method object nil "setNumCopies" arguments))

(defun |setNumberOptions| (object &rest arguments)
  (%qinvoke-method object nil "setNumberOptions" arguments))

(defun |setNum| (object &rest arguments)
  (%qinvoke-method object nil "setNum" arguments))

(defun |setObjectIndex| (object &rest arguments)
  (%qinvoke-method object nil "setObjectIndex" arguments))

(defun |setObjectName| (object &rest arguments)
  (%qinvoke-method object nil "setObjectName" arguments))

(defun |setObjectType| (object &rest arguments)
  (%qinvoke-method object nil "setObjectType" arguments))

(defun |setOctMode| (object &rest arguments)
  (%qinvoke-method object nil "setOctMode" arguments))

(defun |setOffset(QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "setOffset(QPointF)" arguments))

(defun |setOffset(qreal)| (object &rest arguments)
  (%qinvoke-method object nil "setOffset(qreal)" arguments))

(defun |setOffsetToLastSection| (object &rest arguments)
  (%qinvoke-method object nil "setOffsetToLastSection" arguments))

(defun |setOffsetToSectionPosition| (object &rest arguments)
  (%qinvoke-method object nil "setOffsetToSectionPosition" arguments))

(defun |setOffset| (object &rest arguments)
  (%qinvoke-method object nil "setOffset" arguments))

(defun |setOkButtonText| (object &rest arguments)
  (%qinvoke-method object nil "setOkButtonText" arguments))

(defun |setOn| (object &rest arguments)
  (%qinvoke-method object nil "setOn" arguments))

(defun |setOpacityMask| (object &rest arguments)
  (%qinvoke-method object nil "setOpacityMask" arguments))

(defun |setOpacity| (object &rest arguments)
  (%qinvoke-method object nil "setOpacity" arguments))

(defun |setOpaqueResize| (object &rest arguments)
  (%qinvoke-method object nil "setOpaqueResize" arguments))

(defun |setOpenExternalLinks| (object &rest arguments)
  (%qinvoke-method object nil "setOpenExternalLinks" arguments))

(defun |setOpenLinks| (object &rest arguments)
  (%qinvoke-method object nil "setOpenLinks" arguments))

(defun |setOpenMode| (object &rest arguments)
  (%qinvoke-method object nil "setOpenMode" arguments))

(defun |setOptimizationFlags| (object &rest arguments)
  (%qinvoke-method object nil "setOptimizationFlags" arguments))

(defun |setOptimizationFlag| (object &rest arguments)
  (%qinvoke-method object nil "setOptimizationFlag" arguments))

(defun |setOptionTabs| (object &rest arguments)
  (%qinvoke-method object nil "setOptionTabs" arguments))

(defun |setOptions| (object &rest arguments)
  (%qinvoke-method object nil "setOptions" arguments))

(defun |setOption| (object &rest arguments)
  (%qinvoke-method object nil "setOption" arguments))

(defun |setOrganizationDomain.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "setOrganizationDomain" arguments))

(defun |setOrganizationName.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "setOrganizationName" arguments))

(defun |setOrientation| (object &rest arguments)
  (%qinvoke-method object nil "setOrientation" arguments))

(defun |setOriginCorner| (object &rest arguments)
  (%qinvoke-method object nil "setOriginCorner" arguments))

(defun |setOrigin| (object &rest arguments)
  (%qinvoke-method object nil "setOrigin" arguments))

(defun |setOutputFileName| (object &rest arguments)
  (%qinvoke-method object nil "setOutputFileName" arguments))

(defun |setOutputFormat| (object &rest arguments)
  (%qinvoke-method object nil "setOutputFormat" arguments))

(defun |setOverline| (object &rest arguments)
  (%qinvoke-method object nil "setOverline" arguments))

(defun |setOverrideCursor.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setOverrideCursor" arguments))

(defun |setOvershoot| (object &rest arguments)
  (%qinvoke-method object nil "setOvershoot" arguments))

(defun |setOverwriteMode| (object &rest arguments)
  (%qinvoke-method object nil "setOverwriteMode" arguments))

(defun |setOwnedByLayout| (object &rest arguments)
  (%qinvoke-method object nil "setOwnedByLayout" arguments))

(defun |setPadding| (object &rest arguments)
  (%qinvoke-method object nil "setPadding" arguments))

(defun |setPageBreakPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setPageBreakPolicy" arguments))

(defun |setPageMargins| (object &rest arguments)
  (%qinvoke-method object nil "setPageMargins" arguments))

(defun |setPageOrder| (object &rest arguments)
  (%qinvoke-method object nil "setPageOrder" arguments))

(defun |setPageSize| (object &rest arguments)
  (%qinvoke-method object nil "setPageSize" arguments))

(defun |setPageStep| (object &rest arguments)
  (%qinvoke-method object nil "setPageStep" arguments))

(defun |setPage| (object &rest arguments)
  (%qinvoke-method object nil "setPage" arguments))

(defun |setPaintDevice| (object &rest arguments)
  (%qinvoke-method object nil "setPaintDevice" arguments))

(defun |setPalette.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setPalette" arguments))

(defun |setPalette.QToolTip| (&rest arguments)
  (%qinvoke-method "QToolTip" nil "setPalette" arguments))

(defun |setPalette| (object &rest arguments)
  (%qinvoke-method object nil "setPalette" arguments))

(defun |setPanelModality| (object &rest arguments)
  (%qinvoke-method object nil "setPanelModality" arguments))

(defun |setPaperSize| (object &rest arguments)
  (%qinvoke-method object nil "setPaperSize" arguments))

(defun |setPaperSource| (object &rest arguments)
  (%qinvoke-method object nil "setPaperSource" arguments))

(defun |setParentItem| (object &rest arguments)
  (%qinvoke-method object nil "setParentItem" arguments))

(defun |setParentLayoutItem| (object &rest arguments)
  (%qinvoke-method object nil "setParentLayoutItem" arguments))

(defun |setParent| (object &rest arguments)
  (%qinvoke-method object nil "setParent" arguments))

(defun |setPassword| (object &rest arguments)
  (%qinvoke-method object nil "setPassword" arguments))

(defun |setPath.QSettings| (&rest arguments)
  (%qinvoke-method "QSettings" nil "setPath" arguments))

(defun |setPath| (object &rest arguments)
  (%qinvoke-method object nil "setPath" arguments))

(defun |setPatternSyntax| (object &rest arguments)
  (%qinvoke-method object nil "setPatternSyntax" arguments))

(defun |setPattern| (object &rest arguments)
  (%qinvoke-method object nil "setPattern" arguments))

(defun |setPaused| (object &rest arguments)
  (%qinvoke-method object nil "setPaused" arguments))

(defun |setPen(QColor)| (object &rest arguments)
  (%qinvoke-method object nil "setPen(QColor)" arguments))

(defun |setPen(QPen)| (object &rest arguments)
  (%qinvoke-method object nil "setPen(QPen)" arguments))

(defun |setPen(Qt::PenStyle)| (object &rest arguments)
  (%qinvoke-method object nil "setPen(Qt::PenStyle)" arguments))

(defun |setPen| (object &rest arguments)
  (%qinvoke-method object nil "setPen" arguments))

(defun |setPeriod| (object &rest arguments)
  (%qinvoke-method object nil "setPeriod" arguments))

(defun |setPermissions.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "setPermissions" arguments))

(defun |setPermissions| (object &rest arguments)
  (%qinvoke-method object nil "setPermissions" arguments))

(defun |setPicture| (object &rest arguments)
  (%qinvoke-method object nil "setPicture" arguments))

(defun |setPixelSize| (object &rest arguments)
  (%qinvoke-method object nil "setPixelSize" arguments))

(defun |setPixel| (object &rest arguments)
  (%qinvoke-method object nil "setPixel" arguments))

(defun |setPixmap| (object &rest arguments)
  (%qinvoke-method object nil "setPixmap" arguments))

(defun |setPlainText| (object &rest arguments)
  (%qinvoke-method object nil "setPlainText" arguments))

(defun |setPointSizeF| (object &rest arguments)
  (%qinvoke-method object nil "setPointSizeF" arguments))

(defun |setPointSize| (object &rest arguments)
  (%qinvoke-method object nil "setPointSize" arguments))

(defun |setPolygon| (object &rest arguments)
  (%qinvoke-method object nil "setPolygon" arguments))

(defun |setPopupMode| (object &rest arguments)
  (%qinvoke-method object nil "setPopupMode" arguments))

(defun |setPopup| (object &rest arguments)
  (%qinvoke-method object nil "setPopup" arguments))

(defun |setPortraitOrientation| (object &rest arguments)
  (%qinvoke-method object nil "setPortraitOrientation" arguments))

(defun |setPort| (object &rest arguments)
  (%qinvoke-method object nil "setPort" arguments))

(defun |setPos.QCursor| (&rest arguments)
  (%qinvoke-method "QCursor" nil "setPos" arguments))

(defun |setPositionForIndex| (object &rest arguments)
  (%qinvoke-method object nil "setPositionForIndex" arguments))

(defun |setPosition| (object &rest arguments)
  (%qinvoke-method object nil "setPosition" arguments))

(defun |setPos| (object &rest arguments)
  (%qinvoke-method object nil "setPos" arguments))

(defun |setPreeditArea| (object &rest arguments)
  (%qinvoke-method object nil "setPreeditArea" arguments))

(defun |setPreferredHeight| (object &rest arguments)
  (%qinvoke-method object nil "setPreferredHeight" arguments))

(defun |setPreferredSize| (object &rest arguments)
  (%qinvoke-method object nil "setPreferredSize" arguments))

(defun |setPreferredWidth| (object &rest arguments)
  (%qinvoke-method object nil "setPreferredWidth" arguments))

(defun |setPrefix| (object &rest arguments)
  (%qinvoke-method object nil "setPrefix" arguments))

(defun |setPreviewWidget| (object &rest arguments)
  (%qinvoke-method object nil "setPreviewWidget" arguments))

(defun |setPrintProgram| (object &rest arguments)
  (%qinvoke-method object nil "setPrintProgram" arguments))

(defun |setPrintRange| (object &rest arguments)
  (%qinvoke-method object nil "setPrintRange" arguments))

(defun |setPrinterName| (object &rest arguments)
  (%qinvoke-method object nil "setPrinterName" arguments))

(defun |setPriority| (object &rest arguments)
  (%qinvoke-method object nil "setPriority" arguments))

(defun |setProcessChannelMode| (object &rest arguments)
  (%qinvoke-method object nil "setProcessChannelMode" arguments))

(defun |setProcessEnvironment| (object &rest arguments)
  (%qinvoke-method object nil "setProcessEnvironment" arguments))

(defun |setProcessState| (object &rest arguments)
  (%qinvoke-method object nil "setProcessState" arguments))

(defun |setProperty(int,QVariant)| (object &rest arguments)
  (%qinvoke-method object nil "setProperty(int,QVariant)" arguments))

(defun |setProperty(int,QVector<QTextLength>)| (object &rest arguments)
  (%qinvoke-method object nil "setProperty(int,QVector<QTextLength>)" arguments))

(defun |setPropertyName| (object &rest arguments)
  (%qinvoke-method object nil "setPropertyName" arguments))

(defun |setProperty| (object &rest arguments)
  (%qinvoke-method object nil "setProperty" arguments))

(defun |setProxyModel| (object &rest arguments)
  (%qinvoke-method object nil "setProxyModel" arguments))

(defun |setQueryDelimiters| (object &rest arguments)
  (%qinvoke-method object nil "setQueryDelimiters" arguments))

(defun |setQuitOnLastWindowClosed.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setQuitOnLastWindowClosed" arguments))

(defun |setRadius| (object &rest arguments)
  (%qinvoke-method object nil "setRadius" arguments))

(defun |setRangeSelected| (object &rest arguments)
  (%qinvoke-method object nil "setRangeSelected" arguments))

(defun |setRange| (object &rest arguments)
  (%qinvoke-method object nil "setRange" arguments))

(defun |setRawMode| (object &rest arguments)
  (%qinvoke-method object nil "setRawMode" arguments))

(defun |setRawName| (object &rest arguments)
  (%qinvoke-method object nil "setRawName" arguments))

(defun |setReadChannel| (object &rest arguments)
  (%qinvoke-method object nil "setReadChannel" arguments))

(defun |setReadOnly| (object &rest arguments)
  (%qinvoke-method object nil "setReadOnly" arguments))

(defun |setRects| (object &rest arguments)
  (%qinvoke-method object nil "setRects" arguments))

(defun |setRect| (object &rest arguments)
  (%qinvoke-method object nil "setRect" arguments))

(defun |setRedF| (object &rest arguments)
  (%qinvoke-method object nil "setRedF" arguments))

(defun |setRed| (object &rest arguments)
  (%qinvoke-method object nil "setRed" arguments))

(defun |setRegExp| (object &rest arguments)
  (%qinvoke-method object nil "setRegExp" arguments))

(defun |setRenderHints| (object &rest arguments)
  (%qinvoke-method object nil "setRenderHints" arguments))

(defun |setRenderHint| (object &rest arguments)
  (%qinvoke-method object nil "setRenderHint" arguments))

(defun |setRepeatAction| (object &rest arguments)
  (%qinvoke-method object nil "setRepeatAction" arguments))

(defun |setResizeAnchor| (object &rest arguments)
  (%qinvoke-method object nil "setResizeAnchor" arguments))

(defun |setResizeGripsVisible| (object &rest arguments)
  (%qinvoke-method object nil "setResizeGripsVisible" arguments))

(defun |setResizeMode| (object &rest arguments)
  (%qinvoke-method object nil "setResizeMode" arguments))

(defun |setResolution| (object &rest arguments)
  (%qinvoke-method object nil "setResolution" arguments))

(defun |setResolveSymlinks| (object &rest arguments)
  (%qinvoke-method object nil "setResolveSymlinks" arguments))

(defun |setRestartCommand| (object &rest arguments)
  (%qinvoke-method object nil "setRestartCommand" arguments))

(defun |setRestartHint| (object &rest arguments)
  (%qinvoke-method object nil "setRestartHint" arguments))

(defun |setResult| (object &rest arguments)
  (%qinvoke-method object nil "setResult" arguments))

(defun |setRevision| (object &rest arguments)
  (%qinvoke-method object nil "setRevision" arguments))

(defun |setRgbF| (object &rest arguments)
  (%qinvoke-method object nil "setRgbF" arguments))

(defun |setRgba| (object &rest arguments)
  (%qinvoke-method object nil "setRgba" arguments))

(defun |setRgb| (object &rest arguments)
  (%qinvoke-method object nil "setRgb" arguments))

(defun |setRightMargin| (object &rest arguments)
  (%qinvoke-method object nil "setRightMargin" arguments))

(defun |setRightPadding| (object &rest arguments)
  (%qinvoke-method object nil "setRightPadding" arguments))

(defun |setRight| (object &rest arguments)
  (%qinvoke-method object nil "setRight" arguments))

(defun |setRootIndex| (object &rest arguments)
  (%qinvoke-method object nil "setRootIndex" arguments))

(defun |setRootIsDecorated| (object &rest arguments)
  (%qinvoke-method object nil "setRootIsDecorated" arguments))

(defun |setRootModelIndex| (object &rest arguments)
  (%qinvoke-method object nil "setRootModelIndex" arguments))

(defun |setRootObject.QAccessible| (&rest arguments)
  (%qinvoke-method "QAccessible" nil "setRootObject" arguments))

(defun |setRootPath| (object &rest arguments)
  (%qinvoke-method object nil "setRootPath" arguments))

(defun |setRotationAngle| (object &rest arguments)
  (%qinvoke-method object nil "setRotationAngle" arguments))

(defun |setRotation| (object &rest arguments)
  (%qinvoke-method object nil "setRotation" arguments))

(defun |setRowAlignment| (object &rest arguments)
  (%qinvoke-method object nil "setRowAlignment" arguments))

(defun |setRowCount| (object &rest arguments)
  (%qinvoke-method object nil "setRowCount" arguments))

(defun |setRowFixedHeight| (object &rest arguments)
  (%qinvoke-method object nil "setRowFixedHeight" arguments))

(defun |setRowHeight| (object &rest arguments)
  (%qinvoke-method object nil "setRowHeight" arguments))

(defun |setRowHidden| (object &rest arguments)
  (%qinvoke-method object nil "setRowHidden" arguments))

(defun |setRowMaximumHeight| (object &rest arguments)
  (%qinvoke-method object nil "setRowMaximumHeight" arguments))

(defun |setRowMinimumHeight| (object &rest arguments)
  (%qinvoke-method object nil "setRowMinimumHeight" arguments))

(defun |setRowPreferredHeight| (object &rest arguments)
  (%qinvoke-method object nil "setRowPreferredHeight" arguments))

(defun |setRowSpacing| (object &rest arguments)
  (%qinvoke-method object nil "setRowSpacing" arguments))

(defun |setRowStretchFactor| (object &rest arguments)
  (%qinvoke-method object nil "setRowStretchFactor" arguments))

(defun |setRowStretch| (object &rest arguments)
  (%qinvoke-method object nil "setRowStretch" arguments))

(defun |setRowWrapPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setRowWrapPolicy" arguments))

(defun |setRow| (object &rest arguments)
  (%qinvoke-method object nil "setRow" arguments))

(defun |setRubberBandSelectionMode| (object &rest arguments)
  (%qinvoke-method object nil "setRubberBandSelectionMode" arguments))

(defun |setRubberBand| (object &rest arguments)
  (%qinvoke-method object nil "setRubberBand" arguments))

(defun |setScalar| (object &rest arguments)
  (%qinvoke-method object nil "setScalar" arguments))

(defun |setScaleFactor| (object &rest arguments)
  (%qinvoke-method object nil "setScaleFactor" arguments))

(defun |setScaledContents| (object &rest arguments)
  (%qinvoke-method object nil "setScaledContents" arguments))

(defun |setScaledSize| (object &rest arguments)
  (%qinvoke-method object nil "setScaledSize" arguments))

(defun |setScale| (object &rest arguments)
  (%qinvoke-method object nil "setScale" arguments))

(defun |setSceneRect| (object &rest arguments)
  (%qinvoke-method object nil "setSceneRect" arguments))

(defun |setScene| (object &rest arguments)
  (%qinvoke-method object nil "setScene" arguments))

(defun |setScheme| (object &rest arguments)
  (%qinvoke-method object nil "setScheme" arguments))

(defun |setScrollBarsEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setScrollBarsEnabled" arguments))

(defun |setSearchPaths.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "setSearchPaths" arguments))

(defun |setSearchPaths| (object &rest arguments)
  (%qinvoke-method object nil "setSearchPaths" arguments))

(defun |setSectionHidden| (object &rest arguments)
  (%qinvoke-method object nil "setSectionHidden" arguments))

(defun |setSegmentStyle| (object &rest arguments)
  (%qinvoke-method object nil "setSegmentStyle" arguments))

(defun |setSelectable| (object &rest arguments)
  (%qinvoke-method object nil "setSelectable" arguments))

(defun |setSelectedDate| (object &rest arguments)
  (%qinvoke-method object nil "setSelectedDate" arguments))

(defun |setSelectedSection| (object &rest arguments)
  (%qinvoke-method object nil "setSelectedSection" arguments))

(defun |setSelected| (object &rest arguments)
  (%qinvoke-method object nil "setSelected" arguments))

(defun |setSelectionArea| (object &rest arguments)
  (%qinvoke-method object nil "setSelectionArea" arguments))

(defun |setSelectionBehaviorOnRemove| (object &rest arguments)
  (%qinvoke-method object nil "setSelectionBehaviorOnRemove" arguments))

(defun |setSelectionBehavior| (object &rest arguments)
  (%qinvoke-method object nil "setSelectionBehavior" arguments))

(defun |setSelectionModel| (object &rest arguments)
  (%qinvoke-method object nil "setSelectionModel" arguments))

(defun |setSelectionMode| (object &rest arguments)
  (%qinvoke-method object nil "setSelectionMode" arguments))

(defun |setSelectionRectVisible| (object &rest arguments)
  (%qinvoke-method object nil "setSelectionRectVisible" arguments))

(defun |setSelection| (object &rest arguments)
  (%qinvoke-method object nil "setSelection" arguments))

(defun |setSenderObject| (object &rest arguments)
  (%qinvoke-method object nil "setSenderObject" arguments))

(defun |setSeparatorsCollapsible| (object &rest arguments)
  (%qinvoke-method object nil "setSeparatorsCollapsible" arguments))

(defun |setSeparator| (object &rest arguments)
  (%qinvoke-method object nil "setSeparator" arguments))

(defun |setShapeMode| (object &rest arguments)
  (%qinvoke-method object nil "setShapeMode" arguments))

(defun |setShape| (object &rest arguments)
  (%qinvoke-method object nil "setShape" arguments))

(defun |setShortcutAutoRepeat| (object &rest arguments)
  (%qinvoke-method object nil "setShortcutAutoRepeat" arguments))

(defun |setShortcutContext| (object &rest arguments)
  (%qinvoke-method object nil "setShortcutContext" arguments))

(defun |setShortcutEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setShortcutEnabled" arguments))

(defun |setShortcuts(QKeySequence::StandardKey)| (object &rest arguments)
  (%qinvoke-method object nil "setShortcuts(QKeySequence::StandardKey)" arguments))

(defun |setShortcuts(QList<QKeySequence>)| (object &rest arguments)
  (%qinvoke-method object nil "setShortcuts(QList<QKeySequence>)" arguments))

(defun |setShortcuts| (object &rest arguments)
  (%qinvoke-method object nil "setShortcuts" arguments))

(defun |setShortcut| (object &rest arguments)
  (%qinvoke-method object nil "setShortcut" arguments))

(defun |setShowGrid| (object &rest arguments)
  (%qinvoke-method object nil "setShowGrid" arguments))

(defun |setShown| (object &rest arguments)
  (%qinvoke-method object nil "setShown" arguments))

(defun |setSidebarUrls| (object &rest arguments)
  (%qinvoke-method object nil "setSidebarUrls" arguments))

(defun |setSignal| (object &rest arguments)
  (%qinvoke-method object nil "setSignal" arguments))

(defun |setSinglePageViewMode| (object &rest arguments)
  (%qinvoke-method object nil "setSinglePageViewMode" arguments))

(defun |setSingleShot| (object &rest arguments)
  (%qinvoke-method object nil "setSingleShot" arguments))

(defun |setSingleStep| (object &rest arguments)
  (%qinvoke-method object nil "setSingleStep" arguments))

(defun |setSizeAdjustPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setSizeAdjustPolicy" arguments))

(defun |setSizeConstraint| (object &rest arguments)
  (%qinvoke-method object nil "setSizeConstraint" arguments))

(defun |setSizeGripEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setSizeGripEnabled" arguments))

(defun |setSizeHint| (object &rest arguments)
  (%qinvoke-method object nil "setSizeHint" arguments))

(defun |setSizeIncrement| (object &rest arguments)
  (%qinvoke-method object nil "setSizeIncrement" arguments))

(defun |setSizePolicy| (object &rest arguments)
  (%qinvoke-method object nil "setSizePolicy" arguments))

(defun |setSizes| (object &rest arguments)
  (%qinvoke-method object nil "setSizes" arguments))

(defun |setSliderDown| (object &rest arguments)
  (%qinvoke-method object nil "setSliderDown" arguments))

(defun |setSliderPosition| (object &rest arguments)
  (%qinvoke-method object nil "setSliderPosition" arguments))

(defun |setSmallDecimalPoint| (object &rest arguments)
  (%qinvoke-method object nil "setSmallDecimalPoint" arguments))

(defun |setSoftKeyRole| (object &rest arguments)
  (%qinvoke-method object nil "setSoftKeyRole" arguments))

(defun |setSortCacheEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setSortCacheEnabled" arguments))

(defun |setSortCaseSensitivity| (object &rest arguments)
  (%qinvoke-method object nil "setSortCaseSensitivity" arguments))

(defun |setSortIndicatorShown| (object &rest arguments)
  (%qinvoke-method object nil "setSortIndicatorShown" arguments))

(defun |setSortIndicator| (object &rest arguments)
  (%qinvoke-method object nil "setSortIndicator" arguments))

(defun |setSortLocaleAware| (object &rest arguments)
  (%qinvoke-method object nil "setSortLocaleAware" arguments))

(defun |setSortRole| (object &rest arguments)
  (%qinvoke-method object nil "setSortRole" arguments))

(defun |setSortingEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setSortingEnabled" arguments))

(defun |setSorting| (object &rest arguments)
  (%qinvoke-method object nil "setSorting" arguments))

(defun |setSourceModel| (object &rest arguments)
  (%qinvoke-method object nil "setSourceModel" arguments))

(defun |setSource| (object &rest arguments)
  (%qinvoke-method object nil "setSource" arguments))

(defun |setSpacing| (object &rest arguments)
  (%qinvoke-method object nil "setSpacing" arguments))

(defun |setSpanAngle| (object &rest arguments)
  (%qinvoke-method object nil "setSpanAngle" arguments))

(defun |setSpan| (object &rest arguments)
  (%qinvoke-method object nil "setSpan" arguments))

(defun |setSpecialValueText| (object &rest arguments)
  (%qinvoke-method object nil "setSpecialValueText" arguments))

(defun |setSpeed| (object &rest arguments)
  (%qinvoke-method object nil "setSpeed" arguments))

(defun |setSpread| (object &rest arguments)
  (%qinvoke-method object nil "setSpread" arguments))

(defun |setStackingMode| (object &rest arguments)
  (%qinvoke-method object nil "setStackingMode" arguments))

(defun |setStack| (object &rest arguments)
  (%qinvoke-method object nil "setStack" arguments))

(defun |setStandardButtons| (object &rest arguments)
  (%qinvoke-method object nil "setStandardButtons" arguments))

(defun |setStandardColor.QColorDialog| (&rest arguments)
  (%qinvoke-method "QColorDialog" nil "setStandardColor" arguments))

(defun |setStandardErrorFile| (object &rest arguments)
  (%qinvoke-method object nil "setStandardErrorFile" arguments))

(defun |setStandardInputFile| (object &rest arguments)
  (%qinvoke-method object nil "setStandardInputFile" arguments))

(defun |setStandardOutputFile| (object &rest arguments)
  (%qinvoke-method object nil "setStandardOutputFile" arguments))

(defun |setStandardOutputProcess| (object &rest arguments)
  (%qinvoke-method object nil "setStandardOutputProcess" arguments))

(defun |setStartAngle| (object &rest arguments)
  (%qinvoke-method object nil "setStartAngle" arguments))

(defun |setStartCenterPoint| (object &rest arguments)
  (%qinvoke-method object nil "setStartCenterPoint" arguments))

(defun |setStartDragDistance.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setStartDragDistance" arguments))

(defun |setStartDragTime.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setStartDragTime" arguments))

(defun |setStartFrame| (object &rest arguments)
  (%qinvoke-method object nil "setStartFrame" arguments))

(defun |setStartId| (object &rest arguments)
  (%qinvoke-method object nil "setStartId" arguments))

(defun |setStartValue| (object &rest arguments)
  (%qinvoke-method object nil "setStartValue" arguments))

(defun |setStart| (object &rest arguments)
  (%qinvoke-method object nil "setStart" arguments))

(defun |setState| (object &rest arguments)
  (%qinvoke-method object nil "setState" arguments))

(defun |setStatusBar| (object &rest arguments)
  (%qinvoke-method object nil "setStatusBar" arguments))

(defun |setStatusTip| (object &rest arguments)
  (%qinvoke-method object nil "setStatusTip" arguments))

(defun |setStickyFocus| (object &rest arguments)
  (%qinvoke-method object nil "setStickyFocus" arguments))

(defun |setStops| (object &rest arguments)
  (%qinvoke-method object nil "setStops" arguments))

(defun |setStrength| (object &rest arguments)
  (%qinvoke-method object nil "setStrength" arguments))

(defun |setStretchFactor(QLayout*...)| (object &rest arguments)
  (%qinvoke-method object nil "setStretchFactor(QLayout*...)" arguments))

(defun |setStretchFactor(QWidget*...)| (object &rest arguments)
  (%qinvoke-method object nil "setStretchFactor(QWidget*...)" arguments))

(defun |setStretchFactor| (object &rest arguments)
  (%qinvoke-method object nil "setStretchFactor" arguments))

(defun |setStretchLastSection| (object &rest arguments)
  (%qinvoke-method object nil "setStretchLastSection" arguments))

(defun |setStretch| (object &rest arguments)
  (%qinvoke-method object nil "setStretch" arguments))

(defun |setStrikeOut| (object &rest arguments)
  (%qinvoke-method object nil "setStrikeOut" arguments))

(defun |setStringList| (object &rest arguments)
  (%qinvoke-method object nil "setStringList" arguments))

(defun |setStyle(QString).QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setStyle(QString)" arguments))

(defun |setStyle(QStyle*).QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setStyle(QStyle*)" arguments))

(defun |setStyle.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setStyle" arguments))

(defun |setStyleHint| (object &rest arguments)
  (%qinvoke-method object nil "setStyleHint" arguments))

(defun |setStyleSheet| (object &rest arguments)
  (%qinvoke-method object nil "setStyleSheet" arguments))

(defun |setStyleStrategy| (object &rest arguments)
  (%qinvoke-method object nil "setStyleStrategy" arguments))

(defun |setStyle| (object &rest arguments)
  (%qinvoke-method object nil "setStyle" arguments))

(defun |setSubTitleFormat| (object &rest arguments)
  (%qinvoke-method object nil "setSubTitleFormat" arguments))

(defun |setSubTitle| (object &rest arguments)
  (%qinvoke-method object nil "setSubTitle" arguments))

(defun |setSubmitPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setSubmitPolicy" arguments))

(defun |setSuffix| (object &rest arguments)
  (%qinvoke-method object nil "setSuffix" arguments))

(defun |setSupportedDragActions| (object &rest arguments)
  (%qinvoke-method object nil "setSupportedDragActions" arguments))

(defun |setSwipeAngle| (object &rest arguments)
  (%qinvoke-method object nil "setSwipeAngle" arguments))

(defun |setSystemMenu| (object &rest arguments)
  (%qinvoke-method object nil "setSystemMenu" arguments))

(defun |setTabArray| (object &rest arguments)
  (%qinvoke-method object nil "setTabArray" arguments))

(defun |setTabBar| (object &rest arguments)
  (%qinvoke-method object nil "setTabBar" arguments))

(defun |setTabButton| (object &rest arguments)
  (%qinvoke-method object nil "setTabButton" arguments))

(defun |setTabChangesFocus| (object &rest arguments)
  (%qinvoke-method object nil "setTabChangesFocus" arguments))

(defun |setTabData| (object &rest arguments)
  (%qinvoke-method object nil "setTabData" arguments))

(defun |setTabEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setTabEnabled" arguments))

(defun |setTabIcon| (object &rest arguments)
  (%qinvoke-method object nil "setTabIcon" arguments))

(defun |setTabKeyNavigation| (object &rest arguments)
  (%qinvoke-method object nil "setTabKeyNavigation" arguments))

(defun |setTabOrder.QGraphicsWidget| (&rest arguments)
  (%qinvoke-method "QGraphicsWidget" nil "setTabOrder" arguments))

(defun |setTabOrder.QWidget| (&rest arguments)
  (%qinvoke-method "QWidget" nil "setTabOrder" arguments))

(defun |setTabPositions| (object &rest arguments)
  (%qinvoke-method object nil "setTabPositions" arguments))

(defun |setTabPosition| (object &rest arguments)
  (%qinvoke-method object nil "setTabPosition" arguments))

(defun |setTabShape| (object &rest arguments)
  (%qinvoke-method object nil "setTabShape" arguments))

(defun |setTabStopWidth| (object &rest arguments)
  (%qinvoke-method object nil "setTabStopWidth" arguments))

(defun |setTabStop| (object &rest arguments)
  (%qinvoke-method object nil "setTabStop" arguments))

(defun |setTabTextColor| (object &rest arguments)
  (%qinvoke-method object nil "setTabTextColor" arguments))

(defun |setTabText| (object &rest arguments)
  (%qinvoke-method object nil "setTabText" arguments))

(defun |setTabToolTip| (object &rest arguments)
  (%qinvoke-method object nil "setTabToolTip" arguments))

(defun |setTabWhatsThis| (object &rest arguments)
  (%qinvoke-method object nil "setTabWhatsThis" arguments))

(defun |setTabsClosable| (object &rest arguments)
  (%qinvoke-method object nil "setTabsClosable" arguments))

(defun |setTargetObject| (object &rest arguments)
  (%qinvoke-method object nil "setTargetObject" arguments))

(defun |setTargetStates| (object &rest arguments)
  (%qinvoke-method object nil "setTargetStates" arguments))

(defun |setTargetState| (object &rest arguments)
  (%qinvoke-method object nil "setTargetState" arguments))

(defun |setTearOffEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setTearOffEnabled" arguments))

(defun |setTextAlignment| (object &rest arguments)
  (%qinvoke-method object nil "setTextAlignment" arguments))

(defun |setTextBackgroundColor| (object &rest arguments)
  (%qinvoke-method object nil "setTextBackgroundColor" arguments))

(defun |setTextColor| (object &rest arguments)
  (%qinvoke-method object nil "setTextColor" arguments))

(defun |setTextCursor| (object &rest arguments)
  (%qinvoke-method object nil "setTextCursor" arguments))

(defun |setTextDirection| (object &rest arguments)
  (%qinvoke-method object nil "setTextDirection" arguments))

(defun |setTextEchoMode| (object &rest arguments)
  (%qinvoke-method object nil "setTextEchoMode" arguments))

(defun |setTextElideMode| (object &rest arguments)
  (%qinvoke-method object nil "setTextElideMode" arguments))

(defun |setTextFormat| (object &rest arguments)
  (%qinvoke-method object nil "setTextFormat" arguments))

(defun |setTextIndent| (object &rest arguments)
  (%qinvoke-method object nil "setTextIndent" arguments))

(defun |setTextInteractionFlags| (object &rest arguments)
  (%qinvoke-method object nil "setTextInteractionFlags" arguments))

(defun |setTextMargins| (object &rest arguments)
  (%qinvoke-method object nil "setTextMargins" arguments))

(defun |setTextModeEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setTextModeEnabled" arguments))

(defun |setTextOption| (object &rest arguments)
  (%qinvoke-method object nil "setTextOption" arguments))

(defun |setTextOutline| (object &rest arguments)
  (%qinvoke-method object nil "setTextOutline" arguments))

(defun |setTextPosition| (object &rest arguments)
  (%qinvoke-method object nil "setTextPosition" arguments))

(defun |setTextValue| (object &rest arguments)
  (%qinvoke-method object nil "setTextValue" arguments))

(defun |setTextVisible| (object &rest arguments)
  (%qinvoke-method object nil "setTextVisible" arguments))

(defun |setTextWidth| (object &rest arguments)
  (%qinvoke-method object nil "setTextWidth" arguments))

(defun |setTextureImage| (object &rest arguments)
  (%qinvoke-method object nil "setTextureImage" arguments))

(defun |setTexture| (object &rest arguments)
  (%qinvoke-method object nil "setTexture" arguments))

(defun |setText| (object &rest arguments)
  (%qinvoke-method object nil "setText" arguments))

(defun |setThemeName.QIcon| (&rest arguments)
  (%qinvoke-method "QIcon" nil "setThemeName" arguments))

(defun |setThemeSearchPaths.QIcon| (&rest arguments)
  (%qinvoke-method "QIcon" nil "setThemeSearchPaths" arguments))

(defun |setTickInterval| (object &rest arguments)
  (%qinvoke-method object nil "setTickInterval" arguments))

(defun |setTickPosition| (object &rest arguments)
  (%qinvoke-method object nil "setTickPosition" arguments))

(defun |setTimeRange| (object &rest arguments)
  (%qinvoke-method object nil "setTimeRange" arguments))

(defun |setTimeSpec| (object &rest arguments)
  (%qinvoke-method object nil "setTimeSpec" arguments))

(defun |setTime_t| (object &rest arguments)
  (%qinvoke-method object nil "setTime_t" arguments))

(defun |setTime| (object &rest arguments)
  (%qinvoke-method object nil "setTime" arguments))

(defun |setTitleBarWidget| (object &rest arguments)
  (%qinvoke-method object nil "setTitleBarWidget" arguments))

(defun |setTitleFormat| (object &rest arguments)
  (%qinvoke-method object nil "setTitleFormat" arguments))

(defun |setTitle| (object &rest arguments)
  (%qinvoke-method object nil "setTitle" arguments))

(defun |setToIdentity| (object &rest arguments)
  (%qinvoke-method object nil "setToIdentity" arguments))

(defun |setToolButtonStyle| (object &rest arguments)
  (%qinvoke-method object nil "setToolButtonStyle" arguments))

(defun |setToolTip| (object &rest arguments)
  (%qinvoke-method object nil "setToolTip" arguments))

(defun |setTopMargin| (object &rest arguments)
  (%qinvoke-method object nil "setTopMargin" arguments))

(defun |setTopPadding| (object &rest arguments)
  (%qinvoke-method object nil "setTopPadding" arguments))

(defun |setTop| (object &rest arguments)
  (%qinvoke-method object nil "setTop" arguments))

(defun |setTotalChangeFlags| (object &rest arguments)
  (%qinvoke-method object nil "setTotalChangeFlags" arguments))

(defun |setTotalRotationAngle| (object &rest arguments)
  (%qinvoke-method object nil "setTotalRotationAngle" arguments))

(defun |setTotalScaleFactor| (object &rest arguments)
  (%qinvoke-method object nil "setTotalScaleFactor" arguments))

(defun |setTracking| (object &rest arguments)
  (%qinvoke-method object nil "setTracking" arguments))

(defun |setTransformOriginPoint| (object &rest arguments)
  (%qinvoke-method object nil "setTransformOriginPoint" arguments))

(defun |setTransformationAnchor| (object &rest arguments)
  (%qinvoke-method object nil "setTransformationAnchor" arguments))

(defun |setTransformationMode| (object &rest arguments)
  (%qinvoke-method object nil "setTransformationMode" arguments))

(defun |setTransformations| (object &rest arguments)
  (%qinvoke-method object nil "setTransformations" arguments))

(defun |setTransform| (object &rest arguments)
  (%qinvoke-method object nil "setTransform" arguments))

(defun |setTristate| (object &rest arguments)
  (%qinvoke-method object nil "setTristate" arguments))

(defun |setType| (object &rest arguments)
  (%qinvoke-method object nil "setType" arguments))

(defun |setUnderlineColor| (object &rest arguments)
  (%qinvoke-method object nil "setUnderlineColor" arguments))

(defun |setUnderlineStyle| (object &rest arguments)
  (%qinvoke-method object nil "setUnderlineStyle" arguments))

(defun |setUnderline| (object &rest arguments)
  (%qinvoke-method object nil "setUnderline" arguments))

(defun |setUndoLimit| (object &rest arguments)
  (%qinvoke-method object nil "setUndoLimit" arguments))

(defun |setUndoRedoEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setUndoRedoEnabled" arguments))

(defun |setUnifiedTitleAndToolBarOnMac| (object &rest arguments)
  (%qinvoke-method object nil "setUnifiedTitleAndToolBarOnMac" arguments))

(defun |setUniformItemSizes| (object &rest arguments)
  (%qinvoke-method object nil "setUniformItemSizes" arguments))

(defun |setUniformRowHeights| (object &rest arguments)
  (%qinvoke-method object nil "setUniformRowHeights" arguments))

(defun |setUpdateInterval| (object &rest arguments)
  (%qinvoke-method object nil "setUpdateInterval" arguments))

(defun |setUpdatesEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setUpdatesEnabled" arguments))

(defun |setUrls| (object &rest arguments)
  (%qinvoke-method object nil "setUrls" arguments))

(defun |setUrl| (object &rest arguments)
  (%qinvoke-method object nil "setUrl" arguments))

(defun |setUseDesignMetrics| (object &rest arguments)
  (%qinvoke-method object nil "setUseDesignMetrics" arguments))

(defun |setUseHighlightColors| (object &rest arguments)
  (%qinvoke-method object nil "setUseHighlightColors" arguments))

(defun |setUserData| (object &rest arguments)
  (%qinvoke-method object nil "setUserData" arguments))

(defun |setUserInfo| (object &rest arguments)
  (%qinvoke-method object nil "setUserInfo" arguments))

(defun |setUserName| (object &rest arguments)
  (%qinvoke-method object nil "setUserName" arguments))

(defun |setUserState| (object &rest arguments)
  (%qinvoke-method object nil "setUserState" arguments))

(defun |setUsesBigPixmap| (object &rest arguments)
  (%qinvoke-method object nil "setUsesBigPixmap" arguments))

(defun |setUsesScrollButtons| (object &rest arguments)
  (%qinvoke-method object nil "setUsesScrollButtons" arguments))

(defun |setUsesTextLabel| (object &rest arguments)
  (%qinvoke-method object nil "setUsesTextLabel" arguments))

(defun |setValidator| (object &rest arguments)
  (%qinvoke-method object nil "setValidator" arguments))

(defun |setValue| (object &rest arguments)
  (%qinvoke-method object nil "setValue" arguments))

(defun |setVector| (object &rest arguments)
  (%qinvoke-method object nil "setVector" arguments))

(defun |setVerticalAlignment| (object &rest arguments)
  (%qinvoke-method object nil "setVerticalAlignment" arguments))

(defun |setVerticalHeaderFormat| (object &rest arguments)
  (%qinvoke-method object nil "setVerticalHeaderFormat" arguments))

(defun |setVerticalHeaderItem| (object &rest arguments)
  (%qinvoke-method object nil "setVerticalHeaderItem" arguments))

(defun |setVerticalHeaderLabels| (object &rest arguments)
  (%qinvoke-method object nil "setVerticalHeaderLabels" arguments))

(defun |setVerticalHeader| (object &rest arguments)
  (%qinvoke-method object nil "setVerticalHeader" arguments))

(defun |setVerticalPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setVerticalPolicy" arguments))

(defun |setVerticalScrollBarPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setVerticalScrollBarPolicy" arguments))

(defun |setVerticalScrollBar| (object &rest arguments)
  (%qinvoke-method object nil "setVerticalScrollBar" arguments))

(defun |setVerticalScrollMode| (object &rest arguments)
  (%qinvoke-method object nil "setVerticalScrollMode" arguments))

(defun |setVerticalSpacing| (object &rest arguments)
  (%qinvoke-method object nil "setVerticalSpacing" arguments))

(defun |setVerticalStretch| (object &rest arguments)
  (%qinvoke-method object nil "setVerticalStretch" arguments))

(defun |setViewMode| (object &rest arguments)
  (%qinvoke-method object nil "setViewMode" arguments))

(defun |setViewTransformEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setViewTransformEnabled" arguments))

(defun |setViewportMargins| (object &rest arguments)
  (%qinvoke-method object nil "setViewportMargins" arguments))

(defun |setViewportUpdateMode| (object &rest arguments)
  (%qinvoke-method object nil "setViewportUpdateMode" arguments))

(defun |setViewport| (object &rest arguments)
  (%qinvoke-method object nil "setViewport" arguments))

(defun |setView| (object &rest arguments)
  (%qinvoke-method object nil "setView" arguments))

(defun |setVisible| (object &rest arguments)
  (%qinvoke-method object nil "setVisible" arguments))

(defun |setVisualNavigation| (object &rest arguments)
  (%qinvoke-method object nil "setVisualNavigation" arguments))

(defun |setWeekdayTextFormat| (object &rest arguments)
  (%qinvoke-method object nil "setWeekdayTextFormat" arguments))

(defun |setWeight| (object &rest arguments)
  (%qinvoke-method object nil "setWeight" arguments))

(defun |setWhatsThis| (object &rest arguments)
  (%qinvoke-method object nil "setWhatsThis" arguments))

(defun |setWheelScrollLines.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setWheelScrollLines" arguments))

(defun |setWidgetResizable| (object &rest arguments)
  (%qinvoke-method object nil "setWidgetResizable" arguments))

(defun |setWidget| (object &rest arguments)
  (%qinvoke-method object nil "setWidget" arguments))

(defun |setWidth(QTextLength)| (object &rest arguments)
  (%qinvoke-method object nil "setWidth(QTextLength)" arguments))

(defun |setWidth(qreal)| (object &rest arguments)
  (%qinvoke-method object nil "setWidth(qreal)" arguments))

(defun |setWidthF| (object &rest arguments)
  (%qinvoke-method object nil "setWidthF" arguments))

(defun |setWidth| (object &rest arguments)
  (%qinvoke-method object nil "setWidth" arguments))

(defun |setWindowFilePath| (object &rest arguments)
  (%qinvoke-method object nil "setWindowFilePath" arguments))

(defun |setWindowFlags| (object &rest arguments)
  (%qinvoke-method object nil "setWindowFlags" arguments))

(defun |setWindowFrameMargins| (object &rest arguments)
  (%qinvoke-method object nil "setWindowFrameMargins" arguments))

(defun |setWindowIcon.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "setWindowIcon" arguments))

(defun |setWindowIconText| (object &rest arguments)
  (%qinvoke-method object nil "setWindowIconText" arguments))

(defun |setWindowIcon| (object &rest arguments)
  (%qinvoke-method object nil "setWindowIcon" arguments))

(defun |setWindowModality| (object &rest arguments)
  (%qinvoke-method object nil "setWindowModality" arguments))

(defun |setWindowModified| (object &rest arguments)
  (%qinvoke-method object nil "setWindowModified" arguments))

(defun |setWindowOpacity| (object &rest arguments)
  (%qinvoke-method object nil "setWindowOpacity" arguments))

(defun |setWindowRole| (object &rest arguments)
  (%qinvoke-method object nil "setWindowRole" arguments))

(defun |setWindowState| (object &rest arguments)
  (%qinvoke-method object nil "setWindowState" arguments))

(defun |setWindowTitle| (object &rest arguments)
  (%qinvoke-method object nil "setWindowTitle" arguments))

(defun |setWindow| (object &rest arguments)
  (%qinvoke-method object nil "setWindow" arguments))

(defun |setWizardStyle| (object &rest arguments)
  (%qinvoke-method object nil "setWizardStyle" arguments))

(defun |setWordSpacing| (object &rest arguments)
  (%qinvoke-method object nil "setWordSpacing" arguments))

(defun |setWordWrapMode| (object &rest arguments)
  (%qinvoke-method object nil "setWordWrapMode" arguments))

(defun |setWordWrap| (object &rest arguments)
  (%qinvoke-method object nil "setWordWrap" arguments))

(defun |setWorkingDirectory| (object &rest arguments)
  (%qinvoke-method object nil "setWorkingDirectory" arguments))

(defun |setWorldMatrixEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setWorldMatrixEnabled" arguments))

(defun |setWorldTransform| (object &rest arguments)
  (%qinvoke-method object nil "setWorldTransform" arguments))

(defun |setWrapAround| (object &rest arguments)
  (%qinvoke-method object nil "setWrapAround" arguments))

(defun |setWrapMode| (object &rest arguments)
  (%qinvoke-method object nil "setWrapMode" arguments))

(defun |setWrapping| (object &rest arguments)
  (%qinvoke-method object nil "setWrapping" arguments))

(defun |setWritingSystem| (object &rest arguments)
  (%qinvoke-method object nil "setWritingSystem" arguments))

(defun |setW| (object &rest arguments)
  (%qinvoke-method object nil "setW" arguments))

(defun |setXOffset| (object &rest arguments)
  (%qinvoke-method object nil "setXOffset" arguments))

(defun |setXScale| (object &rest arguments)
  (%qinvoke-method object nil "setXScale" arguments))

(defun |setX| (object &rest arguments)
  (%qinvoke-method object nil "setX" arguments))

(defun |setYOffset| (object &rest arguments)
  (%qinvoke-method object nil "setYOffset" arguments))

(defun |setYScale| (object &rest arguments)
  (%qinvoke-method object nil "setYScale" arguments))

(defun |setY| (object &rest arguments)
  (%qinvoke-method object nil "setY" arguments))

(defun |setZScale| (object &rest arguments)
  (%qinvoke-method object nil "setZScale" arguments))

(defun |setZValue| (object &rest arguments)
  (%qinvoke-method object nil "setZValue" arguments))

(defun |setZoomFactor| (object &rest arguments)
  (%qinvoke-method object nil "setZoomFactor" arguments))

(defun |setZoomMode| (object &rest arguments)
  (%qinvoke-method object nil "setZoomMode" arguments))

(defun |setZ| (object &rest arguments)
  (%qinvoke-method object nil "setZ" arguments))

(defun |setupViewport| (object &rest arguments)
  (%qinvoke-method object nil "setupViewport" arguments))

(defun |shadow| (object &rest arguments)
  (%qinvoke-method object nil "shadow" arguments))

(defun |shapeMode| (object &rest arguments)
  (%qinvoke-method object nil "shapeMode" arguments))

(defun |shape| (object &rest arguments)
  (%qinvoke-method object nil "shape" arguments))

(defun |shear| (object &rest arguments)
  (%qinvoke-method object nil "shear" arguments))

(defun |shortDayName.QDate| (&rest arguments)
  (%qinvoke-method "QDate" nil "shortDayName" arguments))

(defun |shortMonthName.QDate| (&rest arguments)
  (%qinvoke-method "QDate" nil "shortMonthName" arguments))

(defun |shortcutContext| (object &rest arguments)
  (%qinvoke-method object nil "shortcutContext" arguments))

(defun |shortcutId| (object &rest arguments)
  (%qinvoke-method object nil "shortcutId" arguments))

(defun |shortcuts| (object &rest arguments)
  (%qinvoke-method object nil "shortcuts" arguments))

(defun |shortcut| (object &rest arguments)
  (%qinvoke-method object nil "shortcut" arguments))

(defun |showColumn| (object &rest arguments)
  (%qinvoke-method object nil "showColumn" arguments))

(defun |showDropIndicator| (object &rest arguments)
  (%qinvoke-method object nil "showDropIndicator" arguments))

(defun |showExtension| (object &rest arguments)
  (%qinvoke-method object nil "showExtension" arguments))

(defun |showFullScreen| (object &rest arguments)
  (%qinvoke-method object nil "showFullScreen" arguments))

(defun |showGrid| (object &rest arguments)
  (%qinvoke-method object nil "showGrid" arguments))

(defun |showMaximized| (object &rest arguments)
  (%qinvoke-method object nil "showMaximized" arguments))

(defun |showMenu| (object &rest arguments)
  (%qinvoke-method object nil "showMenu" arguments))

(defun |showMessage| (object &rest arguments)
  (%qinvoke-method object nil "showMessage" arguments))

(defun |showMinimized| (object &rest arguments)
  (%qinvoke-method object nil "showMinimized" arguments))

(defun |showNextMonth| (object &rest arguments)
  (%qinvoke-method object nil "showNextMonth" arguments))

(defun |showNextYear| (object &rest arguments)
  (%qinvoke-method object nil "showNextYear" arguments))

(defun |showNormal| (object &rest arguments)
  (%qinvoke-method object nil "showNormal" arguments))

(defun |showPage| (object &rest arguments)
  (%qinvoke-method object nil "showPage" arguments))

(defun |showPopup| (object &rest arguments)
  (%qinvoke-method object nil "showPopup" arguments))

(defun |showPreviousMonth| (object &rest arguments)
  (%qinvoke-method object nil "showPreviousMonth" arguments))

(defun |showPreviousYear| (object &rest arguments)
  (%qinvoke-method object nil "showPreviousYear" arguments))

(defun |showRow| (object &rest arguments)
  (%qinvoke-method object nil "showRow" arguments))

(defun |showSection| (object &rest arguments)
  (%qinvoke-method object nil "showSection" arguments))

(defun |showSelectedDate| (object &rest arguments)
  (%qinvoke-method object nil "showSelectedDate" arguments))

(defun |showShaded| (object &rest arguments)
  (%qinvoke-method object nil "showShaded" arguments))

(defun |showStatusText| (object &rest arguments)
  (%qinvoke-method object nil "showStatusText" arguments))

(defun |showSystemMenu| (object &rest arguments)
  (%qinvoke-method object nil "showSystemMenu" arguments))

(defun |showText.QToolTip| (&rest arguments)
  (%qinvoke-method "QToolTip" nil "showText" arguments))

(defun |showText.QWhatsThis| (&rest arguments)
  (%qinvoke-method "QWhatsThis" nil "showText" arguments))

(defun |showToday| (object &rest arguments)
  (%qinvoke-method object nil "showToday" arguments))

(defun |show| (object &rest arguments)
  (%qinvoke-method object nil "show" arguments))

(defun |sibling| (object &rest arguments)
  (%qinvoke-method object nil "sibling" arguments))

(defun |sidebarUrls| (object &rest arguments)
  (%qinvoke-method object nil "sidebarUrls" arguments))

(defun |signalsBlocked| (object &rest arguments)
  (%qinvoke-method object nil "signalsBlocked" arguments))

(defun |signal| (object &rest arguments)
  (%qinvoke-method object nil "signal" arguments))

(defun |simplified| (object &rest arguments)
  (%qinvoke-method object nil "simplified" arguments))

(defun |singleStep| (object &rest arguments)
  (%qinvoke-method object nil "singleStep" arguments))

(defun |sizeAdjustPolicy| (object &rest arguments)
  (%qinvoke-method object nil "sizeAdjustPolicy" arguments))

(defun |sizeConstraint| (object &rest arguments)
  (%qinvoke-method object nil "sizeConstraint" arguments))

(defun |sizeFromContents| (object &rest arguments)
  (%qinvoke-method object nil "sizeFromContents" arguments))

(defun |sizeHintChanged| (object &rest arguments)
  (%qinvoke-method object nil "sizeHintChanged" arguments))

(defun |sizeHintForColumn| (object &rest arguments)
  (%qinvoke-method object nil "sizeHintForColumn" arguments))

(defun |sizeHintForIndex| (object &rest arguments)
  (%qinvoke-method object nil "sizeHintForIndex" arguments))

(defun |sizeHintForRow| (object &rest arguments)
  (%qinvoke-method object nil "sizeHintForRow" arguments))

(defun |sizeHint| (object &rest arguments)
  (%qinvoke-method object nil "sizeHint" arguments))

(defun |sizeIncrement| (object &rest arguments)
  (%qinvoke-method object nil "sizeIncrement" arguments))

(defun |sizePolicy| (object &rest arguments)
  (%qinvoke-method object nil "sizePolicy" arguments))

(defun |sizes| (object &rest arguments)
  (%qinvoke-method object nil "sizes" arguments))

(defun |size| (object &rest arguments)
  (%qinvoke-method object nil "size" arguments))

(defun |slerp.QQuaternion| (&rest arguments)
  (%qinvoke-method "QQuaternion" nil "slerp" arguments))

(defun |sliderMoved| (object &rest arguments)
  (%qinvoke-method object nil "sliderMoved" arguments))

(defun |sliderPositionFromValue.QStyle| (&rest arguments)
  (%qinvoke-method "QStyle" nil "sliderPositionFromValue" arguments))

(defun |sliderPosition| (object &rest arguments)
  (%qinvoke-method object nil "sliderPosition" arguments))

(defun |sliderPressed| (object &rest arguments)
  (%qinvoke-method object nil "sliderPressed" arguments))

(defun |sliderReleased| (object &rest arguments)
  (%qinvoke-method object nil "sliderReleased" arguments))

(defun |sliderValueFromPosition.QStyle| (&rest arguments)
  (%qinvoke-method "QStyle" nil "sliderValueFromPosition" arguments))

(defun |slopeAtPercent| (object &rest arguments)
  (%qinvoke-method object nil "slopeAtPercent" arguments))

(defun |smallDecimalPoint| (object &rest arguments)
  (%qinvoke-method object nil "smallDecimalPoint" arguments))

(defun |smoothSizes| (object &rest arguments)
  (%qinvoke-method object nil "smoothSizes" arguments))

(defun |softKeyRole| (object &rest arguments)
  (%qinvoke-method object nil "softKeyRole" arguments))

(defun |sortByColumn| (object &rest arguments)
  (%qinvoke-method object nil "sortByColumn" arguments))

(defun |sortCaseSensitivity| (object &rest arguments)
  (%qinvoke-method object nil "sortCaseSensitivity" arguments))

(defun |sortChildren| (object &rest arguments)
  (%qinvoke-method object nil "sortChildren" arguments))

(defun |sortColumn| (object &rest arguments)
  (%qinvoke-method object nil "sortColumn" arguments))

(defun |sortIndicatorChanged| (object &rest arguments)
  (%qinvoke-method object nil "sortIndicatorChanged" arguments))

(defun |sortIndicatorOrder| (object &rest arguments)
  (%qinvoke-method object nil "sortIndicatorOrder" arguments))

(defun |sortIndicatorSection| (object &rest arguments)
  (%qinvoke-method object nil "sortIndicatorSection" arguments))

(defun |sortItems| (object &rest arguments)
  (%qinvoke-method object nil "sortItems" arguments))

(defun |sortOrder| (object &rest arguments)
  (%qinvoke-method object nil "sortOrder" arguments))

(defun |sortRole| (object &rest arguments)
  (%qinvoke-method object nil "sortRole" arguments))

(defun |sorting| (object &rest arguments)
  (%qinvoke-method object nil "sorting" arguments))

(defun |sort| (object &rest arguments)
  (%qinvoke-method object nil "sort" arguments))

(defun |sourceBoundingRect| (object &rest arguments)
  (%qinvoke-method object nil "sourceBoundingRect" arguments))

(defun |sourceChanged| (object &rest arguments)
  (%qinvoke-method object nil "sourceChanged" arguments))

(defun |sourceIsPixmap| (object &rest arguments)
  (%qinvoke-method object nil "sourceIsPixmap" arguments))

(defun |sourceModel| (object &rest arguments)
  (%qinvoke-method object nil "sourceModel" arguments))

(defun |sourceState| (object &rest arguments)
  (%qinvoke-method object nil "sourceState" arguments))

(defun |source| (object &rest arguments)
  (%qinvoke-method object nil "source" arguments))

(defun |spacerItem| (object &rest arguments)
  (%qinvoke-method object nil "spacerItem" arguments))

(defun |spacing| (object &rest arguments)
  (%qinvoke-method object nil "spacing" arguments))

(defun |spanAngle| (object &rest arguments)
  (%qinvoke-method object nil "spanAngle" arguments))

(defun |span| (object &rest arguments)
  (%qinvoke-method object nil "span" arguments))

(defun |specialValueText| (object &rest arguments)
  (%qinvoke-method object nil "specialValueText" arguments))

(defun |spec| (object &rest arguments)
  (%qinvoke-method object nil "spec" arguments))

(defun |speed| (object &rest arguments)
  (%qinvoke-method object nil "speed" arguments))

(defun |split.QItemSelection| (&rest arguments)
  (%qinvoke-method "QItemSelection" nil "split" arguments))

(defun |splitCell| (object &rest arguments)
  (%qinvoke-method object nil "splitCell" arguments))

(defun |splitDockWidget| (object &rest arguments)
  (%qinvoke-method object nil "splitDockWidget" arguments))

(defun |splitPath| (object &rest arguments)
  (%qinvoke-method object nil "splitPath" arguments))

(defun |splitterMoved| (object &rest arguments)
  (%qinvoke-method object nil "splitterMoved" arguments))

(defun |splitter| (object &rest arguments)
  (%qinvoke-method object nil "splitter" arguments))

(defun |spontaneous| (object &rest arguments)
  (%qinvoke-method object nil "spontaneous" arguments))

(defun |spread| (object &rest arguments)
  (%qinvoke-method object nil "spread" arguments))

(defun |squareToQuad.QTransform| (&rest arguments)
  (%qinvoke-method "QTransform" nil "squareToQuad" arguments))

(defun |stackBefore| (object &rest arguments)
  (%qinvoke-method object nil "stackBefore" arguments))

(defun |stackUnder| (object &rest arguments)
  (%qinvoke-method object nil "stackUnder" arguments))

(defun |stackingMode| (object &rest arguments)
  (%qinvoke-method object nil "stackingMode" arguments))

(defun |stacks| (object &rest arguments)
  (%qinvoke-method object nil "stacks" arguments))

(defun |stack| (object &rest arguments)
  (%qinvoke-method object nil "stack" arguments))

(defun |standaloneDayName| (object &rest arguments)
  (%qinvoke-method object nil "standaloneDayName" arguments))

(defun |standaloneMonthName| (object &rest arguments)
  (%qinvoke-method object nil "standaloneMonthName" arguments))

(defun |standardButtons| (object &rest arguments)
  (%qinvoke-method object nil "standardButtons" arguments))

(defun |standardButton| (object &rest arguments)
  (%qinvoke-method object nil "standardButton" arguments))

(defun |standardFormat| (object &rest arguments)
  (%qinvoke-method object nil "standardFormat" arguments))

(defun |standardIconImplementation| (object &rest arguments)
  (%qinvoke-method object nil "standardIconImplementation" arguments))

(defun |standardIcon| (object &rest arguments)
  (%qinvoke-method object nil "standardIcon" arguments))

(defun |standardPalette| (object &rest arguments)
  (%qinvoke-method object nil "standardPalette" arguments))

(defun |standardPixmap| (object &rest arguments)
  (%qinvoke-method object nil "standardPixmap" arguments))

(defun |standardSizes.QFontDatabase| (&rest arguments)
  (%qinvoke-method "QFontDatabase" nil "standardSizes" arguments))

(defun |start(QString,QProcess::OpenMode)| (object &rest arguments)
  (%qinvoke-method object nil "start(QString,QProcess::OpenMode)" arguments))

(defun |start(QString,QStringList)| (object &rest arguments)
  (%qinvoke-method object nil "start(QString,QStringList)" arguments))

(defun |startAngle| (object &rest arguments)
  (%qinvoke-method object nil "startAngle" arguments))

(defun |startCenterPoint| (object &rest arguments)
  (%qinvoke-method object nil "startCenterPoint" arguments))

(defun |startDetached.QProcess| (&rest arguments)
  (%qinvoke-method "QProcess" nil "startDetached" arguments))

(defun |startDragDistance.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "startDragDistance" arguments))

(defun |startDragTime.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "startDragTime" arguments))

(defun |startFrame| (object &rest arguments)
  (%qinvoke-method object nil "startFrame" arguments))

(defun |startId| (object &rest arguments)
  (%qinvoke-method object nil "startId" arguments))

(defun |startTimer| (object &rest arguments)
  (%qinvoke-method object nil "startTimer" arguments))

(defun |startValue| (object &rest arguments)
  (%qinvoke-method object nil "startValue" arguments))

(defun |started| (object &rest arguments)
  (%qinvoke-method object nil "started" arguments))

(defun |startingUp.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "startingUp" arguments))

(defun |start| (object &rest arguments)
  (%qinvoke-method object nil "start" arguments))

(defun |stateChanged| (object &rest arguments)
  (%qinvoke-method object nil "stateChanged" arguments))

(defun |state| (object &rest arguments)
  (%qinvoke-method object nil "state" arguments))

(defun |staticInstances.QPluginLoader| (&rest arguments)
  (%qinvoke-method "QPluginLoader" nil "staticInstances" arguments))

(defun |staticMetaObject.QObject| (&rest arguments)
  (%qinvoke-method "QObject" nil "staticMetaObject" arguments))

(defun |statusBar| (object &rest arguments)
  (%qinvoke-method object nil "statusBar" arguments))

(defun |statusTip| (object &rest arguments)
  (%qinvoke-method object nil "statusTip" arguments))

(defun |status| (object &rest arguments)
  (%qinvoke-method object nil "status" arguments))

(defun |stepBy| (object &rest arguments)
  (%qinvoke-method object nil "stepBy" arguments))

(defun |stepDown| (object &rest arguments)
  (%qinvoke-method object nil "stepDown" arguments))

(defun |stepUp| (object &rest arguments)
  (%qinvoke-method object nil "stepUp" arguments))

(defun |stickyFocus| (object &rest arguments)
  (%qinvoke-method object nil "stickyFocus" arguments))

(defun |stopped| (object &rest arguments)
  (%qinvoke-method object nil "stopped" arguments))

(defun |stops| (object &rest arguments)
  (%qinvoke-method object nil "stops" arguments))

(defun |stop| (object &rest arguments)
  (%qinvoke-method object nil "stop" arguments))

(defun |storageLocation.QDesktopServices| (&rest arguments)
  (%qinvoke-method "QDesktopServices" nil "storageLocation" arguments))

(defun |strengthChanged| (object &rest arguments)
  (%qinvoke-method object nil "strengthChanged" arguments))

(defun |strength| (object &rest arguments)
  (%qinvoke-method object nil "strength" arguments))

(defun |stretchFactor| (object &rest arguments)
  (%qinvoke-method object nil "stretchFactor" arguments))

(defun |stretchLastSection| (object &rest arguments)
  (%qinvoke-method object nil "stretchLastSection" arguments))

(defun |stretchSectionCount| (object &rest arguments)
  (%qinvoke-method object nil "stretchSectionCount" arguments))

(defun |stretch| (object &rest arguments)
  (%qinvoke-method object nil "stretch" arguments))

(defun |strikeOutPos| (object &rest arguments)
  (%qinvoke-method object nil "strikeOutPos" arguments))

(defun |strikeOut| (object &rest arguments)
  (%qinvoke-method object nil "strikeOut" arguments))

(defun |stringList| (object &rest arguments)
  (%qinvoke-method object nil "stringList" arguments))

(defun |stringProperty| (object &rest arguments)
  (%qinvoke-method object nil "stringProperty" arguments))

(defun |string| (object &rest arguments)
  (%qinvoke-method object nil "string" arguments))

(defun |strokePath| (object &rest arguments)
  (%qinvoke-method object nil "strokePath" arguments))

(defun |style.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "style" arguments))

(defun |styleHint| (object &rest arguments)
  (%qinvoke-method object nil "styleHint" arguments))

(defun |styleSheet| (object &rest arguments)
  (%qinvoke-method object nil "styleSheet" arguments))

(defun |styleStrategy| (object &rest arguments)
  (%qinvoke-method object nil "styleStrategy" arguments))

(defun |styleString(QFont)| (object &rest arguments)
  (%qinvoke-method object nil "styleString(QFont)" arguments))

(defun |styleString(QFontInfo)| (object &rest arguments)
  (%qinvoke-method object nil "styleString(QFontInfo)" arguments))

(defun |styleString| (object &rest arguments)
  (%qinvoke-method object nil "styleString" arguments))

(defun |styles| (object &rest arguments)
  (%qinvoke-method object nil "styles" arguments))

(defun |style| (object &rest arguments)
  (%qinvoke-method object nil "style" arguments))

(defun |subControlRect| (object &rest arguments)
  (%qinvoke-method object nil "subControlRect" arguments))

(defun |subElementRect| (object &rest arguments)
  (%qinvoke-method object nil "subElementRect" arguments))

(defun |subTitleFormat| (object &rest arguments)
  (%qinvoke-method object nil "subTitleFormat" arguments))

(defun |subTitle| (object &rest arguments)
  (%qinvoke-method object nil "subTitle" arguments))

(defun |subWidgetRect| (object &rest arguments)
  (%qinvoke-method object nil "subWidgetRect" arguments))

(defun |subWindowActivated| (object &rest arguments)
  (%qinvoke-method object nil "subWindowActivated" arguments))

(defun |subWindowList| (object &rest arguments)
  (%qinvoke-method object nil "subWindowList" arguments))

(defun |submitPolicy| (object &rest arguments)
  (%qinvoke-method object nil "submitPolicy" arguments))

(defun |submit| (object &rest arguments)
  (%qinvoke-method object nil "submit" arguments))

(defun |substitute.QFont| (&rest arguments)
  (%qinvoke-method "QFont" nil "substitute" arguments))

(defun |substitutes.QFont| (&rest arguments)
  (%qinvoke-method "QFont" nil "substitutes" arguments))

(defun |substitutions.QFont| (&rest arguments)
  (%qinvoke-method "QFont" nil "substitutions" arguments))

(defun |subtractStep| (object &rest arguments)
  (%qinvoke-method object nil "subtractStep" arguments))

(defun |subtracted| (object &rest arguments)
  (%qinvoke-method object nil "subtracted" arguments))

(defun |suffix| (object &rest arguments)
  (%qinvoke-method object nil "suffix" arguments))

(defun |superClass| (object &rest arguments)
  (%qinvoke-method object nil "superClass" arguments))

(defun |supportedDocumentFormats.QTextDocumentWriter| (&rest arguments)
  (%qinvoke-method "QTextDocumentWriter" nil "supportedDocumentFormats" arguments))

(defun |supportedDragActions| (object &rest arguments)
  (%qinvoke-method object nil "supportedDragActions" arguments))

(defun |supportedDropActions| (object &rest arguments)
  (%qinvoke-method object nil "supportedDropActions" arguments))

(defun |supportedFormats.QMovie| (&rest arguments)
  (%qinvoke-method "QMovie" nil "supportedFormats" arguments))

(defun |supportedPaperSizes| (object &rest arguments)
  (%qinvoke-method object nil "supportedPaperSizes" arguments))

(defun |supportedResolutions| (object &rest arguments)
  (%qinvoke-method object nil "supportedResolutions" arguments))

(defun |supportsFindBuffer| (object &rest arguments)
  (%qinvoke-method object nil "supportsFindBuffer" arguments))

(defun |supportsMessages.QSystemTrayIcon| (&rest arguments)
  (%qinvoke-method "QSystemTrayIcon" nil "supportsMessages" arguments))

(defun |supportsSelection| (object &rest arguments)
  (%qinvoke-method object nil "supportsSelection" arguments))

(defun |supportsThreadedFontRendering.QFontDatabase| (&rest arguments)
  (%qinvoke-method "QFontDatabase" nil "supportsThreadedFontRendering" arguments))

(defun |swapSections| (object &rest arguments)
  (%qinvoke-method object nil "swapSections" arguments))

(defun |swipeAngle| (object &rest arguments)
  (%qinvoke-method object nil "swipeAngle" arguments))

(defun |symLinkTarget.QFile| (&rest arguments)
  (%qinvoke-method "QFile" nil "symLinkTarget" arguments))

(defun |symLinkTarget| (object &rest arguments)
  (%qinvoke-method object nil "symLinkTarget" arguments))

(defun |syncX.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "syncX" arguments))

(defun |sync| (object &rest arguments)
  (%qinvoke-method object nil "sync" arguments))

(defun |system.QLocale| (&rest arguments)
  (%qinvoke-method "QLocale" nil "system" arguments))

(defun |systemEnvironment.QProcessEnvironment| (&rest arguments)
  (%qinvoke-method "QProcessEnvironment" nil "systemEnvironment" arguments))

(defun |systemEnvironment.QProcess| (&rest arguments)
  (%qinvoke-method "QProcess" nil "systemEnvironment" arguments))

(defun |systemMenu| (object &rest arguments)
  (%qinvoke-method object nil "systemMenu" arguments))

(defun |tabArray| (object &rest arguments)
  (%qinvoke-method object nil "tabArray" arguments))

(defun |tabAt| (object &rest arguments)
  (%qinvoke-method object nil "tabAt" arguments))

(defun |tabBar| (object &rest arguments)
  (%qinvoke-method object nil "tabBar" arguments))

(defun |tabButton| (object &rest arguments)
  (%qinvoke-method object nil "tabButton" arguments))

(defun |tabChangesFocus| (object &rest arguments)
  (%qinvoke-method object nil "tabChangesFocus" arguments))

(defun |tabCloseRequested| (object &rest arguments)
  (%qinvoke-method object nil "tabCloseRequested" arguments))

(defun |tabData| (object &rest arguments)
  (%qinvoke-method object nil "tabData" arguments))

(defun |tabIcon| (object &rest arguments)
  (%qinvoke-method object nil "tabIcon" arguments))

(defun |tabKeyNavigation| (object &rest arguments)
  (%qinvoke-method object nil "tabKeyNavigation" arguments))

(defun |tabMoved| (object &rest arguments)
  (%qinvoke-method object nil "tabMoved" arguments))

(defun |tabPositions| (object &rest arguments)
  (%qinvoke-method object nil "tabPositions" arguments))

(defun |tabPosition| (object &rest arguments)
  (%qinvoke-method object nil "tabPosition" arguments))

(defun |tabRect| (object &rest arguments)
  (%qinvoke-method object nil "tabRect" arguments))

(defun |tabShape| (object &rest arguments)
  (%qinvoke-method object nil "tabShape" arguments))

(defun |tabStopWidth| (object &rest arguments)
  (%qinvoke-method object nil "tabStopWidth" arguments))

(defun |tabStop| (object &rest arguments)
  (%qinvoke-method object nil "tabStop" arguments))

(defun |tabTextColor| (object &rest arguments)
  (%qinvoke-method object nil "tabTextColor" arguments))

(defun |tabText| (object &rest arguments)
  (%qinvoke-method object nil "tabText" arguments))

(defun |tabToolTip| (object &rest arguments)
  (%qinvoke-method object nil "tabToolTip" arguments))

(defun |tabWhatsThis| (object &rest arguments)
  (%qinvoke-method object nil "tabWhatsThis" arguments))

(defun |tabifiedDockWidgets| (object &rest arguments)
  (%qinvoke-method object nil "tabifiedDockWidgets" arguments))

(defun |tabifyDockWidget| (object &rest arguments)
  (%qinvoke-method object nil "tabifyDockWidget" arguments))

(defun |tableCellFormatIndex| (object &rest arguments)
  (%qinvoke-method object nil "tableCellFormatIndex" arguments))

(defun |tableWidget| (object &rest arguments)
  (%qinvoke-method object nil "tableWidget" arguments))

(defun |tabsClosable| (object &rest arguments)
  (%qinvoke-method object nil "tabsClosable" arguments))

(defun |takeAnimation| (object &rest arguments)
  (%qinvoke-method object nil "takeAnimation" arguments))

(defun |takeAt| (object &rest arguments)
  (%qinvoke-method object nil "takeAt" arguments))

(defun |takeChildren| (object &rest arguments)
  (%qinvoke-method object nil "takeChildren" arguments))

(defun |takeChild| (object &rest arguments)
  (%qinvoke-method object nil "takeChild" arguments))

(defun |takeColumn| (object &rest arguments)
  (%qinvoke-method object nil "takeColumn" arguments))

(defun |takeHorizontalHeaderItem| (object &rest arguments)
  (%qinvoke-method object nil "takeHorizontalHeaderItem" arguments))

(defun |takeItem| (object &rest arguments)
  (%qinvoke-method object nil "takeItem" arguments))

(defun |takeRow| (object &rest arguments)
  (%qinvoke-method object nil "takeRow" arguments))

(defun |takeTopLevelItem| (object &rest arguments)
  (%qinvoke-method object nil "takeTopLevelItem" arguments))

(defun |takeVerticalHeaderItem| (object &rest arguments)
  (%qinvoke-method object nil "takeVerticalHeaderItem" arguments))

(defun |takeWidget| (object &rest arguments)
  (%qinvoke-method object nil "takeWidget" arguments))

(defun |tangentialPressure| (object &rest arguments)
  (%qinvoke-method object nil "tangentialPressure" arguments))

(defun |targetChanged| (object &rest arguments)
  (%qinvoke-method object nil "targetChanged" arguments))

(defun |targetObject| (object &rest arguments)
  (%qinvoke-method object nil "targetObject" arguments))

(defun |targetStates| (object &rest arguments)
  (%qinvoke-method object nil "targetStates" arguments))

(defun |targetState| (object &rest arguments)
  (%qinvoke-method object nil "targetState" arguments))

(defun |target| (object &rest arguments)
  (%qinvoke-method object nil "target" arguments))

(defun |temp.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "temp" arguments))

(defun |tempPath.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "tempPath" arguments))

(defun |terminate| (object &rest arguments)
  (%qinvoke-method object nil "terminate" arguments))

(defun |testAttribute.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "testAttribute" arguments))

(defun |testAttribute| (object &rest arguments)
  (%qinvoke-method object nil "testAttribute" arguments))

(defun |testBit| (object &rest arguments)
  (%qinvoke-method object nil "testBit" arguments))

(defun |testOption| (object &rest arguments)
  (%qinvoke-method object nil "testOption" arguments))

(defun |testRenderHint| (object &rest arguments)
  (%qinvoke-method object nil "testRenderHint" arguments))

(defun |text(QClipboard::Mode)| (object &rest arguments)
  (%qinvoke-method object nil "text(QClipboard::Mode)" arguments))

(defun |text(QString&)| (object &rest arguments)
  (%qinvoke-method object nil "text(QString&)" arguments))

(defun |text.QToolTip| (&rest arguments)
  (%qinvoke-method "QToolTip" nil "text" arguments))

(defun |textAlignment| (object &rest arguments)
  (%qinvoke-method object nil "textAlignment" arguments))

(defun |textBackgroundColor| (object &rest arguments)
  (%qinvoke-method object nil "textBackgroundColor" arguments))

(defun |textChanged| (object &rest arguments)
  (%qinvoke-method object nil "textChanged" arguments))

(defun |textColor| (object &rest arguments)
  (%qinvoke-method object nil "textColor" arguments))

(defun |textCursor| (object &rest arguments)
  (%qinvoke-method object nil "textCursor" arguments))

(defun |textDirection| (object &rest arguments)
  (%qinvoke-method object nil "textDirection" arguments))

(defun |textEchoMode| (object &rest arguments)
  (%qinvoke-method object nil "textEchoMode" arguments))

(defun |textEdited| (object &rest arguments)
  (%qinvoke-method object nil "textEdited" arguments))

(defun |textElideMode| (object &rest arguments)
  (%qinvoke-method object nil "textElideMode" arguments))

(defun |textFormat| (object &rest arguments)
  (%qinvoke-method object nil "textFormat" arguments))

(defun |textFromValue| (object &rest arguments)
  (%qinvoke-method object nil "textFromValue" arguments))

(defun |textIndent| (object &rest arguments)
  (%qinvoke-method object nil "textIndent" arguments))

(defun |textInteractionFlags| (object &rest arguments)
  (%qinvoke-method object nil "textInteractionFlags" arguments))

(defun |textKeys| (object &rest arguments)
  (%qinvoke-method object nil "textKeys" arguments))

(defun |textLength| (object &rest arguments)
  (%qinvoke-method object nil "textLength" arguments))

(defun |textList| (object &rest arguments)
  (%qinvoke-method object nil "textList" arguments))

(defun |textMargins| (object &rest arguments)
  (%qinvoke-method object nil "textMargins" arguments))

(defun |textOption| (object &rest arguments)
  (%qinvoke-method object nil "textOption" arguments))

(defun |textOutline| (object &rest arguments)
  (%qinvoke-method object nil "textOutline" arguments))

(defun |textStart| (object &rest arguments)
  (%qinvoke-method object nil "textStart" arguments))

(defun |textValueChanged| (object &rest arguments)
  (%qinvoke-method object nil "textValueChanged" arguments))

(defun |textValueSelected| (object &rest arguments)
  (%qinvoke-method object nil "textValueSelected" arguments))

(defun |textValue| (object &rest arguments)
  (%qinvoke-method object nil "textValue" arguments))

(defun |textWidth| (object &rest arguments)
  (%qinvoke-method object nil "textWidth" arguments))

(defun |textureImage| (object &rest arguments)
  (%qinvoke-method object nil "textureImage" arguments))

(defun |texture| (object &rest arguments)
  (%qinvoke-method object nil "texture" arguments))

(defun |text| (object &rest arguments)
  (%qinvoke-method object nil "text" arguments))

(defun |themeName.QIcon| (&rest arguments)
  (%qinvoke-method "QIcon" nil "themeName" arguments))

(defun |themeSearchPaths.QIcon| (&rest arguments)
  (%qinvoke-method "QIcon" nil "themeSearchPaths" arguments))

(defun |thread| (object &rest arguments)
  (%qinvoke-method object nil "thread" arguments))

(defun |tickInterval| (object &rest arguments)
  (%qinvoke-method object nil "tickInterval" arguments))

(defun |tickPosition| (object &rest arguments)
  (%qinvoke-method object nil "tickPosition" arguments))

(defun |tightBoundingRect| (object &rest arguments)
  (%qinvoke-method object nil "tightBoundingRect" arguments))

(defun |tileSubWindows| (object &rest arguments)
  (%qinvoke-method object nil "tileSubWindows" arguments))

(defun |tile| (object &rest arguments)
  (%qinvoke-method object nil "tile" arguments))

(defun |timeChanged| (object &rest arguments)
  (%qinvoke-method object nil "timeChanged" arguments))

(defun |timeFormat| (object &rest arguments)
  (%qinvoke-method object nil "timeFormat" arguments))

(defun |timeSpec| (object &rest arguments)
  (%qinvoke-method object nil "timeSpec" arguments))

(defun |timeout| (object &rest arguments)
  (%qinvoke-method object nil "timeout" arguments))

(defun |timerId| (object &rest arguments)
  (%qinvoke-method object nil "timerId" arguments))

(defun |time| (object &rest arguments)
  (%qinvoke-method object nil "time" arguments))

(defun |tip| (object &rest arguments)
  (%qinvoke-method object nil "tip" arguments))

(defun |titleBarWidget| (object &rest arguments)
  (%qinvoke-method object nil "titleBarWidget" arguments))

(defun |titleFormat| (object &rest arguments)
  (%qinvoke-method object nil "titleFormat" arguments))

(defun |title| (object &rest arguments)
  (%qinvoke-method object nil "title" arguments))

(defun |toAce.QUrl| (&rest arguments)
  (%qinvoke-method "QUrl" nil "toAce" arguments))

(defun |toAffine| (object &rest arguments)
  (%qinvoke-method object nil "toAffine" arguments))

(defun |toBitArray| (object &rest arguments)
  (%qinvoke-method object nil "toBitArray" arguments))

(defun |toBlockFormat| (object &rest arguments)
  (%qinvoke-method object nil "toBlockFormat" arguments))

(defun |toBool| (object &rest arguments)
  (%qinvoke-method object nil "toBool" arguments))

(defun |toByteArray| (object &rest arguments)
  (%qinvoke-method object nil "toByteArray" arguments))

(defun |toCharFormat| (object &rest arguments)
  (%qinvoke-method object nil "toCharFormat" arguments))

(defun |toChar| (object &rest arguments)
  (%qinvoke-method object nil "toChar" arguments))

(defun |toCmyk| (object &rest arguments)
  (%qinvoke-method object nil "toCmyk" arguments))

(defun |toDate(QString,QLocale::FormatType)| (object &rest arguments)
  (%qinvoke-method object nil "toDate(QString,QLocale::FormatType)" arguments))

(defun |toDate(QString,QString)| (object &rest arguments)
  (%qinvoke-method object nil "toDate(QString,QString)" arguments))

(defun |toDateTime(QString,QLocale::FormatType)| (object &rest arguments)
  (%qinvoke-method object nil "toDateTime(QString,QLocale::FormatType)" arguments))

(defun |toDateTime(QString,QString)| (object &rest arguments)
  (%qinvoke-method object nil "toDateTime(QString,QString)" arguments))

(defun |toDateTime| (object &rest arguments)
  (%qinvoke-method object nil "toDateTime" arguments))

(defun |toDate| (object &rest arguments)
  (%qinvoke-method object nil "toDate" arguments))

(defun |toDouble| (object &rest arguments)
  (%qinvoke-method object nil "toDouble" arguments))

(defun |toEncoded| (object &rest arguments)
  (%qinvoke-method object nil "toEncoded" arguments))

(defun |toEnd| (object &rest arguments)
  (%qinvoke-method object nil "toEnd" arguments))

(defun |toFillPolygon(QMatrix)| (object &rest arguments)
  (%qinvoke-method object nil "toFillPolygon(QMatrix)" arguments))

(defun |toFillPolygon(QTransform)| (object &rest arguments)
  (%qinvoke-method object nil "toFillPolygon(QTransform)" arguments))

(defun |toFillPolygons(QMatrix)| (object &rest arguments)
  (%qinvoke-method object nil "toFillPolygons(QMatrix)" arguments))

(defun |toFillPolygons(QTransform)| (object &rest arguments)
  (%qinvoke-method object nil "toFillPolygons(QTransform)" arguments))

(defun |toFillPolygons| (object &rest arguments)
  (%qinvoke-method object nil "toFillPolygons" arguments))

(defun |toFillPolygon| (object &rest arguments)
  (%qinvoke-method object nil "toFillPolygon" arguments))

(defun |toFirst| (object &rest arguments)
  (%qinvoke-method object nil "toFirst" arguments))

(defun |toFloat| (object &rest arguments)
  (%qinvoke-method object nil "toFloat" arguments))

(defun |toFrameFormat| (object &rest arguments)
  (%qinvoke-method object nil "toFrameFormat" arguments))

(defun |toGraphicsObject| (object &rest arguments)
  (%qinvoke-method object nil "toGraphicsObject" arguments))

(defun |toHsl| (object &rest arguments)
  (%qinvoke-method object nil "toHsl" arguments))

(defun |toHsv| (object &rest arguments)
  (%qinvoke-method object nil "toHsv" arguments))

(defun |toHtml| (object &rest arguments)
  (%qinvoke-method object nil "toHtml" arguments))

(defun |toImageFormat| (object &rest arguments)
  (%qinvoke-method object nil "toImageFormat" arguments))

(defun |toImage| (object &rest arguments)
  (%qinvoke-method object nil "toImage" arguments))

(defun |toInt| (object &rest arguments)
  (%qinvoke-method object nil "toInt" arguments))

(defun |toJulianDay| (object &rest arguments)
  (%qinvoke-method object nil "toJulianDay" arguments))

(defun |toLast| (object &rest arguments)
  (%qinvoke-method object nil "toLast" arguments))

(defun |toLineF| (object &rest arguments)
  (%qinvoke-method object nil "toLineF" arguments))

(defun |toLine| (object &rest arguments)
  (%qinvoke-method object nil "toLine" arguments))

(defun |toListFormat| (object &rest arguments)
  (%qinvoke-method object nil "toListFormat" arguments))

(defun |toLocalFile| (object &rest arguments)
  (%qinvoke-method object nil "toLocalFile" arguments))

(defun |toLocalTime| (object &rest arguments)
  (%qinvoke-method object nil "toLocalTime" arguments))

(defun |toLocale| (object &rest arguments)
  (%qinvoke-method object nil "toLocale" arguments))

(defun |toLongLong| (object &rest arguments)
  (%qinvoke-method object nil "toLongLong" arguments))

(defun |toNativeSeparators.QDir| (&rest arguments)
  (%qinvoke-method "QDir" nil "toNativeSeparators" arguments))

(defun |toNextBoundary| (object &rest arguments)
  (%qinvoke-method object nil "toNextBoundary" arguments))

(defun |toNext| (object &rest arguments)
  (%qinvoke-method object nil "toNext" arguments))

(defun |toPage| (object &rest arguments)
  (%qinvoke-method object nil "toPage" arguments))

(defun |toPercentEncoding.QUrl| (&rest arguments)
  (%qinvoke-method "QUrl" nil "toPercentEncoding" arguments))

(defun |toPlainText| (object &rest arguments)
  (%qinvoke-method object nil "toPlainText" arguments))

(defun |toPointF| (object &rest arguments)
  (%qinvoke-method object nil "toPointF" arguments))

(defun |toPoint| (object &rest arguments)
  (%qinvoke-method object nil "toPoint" arguments))

(defun |toPreviousBoundary| (object &rest arguments)
  (%qinvoke-method object nil "toPreviousBoundary" arguments))

(defun |toPrevious| (object &rest arguments)
  (%qinvoke-method object nil "toPrevious" arguments))

(defun |toReal| (object &rest arguments)
  (%qinvoke-method object nil "toReal" arguments))

(defun |toRectF| (object &rest arguments)
  (%qinvoke-method object nil "toRectF" arguments))

(defun |toRect| (object &rest arguments)
  (%qinvoke-method object nil "toRect" arguments))

(defun |toRegExp| (object &rest arguments)
  (%qinvoke-method object nil "toRegExp" arguments))

(defun |toReversed| (object &rest arguments)
  (%qinvoke-method object nil "toReversed" arguments))

(defun |toRgb| (object &rest arguments)
  (%qinvoke-method object nil "toRgb" arguments))

(defun |toShort| (object &rest arguments)
  (%qinvoke-method object nil "toShort" arguments))

(defun |toSizeF| (object &rest arguments)
  (%qinvoke-method object nil "toSizeF" arguments))

(defun |toSize| (object &rest arguments)
  (%qinvoke-method object nil "toSize" arguments))

(defun |toStart| (object &rest arguments)
  (%qinvoke-method object nil "toStart" arguments))

(defun |toString(QDate)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QDate)" arguments))

(defun |toString(QDate,QLocale::FormatType)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QDate,QLocale::FormatType)" arguments))

(defun |toString(QDate,QString)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QDate,QString)" arguments))

(defun |toString(QDate...)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QDate...)" arguments))

(defun |toString(QDateTime)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QDateTime)" arguments))

(defun |toString(QDateTime,QLocale::FormatType)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QDateTime,QLocale::FormatType)" arguments))

(defun |toString(QDateTime,QString)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QDateTime,QString)" arguments))

(defun |toString(QDateTime...)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QDateTime...)" arguments))

(defun |toString(QString)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QString)" arguments))

(defun |toString(QTime)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QTime)" arguments))

(defun |toString(QTime,QLocale::FormatType)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QTime,QLocale::FormatType)" arguments))

(defun |toString(QTime,QString)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QTime,QString)" arguments))

(defun |toString(QTime...)| (object &rest arguments)
  (%qinvoke-method object nil "toString(QTime...)" arguments))

(defun |toString(Qt::DateFormat)| (object &rest arguments)
  (%qinvoke-method object nil "toString(Qt::DateFormat)" arguments))

(defun |toString(double)| (object &rest arguments)
  (%qinvoke-method object nil "toString(double)" arguments))

(defun |toString(double...)| (object &rest arguments)
  (%qinvoke-method object nil "toString(double...)" arguments))

(defun |toString(float)| (object &rest arguments)
  (%qinvoke-method object nil "toString(float)" arguments))

(defun |toString(float...)| (object &rest arguments)
  (%qinvoke-method object nil "toString(float...)" arguments))

(defun |toString(int)| (object &rest arguments)
  (%qinvoke-method object nil "toString(int)" arguments))

(defun |toString(qlonglong)| (object &rest arguments)
  (%qinvoke-method object nil "toString(qlonglong)" arguments))

(defun |toString(qulonglong)| (object &rest arguments)
  (%qinvoke-method object nil "toString(qulonglong)" arguments))

(defun |toString(short)| (object &rest arguments)
  (%qinvoke-method object nil "toString(short)" arguments))

(defun |toString(uint)| (object &rest arguments)
  (%qinvoke-method object nil "toString(uint)" arguments))

(defun |toString(ushort)| (object &rest arguments)
  (%qinvoke-method object nil "toString(ushort)" arguments))

(defun |toStringList| (object &rest arguments)
  (%qinvoke-method object nil "toStringList" arguments))

(defun |toString| (object &rest arguments)
  (%qinvoke-method object nil "toString" arguments))

(defun |toSubpathPolygons(QMatrix)| (object &rest arguments)
  (%qinvoke-method object nil "toSubpathPolygons(QMatrix)" arguments))

(defun |toSubpathPolygons(QTransform)| (object &rest arguments)
  (%qinvoke-method object nil "toSubpathPolygons(QTransform)" arguments))

(defun |toSubpathPolygons| (object &rest arguments)
  (%qinvoke-method object nil "toSubpathPolygons" arguments))

(defun |toTableCellFormat| (object &rest arguments)
  (%qinvoke-method object nil "toTableCellFormat" arguments))

(defun |toTableFormat| (object &rest arguments)
  (%qinvoke-method object nil "toTableFormat" arguments))

(defun |toTime(QString,QLocale::FormatType)| (object &rest arguments)
  (%qinvoke-method object nil "toTime(QString,QLocale::FormatType)" arguments))

(defun |toTime(QString,QString)| (object &rest arguments)
  (%qinvoke-method object nil "toTime(QString,QString)" arguments))

(defun |toTimeSpec| (object &rest arguments)
  (%qinvoke-method object nil "toTimeSpec" arguments))

(defun |toTime_t| (object &rest arguments)
  (%qinvoke-method object nil "toTime_t" arguments))

(defun |toTime| (object &rest arguments)
  (%qinvoke-method object nil "toTime" arguments))

(defun |toTransform| (object &rest arguments)
  (%qinvoke-method object nil "toTransform" arguments))

(defun |toUInt| (object &rest arguments)
  (%qinvoke-method object nil "toUInt" arguments))

(defun |toULongLong| (object &rest arguments)
  (%qinvoke-method object nil "toULongLong" arguments))

(defun |toUShort| (object &rest arguments)
  (%qinvoke-method object nil "toUShort" arguments))

(defun |toUTC| (object &rest arguments)
  (%qinvoke-method object nil "toUTC" arguments))

(defun |toUnicode(QByteArray)| (object &rest arguments)
  (%qinvoke-method object nil "toUnicode(QByteArray)" arguments))

(defun |toUnicode(const char*)| (object &rest arguments)
  (%qinvoke-method object nil "toUnicode(const char*)" arguments))

(defun |toUnicode| (object &rest arguments)
  (%qinvoke-method object nil "toUnicode" arguments))

(defun |toUrl| (object &rest arguments)
  (%qinvoke-method object nil "toUrl" arguments))

(defun |toVector2DAffine| (object &rest arguments)
  (%qinvoke-method object nil "toVector2DAffine" arguments))

(defun |toVector2D| (object &rest arguments)
  (%qinvoke-method object nil "toVector2D" arguments))

(defun |toVector3DAffine| (object &rest arguments)
  (%qinvoke-method object nil "toVector3DAffine" arguments))

(defun |toVector3D| (object &rest arguments)
  (%qinvoke-method object nil "toVector3D" arguments))

(defun |toVector4D| (object &rest arguments)
  (%qinvoke-method object nil "toVector4D" arguments))

(defun |toggleBit| (object &rest arguments)
  (%qinvoke-method object nil "toggleBit" arguments))

(defun |toggleDirection| (object &rest arguments)
  (%qinvoke-method object nil "toggleDirection" arguments))

(defun |toggleViewAction| (object &rest arguments)
  (%qinvoke-method object nil "toggleViewAction" arguments))

(defun |toggled| (object &rest arguments)
  (%qinvoke-method object nil "toggled" arguments))

(defun |toggle| (object &rest arguments)
  (%qinvoke-method object nil "toggle" arguments))

(defun |toolBarArea| (object &rest arguments)
  (%qinvoke-method object nil "toolBarArea" arguments))

(defun |toolBarBreak| (object &rest arguments)
  (%qinvoke-method object nil "toolBarBreak" arguments))

(defun |toolButtonStyleChanged| (object &rest arguments)
  (%qinvoke-method object nil "toolButtonStyleChanged" arguments))

(defun |toolButtonStyle| (object &rest arguments)
  (%qinvoke-method object nil "toolButtonStyle" arguments))

(defun |toolTipBase| (object &rest arguments)
  (%qinvoke-method object nil "toolTipBase" arguments))

(defun |toolTipText| (object &rest arguments)
  (%qinvoke-method object nil "toolTipText" arguments))

(defun |toolTip| (object &rest arguments)
  (%qinvoke-method object nil "toolTip" arguments))

(defun |topLeft| (object &rest arguments)
  (%qinvoke-method object nil "topLeft" arguments))

(defun |topLevelAt.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "topLevelAt" arguments))

(defun |topLevelChanged| (object &rest arguments)
  (%qinvoke-method object nil "topLevelChanged" arguments))

(defun |topLevelItemCount| (object &rest arguments)
  (%qinvoke-method object nil "topLevelItemCount" arguments))

(defun |topLevelItem| (object &rest arguments)
  (%qinvoke-method object nil "topLevelItem" arguments))

(defun |topLevelWidgets.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "topLevelWidgets" arguments))

(defun |topLevelWidget| (object &rest arguments)
  (%qinvoke-method object nil "topLevelWidget" arguments))

(defun |topMargin| (object &rest arguments)
  (%qinvoke-method object nil "topMargin" arguments))

(defun |topPadding| (object &rest arguments)
  (%qinvoke-method object nil "topPadding" arguments))

(defun |topRow| (object &rest arguments)
  (%qinvoke-method object nil "topRow" arguments))

(defun |top| (object &rest arguments)
  (%qinvoke-method object nil "top" arguments))

(defun |totalChangeFlags| (object &rest arguments)
  (%qinvoke-method object nil "totalChangeFlags" arguments))

(defun |totalDuration| (object &rest arguments)
  (%qinvoke-method object nil "totalDuration" arguments))

(defun |totalRotationAngle| (object &rest arguments)
  (%qinvoke-method object nil "totalRotationAngle" arguments))

(defun |totalScaleFactor| (object &rest arguments)
  (%qinvoke-method object nil "totalScaleFactor" arguments))

(defun |touchPointStates| (object &rest arguments)
  (%qinvoke-method object nil "touchPointStates" arguments))

(defun |touchPoints| (object &rest arguments)
  (%qinvoke-method object nil "touchPoints" arguments))

(defun |tr.QObject| (&rest arguments)
  (%qinvoke-method "QObject" nil "tr" arguments))

(defun |trUtf8.QObject| (&rest arguments)
  (%qinvoke-method "QObject" nil "trUtf8" arguments))

(defun |transformOriginPoint| (object &rest arguments)
  (%qinvoke-method object nil "transformOriginPoint" arguments))

(defun |transformationAnchor| (object &rest arguments)
  (%qinvoke-method object nil "transformationAnchor" arguments))

(defun |transformationMode| (object &rest arguments)
  (%qinvoke-method object nil "transformationMode" arguments))

(defun |transformations| (object &rest arguments)
  (%qinvoke-method object nil "transformations" arguments))

(defun |transformed(QMatrix)| (object &rest arguments)
  (%qinvoke-method object nil "transformed(QMatrix)" arguments))

(defun |transformed(QMatrix...)| (object &rest arguments)
  (%qinvoke-method object nil "transformed(QMatrix...)" arguments))

(defun |transformed(QTransform)| (object &rest arguments)
  (%qinvoke-method object nil "transformed(QTransform)" arguments))

(defun |transformed(QTransform...)| (object &rest arguments)
  (%qinvoke-method object nil "transformed(QTransform...)" arguments))

(defun |transformed| (object &rest arguments)
  (%qinvoke-method object nil "transformed" arguments))

(defun |transform| (object &rest arguments)
  (%qinvoke-method object nil "transform" arguments))

(defun |translate(QPoint)| (object &rest arguments)
  (%qinvoke-method object nil "translate(QPoint)" arguments))

(defun |translate(QPointF)| (object &rest arguments)
  (%qinvoke-method object nil "translate(QPointF)" arguments))

(defun |translate.QCoreApplication| (&rest arguments)
  (%qinvoke-method "QCoreApplication" nil "translate" arguments))

(defun |translated| (object &rest arguments)
  (%qinvoke-method object nil "translated" arguments))

(defun |translate| (object &rest arguments)
  (%qinvoke-method object nil "translate" arguments))

(defun |transposed| (object &rest arguments)
  (%qinvoke-method object nil "transposed" arguments))

(defun |transpose| (object &rest arguments)
  (%qinvoke-method object nil "transpose" arguments))

(defun |treeWidget| (object &rest arguments)
  (%qinvoke-method object nil "treeWidget" arguments))

(defun |triggerAction| (object &rest arguments)
  (%qinvoke-method object nil "triggerAction" arguments))

(defun |triggered| (object &rest arguments)
  (%qinvoke-method object nil "triggered" arguments))

(defun |trigger| (object &rest arguments)
  (%qinvoke-method object nil "trigger" arguments))

(defun |trueMatrix(QMatrix...).QImage| (&rest arguments)
  (%qinvoke-method "QImage" nil "trueMatrix(QMatrix...)" arguments))

(defun |trueMatrix(QMatrix...).QPixmap| (&rest arguments)
  (%qinvoke-method "QPixmap" nil "trueMatrix(QMatrix...)" arguments))

(defun |trueMatrix(QTransform...).QImage| (&rest arguments)
  (%qinvoke-method "QImage" nil "trueMatrix(QTransform...)" arguments))

(defun |trueMatrix(QTransform...).QPixmap| (&rest arguments)
  (%qinvoke-method "QPixmap" nil "trueMatrix(QTransform...)" arguments))

(defun |trueMatrix.QImage| (&rest arguments)
  (%qinvoke-method "QImage" nil "trueMatrix" arguments))

(defun |trueMatrix.QPixmap| (&rest arguments)
  (%qinvoke-method "QPixmap" nil "trueMatrix" arguments))

(defun |truncate| (object &rest arguments)
  (%qinvoke-method object nil "truncate" arguments))

(defun |tryAcquire| (object &rest arguments)
  (%qinvoke-method object nil "tryAcquire" arguments))

(defun |tryLockForRead| (object &rest arguments)
  (%qinvoke-method object nil "tryLockForRead" arguments))

(defun |tryLockForWrite| (object &rest arguments)
  (%qinvoke-method object nil "tryLockForWrite" arguments))

(defun |type.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "type" arguments))

(defun |typeName| (object &rest arguments)
  (%qinvoke-method object nil "typeName" arguments))

(defun |typeToName.QVariant| (&rest arguments)
  (%qinvoke-method "QVariant" nil "typeToName" arguments))

(defun |type| (object &rest arguments)
  (%qinvoke-method object nil "type" arguments))

(defun |underMouse| (object &rest arguments)
  (%qinvoke-method object nil "underMouse" arguments))

(defun |underlineColor| (object &rest arguments)
  (%qinvoke-method object nil "underlineColor" arguments))

(defun |underlinePos| (object &rest arguments)
  (%qinvoke-method object nil "underlinePos" arguments))

(defun |underlineStyle| (object &rest arguments)
  (%qinvoke-method object nil "underlineStyle" arguments))

(defun |underline| (object &rest arguments)
  (%qinvoke-method object nil "underline" arguments))

(defun |undoAvailable| (object &rest arguments)
  (%qinvoke-method object nil "undoAvailable" arguments))

(defun |undoCommandAdded| (object &rest arguments)
  (%qinvoke-method object nil "undoCommandAdded" arguments))

(defun |undoLimit| (object &rest arguments)
  (%qinvoke-method object nil "undoLimit" arguments))

(defun |undoTextChanged| (object &rest arguments)
  (%qinvoke-method object nil "undoTextChanged" arguments))

(defun |undoText| (object &rest arguments)
  (%qinvoke-method object nil "undoText" arguments))

(defun |undo| (object &rest arguments)
  (%qinvoke-method object nil "undo" arguments))

(defun |ungetChar| (object &rest arguments)
  (%qinvoke-method object nil "ungetChar" arguments))

(defun |ungrabGesture| (object &rest arguments)
  (%qinvoke-method object nil "ungrabGesture" arguments))

(defun |ungrabKeyboard| (object &rest arguments)
  (%qinvoke-method object nil "ungrabKeyboard" arguments))

(defun |ungrabMouse| (object &rest arguments)
  (%qinvoke-method object nil "ungrabMouse" arguments))

(defun |unifiedTitleAndToolBarOnMac| (object &rest arguments)
  (%qinvoke-method object nil "unifiedTitleAndToolBarOnMac" arguments))

(defun |uniformItemSizes| (object &rest arguments)
  (%qinvoke-method object nil "uniformItemSizes" arguments))

(defun |uniformRowHeights| (object &rest arguments)
  (%qinvoke-method object nil "uniformRowHeights" arguments))

(defun |uniqueId| (object &rest arguments)
  (%qinvoke-method object nil "uniqueId" arguments))

(defun |united(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "united(QRect)" arguments))

(defun |united(QRegion)| (object &rest arguments)
  (%qinvoke-method object nil "united(QRegion)" arguments))

(defun |united| (object &rest arguments)
  (%qinvoke-method object nil "united" arguments))

(defun |unixSignal| (object &rest arguments)
  (%qinvoke-method object nil "unixSignal" arguments))

(defun |unload| (object &rest arguments)
  (%qinvoke-method object nil "unload" arguments))

(defun |unlock| (object &rest arguments)
  (%qinvoke-method object nil "unlock" arguments))

(defun |unpolish(QApplication*)| (object &rest arguments)
  (%qinvoke-method object nil "unpolish(QApplication*)" arguments))

(defun |unpolish(QWidget*)| (object &rest arguments)
  (%qinvoke-method object nil "unpolish(QWidget*)" arguments))

(defun |unpolish| (object &rest arguments)
  (%qinvoke-method object nil "unpolish" arguments))

(defun |unsetCursor| (object &rest arguments)
  (%qinvoke-method object nil "unsetCursor" arguments))

(defun |unsetError| (object &rest arguments)
  (%qinvoke-method object nil "unsetError" arguments))

(defun |unsetHotSpot| (object &rest arguments)
  (%qinvoke-method object nil "unsetHotSpot" arguments))

(defun |unsetLayoutDirection| (object &rest arguments)
  (%qinvoke-method object nil "unsetLayoutDirection" arguments))

(defun |unsetLocale| (object &rest arguments)
  (%qinvoke-method object nil "unsetLocale" arguments))

(defun |unsetSpacing| (object &rest arguments)
  (%qinvoke-method object nil "unsetSpacing" arguments))

(defun |unsetWindowFrameMargins| (object &rest arguments)
  (%qinvoke-method object nil "unsetWindowFrameMargins" arguments))

(defun |update(QRect)| (object &rest arguments)
  (%qinvoke-method object nil "update(QRect)" arguments))

(defun |update(QRegion)| (object &rest arguments)
  (%qinvoke-method object nil "update(QRegion)" arguments))

(defun |updateAccessibility.QAccessible| (&rest arguments)
  (%qinvoke-method "QAccessible" nil "updateAccessibility" arguments))

(defun |updateBlock| (object &rest arguments)
  (%qinvoke-method object nil "updateBlock" arguments))

(defun |updateBoundingRect| (object &rest arguments)
  (%qinvoke-method object nil "updateBoundingRect" arguments))

(defun |updateCells| (object &rest arguments)
  (%qinvoke-method object nil "updateCells" arguments))

(defun |updateCell| (object &rest arguments)
  (%qinvoke-method object nil "updateCell" arguments))

(defun |updateEditorData| (object &rest arguments)
  (%qinvoke-method object nil "updateEditorData" arguments))

(defun |updateEditorGeometries| (object &rest arguments)
  (%qinvoke-method object nil "updateEditorGeometries" arguments))

(defun |updateEditorGeometry| (object &rest arguments)
  (%qinvoke-method object nil "updateEditorGeometry" arguments))

(defun |updateGeometries| (object &rest arguments)
  (%qinvoke-method object nil "updateGeometries" arguments))

(defun |updateGeometry| (object &rest arguments)
  (%qinvoke-method object nil "updateGeometry" arguments))

(defun |updateInterval| (object &rest arguments)
  (%qinvoke-method object nil "updateInterval" arguments))

(defun |updateMicroFocus| (object &rest arguments)
  (%qinvoke-method object nil "updateMicroFocus" arguments))

(defun |updatePreviewWidget| (object &rest arguments)
  (%qinvoke-method object nil "updatePreviewWidget" arguments))

(defun |updatePreview| (object &rest arguments)
  (%qinvoke-method object nil "updatePreview" arguments))

(defun |updateRequest| (object &rest arguments)
  (%qinvoke-method object nil "updateRequest" arguments))

(defun |updateSceneRect| (object &rest arguments)
  (%qinvoke-method object nil "updateSceneRect" arguments))

(defun |updateScene| (object &rest arguments)
  (%qinvoke-method object nil "updateScene" arguments))

(defun |updateSection| (object &rest arguments)
  (%qinvoke-method object nil "updateSection" arguments))

(defun |updated| (object &rest arguments)
  (%qinvoke-method object nil "updated" arguments))

(defun |updatesEnabled| (object &rest arguments)
  (%qinvoke-method object nil "updatesEnabled" arguments))

(defun |update| (object &rest arguments)
  (%qinvoke-method object nil "update" arguments))

(defun |urls| (object &rest arguments)
  (%qinvoke-method object nil "urls" arguments))

(defun |url| (object &rest arguments)
  (%qinvoke-method object nil "url" arguments))

(defun |useDesignMetrics| (object &rest arguments)
  (%qinvoke-method object nil "useDesignMetrics" arguments))

(defun |useHighlightColors| (object &rest arguments)
  (%qinvoke-method object nil "useHighlightColors" arguments))

(defun |userActionCount| (object &rest arguments)
  (%qinvoke-method object nil "userActionCount" arguments))

(defun |userData| (object &rest arguments)
  (%qinvoke-method object nil "userData" arguments))

(defun |userInfo| (object &rest arguments)
  (%qinvoke-method object nil "userInfo" arguments))

(defun |userName| (object &rest arguments)
  (%qinvoke-method object nil "userName" arguments))

(defun |userState| (object &rest arguments)
  (%qinvoke-method object nil "userState" arguments))

(defun |userType| (object &rest arguments)
  (%qinvoke-method object nil "userType" arguments))

(defun |usesScrollButtons| (object &rest arguments)
  (%qinvoke-method object nil "usesScrollButtons" arguments))

(defun |validateCurrentPage| (object &rest arguments)
  (%qinvoke-method object nil "validateCurrentPage" arguments))

(defun |validatePage| (object &rest arguments)
  (%qinvoke-method object nil "validatePage" arguments))

(defun |validate| (object &rest arguments)
  (%qinvoke-method object nil "validate" arguments))

(defun |validator| (object &rest arguments)
  (%qinvoke-method object nil "validator" arguments))

(defun |valid| (object &rest arguments)
  (%qinvoke-method object nil "valid" arguments))

(defun |valueChanged(QString)| (object &rest arguments)
  (%qinvoke-method object nil "valueChanged(QString)" arguments))

(defun |valueChanged(double)| (object &rest arguments)
  (%qinvoke-method object nil "valueChanged(double)" arguments))

(defun |valueChanged(int)| (object &rest arguments)
  (%qinvoke-method object nil "valueChanged(int)" arguments))

(defun |valueChanged| (object &rest arguments)
  (%qinvoke-method object nil "valueChanged" arguments))

(defun |valueForProgress| (object &rest arguments)
  (%qinvoke-method object nil "valueForProgress" arguments))

(defun |valueForTime| (object &rest arguments)
  (%qinvoke-method object nil "valueForTime" arguments))

(defun |valueFromText| (object &rest arguments)
  (%qinvoke-method object nil "valueFromText" arguments))

(defun |valueF| (object &rest arguments)
  (%qinvoke-method object nil "valueF" arguments))

(defun |valuePropertyName| (object &rest arguments)
  (%qinvoke-method object nil "valuePropertyName" arguments))

(defun |value| (object &rest arguments)
  (%qinvoke-method object nil "value" arguments))

(defun |vector| (object &rest arguments)
  (%qinvoke-method object nil "vector" arguments))

(defun |verticalAlignment| (object &rest arguments)
  (%qinvoke-method object nil "verticalAlignment" arguments))

(defun |verticalDirection| (object &rest arguments)
  (%qinvoke-method object nil "verticalDirection" arguments))

(defun |verticalHeaderFormat| (object &rest arguments)
  (%qinvoke-method object nil "verticalHeaderFormat" arguments))

(defun |verticalHeaderItem| (object &rest arguments)
  (%qinvoke-method object nil "verticalHeaderItem" arguments))

(defun |verticalHeader| (object &rest arguments)
  (%qinvoke-method object nil "verticalHeader" arguments))

(defun |verticalPolicy| (object &rest arguments)
  (%qinvoke-method object nil "verticalPolicy" arguments))

(defun |verticalScrollBarPolicy| (object &rest arguments)
  (%qinvoke-method object nil "verticalScrollBarPolicy" arguments))

(defun |verticalScrollBar| (object &rest arguments)
  (%qinvoke-method object nil "verticalScrollBar" arguments))

(defun |verticalScrollMode| (object &rest arguments)
  (%qinvoke-method object nil "verticalScrollMode" arguments))

(defun |verticalScrollbarAction| (object &rest arguments)
  (%qinvoke-method object nil "verticalScrollbarAction" arguments))

(defun |verticalScrollbarValueChanged| (object &rest arguments)
  (%qinvoke-method object nil "verticalScrollbarValueChanged" arguments))

(defun |verticalSpacing| (object &rest arguments)
  (%qinvoke-method object nil "verticalSpacing" arguments))

(defun |verticalStretch| (object &rest arguments)
  (%qinvoke-method object nil "verticalStretch" arguments))

(defun |viewMode| (object &rest arguments)
  (%qinvoke-method object nil "viewMode" arguments))

(defun |viewTransformEnabled| (object &rest arguments)
  (%qinvoke-method object nil "viewTransformEnabled" arguments))

(defun |viewportEntered| (object &rest arguments)
  (%qinvoke-method object nil "viewportEntered" arguments))

(defun |viewportTransform| (object &rest arguments)
  (%qinvoke-method object nil "viewportTransform" arguments))

(defun |viewportUpdateMode| (object &rest arguments)
  (%qinvoke-method object nil "viewportUpdateMode" arguments))

(defun |viewport| (object &rest arguments)
  (%qinvoke-method object nil "viewport" arguments))

(defun |views| (object &rest arguments)
  (%qinvoke-method object nil "views" arguments))

(defun |view| (object &rest arguments)
  (%qinvoke-method object nil "view" arguments))

(defun |visibilityChanged| (object &rest arguments)
  (%qinvoke-method object nil "visibilityChanged" arguments))

(defun |visibleChanged| (object &rest arguments)
  (%qinvoke-method object nil "visibleChanged" arguments))

(defun |visibleRegion| (object &rest arguments)
  (%qinvoke-method object nil "visibleRegion" arguments))

(defun |visitedPages| (object &rest arguments)
  (%qinvoke-method object nil "visitedPages" arguments))

(defun |visualAlignment.QStyle| (&rest arguments)
  (%qinvoke-method "QStyle" nil "visualAlignment" arguments))

(defun |visualColumn| (object &rest arguments)
  (%qinvoke-method object nil "visualColumn" arguments))

(defun |visualIndexAt| (object &rest arguments)
  (%qinvoke-method object nil "visualIndexAt" arguments))

(defun |visualIndex| (object &rest arguments)
  (%qinvoke-method object nil "visualIndex" arguments))

(defun |visualItemRect| (object &rest arguments)
  (%qinvoke-method object nil "visualItemRect" arguments))

(defun |visualNavigation| (object &rest arguments)
  (%qinvoke-method object nil "visualNavigation" arguments))

(defun |visualPos.QStyle| (&rest arguments)
  (%qinvoke-method "QStyle" nil "visualPos" arguments))

(defun |visualRect.QStyle| (&rest arguments)
  (%qinvoke-method "QStyle" nil "visualRect" arguments))

(defun |visualRect| (object &rest arguments)
  (%qinvoke-method object nil "visualRect" arguments))

(defun |visualRow| (object &rest arguments)
  (%qinvoke-method object nil "visualRow" arguments))

(defun |waitForBytesWritten| (object &rest arguments)
  (%qinvoke-method object nil "waitForBytesWritten" arguments))

(defun |waitForFinished| (object &rest arguments)
  (%qinvoke-method object nil "waitForFinished" arguments))

(defun |waitForReadyRead| (object &rest arguments)
  (%qinvoke-method object nil "waitForReadyRead" arguments))

(defun |waitForStarted| (object &rest arguments)
  (%qinvoke-method object nil "waitForStarted" arguments))

(defun |wakeUp| (object &rest arguments)
  (%qinvoke-method object nil "wakeUp" arguments))

(defun |warning.QMessageBox| (&rest arguments)
  (%qinvoke-method "QMessageBox" nil "warning" arguments))

(defun |wasCanceled| (object &rest arguments)
  (%qinvoke-method object nil "wasCanceled" arguments))

(defun |weekdayTextFormat| (object &rest arguments)
  (%qinvoke-method object nil "weekdayTextFormat" arguments))

(defun |weight| (object &rest arguments)
  (%qinvoke-method object nil "weight" arguments))

(defun |whatsThis| (object &rest arguments)
  (%qinvoke-method object nil "whatsThis" arguments))

(defun |wheelScrollLines.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "wheelScrollLines" arguments))

(defun |widgetAt.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "widgetAt" arguments))

(defun |widgetDestroyed| (object &rest arguments)
  (%qinvoke-method object nil "widgetDestroyed" arguments))

(defun |widgetEvent| (object &rest arguments)
  (%qinvoke-method object nil "widgetEvent" arguments))

(defun |widgetForAction| (object &rest arguments)
  (%qinvoke-method object nil "widgetForAction" arguments))

(defun |widgetRemoved| (object &rest arguments)
  (%qinvoke-method object nil "widgetRemoved" arguments))

(defun |widgetResizable| (object &rest arguments)
  (%qinvoke-method object nil "widgetResizable" arguments))

(defun |widget| (object &rest arguments)
  (%qinvoke-method object nil "widget" arguments))

(defun |width(QChar)| (object &rest arguments)
  (%qinvoke-method object nil "width(QChar)" arguments))

(defun |width(QString)| (object &rest arguments)
  (%qinvoke-method object nil "width(QString)" arguments))

(defun |widthChanged| (object &rest arguments)
  (%qinvoke-method object nil "widthChanged" arguments))

(defun |widthF| (object &rest arguments)
  (%qinvoke-method object nil "widthF" arguments))

(defun |widthMM| (object &rest arguments)
  (%qinvoke-method object nil "widthMM" arguments))

(defun |width| (object &rest arguments)
  (%qinvoke-method object nil "width" arguments))

(defun |windowActivated| (object &rest arguments)
  (%qinvoke-method object nil "windowActivated" arguments))

(defun |windowFilePath| (object &rest arguments)
  (%qinvoke-method object nil "windowFilePath" arguments))

(defun |windowFlags| (object &rest arguments)
  (%qinvoke-method object nil "windowFlags" arguments))

(defun |windowFrameGeometry| (object &rest arguments)
  (%qinvoke-method object nil "windowFrameGeometry" arguments))

(defun |windowFrameRect| (object &rest arguments)
  (%qinvoke-method object nil "windowFrameRect" arguments))

(defun |windowIcon.QApplication| (&rest arguments)
  (%qinvoke-method "QApplication" nil "windowIcon" arguments))

(defun |windowIconText| (object &rest arguments)
  (%qinvoke-method object nil "windowIconText" arguments))

(defun |windowIcon| (object &rest arguments)
  (%qinvoke-method object nil "windowIcon" arguments))

(defun |windowList| (object &rest arguments)
  (%qinvoke-method object nil "windowList" arguments))

(defun |windowModality| (object &rest arguments)
  (%qinvoke-method object nil "windowModality" arguments))

(defun |windowOpacity| (object &rest arguments)
  (%qinvoke-method object nil "windowOpacity" arguments))

(defun |windowRole| (object &rest arguments)
  (%qinvoke-method object nil "windowRole" arguments))

(defun |windowStateChanged| (object &rest arguments)
  (%qinvoke-method object nil "windowStateChanged" arguments))

(defun |windowState| (object &rest arguments)
  (%qinvoke-method object nil "windowState" arguments))

(defun |windowText| (object &rest arguments)
  (%qinvoke-method object nil "windowText" arguments))

(defun |windowTitle| (object &rest arguments)
  (%qinvoke-method object nil "windowTitle" arguments))

(defun |windowType| (object &rest arguments)
  (%qinvoke-method object nil "windowType" arguments))

(defun |window| (object &rest arguments)
  (%qinvoke-method object nil "window" arguments))

(defun |wizardStyle| (object &rest arguments)
  (%qinvoke-method object nil "wizardStyle" arguments))

(defun |wizard| (object &rest arguments)
  (%qinvoke-method object nil "wizard" arguments))

(defun |wordSpacing| (object &rest arguments)
  (%qinvoke-method object nil "wordSpacing" arguments))

(defun |wordWrapMode| (object &rest arguments)
  (%qinvoke-method object nil "wordWrapMode" arguments))

(defun |wordWrap| (object &rest arguments)
  (%qinvoke-method object nil "wordWrap" arguments))

(defun |workAreaResized| (object &rest arguments)
  (%qinvoke-method object nil "workAreaResized" arguments))

(defun |workingDirectory| (object &rest arguments)
  (%qinvoke-method object nil "workingDirectory" arguments))

(defun |worldMatrixEnabled| (object &rest arguments)
  (%qinvoke-method object nil "worldMatrixEnabled" arguments))

(defun |worldTransform| (object &rest arguments)
  (%qinvoke-method object nil "worldTransform" arguments))

(defun |wrapAround| (object &rest arguments)
  (%qinvoke-method object nil "wrapAround" arguments))

(defun |wrapMode| (object &rest arguments)
  (%qinvoke-method object nil "wrapMode" arguments))

(defun |wrapping| (object &rest arguments)
  (%qinvoke-method object nil "wrapping" arguments))

(defun |write(QByteArray)| (object &rest arguments)
  (%qinvoke-method object nil "write(QByteArray)" arguments))

(defun |write(QTextDocumentFragment)| (object &rest arguments)
  (%qinvoke-method object nil "write(QTextDocumentFragment)" arguments))

(defun |write(const QTextDocument*)| (object &rest arguments)
  (%qinvoke-method object nil "write(const QTextDocument*)" arguments))

(defun |write(const char*)| (object &rest arguments)
  (%qinvoke-method object nil "write(const char*)" arguments))

(defun |write| (object &rest arguments)
  (%qinvoke-method object nil "write" arguments))

(defun |writingSystemName.QFontDatabase| (&rest arguments)
  (%qinvoke-method "QFontDatabase" nil "writingSystemName" arguments))

(defun |writingSystemSample.QFontDatabase| (&rest arguments)
  (%qinvoke-method "QFontDatabase" nil "writingSystemSample" arguments))

(defun |writingSystem| (object &rest arguments)
  (%qinvoke-method object nil "writingSystem" arguments))

(defun |w| (object &rest arguments)
  (%qinvoke-method object nil "w" arguments))

(defun |xChanged| (object &rest arguments)
  (%qinvoke-method object nil "xChanged" arguments))

(defun |xHeight| (object &rest arguments)
  (%qinvoke-method object nil "xHeight" arguments))

(defun |xOffset| (object &rest arguments)
  (%qinvoke-method object nil "xOffset" arguments))

(defun |xScaleChanged| (object &rest arguments)
  (%qinvoke-method object nil "xScaleChanged" arguments))

(defun |xScale| (object &rest arguments)
  (%qinvoke-method object nil "xScale" arguments))

(defun |xTilt| (object &rest arguments)
  (%qinvoke-method object nil "xTilt" arguments))

(defun |xToCursor| (object &rest arguments)
  (%qinvoke-method object nil "xToCursor" arguments))

(defun |xored| (object &rest arguments)
  (%qinvoke-method object nil "xored" arguments))

(defun |x| (object &rest arguments)
  (%qinvoke-method object nil "x" arguments))

(defun |yChanged| (object &rest arguments)
  (%qinvoke-method object nil "yChanged" arguments))

(defun |yOffset| (object &rest arguments)
  (%qinvoke-method object nil "yOffset" arguments))

(defun |yScaleChanged| (object &rest arguments)
  (%qinvoke-method object nil "yScaleChanged" arguments))

(defun |yScale| (object &rest arguments)
  (%qinvoke-method object nil "yScale" arguments))

(defun |yTilt| (object &rest arguments)
  (%qinvoke-method object nil "yTilt" arguments))

(defun |yearShown| (object &rest arguments)
  (%qinvoke-method object nil "yearShown" arguments))

(defun |year| (object &rest arguments)
  (%qinvoke-method object nil "year" arguments))

(defun |yellowF| (object &rest arguments)
  (%qinvoke-method object nil "yellowF" arguments))

(defun |yellow| (object &rest arguments)
  (%qinvoke-method object nil "yellow" arguments))

(defun |y| (object &rest arguments)
  (%qinvoke-method object nil "y" arguments))

(defun |zChanged| (object &rest arguments)
  (%qinvoke-method object nil "zChanged" arguments))

(defun |zScaleChanged| (object &rest arguments)
  (%qinvoke-method object nil "zScaleChanged" arguments))

(defun |zScale| (object &rest arguments)
  (%qinvoke-method object nil "zScale" arguments))

(defun |zValue| (object &rest arguments)
  (%qinvoke-method object nil "zValue" arguments))

(defun |zeroDigit| (object &rest arguments)
  (%qinvoke-method object nil "zeroDigit" arguments))

(defun |zoomFactor| (object &rest arguments)
  (%qinvoke-method object nil "zoomFactor" arguments))

(defun |zoomIn| (object &rest arguments)
  (%qinvoke-method object nil "zoomIn" arguments))

(defun |zoomMode| (object &rest arguments)
  (%qinvoke-method object nil "zoomMode" arguments))

(defun |zoomOut| (object &rest arguments)
  (%qinvoke-method object nil "zoomOut" arguments))

(defun |z| (object &rest arguments)
  (%qinvoke-method object nil "z" arguments))
