// THIS FILE IS GENERATED (see helper/)

#include "_lobjects.h"
#include "_q_classes.h"
#include "_n_classes.h"
#include "_q_methods.h"
#include "_n_methods.h"
#include "../dyn_object.h"
#include "../eql.h"

EQL* LObjects::eql = 0;
DynObject* LObjects::dynObject = 0;
QObject** LObjects::Q = 0;
QObject** LObjects::N = 0;
uint LObjects::i_unique = 0;
const char*** LObjects::override_arg_types = 0;
QList<QByteArray> LObjects::qNames;
QList<QByteArray> LObjects::nNames;
QMap<QByteArray, int> LObjects::q_names;
QMap<QByteArray, int> LObjects::n_names;
QHash<QString, uint> LObjects::ui_unique;
QHash<QByteArray, uint> LObjects::override_function_ids;
QHash<quint64, void*> LObjects::override_lisp_functions;
NumList LAbstractAnimation::overrideIds = NumList() << 1 << 2 << 3 << 4;
NumList LAction::overrideIds = NumList();
NumList LActionGroup::overrideIds = NumList();
NumList LAnimationGroup::overrideIds = NumList();
NumList LBuffer::overrideIds = NumList() << 10 << 11 << 12 << 13;
NumList LButtonGroup::overrideIds = NumList();
NumList LCDEStyle::overrideIds = NumList() << 18 << 19 << 20 << 21;
NumList LCalendarWidget::overrideIds = NumList() << 39 << 40 << 41;
NumList LCheckBox::overrideIds = NumList() << 40;
NumList LCleanlooksStyle::overrideIds = NumList() << 22 << 18 << 35 << 36 << 19 << 29 << 30 << 37 << 20 << 32 << 31 << 23 << 24 << 21 << 25 << 26 << 27 << 28 << 33 << 34;
NumList LColorDialog::overrideIds = NumList() << 74;
NumList LColumnView::overrideIds = NumList() << 75 << 76 << 77 << 78 << 79 << 80 << 40 << 81 << 82;
NumList LComboBox::overrideIds = NumList() << 99 << 100 << 39 << 40;
NumList LCommandLinkButton::overrideIds = NumList();
NumList LCommonStyle::overrideIds = NumList() << 22 << 18 << 19 << 29 << 30 << 20 << 23 << 31 << 32 << 24 << 25 << 26 << 27 << 28 << 33 << 34;
NumList LCompleter::overrideIds = NumList() << 101 << 102;
NumList LDataWidgetMapper::overrideIds = NumList();
NumList LDateEdit::overrideIds = NumList();
NumList LDateTimeEdit::overrideIds = NumList() << 103 << 40 << 104 << 105 << 106;
NumList LDesktopWidget::overrideIds = NumList();
NumList LDial::overrideIds = NumList() << 39 << 40;
NumList LDialog::overrideIds = NumList() << 39 << 74 << 40;
NumList LDialogButtonBox::overrideIds = NumList();
NumList LDirModel::overrideIds = NumList() << 111 << 112 << 113 << 114 << 115 << 116 << 117 << 118 << 119 << 120 << 121 << 122 << 123 << 124;
NumList LDockWidget::overrideIds = NumList();
NumList LDoubleSpinBox::overrideIds = NumList() << 135 << 136 << 107 << 108;
NumList LDoubleValidator::overrideIds = NumList() << 137 << 108;
NumList LDrag::overrideIds = NumList();
NumList LErrorMessage::overrideIds = NumList();
NumList LEventLoop::overrideIds = NumList();
NumList LEventTransition::overrideIds = NumList();
NumList LFileDialog::overrideIds = NumList() << 74;
NumList LFileSystemModel::overrideIds = NumList() << 126 << 111 << 112 << 113 << 127 << 114 << 115 << 116 << 117 << 118 << 119 << 120 << 121 << 122 << 123 << 124;
NumList LFileSystemWatcher::overrideIds = NumList();
NumList LFinalState::overrideIds = NumList();
NumList LFocusFrame::overrideIds = NumList();
NumList LFontComboBox::overrideIds = NumList() << 40;
NumList LFontDialog::overrideIds = NumList() << 74;
NumList LFormLayout::overrideIds = NumList() << 142 << 143 << 144 << 145 << 42 << 146 << 147 << 148 << 149 << 40 << 150;
NumList LFrame::overrideIds = NumList() << 40;
NumList LGesture::overrideIds = NumList();
NumList LGraphicsAnchor::overrideIds = NumList();
NumList LGraphicsBlurEffect::overrideIds = NumList() << 156;
NumList LGraphicsColorizeEffect::overrideIds = NumList();
NumList LGraphicsDropShadowEffect::overrideIds = NumList() << 156;
NumList LGraphicsOpacityEffect::overrideIds = NumList();
NumList LGraphicsProxyWidget::overrideIds = NumList() << 159 << 160 << 161;
NumList LGraphicsRotation::overrideIds = NumList() << 175;
NumList LGraphicsScale::overrideIds = NumList() << 175;
NumList LGraphicsScene::overrideIds = NumList() << 43 << 176 << 177 << 178 << 179 << 180 << 181 << 182 << 53 << 55 << 183 << 57 << 58 << 59 << 184 << 185 << 186 << 187 << 188;
NumList LGraphicsTextItem::overrideIds = NumList() << 163 << 189 << 190 << 191 << 159 << 164 << 161;
NumList LGraphicsTransform::overrideIds = NumList() << 175;
NumList LGraphicsView::overrideIds = NumList() << 43 << 40 << 180 << 181;
NumList LGraphicsWidget::overrideIds = NumList() << 162 << 163 << 159 << 160 << 164 << 161 << 45 << 46 << 54 << 165 << 166 << 56 << 167 << 168 << 169 << 170 << 68 << 171 << 172 << 173 << 174;
NumList LGridLayout::overrideIds = NumList() << 143 << 144 << 145 << 42 << 146 << 147 << 155 << 192 << 148 << 149 << 40 << 150;
NumList LGroupBox::overrideIds = NumList() << 39;
NumList LHBoxLayout::overrideIds = NumList();
NumList LHistoryState::overrideIds = NumList();
NumList LInputDialog::overrideIds = NumList() << 193 << 39 << 74 << 40;
NumList LIntValidator::overrideIds = NumList() << 194 << 108;
NumList LItemDelegate::overrideIds = NumList() << 195 << 196 << 197 << 198 << 199 << 200 << 201 << 202 << 203 << 204;
NumList LItemSelectionModel::overrideIds = NumList();
NumList LKeyEventTransition::overrideIds = NumList();
NumList LLCDNumber::overrideIds = NumList() << 40;
NumList LLabel::overrideIds = NumList() << 42 << 39 << 40;
NumList LLibrary::overrideIds = NumList();
NumList LLineEdit::overrideIds = NumList() << 43 << 39 << 40;
NumList LListView::overrideIds = NumList() << 75 << 76 << 81;
NumList LListWidget::overrideIds = NumList() << 51 << 206 << 207 << 119 << 124;
NumList LMainWindow::overrideIds = NumList() << 208;
NumList LMdiArea::overrideIds = NumList() << 39 << 40;
NumList LMdiSubWindow::overrideIds = NumList() << 39 << 40;
NumList LMenu::overrideIds = NumList() << 40;
NumList LMenuBar::overrideIds = NumList() << 42 << 39 << 40;
NumList LMessageBox::overrideIds = NumList() << 74;
NumList LMimeData::overrideIds = NumList() << 209 << 210 << 211;
NumList LMotifStyle::overrideIds = NumList() << 22 << 18 << 19 << 20 << 23 << 24 << 21 << 25 << 26 << 27 << 28;
NumList LMouseEventTransition::overrideIds = NumList();
NumList LMovie::overrideIds = NumList();
NumList LObject::overrideIds = NumList() << 5 << 6 << 7 << 8 << 9;
NumList LPageSetupDialog::overrideIds = NumList() << 74;
NumList LPanGesture::overrideIds = NumList();
NumList LParallelAnimationGroup::overrideIds = NumList() << 1;
NumList LPauseAnimation::overrideIds = NumList() << 1;
NumList LPinchGesture::overrideIds = NumList();
NumList LPlainTextDocumentLayout::overrideIds = NumList() << 212 << 213 << 214 << 215 << 216 << 217;
NumList LPlainTextEdit::overrideIds = NumList() << 222 << 223 << 224 << 225;
NumList LPlastiqueStyle::overrideIds = NumList() << 22 << 18 << 19 << 30 << 20 << 32 << 31 << 23 << 24 << 21 << 25 << 26 << 27 << 28 << 33 << 34;
NumList LPluginLoader::overrideIds = NumList();
NumList LPrintDialog::overrideIds = NumList() << 193 << 226 << 74;
NumList LPrintPreviewDialog::overrideIds = NumList() << 193 << 74;
NumList LPrintPreviewWidget::overrideIds = NumList() << 74;
NumList LProcess::overrideIds = NumList() << 10 << 11 << 12 << 14 << 16 << 17 << 227;
NumList LProgressBar::overrideIds = NumList() << 228 << 39 << 40;
NumList LProgressDialog::overrideIds = NumList() << 40;
NumList LPropertyAnimation::overrideIds = NumList();
NumList LPushButton::overrideIds = NumList() << 39 << 40;
NumList LRadioButton::overrideIds = NumList() << 40;
NumList LRegExpValidator::overrideIds = NumList() << 108;
NumList LRubberBand::overrideIds = NumList();
NumList LScrollArea::overrideIds = NumList() << 54 << 40;
NumList LScrollBar::overrideIds = NumList() << 40;
NumList LSequentialAnimationGroup::overrideIds = NumList() << 1;
NumList LSettings::overrideIds = NumList();
NumList LShortcut::overrideIds = NumList();
NumList LSignalTransition::overrideIds = NumList();
NumList LSizeGrip::overrideIds = NumList() << 74 << 40;
NumList LSlider::overrideIds = NumList() << 39 << 40;
NumList LSortFilterProxyModel::overrideIds = NumList() << 125 << 126 << 111 << 112 << 113 << 127 << 114 << 115 << 116 << 117 << 128 << 129 << 231 << 232 << 233 << 234 << 130 << 118 << 119 << 120 << 131 << 132 << 121 << 122 << 133 << 235 << 123 << 134 << 124 << 236 << 237 << 238;
NumList LSound::overrideIds = NumList();
NumList LSpinBox::overrideIds = NumList() << 241 << 136;
NumList LSplashScreen::overrideIds = NumList() << 242;
NumList LSplitter::overrideIds = NumList() << 39 << 40;
NumList LSplitterHandle::overrideIds = NumList() << 40;
NumList LStackedLayout::overrideIds = NumList() << 142 << 143 << 147 << 148 << 149 << 40 << 150;
NumList LStackedWidget::overrideIds = NumList();
NumList LStandardItemModel::overrideIds = NumList() << 111 << 112 << 113 << 114 << 115 << 116 << 117 << 128 << 129 << 118 << 119 << 120 << 131 << 132 << 121 << 122 << 133 << 123 << 124;
NumList LState::overrideIds = NumList();
NumList LStateMachine::overrideIds = NumList();
NumList LStatusBar::overrideIds = NumList();
NumList LStringListModel::overrideIds = NumList() << 112 << 114 << 129 << 132 << 121 << 122 << 123 << 124;
NumList LStyledItemDelegate::overrideIds = NumList() << 243 << 195 << 196 << 197 << 198 << 199 << 200 << 244;
NumList LSwipeGesture::overrideIds = NumList();
NumList LSyntaxHighlighter::overrideIds = NumList() << 245;
NumList LSystemTrayIcon::overrideIds = NumList();
NumList LTabBar::overrideIds = NumList() << 39 << 40 << 246 << 247 << 248 << 249;
NumList LTabWidget::overrideIds = NumList() << 39 << 40 << 246 << 248;
NumList LTableView::overrideIds = NumList() << 75 << 78 << 79 << 80;
NumList LTableWidget::overrideIds = NumList() << 250 << 251 << 119 << 124;
NumList LTapAndHoldGesture::overrideIds = NumList();
NumList LTapGesture::overrideIds = NumList();
NumList LTextBlockGroup::overrideIds = NumList() << 252 << 253 << 254;
NumList LTextBrowser::overrideIds = NumList() << 222;
NumList LTextDocument::overrideIds = NumList() << 103 << 255 << 222;
NumList LTextEdit::overrideIds = NumList() << 222 << 223 << 224 << 225;
NumList LTextFrame::overrideIds = NumList();
NumList LTextList::overrideIds = NumList();
NumList LTextObject::overrideIds = NumList();
NumList LTextTable::overrideIds = NumList();
NumList LThread::overrideIds = NumList() << 256;
NumList LThreadPool::overrideIds = NumList();
NumList LTimeEdit::overrideIds = NumList();
NumList LTimeLine::overrideIds = NumList() << 257;
NumList LTimer::overrideIds = NumList();
NumList LToolBar::overrideIds = NumList();
NumList LToolBox::overrideIds = NumList() << 258 << 259;
NumList LToolButton::overrideIds = NumList() << 39 << 40;
NumList LTranslator::overrideIds = NumList() << 153 << 260;
NumList LTreeView::overrideIds = NumList() << 261 << 75 << 83 << 15 << 76 << 77 << 78 << 79 << 80 << 81 << 262 << 263;
NumList LTreeWidget::overrideIds = NumList() << 80 << 264 << 265 << 119 << 124;
NumList LUndoGroup::overrideIds = NumList();
NumList LUndoStack::overrideIds = NumList();
NumList LUndoView::overrideIds = NumList();
NumList LVBoxLayout::overrideIds = NumList();
NumList LVariantAnimation::overrideIds = NumList() << 1 << 229 << 230;
NumList LWidget::overrideIds = NumList() << 42 << 43 << 39 << 40 << 44 << 45 << 46 << 47 << 48 << 49 << 50 << 51 << 52 << 53 << 54 << 55 << 56 << 57 << 58 << 59 << 60 << 61 << 62 << 63 << 64 << 65 << 66 << 67 << 68 << 69 << 70;
NumList LWidgetAction::overrideIds = NumList() << 266 << 267;
NumList LWindowsStyle::overrideIds = NumList() << 22 << 18 << 19 << 20 << 31 << 32 << 23 << 24 << 25 << 26 << 28 << 34 << 33;
NumList LWizard::overrideIds = NumList() << 268 << 269 << 74 << 40 << 270 << 271;
NumList LWizardPage::overrideIds = NumList() << 272 << 273 << 274 << 268 << 275;
NumList LWorkspace::overrideIds = NumList() << 40;
NumList LAccessible::overrideIds = NumList();
NumList LAccessibleWidget::overrideIds = NumList() << 276 << 277 << 278 << 279 << 280 << 281 << 282 << 283 << 284 << 285 << 286;
NumList LBasicTimer::overrideIds = NumList();
NumList LBitArray::overrideIds = NumList();
NumList LBitmap::overrideIds = NumList();
NumList LBrush::overrideIds = NumList();
NumList LConicalGradient::overrideIds = NumList();
NumList LCryptographicHash::overrideIds = NumList();
NumList LDesktopServices::overrideIds = NumList();
NumList LDirIterator::overrideIds = NumList();
NumList LEasingCurve::overrideIds = NumList();
NumList LFileIconProvider::overrideIds = NumList() << 290 << 291 << 292;
NumList LFileInfo::overrideIds = NumList();
NumList LFontDatabase::overrideIds = NumList();
NumList LFontMetrics::overrideIds = NumList();
NumList LGradient::overrideIds = NumList();
NumList LGraphicsAnchorLayout::overrideIds = NumList() << 143 << 146 << 147 << 293 << 160;
NumList LGraphicsEllipseItem::overrideIds = NumList() << 163 << 189 << 190 << 191 << 159 << 164 << 161;
NumList LGraphicsGridLayout::overrideIds = NumList() << 143 << 146 << 147 << 293 << 160 << 296;
NumList LGraphicsItem::overrideIds = NumList() << 297 << 163 << 298 << 299 << 189 << 190 << 191 << 159 << 164 << 161 << 176 << 177 << 178 << 179 << 182 << 53 << 55 << 300 << 301 << 302 << 57 << 43 << 303 << 58 << 59 << 184 << 185 << 186 << 187 << 304 << 305 << 188;
NumList LGraphicsItemGroup::overrideIds = NumList() << 163 << 190 << 191 << 159 << 161;
NumList LGraphicsLayoutItem::overrideIds = NumList() << 160 << 295 << 296;
NumList LGraphicsLineItem::overrideIds = NumList() << 163 << 189 << 190 << 191 << 159 << 164 << 161;
NumList LGraphicsLinearLayout::overrideIds = NumList() << 143 << 146 << 147 << 293 << 160 << 296;
NumList LGraphicsPathItem::overrideIds = NumList() << 163 << 189 << 190 << 191 << 159 << 164 << 161;
NumList LGraphicsPixmapItem::overrideIds = NumList() << 163 << 189 << 190 << 191 << 159 << 164 << 161;
NumList LGraphicsPolygonItem::overrideIds = NumList() << 163 << 189 << 190 << 191 << 159 << 164 << 161;
NumList LGraphicsRectItem::overrideIds = NumList() << 163 << 189 << 190 << 191 << 159 << 164 << 161;
NumList LGraphicsSimpleTextItem::overrideIds = NumList() << 163 << 189 << 190 << 191 << 159 << 164 << 161;
NumList LIcon::overrideIds = NumList();
NumList LImage::overrideIds = NumList();
NumList LItemEditorFactory::overrideIds = NumList() << 307 << 308;
NumList LItemSelection::overrideIds = NumList();
NumList LItemSelectionRange::overrideIds = NumList();
NumList LLinearGradient::overrideIds = NumList();
NumList LListWidgetItem::overrideIds = NumList() << 309 << 310 << 311;
NumList LLocale::overrideIds = NumList();
NumList LMargins::overrideIds = NumList();
NumList LMatrix::overrideIds = NumList();
NumList LMatrix4x4::overrideIds = NumList();
NumList LModelIndex::overrideIds = NumList();
NumList LMutex::overrideIds = NumList();
NumList LMutexLocker::overrideIds = NumList();
NumList LPainter::overrideIds = NumList();
NumList LPainterPath::overrideIds = NumList();
NumList LPainterPathStroker::overrideIds = NumList();
NumList LPalette::overrideIds = NumList();
NumList LPen::overrideIds = NumList();
NumList LPersistentModelIndex::overrideIds = NumList();
NumList LPicture::overrideIds = NumList() << 312;
NumList LPixmap::overrideIds = NumList();
NumList LPixmapCache::overrideIds = NumList();
NumList LPrinter::overrideIds = NumList();
NumList LPrinterInfo::overrideIds = NumList();
NumList LProcessEnvironment::overrideIds = NumList();
NumList LQuaternion::overrideIds = NumList();
NumList LRadialGradient::overrideIds = NumList();
NumList LReadLocker::overrideIds = NumList();
NumList LReadWriteLock::overrideIds = NumList();
NumList LRegExp::overrideIds = NumList();
NumList LRegion::overrideIds = NumList();
NumList LRunnable::overrideIds = NumList() << 256;
NumList LSemaphore::overrideIds = NumList();
NumList LSizePolicy::overrideIds = NumList();
NumList LSpacerItem::overrideIds = NumList() << 144 << 152 << 153 << 155 << 148 << 149 << 40 << 313;
NumList LStandardItem::overrideIds = NumList() << 309 << 310 << 315 << 161;
NumList LSystemSemaphore::overrideIds = NumList();
NumList LTableWidgetItem::overrideIds = NumList() << 309 << 310 << 311;
NumList LTableWidgetSelectionRange::overrideIds = NumList();
NumList LTextBlockFormat::overrideIds = NumList();
NumList LTextBoundaryFinder::overrideIds = NumList();
NumList LTextCharFormat::overrideIds = NumList();
NumList LTextCodec::overrideIds = NumList() << 316 << 317 << 318 << 319 << 320;
NumList LTextCursor::overrideIds = NumList();
NumList LTextDecoder::overrideIds = NumList();
NumList LTextDocumentFragment::overrideIds = NumList();
NumList LTextDocumentWriter::overrideIds = NumList();
NumList LTextEncoder::overrideIds = NumList();
NumList LTextFormat::overrideIds = NumList();
NumList LTextFragment::overrideIds = NumList();
NumList LTextFrameFormat::overrideIds = NumList();
NumList LTextImageFormat::overrideIds = NumList();
NumList LTextLayout::overrideIds = NumList();
NumList LTextLength::overrideIds = NumList();
NumList LTextLine::overrideIds = NumList();
NumList LTextListFormat::overrideIds = NumList();
NumList LTextOption::overrideIds = NumList();
NumList LTextTableCell::overrideIds = NumList();
NumList LTextTableCellFormat::overrideIds = NumList();
NumList LTextTableFormat::overrideIds = NumList();
NumList LToolTip::overrideIds = NumList();
NumList LTransform::overrideIds = NumList();
NumList LTreeWidgetItem::overrideIds = NumList() << 309 << 321 << 322;
NumList LUndoCommand::overrideIds = NumList() << 323 << 324 << 325 << 326;
NumList LVariant::overrideIds = NumList();
NumList LVector2D::overrideIds = NumList();
NumList LVector3D::overrideIds = NumList();
NumList LVector4D::overrideIds = NumList();
NumList LWaitCondition::overrideIds = NumList();
NumList LWhatsThis::overrideIds = NumList();
NumList LWidgetItem::overrideIds = NumList() << 144 << 152 << 145 << 42 << 153 << 155 << 148 << 149 << 40 << 314;
NumList LWriteLocker::overrideIds = NumList();

