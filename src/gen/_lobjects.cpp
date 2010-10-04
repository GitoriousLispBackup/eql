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
NumList LAbstractButton::overrideIds = NumList() << 10 << 11 << 12 << 13 << 14 << 15 << 16 << 17 << 18 << 19 << 20 << 21 << 9;
NumList LAbstractItemDelegate::overrideIds = NumList() << 45 << 46 << 47 << 48 << 49 << 50 << 51;
NumList LAbstractItemModel::overrideIds = NumList() << 52 << 53 << 54 << 55 << 56 << 57 << 58 << 59 << 60 << 61 << 62 << 63 << 64 << 65 << 66 << 67 << 68 << 69 << 70 << 71 << 72 << 73 << 74 << 75;
NumList LAbstractItemView::overrideIds = NumList() << 76 << 77 << 78 << 79 << 80 << 81 << 82 << 83 << 84 << 85 << 86 << 87 << 88 << 89 << 90 << 91 << 92 << 93 << 94 << 23 << 29 << 30 << 31 << 32 << 14 << 34 << 15 << 36 << 16 << 38 << 18 << 19 << 20 << 40 << 9 << 95;
NumList LAbstractListModel::overrideIds = NumList() << 56 << 61;
NumList LAbstractPrintDialog::overrideIds = NumList() << 97;
NumList LAbstractProxyModel::overrideIds = NumList() << 99 << 100 << 101 << 102 << 103 << 55 << 58 << 60 << 104 << 71 << 72 << 105;
NumList LAbstractScrollArea::overrideIds = NumList() << 96 << 95 << 24 << 25 << 28 << 29 << 30 << 31 << 32 << 16 << 38 << 18 << 19 << 20 << 21 << 40 << 43;
NumList LAbstractSlider::overrideIds = NumList() << 106 << 13 << 16 << 9 << 43;
NumList LAbstractSpinBox::overrideIds = NumList() << 107 << 108 << 109 << 110 << 23 << 24 << 25 << 13 << 27 << 28 << 14 << 15 << 35 << 16 << 17 << 18 << 19 << 20 << 21 << 40 << 41 << 9 << 43;
NumList LAbstractState::overrideIds = NumList() << 111 << 112;
NumList LAbstractTextDocumentLayout::overrideIds = NumList() << 113 << 114 << 115 << 116 << 117 << 118 << 119 << 120 << 121 << 122;
NumList LAbstractTransition::overrideIds = NumList() << 123 << 124;
NumList LAction::overrideIds = NumList();
NumList LActionGroup::overrideIds = NumList();
NumList LAnimationGroup::overrideIds = NumList();
NumList LApplication::overrideIds = NumList() << 125 << 126 << 127;
NumList LBoxLayout::overrideIds = NumList() << 128 << 129 << 130 << 131 << 22 << 132 << 133 << 134 << 135 << 136 << 137 << 25 << 138;
NumList LBuffer::overrideIds = NumList() << 143 << 144 << 145 << 146;
NumList LButtonGroup::overrideIds = NumList();
NumList LCDEStyle::overrideIds = NumList() << 151 << 152 << 153 << 154;
NumList LCalendarWidget::overrideIds = NumList() << 172 << 24 << 25 << 16 << 19 << 40;
NumList LCheckBox::overrideIds = NumList() << 25 << 10 << 11 << 18 << 12 << 21;
NumList LCleanlooksStyle::overrideIds = NumList() << 155 << 151 << 168 << 169 << 152 << 162 << 163 << 170 << 153 << 165 << 164 << 156 << 157 << 154 << 158 << 159 << 160 << 161 << 166 << 167;
NumList LColorDialog::overrideIds = NumList() << 98 << 13 << 173;
NumList LColumnView::overrideIds = NumList() << 174 << 76 << 78 << 175 << 79 << 176 << 80 << 25 << 83 << 177 << 85 << 86 << 87 << 40 << 178 << 96 << 90 << 92 << 94;
NumList LComboBox::overrideIds = NumList() << 179 << 180 << 24 << 25 << 13 << 28 << 14 << 15 << 35 << 36 << 23 << 16 << 17 << 19 << 20 << 21 << 40 << 41 << 43;
NumList LCommandLinkButton::overrideIds = NumList() << 22 << 24 << 21 << 25;
NumList LCommonStyle::overrideIds = NumList() << 155 << 151 << 152 << 162 << 163 << 153 << 156 << 164 << 165 << 157 << 158 << 159 << 160 << 161 << 166 << 167;
NumList LCompleter::overrideIds = NumList() << 181 << 182;
NumList LCoreApplication::overrideIds = NumList() << 127;
NumList LDataWidgetMapper::overrideIds = NumList();
NumList LDateEdit::overrideIds = NumList();
NumList LDateTimeEdit::overrideIds = NumList() << 183 << 184 << 185 << 25 << 108 << 107 << 14 << 34 << 16 << 19 << 21 << 110 << 109 << 43;
NumList LDesktopWidget::overrideIds = NumList() << 40;
NumList LDial::overrideIds = NumList() << 24 << 25 << 18 << 19 << 20 << 21 << 40 << 106;
NumList LDialog::overrideIds = NumList() << 24 << 98 << 25 << 27 << 28 << 16 << 40 << 41;
NumList LDialogButtonBox::overrideIds = NumList() << 13;
NumList LDirModel::overrideIds = NumList() << 54 << 55 << 56 << 58 << 59 << 60 << 61 << 65 << 66 << 67 << 70 << 71 << 73 << 75;
NumList LDockWidget::overrideIds = NumList() << 13 << 27 << 21;
NumList LDoubleSpinBox::overrideIds = NumList() << 186 << 187 << 107 << 109;
NumList LDoubleValidator::overrideIds = NumList() << 188 << 109;
NumList LDrag::overrideIds = NumList();
NumList LErrorMessage::overrideIds = NumList() << 13 << 173;
NumList LEventLoop::overrideIds = NumList();
NumList LEventTransition::overrideIds = NumList() << 123 << 124;
NumList LFile::overrideIds = NumList() << 143 << 145 << 147 << 146;
NumList LFileDialog::overrideIds = NumList() << 98 << 189 << 13 << 173;
NumList LFileSystemModel::overrideIds = NumList() << 53 << 54 << 55 << 56 << 57 << 58 << 59 << 60 << 61 << 65 << 66 << 67 << 70 << 71 << 73 << 75 << 9;
NumList LFileSystemWatcher::overrideIds = NumList();
NumList LFinalState::overrideIds = NumList() << 111 << 112;
NumList LFocusFrame::overrideIds = NumList() << 21;
NumList LFontComboBox::overrideIds = NumList() << 25;
NumList LFontDialog::overrideIds = NumList() << 98 << 13 << 173;
NumList LFormLayout::overrideIds = NumList() << 128 << 129 << 130 << 131 << 22 << 132 << 133 << 136 << 137 << 25 << 138;
NumList LFrame::overrideIds = NumList() << 25 << 13 << 21;
NumList LGesture::overrideIds = NumList();
NumList LGraphicsAnchor::overrideIds = NumList();
NumList LGraphicsBlurEffect::overrideIds = NumList() << 190 << 191;
NumList LGraphicsColorizeEffect::overrideIds = NumList() << 191;
NumList LGraphicsDropShadowEffect::overrideIds = NumList() << 190 << 191;
NumList LGraphicsEffect::overrideIds = NumList() << 190 << 191 << 192;
NumList LGraphicsOpacityEffect::overrideIds = NumList() << 191;
NumList LGraphicsProxyWidget::overrideIds = NumList() << 193 << 194 << 195 << 196 << 197 << 198 << 199 << 200 << 14 << 34 << 15 << 201 << 35 << 202 << 203 << 204 << 205 << 16 << 17 << 206 << 207 << 208 << 209 << 210 << 41 << 211 << 212 << 213;
NumList LGraphicsRotation::overrideIds = NumList() << 226;
NumList LGraphicsScale::overrideIds = NumList() << 226;
NumList LGraphicsScene::overrideIds = NumList() << 23 << 196 << 197 << 198 << 199 << 227 << 228 << 200 << 14 << 15 << 229 << 36 << 16 << 17 << 206 << 207 << 208 << 209 << 213;
NumList LGraphicsTextItem::overrideIds = NumList() << 222 << 230 << 231 << 232 << 193 << 223 << 195 << 196 << 197 << 198 << 199 << 200 << 14 << 15 << 202 << 203 << 204 << 36 << 23 << 16 << 17 << 206 << 207 << 208 << 209 << 224;
NumList LGraphicsTransform::overrideIds = NumList() << 226;
NumList LGraphicsView::overrideIds = NumList() << 227 << 228 << 23 << 25 << 28 << 29 << 30 << 31 << 32 << 14 << 34 << 15 << 36 << 16 << 17 << 38 << 18 << 19 << 20 << 21 << 40 << 96 << 41 << 95 << 43;
NumList LGraphicsWidget::overrideIds = NumList() << 214 << 13 << 27 << 34 << 215 << 201 << 35 << 216 << 217 << 218 << 210 << 41 << 219 << 212 << 220 << 221 << 222 << 193 << 194 << 223 << 195 << 14 << 15 << 203 << 204 << 205 << 224 << 211 << 225;
NumList LGridLayout::overrideIds = NumList() << 129 << 130 << 131 << 22 << 132 << 133 << 134 << 135 << 136 << 137 << 25 << 138 << 128;
NumList LGroupBox::overrideIds = NumList() << 24 << 13 << 5 << 14 << 18 << 19 << 20 << 21 << 40;
NumList LHBoxLayout::overrideIds = NumList();
NumList LHeaderView::overrideIds = NumList() << 233 << 234 << 148 << 79 << 25 << 177 << 85 << 38 << 18 << 19 << 20 << 21 << 90 << 92 << 95;
NumList LHistoryState::overrideIds = NumList() << 111 << 112;
NumList LIODevice::overrideIds = NumList() << 143 << 144 << 145 << 147 << 146 << 148 << 149 << 150;
NumList LInputContext::overrideIds = NumList() << 235 << 236 << 237 << 238 << 239 << 240 << 148 << 241 << 242 << 243;
NumList LInputDialog::overrideIds = NumList() << 173 << 24 << 98 << 25;
NumList LIntValidator::overrideIds = NumList() << 244 << 109;
NumList LItemDelegate::overrideIds = NumList() << 245 << 246 << 247 << 248 << 45 << 47 << 48 << 49 << 50 << 51 << 46;
NumList LItemSelectionModel::overrideIds = NumList();
NumList LKeyEventTransition::overrideIds = NumList() << 123 << 124;
NumList LLCDNumber::overrideIds = NumList() << 25 << 21;
NumList LLabel::overrideIds = NumList() << 22 << 24 << 25 << 13 << 28 << 14 << 34 << 15 << 16 << 18 << 19 << 20 << 21;
NumList LLibrary::overrideIds = NumList();
NumList LLineEdit::overrideIds = NumList() << 23 << 24 << 25 << 13 << 28 << 29 << 30 << 31 << 32 << 14 << 15 << 36 << 16 << 38 << 18 << 19 << 20 << 21;
NumList LListView::overrideIds = NumList() << 76 << 78 << 83 << 177 << 249 << 30 << 31 << 32 << 85 << 86 << 18 << 20 << 87 << 21 << 40 << 250 << 178 << 88 << 251 << 90 << 91 << 9 << 252 << 92 << 93 << 94;
NumList LListWidget::overrideIds = NumList() << 253 << 254 << 66 << 75 << 32;
NumList LMainWindow::overrideIds = NumList() << 255 << 28;
NumList LMdiArea::overrideIds = NumList() << 24 << 25 << 5 << 21 << 40 << 96 << 41 << 9 << 95;
NumList LMdiSubWindow::overrideIds = NumList() << 24 << 25 << 13 << 5 << 27 << 28 << 14 << 15 << 35 << 16 << 37 << 38 << 18 << 19 << 20 << 39 << 21 << 40 << 41 << 9;
NumList LMenu::overrideIds = NumList() << 25 << 26 << 13 << 33 << 34 << 35 << 16 << 37 << 18 << 19 << 20 << 21 << 9 << 43;
NumList LMenuBar::overrideIds = NumList() << 22 << 24 << 25 << 26 << 13 << 14 << 15 << 16 << 37 << 18 << 19 << 20 << 21 << 40 << 9;
NumList LMessageBox::overrideIds = NumList() << 98 << 13 << 27 << 16 << 40 << 41;
NumList LMimeData::overrideIds = NumList() << 256 << 257 << 258;
NumList LMotifStyle::overrideIds = NumList() << 155 << 151 << 152 << 153 << 156 << 157 << 154 << 158 << 159 << 160 << 161 << 9;
NumList LMouseEventTransition::overrideIds = NumList() << 123 << 124;
NumList LMovie::overrideIds = NumList();
NumList LObject::overrideIds = NumList() << 5 << 6 << 7 << 8 << 9;
NumList LPageSetupDialog::overrideIds = NumList() << 98;
NumList LPanGesture::overrideIds = NumList();
NumList LParallelAnimationGroup::overrideIds = NumList() << 1 << 2 << 3 << 4;
NumList LPauseAnimation::overrideIds = NumList() << 1 << 2;
NumList LPinchGesture::overrideIds = NumList();
NumList LPlainTextDocumentLayout::overrideIds = NumList() << 113 << 114 << 115 << 116 << 117 << 118 << 119;
NumList LPlainTextEdit::overrideIds = NumList() << 259 << 260 << 261 << 262 << 13 << 28 << 29 << 30 << 31 << 32 << 14 << 34 << 15 << 36 << 23 << 16 << 17 << 38 << 18 << 19 << 20 << 21 << 40 << 96 << 41 << 43;
NumList LPlastiqueStyle::overrideIds = NumList() << 155 << 151 << 152 << 163 << 153 << 165 << 164 << 156 << 157 << 154 << 158 << 159 << 160 << 161 << 166 << 167 << 9;
NumList LPluginLoader::overrideIds = NumList();
NumList LPrintDialog::overrideIds = NumList() << 173 << 97 << 98;
NumList LPrintPreviewDialog::overrideIds = NumList() << 173 << 98;
NumList LPrintPreviewWidget::overrideIds = NumList() << 98;
NumList LProcess::overrideIds = NumList() << 263 << 143 << 144 << 145 << 147 << 149 << 150;
NumList LProgressBar::overrideIds = NumList() << 264 << 24 << 25 << 21;
NumList LProgressDialog::overrideIds = NumList() << 25 << 13 << 27 << 40 << 41;
NumList LPropertyAnimation::overrideIds = NumList() << 265 << 4;
NumList LPushButton::overrideIds = NumList() << 24 << 25 << 14 << 15 << 16 << 21;
NumList LRadioButton::overrideIds = NumList() << 25 << 11 << 18 << 21;
NumList LRegExpValidator::overrideIds = NumList() << 109;
NumList LRubberBand::overrideIds = NumList() << 13 << 39 << 21 << 40 << 41;
NumList LScrollArea::overrideIds = NumList() << 34 << 25 << 40 << 96;
NumList LScrollBar::overrideIds = NumList() << 25 << 28 << 35 << 18 << 19 << 20 << 21 << 106;
NumList LSequentialAnimationGroup::overrideIds = NumList() << 1 << 2 << 3 << 4;
NumList LSettings::overrideIds = NumList();
NumList LShortcut::overrideIds = NumList();
NumList LSignalTransition::overrideIds = NumList() << 123 << 124;
NumList LSizeGrip::overrideIds = NumList() << 98 << 25 << 35 << 18 << 19 << 20 << 39 << 21 << 41;
NumList LSlider::overrideIds = NumList() << 24 << 25 << 18 << 19 << 20 << 21;
NumList LSortFilterProxyModel::overrideIds = NumList() << 267 << 268 << 269 << 52 << 53 << 54 << 55 << 56 << 57 << 58 << 59 << 60 << 61 << 62 << 63 << 99 << 100 << 101 << 102 << 64 << 65 << 66 << 67 << 68 << 69 << 70 << 71 << 72 << 103 << 73 << 74 << 75;
NumList LSound::overrideIds = NumList();
NumList LSpinBox::overrideIds = NumList() << 270 << 187 << 107 << 109;
NumList LSplashScreen::overrideIds = NumList() << 271 << 19;
NumList LSplitter::overrideIds = NumList() << 24 << 25 << 13 << 5 << 40;
NumList LSplitterHandle::overrideIds = NumList() << 25 << 18 << 19 << 20 << 21;
NumList LStackedLayout::overrideIds = NumList() << 128 << 129 << 133 << 136 << 137 << 25 << 138;
NumList LStackedWidget::overrideIds = NumList();
NumList LStandardItemModel::overrideIds = NumList() << 54 << 55 << 56 << 58 << 59 << 60 << 61 << 62 << 63 << 65 << 66 << 67 << 68 << 69 << 70 << 71 << 72 << 73 << 75;
NumList LState::overrideIds = NumList() << 111 << 112;
NumList LStateMachine::overrideIds = NumList() << 111 << 112;
NumList LStatusBar::overrideIds = NumList() << 21 << 40 << 41;
NumList LStringListModel::overrideIds = NumList() << 55 << 58 << 63 << 69 << 70 << 71 << 73 << 75;
NumList LStyledItemDelegate::overrideIds = NumList() << 272 << 273 << 45 << 47 << 48 << 49 << 50 << 51 << 46;
NumList LSwipeGesture::overrideIds = NumList();
NumList LSyntaxHighlighter::overrideIds = NumList() << 274;
NumList LSystemTrayIcon::overrideIds = NumList();
NumList LTabBar::overrideIds = NumList() << 275 << 276 << 277 << 278 << 24 << 25 << 13 << 35 << 16 << 18 << 19 << 20 << 21 << 40 << 41 << 43;
NumList LTabWidget::overrideIds = NumList() << 275 << 277 << 24 << 25 << 13 << 16 << 21 << 40 << 41;
NumList LTableView::overrideIds = NumList() << 76 << 79 << 176 << 80 << 177 << 85 << 86 << 87 << 21 << 88 << 251 << 90 << 81 << 82 << 9 << 252 << 92 << 93;
NumList LTableWidget::overrideIds = NumList() << 279 << 280 << 66 << 75 << 32;
NumList LTapAndHoldGesture::overrideIds = NumList();
NumList LTapGesture::overrideIds = NumList();
NumList LTextBlockGroup::overrideIds = NumList() << 281 << 282 << 283;
NumList LTextBrowser::overrideIds = NumList() << 259 << 34 << 15 << 16 << 18 << 19 << 20 << 21;
NumList LTextDocument::overrideIds = NumList() << 185 << 284 << 259;
NumList LTextEdit::overrideIds = NumList() << 259 << 260 << 261 << 262 << 13 << 28 << 29 << 30 << 31 << 32 << 14 << 34 << 15 << 36 << 23 << 16 << 17 << 38 << 18 << 19 << 20 << 21 << 40 << 96 << 41 << 43;
NumList LTextFrame::overrideIds = NumList();
NumList LTextList::overrideIds = NumList();
NumList LTextObject::overrideIds = NumList();
NumList LTextTable::overrideIds = NumList();
NumList LThread::overrideIds = NumList() << 285;
NumList LThreadPool::overrideIds = NumList();
NumList LTimeEdit::overrideIds = NumList();
NumList LTimeLine::overrideIds = NumList() << 286 << 9;
NumList LTimer::overrideIds = NumList() << 9;
NumList LToolBar::overrideIds = NumList() << 26 << 13 << 5 << 21 << 40;
NumList LToolBox::overrideIds = NumList() << 287 << 288 << 13 << 41;
NumList LToolButton::overrideIds = NumList() << 24 << 25 << 26 << 13 << 33 << 11 << 37 << 19 << 20 << 12 << 21 << 9;
NumList LTranslator::overrideIds = NumList() << 141 << 289;
NumList LTreeView::overrideIds = NumList() << 290 << 291 << 249 << 76 << 77 << 148 << 78 << 175 << 79 << 176 << 80 << 83 << 177 << 31 << 85 << 86 << 16 << 38 << 18 << 19 << 20 << 87 << 21 << 250 << 178 << 96 << 88 << 251 << 90 << 81 << 9 << 252 << 92 << 95 << 94;
NumList LTreeWidget::overrideIds = NumList() << 292 << 293 << 66 << 75 << 80 << 32;
NumList LUndoGroup::overrideIds = NumList();
NumList LUndoStack::overrideIds = NumList();
NumList LUndoView::overrideIds = NumList();
NumList LVBoxLayout::overrideIds = NumList();
NumList LValidator::overrideIds = NumList() << 107 << 109;
NumList LVariantAnimation::overrideIds = NumList() << 266 << 265 << 1 << 2 << 4;
NumList LWidget::overrideIds = NumList() << 22 << 23 << 24 << 25 << 26 << 13 << 27 << 28 << 29 << 30 << 31 << 32 << 33 << 14 << 34 << 15 << 35 << 36 << 16 << 17 << 37 << 38 << 18 << 19 << 20 << 39 << 21 << 40 << 41 << 42 << 43 << 44;
NumList LWidgetAction::overrideIds = NumList() << 294 << 295;
NumList LWindowsStyle::overrideIds = NumList() << 155 << 151 << 152 << 153 << 164 << 165 << 156 << 157 << 158 << 159 << 161 << 167 << 166 << 9;
NumList LWizard::overrideIds = NumList() << 296 << 297 << 298 << 299 << 98 << 25 << 173 << 21 << 40;
NumList LWizardPage::overrideIds = NumList() << 300 << 301 << 302 << 296 << 303;
NumList LWorkspace::overrideIds = NumList() << 25 << 13 << 5 << 35 << 21 << 40 << 41 << 43;
NumList LAbstractGraphicsShapeItem::overrideIds = NumList() << 231 << 232;
NumList LAccessible::overrideIds = NumList();
NumList LAccessibleEvent::overrideIds = NumList();
NumList LAccessibleInterface::overrideIds = NumList() << 308 << 309 << 310 << 311 << 312 << 313 << 314 << 315 << 316 << 317 << 318 << 319 << 320 << 321;
NumList LAccessibleWidget::overrideIds = NumList() << 308 << 309 << 310 << 311 << 312 << 315 << 316 << 317 << 319 << 320 << 321;
NumList LActionEvent::overrideIds = NumList();
NumList LBasicTimer::overrideIds = NumList();
NumList LBitArray::overrideIds = NumList();
NumList LBitmap::overrideIds = NumList();
NumList LBrush::overrideIds = NumList();
NumList LChildEvent::overrideIds = NumList();
NumList LCloseEvent::overrideIds = NumList();
NumList LColor::overrideIds = NumList();
NumList LConicalGradient::overrideIds = NumList();
NumList LContextMenuEvent::overrideIds = NumList();
NumList LCryptographicHash::overrideIds = NumList();
NumList LCursor::overrideIds = NumList();
NumList LDate::overrideIds = NumList();
NumList LDateTime::overrideIds = NumList();
NumList LDesktopServices::overrideIds = NumList();
NumList LDir::overrideIds = NumList();
NumList LDirIterator::overrideIds = NumList();
NumList LDragEnterEvent::overrideIds = NumList();
NumList LDragLeaveEvent::overrideIds = NumList();
NumList LDragMoveEvent::overrideIds = NumList();
NumList LDropEvent::overrideIds = NumList() << 322 << 323 << 324;
NumList LDynamicPropertyChangeEvent::overrideIds = NumList();
NumList LEasingCurve::overrideIds = NumList();
NumList LEvent::overrideIds = NumList();
NumList LFileIconProvider::overrideIds = NumList() << 325 << 326 << 327;
NumList LFileInfo::overrideIds = NumList();
NumList LFileOpenEvent::overrideIds = NumList();
NumList LFocusEvent::overrideIds = NumList();
NumList LFontDatabase::overrideIds = NumList();
NumList LFontMetrics::overrideIds = NumList();
NumList LGestureEvent::overrideIds = NumList();
NumList LGradient::overrideIds = NumList();
NumList LGraphicsAnchorLayout::overrideIds = NumList() << 129 << 132 << 133 << 328 << 194 << 211;
NumList LGraphicsEllipseItem::overrideIds = NumList() << 222 << 230 << 231 << 232 << 193 << 223 << 195;
NumList LGraphicsGridLayout::overrideIds = NumList() << 129 << 132 << 133 << 328 << 194 << 211;
NumList LGraphicsItem::overrideIds = NumList() << 304 << 222 << 305 << 306 << 230 << 231 << 232 << 193 << 223 << 195 << 196 << 197 << 198 << 199 << 200 << 14 << 15 << 202 << 203 << 204 << 36 << 23 << 205 << 16 << 17 << 206 << 207 << 208 << 209 << 224 << 307 << 213;
NumList LGraphicsItemGroup::overrideIds = NumList() << 222 << 231 << 232 << 193 << 195;
NumList LGraphicsLayout::overrideIds = NumList() << 129 << 132 << 133 << 328 << 329 << 225;
NumList LGraphicsLayoutItem::overrideIds = NumList() << 194 << 225 << 211;
NumList LGraphicsLineItem::overrideIds = NumList() << 222 << 230 << 231 << 232 << 193 << 223 << 195;
NumList LGraphicsLinearLayout::overrideIds = NumList() << 129 << 132 << 133 << 328 << 194 << 211;
NumList LGraphicsPathItem::overrideIds = NumList() << 222 << 230 << 231 << 232 << 193 << 223 << 195;
NumList LGraphicsPixmapItem::overrideIds = NumList() << 222 << 230 << 231 << 232 << 193 << 223 << 195;
NumList LGraphicsPolygonItem::overrideIds = NumList() << 222 << 230 << 231 << 232 << 193 << 223 << 195;
NumList LGraphicsRectItem::overrideIds = NumList() << 222 << 230 << 231 << 232 << 193 << 223 << 195;
NumList LGraphicsSceneContextMenuEvent::overrideIds = NumList();
NumList LGraphicsSceneDragDropEvent::overrideIds = NumList();
NumList LGraphicsSceneEvent::overrideIds = NumList();
NumList LGraphicsSceneHelpEvent::overrideIds = NumList();
NumList LGraphicsSceneHoverEvent::overrideIds = NumList();
NumList LGraphicsSceneMouseEvent::overrideIds = NumList();
NumList LGraphicsSceneMoveEvent::overrideIds = NumList();
NumList LGraphicsSceneResizeEvent::overrideIds = NumList();
NumList LGraphicsSceneWheelEvent::overrideIds = NumList();
NumList LGraphicsSimpleTextItem::overrideIds = NumList() << 222 << 230 << 231 << 232 << 193 << 223 << 195;
NumList LHelpEvent::overrideIds = NumList();
NumList LHideEvent::overrideIds = NumList();
NumList LHoverEvent::overrideIds = NumList();
NumList LIcon::overrideIds = NumList();
NumList LIconDragEvent::overrideIds = NumList();
NumList LImage::overrideIds = NumList();
NumList LInputEvent::overrideIds = NumList();
NumList LInputMethodEvent::overrideIds = NumList();
NumList LItemEditorFactory::overrideIds = NumList() << 330 << 331;
NumList LItemSelection::overrideIds = NumList();
NumList LItemSelectionRange::overrideIds = NumList();
NumList LKeyEvent::overrideIds = NumList();
NumList LLayoutItem::overrideIds = NumList() << 130 << 140 << 131 << 22 << 132 << 141 << 142 << 134 << 135 << 136 << 137 << 25 << 332 << 333;
NumList LLibraryInfo::overrideIds = NumList();
NumList LLinearGradient::overrideIds = NumList();
NumList LListWidgetItem::overrideIds = NumList() << 334 << 335 << 336;
NumList LLocale::overrideIds = NumList();
NumList LMargins::overrideIds = NumList();
NumList LMatrix::overrideIds = NumList();
NumList LMatrix4x4::overrideIds = NumList();
NumList LMetaObject::overrideIds = NumList();
NumList LModelIndex::overrideIds = NumList();
NumList LMouseEvent::overrideIds = NumList();
NumList LMoveEvent::overrideIds = NumList();
NumList LMutex::overrideIds = NumList();
NumList LMutexLocker::overrideIds = NumList();
NumList LPaintEvent::overrideIds = NumList();
NumList LPainter::overrideIds = NumList();
NumList LPainterPath::overrideIds = NumList();
NumList LPainterPathStroker::overrideIds = NumList();
NumList LPalette::overrideIds = NumList();
NumList LPen::overrideIds = NumList();
NumList LPersistentModelIndex::overrideIds = NumList();
NumList LPicture::overrideIds = NumList() << 337;
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
NumList LResizeEvent::overrideIds = NumList();
NumList LRunnable::overrideIds = NumList() << 285;
NumList LSemaphore::overrideIds = NumList();
NumList LShortcutEvent::overrideIds = NumList();
NumList LShowEvent::overrideIds = NumList();
NumList LSizePolicy::overrideIds = NumList();
NumList LSpacerItem::overrideIds = NumList() << 130 << 140 << 141 << 134 << 136 << 137 << 25 << 332;
NumList LStandardItem::overrideIds = NumList() << 334 << 335 << 338 << 195;
NumList LStatusTipEvent::overrideIds = NumList();
NumList LSystemSemaphore::overrideIds = NumList();
NumList LTableWidgetItem::overrideIds = NumList() << 334 << 335 << 336;
NumList LTableWidgetSelectionRange::overrideIds = NumList();
NumList LTabletEvent::overrideIds = NumList();
NumList LTextBlock::overrideIds = NumList();
NumList LTextBlockFormat::overrideIds = NumList();
NumList LTextBlockUserData::overrideIds = NumList();
NumList LTextBoundaryFinder::overrideIds = NumList();
NumList LTextCharFormat::overrideIds = NumList();
NumList LTextCodec::overrideIds = NumList() << 339 << 340 << 341 << 342 << 343;
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
NumList LTime::overrideIds = NumList();
NumList LTimerEvent::overrideIds = NumList();
NumList LToolTip::overrideIds = NumList();
NumList LTouchEvent::overrideIds = NumList();
NumList LTransform::overrideIds = NumList();
NumList LTreeWidgetItem::overrideIds = NumList() << 334 << 344 << 345;
NumList LUndoCommand::overrideIds = NumList() << 346 << 347 << 348 << 349;
NumList LUrl::overrideIds = NumList();
NumList LVariant::overrideIds = NumList();
NumList LVector2D::overrideIds = NumList();
NumList LVector3D::overrideIds = NumList();
NumList LVector4D::overrideIds = NumList();
NumList LWaitCondition::overrideIds = NumList();
NumList LWhatsThis::overrideIds = NumList();
NumList LWhatsThisClickedEvent::overrideIds = NumList();
NumList LWheelEvent::overrideIds = NumList();
NumList LWidgetItem::overrideIds = NumList() << 130 << 140 << 131 << 22 << 141 << 134 << 136 << 137 << 25 << 333;
NumList LWindowStateChangeEvent::overrideIds = NumList();
NumList LWriteLocker::overrideIds = NumList();