void LObjects::ini(EQL* e) {
    static bool ok = false;
    if(!ok) {
        ok = true;
        eql = e;
        dynObject = new DynObject;
        Q = new QObject* [189];
        N = new QObject* [161];
        Q[0] = new Q1; Q[1] = new Q2; Q[2] = new Q3; Q[3] = new Q4; Q[4] = new Q5; Q[5] = new Q6; Q[6] = new Q7; Q[7] = new Q8; Q[8] = new Q9; Q[9] = new Q10; Q[10] = new Q11; Q[11] = new Q12; Q[12] = new Q13; Q[13] = new Q14; Q[14] = new Q15; Q[15] = new Q16; Q[16] = new Q17; Q[17] = new Q18; Q[18] = new Q19; Q[19] = new Q20; Q[20] = new Q21; Q[21] = new Q22; Q[22] = new Q23; Q[23] = new Q24; Q[24] = new Q25; Q[25] = new Q26; Q[26] = new Q27; Q[27] = new Q28; Q[28] = new Q29; Q[29] = new Q30; Q[30] = new Q31; Q[31] = new Q32; Q[32] = new Q33; Q[33] = new Q34; Q[34] = new Q35; Q[35] = new Q36; Q[36] = new Q37; Q[37] = new Q38; Q[38] = new Q39; Q[39] = new Q40; Q[40] = new Q41; Q[41] = new Q42; Q[42] = new Q43; Q[43] = new Q44; Q[44] = new Q45; Q[45] = new Q46; Q[46] = new Q47; Q[47] = new Q48; Q[48] = new Q49; Q[49] = new Q50; Q[50] = new Q51; Q[51] = new Q52; Q[52] = new Q53; Q[53] = new Q54; Q[54] = new Q55; Q[55] = new Q56; Q[56] = new Q57; Q[57] = new Q58; Q[58] = new Q59; Q[59] = new Q60; Q[60] = new Q61; Q[61] = new Q62; Q[62] = new Q63; Q[63] = new Q64; Q[64] = new Q65; Q[65] = new Q66; Q[66] = new Q67; Q[67] = new Q68; Q[68] = new Q69; Q[69] = new Q70; Q[70] = new Q71; Q[71] = new Q72; Q[72] = new Q73; Q[73] = new Q74; Q[74] = new Q75; Q[75] = new Q76; Q[76] = new Q77; Q[77] = new Q78; Q[78] = new Q79; Q[79] = new Q80; Q[80] = new Q81; Q[81] = new Q82; Q[82] = new Q83; Q[83] = new Q84; Q[84] = new Q85; Q[85] = new Q86; Q[86] = new Q87; Q[87] = new Q88; Q[88] = new Q89; Q[89] = new Q90; Q[90] = new Q91; Q[91] = new Q92; Q[92] = new Q93; Q[93] = new Q94; Q[94] = new Q95; Q[95] = new Q96; Q[96] = new Q97; Q[97] = new Q98; Q[98] = new Q99; Q[99] = new Q100; Q[100] = new Q101; Q[101] = new Q102; Q[102] = new Q103; Q[103] = new Q104; Q[104] = new Q105; Q[105] = new Q106; Q[106] = new Q107; Q[107] = new Q108; Q[108] = new Q109; Q[109] = new Q110; Q[110] = new Q111; Q[111] = new Q112; Q[112] = new Q113; Q[113] = new Q114; Q[114] = new Q115; Q[115] = new Q116; Q[116] = new Q117; Q[117] = new Q118; Q[118] = new Q119; Q[119] = new Q120; Q[120] = new Q121; Q[121] = new Q122; Q[122] = new Q123; Q[123] = new Q124; Q[124] = new Q125; Q[125] = new Q126; Q[126] = new Q127; Q[127] = new Q128; Q[128] = new Q129; Q[129] = new Q130; Q[130] = new Q131; Q[131] = new Q132; Q[132] = new Q133; Q[133] = new Q134; Q[134] = new Q135; Q[135] = new Q136; Q[136] = new Q137; Q[137] = new Q138; Q[138] = new Q139; Q[139] = new Q140; Q[140] = new Q141; Q[141] = new Q142; Q[142] = new Q143; Q[143] = new Q144; Q[144] = new Q145; Q[145] = new Q146; Q[146] = new Q147; Q[147] = new Q148; Q[148] = new Q149; Q[149] = new Q150; Q[150] = new Q151; Q[151] = new Q152; Q[152] = new Q153; Q[153] = new Q154; Q[154] = new Q155; Q[155] = new Q156; Q[156] = new Q157; Q[157] = new Q158; Q[158] = new Q159; Q[159] = new Q160; Q[160] = new Q161; Q[161] = new Q162; Q[162] = new Q163; Q[163] = new Q164; Q[164] = new Q165; Q[165] = new Q166; Q[166] = new Q167; Q[167] = new Q168; Q[168] = new Q169; Q[169] = new Q170; Q[170] = new Q171; Q[171] = new Q172; Q[172] = new Q173; Q[173] = new Q174; Q[174] = new Q175; Q[175] = new Q176; Q[176] = new Q177; Q[177] = new Q178; Q[178] = new Q179; Q[179] = new Q180; Q[180] = new Q181; Q[181] = new Q182; Q[182] = new Q183; Q[183] = new Q184; Q[184] = new Q185; Q[185] = new Q186; Q[186] = new Q187; Q[187] = new Q188; Q[188] = new Q189; 
        N[0] = new N1; N[1] = new N2; N[2] = new N3; N[3] = new N4; N[4] = new N5; N[5] = new N6; N[6] = new N7; N[7] = new N8; N[8] = new N9; N[9] = new N10; N[10] = new N11; N[11] = new N12; N[12] = new N13; N[13] = new N14; N[14] = new N15; N[15] = new N16; N[16] = new N17; N[17] = new N18; N[18] = new N19; N[19] = new N20; N[20] = new N21; N[21] = new N22; N[22] = new N23; N[23] = new N24; N[24] = new N25; N[25] = new N26; N[26] = new N27; N[27] = new N28; N[28] = new N29; N[29] = new N30; N[30] = new N31; N[31] = new N32; N[32] = new N33; N[33] = new N34; N[34] = new N35; N[35] = new N36; N[36] = new N37; N[37] = new N38; N[38] = new N39; N[39] = new N40; N[40] = new N41; N[41] = new N42; N[42] = new N43; N[43] = new N44; N[44] = new N45; N[45] = new N46; N[46] = new N47; N[47] = new N48; N[48] = new N49; N[49] = new N50; N[50] = new N51; N[51] = new N52; N[52] = new N53; N[53] = new N54; N[54] = new N55; N[55] = new N56; N[56] = new N57; N[57] = new N58; N[58] = new N59; N[59] = new N60; N[60] = new N61; N[61] = new N62; N[62] = new N63; N[63] = new N64; N[64] = new N65; N[65] = new N66; N[66] = new N67; N[67] = new N68; N[68] = new N69; N[69] = new N70; N[70] = new N71; N[71] = new N72; N[72] = new N73; N[73] = new N74; N[74] = new N75; N[75] = new N76; N[76] = new N77; N[77] = new N78; N[78] = new N79; N[79] = new N80; N[80] = new N81; N[81] = new N82; N[82] = new N83; N[83] = new N84; N[84] = new N85; N[85] = new N86; N[86] = new N87; N[87] = new N88; N[88] = new N89; N[89] = new N90; N[90] = new N91; N[91] = new N92; N[92] = new N93; N[93] = new N94; N[94] = new N95; N[95] = new N96; N[96] = new N97; N[97] = new N98; N[98] = new N99; N[99] = new N100; N[100] = new N101; N[101] = new N102; N[102] = new N103; N[103] = new N104; N[104] = new N105; N[105] = new N106; N[106] = new N107; N[107] = new N108; N[108] = new N109; N[109] = new N110; N[110] = new N111; N[111] = new N112; N[112] = new N113; N[113] = new N114; N[114] = new N115; N[115] = new N116; N[116] = new N117; N[117] = new N118; N[118] = new N119; N[119] = new N120; N[120] = new N121; N[121] = new N122; N[122] = new N123; N[123] = new N124; N[124] = new N125; N[125] = new N126; N[126] = new N127; N[127] = new N128; N[128] = new N129; N[129] = new N130; N[130] = new N131; N[131] = new N132; N[132] = new N133; N[133] = new N134; N[134] = new N135; N[135] = new N136; N[136] = new N137; N[137] = new N138; N[138] = new N139; N[139] = new N140; N[140] = new N141; N[141] = new N142; N[142] = new N143; N[143] = new N144; N[144] = new N145; N[145] = new N146; N[146] = new N147; N[147] = new N148; N[148] = new N149; N[149] = new N150; N[150] = new N151; N[151] = new N152; N[152] = new N153; N[153] = new N154; N[154] = new N155; N[155] = new N156; N[156] = new N157; N[157] = new N158; N[158] = new N159; N[159] = new N160; N[160] = new N161; 
        q_names["QAbstractAnimation"] = 1;
        q_names["QAbstractButton"] = 2;
        q_names["QAbstractItemDelegate"] = 3;
        q_names["QAbstractItemModel"] = 4;
        q_names["QAbstractItemView"] = 5;
        q_names["QAbstractListModel"] = 6;
        q_names["QAbstractPrintDialog"] = 7;
        q_names["QAbstractProxyModel"] = 8;
        q_names["QAbstractScrollArea"] = 9;
        q_names["QAbstractSlider"] = 10;
        q_names["QAbstractSpinBox"] = 11;
        q_names["QAbstractState"] = 12;
        q_names["QAbstractTableModel"] = 13;
        q_names["QAbstractTextDocumentLayout"] = 14;
        q_names["QAbstractTransition"] = 15;
        q_names["QAction"] = 16;
        q_names["QActionGroup"] = 17;
        q_names["QAnimationGroup"] = 18;
        q_names["QApplication"] = 19;
        q_names["QBoxLayout"] = 20;
        q_names["QBuffer"] = 21;
        q_names["QButtonGroup"] = 22;
        q_names["QCDEStyle"] = 23;
        q_names["QCalendarWidget"] = 24;
        q_names["QCheckBox"] = 25;
        q_names["QCleanlooksStyle"] = 26;
        q_names["QClipboard"] = 27;
        q_names["QColorDialog"] = 28;
        q_names["QColumnView"] = 29;
        q_names["QComboBox"] = 30;
        q_names["QCommandLinkButton"] = 31;
        q_names["QCommonStyle"] = 32;
        q_names["QCompleter"] = 33;
        q_names["QCoreApplication"] = 34;
        q_names["QDataWidgetMapper"] = 35;
        q_names["QDateEdit"] = 36;
        q_names["QDateTimeEdit"] = 37;
        q_names["QDesktopWidget"] = 38;
        q_names["QDial"] = 39;
        q_names["QDialog"] = 40;
        q_names["QDialogButtonBox"] = 41;
        q_names["QDirModel"] = 42;
        q_names["QDockWidget"] = 43;
        q_names["QDoubleSpinBox"] = 44;
        q_names["QDoubleValidator"] = 45;
        q_names["QDrag"] = 46;
        q_names["QErrorMessage"] = 47;
        q_names["QEventLoop"] = 48;
        q_names["QEventTransition"] = 49;
        q_names["QFile"] = 50;
        q_names["QFileDialog"] = 51;
        q_names["QFileSystemModel"] = 52;
        q_names["QFileSystemWatcher"] = 53;
        q_names["QFinalState"] = 54;
        q_names["QFocusFrame"] = 55;
        q_names["QFontComboBox"] = 56;
        q_names["QFontDialog"] = 57;
        q_names["QFormLayout"] = 58;
        q_names["QFrame"] = 59;
        q_names["QGesture"] = 60;
        q_names["QGraphicsAnchor"] = 61;
        q_names["QGraphicsBlurEffect"] = 62;
        q_names["QGraphicsColorizeEffect"] = 63;
        q_names["QGraphicsDropShadowEffect"] = 64;
        q_names["QGraphicsEffect"] = 65;
        q_names["QGraphicsObject"] = 66;
        q_names["QGraphicsOpacityEffect"] = 67;
        q_names["QGraphicsProxyWidget"] = 68;
        q_names["QGraphicsRotation"] = 69;
        q_names["QGraphicsScale"] = 70;
        q_names["QGraphicsScene"] = 71;
        q_names["QGraphicsTextItem"] = 72;
        q_names["QGraphicsTransform"] = 73;
        q_names["QGraphicsView"] = 74;
        q_names["QGraphicsWidget"] = 75;
        q_names["QGridLayout"] = 76;
        q_names["QGroupBox"] = 77;
        q_names["QHBoxLayout"] = 78;
        q_names["QHeaderView"] = 79;
        q_names["QHistoryState"] = 80;
        q_names["QIODevice"] = 81;
        q_names["QInputContext"] = 82;
        q_names["QInputDialog"] = 83;
        q_names["QIntValidator"] = 84;
        q_names["QItemDelegate"] = 85;
        q_names["QItemSelectionModel"] = 86;
        q_names["QKeyEventTransition"] = 87;
        q_names["QLCDNumber"] = 88;
        q_names["QLabel"] = 89;
        q_names["QLayout"] = 90;
        q_names["QLibrary"] = 91;
        q_names["QLineEdit"] = 92;
        q_names["QListView"] = 93;
        q_names["QListWidget"] = 94;
        q_names["QMainWindow"] = 95;
        q_names["QMdiArea"] = 96;
        q_names["QMdiSubWindow"] = 97;
        q_names["QMenu"] = 98;
        q_names["QMenuBar"] = 99;
        q_names["QMessageBox"] = 100;
        q_names["QMimeData"] = 101;
        q_names["QMotifStyle"] = 102;
        q_names["QMouseEventTransition"] = 103;
        q_names["QMovie"] = 104;
        q_names["QObject"] = 105;
        q_names["QPageSetupDialog"] = 106;
        q_names["QPanGesture"] = 107;
        q_names["QParallelAnimationGroup"] = 108;
        q_names["QPauseAnimation"] = 109;
        q_names["QPinchGesture"] = 110;
        q_names["QPlainTextDocumentLayout"] = 111;
        q_names["QPlainTextEdit"] = 112;
        q_names["QPlastiqueStyle"] = 113;
        q_names["QPluginLoader"] = 114;
        q_names["QPrintDialog"] = 115;
        q_names["QPrintPreviewDialog"] = 116;
        q_names["QPrintPreviewWidget"] = 117;
        q_names["QProcess"] = 118;
        q_names["QProgressBar"] = 119;
        q_names["QProgressDialog"] = 120;
        q_names["QPropertyAnimation"] = 121;
        q_names["QPushButton"] = 122;
        q_names["QRadioButton"] = 123;
        q_names["QRegExpValidator"] = 124;
        q_names["QRubberBand"] = 125;
        q_names["QScrollArea"] = 126;
        q_names["QScrollBar"] = 127;
        q_names["QSequentialAnimationGroup"] = 128;
        q_names["QSessionManager"] = 129;
        q_names["QSettings"] = 130;
        q_names["QShortcut"] = 131;
        q_names["QSignalTransition"] = 132;
        q_names["QSizeGrip"] = 133;
        q_names["QSlider"] = 134;
        q_names["QSortFilterProxyModel"] = 135;
        q_names["QSound"] = 136;
        q_names["QSpinBox"] = 137;
        q_names["QSplashScreen"] = 138;
        q_names["QSplitter"] = 139;
        q_names["QSplitterHandle"] = 140;
        q_names["QStackedLayout"] = 141;
        q_names["QStackedWidget"] = 142;
        q_names["QStandardItemModel"] = 143;
        q_names["QState"] = 144;
        q_names["QStateMachine"] = 145;
        q_names["QStatusBar"] = 146;
        q_names["QStringListModel"] = 147;
        q_names["QStyle"] = 148;
        q_names["QStyledItemDelegate"] = 149;
        q_names["QSwipeGesture"] = 150;
        q_names["QSyntaxHighlighter"] = 151;
        q_names["QSystemTrayIcon"] = 152;
        q_names["QTabBar"] = 153;
        q_names["QTabWidget"] = 154;
        q_names["QTableView"] = 155;
        q_names["QTableWidget"] = 156;
        q_names["QTapAndHoldGesture"] = 157;
        q_names["QTapGesture"] = 158;
        q_names["QTextBlockGroup"] = 159;
        q_names["QTextBrowser"] = 160;
        q_names["QTextDocument"] = 161;
        q_names["QTextEdit"] = 162;
        q_names["QTextFrame"] = 163;
        q_names["QTextList"] = 164;
        q_names["QTextObject"] = 165;
        q_names["QTextTable"] = 166;
        q_names["QThread"] = 167;
        q_names["QThreadPool"] = 168;
        q_names["QTimeEdit"] = 169;
        q_names["QTimeLine"] = 170;
        q_names["QTimer"] = 171;
        q_names["QToolBar"] = 172;
        q_names["QToolBox"] = 173;
        q_names["QToolButton"] = 174;
        q_names["QTranslator"] = 175;
        q_names["QTreeView"] = 176;
        q_names["QTreeWidget"] = 177;
        q_names["QUndoGroup"] = 178;
        q_names["QUndoStack"] = 179;
        q_names["QUndoView"] = 180;
        q_names["QVBoxLayout"] = 181;
        q_names["QValidator"] = 182;
        q_names["QVariantAnimation"] = 183;
        q_names["QWidget"] = 184;
        q_names["QWidgetAction"] = 185;
        q_names["QWindowsStyle"] = 186;
        q_names["QWizard"] = 187;
        q_names["QWizardPage"] = 188;
        q_names["QWorkspace"] = 189;
        n_names["QAbstractGraphicsShapeItem"] = 1;
        n_names["QAccessible"] = 2;
        n_names["QAccessibleEvent"] = 3;
        n_names["QAccessibleInterface"] = 4;
        n_names["QAccessibleObject"] = 5;
        n_names["QAccessibleWidget"] = 6;
        n_names["QActionEvent"] = 7;
        n_names["QBasicTimer"] = 8;
        n_names["QBitArray"] = 9;
        n_names["QBitmap"] = 10;
        n_names["QBrush"] = 11;
        n_names["QChildEvent"] = 12;
        n_names["QCloseEvent"] = 13;
        n_names["QColor"] = 14;
        n_names["QConicalGradient"] = 15;
        n_names["QContextMenuEvent"] = 16;
        n_names["QCryptographicHash"] = 17;
        n_names["QCursor"] = 18;
        n_names["QDate"] = 19;
        n_names["QDateTime"] = 20;
        n_names["QDesktopServices"] = 21;
        n_names["QDir"] = 22;
        n_names["QDirIterator"] = 23;
        n_names["QDragEnterEvent"] = 24;
        n_names["QDragLeaveEvent"] = 25;
        n_names["QDragMoveEvent"] = 26;
        n_names["QDropEvent"] = 27;
        n_names["QDynamicPropertyChangeEvent"] = 28;
        n_names["QEasingCurve"] = 29;
        n_names["QEvent"] = 30;
        n_names["QFileIconProvider"] = 31;
        n_names["QFileInfo"] = 32;
        n_names["QFileOpenEvent"] = 33;
        n_names["QFocusEvent"] = 34;
        n_names["QFontDatabase"] = 35;
        n_names["QFontMetrics"] = 36;
        n_names["QGestureEvent"] = 37;
        n_names["QGradient"] = 38;
        n_names["QGraphicsAnchorLayout"] = 39;
        n_names["QGraphicsEllipseItem"] = 40;
        n_names["QGraphicsGridLayout"] = 41;
        n_names["QGraphicsItem"] = 42;
        n_names["QGraphicsItemGroup"] = 43;
        n_names["QGraphicsLayout"] = 44;
        n_names["QGraphicsLayoutItem"] = 45;
        n_names["QGraphicsLineItem"] = 46;
        n_names["QGraphicsLinearLayout"] = 47;
        n_names["QGraphicsPathItem"] = 48;
        n_names["QGraphicsPixmapItem"] = 49;
        n_names["QGraphicsPolygonItem"] = 50;
        n_names["QGraphicsRectItem"] = 51;
        n_names["QGraphicsSceneContextMenuEvent"] = 52;
        n_names["QGraphicsSceneDragDropEvent"] = 53;
        n_names["QGraphicsSceneEvent"] = 54;
        n_names["QGraphicsSceneHelpEvent"] = 55;
        n_names["QGraphicsSceneHoverEvent"] = 56;
        n_names["QGraphicsSceneMouseEvent"] = 57;
        n_names["QGraphicsSceneMoveEvent"] = 58;
        n_names["QGraphicsSceneResizeEvent"] = 59;
        n_names["QGraphicsSceneWheelEvent"] = 60;
        n_names["QGraphicsSimpleTextItem"] = 61;
        n_names["QHelpEvent"] = 62;
        n_names["QHideEvent"] = 63;
        n_names["QHoverEvent"] = 64;
        n_names["QIcon"] = 65;
        n_names["QIconDragEvent"] = 66;
        n_names["QImage"] = 67;
        n_names["QInputEvent"] = 68;
        n_names["QInputMethodEvent"] = 69;
        n_names["QItemEditorFactory"] = 70;
        n_names["QItemSelection"] = 71;
        n_names["QItemSelectionRange"] = 72;
        n_names["QKeyEvent"] = 73;
        n_names["QLayoutItem"] = 74;
        n_names["QLibraryInfo"] = 75;
        n_names["QLinearGradient"] = 76;
        n_names["QListWidgetItem"] = 77;
        n_names["QLocale"] = 78;
        n_names["QMargins"] = 79;
        n_names["QMatrix"] = 80;
        n_names["QMatrix4x4"] = 81;
        n_names["QMetaObject"] = 82;
        n_names["QModelIndex"] = 83;
        n_names["QMouseEvent"] = 84;
        n_names["QMoveEvent"] = 85;
        n_names["QMutex"] = 86;
        n_names["QMutexLocker"] = 87;
        n_names["QPaintDevice"] = 88;
        n_names["QPaintEvent"] = 89;
        n_names["QPainter"] = 90;
        n_names["QPainterPath"] = 91;
        n_names["QPainterPathStroker"] = 92;
        n_names["QPalette"] = 93;
        n_names["QPen"] = 94;
        n_names["QPersistentModelIndex"] = 95;
        n_names["QPicture"] = 96;
        n_names["QPixmap"] = 97;
        n_names["QPixmapCache"] = 98;
        n_names["QPrinter"] = 99;
        n_names["QPrinterInfo"] = 100;
        n_names["QProcessEnvironment"] = 101;
        n_names["QQuaternion"] = 102;
        n_names["QRadialGradient"] = 103;
        n_names["QReadLocker"] = 104;
        n_names["QReadWriteLock"] = 105;
        n_names["QRegExp"] = 106;
        n_names["QRegion"] = 107;
        n_names["QResizeEvent"] = 108;
        n_names["QRunnable"] = 109;
        n_names["QSemaphore"] = 110;
        n_names["QShortcutEvent"] = 111;
        n_names["QShowEvent"] = 112;
        n_names["QSizePolicy"] = 113;
        n_names["QSpacerItem"] = 114;
        n_names["QStandardItem"] = 115;
        n_names["QStatusTipEvent"] = 116;
        n_names["QSystemSemaphore"] = 117;
        n_names["QTableWidgetItem"] = 118;
        n_names["QTableWidgetSelectionRange"] = 119;
        n_names["QTabletEvent"] = 120;
        n_names["QTextBlock"] = 121;
        n_names["QTextBlockFormat"] = 122;
        n_names["QTextBoundaryFinder"] = 123;
        n_names["QTextCharFormat"] = 124;
        n_names["QTextCodec"] = 125;
        n_names["QTextCursor"] = 126;
        n_names["QTextDecoder"] = 127;
        n_names["QTextDocumentFragment"] = 128;
        n_names["QTextDocumentWriter"] = 129;
        n_names["QTextEncoder"] = 130;
        n_names["QTextFormat"] = 131;
        n_names["QTextFragment"] = 132;
        n_names["QTextFrameFormat"] = 133;
        n_names["QTextImageFormat"] = 134;
        n_names["QTextLayout"] = 135;
        n_names["QTextLength"] = 136;
        n_names["QTextLine"] = 137;
        n_names["QTextListFormat"] = 138;
        n_names["QTextOption"] = 139;
        n_names["QTextTableCell"] = 140;
        n_names["QTextTableCellFormat"] = 141;
        n_names["QTextTableFormat"] = 142;
        n_names["QTime"] = 143;
        n_names["QTimerEvent"] = 144;
        n_names["QToolTip"] = 145;
        n_names["QTouchEvent"] = 146;
        n_names["QTransform"] = 147;
        n_names["QTreeWidgetItem"] = 148;
        n_names["QUndoCommand"] = 149;
        n_names["QUrl"] = 150;
        n_names["QVariant"] = 151;
        n_names["QVector2D"] = 152;
        n_names["QVector3D"] = 153;
        n_names["QVector4D"] = 154;
        n_names["QWaitCondition"] = 155;
        n_names["QWhatsThis"] = 156;
        n_names["QWhatsThisClickedEvent"] = 157;
        n_names["QWheelEvent"] = 158;
        n_names["QWidgetItem"] = 159;
        n_names["QWindowStateChangeEvent"] = 160;
        n_names["QWriteLocker"] = 161;
        override_function_ids["duration()"] = 1;
        override_function_ids["updateCurrentTime(int)"] = 2;
        override_function_ids["updateDirection(QAbstractAnimation::Direction)"] = 3;
        override_function_ids["updateState(QAbstractAnimation::State,QAbstractAnimation::State)"] = 4;
        override_function_ids["childEvent(QChildEvent*)"] = 5;
        override_function_ids["connectNotify(const char*)"] = 6;
        override_function_ids["customEvent(QEvent*)"] = 7;
        override_function_ids["disconnectNotify(const char*)"] = 8;
        override_function_ids["timerEvent(QTimerEvent*)"] = 9;
        override_function_ids["atEnd()"] = 10;
        override_function_ids["canReadLine()"] = 11;
        override_function_ids["close()"] = 12;
        override_function_ids["open(OpenMode)"] = 13;
        override_function_ids["isSequential()"] = 14;
        override_function_ids["reset()"] = 15;
        override_function_ids["waitForBytesWritten(int)"] = 16;
        override_function_ids["waitForReadyRead(int)"] = 17;
        override_function_ids["drawControl(ControlElement,QStyleOption*,QPainter*,QWidget*)"] = 18;
        override_function_ids["drawPrimitive(PrimitiveElement,QStyleOption*,QPainter*,QWidget*)"] = 19;
        override_function_ids["pixelMetric(PixelMetric,QStyleOption*,QWidget*)"] = 20;
        override_function_ids["standardPalette()"] = 21;
        override_function_ids["drawComplexControl(ComplexControl,QStyleOptionComplex*,QPainter*,QWidget*)"] = 22;
        override_function_ids["polish(QPalette)"] = 23;
        override_function_ids["sizeFromContents(ContentsType,QStyleOption*,QSize,QWidget*)"] = 24;
        override_function_ids["standardPixmap(StandardPixmap,QStyleOption*,QWidget*)"] = 25;
        override_function_ids["styleHint(StyleHint,QStyleOption*,QWidget*,QStyleHintReturn*)"] = 26;
        override_function_ids["subControlRect(ComplexControl,QStyleOptionComplex*,SubControl,QWidget*)"] = 27;
        override_function_ids["subElementRect(SubElement,QStyleOption*,QWidget*)"] = 28;
        override_function_ids["generatedIconPixmap(QIcon::Mode,QPixmap,QStyleOption*)"] = 29;
        override_function_ids["hitTestComplexControl(ComplexControl,QStyleOptionComplex*,QPoint,QWidget*)"] = 30;
        override_function_ids["polish(QApplication*)"] = 31;
        override_function_ids["polish(QWidget*)"] = 32;
        override_function_ids["unpolish(QWidget*)"] = 33;
        override_function_ids["unpolish(QApplication*)"] = 34;
        override_function_ids["drawItemPixmap(QPainter*,QRect,int,QPixmap)"] = 35;
        override_function_ids["drawItemText(QPainter*,QRect,int,QPalette,bool,QString,QPalette::ColorRole)"] = 36;
        override_function_ids["itemPixmapRect(QRect,int,QPixmap)"] = 37;
        override_function_ids["itemTextRect(QFontMetrics,QRect,int,bool,QString)"] = 38;
        override_function_ids["minimumSizeHint()"] = 39;
        override_function_ids["sizeHint()"] = 40;
        override_function_ids["paintCell(QPainter*,QRect,QDate)"] = 41;
        override_function_ids["heightForWidth(int)"] = 42;
        override_function_ids["inputMethodQuery(Qt::InputMethodQuery)"] = 43;
        override_function_ids["actionEvent(QActionEvent*)"] = 44;
        override_function_ids["changeEvent(QEvent*)"] = 45;
        override_function_ids["closeEvent(QCloseEvent*)"] = 46;
        override_function_ids["contextMenuEvent(QContextMenuEvent*)"] = 47;
        override_function_ids["dragEnterEvent(QDragEnterEvent*)"] = 48;
        override_function_ids["dragLeaveEvent(QDragLeaveEvent*)"] = 49;
        override_function_ids["dragMoveEvent(QDragMoveEvent*)"] = 50;
        override_function_ids["dropEvent(QDropEvent*)"] = 51;
        override_function_ids["enterEvent(QEvent*)"] = 52;
        override_function_ids["focusInEvent(QFocusEvent*)"] = 53;
        override_function_ids["focusNextPrevChild(bool)"] = 54;
        override_function_ids["focusOutEvent(QFocusEvent*)"] = 55;
        override_function_ids["hideEvent(QHideEvent*)"] = 56;
        override_function_ids["inputMethodEvent(QInputMethodEvent*)"] = 57;
        override_function_ids["keyPressEvent(QKeyEvent*)"] = 58;
        override_function_ids["keyReleaseEvent(QKeyEvent*)"] = 59;
        override_function_ids["leaveEvent(QEvent*)"] = 60;
        override_function_ids["mouseDoubleClickEvent(QMouseEvent*)"] = 61;
        override_function_ids["mouseMoveEvent(QMouseEvent*)"] = 62;
        override_function_ids["mousePressEvent(QMouseEvent*)"] = 63;
        override_function_ids["mouseReleaseEvent(QMouseEvent*)"] = 64;
        override_function_ids["moveEvent(QMoveEvent*)"] = 65;
        override_function_ids["paintEvent(QPaintEvent*)"] = 66;
        override_function_ids["resizeEvent(QResizeEvent*)"] = 67;
        override_function_ids["showEvent(QShowEvent*)"] = 68;
        override_function_ids["tabletEvent(QTabletEvent*)"] = 69;
        override_function_ids["wheelEvent(QWheelEvent*)"] = 70;
        override_function_ids["checkStateSet()"] = 71;
        override_function_ids["hitButton(QPoint)"] = 72;
        override_function_ids["nextCheckState()"] = 73;
        override_function_ids["setVisible(bool)"] = 74;
        override_function_ids["indexAt(QPoint)"] = 75;
        override_function_ids["scrollTo(QModelIndex,ScrollHint)"] = 76;
        override_function_ids["selectAll()"] = 77;
        override_function_ids["setModel(QAbstractItemModel*)"] = 78;
        override_function_ids["setRootIndex(QModelIndex)"] = 79;
        override_function_ids["setSelectionModel(QItemSelectionModel*)"] = 80;
        override_function_ids["visualRect(QModelIndex)"] = 81;
        override_function_ids["createColumn(QModelIndex)"] = 82;
        override_function_ids["keyboardSearch(QString)"] = 83;
        override_function_ids["sizeHintForColumn(int)"] = 84;
        override_function_ids["sizeHintForRow(int)"] = 85;
        override_function_ids["edit(QModelIndex,EditTrigger,QEvent*)"] = 86;
        override_function_ids["horizontalOffset()"] = 87;
        override_function_ids["isIndexHidden(QModelIndex)"] = 88;
        override_function_ids["moveCursor(CursorAction,Qt::KeyboardModifiers)"] = 89;
        override_function_ids["selectedIndexes()"] = 90;
        override_function_ids["selectionCommand(QModelIndex,QEvent*)"] = 91;
        override_function_ids["setSelection(QRect,QItemSelectionModel::SelectionFlags)"] = 92;
        override_function_ids["startDrag(Qt::DropActions)"] = 93;
        override_function_ids["verticalOffset()"] = 94;
        override_function_ids["viewOptions()"] = 95;
        override_function_ids["visualRegionForSelection(QItemSelection)"] = 96;
        override_function_ids["scrollContentsBy(int,int)"] = 97;
        override_function_ids["viewportEvent(QEvent*)"] = 98;
        override_function_ids["hidePopup()"] = 99;
        override_function_ids["showPopup()"] = 100;
        override_function_ids["pathFromIndex(QModelIndex)"] = 101;
        override_function_ids["splitPath(QString)"] = 102;
        override_function_ids["clear()"] = 103;
        override_function_ids["stepBy(int)"] = 104;
        override_function_ids["dateTimeFromText(QString)"] = 105;
        override_function_ids["textFromDateTime(QDateTime)"] = 106;
        override_function_ids["fixup(QString)"] = 107;
        override_function_ids["validate(QString,int)"] = 108;
        override_function_ids["stepEnabled()"] = 109;
        override_function_ids["sliderChange(SliderChange)"] = 110;
        override_function_ids["columnCount(QModelIndex)"] = 111;
        override_function_ids["data(QModelIndex,int)"] = 112;
        override_function_ids["dropMimeData(QMimeData*,Qt::DropAction,int,int,QModelIndex)"] = 113;
        override_function_ids["flags(QModelIndex)"] = 114;
        override_function_ids["hasChildren(QModelIndex)"] = 115;
        override_function_ids["headerData(int,Qt::Orientation,int)"] = 116;
        override_function_ids["index(int,int,QModelIndex)"] = 117;
        override_function_ids["mimeData(QModelIndexList)"] = 118;
        override_function_ids["mimeTypes()"] = 119;
        override_function_ids["parent(QModelIndex)"] = 120;
        override_function_ids["rowCount(QModelIndex)"] = 121;
        override_function_ids["setData(QModelIndex,QVariant,int)"] = 122;
        override_function_ids["sort(int,Qt::SortOrder)"] = 123;
        override_function_ids["supportedDropActions()"] = 124;
        override_function_ids["buddy(QModelIndex)"] = 125;
        override_function_ids["canFetchMore(QModelIndex)"] = 126;
        override_function_ids["fetchMore(QModelIndex)"] = 127;
        override_function_ids["insertColumns(int,int,QModelIndex)"] = 128;
        override_function_ids["insertRows(int,int,QModelIndex)"] = 129;
        override_function_ids["match(QModelIndex,int,QVariant,int,Qt::MatchFlags)"] = 130;
        override_function_ids["removeColumns(int,int,QModelIndex)"] = 131;
        override_function_ids["removeRows(int,int,QModelIndex)"] = 132;
        override_function_ids["setHeaderData(int,Qt::Orientation,QVariant,int)"] = 133;
        override_function_ids["span(QModelIndex)"] = 134;
        override_function_ids["textFromValue(double)"] = 135;
        override_function_ids["valueFromText(QString)"] = 136;
        override_function_ids["setRange(double,double,int)"] = 137;
        override_function_ids["eventTest(QEvent*)"] = 138;
        override_function_ids["onTransition(QEvent*)"] = 139;
        override_function_ids["onEntry(QEvent*)"] = 140;
        override_function_ids["onExit(QEvent*)"] = 141;
        override_function_ids["addItem(QLayoutItem*)"] = 142;
        override_function_ids["count()"] = 143;
        override_function_ids["expandingDirections()"] = 144;
        override_function_ids["hasHeightForWidth()"] = 145;
        override_function_ids["invalidate()"] = 146;
        override_function_ids["itemAt(int)"] = 147;
        override_function_ids["minimumSize()"] = 148;
        override_function_ids["setGeometry(QRect)"] = 149;
        override_function_ids["takeAt(int)"] = 150;
        override_function_ids["indexOf(QWidget*)"] = 151;
        override_function_ids["geometry()"] = 152;
        override_function_ids["isEmpty()"] = 153;
        override_function_ids["layout()"] = 154;
        override_function_ids["maximumSize()"] = 155;
        override_function_ids["boundingRectFor(QRectF)"] = 156;
        override_function_ids["draw(QPainter*)"] = 157;
        override_function_ids["sourceChanged(ChangeFlags)"] = 158;
        override_function_ids["paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 159;
        override_function_ids["setGeometry(QRectF)"] = 160;
        override_function_ids["type()"] = 161;
        override_function_ids["paintWindowFrame(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 162;
        override_function_ids["boundingRect()"] = 163;
        override_function_ids["shape()"] = 164;
        override_function_ids["grabKeyboardEvent(QEvent*)"] = 165;
        override_function_ids["grabMouseEvent(QEvent*)"] = 166;
        override_function_ids["initStyleOption(QStyleOption*)"] = 167;
        override_function_ids["moveEvent(QGraphicsSceneMoveEvent*)"] = 168;
        override_function_ids["polishEvent()"] = 169;
        override_function_ids["resizeEvent(QGraphicsSceneResizeEvent*)"] = 170;
        override_function_ids["ungrabKeyboardEvent(QEvent*)"] = 171;
        override_function_ids["ungrabMouseEvent(QEvent*)"] = 172;
        override_function_ids["windowFrameEvent(QEvent*)"] = 173;
        override_function_ids["windowFrameSectionAt(QPointF)"] = 174;
        override_function_ids["applyTo(QMatrix4x4*)"] = 175;
        override_function_ids["contextMenuEvent(QGraphicsSceneContextMenuEvent*)"] = 176;
        override_function_ids["dragEnterEvent(QGraphicsSceneDragDropEvent*)"] = 177;
        override_function_ids["dragLeaveEvent(QGraphicsSceneDragDropEvent*)"] = 178;
        override_function_ids["dragMoveEvent(QGraphicsSceneDragDropEvent*)"] = 179;
        override_function_ids["drawBackground(QPainter*,QRectF)"] = 180;
        override_function_ids["drawForeground(QPainter*,QRectF)"] = 181;
        override_function_ids["dropEvent(QGraphicsSceneDragDropEvent*)"] = 182;
        override_function_ids["helpEvent(QGraphicsSceneHelpEvent*)"] = 183;
        override_function_ids["mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)"] = 184;
        override_function_ids["mouseMoveEvent(QGraphicsSceneMouseEvent*)"] = 185;
        override_function_ids["mousePressEvent(QGraphicsSceneMouseEvent*)"] = 186;
        override_function_ids["mouseReleaseEvent(QGraphicsSceneMouseEvent*)"] = 187;
        override_function_ids["wheelEvent(QGraphicsSceneWheelEvent*)"] = 188;
        override_function_ids["contains(QPointF)"] = 189;
        override_function_ids["isObscuredBy(QGraphicsItem*)"] = 190;
        override_function_ids["opaqueArea()"] = 191;
        override_function_ids["minimumHeightForWidth(int)"] = 192;
        override_function_ids["done(int)"] = 193;
        override_function_ids["setRange(int,int)"] = 194;
        override_function_ids["createEditor(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 195;
        override_function_ids["paint(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 196;
        override_function_ids["setEditorData(QWidget*,QModelIndex)"] = 197;
        override_function_ids["setModelData(QWidget*,QAbstractItemModel*,QModelIndex)"] = 198;
        override_function_ids["sizeHint(QStyleOptionViewItem,QModelIndex)"] = 199;
        override_function_ids["updateEditorGeometry(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 200;
        override_function_ids["drawCheck(QPainter*,QStyleOptionViewItem,QRect,Qt::CheckState)"] = 201;
        override_function_ids["drawDecoration(QPainter*,QStyleOptionViewItem,QRect,QPixmap)"] = 202;
        override_function_ids["drawDisplay(QPainter*,QStyleOptionViewItem,QRect,QString)"] = 203;
        override_function_ids["drawFocus(QPainter*,QStyleOptionViewItem,QRect)"] = 204;
        override_function_ids["editorEvent(QEvent*,QAbstractItemModel*,QStyleOptionViewItem,QModelIndex)"] = 205;
        override_function_ids["dropMimeData(int,QMimeData*,Qt::DropAction)"] = 206;
        override_function_ids["mimeData(QList<QListWidgetItem*>)"] = 207;
        override_function_ids["createPopupMenu()"] = 208;
        override_function_ids["formats()"] = 209;
        override_function_ids["hasFormat(QString)"] = 210;
        override_function_ids["retrieveData(QString,QVariant::Type)"] = 211;
        override_function_ids["blockBoundingRect(QTextBlock)"] = 212;
        override_function_ids["documentSize()"] = 213;
        override_function_ids["draw(QPainter*,PaintContext)"] = 214;
        override_function_ids["frameBoundingRect(QTextFrame*)"] = 215;
        override_function_ids["hitTest(QPointF,Qt::HitTestAccuracy)"] = 216;
        override_function_ids["pageCount()"] = 217;
        override_function_ids["documentChanged(int,int,int)"] = 218;
        override_function_ids["drawInlineObject(QPainter*,QRectF,QTextInlineObject,int,QTextFormat)"] = 219;
        override_function_ids["positionInlineObject(QTextInlineObject,int,QTextFormat)"] = 220;
        override_function_ids["resizeInlineObject(QTextInlineObject,int,QTextFormat)"] = 221;
        override_function_ids["loadResource(int,QUrl)"] = 222;
        override_function_ids["canInsertFromMimeData(QMimeData*)"] = 223;
        override_function_ids["createMimeDataFromSelection()"] = 224;
        override_function_ids["insertFromMimeData(QMimeData*)"] = 225;
        override_function_ids["exec()"] = 226;
        override_function_ids["setupChildProcess()"] = 227;
        override_function_ids["text()"] = 228;
        override_function_ids["interpolated(QVariant,QVariant,qreal)"] = 229;
        override_function_ids["updateCurrentValue(QVariant)"] = 230;
        override_function_ids["mapFromSource(QModelIndex)"] = 231;
        override_function_ids["mapSelectionFromSource(QItemSelection)"] = 232;
        override_function_ids["mapSelectionToSource(QItemSelection)"] = 233;
        override_function_ids["mapToSource(QModelIndex)"] = 234;
        override_function_ids["setSourceModel(QAbstractItemModel*)"] = 235;
        override_function_ids["filterAcceptsColumn(int,QModelIndex)"] = 236;
        override_function_ids["filterAcceptsRow(int,QModelIndex)"] = 237;
        override_function_ids["lessThan(QModelIndex,QModelIndex)"] = 238;
        override_function_ids["revert()"] = 239;
        override_function_ids["submit()"] = 240;
        override_function_ids["textFromValue(int)"] = 241;
        override_function_ids["drawContents(QPainter*)"] = 242;
        override_function_ids["displayText(QVariant,QLocale)"] = 243;
        override_function_ids["initStyleOption(QStyleOptionViewItem*,QModelIndex)"] = 244;
        override_function_ids["highlightBlock(QString)"] = 245;
        override_function_ids["tabInserted(int)"] = 246;
        override_function_ids["tabLayoutChange()"] = 247;
        override_function_ids["tabRemoved(int)"] = 248;
        override_function_ids["tabSizeHint(int)"] = 249;
        override_function_ids["dropMimeData(int,int,QMimeData*,Qt::DropAction)"] = 250;
        override_function_ids["mimeData(QList<QTableWidgetItem*>)"] = 251;
        override_function_ids["blockFormatChanged(QTextBlock)"] = 252;
        override_function_ids["blockInserted(QTextBlock)"] = 253;
        override_function_ids["blockRemoved(QTextBlock)"] = 254;
        override_function_ids["createObject(QTextFormat)"] = 255;
        override_function_ids["run()"] = 256;
        override_function_ids["valueForTime(int)"] = 257;
        override_function_ids["itemInserted(int)"] = 258;
        override_function_ids["itemRemoved(int)"] = 259;
        override_function_ids["translate(const char*,const char*,const char*)"] = 260;
        override_function_ids["dataChanged(QModelIndex,QModelIndex)"] = 261;
        override_function_ids["drawBranches(QPainter*,QRect,QModelIndex)"] = 262;
        override_function_ids["drawRow(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 263;
        override_function_ids["dropMimeData(QTreeWidgetItem*,int,QMimeData*,Qt::DropAction)"] = 264;
        override_function_ids["mimeData(QList<QTreeWidgetItem*>)"] = 265;
        override_function_ids["createWidget(QWidget*)"] = 266;
        override_function_ids["deleteWidget(QWidget*)"] = 267;
        override_function_ids["nextId()"] = 268;
        override_function_ids["validateCurrentPage()"] = 269;
        override_function_ids["cleanupPage(int)"] = 270;
        override_function_ids["initializePage(int)"] = 271;
        override_function_ids["cleanupPage()"] = 272;
        override_function_ids["initializePage()"] = 273;
        override_function_ids["isComplete()"] = 274;
        override_function_ids["validatePage()"] = 275;
        override_function_ids["actionText(int,Text,int)"] = 276;
        override_function_ids["childAt(int,int)"] = 277;
        override_function_ids["childCount()"] = 278;
        override_function_ids["doAction(int,int,QVariantList)"] = 279;
        override_function_ids["indexOfChild(QAccessibleInterface*)"] = 280;
        override_function_ids["rect(int)"] = 281;
        override_function_ids["relationTo(int,QAccessibleInterface*,int)"] = 282;
        override_function_ids["role(int)"] = 283;
        override_function_ids["state(int)"] = 284;
        override_function_ids["text(Text,int)"] = 285;
        override_function_ids["userActionCount(int)"] = 286;
        override_function_ids["isValid()"] = 287;
        override_function_ids["object()"] = 288;
        override_function_ids["setText(Text,int,QString)"] = 289;
        override_function_ids["icon(IconType)"] = 290;
        override_function_ids["icon(QFileInfo)"] = 291;
        override_function_ids["type(QFileInfo)"] = 292;
        override_function_ids["removeAt(int)"] = 293;
        override_function_ids["widgetEvent(QEvent*)"] = 294;
        override_function_ids["updateGeometry()"] = 295;
        override_function_ids["sizeHint(Qt::SizeHint,QSizeF)"] = 296;
        override_function_ids["advance(int)"] = 297;
        override_function_ids["collidesWithItem(QGraphicsItem*,Qt::ItemSelectionMode)"] = 298;
        override_function_ids["collidesWithPath(QPainterPath,Qt::ItemSelectionMode)"] = 299;
        override_function_ids["hoverEnterEvent(QGraphicsSceneHoverEvent*)"] = 300;
        override_function_ids["hoverLeaveEvent(QGraphicsSceneHoverEvent*)"] = 301;
        override_function_ids["hoverMoveEvent(QGraphicsSceneHoverEvent*)"] = 302;
        override_function_ids["itemChange(GraphicsItemChange,QVariant)"] = 303;
        override_function_ids["sceneEvent(QEvent*)"] = 304;
        override_function_ids["sceneEventFilter(QGraphicsItem*,QEvent*)"] = 305;
        override_function_ids["metric(PaintDeviceMetric)"] = 306;
        override_function_ids["createEditor(QVariant::Type,QWidget*)"] = 307;
        override_function_ids["valuePropertyName(QVariant::Type)"] = 308;
        override_function_ids["clone()"] = 309;
        override_function_ids["data(int)"] = 310;
        override_function_ids["setData(int,QVariant)"] = 311;
        override_function_ids["setData(const char*,uint)"] = 312;
        override_function_ids["spacerItem()"] = 313;
        override_function_ids["widget()"] = 314;
        override_function_ids["setData(QVariant,int)"] = 315;
        override_function_ids["aliases()"] = 316;
        override_function_ids["mibEnum()"] = 317;
        override_function_ids["name()"] = 318;
        override_function_ids["convertFromUnicode(QChar*,int,ConverterState*)"] = 319;
        override_function_ids["convertToUnicode(const char*,int,ConverterState*)"] = 320;
        override_function_ids["data(int,int)"] = 321;
        override_function_ids["setData(int,int,QVariant)"] = 322;
        override_function_ids["id()"] = 323;
        override_function_ids["mergeWith(QUndoCommand*)"] = 324;
        override_function_ids["redo()"] = 325;
        override_function_ids["undo()"] = 326;
        override_arg_types = new const char** [326];
        { static const char* s[] = { "int", 0 }; override_arg_types[0] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[1] = s; }
        { static const char* s[] = { 0, "QAbstractAnimation::Direction", 0 }; override_arg_types[2] = s; }
        { static const char* s[] = { 0, "QAbstractAnimation::State", "QAbstractAnimation::State", 0 }; override_arg_types[3] = s; }
        { static const char* s[] = { 0, "QChildEvent*", 0 }; override_arg_types[4] = s; }
        { static const char* s[] = { 0, "const char*", 0 }; override_arg_types[5] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[6] = s; }
        { static const char* s[] = { 0, "const char*", 0 }; override_arg_types[7] = s; }
        { static const char* s[] = { 0, "QTimerEvent*", 0 }; override_arg_types[8] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[9] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[10] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[11] = s; }
        { static const char* s[] = { "bool", "OpenMode", 0 }; override_arg_types[12] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[13] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[14] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[15] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[16] = s; }
        { static const char* s[] = { 0, "ControlElement", "QStyleOption*", "QPainter*", "QWidget*", 0 }; override_arg_types[17] = s; }
        { static const char* s[] = { 0, "PrimitiveElement", "QStyleOption*", "QPainter*", "QWidget*", 0 }; override_arg_types[18] = s; }
        { static const char* s[] = { "int", "PixelMetric", "QStyleOption*", "QWidget*", 0 }; override_arg_types[19] = s; }
        { static const char* s[] = { "QPalette", 0 }; override_arg_types[20] = s; }
        { static const char* s[] = { 0, "ComplexControl", "QStyleOptionComplex*", "QPainter*", "QWidget*", 0 }; override_arg_types[21] = s; }
        { static const char* s[] = { 0, "QPalette", 0 }; override_arg_types[22] = s; }
        { static const char* s[] = { "QSize", "ContentsType", "QStyleOption*", "QSize", "QWidget*", 0 }; override_arg_types[23] = s; }
        { static const char* s[] = { "QPixmap", "StandardPixmap", "QStyleOption*", "QWidget*", 0 }; override_arg_types[24] = s; }
        { static const char* s[] = { "int", "StyleHint", "QStyleOption*", "QWidget*", "QStyleHintReturn*", 0 }; override_arg_types[25] = s; }
        { static const char* s[] = { "QRect", "ComplexControl", "QStyleOptionComplex*", "SubControl", "QWidget*", 0 }; override_arg_types[26] = s; }
        { static const char* s[] = { "QRect", "SubElement", "QStyleOption*", "QWidget*", 0 }; override_arg_types[27] = s; }
        { static const char* s[] = { "QPixmap", "QIcon::Mode", "QPixmap", "QStyleOption*", 0 }; override_arg_types[28] = s; }
        { static const char* s[] = { "SubControl", "ComplexControl", "QStyleOptionComplex*", "QPoint", "QWidget*", 0 }; override_arg_types[29] = s; }
        { static const char* s[] = { 0, "QApplication*", 0 }; override_arg_types[30] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[31] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[32] = s; }
        { static const char* s[] = { 0, "QApplication*", 0 }; override_arg_types[33] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", "QPixmap", 0 }; override_arg_types[34] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", "QPalette", "bool", "QString", "QPalette::ColorRole", 0 }; override_arg_types[35] = s; }
        { static const char* s[] = { "QRect", "QRect", "int", "QPixmap", 0 }; override_arg_types[36] = s; }
        { static const char* s[] = { "QRect", "QFontMetrics", "QRect", "int", "bool", "QString", 0 }; override_arg_types[37] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[38] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[39] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "QDate", 0 }; override_arg_types[40] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[41] = s; }
        { static const char* s[] = { "QVariant", "Qt::InputMethodQuery", 0 }; override_arg_types[42] = s; }
        { static const char* s[] = { 0, "QActionEvent*", 0 }; override_arg_types[43] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[44] = s; }
        { static const char* s[] = { 0, "QCloseEvent*", 0 }; override_arg_types[45] = s; }
        { static const char* s[] = { 0, "QContextMenuEvent*", 0 }; override_arg_types[46] = s; }
        { static const char* s[] = { 0, "QDragEnterEvent*", 0 }; override_arg_types[47] = s; }
        { static const char* s[] = { 0, "QDragLeaveEvent*", 0 }; override_arg_types[48] = s; }
        { static const char* s[] = { 0, "QDragMoveEvent*", 0 }; override_arg_types[49] = s; }
        { static const char* s[] = { 0, "QDropEvent*", 0 }; override_arg_types[50] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[51] = s; }
        { static const char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[52] = s; }
        { static const char* s[] = { "bool", "bool", 0 }; override_arg_types[53] = s; }
        { static const char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[54] = s; }
        { static const char* s[] = { 0, "QHideEvent*", 0 }; override_arg_types[55] = s; }
        { static const char* s[] = { 0, "QInputMethodEvent*", 0 }; override_arg_types[56] = s; }
        { static const char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[57] = s; }
        { static const char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[58] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[59] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[60] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[61] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[62] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[63] = s; }
        { static const char* s[] = { 0, "QMoveEvent*", 0 }; override_arg_types[64] = s; }
        { static const char* s[] = { 0, "QPaintEvent*", 0 }; override_arg_types[65] = s; }
        { static const char* s[] = { 0, "QResizeEvent*", 0 }; override_arg_types[66] = s; }
        { static const char* s[] = { 0, "QShowEvent*", 0 }; override_arg_types[67] = s; }
        { static const char* s[] = { 0, "QTabletEvent*", 0 }; override_arg_types[68] = s; }
        { static const char* s[] = { 0, "QWheelEvent*", 0 }; override_arg_types[69] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[70] = s; }
        { static const char* s[] = { "bool", "QPoint", 0 }; override_arg_types[71] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[72] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[73] = s; }
        { static const char* s[] = { "QModelIndex", "QPoint", 0 }; override_arg_types[74] = s; }
        { static const char* s[] = { 0, "QModelIndex", "ScrollHint", 0 }; override_arg_types[75] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[76] = s; }
        { static const char* s[] = { 0, "QAbstractItemModel*", 0 }; override_arg_types[77] = s; }
        { static const char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[78] = s; }
        { static const char* s[] = { 0, "QItemSelectionModel*", 0 }; override_arg_types[79] = s; }
        { static const char* s[] = { "QRect", "QModelIndex", 0 }; override_arg_types[80] = s; }
        { static const char* s[] = { "QAbstractItemView*", "QModelIndex", 0 }; override_arg_types[81] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[82] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[83] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[84] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "EditTrigger", "QEvent*", 0 }; override_arg_types[85] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[86] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[87] = s; }
        { static const char* s[] = { "QModelIndex", "CursorAction", "Qt::KeyboardModifiers", 0 }; override_arg_types[88] = s; }
        { static const char* s[] = { "QModelIndexList", 0 }; override_arg_types[89] = s; }
        { static const char* s[] = { "QItemSelectionModel::SelectionFlags", "QModelIndex", "QEvent*", 0 }; override_arg_types[90] = s; }
        { static const char* s[] = { 0, "QRect", "QItemSelectionModel::SelectionFlags", 0 }; override_arg_types[91] = s; }
        { static const char* s[] = { 0, "Qt::DropActions", 0 }; override_arg_types[92] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[93] = s; }
        { static const char* s[] = { "QStyleOptionViewItem", 0 }; override_arg_types[94] = s; }
        { static const char* s[] = { "QRegion", "QItemSelection", 0 }; override_arg_types[95] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[96] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[97] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[98] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[99] = s; }
        { static const char* s[] = { "QString", "QModelIndex", 0 }; override_arg_types[100] = s; }
        { static const char* s[] = { "QStringList", "QString", 0 }; override_arg_types[101] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[102] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[103] = s; }
        { static const char* s[] = { "QDateTime", "QString", 0 }; override_arg_types[104] = s; }
        { static const char* s[] = { "QString", "QDateTime", 0 }; override_arg_types[105] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[106] = s; }
        { static const char* s[] = { "QValidator::State", "QString", "int", 0 }; override_arg_types[107] = s; }
        { static const char* s[] = { "StepEnabled", 0 }; override_arg_types[108] = s; }
        { static const char* s[] = { 0, "SliderChange", 0 }; override_arg_types[109] = s; }
        { static const char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[110] = s; }
        { static const char* s[] = { "QVariant", "QModelIndex", "int", 0 }; override_arg_types[111] = s; }
        { static const char* s[] = { "bool", "QMimeData*", "Qt::DropAction", "int", "int", "QModelIndex", 0 }; override_arg_types[112] = s; }
        { static const char* s[] = { "Qt::ItemFlags", "QModelIndex", 0 }; override_arg_types[113] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[114] = s; }
        { static const char* s[] = { "QVariant", "int", "Qt::Orientation", "int", 0 }; override_arg_types[115] = s; }
        { static const char* s[] = { "QModelIndex", "int", "int", "QModelIndex", 0 }; override_arg_types[116] = s; }
        { static const char* s[] = { "QMimeData*", "QModelIndexList", 0 }; override_arg_types[117] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[118] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[119] = s; }
        { static const char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[120] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "QVariant", "int", 0 }; override_arg_types[121] = s; }
        { static const char* s[] = { 0, "int", "Qt::SortOrder", 0 }; override_arg_types[122] = s; }
        { static const char* s[] = { "Qt::DropActions", 0 }; override_arg_types[123] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[124] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[125] = s; }
        { static const char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[126] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[127] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[128] = s; }
        { static const char* s[] = { "QModelIndexList", "QModelIndex", "int", "QVariant", "int", "Qt::MatchFlags", 0 }; override_arg_types[129] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[130] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[131] = s; }
        { static const char* s[] = { "bool", "int", "Qt::Orientation", "QVariant", "int", 0 }; override_arg_types[132] = s; }
        { static const char* s[] = { "QSize", "QModelIndex", 0 }; override_arg_types[133] = s; }
        { static const char* s[] = { "QString", "double", 0 }; override_arg_types[134] = s; }
        { static const char* s[] = { "double", "QString", 0 }; override_arg_types[135] = s; }
        { static const char* s[] = { 0, "double", "double", "int", 0 }; override_arg_types[136] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[137] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[138] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[139] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[140] = s; }
        { static const char* s[] = { 0, "QLayoutItem*", 0 }; override_arg_types[141] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[142] = s; }
        { static const char* s[] = { "Qt::Orientations", 0 }; override_arg_types[143] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[144] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[145] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[146] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[147] = s; }
        { static const char* s[] = { 0, "QRect", 0 }; override_arg_types[148] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[149] = s; }
        { static const char* s[] = { "int", "QWidget*", 0 }; override_arg_types[150] = s; }
        { static const char* s[] = { "QRect", 0 }; override_arg_types[151] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[152] = s; }
        { static const char* s[] = { "QLayout*", 0 }; override_arg_types[153] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[154] = s; }
        { static const char* s[] = { "QRectF", "QRectF", 0 }; override_arg_types[155] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[156] = s; }
        { static const char* s[] = { 0, "ChangeFlags", 0 }; override_arg_types[157] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[158] = s; }
        { static const char* s[] = { 0, "QRectF", 0 }; override_arg_types[159] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[160] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[161] = s; }
        { static const char* s[] = { "QRectF", 0 }; override_arg_types[162] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[163] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[164] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[165] = s; }
        { static const char* s[] = { 0, "QStyleOption*", 0 }; override_arg_types[166] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMoveEvent*", 0 }; override_arg_types[167] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[168] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneResizeEvent*", 0 }; override_arg_types[169] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[170] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[171] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[172] = s; }
        { static const char* s[] = { "Qt::WindowFrameSection", "QPointF", 0 }; override_arg_types[173] = s; }
        { static const char* s[] = { 0, "QMatrix4x4*", 0 }; override_arg_types[174] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneContextMenuEvent*", 0 }; override_arg_types[175] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[176] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[177] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[178] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[179] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[180] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[181] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHelpEvent*", 0 }; override_arg_types[182] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[183] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[184] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[185] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[186] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneWheelEvent*", 0 }; override_arg_types[187] = s; }
        { static const char* s[] = { "bool", "QPointF", 0 }; override_arg_types[188] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", 0 }; override_arg_types[189] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[190] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[191] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[192] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[193] = s; }
        { static const char* s[] = { "QWidget*", "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[194] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[195] = s; }
        { static const char* s[] = { 0, "QWidget*", "QModelIndex", 0 }; override_arg_types[196] = s; }
        { static const char* s[] = { 0, "QWidget*", "QAbstractItemModel*", "QModelIndex", 0 }; override_arg_types[197] = s; }
        { static const char* s[] = { "QSize", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[198] = s; }
        { static const char* s[] = { 0, "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[199] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "Qt::CheckState", 0 }; override_arg_types[200] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QPixmap", 0 }; override_arg_types[201] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QString", 0 }; override_arg_types[202] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", 0 }; override_arg_types[203] = s; }
        { static const char* s[] = { "bool", "QEvent*", "QAbstractItemModel*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[204] = s; }
        { static const char* s[] = { "bool", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[205] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QListWidgetItem*>", 0 }; override_arg_types[206] = s; }
        { static const char* s[] = { "QMenu*", 0 }; override_arg_types[207] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[208] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[209] = s; }
        { static const char* s[] = { "QVariant", "QString", "QVariant::Type", 0 }; override_arg_types[210] = s; }
        { static const char* s[] = { "QRectF", "QTextBlock", 0 }; override_arg_types[211] = s; }
        { static const char* s[] = { "QSizeF", 0 }; override_arg_types[212] = s; }
        { static const char* s[] = { 0, "QPainter*", "PaintContext", 0 }; override_arg_types[213] = s; }
        { static const char* s[] = { "QRectF", "QTextFrame*", 0 }; override_arg_types[214] = s; }
        { static const char* s[] = { "int", "QPointF", "Qt::HitTestAccuracy", 0 }; override_arg_types[215] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[216] = s; }
        { static const char* s[] = { 0, "int", "int", "int", 0 }; override_arg_types[217] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[218] = s; }
        { static const char* s[] = { 0, "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[219] = s; }
        { static const char* s[] = { 0, "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[220] = s; }
        { static const char* s[] = { "QVariant", "int", "QUrl", 0 }; override_arg_types[221] = s; }
        { static const char* s[] = { "bool", "QMimeData*", 0 }; override_arg_types[222] = s; }
        { static const char* s[] = { "QMimeData*", 0 }; override_arg_types[223] = s; }
        { static const char* s[] = { 0, "QMimeData*", 0 }; override_arg_types[224] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[225] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[226] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[227] = s; }
        { static const char* s[] = { "QVariant", "QVariant", "QVariant", "qreal", 0 }; override_arg_types[228] = s; }
        { static const char* s[] = { 0, "QVariant", 0 }; override_arg_types[229] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[230] = s; }
        { static const char* s[] = { "QItemSelection", "QItemSelection", 0 }; override_arg_types[231] = s; }
        { static const char* s[] = { "QItemSelection", "QItemSelection", 0 }; override_arg_types[232] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[233] = s; }
        { static const char* s[] = { 0, "QAbstractItemModel*", 0 }; override_arg_types[234] = s; }
        { static const char* s[] = { "bool", "int", "QModelIndex", 0 }; override_arg_types[235] = s; }
        { static const char* s[] = { "bool", "int", "QModelIndex", 0 }; override_arg_types[236] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "QModelIndex", 0 }; override_arg_types[237] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[238] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[239] = s; }
        { static const char* s[] = { "QString", "int", 0 }; override_arg_types[240] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[241] = s; }
        { static const char* s[] = { "QString", "QVariant", "QLocale", 0 }; override_arg_types[242] = s; }
        { static const char* s[] = { 0, "QStyleOptionViewItem*", "QModelIndex", 0 }; override_arg_types[243] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[244] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[245] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[246] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[247] = s; }
        { static const char* s[] = { "QSize", "int", 0 }; override_arg_types[248] = s; }
        { static const char* s[] = { "bool", "int", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[249] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTableWidgetItem*>", 0 }; override_arg_types[250] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[251] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[252] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[253] = s; }
        { static const char* s[] = { "QTextObject*", "QTextFormat", 0 }; override_arg_types[254] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[255] = s; }
        { static const char* s[] = { "qreal", "int", 0 }; override_arg_types[256] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[257] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[258] = s; }
        { static const char* s[] = { "QString", "const char*", "const char*", "const char*", 0 }; override_arg_types[259] = s; }
        { static const char* s[] = { 0, "QModelIndex", "QModelIndex", 0 }; override_arg_types[260] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "QModelIndex", 0 }; override_arg_types[261] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[262] = s; }
        { static const char* s[] = { "bool", "QTreeWidgetItem*", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[263] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTreeWidgetItem*>", 0 }; override_arg_types[264] = s; }
        { static const char* s[] = { "QWidget*", "QWidget*", 0 }; override_arg_types[265] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[266] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[267] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[268] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[269] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[270] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[271] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[272] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[273] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[274] = s; }
        { static const char* s[] = { "QString", "int", "Text", "int", 0 }; override_arg_types[275] = s; }
        { static const char* s[] = { "int", "int", "int", 0 }; override_arg_types[276] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[277] = s; }
        { static const char* s[] = { "bool", "int", "int", "QVariantList", 0 }; override_arg_types[278] = s; }
        { static const char* s[] = { "int", "QAccessibleInterface*", 0 }; override_arg_types[279] = s; }
        { static const char* s[] = { "QRect", "int", 0 }; override_arg_types[280] = s; }
        { static const char* s[] = { "Relation", "int", "QAccessibleInterface*", "int", 0 }; override_arg_types[281] = s; }
        { static const char* s[] = { "Role", "int", 0 }; override_arg_types[282] = s; }
        { static const char* s[] = { "State", "int", 0 }; override_arg_types[283] = s; }
        { static const char* s[] = { "QString", "Text", "int", 0 }; override_arg_types[284] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[285] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[286] = s; }
        { static const char* s[] = { "QObject*", 0 }; override_arg_types[287] = s; }
        { static const char* s[] = { 0, "Text", "int", "QString", 0 }; override_arg_types[288] = s; }
        { static const char* s[] = { "QIcon", "IconType", 0 }; override_arg_types[289] = s; }
        { static const char* s[] = { "QIcon", "QFileInfo", 0 }; override_arg_types[290] = s; }
        { static const char* s[] = { "QString", "QFileInfo", 0 }; override_arg_types[291] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[292] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[293] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[294] = s; }
        { static const char* s[] = { "QSizeF", "Qt::SizeHint", "QSizeF", 0 }; override_arg_types[295] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[296] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "Qt::ItemSelectionMode", 0 }; override_arg_types[297] = s; }
        { static const char* s[] = { "bool", "QPainterPath", "Qt::ItemSelectionMode", 0 }; override_arg_types[298] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[299] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[300] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[301] = s; }
        { static const char* s[] = { "QVariant", "GraphicsItemChange", "QVariant", 0 }; override_arg_types[302] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[303] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "QEvent*", 0 }; override_arg_types[304] = s; }
        { static const char* s[] = { "int", "PaintDeviceMetric", 0 }; override_arg_types[305] = s; }
        { static const char* s[] = { "QWidget*", "QVariant::Type", "QWidget*", 0 }; override_arg_types[306] = s; }
        { static const char* s[] = { "QByteArray", "QVariant::Type", 0 }; override_arg_types[307] = s; }
        { static const char* s[] = { "QListWidgetItem*", 0 }; override_arg_types[308] = s; }
        { static const char* s[] = { "QVariant", "int", 0 }; override_arg_types[309] = s; }
        { static const char* s[] = { 0, "int", "QVariant", 0 }; override_arg_types[310] = s; }
        { static const char* s[] = { 0, "const char*", "uint", 0 }; override_arg_types[311] = s; }
        { static const char* s[] = { "QSpacerItem*", 0 }; override_arg_types[312] = s; }
        { static const char* s[] = { "QWidget*", 0 }; override_arg_types[313] = s; }
        { static const char* s[] = { 0, "QVariant", "int", 0 }; override_arg_types[314] = s; }
        { static const char* s[] = { "QList<QByteArray>", 0 }; override_arg_types[315] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[316] = s; }
        { static const char* s[] = { "QByteArray", 0 }; override_arg_types[317] = s; }
        { static const char* s[] = { "QByteArray", "QChar*", "int", "ConverterState*", 0 }; override_arg_types[318] = s; }
        { static const char* s[] = { "QString", "const char*", "int", "ConverterState*", 0 }; override_arg_types[319] = s; }
        { static const char* s[] = { "QVariant", "int", "int", 0 }; override_arg_types[320] = s; }
        { static const char* s[] = { 0, "int", "int", "QVariant", 0 }; override_arg_types[321] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[322] = s; }
        { static const char* s[] = { "bool", "QUndoCommand*", 0 }; override_arg_types[323] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[324] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[325] = s; }
        qNames = q_names.keys();
        nNames = n_names.keys(); }}

void* LObjects::overrideFun(uint unique, int id) {
    return override_lisp_functions.value(326 * (quint64)unique + id, 0); }

void LObjects::setOverrideFun(uint unique, int id, void* fun) {
    override_lisp_functions[326 * (quint64)unique + id] = fun; }

const QMetaObject* LObjects::staticMetaObject(const QByteArray& name, int n) {
    if(n == -1) {
        n = LObjects::q_names.value(name); }
    const QMetaObject* m = 0;
    switch(n) {
        case 1: m = &QAbstractAnimation::staticMetaObject; break;
        case 2: m = &QAbstractButton::staticMetaObject; break;
        case 3: m = &QAbstractItemDelegate::staticMetaObject; break;
        case 4: m = &QAbstractItemModel::staticMetaObject; break;
        case 5: m = &QAbstractItemView::staticMetaObject; break;
        case 6: m = &QAbstractListModel::staticMetaObject; break;
        case 7: m = &QAbstractPrintDialog::staticMetaObject; break;
        case 8: m = &QAbstractProxyModel::staticMetaObject; break;
        case 9: m = &QAbstractScrollArea::staticMetaObject; break;
        case 10: m = &QAbstractSlider::staticMetaObject; break;
        case 11: m = &QAbstractSpinBox::staticMetaObject; break;
        case 12: m = &QAbstractState::staticMetaObject; break;
        case 13: m = &QAbstractTableModel::staticMetaObject; break;
        case 14: m = &QAbstractTextDocumentLayout::staticMetaObject; break;
        case 15: m = &QAbstractTransition::staticMetaObject; break;
        case 16: m = &QAction::staticMetaObject; break;
        case 17: m = &QActionGroup::staticMetaObject; break;
        case 18: m = &QAnimationGroup::staticMetaObject; break;
        case 19: m = &QApplication::staticMetaObject; break;
        case 20: m = &QBoxLayout::staticMetaObject; break;
        case 21: m = &QBuffer::staticMetaObject; break;
        case 22: m = &QButtonGroup::staticMetaObject; break;
        case 23: m = &QCDEStyle::staticMetaObject; break;
        case 24: m = &QCalendarWidget::staticMetaObject; break;
        case 25: m = &QCheckBox::staticMetaObject; break;
        case 26: m = &QCleanlooksStyle::staticMetaObject; break;
        case 27: m = &QClipboard::staticMetaObject; break;
        case 28: m = &QColorDialog::staticMetaObject; break;
        case 29: m = &QColumnView::staticMetaObject; break;
        case 30: m = &QComboBox::staticMetaObject; break;
        case 31: m = &QCommandLinkButton::staticMetaObject; break;
        case 32: m = &QCommonStyle::staticMetaObject; break;
        case 33: m = &QCompleter::staticMetaObject; break;
        case 34: m = &QCoreApplication::staticMetaObject; break;
        case 35: m = &QDataWidgetMapper::staticMetaObject; break;
        case 36: m = &QDateEdit::staticMetaObject; break;
        case 37: m = &QDateTimeEdit::staticMetaObject; break;
        case 38: m = &QDesktopWidget::staticMetaObject; break;
        case 39: m = &QDial::staticMetaObject; break;
        case 40: m = &QDialog::staticMetaObject; break;
        case 41: m = &QDialogButtonBox::staticMetaObject; break;
        case 42: m = &QDirModel::staticMetaObject; break;
        case 43: m = &QDockWidget::staticMetaObject; break;
        case 44: m = &QDoubleSpinBox::staticMetaObject; break;
        case 45: m = &QDoubleValidator::staticMetaObject; break;
        case 46: m = &QDrag::staticMetaObject; break;
        case 47: m = &QErrorMessage::staticMetaObject; break;
        case 48: m = &QEventLoop::staticMetaObject; break;
        case 49: m = &QEventTransition::staticMetaObject; break;
        case 50: m = &QFile::staticMetaObject; break;
        case 51: m = &QFileDialog::staticMetaObject; break;
        case 52: m = &QFileSystemModel::staticMetaObject; break;
        case 53: m = &QFileSystemWatcher::staticMetaObject; break;
        case 54: m = &QFinalState::staticMetaObject; break;
        case 55: m = &QFocusFrame::staticMetaObject; break;
        case 56: m = &QFontComboBox::staticMetaObject; break;
        case 57: m = &QFontDialog::staticMetaObject; break;
        case 58: m = &QFormLayout::staticMetaObject; break;
        case 59: m = &QFrame::staticMetaObject; break;
        case 60: m = &QGesture::staticMetaObject; break;
        case 61: m = &QGraphicsAnchor::staticMetaObject; break;
        case 62: m = &QGraphicsBlurEffect::staticMetaObject; break;
        case 63: m = &QGraphicsColorizeEffect::staticMetaObject; break;
        case 64: m = &QGraphicsDropShadowEffect::staticMetaObject; break;
        case 65: m = &QGraphicsEffect::staticMetaObject; break;
        case 66: m = &QGraphicsObject::staticMetaObject; break;
        case 67: m = &QGraphicsOpacityEffect::staticMetaObject; break;
        case 68: m = &QGraphicsProxyWidget::staticMetaObject; break;
        case 69: m = &QGraphicsRotation::staticMetaObject; break;
        case 70: m = &QGraphicsScale::staticMetaObject; break;
        case 71: m = &QGraphicsScene::staticMetaObject; break;
        case 72: m = &QGraphicsTextItem::staticMetaObject; break;
        case 73: m = &QGraphicsTransform::staticMetaObject; break;
        case 74: m = &QGraphicsView::staticMetaObject; break;
        case 75: m = &QGraphicsWidget::staticMetaObject; break;
        case 76: m = &QGridLayout::staticMetaObject; break;
        case 77: m = &QGroupBox::staticMetaObject; break;
        case 78: m = &QHBoxLayout::staticMetaObject; break;
        case 79: m = &QHeaderView::staticMetaObject; break;
        case 80: m = &QHistoryState::staticMetaObject; break;
        case 81: m = &QIODevice::staticMetaObject; break;
        case 82: m = &QInputContext::staticMetaObject; break;
        case 83: m = &QInputDialog::staticMetaObject; break;
        case 84: m = &QIntValidator::staticMetaObject; break;
        case 85: m = &QItemDelegate::staticMetaObject; break;
        case 86: m = &QItemSelectionModel::staticMetaObject; break;
        case 87: m = &QKeyEventTransition::staticMetaObject; break;
        case 88: m = &QLCDNumber::staticMetaObject; break;
        case 89: m = &QLabel::staticMetaObject; break;
        case 90: m = &QLayout::staticMetaObject; break;
        case 91: m = &QLibrary::staticMetaObject; break;
        case 92: m = &QLineEdit::staticMetaObject; break;
        case 93: m = &QListView::staticMetaObject; break;
        case 94: m = &QListWidget::staticMetaObject; break;
        case 95: m = &QMainWindow::staticMetaObject; break;
        case 96: m = &QMdiArea::staticMetaObject; break;
        case 97: m = &QMdiSubWindow::staticMetaObject; break;
        case 98: m = &QMenu::staticMetaObject; break;
        case 99: m = &QMenuBar::staticMetaObject; break;
        case 100: m = &QMessageBox::staticMetaObject; break;
        case 101: m = &QMimeData::staticMetaObject; break;
        case 102: m = &QMotifStyle::staticMetaObject; break;
        case 103: m = &QMouseEventTransition::staticMetaObject; break;
        case 104: m = &QMovie::staticMetaObject; break;
        case 105: m = &QObject::staticMetaObject; break;
        case 106: m = &QPageSetupDialog::staticMetaObject; break;
        case 107: m = &QPanGesture::staticMetaObject; break;
        case 108: m = &QParallelAnimationGroup::staticMetaObject; break;
        case 109: m = &QPauseAnimation::staticMetaObject; break;
        case 110: m = &QPinchGesture::staticMetaObject; break;
        case 111: m = &QPlainTextDocumentLayout::staticMetaObject; break;
        case 112: m = &QPlainTextEdit::staticMetaObject; break;
        case 113: m = &QPlastiqueStyle::staticMetaObject; break;
        case 114: m = &QPluginLoader::staticMetaObject; break;
        case 115: m = &QPrintDialog::staticMetaObject; break;
        case 116: m = &QPrintPreviewDialog::staticMetaObject; break;
        case 117: m = &QPrintPreviewWidget::staticMetaObject; break;
        case 118: m = &QProcess::staticMetaObject; break;
        case 119: m = &QProgressBar::staticMetaObject; break;
        case 120: m = &QProgressDialog::staticMetaObject; break;
        case 121: m = &QPropertyAnimation::staticMetaObject; break;
        case 122: m = &QPushButton::staticMetaObject; break;
        case 123: m = &QRadioButton::staticMetaObject; break;
        case 124: m = &QRegExpValidator::staticMetaObject; break;
        case 125: m = &QRubberBand::staticMetaObject; break;
        case 126: m = &QScrollArea::staticMetaObject; break;
        case 127: m = &QScrollBar::staticMetaObject; break;
        case 128: m = &QSequentialAnimationGroup::staticMetaObject; break;
        case 129: m = &QSessionManager::staticMetaObject; break;
        case 130: m = &QSettings::staticMetaObject; break;
        case 131: m = &QShortcut::staticMetaObject; break;
        case 132: m = &QSignalTransition::staticMetaObject; break;
        case 133: m = &QSizeGrip::staticMetaObject; break;
        case 134: m = &QSlider::staticMetaObject; break;
        case 135: m = &QSortFilterProxyModel::staticMetaObject; break;
        case 136: m = &QSound::staticMetaObject; break;
        case 137: m = &QSpinBox::staticMetaObject; break;
        case 138: m = &QSplashScreen::staticMetaObject; break;
        case 139: m = &QSplitter::staticMetaObject; break;
        case 140: m = &QSplitterHandle::staticMetaObject; break;
        case 141: m = &QStackedLayout::staticMetaObject; break;
        case 142: m = &QStackedWidget::staticMetaObject; break;
        case 143: m = &QStandardItemModel::staticMetaObject; break;
        case 144: m = &QState::staticMetaObject; break;
        case 145: m = &QStateMachine::staticMetaObject; break;
        case 146: m = &QStatusBar::staticMetaObject; break;
        case 147: m = &QStringListModel::staticMetaObject; break;
        case 148: m = &QStyle::staticMetaObject; break;
        case 149: m = &QStyledItemDelegate::staticMetaObject; break;
        case 150: m = &QSwipeGesture::staticMetaObject; break;
        case 151: m = &QSyntaxHighlighter::staticMetaObject; break;
        case 152: m = &QSystemTrayIcon::staticMetaObject; break;
        case 153: m = &QTabBar::staticMetaObject; break;
        case 154: m = &QTabWidget::staticMetaObject; break;
        case 155: m = &QTableView::staticMetaObject; break;
        case 156: m = &QTableWidget::staticMetaObject; break;
        case 157: m = &QTapAndHoldGesture::staticMetaObject; break;
        case 158: m = &QTapGesture::staticMetaObject; break;
        case 159: m = &QTextBlockGroup::staticMetaObject; break;
        case 160: m = &QTextBrowser::staticMetaObject; break;
        case 161: m = &QTextDocument::staticMetaObject; break;
        case 162: m = &QTextEdit::staticMetaObject; break;
        case 163: m = &QTextFrame::staticMetaObject; break;
        case 164: m = &QTextList::staticMetaObject; break;
        case 165: m = &QTextObject::staticMetaObject; break;
        case 166: m = &QTextTable::staticMetaObject; break;
        case 167: m = &QThread::staticMetaObject; break;
        case 168: m = &QThreadPool::staticMetaObject; break;
        case 169: m = &QTimeEdit::staticMetaObject; break;
        case 170: m = &QTimeLine::staticMetaObject; break;
        case 171: m = &QTimer::staticMetaObject; break;
        case 172: m = &QToolBar::staticMetaObject; break;
        case 173: m = &QToolBox::staticMetaObject; break;
        case 174: m = &QToolButton::staticMetaObject; break;
        case 175: m = &QTranslator::staticMetaObject; break;
        case 176: m = &QTreeView::staticMetaObject; break;
        case 177: m = &QTreeWidget::staticMetaObject; break;
        case 178: m = &QUndoGroup::staticMetaObject; break;
        case 179: m = &QUndoStack::staticMetaObject; break;
        case 180: m = &QUndoView::staticMetaObject; break;
        case 181: m = &QVBoxLayout::staticMetaObject; break;
        case 182: m = &QValidator::staticMetaObject; break;
        case 183: m = &QVariantAnimation::staticMetaObject; break;
        case 184: m = &QWidget::staticMetaObject; break;
        case 185: m = &QWidgetAction::staticMetaObject; break;
        case 186: m = &QWindowsStyle::staticMetaObject; break;
        case 187: m = &QWizard::staticMetaObject; break;
        case 188: m = &QWizardPage::staticMetaObject; break;
        case 189: m = &QWorkspace::staticMetaObject; break; }
    return m; }

void LObjects::deleteNObject(int n, void* p) {
    switch(n) {
        case 2: delete (LAccessible*)p; break;
        case 6: delete (LAccessibleWidget*)p; break;
        case 8: delete (LBasicTimer*)p; break;
        case 9: delete (LBitArray*)p; break;
        case 10: delete (LBitmap*)p; break;
        case 11: delete (LBrush*)p; break;
        case 15: delete (LConicalGradient*)p; break;
        case 17: delete (LCryptographicHash*)p; break;
        case 21: delete (LDesktopServices*)p; break;
        case 23: delete (LDirIterator*)p; break;
        case 29: delete (LEasingCurve*)p; break;
        case 31: delete (LFileIconProvider*)p; break;
        case 32: delete (LFileInfo*)p; break;
        case 35: delete (LFontDatabase*)p; break;
        case 36: delete (LFontMetrics*)p; break;
        case 38: delete (LGradient*)p; break;
        case 39: delete (LGraphicsAnchorLayout*)p; break;
        case 40: delete (LGraphicsEllipseItem*)p; break;
        case 41: delete (LGraphicsGridLayout*)p; break;
        case 42: delete (LGraphicsItem*)p; break;
        case 43: delete (LGraphicsItemGroup*)p; break;
        case 45: delete (LGraphicsLayoutItem*)p; break;
        case 46: delete (LGraphicsLineItem*)p; break;
        case 47: delete (LGraphicsLinearLayout*)p; break;
        case 48: delete (LGraphicsPathItem*)p; break;
        case 49: delete (LGraphicsPixmapItem*)p; break;
        case 50: delete (LGraphicsPolygonItem*)p; break;
        case 51: delete (LGraphicsRectItem*)p; break;
        case 61: delete (LGraphicsSimpleTextItem*)p; break;
        case 65: delete (LIcon*)p; break;
        case 67: delete (LImage*)p; break;
        case 70: delete (LItemEditorFactory*)p; break;
        case 71: delete (LItemSelection*)p; break;
        case 72: delete (LItemSelectionRange*)p; break;
        case 76: delete (LLinearGradient*)p; break;
        case 77: delete (LListWidgetItem*)p; break;
        case 78: delete (LLocale*)p; break;
        case 79: delete (LMargins*)p; break;
        case 80: delete (LMatrix*)p; break;
        case 81: delete (LMatrix4x4*)p; break;
        case 83: delete (LModelIndex*)p; break;
        case 86: delete (LMutex*)p; break;
        case 87: delete (LMutexLocker*)p; break;
        case 90: delete (LPainter*)p; break;
        case 91: delete (LPainterPath*)p; break;
        case 92: delete (LPainterPathStroker*)p; break;
        case 93: delete (LPalette*)p; break;
        case 94: delete (LPen*)p; break;
        case 95: delete (LPersistentModelIndex*)p; break;
        case 96: delete (LPicture*)p; break;
        case 97: delete (LPixmap*)p; break;
        case 98: delete (LPixmapCache*)p; break;
        case 99: delete (LPrinter*)p; break;
        case 100: delete (LPrinterInfo*)p; break;
        case 101: delete (LProcessEnvironment*)p; break;
        case 102: delete (LQuaternion*)p; break;
        case 103: delete (LRadialGradient*)p; break;
        case 104: delete (LReadLocker*)p; break;
        case 105: delete (LReadWriteLock*)p; break;
        case 106: delete (LRegExp*)p; break;
        case 107: delete (LRegion*)p; break;
        case 109: delete (LRunnable*)p; break;
        case 110: delete (LSemaphore*)p; break;
        case 113: delete (LSizePolicy*)p; break;
        case 114: delete (LSpacerItem*)p; break;
        case 115: delete (LStandardItem*)p; break;
        case 117: delete (LSystemSemaphore*)p; break;
        case 118: delete (LTableWidgetItem*)p; break;
        case 119: delete (LTableWidgetSelectionRange*)p; break;
        case 122: delete (LTextBlockFormat*)p; break;
        case 123: delete (LTextBoundaryFinder*)p; break;
        case 124: delete (LTextCharFormat*)p; break;
        case 125: delete (LTextCodec*)p; break;
        case 126: delete (LTextCursor*)p; break;
        case 127: delete (LTextDecoder*)p; break;
        case 128: delete (LTextDocumentFragment*)p; break;
        case 129: delete (LTextDocumentWriter*)p; break;
        case 130: delete (LTextEncoder*)p; break;
        case 131: delete (LTextFormat*)p; break;
        case 132: delete (LTextFragment*)p; break;
        case 133: delete (LTextFrameFormat*)p; break;
        case 134: delete (LTextImageFormat*)p; break;
        case 135: delete (LTextLayout*)p; break;
        case 136: delete (LTextLength*)p; break;
        case 137: delete (LTextLine*)p; break;
        case 138: delete (LTextListFormat*)p; break;
        case 139: delete (LTextOption*)p; break;
        case 140: delete (LTextTableCell*)p; break;
        case 141: delete (LTextTableCellFormat*)p; break;
        case 142: delete (LTextTableFormat*)p; break;
        case 145: delete (LToolTip*)p; break;
        case 147: delete (LTransform*)p; break;
        case 148: delete (LTreeWidgetItem*)p; break;
        case 149: delete (LUndoCommand*)p; break;
        case 151: delete (LVariant*)p; break;
        case 152: delete (LVector2D*)p; break;
        case 153: delete (LVector3D*)p; break;
        case 154: delete (LVector4D*)p; break;
        case 155: delete (LWaitCondition*)p; break;
        case 156: delete (LWhatsThis*)p; break;
        case 159: delete (LWidgetItem*)p; break;
        case 161: delete (LWriteLocker*)p; break; }}

const char* LObjects::nObjectSuperClass(const QByteArray& name) {
    const char* s = 0;
    switch(LObjects::n_names.value(name)) {
        case 1: s = "QGraphicsItem"; break;
        case 3: s = "QEvent"; break;
        case 4: s = "QAccessible"; break;
        case 5: s = "QAccessibleInterface"; break;
        case 6: s = "QAccessibleObject"; break;
        case 7: s = "QEvent"; break;
        case 10: s = "QPixmap"; break;
        case 12: s = "QEvent"; break;
        case 13: s = "QEvent"; break;
        case 15: s = "QGradient"; break;
        case 16: s = "QInputEvent"; break;
        case 24: s = "QDragMoveEvent"; break;
        case 25: s = "QEvent"; break;
        case 26: s = "QDropEvent"; break;
        case 27: s = "QEvent"; break;
        case 28: s = "QEvent"; break;
        case 33: s = "QEvent"; break;
        case 34: s = "QEvent"; break;
        case 37: s = "QEvent"; break;
        case 39: s = "QGraphicsLayout"; break;
        case 40: s = "QAbstractGraphicsShapeItem"; break;
        case 41: s = "QGraphicsLayout"; break;
        case 43: s = "QGraphicsItem"; break;
        case 44: s = "QGraphicsLayoutItem"; break;
        case 46: s = "QGraphicsItem"; break;
        case 47: s = "QGraphicsLayout"; break;
        case 48: s = "QAbstractGraphicsShapeItem"; break;
        case 49: s = "QGraphicsItem"; break;
        case 50: s = "QAbstractGraphicsShapeItem"; break;
        case 51: s = "QAbstractGraphicsShapeItem"; break;
        case 52: s = "QGraphicsSceneEvent"; break;
        case 53: s = "QGraphicsSceneEvent"; break;
        case 54: s = "QEvent"; break;
        case 55: s = "QGraphicsSceneEvent"; break;
        case 56: s = "QGraphicsSceneEvent"; break;
        case 57: s = "QGraphicsSceneEvent"; break;
        case 58: s = "QGraphicsSceneEvent"; break;
        case 59: s = "QGraphicsSceneEvent"; break;
        case 60: s = "QGraphicsSceneEvent"; break;
        case 61: s = "QAbstractGraphicsShapeItem"; break;
        case 62: s = "QEvent"; break;
        case 63: s = "QEvent"; break;
        case 64: s = "QEvent"; break;
        case 66: s = "QEvent"; break;
        case 67: s = "QPaintDevice"; break;
        case 68: s = "QEvent"; break;
        case 69: s = "QEvent"; break;
        case 73: s = "QInputEvent"; break;
        case 76: s = "QGradient"; break;
        case 84: s = "QInputEvent"; break;
        case 85: s = "QEvent"; break;
        case 89: s = "QEvent"; break;
        case 96: s = "QPaintDevice"; break;
        case 97: s = "QPaintDevice"; break;
        case 99: s = "QPaintDevice"; break;
        case 103: s = "QGradient"; break;
        case 108: s = "QEvent"; break;
        case 111: s = "QEvent"; break;
        case 112: s = "QEvent"; break;
        case 114: s = "QLayoutItem"; break;
        case 116: s = "QEvent"; break;
        case 120: s = "QInputEvent"; break;
        case 122: s = "QTextFormat"; break;
        case 124: s = "QTextFormat"; break;
        case 133: s = "QTextFormat"; break;
        case 134: s = "QTextCharFormat"; break;
        case 138: s = "QTextFormat"; break;
        case 141: s = "QTextCharFormat"; break;
        case 142: s = "QTextFrameFormat"; break;
        case 144: s = "QEvent"; break;
        case 146: s = "QInputEvent"; break;
        case 157: s = "QEvent"; break;
        case 158: s = "QInputEvent"; break;
        case 159: s = "QLayoutItem"; break;
        case 160: s = "QEvent"; break; }
    return s; }

StrList LObjects::override(const QByteArray& name) {
    NumList ids;
    int n = q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 1: ids = LAbstractAnimation::overrideIds; break;
            case 16: ids = LAction::overrideIds; break;
            case 17: ids = LActionGroup::overrideIds; break;
            case 18: ids = LAnimationGroup::overrideIds; break;
            case 21: ids = LBuffer::overrideIds; break;
            case 22: ids = LButtonGroup::overrideIds; break;
            case 23: ids = LCDEStyle::overrideIds; break;
            case 24: ids = LCalendarWidget::overrideIds; break;
            case 25: ids = LCheckBox::overrideIds; break;
            case 26: ids = LCleanlooksStyle::overrideIds; break;
            case 28: ids = LColorDialog::overrideIds; break;
            case 29: ids = LColumnView::overrideIds; break;
            case 30: ids = LComboBox::overrideIds; break;
            case 31: ids = LCommandLinkButton::overrideIds; break;
            case 32: ids = LCommonStyle::overrideIds; break;
            case 33: ids = LCompleter::overrideIds; break;
            case 35: ids = LDataWidgetMapper::overrideIds; break;
            case 36: ids = LDateEdit::overrideIds; break;
            case 37: ids = LDateTimeEdit::overrideIds; break;
            case 38: ids = LDesktopWidget::overrideIds; break;
            case 39: ids = LDial::overrideIds; break;
            case 40: ids = LDialog::overrideIds; break;
            case 41: ids = LDialogButtonBox::overrideIds; break;
            case 42: ids = LDirModel::overrideIds; break;
            case 43: ids = LDockWidget::overrideIds; break;
            case 44: ids = LDoubleSpinBox::overrideIds; break;
            case 45: ids = LDoubleValidator::overrideIds; break;
            case 46: ids = LDrag::overrideIds; break;
            case 47: ids = LErrorMessage::overrideIds; break;
            case 48: ids = LEventLoop::overrideIds; break;
            case 49: ids = LEventTransition::overrideIds; break;
            case 51: ids = LFileDialog::overrideIds; break;
            case 52: ids = LFileSystemModel::overrideIds; break;
            case 53: ids = LFileSystemWatcher::overrideIds; break;
            case 54: ids = LFinalState::overrideIds; break;
            case 55: ids = LFocusFrame::overrideIds; break;
            case 56: ids = LFontComboBox::overrideIds; break;
            case 57: ids = LFontDialog::overrideIds; break;
            case 58: ids = LFormLayout::overrideIds; break;
            case 59: ids = LFrame::overrideIds; break;
            case 60: ids = LGesture::overrideIds; break;
            case 61: ids = LGraphicsAnchor::overrideIds; break;
            case 62: ids = LGraphicsBlurEffect::overrideIds; break;
            case 63: ids = LGraphicsColorizeEffect::overrideIds; break;
            case 64: ids = LGraphicsDropShadowEffect::overrideIds; break;
            case 67: ids = LGraphicsOpacityEffect::overrideIds; break;
            case 68: ids = LGraphicsProxyWidget::overrideIds; break;
            case 69: ids = LGraphicsRotation::overrideIds; break;
            case 70: ids = LGraphicsScale::overrideIds; break;
            case 71: ids = LGraphicsScene::overrideIds; break;
            case 72: ids = LGraphicsTextItem::overrideIds; break;
            case 73: ids = LGraphicsTransform::overrideIds; break;
            case 74: ids = LGraphicsView::overrideIds; break;
            case 75: ids = LGraphicsWidget::overrideIds; break;
            case 76: ids = LGridLayout::overrideIds; break;
            case 77: ids = LGroupBox::overrideIds; break;
            case 78: ids = LHBoxLayout::overrideIds; break;
            case 80: ids = LHistoryState::overrideIds; break;
            case 83: ids = LInputDialog::overrideIds; break;
            case 84: ids = LIntValidator::overrideIds; break;
            case 85: ids = LItemDelegate::overrideIds; break;
            case 86: ids = LItemSelectionModel::overrideIds; break;
            case 87: ids = LKeyEventTransition::overrideIds; break;
            case 88: ids = LLCDNumber::overrideIds; break;
            case 89: ids = LLabel::overrideIds; break;
            case 91: ids = LLibrary::overrideIds; break;
            case 92: ids = LLineEdit::overrideIds; break;
            case 93: ids = LListView::overrideIds; break;
            case 94: ids = LListWidget::overrideIds; break;
            case 95: ids = LMainWindow::overrideIds; break;
            case 96: ids = LMdiArea::overrideIds; break;
            case 97: ids = LMdiSubWindow::overrideIds; break;
            case 98: ids = LMenu::overrideIds; break;
            case 99: ids = LMenuBar::overrideIds; break;
            case 100: ids = LMessageBox::overrideIds; break;
            case 101: ids = LMimeData::overrideIds; break;
            case 102: ids = LMotifStyle::overrideIds; break;
            case 103: ids = LMouseEventTransition::overrideIds; break;
            case 104: ids = LMovie::overrideIds; break;
            case 105: ids = LObject::overrideIds; break;
            case 106: ids = LPageSetupDialog::overrideIds; break;
            case 107: ids = LPanGesture::overrideIds; break;
            case 108: ids = LParallelAnimationGroup::overrideIds; break;
            case 109: ids = LPauseAnimation::overrideIds; break;
            case 110: ids = LPinchGesture::overrideIds; break;
            case 111: ids = LPlainTextDocumentLayout::overrideIds; break;
            case 112: ids = LPlainTextEdit::overrideIds; break;
            case 113: ids = LPlastiqueStyle::overrideIds; break;
            case 114: ids = LPluginLoader::overrideIds; break;
            case 115: ids = LPrintDialog::overrideIds; break;
            case 116: ids = LPrintPreviewDialog::overrideIds; break;
            case 117: ids = LPrintPreviewWidget::overrideIds; break;
            case 118: ids = LProcess::overrideIds; break;
            case 119: ids = LProgressBar::overrideIds; break;
            case 120: ids = LProgressDialog::overrideIds; break;
            case 121: ids = LPropertyAnimation::overrideIds; break;
            case 122: ids = LPushButton::overrideIds; break;
            case 123: ids = LRadioButton::overrideIds; break;
            case 124: ids = LRegExpValidator::overrideIds; break;
            case 125: ids = LRubberBand::overrideIds; break;
            case 126: ids = LScrollArea::overrideIds; break;
            case 127: ids = LScrollBar::overrideIds; break;
            case 128: ids = LSequentialAnimationGroup::overrideIds; break;
            case 130: ids = LSettings::overrideIds; break;
            case 131: ids = LShortcut::overrideIds; break;
            case 132: ids = LSignalTransition::overrideIds; break;
            case 133: ids = LSizeGrip::overrideIds; break;
            case 134: ids = LSlider::overrideIds; break;
            case 135: ids = LSortFilterProxyModel::overrideIds; break;
            case 136: ids = LSound::overrideIds; break;
            case 137: ids = LSpinBox::overrideIds; break;
            case 138: ids = LSplashScreen::overrideIds; break;
            case 139: ids = LSplitter::overrideIds; break;
            case 140: ids = LSplitterHandle::overrideIds; break;
            case 141: ids = LStackedLayout::overrideIds; break;
            case 142: ids = LStackedWidget::overrideIds; break;
            case 143: ids = LStandardItemModel::overrideIds; break;
            case 144: ids = LState::overrideIds; break;
            case 145: ids = LStateMachine::overrideIds; break;
            case 146: ids = LStatusBar::overrideIds; break;
            case 147: ids = LStringListModel::overrideIds; break;
            case 149: ids = LStyledItemDelegate::overrideIds; break;
            case 150: ids = LSwipeGesture::overrideIds; break;
            case 151: ids = LSyntaxHighlighter::overrideIds; break;
            case 152: ids = LSystemTrayIcon::overrideIds; break;
            case 153: ids = LTabBar::overrideIds; break;
            case 154: ids = LTabWidget::overrideIds; break;
            case 155: ids = LTableView::overrideIds; break;
            case 156: ids = LTableWidget::overrideIds; break;
            case 157: ids = LTapAndHoldGesture::overrideIds; break;
            case 158: ids = LTapGesture::overrideIds; break;
            case 159: ids = LTextBlockGroup::overrideIds; break;
            case 160: ids = LTextBrowser::overrideIds; break;
            case 161: ids = LTextDocument::overrideIds; break;
            case 162: ids = LTextEdit::overrideIds; break;
            case 163: ids = LTextFrame::overrideIds; break;
            case 164: ids = LTextList::overrideIds; break;
            case 165: ids = LTextObject::overrideIds; break;
            case 166: ids = LTextTable::overrideIds; break;
            case 167: ids = LThread::overrideIds; break;
            case 168: ids = LThreadPool::overrideIds; break;
            case 169: ids = LTimeEdit::overrideIds; break;
            case 170: ids = LTimeLine::overrideIds; break;
            case 171: ids = LTimer::overrideIds; break;
            case 172: ids = LToolBar::overrideIds; break;
            case 173: ids = LToolBox::overrideIds; break;
            case 174: ids = LToolButton::overrideIds; break;
            case 175: ids = LTranslator::overrideIds; break;
            case 176: ids = LTreeView::overrideIds; break;
            case 177: ids = LTreeWidget::overrideIds; break;
            case 178: ids = LUndoGroup::overrideIds; break;
            case 179: ids = LUndoStack::overrideIds; break;
            case 180: ids = LUndoView::overrideIds; break;
            case 181: ids = LVBoxLayout::overrideIds; break;
            case 183: ids = LVariantAnimation::overrideIds; break;
            case 184: ids = LWidget::overrideIds; break;
            case 185: ids = LWidgetAction::overrideIds; break;
            case 186: ids = LWindowsStyle::overrideIds; break;
            case 187: ids = LWizard::overrideIds; break;
            case 188: ids = LWizardPage::overrideIds; break;
            case 189: ids = LWorkspace::overrideIds; break; }}
    else {
        n = n_names.value(name);
        switch(n) {
            case 2: ids = LAccessible::overrideIds; break;
            case 6: ids = LAccessibleWidget::overrideIds; break;
            case 8: ids = LBasicTimer::overrideIds; break;
            case 9: ids = LBitArray::overrideIds; break;
            case 10: ids = LBitmap::overrideIds; break;
            case 11: ids = LBrush::overrideIds; break;
            case 15: ids = LConicalGradient::overrideIds; break;
            case 17: ids = LCryptographicHash::overrideIds; break;
            case 21: ids = LDesktopServices::overrideIds; break;
            case 23: ids = LDirIterator::overrideIds; break;
            case 29: ids = LEasingCurve::overrideIds; break;
            case 31: ids = LFileIconProvider::overrideIds; break;
            case 32: ids = LFileInfo::overrideIds; break;
            case 35: ids = LFontDatabase::overrideIds; break;
            case 36: ids = LFontMetrics::overrideIds; break;
            case 38: ids = LGradient::overrideIds; break;
            case 39: ids = LGraphicsAnchorLayout::overrideIds; break;
            case 40: ids = LGraphicsEllipseItem::overrideIds; break;
            case 41: ids = LGraphicsGridLayout::overrideIds; break;
            case 42: ids = LGraphicsItem::overrideIds; break;
            case 43: ids = LGraphicsItemGroup::overrideIds; break;
            case 45: ids = LGraphicsLayoutItem::overrideIds; break;
            case 46: ids = LGraphicsLineItem::overrideIds; break;
            case 47: ids = LGraphicsLinearLayout::overrideIds; break;
            case 48: ids = LGraphicsPathItem::overrideIds; break;
            case 49: ids = LGraphicsPixmapItem::overrideIds; break;
            case 50: ids = LGraphicsPolygonItem::overrideIds; break;
            case 51: ids = LGraphicsRectItem::overrideIds; break;
            case 61: ids = LGraphicsSimpleTextItem::overrideIds; break;
            case 65: ids = LIcon::overrideIds; break;
            case 67: ids = LImage::overrideIds; break;
            case 70: ids = LItemEditorFactory::overrideIds; break;
            case 71: ids = LItemSelection::overrideIds; break;
            case 72: ids = LItemSelectionRange::overrideIds; break;
            case 76: ids = LLinearGradient::overrideIds; break;
            case 77: ids = LListWidgetItem::overrideIds; break;
            case 78: ids = LLocale::overrideIds; break;
            case 79: ids = LMargins::overrideIds; break;
            case 80: ids = LMatrix::overrideIds; break;
            case 81: ids = LMatrix4x4::overrideIds; break;
            case 83: ids = LModelIndex::overrideIds; break;
            case 86: ids = LMutex::overrideIds; break;
            case 87: ids = LMutexLocker::overrideIds; break;
            case 90: ids = LPainter::overrideIds; break;
            case 91: ids = LPainterPath::overrideIds; break;
            case 92: ids = LPainterPathStroker::overrideIds; break;
            case 93: ids = LPalette::overrideIds; break;
            case 94: ids = LPen::overrideIds; break;
            case 95: ids = LPersistentModelIndex::overrideIds; break;
            case 96: ids = LPicture::overrideIds; break;
            case 97: ids = LPixmap::overrideIds; break;
            case 98: ids = LPixmapCache::overrideIds; break;
            case 99: ids = LPrinter::overrideIds; break;
            case 100: ids = LPrinterInfo::overrideIds; break;
            case 101: ids = LProcessEnvironment::overrideIds; break;
            case 102: ids = LQuaternion::overrideIds; break;
            case 103: ids = LRadialGradient::overrideIds; break;
            case 104: ids = LReadLocker::overrideIds; break;
            case 105: ids = LReadWriteLock::overrideIds; break;
            case 106: ids = LRegExp::overrideIds; break;
            case 107: ids = LRegion::overrideIds; break;
            case 109: ids = LRunnable::overrideIds; break;
            case 110: ids = LSemaphore::overrideIds; break;
            case 113: ids = LSizePolicy::overrideIds; break;
            case 114: ids = LSpacerItem::overrideIds; break;
            case 115: ids = LStandardItem::overrideIds; break;
            case 117: ids = LSystemSemaphore::overrideIds; break;
            case 118: ids = LTableWidgetItem::overrideIds; break;
            case 119: ids = LTableWidgetSelectionRange::overrideIds; break;
            case 122: ids = LTextBlockFormat::overrideIds; break;
            case 123: ids = LTextBoundaryFinder::overrideIds; break;
            case 124: ids = LTextCharFormat::overrideIds; break;
            case 125: ids = LTextCodec::overrideIds; break;
            case 126: ids = LTextCursor::overrideIds; break;
            case 127: ids = LTextDecoder::overrideIds; break;
            case 128: ids = LTextDocumentFragment::overrideIds; break;
            case 129: ids = LTextDocumentWriter::overrideIds; break;
            case 130: ids = LTextEncoder::overrideIds; break;
            case 131: ids = LTextFormat::overrideIds; break;
            case 132: ids = LTextFragment::overrideIds; break;
            case 133: ids = LTextFrameFormat::overrideIds; break;
            case 134: ids = LTextImageFormat::overrideIds; break;
            case 135: ids = LTextLayout::overrideIds; break;
            case 136: ids = LTextLength::overrideIds; break;
            case 137: ids = LTextLine::overrideIds; break;
            case 138: ids = LTextListFormat::overrideIds; break;
            case 139: ids = LTextOption::overrideIds; break;
            case 140: ids = LTextTableCell::overrideIds; break;
            case 141: ids = LTextTableCellFormat::overrideIds; break;
            case 142: ids = LTextTableFormat::overrideIds; break;
            case 145: ids = LToolTip::overrideIds; break;
            case 147: ids = LTransform::overrideIds; break;
            case 148: ids = LTreeWidgetItem::overrideIds; break;
            case 149: ids = LUndoCommand::overrideIds; break;
            case 151: ids = LVariant::overrideIds; break;
            case 152: ids = LVector2D::overrideIds; break;
            case 153: ids = LVector3D::overrideIds; break;
            case 154: ids = LVector4D::overrideIds; break;
            case 155: ids = LWaitCondition::overrideIds; break;
            case 156: ids = LWhatsThis::overrideIds; break;
            case 159: ids = LWidgetItem::overrideIds; break;
            case 161: ids = LWriteLocker::overrideIds; break; }}
    StrList funs;
    Q_FOREACH(int id, ids) {
        const char* ret = override_arg_types[id - 1][0];
        funs << QString("%1 %2")
                .arg(ret ? ret : "void")
                .arg(QString(override_function_ids.key(id))).toAscii(); }
    return funs; }