void LObjects::ini(EQL* e) {
    static bool ok = false;
    if(!ok) {
        ok = true;
        eql = e;
        dynObject = new DynObject;
        Q = new QObject* [189];
        N = new QObject* [162];
        Q[0] = new Q1; Q[1] = new Q2; Q[2] = new Q3; Q[3] = new Q4; Q[4] = new Q5; Q[5] = new Q6; Q[6] = new Q7; Q[7] = new Q8; Q[8] = new Q9; Q[9] = new Q10; Q[10] = new Q11; Q[11] = new Q12; Q[12] = new Q13; Q[13] = new Q14; Q[14] = new Q15; Q[15] = new Q16; Q[16] = new Q17; Q[17] = new Q18; Q[18] = new Q19; Q[19] = new Q20; Q[20] = new Q21; Q[21] = new Q22; Q[22] = new Q23; Q[23] = new Q24; Q[24] = new Q25; Q[25] = new Q26; Q[26] = new Q27; Q[27] = new Q28; Q[28] = new Q29; Q[29] = new Q30; Q[30] = new Q31; Q[31] = new Q32; Q[32] = new Q33; Q[33] = new Q34; Q[34] = new Q35; Q[35] = new Q36; Q[36] = new Q37; Q[37] = new Q38; Q[38] = new Q39; Q[39] = new Q40; Q[40] = new Q41; Q[41] = new Q42; Q[42] = new Q43; Q[43] = new Q44; Q[44] = new Q45; Q[45] = new Q46; Q[46] = new Q47; Q[47] = new Q48; Q[48] = new Q49; Q[49] = new Q50; Q[50] = new Q51; Q[51] = new Q52; Q[52] = new Q53; Q[53] = new Q54; Q[54] = new Q55; Q[55] = new Q56; Q[56] = new Q57; Q[57] = new Q58; Q[58] = new Q59; Q[59] = new Q60; Q[60] = new Q61; Q[61] = new Q62; Q[62] = new Q63; Q[63] = new Q64; Q[64] = new Q65; Q[65] = new Q66; Q[66] = new Q67; Q[67] = new Q68; Q[68] = new Q69; Q[69] = new Q70; Q[70] = new Q71; Q[71] = new Q72; Q[72] = new Q73; Q[73] = new Q74; Q[74] = new Q75; Q[75] = new Q76; Q[76] = new Q77; Q[77] = new Q78; Q[78] = new Q79; Q[79] = new Q80; Q[80] = new Q81; Q[81] = new Q82; Q[82] = new Q83; Q[83] = new Q84; Q[84] = new Q85; Q[85] = new Q86; Q[86] = new Q87; Q[87] = new Q88; Q[88] = new Q89; Q[89] = new Q90; Q[90] = new Q91; Q[91] = new Q92; Q[92] = new Q93; Q[93] = new Q94; Q[94] = new Q95; Q[95] = new Q96; Q[96] = new Q97; Q[97] = new Q98; Q[98] = new Q99; Q[99] = new Q100; Q[100] = new Q101; Q[101] = new Q102; Q[102] = new Q103; Q[103] = new Q104; Q[104] = new Q105; Q[105] = new Q106; Q[106] = new Q107; Q[107] = new Q108; Q[108] = new Q109; Q[109] = new Q110; Q[110] = new Q111; Q[111] = new Q112; Q[112] = new Q113; Q[113] = new Q114; Q[114] = new Q115; Q[115] = new Q116; Q[116] = new Q117; Q[117] = new Q118; Q[118] = new Q119; Q[119] = new Q120; Q[120] = new Q121; Q[121] = new Q122; Q[122] = new Q123; Q[123] = new Q124; Q[124] = new Q125; Q[125] = new Q126; Q[126] = new Q127; Q[127] = new Q128; Q[128] = new Q129; Q[129] = new Q130; Q[130] = new Q131; Q[131] = new Q132; Q[132] = new Q133; Q[133] = new Q134; Q[134] = new Q135; Q[135] = new Q136; Q[136] = new Q137; Q[137] = new Q138; Q[138] = new Q139; Q[139] = new Q140; Q[140] = new Q141; Q[141] = new Q142; Q[142] = new Q143; Q[143] = new Q144; Q[144] = new Q145; Q[145] = new Q146; Q[146] = new Q147; Q[147] = new Q148; Q[148] = new Q149; Q[149] = new Q150; Q[150] = new Q151; Q[151] = new Q152; Q[152] = new Q153; Q[153] = new Q154; Q[154] = new Q155; Q[155] = new Q156; Q[156] = new Q157; Q[157] = new Q158; Q[158] = new Q159; Q[159] = new Q160; Q[160] = new Q161; Q[161] = new Q162; Q[162] = new Q163; Q[163] = new Q164; Q[164] = new Q165; Q[165] = new Q166; Q[166] = new Q167; Q[167] = new Q168; Q[168] = new Q169; Q[169] = new Q170; Q[170] = new Q171; Q[171] = new Q172; Q[172] = new Q173; Q[173] = new Q174; Q[174] = new Q175; Q[175] = new Q176; Q[176] = new Q177; Q[177] = new Q178; Q[178] = new Q179; Q[179] = new Q180; Q[180] = new Q181; Q[181] = new Q182; Q[182] = new Q183; Q[183] = new Q184; Q[184] = new Q185; Q[185] = new Q186; Q[186] = new Q187; Q[187] = new Q188; Q[188] = new Q189; 
        N[0] = new N1; N[1] = new N2; N[2] = new N3; N[3] = new N4; N[4] = new N5; N[5] = new N6; N[6] = new N7; N[7] = new N8; N[8] = new N9; N[9] = new N10; N[10] = new N11; N[11] = new N12; N[12] = new N13; N[13] = new N14; N[14] = new N15; N[15] = new N16; N[16] = new N17; N[17] = new N18; N[18] = new N19; N[19] = new N20; N[20] = new N21; N[21] = new N22; N[22] = new N23; N[23] = new N24; N[24] = new N25; N[25] = new N26; N[26] = new N27; N[27] = new N28; N[28] = new N29; N[29] = new N30; N[30] = new N31; N[31] = new N32; N[32] = new N33; N[33] = new N34; N[34] = new N35; N[35] = new N36; N[36] = new N37; N[37] = new N38; N[38] = new N39; N[39] = new N40; N[40] = new N41; N[41] = new N42; N[42] = new N43; N[43] = new N44; N[44] = new N45; N[45] = new N46; N[46] = new N47; N[47] = new N48; N[48] = new N49; N[49] = new N50; N[50] = new N51; N[51] = new N52; N[52] = new N53; N[53] = new N54; N[54] = new N55; N[55] = new N56; N[56] = new N57; N[57] = new N58; N[58] = new N59; N[59] = new N60; N[60] = new N61; N[61] = new N62; N[62] = new N63; N[63] = new N64; N[64] = new N65; N[65] = new N66; N[66] = new N67; N[67] = new N68; N[68] = new N69; N[69] = new N70; N[70] = new N71; N[71] = new N72; N[72] = new N73; N[73] = new N74; N[74] = new N75; N[75] = new N76; N[76] = new N77; N[77] = new N78; N[78] = new N79; N[79] = new N80; N[80] = new N81; N[81] = new N82; N[82] = new N83; N[83] = new N84; N[84] = new N85; N[85] = new N86; N[86] = new N87; N[87] = new N88; N[88] = new N89; N[89] = new N90; N[90] = new N91; N[91] = new N92; N[92] = new N93; N[93] = new N94; N[94] = new N95; N[95] = new N96; N[96] = new N97; N[97] = new N98; N[98] = new N99; N[99] = new N100; N[100] = new N101; N[101] = new N102; N[102] = new N103; N[103] = new N104; N[104] = new N105; N[105] = new N106; N[106] = new N107; N[107] = new N108; N[108] = new N109; N[109] = new N110; N[110] = new N111; N[111] = new N112; N[112] = new N113; N[113] = new N114; N[114] = new N115; N[115] = new N116; N[116] = new N117; N[117] = new N118; N[118] = new N119; N[119] = new N120; N[120] = new N121; N[121] = new N122; N[122] = new N123; N[123] = new N124; N[124] = new N125; N[125] = new N126; N[126] = new N127; N[127] = new N128; N[128] = new N129; N[129] = new N130; N[130] = new N131; N[131] = new N132; N[132] = new N133; N[133] = new N134; N[134] = new N135; N[135] = new N136; N[136] = new N137; N[137] = new N138; N[138] = new N139; N[139] = new N140; N[140] = new N141; N[141] = new N142; N[142] = new N143; N[143] = new N144; N[144] = new N145; N[145] = new N146; N[146] = new N147; N[147] = new N148; N[148] = new N149; N[149] = new N150; N[150] = new N151; N[151] = new N152; N[152] = new N153; N[153] = new N154; N[154] = new N155; N[155] = new N156; N[156] = new N157; N[157] = new N158; N[158] = new N159; N[159] = new N160; N[160] = new N161; N[161] = new N162; 
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
        n_names["QTextBlockUserData"] = 123;
        n_names["QTextBoundaryFinder"] = 124;
        n_names["QTextCharFormat"] = 125;
        n_names["QTextCodec"] = 126;
        n_names["QTextCursor"] = 127;
        n_names["QTextDecoder"] = 128;
        n_names["QTextDocumentFragment"] = 129;
        n_names["QTextDocumentWriter"] = 130;
        n_names["QTextEncoder"] = 131;
        n_names["QTextFormat"] = 132;
        n_names["QTextFragment"] = 133;
        n_names["QTextFrameFormat"] = 134;
        n_names["QTextImageFormat"] = 135;
        n_names["QTextLayout"] = 136;
        n_names["QTextLength"] = 137;
        n_names["QTextLine"] = 138;
        n_names["QTextListFormat"] = 139;
        n_names["QTextOption"] = 140;
        n_names["QTextTableCell"] = 141;
        n_names["QTextTableCellFormat"] = 142;
        n_names["QTextTableFormat"] = 143;
        n_names["QTime"] = 144;
        n_names["QTimerEvent"] = 145;
        n_names["QToolTip"] = 146;
        n_names["QTouchEvent"] = 147;
        n_names["QTransform"] = 148;
        n_names["QTreeWidgetItem"] = 149;
        n_names["QUndoCommand"] = 150;
        n_names["QUrl"] = 151;
        n_names["QVariant"] = 152;
        n_names["QVector2D"] = 153;
        n_names["QVector3D"] = 154;
        n_names["QVector4D"] = 155;
        n_names["QWaitCondition"] = 156;
        n_names["QWhatsThis"] = 157;
        n_names["QWhatsThisClickedEvent"] = 158;
        n_names["QWheelEvent"] = 159;
        n_names["QWidgetItem"] = 160;
        n_names["QWindowStateChangeEvent"] = 161;
        n_names["QWriteLocker"] = 162;
        override_function_ids["duration()"] = 1;
        override_function_ids["updateCurrentTime(int)"] = 2;
        override_function_ids["updateDirection(QAbstractAnimation::Direction)"] = 3;
        override_function_ids["updateState(QAbstractAnimation::State,QAbstractAnimation::State)"] = 4;
        override_function_ids["childEvent(QChildEvent*)"] = 5;
        override_function_ids["connectNotify(const char*)"] = 6;
        override_function_ids["customEvent(QEvent*)"] = 7;
        override_function_ids["disconnectNotify(const char*)"] = 8;
        override_function_ids["timerEvent(QTimerEvent*)"] = 9;
        override_function_ids["checkStateSet()"] = 10;
        override_function_ids["hitButton(QPoint)"] = 11;
        override_function_ids["nextCheckState()"] = 12;
        override_function_ids["changeEvent(QEvent*)"] = 13;
        override_function_ids["focusInEvent(QFocusEvent*)"] = 14;
        override_function_ids["focusOutEvent(QFocusEvent*)"] = 15;
        override_function_ids["keyPressEvent(QKeyEvent*)"] = 16;
        override_function_ids["keyReleaseEvent(QKeyEvent*)"] = 17;
        override_function_ids["mouseMoveEvent(QMouseEvent*)"] = 18;
        override_function_ids["mousePressEvent(QMouseEvent*)"] = 19;
        override_function_ids["mouseReleaseEvent(QMouseEvent*)"] = 20;
        override_function_ids["paintEvent(QPaintEvent*)"] = 21;
        override_function_ids["heightForWidth(int)"] = 22;
        override_function_ids["inputMethodQuery(Qt::InputMethodQuery)"] = 23;
        override_function_ids["minimumSizeHint()"] = 24;
        override_function_ids["sizeHint()"] = 25;
        override_function_ids["actionEvent(QActionEvent*)"] = 26;
        override_function_ids["closeEvent(QCloseEvent*)"] = 27;
        override_function_ids["contextMenuEvent(QContextMenuEvent*)"] = 28;
        override_function_ids["dragEnterEvent(QDragEnterEvent*)"] = 29;
        override_function_ids["dragLeaveEvent(QDragLeaveEvent*)"] = 30;
        override_function_ids["dragMoveEvent(QDragMoveEvent*)"] = 31;
        override_function_ids["dropEvent(QDropEvent*)"] = 32;
        override_function_ids["enterEvent(QEvent*)"] = 33;
        override_function_ids["focusNextPrevChild(bool)"] = 34;
        override_function_ids["hideEvent(QHideEvent*)"] = 35;
        override_function_ids["inputMethodEvent(QInputMethodEvent*)"] = 36;
        override_function_ids["leaveEvent(QEvent*)"] = 37;
        override_function_ids["mouseDoubleClickEvent(QMouseEvent*)"] = 38;
        override_function_ids["moveEvent(QMoveEvent*)"] = 39;
        override_function_ids["resizeEvent(QResizeEvent*)"] = 40;
        override_function_ids["showEvent(QShowEvent*)"] = 41;
        override_function_ids["tabletEvent(QTabletEvent*)"] = 42;
        override_function_ids["wheelEvent(QWheelEvent*)"] = 43;
        override_function_ids["metric(PaintDeviceMetric)"] = 44;
        override_function_ids["createEditor(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 45;
        override_function_ids["editorEvent(QEvent*,QAbstractItemModel*,QStyleOptionViewItem,QModelIndex)"] = 46;
        override_function_ids["paint(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 47;
        override_function_ids["setEditorData(QWidget*,QModelIndex)"] = 48;
        override_function_ids["setModelData(QWidget*,QAbstractItemModel*,QModelIndex)"] = 49;
        override_function_ids["sizeHint(QStyleOptionViewItem,QModelIndex)"] = 50;
        override_function_ids["updateEditorGeometry(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 51;
        override_function_ids["buddy(QModelIndex)"] = 52;
        override_function_ids["canFetchMore(QModelIndex)"] = 53;
        override_function_ids["columnCount(QModelIndex)"] = 54;
        override_function_ids["data(QModelIndex,int)"] = 55;
        override_function_ids["dropMimeData(QMimeData*,Qt::DropAction,int,int,QModelIndex)"] = 56;
        override_function_ids["fetchMore(QModelIndex)"] = 57;
        override_function_ids["flags(QModelIndex)"] = 58;
        override_function_ids["hasChildren(QModelIndex)"] = 59;
        override_function_ids["headerData(int,Qt::Orientation,int)"] = 60;
        override_function_ids["index(int,int,QModelIndex)"] = 61;
        override_function_ids["insertColumns(int,int,QModelIndex)"] = 62;
        override_function_ids["insertRows(int,int,QModelIndex)"] = 63;
        override_function_ids["match(QModelIndex,int,QVariant,int,Qt::MatchFlags)"] = 64;
        override_function_ids["mimeData(QModelIndexList)"] = 65;
        override_function_ids["mimeTypes()"] = 66;
        override_function_ids["parent(QModelIndex)"] = 67;
        override_function_ids["removeColumns(int,int,QModelIndex)"] = 68;
        override_function_ids["removeRows(int,int,QModelIndex)"] = 69;
        override_function_ids["rowCount(QModelIndex)"] = 70;
        override_function_ids["setData(QModelIndex,QVariant,int)"] = 71;
        override_function_ids["setHeaderData(int,Qt::Orientation,QVariant,int)"] = 72;
        override_function_ids["sort(int,Qt::SortOrder)"] = 73;
        override_function_ids["span(QModelIndex)"] = 74;
        override_function_ids["supportedDropActions()"] = 75;
        override_function_ids["indexAt(QPoint)"] = 76;
        override_function_ids["keyboardSearch(QString)"] = 77;
        override_function_ids["scrollTo(QModelIndex,ScrollHint)"] = 78;
        override_function_ids["setModel(QAbstractItemModel*)"] = 79;
        override_function_ids["setSelectionModel(QItemSelectionModel*)"] = 80;
        override_function_ids["sizeHintForColumn(int)"] = 81;
        override_function_ids["sizeHintForRow(int)"] = 82;
        override_function_ids["visualRect(QModelIndex)"] = 83;
        override_function_ids["edit(QModelIndex,EditTrigger,QEvent*)"] = 84;
        override_function_ids["horizontalOffset()"] = 85;
        override_function_ids["isIndexHidden(QModelIndex)"] = 86;
        override_function_ids["moveCursor(CursorAction,Qt::KeyboardModifiers)"] = 87;
        override_function_ids["selectedIndexes()"] = 88;
        override_function_ids["selectionCommand(QModelIndex,QEvent*)"] = 89;
        override_function_ids["setSelection(QRect,QItemSelectionModel::SelectionFlags)"] = 90;
        override_function_ids["startDrag(Qt::DropActions)"] = 91;
        override_function_ids["verticalOffset()"] = 92;
        override_function_ids["viewOptions()"] = 93;
        override_function_ids["visualRegionForSelection(QItemSelection)"] = 94;
        override_function_ids["viewportEvent(QEvent*)"] = 95;
        override_function_ids["scrollContentsBy(int,int)"] = 96;
        override_function_ids["exec()"] = 97;
        override_function_ids["setVisible(bool)"] = 98;
        override_function_ids["mapFromSource(QModelIndex)"] = 99;
        override_function_ids["mapSelectionFromSource(QItemSelection)"] = 100;
        override_function_ids["mapSelectionToSource(QItemSelection)"] = 101;
        override_function_ids["mapToSource(QModelIndex)"] = 102;
        override_function_ids["setSourceModel(QAbstractItemModel*)"] = 103;
        override_function_ids["revert()"] = 104;
        override_function_ids["submit()"] = 105;
        override_function_ids["sliderChange(SliderChange)"] = 106;
        override_function_ids["fixup(QString)"] = 107;
        override_function_ids["stepBy(int)"] = 108;
        override_function_ids["validate(QString,int)"] = 109;
        override_function_ids["stepEnabled()"] = 110;
        override_function_ids["onEntry(QEvent*)"] = 111;
        override_function_ids["onExit(QEvent*)"] = 112;
        override_function_ids["blockBoundingRect(QTextBlock)"] = 113;
        override_function_ids["documentSize()"] = 114;
        override_function_ids["draw(QPainter*,PaintContext)"] = 115;
        override_function_ids["frameBoundingRect(QTextFrame*)"] = 116;
        override_function_ids["hitTest(QPointF,Qt::HitTestAccuracy)"] = 117;
        override_function_ids["pageCount()"] = 118;
        override_function_ids["documentChanged(int,int,int)"] = 119;
        override_function_ids["drawInlineObject(QPainter*,QRectF,QTextInlineObject,int,QTextFormat)"] = 120;
        override_function_ids["positionInlineObject(QTextInlineObject,int,QTextFormat)"] = 121;
        override_function_ids["resizeInlineObject(QTextInlineObject,int,QTextFormat)"] = 122;
        override_function_ids["eventTest(QEvent*)"] = 123;
        override_function_ids["onTransition(QEvent*)"] = 124;
        override_function_ids["commitData(QSessionManager)"] = 125;
        override_function_ids["saveState(QSessionManager)"] = 126;
        override_function_ids["notify(QObject*,QEvent*)"] = 127;
        override_function_ids["addItem(QLayoutItem*)"] = 128;
        override_function_ids["count()"] = 129;
        override_function_ids["expandingDirections()"] = 130;
        override_function_ids["hasHeightForWidth()"] = 131;
        override_function_ids["invalidate()"] = 132;
        override_function_ids["itemAt(int)"] = 133;
        override_function_ids["maximumSize()"] = 134;
        override_function_ids["minimumHeightForWidth(int)"] = 135;
        override_function_ids["minimumSize()"] = 136;
        override_function_ids["setGeometry(QRect)"] = 137;
        override_function_ids["takeAt(int)"] = 138;
        override_function_ids["indexOf(QWidget*)"] = 139;
        override_function_ids["geometry()"] = 140;
        override_function_ids["isEmpty()"] = 141;
        override_function_ids["layout()"] = 142;
        override_function_ids["atEnd()"] = 143;
        override_function_ids["canReadLine()"] = 144;
        override_function_ids["close()"] = 145;
        override_function_ids["open(OpenMode)"] = 146;
        override_function_ids["isSequential()"] = 147;
        override_function_ids["reset()"] = 148;
        override_function_ids["waitForBytesWritten(int)"] = 149;
        override_function_ids["waitForReadyRead(int)"] = 150;
        override_function_ids["drawControl(ControlElement,QStyleOption*,QPainter*,QWidget*)"] = 151;
        override_function_ids["drawPrimitive(PrimitiveElement,QStyleOption*,QPainter*,QWidget*)"] = 152;
        override_function_ids["pixelMetric(PixelMetric,QStyleOption*,QWidget*)"] = 153;
        override_function_ids["standardPalette()"] = 154;
        override_function_ids["drawComplexControl(ComplexControl,QStyleOptionComplex*,QPainter*,QWidget*)"] = 155;
        override_function_ids["polish(QPalette)"] = 156;
        override_function_ids["sizeFromContents(ContentsType,QStyleOption*,QSize,QWidget*)"] = 157;
        override_function_ids["standardPixmap(StandardPixmap,QStyleOption*,QWidget*)"] = 158;
        override_function_ids["styleHint(StyleHint,QStyleOption*,QWidget*,QStyleHintReturn*)"] = 159;
        override_function_ids["subControlRect(ComplexControl,QStyleOptionComplex*,SubControl,QWidget*)"] = 160;
        override_function_ids["subElementRect(SubElement,QStyleOption*,QWidget*)"] = 161;
        override_function_ids["generatedIconPixmap(QIcon::Mode,QPixmap,QStyleOption*)"] = 162;
        override_function_ids["hitTestComplexControl(ComplexControl,QStyleOptionComplex*,QPoint,QWidget*)"] = 163;
        override_function_ids["polish(QApplication*)"] = 164;
        override_function_ids["polish(QWidget*)"] = 165;
        override_function_ids["unpolish(QWidget*)"] = 166;
        override_function_ids["unpolish(QApplication*)"] = 167;
        override_function_ids["drawItemPixmap(QPainter*,QRect,int,QPixmap)"] = 168;
        override_function_ids["drawItemText(QPainter*,QRect,int,QPalette,bool,QString,QPalette::ColorRole)"] = 169;
        override_function_ids["itemPixmapRect(QRect,int,QPixmap)"] = 170;
        override_function_ids["itemTextRect(QFontMetrics,QRect,int,bool,QString)"] = 171;
        override_function_ids["paintCell(QPainter*,QRect,QDate)"] = 172;
        override_function_ids["done(int)"] = 173;
        override_function_ids["createColumn(QModelIndex)"] = 174;
        override_function_ids["selectAll()"] = 175;
        override_function_ids["setRootIndex(QModelIndex)"] = 176;
        override_function_ids["currentChanged(QModelIndex,QModelIndex)"] = 177;
        override_function_ids["rowsInserted(QModelIndex,int,int)"] = 178;
        override_function_ids["hidePopup()"] = 179;
        override_function_ids["showPopup()"] = 180;
        override_function_ids["pathFromIndex(QModelIndex)"] = 181;
        override_function_ids["splitPath(QString)"] = 182;
        override_function_ids["dateTimeFromText(QString)"] = 183;
        override_function_ids["textFromDateTime(QDateTime)"] = 184;
        override_function_ids["clear()"] = 185;
        override_function_ids["textFromValue(double)"] = 186;
        override_function_ids["valueFromText(QString)"] = 187;
        override_function_ids["setRange(double,double,int)"] = 188;
        override_function_ids["accept()"] = 189;
        override_function_ids["boundingRectFor(QRectF)"] = 190;
        override_function_ids["draw(QPainter*)"] = 191;
        override_function_ids["sourceChanged(ChangeFlags)"] = 192;
        override_function_ids["paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 193;
        override_function_ids["setGeometry(QRectF)"] = 194;
        override_function_ids["type()"] = 195;
        override_function_ids["contextMenuEvent(QGraphicsSceneContextMenuEvent*)"] = 196;
        override_function_ids["dragEnterEvent(QGraphicsSceneDragDropEvent*)"] = 197;
        override_function_ids["dragLeaveEvent(QGraphicsSceneDragDropEvent*)"] = 198;
        override_function_ids["dragMoveEvent(QGraphicsSceneDragDropEvent*)"] = 199;
        override_function_ids["dropEvent(QGraphicsSceneDragDropEvent*)"] = 200;
        override_function_ids["grabMouseEvent(QEvent*)"] = 201;
        override_function_ids["hoverEnterEvent(QGraphicsSceneHoverEvent*)"] = 202;
        override_function_ids["hoverLeaveEvent(QGraphicsSceneHoverEvent*)"] = 203;
        override_function_ids["hoverMoveEvent(QGraphicsSceneHoverEvent*)"] = 204;
        override_function_ids["itemChange(GraphicsItemChange,QVariant)"] = 205;
        override_function_ids["mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)"] = 206;
        override_function_ids["mouseMoveEvent(QGraphicsSceneMouseEvent*)"] = 207;
        override_function_ids["mousePressEvent(QGraphicsSceneMouseEvent*)"] = 208;
        override_function_ids["mouseReleaseEvent(QGraphicsSceneMouseEvent*)"] = 209;
        override_function_ids["resizeEvent(QGraphicsSceneResizeEvent*)"] = 210;
        override_function_ids["sizeHint(Qt::SizeHint,QSizeF)"] = 211;
        override_function_ids["ungrabMouseEvent(QEvent*)"] = 212;
        override_function_ids["wheelEvent(QGraphicsSceneWheelEvent*)"] = 213;
        override_function_ids["paintWindowFrame(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 214;
        override_function_ids["grabKeyboardEvent(QEvent*)"] = 215;
        override_function_ids["initStyleOption(QStyleOption*)"] = 216;
        override_function_ids["moveEvent(QGraphicsSceneMoveEvent*)"] = 217;
        override_function_ids["polishEvent()"] = 218;
        override_function_ids["ungrabKeyboardEvent(QEvent*)"] = 219;
        override_function_ids["windowFrameEvent(QEvent*)"] = 220;
        override_function_ids["windowFrameSectionAt(QPointF)"] = 221;
        override_function_ids["boundingRect()"] = 222;
        override_function_ids["shape()"] = 223;
        override_function_ids["sceneEvent(QEvent*)"] = 224;
        override_function_ids["updateGeometry()"] = 225;
        override_function_ids["applyTo(QMatrix4x4*)"] = 226;
        override_function_ids["drawBackground(QPainter*,QRectF)"] = 227;
        override_function_ids["drawForeground(QPainter*,QRectF)"] = 228;
        override_function_ids["helpEvent(QGraphicsSceneHelpEvent*)"] = 229;
        override_function_ids["contains(QPointF)"] = 230;
        override_function_ids["isObscuredBy(QGraphicsItem*)"] = 231;
        override_function_ids["opaqueArea()"] = 232;
        override_function_ids["paintSection(QPainter*,QRect,int)"] = 233;
        override_function_ids["sectionSizeFromContents(int)"] = 234;
        override_function_ids["actions()"] = 235;
        override_function_ids["filterEvent(QEvent*)"] = 236;
        override_function_ids["font()"] = 237;
        override_function_ids["identifierName()"] = 238;
        override_function_ids["isComposing()"] = 239;
        override_function_ids["language()"] = 240;
        override_function_ids["setFocusWidget(QWidget*)"] = 241;
        override_function_ids["update()"] = 242;
        override_function_ids["widgetDestroyed(QWidget*)"] = 243;
        override_function_ids["setRange(int,int)"] = 244;
        override_function_ids["drawCheck(QPainter*,QStyleOptionViewItem,QRect,Qt::CheckState)"] = 245;
        override_function_ids["drawDecoration(QPainter*,QStyleOptionViewItem,QRect,QPixmap)"] = 246;
        override_function_ids["drawDisplay(QPainter*,QStyleOptionViewItem,QRect,QString)"] = 247;
        override_function_ids["drawFocus(QPainter*,QStyleOptionViewItem,QRect)"] = 248;
        override_function_ids["dataChanged(QModelIndex,QModelIndex)"] = 249;
        override_function_ids["rowsAboutToBeRemoved(QModelIndex,int,int)"] = 250;
        override_function_ids["selectionChanged(QItemSelection,QItemSelection)"] = 251;
        override_function_ids["updateGeometries()"] = 252;
        override_function_ids["dropMimeData(int,QMimeData*,Qt::DropAction)"] = 253;
        override_function_ids["mimeData(QList<QListWidgetItem*>)"] = 254;
        override_function_ids["createPopupMenu()"] = 255;
        override_function_ids["formats()"] = 256;
        override_function_ids["hasFormat(QString)"] = 257;
        override_function_ids["retrieveData(QString,QVariant::Type)"] = 258;
        override_function_ids["loadResource(int,QUrl)"] = 259;
        override_function_ids["canInsertFromMimeData(QMimeData*)"] = 260;
        override_function_ids["createMimeDataFromSelection()"] = 261;
        override_function_ids["insertFromMimeData(QMimeData*)"] = 262;
        override_function_ids["setupChildProcess()"] = 263;
        override_function_ids["text()"] = 264;
        override_function_ids["updateCurrentValue(QVariant)"] = 265;
        override_function_ids["interpolated(QVariant,QVariant,qreal)"] = 266;
        override_function_ids["filterAcceptsColumn(int,QModelIndex)"] = 267;
        override_function_ids["filterAcceptsRow(int,QModelIndex)"] = 268;
        override_function_ids["lessThan(QModelIndex,QModelIndex)"] = 269;
        override_function_ids["textFromValue(int)"] = 270;
        override_function_ids["drawContents(QPainter*)"] = 271;
        override_function_ids["displayText(QVariant,QLocale)"] = 272;
        override_function_ids["initStyleOption(QStyleOptionViewItem*,QModelIndex)"] = 273;
        override_function_ids["highlightBlock(QString)"] = 274;
        override_function_ids["tabInserted(int)"] = 275;
        override_function_ids["tabLayoutChange()"] = 276;
        override_function_ids["tabRemoved(int)"] = 277;
        override_function_ids["tabSizeHint(int)"] = 278;
        override_function_ids["dropMimeData(int,int,QMimeData*,Qt::DropAction)"] = 279;
        override_function_ids["mimeData(QList<QTableWidgetItem*>)"] = 280;
        override_function_ids["blockFormatChanged(QTextBlock)"] = 281;
        override_function_ids["blockInserted(QTextBlock)"] = 282;
        override_function_ids["blockRemoved(QTextBlock)"] = 283;
        override_function_ids["createObject(QTextFormat)"] = 284;
        override_function_ids["run()"] = 285;
        override_function_ids["valueForTime(int)"] = 286;
        override_function_ids["itemInserted(int)"] = 287;
        override_function_ids["itemRemoved(int)"] = 288;
        override_function_ids["translate(const char*,const char*,const char*)"] = 289;
        override_function_ids["drawBranches(QPainter*,QRect,QModelIndex)"] = 290;
        override_function_ids["drawRow(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 291;
        override_function_ids["dropMimeData(QTreeWidgetItem*,int,QMimeData*,Qt::DropAction)"] = 292;
        override_function_ids["mimeData(QList<QTreeWidgetItem*>)"] = 293;
        override_function_ids["createWidget(QWidget*)"] = 294;
        override_function_ids["deleteWidget(QWidget*)"] = 295;
        override_function_ids["nextId()"] = 296;
        override_function_ids["validateCurrentPage()"] = 297;
        override_function_ids["cleanupPage(int)"] = 298;
        override_function_ids["initializePage(int)"] = 299;
        override_function_ids["cleanupPage()"] = 300;
        override_function_ids["initializePage()"] = 301;
        override_function_ids["isComplete()"] = 302;
        override_function_ids["validatePage()"] = 303;
        override_function_ids["advance(int)"] = 304;
        override_function_ids["collidesWithItem(QGraphicsItem*,Qt::ItemSelectionMode)"] = 305;
        override_function_ids["collidesWithPath(QPainterPath,Qt::ItemSelectionMode)"] = 306;
        override_function_ids["sceneEventFilter(QGraphicsItem*,QEvent*)"] = 307;
        override_function_ids["actionText(int,Text,int)"] = 308;
        override_function_ids["childAt(int,int)"] = 309;
        override_function_ids["childCount()"] = 310;
        override_function_ids["doAction(int,int,QVariantList)"] = 311;
        override_function_ids["indexOfChild(QAccessibleInterface*)"] = 312;
        override_function_ids["isValid()"] = 313;
        override_function_ids["object()"] = 314;
        override_function_ids["rect(int)"] = 315;
        override_function_ids["relationTo(int,QAccessibleInterface*,int)"] = 316;
        override_function_ids["role(int)"] = 317;
        override_function_ids["setText(Text,int,QString)"] = 318;
        override_function_ids["state(int)"] = 319;
        override_function_ids["text(Text,int)"] = 320;
        override_function_ids["userActionCount(int)"] = 321;
        override_function_ids["encodedData(const char*)"] = 322;
        override_function_ids["format(int)"] = 323;
        override_function_ids["provides(const char*)"] = 324;
        override_function_ids["icon(IconType)"] = 325;
        override_function_ids["icon(QFileInfo)"] = 326;
        override_function_ids["type(QFileInfo)"] = 327;
        override_function_ids["removeAt(int)"] = 328;
        override_function_ids["widgetEvent(QEvent*)"] = 329;
        override_function_ids["createEditor(QVariant::Type,QWidget*)"] = 330;
        override_function_ids["valuePropertyName(QVariant::Type)"] = 331;
        override_function_ids["spacerItem()"] = 332;
        override_function_ids["widget()"] = 333;
        override_function_ids["clone()"] = 334;
        override_function_ids["data(int)"] = 335;
        override_function_ids["setData(int,QVariant)"] = 336;
        override_function_ids["setData(const char*,uint)"] = 337;
        override_function_ids["setData(QVariant,int)"] = 338;
        override_function_ids["aliases()"] = 339;
        override_function_ids["mibEnum()"] = 340;
        override_function_ids["name()"] = 341;
        override_function_ids["convertFromUnicode(QChar*,int,ConverterState*)"] = 342;
        override_function_ids["convertToUnicode(const char*,int,ConverterState*)"] = 343;
        override_function_ids["data(int,int)"] = 344;
        override_function_ids["setData(int,int,QVariant)"] = 345;
        override_function_ids["id()"] = 346;
        override_function_ids["mergeWith(QUndoCommand*)"] = 347;
        override_function_ids["redo()"] = 348;
        override_function_ids["undo()"] = 349;
        override_arg_types = new const char** [349];
        { static const char* s[] = { "int", 0 }; override_arg_types[0] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[1] = s; }
        { static const char* s[] = { 0, "QAbstractAnimation::Direction", 0 }; override_arg_types[2] = s; }
        { static const char* s[] = { 0, "QAbstractAnimation::State", "QAbstractAnimation::State", 0 }; override_arg_types[3] = s; }
        { static const char* s[] = { 0, "QChildEvent*", 0 }; override_arg_types[4] = s; }
        { static const char* s[] = { 0, "const char*", 0 }; override_arg_types[5] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[6] = s; }
        { static const char* s[] = { 0, "const char*", 0 }; override_arg_types[7] = s; }
        { static const char* s[] = { 0, "QTimerEvent*", 0 }; override_arg_types[8] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[9] = s; }
        { static const char* s[] = { "bool", "QPoint", 0 }; override_arg_types[10] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[11] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[12] = s; }
        { static const char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[13] = s; }
        { static const char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[14] = s; }
        { static const char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[15] = s; }
        { static const char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[16] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[17] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[18] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[19] = s; }
        { static const char* s[] = { 0, "QPaintEvent*", 0 }; override_arg_types[20] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[21] = s; }
        { static const char* s[] = { "QVariant", "Qt::InputMethodQuery", 0 }; override_arg_types[22] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[23] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[24] = s; }
        { static const char* s[] = { 0, "QActionEvent*", 0 }; override_arg_types[25] = s; }
        { static const char* s[] = { 0, "QCloseEvent*", 0 }; override_arg_types[26] = s; }
        { static const char* s[] = { 0, "QContextMenuEvent*", 0 }; override_arg_types[27] = s; }
        { static const char* s[] = { 0, "QDragEnterEvent*", 0 }; override_arg_types[28] = s; }
        { static const char* s[] = { 0, "QDragLeaveEvent*", 0 }; override_arg_types[29] = s; }
        { static const char* s[] = { 0, "QDragMoveEvent*", 0 }; override_arg_types[30] = s; }
        { static const char* s[] = { 0, "QDropEvent*", 0 }; override_arg_types[31] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[32] = s; }
        { static const char* s[] = { "bool", "bool", 0 }; override_arg_types[33] = s; }
        { static const char* s[] = { 0, "QHideEvent*", 0 }; override_arg_types[34] = s; }
        { static const char* s[] = { 0, "QInputMethodEvent*", 0 }; override_arg_types[35] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[36] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[37] = s; }
        { static const char* s[] = { 0, "QMoveEvent*", 0 }; override_arg_types[38] = s; }
        { static const char* s[] = { 0, "QResizeEvent*", 0 }; override_arg_types[39] = s; }
        { static const char* s[] = { 0, "QShowEvent*", 0 }; override_arg_types[40] = s; }
        { static const char* s[] = { 0, "QTabletEvent*", 0 }; override_arg_types[41] = s; }
        { static const char* s[] = { 0, "QWheelEvent*", 0 }; override_arg_types[42] = s; }
        { static const char* s[] = { "int", "PaintDeviceMetric", 0 }; override_arg_types[43] = s; }
        { static const char* s[] = { "QWidget*", "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[44] = s; }
        { static const char* s[] = { "bool", "QEvent*", "QAbstractItemModel*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[45] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[46] = s; }
        { static const char* s[] = { 0, "QWidget*", "QModelIndex", 0 }; override_arg_types[47] = s; }
        { static const char* s[] = { 0, "QWidget*", "QAbstractItemModel*", "QModelIndex", 0 }; override_arg_types[48] = s; }
        { static const char* s[] = { "QSize", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[49] = s; }
        { static const char* s[] = { 0, "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[50] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[51] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[52] = s; }
        { static const char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[53] = s; }
        { static const char* s[] = { "QVariant", "QModelIndex", "int", 0 }; override_arg_types[54] = s; }
        { static const char* s[] = { "bool", "QMimeData*", "Qt::DropAction", "int", "int", "QModelIndex", 0 }; override_arg_types[55] = s; }
        { static const char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[56] = s; }
        { static const char* s[] = { "Qt::ItemFlags", "QModelIndex", 0 }; override_arg_types[57] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[58] = s; }
        { static const char* s[] = { "QVariant", "int", "Qt::Orientation", "int", 0 }; override_arg_types[59] = s; }
        { static const char* s[] = { "QModelIndex", "int", "int", "QModelIndex", 0 }; override_arg_types[60] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[61] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[62] = s; }
        { static const char* s[] = { "QModelIndexList", "QModelIndex", "int", "QVariant", "int", "Qt::MatchFlags", 0 }; override_arg_types[63] = s; }
        { static const char* s[] = { "QMimeData*", "QModelIndexList", 0 }; override_arg_types[64] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[65] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[66] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[67] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[68] = s; }
        { static const char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[69] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "QVariant", "int", 0 }; override_arg_types[70] = s; }
        { static const char* s[] = { "bool", "int", "Qt::Orientation", "QVariant", "int", 0 }; override_arg_types[71] = s; }
        { static const char* s[] = { 0, "int", "Qt::SortOrder", 0 }; override_arg_types[72] = s; }
        { static const char* s[] = { "QSize", "QModelIndex", 0 }; override_arg_types[73] = s; }
        { static const char* s[] = { "Qt::DropActions", 0 }; override_arg_types[74] = s; }
        { static const char* s[] = { "QModelIndex", "QPoint", 0 }; override_arg_types[75] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[76] = s; }
        { static const char* s[] = { 0, "QModelIndex", "ScrollHint", 0 }; override_arg_types[77] = s; }
        { static const char* s[] = { 0, "QAbstractItemModel*", 0 }; override_arg_types[78] = s; }
        { static const char* s[] = { 0, "QItemSelectionModel*", 0 }; override_arg_types[79] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[80] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[81] = s; }
        { static const char* s[] = { "QRect", "QModelIndex", 0 }; override_arg_types[82] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "EditTrigger", "QEvent*", 0 }; override_arg_types[83] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[84] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[85] = s; }
        { static const char* s[] = { "QModelIndex", "CursorAction", "Qt::KeyboardModifiers", 0 }; override_arg_types[86] = s; }
        { static const char* s[] = { "QModelIndexList", 0 }; override_arg_types[87] = s; }
        { static const char* s[] = { "QItemSelectionModel::SelectionFlags", "QModelIndex", "QEvent*", 0 }; override_arg_types[88] = s; }
        { static const char* s[] = { 0, "QRect", "QItemSelectionModel::SelectionFlags", 0 }; override_arg_types[89] = s; }
        { static const char* s[] = { 0, "Qt::DropActions", 0 }; override_arg_types[90] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[91] = s; }
        { static const char* s[] = { "QStyleOptionViewItem", 0 }; override_arg_types[92] = s; }
        { static const char* s[] = { "QRegion", "QItemSelection", 0 }; override_arg_types[93] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[94] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[95] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[96] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[97] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[98] = s; }
        { static const char* s[] = { "QItemSelection", "QItemSelection", 0 }; override_arg_types[99] = s; }
        { static const char* s[] = { "QItemSelection", "QItemSelection", 0 }; override_arg_types[100] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[101] = s; }
        { static const char* s[] = { 0, "QAbstractItemModel*", 0 }; override_arg_types[102] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[103] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[104] = s; }
        { static const char* s[] = { 0, "SliderChange", 0 }; override_arg_types[105] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[106] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[107] = s; }
        { static const char* s[] = { "QValidator::State", "QString", "int", 0 }; override_arg_types[108] = s; }
        { static const char* s[] = { "StepEnabled", 0 }; override_arg_types[109] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[110] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[111] = s; }
        { static const char* s[] = { "QRectF", "QTextBlock", 0 }; override_arg_types[112] = s; }
        { static const char* s[] = { "QSizeF", 0 }; override_arg_types[113] = s; }
        { static const char* s[] = { 0, "QPainter*", "PaintContext", 0 }; override_arg_types[114] = s; }
        { static const char* s[] = { "QRectF", "QTextFrame*", 0 }; override_arg_types[115] = s; }
        { static const char* s[] = { "int", "QPointF", "Qt::HitTestAccuracy", 0 }; override_arg_types[116] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[117] = s; }
        { static const char* s[] = { 0, "int", "int", "int", 0 }; override_arg_types[118] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[119] = s; }
        { static const char* s[] = { 0, "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[120] = s; }
        { static const char* s[] = { 0, "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[121] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[122] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[123] = s; }
        { static const char* s[] = { 0, "QSessionManager", 0 }; override_arg_types[124] = s; }
        { static const char* s[] = { 0, "QSessionManager", 0 }; override_arg_types[125] = s; }
        { static const char* s[] = { "bool", "QObject*", "QEvent*", 0 }; override_arg_types[126] = s; }
        { static const char* s[] = { 0, "QLayoutItem*", 0 }; override_arg_types[127] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[128] = s; }
        { static const char* s[] = { "Qt::Orientations", 0 }; override_arg_types[129] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[130] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[131] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[132] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[133] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[134] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[135] = s; }
        { static const char* s[] = { 0, "QRect", 0 }; override_arg_types[136] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[137] = s; }
        { static const char* s[] = { "int", "QWidget*", 0 }; override_arg_types[138] = s; }
        { static const char* s[] = { "QRect", 0 }; override_arg_types[139] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[140] = s; }
        { static const char* s[] = { "QLayout*", 0 }; override_arg_types[141] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[142] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[143] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[144] = s; }
        { static const char* s[] = { "bool", "OpenMode", 0 }; override_arg_types[145] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[146] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[147] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[148] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[149] = s; }
        { static const char* s[] = { 0, "ControlElement", "QStyleOption*", "QPainter*", "QWidget*", 0 }; override_arg_types[150] = s; }
        { static const char* s[] = { 0, "PrimitiveElement", "QStyleOption*", "QPainter*", "QWidget*", 0 }; override_arg_types[151] = s; }
        { static const char* s[] = { "int", "PixelMetric", "QStyleOption*", "QWidget*", 0 }; override_arg_types[152] = s; }
        { static const char* s[] = { "QPalette", 0 }; override_arg_types[153] = s; }
        { static const char* s[] = { 0, "ComplexControl", "QStyleOptionComplex*", "QPainter*", "QWidget*", 0 }; override_arg_types[154] = s; }
        { static const char* s[] = { 0, "QPalette", 0 }; override_arg_types[155] = s; }
        { static const char* s[] = { "QSize", "ContentsType", "QStyleOption*", "QSize", "QWidget*", 0 }; override_arg_types[156] = s; }
        { static const char* s[] = { "QPixmap", "StandardPixmap", "QStyleOption*", "QWidget*", 0 }; override_arg_types[157] = s; }
        { static const char* s[] = { "int", "StyleHint", "QStyleOption*", "QWidget*", "QStyleHintReturn*", 0 }; override_arg_types[158] = s; }
        { static const char* s[] = { "QRect", "ComplexControl", "QStyleOptionComplex*", "SubControl", "QWidget*", 0 }; override_arg_types[159] = s; }
        { static const char* s[] = { "QRect", "SubElement", "QStyleOption*", "QWidget*", 0 }; override_arg_types[160] = s; }
        { static const char* s[] = { "QPixmap", "QIcon::Mode", "QPixmap", "QStyleOption*", 0 }; override_arg_types[161] = s; }
        { static const char* s[] = { "SubControl", "ComplexControl", "QStyleOptionComplex*", "QPoint", "QWidget*", 0 }; override_arg_types[162] = s; }
        { static const char* s[] = { 0, "QApplication*", 0 }; override_arg_types[163] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[164] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[165] = s; }
        { static const char* s[] = { 0, "QApplication*", 0 }; override_arg_types[166] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", "QPixmap", 0 }; override_arg_types[167] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", "QPalette", "bool", "QString", "QPalette::ColorRole", 0 }; override_arg_types[168] = s; }
        { static const char* s[] = { "QRect", "QRect", "int", "QPixmap", 0 }; override_arg_types[169] = s; }
        { static const char* s[] = { "QRect", "QFontMetrics", "QRect", "int", "bool", "QString", 0 }; override_arg_types[170] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "QDate", 0 }; override_arg_types[171] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[172] = s; }
        { static const char* s[] = { "QAbstractItemView*", "QModelIndex", 0 }; override_arg_types[173] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[174] = s; }
        { static const char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[175] = s; }
        { static const char* s[] = { 0, "QModelIndex", "QModelIndex", 0 }; override_arg_types[176] = s; }
        { static const char* s[] = { 0, "QModelIndex", "int", "int", 0 }; override_arg_types[177] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[178] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[179] = s; }
        { static const char* s[] = { "QString", "QModelIndex", 0 }; override_arg_types[180] = s; }
        { static const char* s[] = { "QStringList", "QString", 0 }; override_arg_types[181] = s; }
        { static const char* s[] = { "QDateTime", "QString", 0 }; override_arg_types[182] = s; }
        { static const char* s[] = { "QString", "QDateTime", 0 }; override_arg_types[183] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[184] = s; }
        { static const char* s[] = { "QString", "double", 0 }; override_arg_types[185] = s; }
        { static const char* s[] = { "double", "QString", 0 }; override_arg_types[186] = s; }
        { static const char* s[] = { 0, "double", "double", "int", 0 }; override_arg_types[187] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[188] = s; }
        { static const char* s[] = { "QRectF", "QRectF", 0 }; override_arg_types[189] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[190] = s; }
        { static const char* s[] = { 0, "ChangeFlags", 0 }; override_arg_types[191] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[192] = s; }
        { static const char* s[] = { 0, "QRectF", 0 }; override_arg_types[193] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[194] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneContextMenuEvent*", 0 }; override_arg_types[195] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[196] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[197] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[198] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[199] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[200] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[201] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[202] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[203] = s; }
        { static const char* s[] = { "QVariant", "GraphicsItemChange", "QVariant", 0 }; override_arg_types[204] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[205] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[206] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[207] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[208] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneResizeEvent*", 0 }; override_arg_types[209] = s; }
        { static const char* s[] = { "QSizeF", "Qt::SizeHint", "QSizeF", 0 }; override_arg_types[210] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[211] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneWheelEvent*", 0 }; override_arg_types[212] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[213] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[214] = s; }
        { static const char* s[] = { 0, "QStyleOption*", 0 }; override_arg_types[215] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMoveEvent*", 0 }; override_arg_types[216] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[217] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[218] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[219] = s; }
        { static const char* s[] = { "Qt::WindowFrameSection", "QPointF", 0 }; override_arg_types[220] = s; }
        { static const char* s[] = { "QRectF", 0 }; override_arg_types[221] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[222] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[223] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[224] = s; }
        { static const char* s[] = { 0, "QMatrix4x4*", 0 }; override_arg_types[225] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[226] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[227] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHelpEvent*", 0 }; override_arg_types[228] = s; }
        { static const char* s[] = { "bool", "QPointF", 0 }; override_arg_types[229] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", 0 }; override_arg_types[230] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[231] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", 0 }; override_arg_types[232] = s; }
        { static const char* s[] = { "QSize", "int", 0 }; override_arg_types[233] = s; }
        { static const char* s[] = { "QList<QAction*>", 0 }; override_arg_types[234] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[235] = s; }
        { static const char* s[] = { "QFont", 0 }; override_arg_types[236] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[237] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[238] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[239] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[240] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[241] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[242] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[243] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "Qt::CheckState", 0 }; override_arg_types[244] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QPixmap", 0 }; override_arg_types[245] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QString", 0 }; override_arg_types[246] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", 0 }; override_arg_types[247] = s; }
        { static const char* s[] = { 0, "QModelIndex", "QModelIndex", 0 }; override_arg_types[248] = s; }
        { static const char* s[] = { 0, "QModelIndex", "int", "int", 0 }; override_arg_types[249] = s; }
        { static const char* s[] = { 0, "QItemSelection", "QItemSelection", 0 }; override_arg_types[250] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[251] = s; }
        { static const char* s[] = { "bool", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[252] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QListWidgetItem*>", 0 }; override_arg_types[253] = s; }
        { static const char* s[] = { "QMenu*", 0 }; override_arg_types[254] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[255] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[256] = s; }
        { static const char* s[] = { "QVariant", "QString", "QVariant::Type", 0 }; override_arg_types[257] = s; }
        { static const char* s[] = { "QVariant", "int", "QUrl", 0 }; override_arg_types[258] = s; }
        { static const char* s[] = { "bool", "QMimeData*", 0 }; override_arg_types[259] = s; }
        { static const char* s[] = { "QMimeData*", 0 }; override_arg_types[260] = s; }
        { static const char* s[] = { 0, "QMimeData*", 0 }; override_arg_types[261] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[262] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[263] = s; }
        { static const char* s[] = { 0, "QVariant", 0 }; override_arg_types[264] = s; }
        { static const char* s[] = { "QVariant", "QVariant", "QVariant", "qreal", 0 }; override_arg_types[265] = s; }
        { static const char* s[] = { "bool", "int", "QModelIndex", 0 }; override_arg_types[266] = s; }
        { static const char* s[] = { "bool", "int", "QModelIndex", 0 }; override_arg_types[267] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "QModelIndex", 0 }; override_arg_types[268] = s; }
        { static const char* s[] = { "QString", "int", 0 }; override_arg_types[269] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[270] = s; }
        { static const char* s[] = { "QString", "QVariant", "QLocale", 0 }; override_arg_types[271] = s; }
        { static const char* s[] = { 0, "QStyleOptionViewItem*", "QModelIndex", 0 }; override_arg_types[272] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[273] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[274] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[275] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[276] = s; }
        { static const char* s[] = { "QSize", "int", 0 }; override_arg_types[277] = s; }
        { static const char* s[] = { "bool", "int", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[278] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTableWidgetItem*>", 0 }; override_arg_types[279] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[280] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[281] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[282] = s; }
        { static const char* s[] = { "QTextObject*", "QTextFormat", 0 }; override_arg_types[283] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[284] = s; }
        { static const char* s[] = { "qreal", "int", 0 }; override_arg_types[285] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[286] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[287] = s; }
        { static const char* s[] = { "QString", "const char*", "const char*", "const char*", 0 }; override_arg_types[288] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "QModelIndex", 0 }; override_arg_types[289] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[290] = s; }
        { static const char* s[] = { "bool", "QTreeWidgetItem*", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[291] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTreeWidgetItem*>", 0 }; override_arg_types[292] = s; }
        { static const char* s[] = { "QWidget*", "QWidget*", 0 }; override_arg_types[293] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[294] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[295] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[296] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[297] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[298] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[299] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[300] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[301] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[302] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[303] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "Qt::ItemSelectionMode", 0 }; override_arg_types[304] = s; }
        { static const char* s[] = { "bool", "QPainterPath", "Qt::ItemSelectionMode", 0 }; override_arg_types[305] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "QEvent*", 0 }; override_arg_types[306] = s; }
        { static const char* s[] = { "QString", "int", "Text", "int", 0 }; override_arg_types[307] = s; }
        { static const char* s[] = { "int", "int", "int", 0 }; override_arg_types[308] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[309] = s; }
        { static const char* s[] = { "bool", "int", "int", "QVariantList", 0 }; override_arg_types[310] = s; }
        { static const char* s[] = { "int", "QAccessibleInterface*", 0 }; override_arg_types[311] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[312] = s; }
        { static const char* s[] = { "QObject*", 0 }; override_arg_types[313] = s; }
        { static const char* s[] = { "QRect", "int", 0 }; override_arg_types[314] = s; }
        { static const char* s[] = { "Relation", "int", "QAccessibleInterface*", "int", 0 }; override_arg_types[315] = s; }
        { static const char* s[] = { "Role", "int", 0 }; override_arg_types[316] = s; }
        { static const char* s[] = { 0, "Text", "int", "QString", 0 }; override_arg_types[317] = s; }
        { static const char* s[] = { "State", "int", 0 }; override_arg_types[318] = s; }
        { static const char* s[] = { "QString", "Text", "int", 0 }; override_arg_types[319] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[320] = s; }
        { static const char* s[] = { "QByteArray", "const char*", 0 }; override_arg_types[321] = s; }
        { static const char* s[] = { "const char*", "int", 0 }; override_arg_types[322] = s; }
        { static const char* s[] = { "bool", "const char*", 0 }; override_arg_types[323] = s; }
        { static const char* s[] = { "QIcon", "IconType", 0 }; override_arg_types[324] = s; }
        { static const char* s[] = { "QIcon", "QFileInfo", 0 }; override_arg_types[325] = s; }
        { static const char* s[] = { "QString", "QFileInfo", 0 }; override_arg_types[326] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[327] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[328] = s; }
        { static const char* s[] = { "QWidget*", "QVariant::Type", "QWidget*", 0 }; override_arg_types[329] = s; }
        { static const char* s[] = { "QByteArray", "QVariant::Type", 0 }; override_arg_types[330] = s; }
        { static const char* s[] = { "QSpacerItem*", 0 }; override_arg_types[331] = s; }
        { static const char* s[] = { "QWidget*", 0 }; override_arg_types[332] = s; }
        { static const char* s[] = { "QListWidgetItem*", 0 }; override_arg_types[333] = s; }
        { static const char* s[] = { "QVariant", "int", 0 }; override_arg_types[334] = s; }
        { static const char* s[] = { 0, "int", "QVariant", 0 }; override_arg_types[335] = s; }
        { static const char* s[] = { 0, "const char*", "uint", 0 }; override_arg_types[336] = s; }
        { static const char* s[] = { 0, "QVariant", "int", 0 }; override_arg_types[337] = s; }
        { static const char* s[] = { "QList<QByteArray>", 0 }; override_arg_types[338] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[339] = s; }
        { static const char* s[] = { "QByteArray", 0 }; override_arg_types[340] = s; }
        { static const char* s[] = { "QByteArray", "QChar*", "int", "ConverterState*", 0 }; override_arg_types[341] = s; }
        { static const char* s[] = { "QString", "const char*", "int", "ConverterState*", 0 }; override_arg_types[342] = s; }
        { static const char* s[] = { "QVariant", "int", "int", 0 }; override_arg_types[343] = s; }
        { static const char* s[] = { 0, "int", "int", "QVariant", 0 }; override_arg_types[344] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[345] = s; }
        { static const char* s[] = { "bool", "QUndoCommand*", 0 }; override_arg_types[346] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[347] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[348] = s; }
        qNames = q_names.keys();
        nNames = n_names.keys(); }}

void* LObjects::overrideFun(uint unique, int id) {
    return override_lisp_functions.value(349 * (quint64)unique + id, 0); }

void LObjects::setOverrideFun(uint unique, int id, void* fun) {
    override_lisp_functions[349 * (quint64)unique + id] = fun; }

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
        case 1: delete (LAbstractGraphicsShapeItem*)p; break;
        case 2: delete (LAccessible*)p; break;
        case 3: delete (LAccessibleEvent*)p; break;
        case 4: delete (LAccessibleInterface*)p; break;
        case 6: delete (LAccessibleWidget*)p; break;
        case 7: delete (LActionEvent*)p; break;
        case 8: delete (LBasicTimer*)p; break;
        case 9: delete (LBitArray*)p; break;
        case 10: delete (LBitmap*)p; break;
        case 11: delete (LBrush*)p; break;
        case 12: delete (LChildEvent*)p; break;
        case 13: delete (LCloseEvent*)p; break;
        case 14: delete (LColor*)p; break;
        case 15: delete (LConicalGradient*)p; break;
        case 16: delete (LContextMenuEvent*)p; break;
        case 17: delete (LCryptographicHash*)p; break;
        case 18: delete (LCursor*)p; break;
        case 19: delete (LDate*)p; break;
        case 20: delete (LDateTime*)p; break;
        case 21: delete (LDesktopServices*)p; break;
        case 22: delete (LDir*)p; break;
        case 23: delete (LDirIterator*)p; break;
        case 24: delete (LDragEnterEvent*)p; break;
        case 25: delete (LDragLeaveEvent*)p; break;
        case 26: delete (LDragMoveEvent*)p; break;
        case 27: delete (LDropEvent*)p; break;
        case 28: delete (LDynamicPropertyChangeEvent*)p; break;
        case 29: delete (LEasingCurve*)p; break;
        case 30: delete (LEvent*)p; break;
        case 31: delete (LFileIconProvider*)p; break;
        case 32: delete (LFileInfo*)p; break;
        case 33: delete (LFileOpenEvent*)p; break;
        case 34: delete (LFocusEvent*)p; break;
        case 35: delete (LFontDatabase*)p; break;
        case 36: delete (LFontMetrics*)p; break;
        case 37: delete (LGestureEvent*)p; break;
        case 38: delete (LGradient*)p; break;
        case 39: delete (LGraphicsAnchorLayout*)p; break;
        case 40: delete (LGraphicsEllipseItem*)p; break;
        case 41: delete (LGraphicsGridLayout*)p; break;
        case 42: delete (LGraphicsItem*)p; break;
        case 43: delete (LGraphicsItemGroup*)p; break;
        case 44: delete (LGraphicsLayout*)p; break;
        case 45: delete (LGraphicsLayoutItem*)p; break;
        case 46: delete (LGraphicsLineItem*)p; break;
        case 47: delete (LGraphicsLinearLayout*)p; break;
        case 48: delete (LGraphicsPathItem*)p; break;
        case 49: delete (LGraphicsPixmapItem*)p; break;
        case 50: delete (LGraphicsPolygonItem*)p; break;
        case 51: delete (LGraphicsRectItem*)p; break;
        case 52: delete (LGraphicsSceneContextMenuEvent*)p; break;
        case 53: delete (LGraphicsSceneDragDropEvent*)p; break;
        case 54: delete (LGraphicsSceneEvent*)p; break;
        case 55: delete (LGraphicsSceneHelpEvent*)p; break;
        case 56: delete (LGraphicsSceneHoverEvent*)p; break;
        case 57: delete (LGraphicsSceneMouseEvent*)p; break;
        case 58: delete (LGraphicsSceneMoveEvent*)p; break;
        case 59: delete (LGraphicsSceneResizeEvent*)p; break;
        case 60: delete (LGraphicsSceneWheelEvent*)p; break;
        case 61: delete (LGraphicsSimpleTextItem*)p; break;
        case 62: delete (LHelpEvent*)p; break;
        case 63: delete (LHideEvent*)p; break;
        case 64: delete (LHoverEvent*)p; break;
        case 65: delete (LIcon*)p; break;
        case 66: delete (LIconDragEvent*)p; break;
        case 67: delete (LImage*)p; break;
        case 68: delete (LInputEvent*)p; break;
        case 69: delete (LInputMethodEvent*)p; break;
        case 70: delete (LItemEditorFactory*)p; break;
        case 71: delete (LItemSelection*)p; break;
        case 72: delete (LItemSelectionRange*)p; break;
        case 73: delete (LKeyEvent*)p; break;
        case 74: delete (LLayoutItem*)p; break;
        case 75: delete (LLibraryInfo*)p; break;
        case 76: delete (LLinearGradient*)p; break;
        case 77: delete (LListWidgetItem*)p; break;
        case 78: delete (LLocale*)p; break;
        case 79: delete (LMargins*)p; break;
        case 80: delete (LMatrix*)p; break;
        case 81: delete (LMatrix4x4*)p; break;
        case 82: delete (LMetaObject*)p; break;
        case 83: delete (LModelIndex*)p; break;
        case 84: delete (LMouseEvent*)p; break;
        case 85: delete (LMoveEvent*)p; break;
        case 86: delete (LMutex*)p; break;
        case 87: delete (LMutexLocker*)p; break;
        case 89: delete (LPaintEvent*)p; break;
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
        case 108: delete (LResizeEvent*)p; break;
        case 109: delete (LRunnable*)p; break;
        case 110: delete (LSemaphore*)p; break;
        case 111: delete (LShortcutEvent*)p; break;
        case 112: delete (LShowEvent*)p; break;
        case 113: delete (LSizePolicy*)p; break;
        case 114: delete (LSpacerItem*)p; break;
        case 115: delete (LStandardItem*)p; break;
        case 116: delete (LStatusTipEvent*)p; break;
        case 117: delete (LSystemSemaphore*)p; break;
        case 118: delete (LTableWidgetItem*)p; break;
        case 119: delete (LTableWidgetSelectionRange*)p; break;
        case 120: delete (LTabletEvent*)p; break;
        case 121: delete (LTextBlock*)p; break;
        case 122: delete (LTextBlockFormat*)p; break;
        case 123: delete (LTextBlockUserData*)p; break;
        case 124: delete (LTextBoundaryFinder*)p; break;
        case 125: delete (LTextCharFormat*)p; break;
        case 126: delete (LTextCodec*)p; break;
        case 127: delete (LTextCursor*)p; break;
        case 128: delete (LTextDecoder*)p; break;
        case 129: delete (LTextDocumentFragment*)p; break;
        case 130: delete (LTextDocumentWriter*)p; break;
        case 131: delete (LTextEncoder*)p; break;
        case 132: delete (LTextFormat*)p; break;
        case 133: delete (LTextFragment*)p; break;
        case 134: delete (LTextFrameFormat*)p; break;
        case 135: delete (LTextImageFormat*)p; break;
        case 136: delete (LTextLayout*)p; break;
        case 137: delete (LTextLength*)p; break;
        case 138: delete (LTextLine*)p; break;
        case 139: delete (LTextListFormat*)p; break;
        case 140: delete (LTextOption*)p; break;
        case 141: delete (LTextTableCell*)p; break;
        case 142: delete (LTextTableCellFormat*)p; break;
        case 143: delete (LTextTableFormat*)p; break;
        case 144: delete (LTime*)p; break;
        case 145: delete (LTimerEvent*)p; break;
        case 146: delete (LToolTip*)p; break;
        case 147: delete (LTouchEvent*)p; break;
        case 148: delete (LTransform*)p; break;
        case 149: delete (LTreeWidgetItem*)p; break;
        case 150: delete (LUndoCommand*)p; break;
        case 151: delete (LUrl*)p; break;
        case 152: delete (LVariant*)p; break;
        case 153: delete (LVector2D*)p; break;
        case 154: delete (LVector3D*)p; break;
        case 155: delete (LVector4D*)p; break;
        case 156: delete (LWaitCondition*)p; break;
        case 157: delete (LWhatsThis*)p; break;
        case 158: delete (LWhatsThisClickedEvent*)p; break;
        case 159: delete (LWheelEvent*)p; break;
        case 160: delete (LWidgetItem*)p; break;
        case 161: delete (LWindowStateChangeEvent*)p; break;
        case 162: delete (LWriteLocker*)p; break; }}

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
        case 125: s = "QTextFormat"; break;
        case 134: s = "QTextFormat"; break;
        case 135: s = "QTextCharFormat"; break;
        case 139: s = "QTextFormat"; break;
        case 142: s = "QTextCharFormat"; break;
        case 143: s = "QTextFrameFormat"; break;
        case 145: s = "QEvent"; break;
        case 147: s = "QInputEvent"; break;
        case 158: s = "QEvent"; break;
        case 159: s = "QInputEvent"; break;
        case 160: s = "QLayoutItem"; break;
        case 161: s = "QEvent"; break; }
    return s; }

StrList LObjects::override(const QByteArray& name) {
    NumList ids;
    int n = q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 1: ids = LAbstractAnimation::overrideIds; break;
            case 2: ids = LAbstractButton::overrideIds; break;
            case 3: ids = LAbstractItemDelegate::overrideIds; break;
            case 4: ids = LAbstractItemModel::overrideIds; break;
            case 5: ids = LAbstractItemView::overrideIds; break;
            case 6: ids = LAbstractListModel::overrideIds; break;
            case 7: ids = LAbstractPrintDialog::overrideIds; break;
            case 8: ids = LAbstractProxyModel::overrideIds; break;
            case 9: ids = LAbstractScrollArea::overrideIds; break;
            case 10: ids = LAbstractSlider::overrideIds; break;
            case 11: ids = LAbstractSpinBox::overrideIds; break;
            case 12: ids = LAbstractState::overrideIds; break;
            case 14: ids = LAbstractTextDocumentLayout::overrideIds; break;
            case 15: ids = LAbstractTransition::overrideIds; break;
            case 16: ids = LAction::overrideIds; break;
            case 17: ids = LActionGroup::overrideIds; break;
            case 18: ids = LAnimationGroup::overrideIds; break;
            case 19: ids = LApplication::overrideIds; break;
            case 20: ids = LBoxLayout::overrideIds; break;
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
            case 34: ids = LCoreApplication::overrideIds; break;
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
            case 50: ids = LFile::overrideIds; break;
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
            case 65: ids = LGraphicsEffect::overrideIds; break;
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
            case 79: ids = LHeaderView::overrideIds; break;
            case 80: ids = LHistoryState::overrideIds; break;
            case 81: ids = LIODevice::overrideIds; break;
            case 82: ids = LInputContext::overrideIds; break;
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
            case 182: ids = LValidator::overrideIds; break;
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
            case 1: ids = LAbstractGraphicsShapeItem::overrideIds; break;
            case 2: ids = LAccessible::overrideIds; break;
            case 3: ids = LAccessibleEvent::overrideIds; break;
            case 4: ids = LAccessibleInterface::overrideIds; break;
            case 6: ids = LAccessibleWidget::overrideIds; break;
            case 7: ids = LActionEvent::overrideIds; break;
            case 8: ids = LBasicTimer::overrideIds; break;
            case 9: ids = LBitArray::overrideIds; break;
            case 10: ids = LBitmap::overrideIds; break;
            case 11: ids = LBrush::overrideIds; break;
            case 12: ids = LChildEvent::overrideIds; break;
            case 13: ids = LCloseEvent::overrideIds; break;
            case 14: ids = LColor::overrideIds; break;
            case 15: ids = LConicalGradient::overrideIds; break;
            case 16: ids = LContextMenuEvent::overrideIds; break;
            case 17: ids = LCryptographicHash::overrideIds; break;
            case 18: ids = LCursor::overrideIds; break;
            case 19: ids = LDate::overrideIds; break;
            case 20: ids = LDateTime::overrideIds; break;
            case 21: ids = LDesktopServices::overrideIds; break;
            case 22: ids = LDir::overrideIds; break;
            case 23: ids = LDirIterator::overrideIds; break;
            case 24: ids = LDragEnterEvent::overrideIds; break;
            case 25: ids = LDragLeaveEvent::overrideIds; break;
            case 26: ids = LDragMoveEvent::overrideIds; break;
            case 27: ids = LDropEvent::overrideIds; break;
            case 28: ids = LDynamicPropertyChangeEvent::overrideIds; break;
            case 29: ids = LEasingCurve::overrideIds; break;
            case 30: ids = LEvent::overrideIds; break;
            case 31: ids = LFileIconProvider::overrideIds; break;
            case 32: ids = LFileInfo::overrideIds; break;
            case 33: ids = LFileOpenEvent::overrideIds; break;
            case 34: ids = LFocusEvent::overrideIds; break;
            case 35: ids = LFontDatabase::overrideIds; break;
            case 36: ids = LFontMetrics::overrideIds; break;
            case 37: ids = LGestureEvent::overrideIds; break;
            case 38: ids = LGradient::overrideIds; break;
            case 39: ids = LGraphicsAnchorLayout::overrideIds; break;
            case 40: ids = LGraphicsEllipseItem::overrideIds; break;
            case 41: ids = LGraphicsGridLayout::overrideIds; break;
            case 42: ids = LGraphicsItem::overrideIds; break;
            case 43: ids = LGraphicsItemGroup::overrideIds; break;
            case 44: ids = LGraphicsLayout::overrideIds; break;
            case 45: ids = LGraphicsLayoutItem::overrideIds; break;
            case 46: ids = LGraphicsLineItem::overrideIds; break;
            case 47: ids = LGraphicsLinearLayout::overrideIds; break;
            case 48: ids = LGraphicsPathItem::overrideIds; break;
            case 49: ids = LGraphicsPixmapItem::overrideIds; break;
            case 50: ids = LGraphicsPolygonItem::overrideIds; break;
            case 51: ids = LGraphicsRectItem::overrideIds; break;
            case 52: ids = LGraphicsSceneContextMenuEvent::overrideIds; break;
            case 53: ids = LGraphicsSceneDragDropEvent::overrideIds; break;
            case 54: ids = LGraphicsSceneEvent::overrideIds; break;
            case 55: ids = LGraphicsSceneHelpEvent::overrideIds; break;
            case 56: ids = LGraphicsSceneHoverEvent::overrideIds; break;
            case 57: ids = LGraphicsSceneMouseEvent::overrideIds; break;
            case 58: ids = LGraphicsSceneMoveEvent::overrideIds; break;
            case 59: ids = LGraphicsSceneResizeEvent::overrideIds; break;
            case 60: ids = LGraphicsSceneWheelEvent::overrideIds; break;
            case 61: ids = LGraphicsSimpleTextItem::overrideIds; break;
            case 62: ids = LHelpEvent::overrideIds; break;
            case 63: ids = LHideEvent::overrideIds; break;
            case 64: ids = LHoverEvent::overrideIds; break;
            case 65: ids = LIcon::overrideIds; break;
            case 66: ids = LIconDragEvent::overrideIds; break;
            case 67: ids = LImage::overrideIds; break;
            case 68: ids = LInputEvent::overrideIds; break;
            case 69: ids = LInputMethodEvent::overrideIds; break;
            case 70: ids = LItemEditorFactory::overrideIds; break;
            case 71: ids = LItemSelection::overrideIds; break;
            case 72: ids = LItemSelectionRange::overrideIds; break;
            case 73: ids = LKeyEvent::overrideIds; break;
            case 74: ids = LLayoutItem::overrideIds; break;
            case 75: ids = LLibraryInfo::overrideIds; break;
            case 76: ids = LLinearGradient::overrideIds; break;
            case 77: ids = LListWidgetItem::overrideIds; break;
            case 78: ids = LLocale::overrideIds; break;
            case 79: ids = LMargins::overrideIds; break;
            case 80: ids = LMatrix::overrideIds; break;
            case 81: ids = LMatrix4x4::overrideIds; break;
            case 82: ids = LMetaObject::overrideIds; break;
            case 83: ids = LModelIndex::overrideIds; break;
            case 84: ids = LMouseEvent::overrideIds; break;
            case 85: ids = LMoveEvent::overrideIds; break;
            case 86: ids = LMutex::overrideIds; break;
            case 87: ids = LMutexLocker::overrideIds; break;
            case 89: ids = LPaintEvent::overrideIds; break;
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
            case 108: ids = LResizeEvent::overrideIds; break;
            case 109: ids = LRunnable::overrideIds; break;
            case 110: ids = LSemaphore::overrideIds; break;
            case 111: ids = LShortcutEvent::overrideIds; break;
            case 112: ids = LShowEvent::overrideIds; break;
            case 113: ids = LSizePolicy::overrideIds; break;
            case 114: ids = LSpacerItem::overrideIds; break;
            case 115: ids = LStandardItem::overrideIds; break;
            case 116: ids = LStatusTipEvent::overrideIds; break;
            case 117: ids = LSystemSemaphore::overrideIds; break;
            case 118: ids = LTableWidgetItem::overrideIds; break;
            case 119: ids = LTableWidgetSelectionRange::overrideIds; break;
            case 120: ids = LTabletEvent::overrideIds; break;
            case 121: ids = LTextBlock::overrideIds; break;
            case 122: ids = LTextBlockFormat::overrideIds; break;
            case 123: ids = LTextBlockUserData::overrideIds; break;
            case 124: ids = LTextBoundaryFinder::overrideIds; break;
            case 125: ids = LTextCharFormat::overrideIds; break;
            case 126: ids = LTextCodec::overrideIds; break;
            case 127: ids = LTextCursor::overrideIds; break;
            case 128: ids = LTextDecoder::overrideIds; break;
            case 129: ids = LTextDocumentFragment::overrideIds; break;
            case 130: ids = LTextDocumentWriter::overrideIds; break;
            case 131: ids = LTextEncoder::overrideIds; break;
            case 132: ids = LTextFormat::overrideIds; break;
            case 133: ids = LTextFragment::overrideIds; break;
            case 134: ids = LTextFrameFormat::overrideIds; break;
            case 135: ids = LTextImageFormat::overrideIds; break;
            case 136: ids = LTextLayout::overrideIds; break;
            case 137: ids = LTextLength::overrideIds; break;
            case 138: ids = LTextLine::overrideIds; break;
            case 139: ids = LTextListFormat::overrideIds; break;
            case 140: ids = LTextOption::overrideIds; break;
            case 141: ids = LTextTableCell::overrideIds; break;
            case 142: ids = LTextTableCellFormat::overrideIds; break;
            case 143: ids = LTextTableFormat::overrideIds; break;
            case 144: ids = LTime::overrideIds; break;
            case 145: ids = LTimerEvent::overrideIds; break;
            case 146: ids = LToolTip::overrideIds; break;
            case 147: ids = LTouchEvent::overrideIds; break;
            case 148: ids = LTransform::overrideIds; break;
            case 149: ids = LTreeWidgetItem::overrideIds; break;
            case 150: ids = LUndoCommand::overrideIds; break;
            case 151: ids = LUrl::overrideIds; break;
            case 152: ids = LVariant::overrideIds; break;
            case 153: ids = LVector2D::overrideIds; break;
            case 154: ids = LVector3D::overrideIds; break;
            case 155: ids = LVector4D::overrideIds; break;
            case 156: ids = LWaitCondition::overrideIds; break;
            case 157: ids = LWhatsThis::overrideIds; break;
            case 158: ids = LWhatsThisClickedEvent::overrideIds; break;
            case 159: ids = LWheelEvent::overrideIds; break;
            case 160: ids = LWidgetItem::overrideIds; break;
            case 161: ids = LWindowStateChangeEvent::overrideIds; break;
            case 162: ids = LWriteLocker::overrideIds; break; }}
    StrList funs;
    Q_FOREACH(int id, ids) {
        const char* ret = override_arg_types[id - 1][0];
        funs << QString("%1 %2")
                .arg(ret ? ret : "void")
                .arg(QString(override_function_ids.key(id))).toAscii(); }
    return funs; }
