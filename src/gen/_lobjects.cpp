// THIS FILE IS GENERATED (see helper/)

#include "_lobjects.h"
#include "_main_q_classes.h"
#include "_main_n_classes.h"
#include "_main_q_methods.h"
#include "_main_n_methods.h"
#include "../dyn_object.h"
#include "../eql.h"

int LObjects::T_QNetworkRequest = -1;
int LObjects::T_GLfloat = -1;
int LObjects::T_GLint = -1;
int LObjects::T_GLuint = -1;

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

StaticMetaObject LObjects::staticMetaObject_help = 0;
StaticMetaObject LObjects::staticMetaObject_network = 0;
StaticMetaObject LObjects::staticMetaObject_opengl = 0;
StaticMetaObject LObjects::staticMetaObject_svg = 0;
DeleteNObject LObjects::deleteNObject_help = 0;
DeleteNObject LObjects::deleteNObject_network = 0;
DeleteNObject LObjects::deleteNObject_opengl = 0;
DeleteNObject LObjects::deleteNObject_svg = 0;
Override LObjects::override_help = 0;
Override LObjects::override_network = 0;
Override LObjects::override_opengl = 0;
Override LObjects::override_svg = 0;
ToMetaArg LObjects::toMetaArg_network = 0;
To_lisp_arg LObjects::to_lisp_arg_network = 0;
ToMetaArg LObjects::toMetaArg_opengl = 0;
To_lisp_arg LObjects::to_lisp_arg_opengl = 0;

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
NumList LAbstractSpinBox::overrideIds = NumList() << 115 << 116 << 117 << 118 << 23 << 24 << 25 << 13 << 27 << 28 << 14 << 15 << 35 << 16 << 17 << 18 << 19 << 20 << 21 << 40 << 41 << 9 << 43;
NumList LAbstractState::overrideIds = NumList() << 119 << 120;
NumList LAbstractTextDocumentLayout::overrideIds = NumList() << 121 << 122 << 123 << 124 << 125 << 126 << 127 << 128 << 129 << 130;
NumList LAbstractTransition::overrideIds = NumList() << 131 << 132;
NumList LAction::overrideIds = NumList();
NumList LActionGroup::overrideIds = NumList();
NumList LAnimationGroup::overrideIds = NumList();
NumList LApplication::overrideIds = NumList() << 133 << 134 << 135;
NumList LBoxLayout::overrideIds = NumList() << 136 << 137 << 138 << 139 << 22 << 140 << 141 << 142 << 143 << 144 << 145 << 25 << 146;
NumList LBuffer::overrideIds = NumList() << 107 << 108 << 109 << 113;
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
NumList LCoreApplication::overrideIds = NumList() << 135;
NumList LDataWidgetMapper::overrideIds = NumList();
NumList LDateEdit::overrideIds = NumList();
NumList LDateTimeEdit::overrideIds = NumList() << 183 << 184 << 185 << 25 << 116 << 115 << 14 << 34 << 16 << 19 << 21 << 118 << 117 << 43;
NumList LDesktopWidget::overrideIds = NumList() << 40;
NumList LDial::overrideIds = NumList() << 24 << 25 << 18 << 19 << 20 << 21 << 40 << 106;
NumList LDialog::overrideIds = NumList() << 24 << 98 << 25 << 27 << 28 << 16 << 40 << 41;
NumList LDialogButtonBox::overrideIds = NumList() << 13;
NumList LDirModel::overrideIds = NumList() << 54 << 55 << 56 << 58 << 59 << 60 << 61 << 65 << 66 << 67 << 70 << 71 << 73 << 75;
NumList LDockWidget::overrideIds = NumList() << 13 << 27 << 21;
NumList LDoubleSpinBox::overrideIds = NumList() << 186 << 187 << 115 << 117;
NumList LDoubleValidator::overrideIds = NumList() << 188 << 117;
NumList LDrag::overrideIds = NumList();
NumList LErrorMessage::overrideIds = NumList() << 13 << 173;
NumList LEventLoop::overrideIds = NumList();
NumList LEventTransition::overrideIds = NumList() << 131 << 132;
NumList LFile::overrideIds = NumList() << 107 << 109 << 110 << 113;
NumList LFileDialog::overrideIds = NumList() << 98 << 189 << 13 << 173;
NumList LFileSystemModel::overrideIds = NumList() << 53 << 54 << 55 << 56 << 57 << 58 << 59 << 60 << 61 << 65 << 66 << 67 << 70 << 71 << 73 << 75 << 9;
NumList LFileSystemWatcher::overrideIds = NumList();
NumList LFinalState::overrideIds = NumList() << 119 << 120;
NumList LFocusFrame::overrideIds = NumList() << 21;
NumList LFontComboBox::overrideIds = NumList() << 25;
NumList LFontDialog::overrideIds = NumList() << 98 << 13 << 173;
NumList LFormLayout::overrideIds = NumList() << 136 << 137 << 138 << 139 << 22 << 140 << 141 << 144 << 145 << 25 << 146;
NumList LFrame::overrideIds = NumList() << 25 << 13 << 21;
NumList LGesture::overrideIds = NumList();
NumList LGraphicsAnchor::overrideIds = NumList();
NumList LGraphicsBlurEffect::overrideIds = NumList() << 199 << 200;
NumList LGraphicsColorizeEffect::overrideIds = NumList() << 200;
NumList LGraphicsDropShadowEffect::overrideIds = NumList() << 199 << 200;
NumList LGraphicsEffect::overrideIds = NumList() << 199 << 200 << 201;
NumList LGraphicsOpacityEffect::overrideIds = NumList() << 200;
NumList LGraphicsProxyWidget::overrideIds = NumList() << 202 << 203 << 204 << 205 << 206 << 207 << 208 << 209 << 14 << 34 << 15 << 210 << 35 << 211 << 212 << 213 << 214 << 16 << 17 << 215 << 216 << 217 << 218 << 219 << 41 << 220 << 221 << 222;
NumList LGraphicsRotation::overrideIds = NumList() << 235;
NumList LGraphicsScale::overrideIds = NumList() << 235;
NumList LGraphicsScene::overrideIds = NumList() << 23 << 205 << 206 << 207 << 208 << 236 << 237 << 209 << 14 << 15 << 238 << 36 << 16 << 17 << 215 << 216 << 217 << 218 << 222;
NumList LGraphicsTextItem::overrideIds = NumList() << 231 << 239 << 240 << 241 << 202 << 232 << 204 << 205 << 206 << 207 << 208 << 209 << 14 << 15 << 211 << 212 << 213 << 36 << 23 << 16 << 17 << 215 << 216 << 217 << 218 << 233;
NumList LGraphicsTransform::overrideIds = NumList() << 235;
NumList LGraphicsView::overrideIds = NumList() << 236 << 237 << 23 << 25 << 28 << 29 << 30 << 31 << 32 << 14 << 34 << 15 << 36 << 16 << 17 << 38 << 18 << 19 << 20 << 21 << 40 << 96 << 41 << 95 << 43;
NumList LGraphicsWidget::overrideIds = NumList() << 223 << 13 << 27 << 34 << 224 << 210 << 35 << 225 << 226 << 227 << 219 << 41 << 228 << 221 << 229 << 230 << 231 << 202 << 203 << 232 << 204 << 14 << 15 << 212 << 213 << 214 << 233 << 220 << 234;
NumList LGridLayout::overrideIds = NumList() << 137 << 138 << 139 << 22 << 140 << 141 << 142 << 143 << 144 << 145 << 25 << 146 << 136;
NumList LGroupBox::overrideIds = NumList() << 24 << 13 << 5 << 14 << 18 << 19 << 20 << 21 << 40;
NumList LHBoxLayout::overrideIds = NumList();
NumList LHeaderView::overrideIds = NumList() << 242 << 243 << 114 << 79 << 25 << 177 << 85 << 38 << 18 << 19 << 20 << 21 << 90 << 92 << 95;
NumList LHistoryState::overrideIds = NumList() << 119 << 120;
NumList LIODevice::overrideIds = NumList() << 107 << 108 << 109 << 110 << 113 << 114 << 111 << 112;
NumList LInputContext::overrideIds = NumList() << 250 << 251 << 252 << 253 << 254 << 255 << 114 << 256 << 257 << 258;
NumList LInputDialog::overrideIds = NumList() << 173 << 24 << 98 << 25;
NumList LIntValidator::overrideIds = NumList() << 259 << 117;
NumList LItemDelegate::overrideIds = NumList() << 260 << 261 << 262 << 263 << 45 << 47 << 48 << 49 << 50 << 51 << 46;
NumList LItemSelectionModel::overrideIds = NumList();
NumList LKeyEventTransition::overrideIds = NumList() << 131 << 132;
NumList LLCDNumber::overrideIds = NumList() << 25 << 21;
NumList LLabel::overrideIds = NumList() << 22 << 24 << 25 << 13 << 28 << 14 << 34 << 15 << 16 << 18 << 19 << 20 << 21;
NumList LLibrary::overrideIds = NumList();
NumList LLineEdit::overrideIds = NumList() << 23 << 24 << 25 << 13 << 28 << 29 << 30 << 31 << 32 << 14 << 15 << 36 << 16 << 38 << 18 << 19 << 20 << 21;
NumList LListView::overrideIds = NumList() << 76 << 78 << 83 << 177 << 246 << 30 << 31 << 32 << 85 << 86 << 18 << 20 << 87 << 21 << 40 << 247 << 178 << 88 << 248 << 90 << 91 << 9 << 249 << 92 << 93 << 94;
NumList LListWidget::overrideIds = NumList() << 264 << 265 << 66 << 75 << 32;
NumList LMainWindow::overrideIds = NumList() << 269 << 28;
NumList LMdiArea::overrideIds = NumList() << 24 << 25 << 5 << 21 << 40 << 96 << 41 << 9 << 95;
NumList LMdiSubWindow::overrideIds = NumList() << 24 << 25 << 13 << 5 << 27 << 28 << 14 << 15 << 35 << 16 << 37 << 38 << 18 << 19 << 20 << 39 << 21 << 40 << 41 << 9;
NumList LMenu::overrideIds = NumList() << 25 << 26 << 13 << 33 << 34 << 35 << 16 << 37 << 18 << 19 << 20 << 21 << 9 << 43;
NumList LMenuBar::overrideIds = NumList() << 22 << 24 << 25 << 26 << 13 << 14 << 15 << 16 << 37 << 18 << 19 << 20 << 21 << 40 << 9;
NumList LMessageBox::overrideIds = NumList() << 98 << 13 << 27 << 16 << 40 << 41;
NumList LMimeData::overrideIds = NumList() << 270 << 271 << 272;
NumList LMotifStyle::overrideIds = NumList() << 155 << 151 << 152 << 153 << 156 << 157 << 154 << 158 << 159 << 160 << 161 << 9;
NumList LMouseEventTransition::overrideIds = NumList() << 131 << 132;
NumList LMovie::overrideIds = NumList();
NumList LObject::overrideIds = NumList() << 5 << 6 << 7 << 8 << 9;
NumList LPageSetupDialog::overrideIds = NumList() << 98;
NumList LPanGesture::overrideIds = NumList();
NumList LParallelAnimationGroup::overrideIds = NumList() << 1 << 2 << 3 << 4;
NumList LPauseAnimation::overrideIds = NumList() << 1 << 2;
NumList LPinchGesture::overrideIds = NumList();
NumList LPlainTextDocumentLayout::overrideIds = NumList() << 121 << 122 << 123 << 124 << 125 << 126 << 127;
NumList LPlainTextEdit::overrideIds = NumList() << 278 << 279 << 280 << 281 << 13 << 28 << 29 << 30 << 31 << 32 << 14 << 34 << 15 << 36 << 23 << 16 << 17 << 38 << 18 << 19 << 20 << 21 << 40 << 96 << 41 << 43;
NumList LPlastiqueStyle::overrideIds = NumList() << 155 << 151 << 152 << 163 << 153 << 165 << 164 << 156 << 157 << 154 << 158 << 159 << 160 << 161 << 166 << 167 << 9;
NumList LPluginLoader::overrideIds = NumList();
NumList LPrintDialog::overrideIds = NumList() << 173 << 97 << 98;
NumList LPrintPreviewDialog::overrideIds = NumList() << 173 << 98;
NumList LPrintPreviewWidget::overrideIds = NumList() << 98;
NumList LProcess::overrideIds = NumList() << 282 << 107 << 108 << 109 << 110 << 111 << 112;
NumList LProgressBar::overrideIds = NumList() << 283 << 24 << 25 << 21;
NumList LProgressDialog::overrideIds = NumList() << 25 << 13 << 27 << 40 << 41;
NumList LPropertyAnimation::overrideIds = NumList() << 284 << 4;
NumList LPushButton::overrideIds = NumList() << 24 << 25 << 14 << 15 << 16 << 21;
NumList LRadioButton::overrideIds = NumList() << 25 << 11 << 18 << 21;
NumList LRegExpValidator::overrideIds = NumList() << 117;
NumList LRubberBand::overrideIds = NumList() << 13 << 39 << 21 << 40 << 41;
NumList LScrollArea::overrideIds = NumList() << 34 << 25 << 40 << 96;
NumList LScrollBar::overrideIds = NumList() << 25 << 28 << 35 << 18 << 19 << 20 << 21 << 106;
NumList LSequentialAnimationGroup::overrideIds = NumList() << 1 << 2 << 3 << 4;
NumList LSettings::overrideIds = NumList();
NumList LShortcut::overrideIds = NumList();
NumList LSignalTransition::overrideIds = NumList() << 131 << 132;
NumList LSizeGrip::overrideIds = NumList() << 98 << 25 << 35 << 18 << 19 << 20 << 39 << 21 << 41;
NumList LSlider::overrideIds = NumList() << 24 << 25 << 18 << 19 << 20 << 21;
NumList LSortFilterProxyModel::overrideIds = NumList() << 286 << 287 << 288 << 52 << 53 << 54 << 55 << 56 << 57 << 58 << 59 << 60 << 61 << 62 << 63 << 99 << 100 << 101 << 102 << 64 << 65 << 66 << 67 << 68 << 69 << 70 << 71 << 72 << 103 << 73 << 74 << 75;
NumList LSound::overrideIds = NumList();
NumList LSpinBox::overrideIds = NumList() << 289 << 187 << 115 << 117;
NumList LSplashScreen::overrideIds = NumList() << 290 << 19;
NumList LSplitter::overrideIds = NumList() << 24 << 25 << 13 << 5 << 40;
NumList LSplitterHandle::overrideIds = NumList() << 25 << 18 << 19 << 20 << 21;
NumList LStackedLayout::overrideIds = NumList() << 136 << 137 << 141 << 144 << 145 << 25 << 146;
NumList LStackedWidget::overrideIds = NumList();
NumList LStandardItemModel::overrideIds = NumList() << 54 << 55 << 56 << 58 << 59 << 60 << 61 << 62 << 63 << 65 << 66 << 67 << 68 << 69 << 70 << 71 << 72 << 73 << 75;
NumList LState::overrideIds = NumList() << 119 << 120;
NumList LStateMachine::overrideIds = NumList() << 119 << 120;
NumList LStatusBar::overrideIds = NumList() << 21 << 40 << 41;
NumList LStringListModel::overrideIds = NumList() << 55 << 58 << 63 << 69 << 70 << 71 << 73 << 75;
NumList LStyledItemDelegate::overrideIds = NumList() << 291 << 292 << 45 << 47 << 48 << 49 << 50 << 51 << 46;
NumList LSwipeGesture::overrideIds = NumList();
NumList LSyntaxHighlighter::overrideIds = NumList() << 293;
NumList LSystemTrayIcon::overrideIds = NumList();
NumList LTabBar::overrideIds = NumList() << 294 << 295 << 296 << 297 << 24 << 25 << 13 << 35 << 16 << 18 << 19 << 20 << 21 << 40 << 41 << 43;
NumList LTabWidget::overrideIds = NumList() << 294 << 296 << 24 << 25 << 13 << 16 << 21 << 40 << 41;
NumList LTableView::overrideIds = NumList() << 76 << 79 << 176 << 80 << 177 << 85 << 86 << 87 << 21 << 88 << 248 << 90 << 81 << 82 << 9 << 249 << 92 << 93;
NumList LTableWidget::overrideIds = NumList() << 298 << 299 << 66 << 75 << 32;
NumList LTapAndHoldGesture::overrideIds = NumList();
NumList LTapGesture::overrideIds = NumList();
NumList LTextBlockGroup::overrideIds = NumList() << 301 << 302 << 303;
NumList LTextBrowser::overrideIds = NumList() << 278 << 34 << 15 << 16 << 18 << 19 << 20 << 21;
NumList LTextDocument::overrideIds = NumList() << 185 << 304 << 278;
NumList LTextEdit::overrideIds = NumList() << 278 << 279 << 280 << 281 << 13 << 28 << 29 << 30 << 31 << 32 << 14 << 34 << 15 << 36 << 23 << 16 << 17 << 38 << 18 << 19 << 20 << 21 << 40 << 96 << 41 << 43;
NumList LTextFrame::overrideIds = NumList();
NumList LTextList::overrideIds = NumList();
NumList LTextObject::overrideIds = NumList();
NumList LTextTable::overrideIds = NumList();
NumList LThread::overrideIds = NumList() << 305;
NumList LThreadPool::overrideIds = NumList();
NumList LTimeEdit::overrideIds = NumList();
NumList LTimeLine::overrideIds = NumList() << 306 << 9;
NumList LTimer::overrideIds = NumList() << 9;
NumList LToolBar::overrideIds = NumList() << 26 << 13 << 5 << 21 << 40;
NumList LToolBox::overrideIds = NumList() << 307 << 308 << 13 << 41;
NumList LToolButton::overrideIds = NumList() << 24 << 25 << 26 << 13 << 33 << 11 << 37 << 19 << 20 << 12 << 21 << 9;
NumList LTranslator::overrideIds = NumList() << 149 << 309;
NumList LTreeView::overrideIds = NumList() << 244 << 245 << 246 << 76 << 77 << 114 << 78 << 175 << 79 << 176 << 80 << 83 << 177 << 31 << 85 << 86 << 16 << 38 << 18 << 19 << 20 << 87 << 21 << 247 << 178 << 96 << 88 << 248 << 90 << 81 << 9 << 249 << 92 << 95 << 94;
NumList LTreeWidget::overrideIds = NumList() << 310 << 311 << 66 << 75 << 80 << 32;
NumList LUndoGroup::overrideIds = NumList();
NumList LUndoStack::overrideIds = NumList();
NumList LUndoView::overrideIds = NumList();
NumList LVBoxLayout::overrideIds = NumList();
NumList LValidator::overrideIds = NumList() << 115 << 117;
NumList LVariantAnimation::overrideIds = NumList() << 285 << 284 << 1 << 2 << 4;
NumList LWidget::overrideIds = NumList() << 22 << 23 << 24 << 25 << 26 << 13 << 27 << 28 << 29 << 30 << 31 << 32 << 33 << 14 << 34 << 15 << 35 << 36 << 16 << 17 << 37 << 38 << 18 << 19 << 20 << 39 << 21 << 40 << 41 << 42 << 43 << 44;
NumList LWidgetAction::overrideIds = NumList() << 312 << 313;
NumList LWindowsStyle::overrideIds = NumList() << 155 << 151 << 152 << 153 << 164 << 165 << 156 << 157 << 158 << 159 << 161 << 167 << 166 << 9;
NumList LWizard::overrideIds = NumList() << 314 << 315 << 316 << 317 << 98 << 25 << 173 << 21 << 40;
NumList LWizardPage::overrideIds = NumList() << 318 << 319 << 320 << 314 << 321;
NumList LWorkspace::overrideIds = NumList() << 25 << 13 << 5 << 35 << 21 << 40 << 41 << 43;
NumList LAbstractGraphicsShapeItem::overrideIds = NumList() << 240 << 241;
NumList LAccessible::overrideIds = NumList();
NumList LAccessibleEvent::overrideIds = NumList();
NumList LAccessibleInterface::overrideIds = NumList() << 326 << 327 << 328 << 329 << 330 << 331 << 332 << 333 << 334 << 335 << 336 << 337 << 338 << 339;
NumList LAccessibleWidget::overrideIds = NumList() << 326 << 327 << 328 << 329 << 330 << 333 << 334 << 335 << 337 << 338 << 339;
NumList LActionEvent::overrideIds = NumList();
NumList LBasicTimer::overrideIds = NumList();
NumList LBitArray::overrideIds = NumList();
NumList LBitmap::overrideIds = NumList();
NumList LBrush::overrideIds = NumList();
NumList LChildEvent::overrideIds = NumList();
NumList LCloseEvent::overrideIds = NumList();
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
NumList LDropEvent::overrideIds = NumList() << 340 << 341 << 342;
NumList LDynamicPropertyChangeEvent::overrideIds = NumList();
NumList LEasingCurve::overrideIds = NumList();
NumList LEvent::overrideIds = NumList();
NumList LFileIconProvider::overrideIds = NumList() << 343 << 344 << 345;
NumList LFileInfo::overrideIds = NumList();
NumList LFileOpenEvent::overrideIds = NumList();
NumList LFocusEvent::overrideIds = NumList();
NumList LFont::overrideIds = NumList();
NumList LFontDatabase::overrideIds = NumList();
NumList LFontMetrics::overrideIds = NumList();
NumList LGestureEvent::overrideIds = NumList();
NumList LGradient::overrideIds = NumList();
NumList LGraphicsAnchorLayout::overrideIds = NumList() << 137 << 140 << 141 << 351 << 203 << 220;
NumList LGraphicsEllipseItem::overrideIds = NumList() << 231 << 239 << 240 << 241 << 202 << 232 << 204;
NumList LGraphicsGridLayout::overrideIds = NumList() << 137 << 140 << 141 << 351 << 203 << 220;
NumList LGraphicsItem::overrideIds = NumList() << 322 << 231 << 323 << 324 << 239 << 240 << 241 << 202 << 232 << 204 << 205 << 206 << 207 << 208 << 209 << 14 << 15 << 211 << 212 << 213 << 36 << 23 << 214 << 16 << 17 << 215 << 216 << 217 << 218 << 233 << 325 << 222;
NumList LGraphicsItemGroup::overrideIds = NumList() << 231 << 240 << 241 << 202 << 204;
NumList LGraphicsLayout::overrideIds = NumList() << 137 << 140 << 141 << 351 << 352 << 234;
NumList LGraphicsLayoutItem::overrideIds = NumList() << 203 << 234 << 220;
NumList LGraphicsLineItem::overrideIds = NumList() << 231 << 239 << 240 << 241 << 202 << 232 << 204;
NumList LGraphicsLinearLayout::overrideIds = NumList() << 137 << 140 << 141 << 351 << 203 << 220;
NumList LGraphicsPathItem::overrideIds = NumList() << 231 << 239 << 240 << 241 << 202 << 232 << 204;
NumList LGraphicsPixmapItem::overrideIds = NumList() << 231 << 239 << 240 << 241 << 202 << 232 << 204;
NumList LGraphicsPolygonItem::overrideIds = NumList() << 231 << 239 << 240 << 241 << 202 << 232 << 204;
NumList LGraphicsRectItem::overrideIds = NumList() << 231 << 239 << 240 << 241 << 202 << 232 << 204;
NumList LGraphicsSceneContextMenuEvent::overrideIds = NumList();
NumList LGraphicsSceneDragDropEvent::overrideIds = NumList();
NumList LGraphicsSceneEvent::overrideIds = NumList();
NumList LGraphicsSceneHelpEvent::overrideIds = NumList();
NumList LGraphicsSceneHoverEvent::overrideIds = NumList();
NumList LGraphicsSceneMouseEvent::overrideIds = NumList();
NumList LGraphicsSceneMoveEvent::overrideIds = NumList();
NumList LGraphicsSceneResizeEvent::overrideIds = NumList();
NumList LGraphicsSceneWheelEvent::overrideIds = NumList();
NumList LGraphicsSimpleTextItem::overrideIds = NumList() << 231 << 239 << 240 << 241 << 202 << 232 << 204;
NumList LHelpEvent::overrideIds = NumList();
NumList LHideEvent::overrideIds = NumList();
NumList LHoverEvent::overrideIds = NumList();
NumList LIcon::overrideIds = NumList();
NumList LIconDragEvent::overrideIds = NumList();
NumList LImage::overrideIds = NumList();
NumList LInputEvent::overrideIds = NumList();
NumList LInputMethodEvent::overrideIds = NumList();
NumList LItemEditorFactory::overrideIds = NumList() << 353 << 354;
NumList LItemSelection::overrideIds = NumList();
NumList LItemSelectionRange::overrideIds = NumList();
NumList LKeyEvent::overrideIds = NumList();
NumList LLayoutItem::overrideIds = NumList() << 138 << 148 << 139 << 22 << 140 << 149 << 150 << 142 << 143 << 144 << 145 << 25 << 355 << 356;
NumList LLibraryInfo::overrideIds = NumList();
NumList LLinearGradient::overrideIds = NumList();
NumList LListWidgetItem::overrideIds = NumList() << 357 << 358 << 359;
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
NumList LPicture::overrideIds = NumList() << 361;
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
NumList LRunnable::overrideIds = NumList() << 305;
NumList LSemaphore::overrideIds = NumList();
NumList LShortcutEvent::overrideIds = NumList();
NumList LShowEvent::overrideIds = NumList();
NumList LSizePolicy::overrideIds = NumList();
NumList LSpacerItem::overrideIds = NumList() << 138 << 148 << 149 << 142 << 144 << 145 << 25 << 355;
NumList LStandardItem::overrideIds = NumList() << 357 << 358 << 362 << 204;
NumList LStatusTipEvent::overrideIds = NumList();
NumList LSystemSemaphore::overrideIds = NumList();
NumList LTableWidgetItem::overrideIds = NumList() << 357 << 358 << 359;
NumList LTableWidgetSelectionRange::overrideIds = NumList();
NumList LTabletEvent::overrideIds = NumList();
NumList LTextBlock::overrideIds = NumList();
NumList LTextBlockFormat::overrideIds = NumList();
NumList LTextBlockUserData::overrideIds = NumList();
NumList LTextBoundaryFinder::overrideIds = NumList();
NumList LTextCharFormat::overrideIds = NumList();
NumList LTextCodec::overrideIds = NumList() << 364 << 365 << 366 << 367 << 368;
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
NumList LTreeWidgetItem::overrideIds = NumList() << 357 << 369 << 370;
NumList LUndoCommand::overrideIds = NumList() << 371 << 372 << 373 << 374;
NumList LUrl::overrideIds = NumList();
NumList LVariant::overrideIds = NumList();
NumList LVector2D::overrideIds = NumList();
NumList LVector3D::overrideIds = NumList();
NumList LVector4D::overrideIds = NumList();
NumList LWaitCondition::overrideIds = NumList();
NumList LWhatsThis::overrideIds = NumList();
NumList LWhatsThisClickedEvent::overrideIds = NumList();
NumList LWheelEvent::overrideIds = NumList();
NumList LWidgetItem::overrideIds = NumList() << 138 << 148 << 139 << 22 << 149 << 142 << 144 << 145 << 25 << 356;
NumList LWindowStateChangeEvent::overrideIds = NumList();
NumList LWriteLocker::overrideIds = NumList();

void LObjects::ini(EQL* e) {
    static bool ok = false;
    if(!ok) {
        ok = true;
        eql = e;
        dynObject = new DynObject;
        Q = new QObject* [215]; for(int i = 0; i < 215; ++i) { Q[i] = 0; }
        N = new QObject* [189]; for(int i = 0; i < 189; ++i) { N[i] = 0; }
        Q[0] = new Q1;
        Q[1] = new Q2;
        Q[2] = new Q3;
        Q[3] = new Q4;
        Q[4] = new Q5;
        Q[5] = new Q6;
        Q[7] = new Q8;
        Q[8] = new Q9;
        Q[9] = new Q10;
        Q[10] = new Q11;
        Q[12] = new Q13;
        Q[13] = new Q14;
        Q[14] = new Q15;
        Q[15] = new Q16;
        Q[16] = new Q17;
        Q[17] = new Q18;
        Q[18] = new Q19;
        Q[19] = new Q20;
        Q[20] = new Q21;
        Q[21] = new Q22;
        Q[22] = new Q23;
        Q[23] = new Q24;
        Q[24] = new Q25;
        Q[25] = new Q26;
        Q[26] = new Q27;
        Q[27] = new Q28;
        Q[28] = new Q29;
        Q[29] = new Q30;
        Q[30] = new Q31;
        Q[31] = new Q32;
        Q[32] = new Q33;
        Q[33] = new Q34;
        Q[34] = new Q35;
        Q[35] = new Q36;
        Q[36] = new Q37;
        Q[37] = new Q38;
        Q[38] = new Q39;
        Q[39] = new Q40;
        Q[40] = new Q41;
        Q[41] = new Q42;
        Q[42] = new Q43;
        Q[43] = new Q44;
        Q[44] = new Q45;
        Q[45] = new Q46;
        Q[46] = new Q47;
        Q[47] = new Q48;
        Q[48] = new Q49;
        Q[49] = new Q50;
        Q[50] = new Q51;
        Q[51] = new Q52;
        Q[52] = new Q53;
        Q[53] = new Q54;
        Q[54] = new Q55;
        Q[55] = new Q56;
        Q[56] = new Q57;
        Q[57] = new Q58;
        Q[58] = new Q59;
        Q[59] = new Q60;
        Q[60] = new Q61;
        Q[65] = new Q66;
        Q[66] = new Q67;
        Q[67] = new Q68;
        Q[68] = new Q69;
        Q[69] = new Q70;
        Q[70] = new Q71;
        Q[71] = new Q72;
        Q[72] = new Q73;
        Q[73] = new Q74;
        Q[74] = new Q75;
        Q[75] = new Q76;
        Q[76] = new Q77;
        Q[78] = new Q79;
        Q[79] = new Q80;
        Q[80] = new Q81;
        Q[81] = new Q82;
        Q[82] = new Q83;
        Q[83] = new Q84;
        Q[84] = new Q85;
        Q[85] = new Q86;
        Q[94] = new Q95;
        Q[95] = new Q96;
        Q[96] = new Q97;
        Q[97] = new Q98;
        Q[98] = new Q99;
        Q[99] = new Q100;
        Q[100] = new Q101;
        Q[101] = new Q102;
        Q[102] = new Q103;
        Q[103] = new Q104;
        Q[104] = new Q105;
        Q[105] = new Q106;
        Q[106] = new Q107;
        Q[107] = new Q108;
        Q[108] = new Q109;
        Q[111] = new Q112;
        Q[112] = new Q113;
        Q[113] = new Q114;
        Q[114] = new Q115;
        Q[115] = new Q116;
        Q[116] = new Q117;
        Q[117] = new Q118;
        Q[118] = new Q119;
        Q[119] = new Q120;
        Q[120] = new Q121;
        Q[125] = new Q126;
        Q[126] = new Q127;
        Q[127] = new Q128;
        Q[128] = new Q129;
        Q[129] = new Q130;
        Q[130] = new Q131;
        Q[131] = new Q132;
        Q[132] = new Q133;
        Q[133] = new Q134;
        Q[134] = new Q135;
        Q[135] = new Q136;
        Q[136] = new Q137;
        Q[137] = new Q138;
        Q[138] = new Q139;
        Q[139] = new Q140;
        Q[140] = new Q141;
        Q[141] = new Q142;
        Q[142] = new Q143;
        Q[143] = new Q144;
        Q[144] = new Q145;
        Q[145] = new Q146;
        Q[146] = new Q147;
        Q[147] = new Q148;
        Q[148] = new Q149;
        Q[149] = new Q150;
        Q[150] = new Q151;
        Q[151] = new Q152;
        Q[152] = new Q153;
        Q[153] = new Q154;
        Q[154] = new Q155;
        Q[155] = new Q156;
        Q[156] = new Q157;
        Q[157] = new Q158;
        Q[158] = new Q159;
        Q[159] = new Q160;
        Q[160] = new Q161;
        Q[161] = new Q162;
        Q[162] = new Q163;
        Q[163] = new Q164;
        Q[164] = new Q165;
        Q[165] = new Q166;
        Q[166] = new Q167;
        Q[167] = new Q168;
        Q[168] = new Q169;
        Q[169] = new Q170;
        Q[172] = new Q173;
        Q[173] = new Q174;
        Q[174] = new Q175;
        Q[175] = new Q176;
        Q[176] = new Q177;
        Q[177] = new Q178;
        Q[178] = new Q179;
        Q[179] = new Q180;
        Q[180] = new Q181;
        Q[183] = new Q184;
        Q[184] = new Q185;
        Q[185] = new Q186;
        Q[186] = new Q187;
        Q[187] = new Q188;
        Q[188] = new Q189;
        Q[189] = new Q190;
        Q[190] = new Q191;
        Q[191] = new Q192;
        Q[192] = new Q193;
        Q[193] = new Q194;
        Q[194] = new Q195;
        Q[195] = new Q196;
        Q[196] = new Q197;
        Q[197] = new Q198;
        Q[198] = new Q199;
        Q[199] = new Q200;
        Q[200] = new Q201;
        Q[201] = new Q202;
        Q[203] = new Q204;
        Q[204] = new Q205;
        Q[205] = new Q206;
        Q[206] = new Q207;
        Q[207] = new Q208;
        Q[208] = new Q209;
        Q[209] = new Q210;
        Q[210] = new Q211;
        Q[211] = new Q212;
        Q[212] = new Q213;
        Q[213] = new Q214;
        Q[214] = new Q215;
        N[0] = new N1;
        N[1] = new N2;
        N[2] = new N3;
        N[3] = new N4;
        N[4] = new N5;
        N[5] = new N6;
        N[6] = new N7;
        N[8] = new N9;
        N[9] = new N10;
        N[10] = new N11;
        N[11] = new N12;
        N[12] = new N13;
        N[13] = new N14;
        N[14] = new N15;
        N[15] = new N16;
        N[16] = new N17;
        N[17] = new N18;
        N[18] = new N19;
        N[19] = new N20;
        N[20] = new N21;
        N[21] = new N22;
        N[22] = new N23;
        N[23] = new N24;
        N[24] = new N25;
        N[25] = new N26;
        N[26] = new N27;
        N[27] = new N28;
        N[28] = new N29;
        N[29] = new N30;
        N[30] = new N31;
        N[31] = new N32;
        N[32] = new N33;
        N[33] = new N34;
        N[34] = new N35;
        N[35] = new N36;
        N[36] = new N37;
        N[37] = new N38;
        N[44] = new N45;
        N[45] = new N46;
        N[46] = new N47;
        N[47] = new N48;
        N[48] = new N49;
        N[49] = new N50;
        N[50] = new N51;
        N[51] = new N52;
        N[52] = new N53;
        N[53] = new N54;
        N[54] = new N55;
        N[55] = new N56;
        N[56] = new N57;
        N[57] = new N58;
        N[58] = new N59;
        N[59] = new N60;
        N[60] = new N61;
        N[61] = new N62;
        N[62] = new N63;
        N[63] = new N64;
        N[64] = new N65;
        N[65] = new N66;
        N[66] = new N67;
        N[67] = new N68;
        N[68] = new N69;
        N[70] = new N71;
        N[72] = new N73;
        N[75] = new N76;
        N[76] = new N77;
        N[77] = new N78;
        N[78] = new N79;
        N[79] = new N80;
        N[80] = new N81;
        N[81] = new N82;
        N[82] = new N83;
        N[83] = new N84;
        N[84] = new N85;
        N[85] = new N86;
        N[86] = new N87;
        N[87] = new N88;
        N[88] = new N89;
        N[89] = new N90;
        N[90] = new N91;
        N[91] = new N92;
        N[92] = new N93;
        N[93] = new N94;
        N[94] = new N95;
        N[95] = new N96;
        N[96] = new N97;
        N[97] = new N98;
        N[98] = new N99;
        N[107] = new N108;
        N[108] = new N109;
        N[109] = new N110;
        N[110] = new N111;
        N[111] = new N112;
        N[112] = new N113;
        N[113] = new N114;
        N[114] = new N115;
        N[115] = new N116;
        N[116] = new N117;
        N[117] = new N118;
        N[118] = new N119;
        N[119] = new N120;
        N[120] = new N121;
        N[121] = new N122;
        N[122] = new N123;
        N[123] = new N124;
        N[124] = new N125;
        N[125] = new N126;
        N[126] = new N127;
        N[127] = new N128;
        N[128] = new N129;
        N[129] = new N130;
        N[130] = new N131;
        N[131] = new N132;
        N[132] = new N133;
        N[133] = new N134;
        N[139] = new N140;
        N[140] = new N141;
        N[142] = new N143;
        N[143] = new N144;
        N[144] = new N145;
        N[145] = new N146;
        N[146] = new N147;
        N[147] = new N148;
        N[148] = new N149;
        N[149] = new N150;
        N[150] = new N151;
        N[151] = new N152;
        N[152] = new N153;
        N[153] = new N154;
        N[154] = new N155;
        N[155] = new N156;
        N[156] = new N157;
        N[157] = new N158;
        N[158] = new N159;
        N[159] = new N160;
        N[160] = new N161;
        N[161] = new N162;
        N[162] = new N163;
        N[163] = new N164;
        N[164] = new N165;
        N[165] = new N166;
        N[166] = new N167;
        N[167] = new N168;
        N[168] = new N169;
        N[169] = new N170;
        N[170] = new N171;
        N[171] = new N172;
        N[172] = new N173;
        N[173] = new N174;
        N[174] = new N175;
        N[175] = new N176;
        N[176] = new N177;
        N[178] = new N179;
        N[179] = new N180;
        N[180] = new N181;
        N[181] = new N182;
        N[182] = new N183;
        N[183] = new N184;
        N[184] = new N185;
        N[185] = new N186;
        N[186] = new N187;
        N[187] = new N188;
        N[188] = new N189;
        q_names["QAbstractAnimation"] = 1;
        q_names["QAbstractButton"] = 2;
        q_names["QAbstractItemDelegate"] = 3;
        q_names["QAbstractItemModel"] = 4;
        q_names["QAbstractItemView"] = 5;
        q_names["QAbstractListModel"] = 6;
        q_names["QAbstractNetworkCache"] = 7;
        q_names["QAbstractPrintDialog"] = 8;
        q_names["QAbstractProxyModel"] = 9;
        q_names["QAbstractScrollArea"] = 10;
        q_names["QAbstractSlider"] = 11;
        q_names["QAbstractSocket"] = 12;
        q_names["QAbstractSpinBox"] = 13;
        q_names["QAbstractState"] = 14;
        q_names["QAbstractTableModel"] = 15;
        q_names["QAbstractTextDocumentLayout"] = 16;
        q_names["QAbstractTransition"] = 17;
        q_names["QAction"] = 18;
        q_names["QActionGroup"] = 19;
        q_names["QAnimationGroup"] = 20;
        q_names["QApplication"] = 21;
        q_names["QBoxLayout"] = 22;
        q_names["QBuffer"] = 23;
        q_names["QButtonGroup"] = 24;
        q_names["QCDEStyle"] = 25;
        q_names["QCalendarWidget"] = 26;
        q_names["QCheckBox"] = 27;
        q_names["QCleanlooksStyle"] = 28;
        q_names["QClipboard"] = 29;
        q_names["QColorDialog"] = 30;
        q_names["QColumnView"] = 31;
        q_names["QComboBox"] = 32;
        q_names["QCommandLinkButton"] = 33;
        q_names["QCommonStyle"] = 34;
        q_names["QCompleter"] = 35;
        q_names["QCoreApplication"] = 36;
        q_names["QDataWidgetMapper"] = 37;
        q_names["QDateEdit"] = 38;
        q_names["QDateTimeEdit"] = 39;
        q_names["QDesktopWidget"] = 40;
        q_names["QDial"] = 41;
        q_names["QDialog"] = 42;
        q_names["QDialogButtonBox"] = 43;
        q_names["QDirModel"] = 44;
        q_names["QDockWidget"] = 45;
        q_names["QDoubleSpinBox"] = 46;
        q_names["QDoubleValidator"] = 47;
        q_names["QDrag"] = 48;
        q_names["QErrorMessage"] = 49;
        q_names["QEventLoop"] = 50;
        q_names["QEventTransition"] = 51;
        q_names["QFile"] = 52;
        q_names["QFileDialog"] = 53;
        q_names["QFileSystemModel"] = 54;
        q_names["QFileSystemWatcher"] = 55;
        q_names["QFinalState"] = 56;
        q_names["QFocusFrame"] = 57;
        q_names["QFontComboBox"] = 58;
        q_names["QFontDialog"] = 59;
        q_names["QFormLayout"] = 60;
        q_names["QFrame"] = 61;
        q_names["QFtp"] = 62;
        q_names["QGLShader"] = 63;
        q_names["QGLShaderProgram"] = 64;
        q_names["QGLWidget"] = 65;
        q_names["QGesture"] = 66;
        q_names["QGraphicsAnchor"] = 67;
        q_names["QGraphicsBlurEffect"] = 68;
        q_names["QGraphicsColorizeEffect"] = 69;
        q_names["QGraphicsDropShadowEffect"] = 70;
        q_names["QGraphicsEffect"] = 71;
        q_names["QGraphicsObject"] = 72;
        q_names["QGraphicsOpacityEffect"] = 73;
        q_names["QGraphicsProxyWidget"] = 74;
        q_names["QGraphicsRotation"] = 75;
        q_names["QGraphicsScale"] = 76;
        q_names["QGraphicsScene"] = 77;
        q_names["QGraphicsSvgItem"] = 78;
        q_names["QGraphicsTextItem"] = 79;
        q_names["QGraphicsTransform"] = 80;
        q_names["QGraphicsView"] = 81;
        q_names["QGraphicsWidget"] = 82;
        q_names["QGridLayout"] = 83;
        q_names["QGroupBox"] = 84;
        q_names["QHBoxLayout"] = 85;
        q_names["QHeaderView"] = 86;
        q_names["QHelpContentModel"] = 87;
        q_names["QHelpContentWidget"] = 88;
        q_names["QHelpEngineCore"] = 89;
        q_names["QHelpIndexModel"] = 90;
        q_names["QHelpIndexWidget"] = 91;
        q_names["QHelpSearchEngine"] = 92;
        q_names["QHelpSearchQueryWidget"] = 93;
        q_names["QHelpSearchResultWidget"] = 94;
        q_names["QHistoryState"] = 95;
        q_names["QIODevice"] = 96;
        q_names["QInputContext"] = 97;
        q_names["QInputDialog"] = 98;
        q_names["QIntValidator"] = 99;
        q_names["QItemDelegate"] = 100;
        q_names["QItemSelectionModel"] = 101;
        q_names["QKeyEventTransition"] = 102;
        q_names["QLCDNumber"] = 103;
        q_names["QLabel"] = 104;
        q_names["QLayout"] = 105;
        q_names["QLibrary"] = 106;
        q_names["QLineEdit"] = 107;
        q_names["QListView"] = 108;
        q_names["QListWidget"] = 109;
        q_names["QLocalServer"] = 110;
        q_names["QLocalSocket"] = 111;
        q_names["QMainWindow"] = 112;
        q_names["QMdiArea"] = 113;
        q_names["QMdiSubWindow"] = 114;
        q_names["QMenu"] = 115;
        q_names["QMenuBar"] = 116;
        q_names["QMessageBox"] = 117;
        q_names["QMimeData"] = 118;
        q_names["QMotifStyle"] = 119;
        q_names["QMouseEventTransition"] = 120;
        q_names["QMovie"] = 121;
        q_names["QNetworkAccessManager"] = 122;
        q_names["QNetworkCookieJar"] = 123;
        q_names["QNetworkDiskCache"] = 124;
        q_names["QNetworkReply"] = 125;
        q_names["QObject"] = 126;
        q_names["QPageSetupDialog"] = 127;
        q_names["QPanGesture"] = 128;
        q_names["QParallelAnimationGroup"] = 129;
        q_names["QPauseAnimation"] = 130;
        q_names["QPinchGesture"] = 131;
        q_names["QPlainTextDocumentLayout"] = 132;
        q_names["QPlainTextEdit"] = 133;
        q_names["QPlastiqueStyle"] = 134;
        q_names["QPluginLoader"] = 135;
        q_names["QPrintDialog"] = 136;
        q_names["QPrintPreviewDialog"] = 137;
        q_names["QPrintPreviewWidget"] = 138;
        q_names["QProcess"] = 139;
        q_names["QProgressBar"] = 140;
        q_names["QProgressDialog"] = 141;
        q_names["QPropertyAnimation"] = 142;
        q_names["QPushButton"] = 143;
        q_names["QRadioButton"] = 144;
        q_names["QRegExpValidator"] = 145;
        q_names["QRubberBand"] = 146;
        q_names["QScrollArea"] = 147;
        q_names["QScrollBar"] = 148;
        q_names["QSequentialAnimationGroup"] = 149;
        q_names["QSessionManager"] = 150;
        q_names["QSettings"] = 151;
        q_names["QShortcut"] = 152;
        q_names["QSignalTransition"] = 153;
        q_names["QSizeGrip"] = 154;
        q_names["QSlider"] = 155;
        q_names["QSortFilterProxyModel"] = 156;
        q_names["QSound"] = 157;
        q_names["QSpinBox"] = 158;
        q_names["QSplashScreen"] = 159;
        q_names["QSplitter"] = 160;
        q_names["QSplitterHandle"] = 161;
        q_names["QStackedLayout"] = 162;
        q_names["QStackedWidget"] = 163;
        q_names["QStandardItemModel"] = 164;
        q_names["QState"] = 165;
        q_names["QStateMachine"] = 166;
        q_names["QStatusBar"] = 167;
        q_names["QStringListModel"] = 168;
        q_names["QStyle"] = 169;
        q_names["QStyledItemDelegate"] = 170;
        q_names["QSvgRenderer"] = 171;
        q_names["QSvgWidget"] = 172;
        q_names["QSwipeGesture"] = 173;
        q_names["QSyntaxHighlighter"] = 174;
        q_names["QSystemTrayIcon"] = 175;
        q_names["QTabBar"] = 176;
        q_names["QTabWidget"] = 177;
        q_names["QTableView"] = 178;
        q_names["QTableWidget"] = 179;
        q_names["QTapAndHoldGesture"] = 180;
        q_names["QTapGesture"] = 181;
        q_names["QTcpServer"] = 182;
        q_names["QTcpSocket"] = 183;
        q_names["QTextBlockGroup"] = 184;
        q_names["QTextBrowser"] = 185;
        q_names["QTextDocument"] = 186;
        q_names["QTextEdit"] = 187;
        q_names["QTextFrame"] = 188;
        q_names["QTextList"] = 189;
        q_names["QTextObject"] = 190;
        q_names["QTextTable"] = 191;
        q_names["QThread"] = 192;
        q_names["QThreadPool"] = 193;
        q_names["QTimeEdit"] = 194;
        q_names["QTimeLine"] = 195;
        q_names["QTimer"] = 196;
        q_names["QToolBar"] = 197;
        q_names["QToolBox"] = 198;
        q_names["QToolButton"] = 199;
        q_names["QTranslator"] = 200;
        q_names["QTreeView"] = 201;
        q_names["QTreeWidget"] = 202;
        q_names["QUdpSocket"] = 203;
        q_names["QUndoGroup"] = 204;
        q_names["QUndoStack"] = 205;
        q_names["QUndoView"] = 206;
        q_names["QVBoxLayout"] = 207;
        q_names["QValidator"] = 208;
        q_names["QVariantAnimation"] = 209;
        q_names["QWidget"] = 210;
        q_names["QWidgetAction"] = 211;
        q_names["QWindowsStyle"] = 212;
        q_names["QWizard"] = 213;
        q_names["QWizardPage"] = 214;
        q_names["QWorkspace"] = 215;
        n_names["QAbstractGraphicsShapeItem"] = 1;
        n_names["QAccessible"] = 2;
        n_names["QAccessibleEvent"] = 3;
        n_names["QAccessibleInterface"] = 4;
        n_names["QAccessibleObject"] = 5;
        n_names["QAccessibleWidget"] = 6;
        n_names["QActionEvent"] = 7;
        n_names["QAuthenticator"] = 8;
        n_names["QBasicTimer"] = 9;
        n_names["QBitArray"] = 10;
        n_names["QBitmap"] = 11;
        n_names["QBrush"] = 12;
        n_names["QChildEvent"] = 13;
        n_names["QCloseEvent"] = 14;
        n_names["QColor"] = 15;
        n_names["QConicalGradient"] = 16;
        n_names["QContextMenuEvent"] = 17;
        n_names["QCryptographicHash"] = 18;
        n_names["QCursor"] = 19;
        n_names["QDate"] = 20;
        n_names["QDateTime"] = 21;
        n_names["QDesktopServices"] = 22;
        n_names["QDir"] = 23;
        n_names["QDirIterator"] = 24;
        n_names["QDragEnterEvent"] = 25;
        n_names["QDragLeaveEvent"] = 26;
        n_names["QDragMoveEvent"] = 27;
        n_names["QDropEvent"] = 28;
        n_names["QDynamicPropertyChangeEvent"] = 29;
        n_names["QEasingCurve"] = 30;
        n_names["QEvent"] = 31;
        n_names["QFileIconProvider"] = 32;
        n_names["QFileInfo"] = 33;
        n_names["QFileOpenEvent"] = 34;
        n_names["QFocusEvent"] = 35;
        n_names["QFont"] = 36;
        n_names["QFontDatabase"] = 37;
        n_names["QFontMetrics"] = 38;
        n_names["QGLColormap"] = 39;
        n_names["QGLContext"] = 40;
        n_names["QGLFormat"] = 41;
        n_names["QGLFramebufferObject"] = 42;
        n_names["QGLFramebufferObjectFormat"] = 43;
        n_names["QGLPixelBuffer"] = 44;
        n_names["QGestureEvent"] = 45;
        n_names["QGradient"] = 46;
        n_names["QGraphicsAnchorLayout"] = 47;
        n_names["QGraphicsEllipseItem"] = 48;
        n_names["QGraphicsGridLayout"] = 49;
        n_names["QGraphicsItem"] = 50;
        n_names["QGraphicsItemGroup"] = 51;
        n_names["QGraphicsLayout"] = 52;
        n_names["QGraphicsLayoutItem"] = 53;
        n_names["QGraphicsLineItem"] = 54;
        n_names["QGraphicsLinearLayout"] = 55;
        n_names["QGraphicsPathItem"] = 56;
        n_names["QGraphicsPixmapItem"] = 57;
        n_names["QGraphicsPolygonItem"] = 58;
        n_names["QGraphicsRectItem"] = 59;
        n_names["QGraphicsSceneContextMenuEvent"] = 60;
        n_names["QGraphicsSceneDragDropEvent"] = 61;
        n_names["QGraphicsSceneEvent"] = 62;
        n_names["QGraphicsSceneHelpEvent"] = 63;
        n_names["QGraphicsSceneHoverEvent"] = 64;
        n_names["QGraphicsSceneMouseEvent"] = 65;
        n_names["QGraphicsSceneMoveEvent"] = 66;
        n_names["QGraphicsSceneResizeEvent"] = 67;
        n_names["QGraphicsSceneWheelEvent"] = 68;
        n_names["QGraphicsSimpleTextItem"] = 69;
        n_names["QHelpContentItem"] = 70;
        n_names["QHelpEvent"] = 71;
        n_names["QHelpSearchQuery"] = 72;
        n_names["QHideEvent"] = 73;
        n_names["QHostAddress"] = 74;
        n_names["QHostInfo"] = 75;
        n_names["QHoverEvent"] = 76;
        n_names["QIcon"] = 77;
        n_names["QIconDragEvent"] = 78;
        n_names["QImage"] = 79;
        n_names["QInputEvent"] = 80;
        n_names["QInputMethodEvent"] = 81;
        n_names["QItemEditorFactory"] = 82;
        n_names["QItemSelection"] = 83;
        n_names["QItemSelectionRange"] = 84;
        n_names["QKeyEvent"] = 85;
        n_names["QLayoutItem"] = 86;
        n_names["QLibraryInfo"] = 87;
        n_names["QLinearGradient"] = 88;
        n_names["QListWidgetItem"] = 89;
        n_names["QLocale"] = 90;
        n_names["QMargins"] = 91;
        n_names["QMatrix"] = 92;
        n_names["QMatrix4x4"] = 93;
        n_names["QMetaObject"] = 94;
        n_names["QModelIndex"] = 95;
        n_names["QMouseEvent"] = 96;
        n_names["QMoveEvent"] = 97;
        n_names["QMutex"] = 98;
        n_names["QMutexLocker"] = 99;
        n_names["QNetworkAddressEntry"] = 100;
        n_names["QNetworkCacheMetaData"] = 101;
        n_names["QNetworkCookie"] = 102;
        n_names["QNetworkInterface"] = 103;
        n_names["QNetworkProxy"] = 104;
        n_names["QNetworkProxyFactory"] = 105;
        n_names["QNetworkProxyQuery"] = 106;
        n_names["QNetworkRequest"] = 107;
        n_names["QPaintDevice"] = 108;
        n_names["QPaintEvent"] = 109;
        n_names["QPainter"] = 110;
        n_names["QPainterPath"] = 111;
        n_names["QPainterPathStroker"] = 112;
        n_names["QPalette"] = 113;
        n_names["QPen"] = 114;
        n_names["QPersistentModelIndex"] = 115;
        n_names["QPicture"] = 116;
        n_names["QPixmap"] = 117;
        n_names["QPixmapCache"] = 118;
        n_names["QPrinter"] = 119;
        n_names["QPrinterInfo"] = 120;
        n_names["QProcessEnvironment"] = 121;
        n_names["QQuaternion"] = 122;
        n_names["QRadialGradient"] = 123;
        n_names["QReadLocker"] = 124;
        n_names["QReadWriteLock"] = 125;
        n_names["QRegExp"] = 126;
        n_names["QRegion"] = 127;
        n_names["QResizeEvent"] = 128;
        n_names["QRunnable"] = 129;
        n_names["QSemaphore"] = 130;
        n_names["QShortcutEvent"] = 131;
        n_names["QShowEvent"] = 132;
        n_names["QSizePolicy"] = 133;
        n_names["QSpacerItem"] = 134;
        n_names["QSslCertificate"] = 135;
        n_names["QSslCipher"] = 136;
        n_names["QSslConfiguration"] = 137;
        n_names["QSslError"] = 138;
        n_names["QSslKey"] = 139;
        n_names["QStandardItem"] = 140;
        n_names["QStatusTipEvent"] = 141;
        n_names["QSvgGenerator"] = 142;
        n_names["QSystemSemaphore"] = 143;
        n_names["QTableWidgetItem"] = 144;
        n_names["QTableWidgetSelectionRange"] = 145;
        n_names["QTabletEvent"] = 146;
        n_names["QTextBlock"] = 147;
        n_names["QTextBlockFormat"] = 148;
        n_names["QTextBlockUserData"] = 149;
        n_names["QTextBoundaryFinder"] = 150;
        n_names["QTextCharFormat"] = 151;
        n_names["QTextCodec"] = 152;
        n_names["QTextCursor"] = 153;
        n_names["QTextDecoder"] = 154;
        n_names["QTextDocumentFragment"] = 155;
        n_names["QTextDocumentWriter"] = 156;
        n_names["QTextEncoder"] = 157;
        n_names["QTextFormat"] = 158;
        n_names["QTextFragment"] = 159;
        n_names["QTextFrameFormat"] = 160;
        n_names["QTextImageFormat"] = 161;
        n_names["QTextLayout"] = 162;
        n_names["QTextLength"] = 163;
        n_names["QTextLine"] = 164;
        n_names["QTextListFormat"] = 165;
        n_names["QTextOption"] = 166;
        n_names["QTextTableCell"] = 167;
        n_names["QTextTableCellFormat"] = 168;
        n_names["QTextTableFormat"] = 169;
        n_names["QTime"] = 170;
        n_names["QTimerEvent"] = 171;
        n_names["QToolTip"] = 172;
        n_names["QTouchEvent"] = 173;
        n_names["QTransform"] = 174;
        n_names["QTreeWidgetItem"] = 175;
        n_names["QUndoCommand"] = 176;
        n_names["QUrl"] = 177;
        n_names["QUrlInfo"] = 178;
        n_names["QVariant"] = 179;
        n_names["QVector2D"] = 180;
        n_names["QVector3D"] = 181;
        n_names["QVector4D"] = 182;
        n_names["QWaitCondition"] = 183;
        n_names["QWhatsThis"] = 184;
        n_names["QWhatsThisClickedEvent"] = 185;
        n_names["QWheelEvent"] = 186;
        n_names["QWidgetItem"] = 187;
        n_names["QWindowStateChangeEvent"] = 188;
        n_names["QWriteLocker"] = 189;
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
        override_function_ids["atEnd()"] = 107;
        override_function_ids["canReadLine()"] = 108;
        override_function_ids["close()"] = 109;
        override_function_ids["isSequential()"] = 110;
        override_function_ids["waitForBytesWritten(int)"] = 111;
        override_function_ids["waitForReadyRead(int)"] = 112;
        override_function_ids["open(OpenMode)"] = 113;
        override_function_ids["reset()"] = 114;
        override_function_ids["fixup(QString)"] = 115;
        override_function_ids["stepBy(int)"] = 116;
        override_function_ids["validate(QString,int)"] = 117;
        override_function_ids["stepEnabled()"] = 118;
        override_function_ids["onEntry(QEvent*)"] = 119;
        override_function_ids["onExit(QEvent*)"] = 120;
        override_function_ids["blockBoundingRect(QTextBlock)"] = 121;
        override_function_ids["documentSize()"] = 122;
        override_function_ids["draw(QPainter*,PaintContext)"] = 123;
        override_function_ids["frameBoundingRect(QTextFrame*)"] = 124;
        override_function_ids["hitTest(QPointF,Qt::HitTestAccuracy)"] = 125;
        override_function_ids["pageCount()"] = 126;
        override_function_ids["documentChanged(int,int,int)"] = 127;
        override_function_ids["drawInlineObject(QPainter*,QRectF,QTextInlineObject,int,QTextFormat)"] = 128;
        override_function_ids["positionInlineObject(QTextInlineObject,int,QTextFormat)"] = 129;
        override_function_ids["resizeInlineObject(QTextInlineObject,int,QTextFormat)"] = 130;
        override_function_ids["eventTest(QEvent*)"] = 131;
        override_function_ids["onTransition(QEvent*)"] = 132;
        override_function_ids["commitData(QSessionManager)"] = 133;
        override_function_ids["saveState(QSessionManager)"] = 134;
        override_function_ids["notify(QObject*,QEvent*)"] = 135;
        override_function_ids["addItem(QLayoutItem*)"] = 136;
        override_function_ids["count()"] = 137;
        override_function_ids["expandingDirections()"] = 138;
        override_function_ids["hasHeightForWidth()"] = 139;
        override_function_ids["invalidate()"] = 140;
        override_function_ids["itemAt(int)"] = 141;
        override_function_ids["maximumSize()"] = 142;
        override_function_ids["minimumHeightForWidth(int)"] = 143;
        override_function_ids["minimumSize()"] = 144;
        override_function_ids["setGeometry(QRect)"] = 145;
        override_function_ids["takeAt(int)"] = 146;
        override_function_ids["indexOf(QWidget*)"] = 147;
        override_function_ids["geometry()"] = 148;
        override_function_ids["isEmpty()"] = 149;
        override_function_ids["layout()"] = 150;
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
        override_function_ids["link()"] = 190;
        override_function_ids["glDraw()"] = 191;
        override_function_ids["glInit()"] = 192;
        override_function_ids["initializeGL()"] = 193;
        override_function_ids["initializeOverlayGL()"] = 194;
        override_function_ids["paintGL()"] = 195;
        override_function_ids["paintOverlayGL()"] = 196;
        override_function_ids["resizeGL(int,int)"] = 197;
        override_function_ids["resizeOverlayGL(int,int)"] = 198;
        override_function_ids["boundingRectFor(QRectF)"] = 199;
        override_function_ids["draw(QPainter*)"] = 200;
        override_function_ids["sourceChanged(ChangeFlags)"] = 201;
        override_function_ids["paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 202;
        override_function_ids["setGeometry(QRectF)"] = 203;
        override_function_ids["type()"] = 204;
        override_function_ids["contextMenuEvent(QGraphicsSceneContextMenuEvent*)"] = 205;
        override_function_ids["dragEnterEvent(QGraphicsSceneDragDropEvent*)"] = 206;
        override_function_ids["dragLeaveEvent(QGraphicsSceneDragDropEvent*)"] = 207;
        override_function_ids["dragMoveEvent(QGraphicsSceneDragDropEvent*)"] = 208;
        override_function_ids["dropEvent(QGraphicsSceneDragDropEvent*)"] = 209;
        override_function_ids["grabMouseEvent(QEvent*)"] = 210;
        override_function_ids["hoverEnterEvent(QGraphicsSceneHoverEvent*)"] = 211;
        override_function_ids["hoverLeaveEvent(QGraphicsSceneHoverEvent*)"] = 212;
        override_function_ids["hoverMoveEvent(QGraphicsSceneHoverEvent*)"] = 213;
        override_function_ids["itemChange(GraphicsItemChange,QVariant)"] = 214;
        override_function_ids["mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)"] = 215;
        override_function_ids["mouseMoveEvent(QGraphicsSceneMouseEvent*)"] = 216;
        override_function_ids["mousePressEvent(QGraphicsSceneMouseEvent*)"] = 217;
        override_function_ids["mouseReleaseEvent(QGraphicsSceneMouseEvent*)"] = 218;
        override_function_ids["resizeEvent(QGraphicsSceneResizeEvent*)"] = 219;
        override_function_ids["sizeHint(Qt::SizeHint,QSizeF)"] = 220;
        override_function_ids["ungrabMouseEvent(QEvent*)"] = 221;
        override_function_ids["wheelEvent(QGraphicsSceneWheelEvent*)"] = 222;
        override_function_ids["paintWindowFrame(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 223;
        override_function_ids["grabKeyboardEvent(QEvent*)"] = 224;
        override_function_ids["initStyleOption(QStyleOption*)"] = 225;
        override_function_ids["moveEvent(QGraphicsSceneMoveEvent*)"] = 226;
        override_function_ids["polishEvent()"] = 227;
        override_function_ids["ungrabKeyboardEvent(QEvent*)"] = 228;
        override_function_ids["windowFrameEvent(QEvent*)"] = 229;
        override_function_ids["windowFrameSectionAt(QPointF)"] = 230;
        override_function_ids["boundingRect()"] = 231;
        override_function_ids["shape()"] = 232;
        override_function_ids["sceneEvent(QEvent*)"] = 233;
        override_function_ids["updateGeometry()"] = 234;
        override_function_ids["applyTo(QMatrix4x4*)"] = 235;
        override_function_ids["drawBackground(QPainter*,QRectF)"] = 236;
        override_function_ids["drawForeground(QPainter*,QRectF)"] = 237;
        override_function_ids["helpEvent(QGraphicsSceneHelpEvent*)"] = 238;
        override_function_ids["contains(QPointF)"] = 239;
        override_function_ids["isObscuredBy(QGraphicsItem*)"] = 240;
        override_function_ids["opaqueArea()"] = 241;
        override_function_ids["paintSection(QPainter*,QRect,int)"] = 242;
        override_function_ids["sectionSizeFromContents(int)"] = 243;
        override_function_ids["drawBranches(QPainter*,QRect,QModelIndex)"] = 244;
        override_function_ids["drawRow(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 245;
        override_function_ids["dataChanged(QModelIndex,QModelIndex)"] = 246;
        override_function_ids["rowsAboutToBeRemoved(QModelIndex,int,int)"] = 247;
        override_function_ids["selectionChanged(QItemSelection,QItemSelection)"] = 248;
        override_function_ids["updateGeometries()"] = 249;
        override_function_ids["actions()"] = 250;
        override_function_ids["filterEvent(QEvent*)"] = 251;
        override_function_ids["font()"] = 252;
        override_function_ids["identifierName()"] = 253;
        override_function_ids["isComposing()"] = 254;
        override_function_ids["language()"] = 255;
        override_function_ids["setFocusWidget(QWidget*)"] = 256;
        override_function_ids["update()"] = 257;
        override_function_ids["widgetDestroyed(QWidget*)"] = 258;
        override_function_ids["setRange(int,int)"] = 259;
        override_function_ids["drawCheck(QPainter*,QStyleOptionViewItem,QRect,Qt::CheckState)"] = 260;
        override_function_ids["drawDecoration(QPainter*,QStyleOptionViewItem,QRect,QPixmap)"] = 261;
        override_function_ids["drawDisplay(QPainter*,QStyleOptionViewItem,QRect,QString)"] = 262;
        override_function_ids["drawFocus(QPainter*,QStyleOptionViewItem,QRect)"] = 263;
        override_function_ids["dropMimeData(int,QMimeData*,Qt::DropAction)"] = 264;
        override_function_ids["mimeData(QList<QListWidgetItem*>)"] = 265;
        override_function_ids["hasPendingConnections()"] = 266;
        override_function_ids["nextPendingConnection()"] = 267;
        override_function_ids["incomingConnection(quintptr)"] = 268;
        override_function_ids["createPopupMenu()"] = 269;
        override_function_ids["formats()"] = 270;
        override_function_ids["hasFormat(QString)"] = 271;
        override_function_ids["retrieveData(QString,QVariant::Type)"] = 272;
        override_function_ids["cookiesForUrl(QUrl)"] = 273;
        override_function_ids["setCookiesFromUrl(QList<QNetworkCookie>,QUrl)"] = 274;
        override_function_ids["metaData(QUrl)"] = 275;
        override_function_ids["remove(QUrl)"] = 276;
        override_function_ids["updateMetaData(QNetworkCacheMetaData)"] = 277;
        override_function_ids["loadResource(int,QUrl)"] = 278;
        override_function_ids["canInsertFromMimeData(QMimeData*)"] = 279;
        override_function_ids["createMimeDataFromSelection()"] = 280;
        override_function_ids["insertFromMimeData(QMimeData*)"] = 281;
        override_function_ids["setupChildProcess()"] = 282;
        override_function_ids["text()"] = 283;
        override_function_ids["updateCurrentValue(QVariant)"] = 284;
        override_function_ids["interpolated(QVariant,QVariant,qreal)"] = 285;
        override_function_ids["filterAcceptsColumn(int,QModelIndex)"] = 286;
        override_function_ids["filterAcceptsRow(int,QModelIndex)"] = 287;
        override_function_ids["lessThan(QModelIndex,QModelIndex)"] = 288;
        override_function_ids["textFromValue(int)"] = 289;
        override_function_ids["drawContents(QPainter*)"] = 290;
        override_function_ids["displayText(QVariant,QLocale)"] = 291;
        override_function_ids["initStyleOption(QStyleOptionViewItem*,QModelIndex)"] = 292;
        override_function_ids["highlightBlock(QString)"] = 293;
        override_function_ids["tabInserted(int)"] = 294;
        override_function_ids["tabLayoutChange()"] = 295;
        override_function_ids["tabRemoved(int)"] = 296;
        override_function_ids["tabSizeHint(int)"] = 297;
        override_function_ids["dropMimeData(int,int,QMimeData*,Qt::DropAction)"] = 298;
        override_function_ids["mimeData(QList<QTableWidgetItem*>)"] = 299;
        override_function_ids["incomingConnection(int)"] = 300;
        override_function_ids["blockFormatChanged(QTextBlock)"] = 301;
        override_function_ids["blockInserted(QTextBlock)"] = 302;
        override_function_ids["blockRemoved(QTextBlock)"] = 303;
        override_function_ids["createObject(QTextFormat)"] = 304;
        override_function_ids["run()"] = 305;
        override_function_ids["valueForTime(int)"] = 306;
        override_function_ids["itemInserted(int)"] = 307;
        override_function_ids["itemRemoved(int)"] = 308;
        override_function_ids["translate(const char*,const char*,const char*)"] = 309;
        override_function_ids["dropMimeData(QTreeWidgetItem*,int,QMimeData*,Qt::DropAction)"] = 310;
        override_function_ids["mimeData(QList<QTreeWidgetItem*>)"] = 311;
        override_function_ids["createWidget(QWidget*)"] = 312;
        override_function_ids["deleteWidget(QWidget*)"] = 313;
        override_function_ids["nextId()"] = 314;
        override_function_ids["validateCurrentPage()"] = 315;
        override_function_ids["cleanupPage(int)"] = 316;
        override_function_ids["initializePage(int)"] = 317;
        override_function_ids["cleanupPage()"] = 318;
        override_function_ids["initializePage()"] = 319;
        override_function_ids["isComplete()"] = 320;
        override_function_ids["validatePage()"] = 321;
        override_function_ids["advance(int)"] = 322;
        override_function_ids["collidesWithItem(QGraphicsItem*,Qt::ItemSelectionMode)"] = 323;
        override_function_ids["collidesWithPath(QPainterPath,Qt::ItemSelectionMode)"] = 324;
        override_function_ids["sceneEventFilter(QGraphicsItem*,QEvent*)"] = 325;
        override_function_ids["actionText(int,Text,int)"] = 326;
        override_function_ids["childAt(int,int)"] = 327;
        override_function_ids["childCount()"] = 328;
        override_function_ids["doAction(int,int,QVariantList)"] = 329;
        override_function_ids["indexOfChild(QAccessibleInterface*)"] = 330;
        override_function_ids["isValid()"] = 331;
        override_function_ids["object()"] = 332;
        override_function_ids["rect(int)"] = 333;
        override_function_ids["relationTo(int,QAccessibleInterface*,int)"] = 334;
        override_function_ids["role(int)"] = 335;
        override_function_ids["setText(Text,int,QString)"] = 336;
        override_function_ids["state(int)"] = 337;
        override_function_ids["text(Text,int)"] = 338;
        override_function_ids["userActionCount(int)"] = 339;
        override_function_ids["encodedData(const char*)"] = 340;
        override_function_ids["format(int)"] = 341;
        override_function_ids["provides(const char*)"] = 342;
        override_function_ids["icon(IconType)"] = 343;
        override_function_ids["icon(QFileInfo)"] = 344;
        override_function_ids["type(QFileInfo)"] = 345;
        override_function_ids["create(QGLContext*)"] = 346;
        override_function_ids["doneCurrent()"] = 347;
        override_function_ids["makeCurrent()"] = 348;
        override_function_ids["swapBuffers()"] = 349;
        override_function_ids["chooseContext(QGLContext*)"] = 350;
        override_function_ids["removeAt(int)"] = 351;
        override_function_ids["widgetEvent(QEvent*)"] = 352;
        override_function_ids["createEditor(QVariant::Type,QWidget*)"] = 353;
        override_function_ids["valuePropertyName(QVariant::Type)"] = 354;
        override_function_ids["spacerItem()"] = 355;
        override_function_ids["widget()"] = 356;
        override_function_ids["clone()"] = 357;
        override_function_ids["data(int)"] = 358;
        override_function_ids["setData(int,QVariant)"] = 359;
        override_function_ids["queryProxy(QNetworkProxyQuery)"] = 360;
        override_function_ids["setData(const char*,uint)"] = 361;
        override_function_ids["setData(QVariant,int)"] = 362;
        override_function_ids["metric(QPaintDevice::PaintDeviceMetric)"] = 363;
        override_function_ids["aliases()"] = 364;
        override_function_ids["mibEnum()"] = 365;
        override_function_ids["name()"] = 366;
        override_function_ids["convertFromUnicode(QChar*,int,ConverterState*)"] = 367;
        override_function_ids["convertToUnicode(const char*,int,ConverterState*)"] = 368;
        override_function_ids["data(int,int)"] = 369;
        override_function_ids["setData(int,int,QVariant)"] = 370;
        override_function_ids["id()"] = 371;
        override_function_ids["mergeWith(QUndoCommand*)"] = 372;
        override_function_ids["redo()"] = 373;
        override_function_ids["undo()"] = 374;
        override_function_ids["setDir(bool)"] = 375;
        override_function_ids["setFile(bool)"] = 376;
        override_function_ids["setGroup(QString)"] = 377;
        override_function_ids["setLastModified(QDateTime)"] = 378;
        override_function_ids["setName(QString)"] = 379;
        override_function_ids["setOwner(QString)"] = 380;
        override_function_ids["setPermissions(int)"] = 381;
        override_function_ids["setReadable(bool)"] = 382;
        override_function_ids["setSymLink(bool)"] = 383;
        override_function_ids["setWritable(bool)"] = 384;
        override_arg_types = new const char** [384];
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
        { static const char* s[] = { "bool", 0 }; override_arg_types[106] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[107] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[108] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[109] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[110] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[111] = s; }
        { static const char* s[] = { "bool", "OpenMode", 0 }; override_arg_types[112] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[113] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[114] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[115] = s; }
        { static const char* s[] = { "QValidator::State", "QString", "int", 0 }; override_arg_types[116] = s; }
        { static const char* s[] = { "StepEnabled", 0 }; override_arg_types[117] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[118] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[119] = s; }
        { static const char* s[] = { "QRectF", "QTextBlock", 0 }; override_arg_types[120] = s; }
        { static const char* s[] = { "QSizeF", 0 }; override_arg_types[121] = s; }
        { static const char* s[] = { 0, "QPainter*", "PaintContext", 0 }; override_arg_types[122] = s; }
        { static const char* s[] = { "QRectF", "QTextFrame*", 0 }; override_arg_types[123] = s; }
        { static const char* s[] = { "int", "QPointF", "Qt::HitTestAccuracy", 0 }; override_arg_types[124] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[125] = s; }
        { static const char* s[] = { 0, "int", "int", "int", 0 }; override_arg_types[126] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[127] = s; }
        { static const char* s[] = { 0, "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[128] = s; }
        { static const char* s[] = { 0, "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[129] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[130] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[131] = s; }
        { static const char* s[] = { 0, "QSessionManager", 0 }; override_arg_types[132] = s; }
        { static const char* s[] = { 0, "QSessionManager", 0 }; override_arg_types[133] = s; }
        { static const char* s[] = { "bool", "QObject*", "QEvent*", 0 }; override_arg_types[134] = s; }
        { static const char* s[] = { 0, "QLayoutItem*", 0 }; override_arg_types[135] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[136] = s; }
        { static const char* s[] = { "Qt::Orientations", 0 }; override_arg_types[137] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[138] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[139] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[140] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[141] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[142] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[143] = s; }
        { static const char* s[] = { 0, "QRect", 0 }; override_arg_types[144] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[145] = s; }
        { static const char* s[] = { "int", "QWidget*", 0 }; override_arg_types[146] = s; }
        { static const char* s[] = { "QRect", 0 }; override_arg_types[147] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[148] = s; }
        { static const char* s[] = { "QLayout*", 0 }; override_arg_types[149] = s; }
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
        { static const char* s[] = { "bool", 0 }; override_arg_types[189] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[190] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[191] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[192] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[193] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[194] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[195] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[196] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[197] = s; }
        { static const char* s[] = { "QRectF", "QRectF", 0 }; override_arg_types[198] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[199] = s; }
        { static const char* s[] = { 0, "ChangeFlags", 0 }; override_arg_types[200] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[201] = s; }
        { static const char* s[] = { 0, "QRectF", 0 }; override_arg_types[202] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[203] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneContextMenuEvent*", 0 }; override_arg_types[204] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[205] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[206] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[207] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[208] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[209] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[210] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[211] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[212] = s; }
        { static const char* s[] = { "QVariant", "GraphicsItemChange", "QVariant", 0 }; override_arg_types[213] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[214] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[215] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[216] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[217] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneResizeEvent*", 0 }; override_arg_types[218] = s; }
        { static const char* s[] = { "QSizeF", "Qt::SizeHint", "QSizeF", 0 }; override_arg_types[219] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[220] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneWheelEvent*", 0 }; override_arg_types[221] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[222] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[223] = s; }
        { static const char* s[] = { 0, "QStyleOption*", 0 }; override_arg_types[224] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMoveEvent*", 0 }; override_arg_types[225] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[226] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[227] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[228] = s; }
        { static const char* s[] = { "Qt::WindowFrameSection", "QPointF", 0 }; override_arg_types[229] = s; }
        { static const char* s[] = { "QRectF", 0 }; override_arg_types[230] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[231] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[232] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[233] = s; }
        { static const char* s[] = { 0, "QMatrix4x4*", 0 }; override_arg_types[234] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[235] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[236] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHelpEvent*", 0 }; override_arg_types[237] = s; }
        { static const char* s[] = { "bool", "QPointF", 0 }; override_arg_types[238] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", 0 }; override_arg_types[239] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[240] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", 0 }; override_arg_types[241] = s; }
        { static const char* s[] = { "QSize", "int", 0 }; override_arg_types[242] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "QModelIndex", 0 }; override_arg_types[243] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[244] = s; }
        { static const char* s[] = { 0, "QModelIndex", "QModelIndex", 0 }; override_arg_types[245] = s; }
        { static const char* s[] = { 0, "QModelIndex", "int", "int", 0 }; override_arg_types[246] = s; }
        { static const char* s[] = { 0, "QItemSelection", "QItemSelection", 0 }; override_arg_types[247] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[248] = s; }
        { static const char* s[] = { "QList<QAction*>", 0 }; override_arg_types[249] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[250] = s; }
        { static const char* s[] = { "QFont", 0 }; override_arg_types[251] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[252] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[253] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[254] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[255] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[256] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[257] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[258] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "Qt::CheckState", 0 }; override_arg_types[259] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QPixmap", 0 }; override_arg_types[260] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QString", 0 }; override_arg_types[261] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", 0 }; override_arg_types[262] = s; }
        { static const char* s[] = { "bool", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[263] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QListWidgetItem*>", 0 }; override_arg_types[264] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[265] = s; }
        { static const char* s[] = { "QLocalSocket*", 0 }; override_arg_types[266] = s; }
        { static const char* s[] = { 0, "quintptr", 0 }; override_arg_types[267] = s; }
        { static const char* s[] = { "QMenu*", 0 }; override_arg_types[268] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[269] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[270] = s; }
        { static const char* s[] = { "QVariant", "QString", "QVariant::Type", 0 }; override_arg_types[271] = s; }
        { static const char* s[] = { "QList<QNetworkCookie>", "QUrl", 0 }; override_arg_types[272] = s; }
        { static const char* s[] = { "bool", "QList<QNetworkCookie>", "QUrl", 0 }; override_arg_types[273] = s; }
        { static const char* s[] = { "QNetworkCacheMetaData", "QUrl", 0 }; override_arg_types[274] = s; }
        { static const char* s[] = { "bool", "QUrl", 0 }; override_arg_types[275] = s; }
        { static const char* s[] = { 0, "QNetworkCacheMetaData", 0 }; override_arg_types[276] = s; }
        { static const char* s[] = { "QVariant", "int", "QUrl", 0 }; override_arg_types[277] = s; }
        { static const char* s[] = { "bool", "QMimeData*", 0 }; override_arg_types[278] = s; }
        { static const char* s[] = { "QMimeData*", 0 }; override_arg_types[279] = s; }
        { static const char* s[] = { 0, "QMimeData*", 0 }; override_arg_types[280] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[281] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[282] = s; }
        { static const char* s[] = { 0, "QVariant", 0 }; override_arg_types[283] = s; }
        { static const char* s[] = { "QVariant", "QVariant", "QVariant", "qreal", 0 }; override_arg_types[284] = s; }
        { static const char* s[] = { "bool", "int", "QModelIndex", 0 }; override_arg_types[285] = s; }
        { static const char* s[] = { "bool", "int", "QModelIndex", 0 }; override_arg_types[286] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "QModelIndex", 0 }; override_arg_types[287] = s; }
        { static const char* s[] = { "QString", "int", 0 }; override_arg_types[288] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[289] = s; }
        { static const char* s[] = { "QString", "QVariant", "QLocale", 0 }; override_arg_types[290] = s; }
        { static const char* s[] = { 0, "QStyleOptionViewItem*", "QModelIndex", 0 }; override_arg_types[291] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[292] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[293] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[294] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[295] = s; }
        { static const char* s[] = { "QSize", "int", 0 }; override_arg_types[296] = s; }
        { static const char* s[] = { "bool", "int", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[297] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTableWidgetItem*>", 0 }; override_arg_types[298] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[299] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[300] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[301] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[302] = s; }
        { static const char* s[] = { "QTextObject*", "QTextFormat", 0 }; override_arg_types[303] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[304] = s; }
        { static const char* s[] = { "qreal", "int", 0 }; override_arg_types[305] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[306] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[307] = s; }
        { static const char* s[] = { "QString", "const char*", "const char*", "const char*", 0 }; override_arg_types[308] = s; }
        { static const char* s[] = { "bool", "QTreeWidgetItem*", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[309] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTreeWidgetItem*>", 0 }; override_arg_types[310] = s; }
        { static const char* s[] = { "QWidget*", "QWidget*", 0 }; override_arg_types[311] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[312] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[313] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[314] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[315] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[316] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[317] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[318] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[319] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[320] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[321] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "Qt::ItemSelectionMode", 0 }; override_arg_types[322] = s; }
        { static const char* s[] = { "bool", "QPainterPath", "Qt::ItemSelectionMode", 0 }; override_arg_types[323] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "QEvent*", 0 }; override_arg_types[324] = s; }
        { static const char* s[] = { "QString", "int", "Text", "int", 0 }; override_arg_types[325] = s; }
        { static const char* s[] = { "int", "int", "int", 0 }; override_arg_types[326] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[327] = s; }
        { static const char* s[] = { "bool", "int", "int", "QVariantList", 0 }; override_arg_types[328] = s; }
        { static const char* s[] = { "int", "QAccessibleInterface*", 0 }; override_arg_types[329] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[330] = s; }
        { static const char* s[] = { "QObject*", 0 }; override_arg_types[331] = s; }
        { static const char* s[] = { "QRect", "int", 0 }; override_arg_types[332] = s; }
        { static const char* s[] = { "Relation", "int", "QAccessibleInterface*", "int", 0 }; override_arg_types[333] = s; }
        { static const char* s[] = { "Role", "int", 0 }; override_arg_types[334] = s; }
        { static const char* s[] = { 0, "Text", "int", "QString", 0 }; override_arg_types[335] = s; }
        { static const char* s[] = { "State", "int", 0 }; override_arg_types[336] = s; }
        { static const char* s[] = { "QString", "Text", "int", 0 }; override_arg_types[337] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[338] = s; }
        { static const char* s[] = { "QByteArray", "const char*", 0 }; override_arg_types[339] = s; }
        { static const char* s[] = { "const char*", "int", 0 }; override_arg_types[340] = s; }
        { static const char* s[] = { "bool", "const char*", 0 }; override_arg_types[341] = s; }
        { static const char* s[] = { "QIcon", "IconType", 0 }; override_arg_types[342] = s; }
        { static const char* s[] = { "QIcon", "QFileInfo", 0 }; override_arg_types[343] = s; }
        { static const char* s[] = { "QString", "QFileInfo", 0 }; override_arg_types[344] = s; }
        { static const char* s[] = { "bool", "QGLContext*", 0 }; override_arg_types[345] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[346] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[347] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[348] = s; }
        { static const char* s[] = { "bool", "QGLContext*", 0 }; override_arg_types[349] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[350] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[351] = s; }
        { static const char* s[] = { "QWidget*", "QVariant::Type", "QWidget*", 0 }; override_arg_types[352] = s; }
        { static const char* s[] = { "QByteArray", "QVariant::Type", 0 }; override_arg_types[353] = s; }
        { static const char* s[] = { "QSpacerItem*", 0 }; override_arg_types[354] = s; }
        { static const char* s[] = { "QWidget*", 0 }; override_arg_types[355] = s; }
        { static const char* s[] = { "QListWidgetItem*", 0 }; override_arg_types[356] = s; }
        { static const char* s[] = { "QVariant", "int", 0 }; override_arg_types[357] = s; }
        { static const char* s[] = { 0, "int", "QVariant", 0 }; override_arg_types[358] = s; }
        { static const char* s[] = { "QList<QNetworkProxy>", "QNetworkProxyQuery", 0 }; override_arg_types[359] = s; }
        { static const char* s[] = { 0, "const char*", "uint", 0 }; override_arg_types[360] = s; }
        { static const char* s[] = { 0, "QVariant", "int", 0 }; override_arg_types[361] = s; }
        { static const char* s[] = { "int", "QPaintDevice::PaintDeviceMetric", 0 }; override_arg_types[362] = s; }
        { static const char* s[] = { "QList<QByteArray>", 0 }; override_arg_types[363] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[364] = s; }
        { static const char* s[] = { "QByteArray", 0 }; override_arg_types[365] = s; }
        { static const char* s[] = { "QByteArray", "QChar*", "int", "ConverterState*", 0 }; override_arg_types[366] = s; }
        { static const char* s[] = { "QString", "const char*", "int", "ConverterState*", 0 }; override_arg_types[367] = s; }
        { static const char* s[] = { "QVariant", "int", "int", 0 }; override_arg_types[368] = s; }
        { static const char* s[] = { 0, "int", "int", "QVariant", 0 }; override_arg_types[369] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[370] = s; }
        { static const char* s[] = { "bool", "QUndoCommand*", 0 }; override_arg_types[371] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[372] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[373] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[374] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[375] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[376] = s; }
        { static const char* s[] = { 0, "QDateTime", 0 }; override_arg_types[377] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[378] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[379] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[380] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[381] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[382] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[383] = s; }
        qNames = q_names.keys();
        nNames = n_names.keys(); }}

void* LObjects::overrideFun(uint unique, int id) {
    return override_lisp_functions.value(384 * (quint64)unique + id, 0); }

void LObjects::setOverrideFun(uint unique, int id, void* fun) {
    override_lisp_functions[384 * (quint64)unique + id] = fun; }

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
        case 8: m = &QAbstractPrintDialog::staticMetaObject; break;
        case 9: m = &QAbstractProxyModel::staticMetaObject; break;
        case 10: m = &QAbstractScrollArea::staticMetaObject; break;
        case 11: m = &QAbstractSlider::staticMetaObject; break;
        case 13: m = &QAbstractSpinBox::staticMetaObject; break;
        case 14: m = &QAbstractState::staticMetaObject; break;
        case 15: m = &QAbstractTableModel::staticMetaObject; break;
        case 16: m = &QAbstractTextDocumentLayout::staticMetaObject; break;
        case 17: m = &QAbstractTransition::staticMetaObject; break;
        case 18: m = &QAction::staticMetaObject; break;
        case 19: m = &QActionGroup::staticMetaObject; break;
        case 20: m = &QAnimationGroup::staticMetaObject; break;
        case 21: m = &QApplication::staticMetaObject; break;
        case 22: m = &QBoxLayout::staticMetaObject; break;
        case 23: m = &QBuffer::staticMetaObject; break;
        case 24: m = &QButtonGroup::staticMetaObject; break;
        case 25: m = &QCDEStyle::staticMetaObject; break;
        case 26: m = &QCalendarWidget::staticMetaObject; break;
        case 27: m = &QCheckBox::staticMetaObject; break;
        case 28: m = &QCleanlooksStyle::staticMetaObject; break;
        case 29: m = &QClipboard::staticMetaObject; break;
        case 30: m = &QColorDialog::staticMetaObject; break;
        case 31: m = &QColumnView::staticMetaObject; break;
        case 32: m = &QComboBox::staticMetaObject; break;
        case 33: m = &QCommandLinkButton::staticMetaObject; break;
        case 34: m = &QCommonStyle::staticMetaObject; break;
        case 35: m = &QCompleter::staticMetaObject; break;
        case 36: m = &QCoreApplication::staticMetaObject; break;
        case 37: m = &QDataWidgetMapper::staticMetaObject; break;
        case 38: m = &QDateEdit::staticMetaObject; break;
        case 39: m = &QDateTimeEdit::staticMetaObject; break;
        case 40: m = &QDesktopWidget::staticMetaObject; break;
        case 41: m = &QDial::staticMetaObject; break;
        case 42: m = &QDialog::staticMetaObject; break;
        case 43: m = &QDialogButtonBox::staticMetaObject; break;
        case 44: m = &QDirModel::staticMetaObject; break;
        case 45: m = &QDockWidget::staticMetaObject; break;
        case 46: m = &QDoubleSpinBox::staticMetaObject; break;
        case 47: m = &QDoubleValidator::staticMetaObject; break;
        case 48: m = &QDrag::staticMetaObject; break;
        case 49: m = &QErrorMessage::staticMetaObject; break;
        case 50: m = &QEventLoop::staticMetaObject; break;
        case 51: m = &QEventTransition::staticMetaObject; break;
        case 52: m = &QFile::staticMetaObject; break;
        case 53: m = &QFileDialog::staticMetaObject; break;
        case 54: m = &QFileSystemModel::staticMetaObject; break;
        case 55: m = &QFileSystemWatcher::staticMetaObject; break;
        case 56: m = &QFinalState::staticMetaObject; break;
        case 57: m = &QFocusFrame::staticMetaObject; break;
        case 58: m = &QFontComboBox::staticMetaObject; break;
        case 59: m = &QFontDialog::staticMetaObject; break;
        case 60: m = &QFormLayout::staticMetaObject; break;
        case 61: m = &QFrame::staticMetaObject; break;
        case 66: m = &QGesture::staticMetaObject; break;
        case 67: m = &QGraphicsAnchor::staticMetaObject; break;
        case 68: m = &QGraphicsBlurEffect::staticMetaObject; break;
        case 69: m = &QGraphicsColorizeEffect::staticMetaObject; break;
        case 70: m = &QGraphicsDropShadowEffect::staticMetaObject; break;
        case 71: m = &QGraphicsEffect::staticMetaObject; break;
        case 72: m = &QGraphicsObject::staticMetaObject; break;
        case 73: m = &QGraphicsOpacityEffect::staticMetaObject; break;
        case 74: m = &QGraphicsProxyWidget::staticMetaObject; break;
        case 75: m = &QGraphicsRotation::staticMetaObject; break;
        case 76: m = &QGraphicsScale::staticMetaObject; break;
        case 77: m = &QGraphicsScene::staticMetaObject; break;
        case 79: m = &QGraphicsTextItem::staticMetaObject; break;
        case 80: m = &QGraphicsTransform::staticMetaObject; break;
        case 81: m = &QGraphicsView::staticMetaObject; break;
        case 82: m = &QGraphicsWidget::staticMetaObject; break;
        case 83: m = &QGridLayout::staticMetaObject; break;
        case 84: m = &QGroupBox::staticMetaObject; break;
        case 85: m = &QHBoxLayout::staticMetaObject; break;
        case 86: m = &QHeaderView::staticMetaObject; break;
        case 95: m = &QHistoryState::staticMetaObject; break;
        case 96: m = &QIODevice::staticMetaObject; break;
        case 97: m = &QInputContext::staticMetaObject; break;
        case 98: m = &QInputDialog::staticMetaObject; break;
        case 99: m = &QIntValidator::staticMetaObject; break;
        case 100: m = &QItemDelegate::staticMetaObject; break;
        case 101: m = &QItemSelectionModel::staticMetaObject; break;
        case 102: m = &QKeyEventTransition::staticMetaObject; break;
        case 103: m = &QLCDNumber::staticMetaObject; break;
        case 104: m = &QLabel::staticMetaObject; break;
        case 105: m = &QLayout::staticMetaObject; break;
        case 106: m = &QLibrary::staticMetaObject; break;
        case 107: m = &QLineEdit::staticMetaObject; break;
        case 108: m = &QListView::staticMetaObject; break;
        case 109: m = &QListWidget::staticMetaObject; break;
        case 112: m = &QMainWindow::staticMetaObject; break;
        case 113: m = &QMdiArea::staticMetaObject; break;
        case 114: m = &QMdiSubWindow::staticMetaObject; break;
        case 115: m = &QMenu::staticMetaObject; break;
        case 116: m = &QMenuBar::staticMetaObject; break;
        case 117: m = &QMessageBox::staticMetaObject; break;
        case 118: m = &QMimeData::staticMetaObject; break;
        case 119: m = &QMotifStyle::staticMetaObject; break;
        case 120: m = &QMouseEventTransition::staticMetaObject; break;
        case 121: m = &QMovie::staticMetaObject; break;
        case 126: m = &QObject::staticMetaObject; break;
        case 127: m = &QPageSetupDialog::staticMetaObject; break;
        case 128: m = &QPanGesture::staticMetaObject; break;
        case 129: m = &QParallelAnimationGroup::staticMetaObject; break;
        case 130: m = &QPauseAnimation::staticMetaObject; break;
        case 131: m = &QPinchGesture::staticMetaObject; break;
        case 132: m = &QPlainTextDocumentLayout::staticMetaObject; break;
        case 133: m = &QPlainTextEdit::staticMetaObject; break;
        case 134: m = &QPlastiqueStyle::staticMetaObject; break;
        case 135: m = &QPluginLoader::staticMetaObject; break;
        case 136: m = &QPrintDialog::staticMetaObject; break;
        case 137: m = &QPrintPreviewDialog::staticMetaObject; break;
        case 138: m = &QPrintPreviewWidget::staticMetaObject; break;
        case 139: m = &QProcess::staticMetaObject; break;
        case 140: m = &QProgressBar::staticMetaObject; break;
        case 141: m = &QProgressDialog::staticMetaObject; break;
        case 142: m = &QPropertyAnimation::staticMetaObject; break;
        case 143: m = &QPushButton::staticMetaObject; break;
        case 144: m = &QRadioButton::staticMetaObject; break;
        case 145: m = &QRegExpValidator::staticMetaObject; break;
        case 146: m = &QRubberBand::staticMetaObject; break;
        case 147: m = &QScrollArea::staticMetaObject; break;
        case 148: m = &QScrollBar::staticMetaObject; break;
        case 149: m = &QSequentialAnimationGroup::staticMetaObject; break;
        case 150: m = &QSessionManager::staticMetaObject; break;
        case 151: m = &QSettings::staticMetaObject; break;
        case 152: m = &QShortcut::staticMetaObject; break;
        case 153: m = &QSignalTransition::staticMetaObject; break;
        case 154: m = &QSizeGrip::staticMetaObject; break;
        case 155: m = &QSlider::staticMetaObject; break;
        case 156: m = &QSortFilterProxyModel::staticMetaObject; break;
        case 157: m = &QSound::staticMetaObject; break;
        case 158: m = &QSpinBox::staticMetaObject; break;
        case 159: m = &QSplashScreen::staticMetaObject; break;
        case 160: m = &QSplitter::staticMetaObject; break;
        case 161: m = &QSplitterHandle::staticMetaObject; break;
        case 162: m = &QStackedLayout::staticMetaObject; break;
        case 163: m = &QStackedWidget::staticMetaObject; break;
        case 164: m = &QStandardItemModel::staticMetaObject; break;
        case 165: m = &QState::staticMetaObject; break;
        case 166: m = &QStateMachine::staticMetaObject; break;
        case 167: m = &QStatusBar::staticMetaObject; break;
        case 168: m = &QStringListModel::staticMetaObject; break;
        case 169: m = &QStyle::staticMetaObject; break;
        case 170: m = &QStyledItemDelegate::staticMetaObject; break;
        case 173: m = &QSwipeGesture::staticMetaObject; break;
        case 174: m = &QSyntaxHighlighter::staticMetaObject; break;
        case 175: m = &QSystemTrayIcon::staticMetaObject; break;
        case 176: m = &QTabBar::staticMetaObject; break;
        case 177: m = &QTabWidget::staticMetaObject; break;
        case 178: m = &QTableView::staticMetaObject; break;
        case 179: m = &QTableWidget::staticMetaObject; break;
        case 180: m = &QTapAndHoldGesture::staticMetaObject; break;
        case 181: m = &QTapGesture::staticMetaObject; break;
        case 184: m = &QTextBlockGroup::staticMetaObject; break;
        case 185: m = &QTextBrowser::staticMetaObject; break;
        case 186: m = &QTextDocument::staticMetaObject; break;
        case 187: m = &QTextEdit::staticMetaObject; break;
        case 188: m = &QTextFrame::staticMetaObject; break;
        case 189: m = &QTextList::staticMetaObject; break;
        case 190: m = &QTextObject::staticMetaObject; break;
        case 191: m = &QTextTable::staticMetaObject; break;
        case 192: m = &QThread::staticMetaObject; break;
        case 193: m = &QThreadPool::staticMetaObject; break;
        case 194: m = &QTimeEdit::staticMetaObject; break;
        case 195: m = &QTimeLine::staticMetaObject; break;
        case 196: m = &QTimer::staticMetaObject; break;
        case 197: m = &QToolBar::staticMetaObject; break;
        case 198: m = &QToolBox::staticMetaObject; break;
        case 199: m = &QToolButton::staticMetaObject; break;
        case 200: m = &QTranslator::staticMetaObject; break;
        case 201: m = &QTreeView::staticMetaObject; break;
        case 202: m = &QTreeWidget::staticMetaObject; break;
        case 204: m = &QUndoGroup::staticMetaObject; break;
        case 205: m = &QUndoStack::staticMetaObject; break;
        case 206: m = &QUndoView::staticMetaObject; break;
        case 207: m = &QVBoxLayout::staticMetaObject; break;
        case 208: m = &QValidator::staticMetaObject; break;
        case 209: m = &QVariantAnimation::staticMetaObject; break;
        case 210: m = &QWidget::staticMetaObject; break;
        case 211: m = &QWidgetAction::staticMetaObject; break;
        case 212: m = &QWindowsStyle::staticMetaObject; break;
        case 213: m = &QWizard::staticMetaObject; break;
        case 214: m = &QWizardPage::staticMetaObject; break;
        case 215: m = &QWorkspace::staticMetaObject; break;
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
            if(staticMetaObject_help) {
                m = staticMetaObject_help(n); }
            break;
        case 7:
        case 12:
        case 62:
        case 110:
        case 111:
        case 122:
        case 123:
        case 124:
        case 125:
        case 182:
        case 183:
        case 203:
            if(staticMetaObject_network) {
                m = staticMetaObject_network(n); }
            break;
        case 63:
        case 64:
        case 65:
            if(staticMetaObject_opengl) {
                m = staticMetaObject_opengl(n); }
            break;
        case 78:
        case 171:
        case 172:
            if(staticMetaObject_svg) {
                m = staticMetaObject_svg(n); }
            break; }
    return m; }

void LObjects::deleteNObject(int n, void* p) {
    switch(n) {
        case 1: delete (LAbstractGraphicsShapeItem*)p; break;
        case 2: delete (LAccessible*)p; break;
        case 3: delete (LAccessibleEvent*)p; break;
        case 4: delete (LAccessibleInterface*)p; break;
        case 6: delete (LAccessibleWidget*)p; break;
        case 7: delete (LActionEvent*)p; break;
        case 9: delete (LBasicTimer*)p; break;
        case 10: delete (LBitArray*)p; break;
        case 11: delete (LBitmap*)p; break;
        case 12: delete (LBrush*)p; break;
        case 13: delete (LChildEvent*)p; break;
        case 14: delete (LCloseEvent*)p; break;
        case 16: delete (LConicalGradient*)p; break;
        case 17: delete (LContextMenuEvent*)p; break;
        case 18: delete (LCryptographicHash*)p; break;
        case 19: delete (LCursor*)p; break;
        case 20: delete (LDate*)p; break;
        case 21: delete (LDateTime*)p; break;
        case 22: delete (LDesktopServices*)p; break;
        case 23: delete (LDir*)p; break;
        case 24: delete (LDirIterator*)p; break;
        case 25: delete (LDragEnterEvent*)p; break;
        case 26: delete (LDragLeaveEvent*)p; break;
        case 27: delete (LDragMoveEvent*)p; break;
        case 28: delete (LDropEvent*)p; break;
        case 29: delete (LDynamicPropertyChangeEvent*)p; break;
        case 30: delete (LEasingCurve*)p; break;
        case 31: delete (LEvent*)p; break;
        case 32: delete (LFileIconProvider*)p; break;
        case 33: delete (LFileInfo*)p; break;
        case 34: delete (LFileOpenEvent*)p; break;
        case 35: delete (LFocusEvent*)p; break;
        case 36: delete (LFont*)p; break;
        case 37: delete (LFontDatabase*)p; break;
        case 38: delete (LFontMetrics*)p; break;
        case 45: delete (LGestureEvent*)p; break;
        case 46: delete (LGradient*)p; break;
        case 47: delete (LGraphicsAnchorLayout*)p; break;
        case 48: delete (LGraphicsEllipseItem*)p; break;
        case 49: delete (LGraphicsGridLayout*)p; break;
        case 50: delete (LGraphicsItem*)p; break;
        case 51: delete (LGraphicsItemGroup*)p; break;
        case 52: delete (LGraphicsLayout*)p; break;
        case 53: delete (LGraphicsLayoutItem*)p; break;
        case 54: delete (LGraphicsLineItem*)p; break;
        case 55: delete (LGraphicsLinearLayout*)p; break;
        case 56: delete (LGraphicsPathItem*)p; break;
        case 57: delete (LGraphicsPixmapItem*)p; break;
        case 58: delete (LGraphicsPolygonItem*)p; break;
        case 59: delete (LGraphicsRectItem*)p; break;
        case 60: delete (LGraphicsSceneContextMenuEvent*)p; break;
        case 61: delete (LGraphicsSceneDragDropEvent*)p; break;
        case 62: delete (LGraphicsSceneEvent*)p; break;
        case 63: delete (LGraphicsSceneHelpEvent*)p; break;
        case 64: delete (LGraphicsSceneHoverEvent*)p; break;
        case 65: delete (LGraphicsSceneMouseEvent*)p; break;
        case 66: delete (LGraphicsSceneMoveEvent*)p; break;
        case 67: delete (LGraphicsSceneResizeEvent*)p; break;
        case 68: delete (LGraphicsSceneWheelEvent*)p; break;
        case 69: delete (LGraphicsSimpleTextItem*)p; break;
        case 71: delete (LHelpEvent*)p; break;
        case 73: delete (LHideEvent*)p; break;
        case 76: delete (LHoverEvent*)p; break;
        case 77: delete (LIcon*)p; break;
        case 78: delete (LIconDragEvent*)p; break;
        case 79: delete (LImage*)p; break;
        case 80: delete (LInputEvent*)p; break;
        case 81: delete (LInputMethodEvent*)p; break;
        case 82: delete (LItemEditorFactory*)p; break;
        case 83: delete (LItemSelection*)p; break;
        case 84: delete (LItemSelectionRange*)p; break;
        case 85: delete (LKeyEvent*)p; break;
        case 86: delete (LLayoutItem*)p; break;
        case 87: delete (LLibraryInfo*)p; break;
        case 88: delete (LLinearGradient*)p; break;
        case 89: delete (LListWidgetItem*)p; break;
        case 90: delete (LLocale*)p; break;
        case 91: delete (LMargins*)p; break;
        case 92: delete (LMatrix*)p; break;
        case 93: delete (LMatrix4x4*)p; break;
        case 94: delete (LMetaObject*)p; break;
        case 95: delete (LModelIndex*)p; break;
        case 96: delete (LMouseEvent*)p; break;
        case 97: delete (LMoveEvent*)p; break;
        case 98: delete (LMutex*)p; break;
        case 99: delete (LMutexLocker*)p; break;
        case 109: delete (LPaintEvent*)p; break;
        case 110: delete (LPainter*)p; break;
        case 111: delete (LPainterPath*)p; break;
        case 112: delete (LPainterPathStroker*)p; break;
        case 113: delete (LPalette*)p; break;
        case 114: delete (LPen*)p; break;
        case 115: delete (LPersistentModelIndex*)p; break;
        case 116: delete (LPicture*)p; break;
        case 117: delete (LPixmap*)p; break;
        case 118: delete (LPixmapCache*)p; break;
        case 119: delete (LPrinter*)p; break;
        case 120: delete (LPrinterInfo*)p; break;
        case 121: delete (LProcessEnvironment*)p; break;
        case 122: delete (LQuaternion*)p; break;
        case 123: delete (LRadialGradient*)p; break;
        case 124: delete (LReadLocker*)p; break;
        case 125: delete (LReadWriteLock*)p; break;
        case 126: delete (LRegExp*)p; break;
        case 127: delete (LRegion*)p; break;
        case 128: delete (LResizeEvent*)p; break;
        case 129: delete (LRunnable*)p; break;
        case 130: delete (LSemaphore*)p; break;
        case 131: delete (LShortcutEvent*)p; break;
        case 132: delete (LShowEvent*)p; break;
        case 133: delete (LSizePolicy*)p; break;
        case 134: delete (LSpacerItem*)p; break;
        case 140: delete (LStandardItem*)p; break;
        case 141: delete (LStatusTipEvent*)p; break;
        case 143: delete (LSystemSemaphore*)p; break;
        case 144: delete (LTableWidgetItem*)p; break;
        case 145: delete (LTableWidgetSelectionRange*)p; break;
        case 146: delete (LTabletEvent*)p; break;
        case 147: delete (LTextBlock*)p; break;
        case 148: delete (LTextBlockFormat*)p; break;
        case 149: delete (LTextBlockUserData*)p; break;
        case 150: delete (LTextBoundaryFinder*)p; break;
        case 151: delete (LTextCharFormat*)p; break;
        case 152: delete (LTextCodec*)p; break;
        case 153: delete (LTextCursor*)p; break;
        case 154: delete (LTextDecoder*)p; break;
        case 155: delete (LTextDocumentFragment*)p; break;
        case 156: delete (LTextDocumentWriter*)p; break;
        case 157: delete (LTextEncoder*)p; break;
        case 158: delete (LTextFormat*)p; break;
        case 159: delete (LTextFragment*)p; break;
        case 160: delete (LTextFrameFormat*)p; break;
        case 161: delete (LTextImageFormat*)p; break;
        case 162: delete (LTextLayout*)p; break;
        case 163: delete (LTextLength*)p; break;
        case 164: delete (LTextLine*)p; break;
        case 165: delete (LTextListFormat*)p; break;
        case 166: delete (LTextOption*)p; break;
        case 167: delete (LTextTableCell*)p; break;
        case 168: delete (LTextTableCellFormat*)p; break;
        case 169: delete (LTextTableFormat*)p; break;
        case 170: delete (LTime*)p; break;
        case 171: delete (LTimerEvent*)p; break;
        case 172: delete (LToolTip*)p; break;
        case 173: delete (LTouchEvent*)p; break;
        case 174: delete (LTransform*)p; break;
        case 175: delete (LTreeWidgetItem*)p; break;
        case 176: delete (LUndoCommand*)p; break;
        case 177: delete (LUrl*)p; break;
        case 179: delete (LVariant*)p; break;
        case 180: delete (LVector2D*)p; break;
        case 181: delete (LVector3D*)p; break;
        case 182: delete (LVector4D*)p; break;
        case 183: delete (LWaitCondition*)p; break;
        case 184: delete (LWhatsThis*)p; break;
        case 185: delete (LWhatsThisClickedEvent*)p; break;
        case 186: delete (LWheelEvent*)p; break;
        case 187: delete (LWidgetItem*)p; break;
        case 188: delete (LWindowStateChangeEvent*)p; break;
        case 189: delete (LWriteLocker*)p; break;
        case 70:
        case 72:
            if(deleteNObject_help) {
                deleteNObject_help(n, p); }
            break;
        case 8:
        case 74:
        case 75:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 135:
        case 136:
        case 137:
        case 138:
        case 139:
        case 178:
            if(deleteNObject_network) {
                deleteNObject_network(n, p); }
            break;
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
            if(deleteNObject_opengl) {
                deleteNObject_opengl(n, p); }
            break;
        case 142:
            if(deleteNObject_svg) {
                deleteNObject_svg(n, p); }
            break; }}

const char* LObjects::nObjectSuperClass(const QByteArray& name) {
    const char* s = 0;
    switch(LObjects::n_names.value(name)) {
        case 1: s = "QGraphicsItem"; break;
        case 3: s = "QEvent"; break;
        case 4: s = "QAccessible"; break;
        case 5: s = "QAccessibleInterface"; break;
        case 6: s = "QAccessibleObject"; break;
        case 7: s = "QEvent"; break;
        case 11: s = "QPixmap"; break;
        case 13: s = "QEvent"; break;
        case 14: s = "QEvent"; break;
        case 16: s = "QGradient"; break;
        case 17: s = "QInputEvent"; break;
        case 25: s = "QDragMoveEvent"; break;
        case 26: s = "QEvent"; break;
        case 27: s = "QDropEvent"; break;
        case 28: s = "QEvent"; break;
        case 29: s = "QEvent"; break;
        case 34: s = "QEvent"; break;
        case 35: s = "QEvent"; break;
        case 42: s = "QPaintDevice"; break;
        case 44: s = "QPaintDevice"; break;
        case 45: s = "QEvent"; break;
        case 47: s = "QGraphicsLayout"; break;
        case 48: s = "QAbstractGraphicsShapeItem"; break;
        case 49: s = "QGraphicsLayout"; break;
        case 51: s = "QGraphicsItem"; break;
        case 52: s = "QGraphicsLayoutItem"; break;
        case 54: s = "QGraphicsItem"; break;
        case 55: s = "QGraphicsLayout"; break;
        case 56: s = "QAbstractGraphicsShapeItem"; break;
        case 57: s = "QGraphicsItem"; break;
        case 58: s = "QAbstractGraphicsShapeItem"; break;
        case 59: s = "QAbstractGraphicsShapeItem"; break;
        case 60: s = "QGraphicsSceneEvent"; break;
        case 61: s = "QGraphicsSceneEvent"; break;
        case 62: s = "QEvent"; break;
        case 63: s = "QGraphicsSceneEvent"; break;
        case 64: s = "QGraphicsSceneEvent"; break;
        case 65: s = "QGraphicsSceneEvent"; break;
        case 66: s = "QGraphicsSceneEvent"; break;
        case 67: s = "QGraphicsSceneEvent"; break;
        case 68: s = "QGraphicsSceneEvent"; break;
        case 69: s = "QAbstractGraphicsShapeItem"; break;
        case 71: s = "QEvent"; break;
        case 73: s = "QEvent"; break;
        case 76: s = "QEvent"; break;
        case 78: s = "QEvent"; break;
        case 79: s = "QPaintDevice"; break;
        case 80: s = "QEvent"; break;
        case 81: s = "QEvent"; break;
        case 85: s = "QInputEvent"; break;
        case 88: s = "QGradient"; break;
        case 96: s = "QInputEvent"; break;
        case 97: s = "QEvent"; break;
        case 109: s = "QEvent"; break;
        case 116: s = "QPaintDevice"; break;
        case 117: s = "QPaintDevice"; break;
        case 119: s = "QPaintDevice"; break;
        case 123: s = "QGradient"; break;
        case 128: s = "QEvent"; break;
        case 131: s = "QEvent"; break;
        case 132: s = "QEvent"; break;
        case 134: s = "QLayoutItem"; break;
        case 141: s = "QEvent"; break;
        case 142: s = "QPaintDevice"; break;
        case 146: s = "QInputEvent"; break;
        case 148: s = "QTextFormat"; break;
        case 151: s = "QTextFormat"; break;
        case 160: s = "QTextFormat"; break;
        case 161: s = "QTextCharFormat"; break;
        case 165: s = "QTextFormat"; break;
        case 168: s = "QTextCharFormat"; break;
        case 169: s = "QTextFrameFormat"; break;
        case 171: s = "QEvent"; break;
        case 173: s = "QInputEvent"; break;
        case 185: s = "QEvent"; break;
        case 186: s = "QInputEvent"; break;
        case 187: s = "QLayoutItem"; break;
        case 188: s = "QEvent"; break; }
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
            case 8: ids = LAbstractPrintDialog::overrideIds; break;
            case 9: ids = LAbstractProxyModel::overrideIds; break;
            case 10: ids = LAbstractScrollArea::overrideIds; break;
            case 11: ids = LAbstractSlider::overrideIds; break;
            case 13: ids = LAbstractSpinBox::overrideIds; break;
            case 14: ids = LAbstractState::overrideIds; break;
            case 16: ids = LAbstractTextDocumentLayout::overrideIds; break;
            case 17: ids = LAbstractTransition::overrideIds; break;
            case 18: ids = LAction::overrideIds; break;
            case 19: ids = LActionGroup::overrideIds; break;
            case 20: ids = LAnimationGroup::overrideIds; break;
            case 21: ids = LApplication::overrideIds; break;
            case 22: ids = LBoxLayout::overrideIds; break;
            case 23: ids = LBuffer::overrideIds; break;
            case 24: ids = LButtonGroup::overrideIds; break;
            case 25: ids = LCDEStyle::overrideIds; break;
            case 26: ids = LCalendarWidget::overrideIds; break;
            case 27: ids = LCheckBox::overrideIds; break;
            case 28: ids = LCleanlooksStyle::overrideIds; break;
            case 30: ids = LColorDialog::overrideIds; break;
            case 31: ids = LColumnView::overrideIds; break;
            case 32: ids = LComboBox::overrideIds; break;
            case 33: ids = LCommandLinkButton::overrideIds; break;
            case 34: ids = LCommonStyle::overrideIds; break;
            case 35: ids = LCompleter::overrideIds; break;
            case 36: ids = LCoreApplication::overrideIds; break;
            case 37: ids = LDataWidgetMapper::overrideIds; break;
            case 38: ids = LDateEdit::overrideIds; break;
            case 39: ids = LDateTimeEdit::overrideIds; break;
            case 40: ids = LDesktopWidget::overrideIds; break;
            case 41: ids = LDial::overrideIds; break;
            case 42: ids = LDialog::overrideIds; break;
            case 43: ids = LDialogButtonBox::overrideIds; break;
            case 44: ids = LDirModel::overrideIds; break;
            case 45: ids = LDockWidget::overrideIds; break;
            case 46: ids = LDoubleSpinBox::overrideIds; break;
            case 47: ids = LDoubleValidator::overrideIds; break;
            case 48: ids = LDrag::overrideIds; break;
            case 49: ids = LErrorMessage::overrideIds; break;
            case 50: ids = LEventLoop::overrideIds; break;
            case 51: ids = LEventTransition::overrideIds; break;
            case 52: ids = LFile::overrideIds; break;
            case 53: ids = LFileDialog::overrideIds; break;
            case 54: ids = LFileSystemModel::overrideIds; break;
            case 55: ids = LFileSystemWatcher::overrideIds; break;
            case 56: ids = LFinalState::overrideIds; break;
            case 57: ids = LFocusFrame::overrideIds; break;
            case 58: ids = LFontComboBox::overrideIds; break;
            case 59: ids = LFontDialog::overrideIds; break;
            case 60: ids = LFormLayout::overrideIds; break;
            case 61: ids = LFrame::overrideIds; break;
            case 66: ids = LGesture::overrideIds; break;
            case 67: ids = LGraphicsAnchor::overrideIds; break;
            case 68: ids = LGraphicsBlurEffect::overrideIds; break;
            case 69: ids = LGraphicsColorizeEffect::overrideIds; break;
            case 70: ids = LGraphicsDropShadowEffect::overrideIds; break;
            case 71: ids = LGraphicsEffect::overrideIds; break;
            case 73: ids = LGraphicsOpacityEffect::overrideIds; break;
            case 74: ids = LGraphicsProxyWidget::overrideIds; break;
            case 75: ids = LGraphicsRotation::overrideIds; break;
            case 76: ids = LGraphicsScale::overrideIds; break;
            case 77: ids = LGraphicsScene::overrideIds; break;
            case 79: ids = LGraphicsTextItem::overrideIds; break;
            case 80: ids = LGraphicsTransform::overrideIds; break;
            case 81: ids = LGraphicsView::overrideIds; break;
            case 82: ids = LGraphicsWidget::overrideIds; break;
            case 83: ids = LGridLayout::overrideIds; break;
            case 84: ids = LGroupBox::overrideIds; break;
            case 85: ids = LHBoxLayout::overrideIds; break;
            case 86: ids = LHeaderView::overrideIds; break;
            case 95: ids = LHistoryState::overrideIds; break;
            case 96: ids = LIODevice::overrideIds; break;
            case 97: ids = LInputContext::overrideIds; break;
            case 98: ids = LInputDialog::overrideIds; break;
            case 99: ids = LIntValidator::overrideIds; break;
            case 100: ids = LItemDelegate::overrideIds; break;
            case 101: ids = LItemSelectionModel::overrideIds; break;
            case 102: ids = LKeyEventTransition::overrideIds; break;
            case 103: ids = LLCDNumber::overrideIds; break;
            case 104: ids = LLabel::overrideIds; break;
            case 106: ids = LLibrary::overrideIds; break;
            case 107: ids = LLineEdit::overrideIds; break;
            case 108: ids = LListView::overrideIds; break;
            case 109: ids = LListWidget::overrideIds; break;
            case 112: ids = LMainWindow::overrideIds; break;
            case 113: ids = LMdiArea::overrideIds; break;
            case 114: ids = LMdiSubWindow::overrideIds; break;
            case 115: ids = LMenu::overrideIds; break;
            case 116: ids = LMenuBar::overrideIds; break;
            case 117: ids = LMessageBox::overrideIds; break;
            case 118: ids = LMimeData::overrideIds; break;
            case 119: ids = LMotifStyle::overrideIds; break;
            case 120: ids = LMouseEventTransition::overrideIds; break;
            case 121: ids = LMovie::overrideIds; break;
            case 126: ids = LObject::overrideIds; break;
            case 127: ids = LPageSetupDialog::overrideIds; break;
            case 128: ids = LPanGesture::overrideIds; break;
            case 129: ids = LParallelAnimationGroup::overrideIds; break;
            case 130: ids = LPauseAnimation::overrideIds; break;
            case 131: ids = LPinchGesture::overrideIds; break;
            case 132: ids = LPlainTextDocumentLayout::overrideIds; break;
            case 133: ids = LPlainTextEdit::overrideIds; break;
            case 134: ids = LPlastiqueStyle::overrideIds; break;
            case 135: ids = LPluginLoader::overrideIds; break;
            case 136: ids = LPrintDialog::overrideIds; break;
            case 137: ids = LPrintPreviewDialog::overrideIds; break;
            case 138: ids = LPrintPreviewWidget::overrideIds; break;
            case 139: ids = LProcess::overrideIds; break;
            case 140: ids = LProgressBar::overrideIds; break;
            case 141: ids = LProgressDialog::overrideIds; break;
            case 142: ids = LPropertyAnimation::overrideIds; break;
            case 143: ids = LPushButton::overrideIds; break;
            case 144: ids = LRadioButton::overrideIds; break;
            case 145: ids = LRegExpValidator::overrideIds; break;
            case 146: ids = LRubberBand::overrideIds; break;
            case 147: ids = LScrollArea::overrideIds; break;
            case 148: ids = LScrollBar::overrideIds; break;
            case 149: ids = LSequentialAnimationGroup::overrideIds; break;
            case 151: ids = LSettings::overrideIds; break;
            case 152: ids = LShortcut::overrideIds; break;
            case 153: ids = LSignalTransition::overrideIds; break;
            case 154: ids = LSizeGrip::overrideIds; break;
            case 155: ids = LSlider::overrideIds; break;
            case 156: ids = LSortFilterProxyModel::overrideIds; break;
            case 157: ids = LSound::overrideIds; break;
            case 158: ids = LSpinBox::overrideIds; break;
            case 159: ids = LSplashScreen::overrideIds; break;
            case 160: ids = LSplitter::overrideIds; break;
            case 161: ids = LSplitterHandle::overrideIds; break;
            case 162: ids = LStackedLayout::overrideIds; break;
            case 163: ids = LStackedWidget::overrideIds; break;
            case 164: ids = LStandardItemModel::overrideIds; break;
            case 165: ids = LState::overrideIds; break;
            case 166: ids = LStateMachine::overrideIds; break;
            case 167: ids = LStatusBar::overrideIds; break;
            case 168: ids = LStringListModel::overrideIds; break;
            case 170: ids = LStyledItemDelegate::overrideIds; break;
            case 173: ids = LSwipeGesture::overrideIds; break;
            case 174: ids = LSyntaxHighlighter::overrideIds; break;
            case 175: ids = LSystemTrayIcon::overrideIds; break;
            case 176: ids = LTabBar::overrideIds; break;
            case 177: ids = LTabWidget::overrideIds; break;
            case 178: ids = LTableView::overrideIds; break;
            case 179: ids = LTableWidget::overrideIds; break;
            case 180: ids = LTapAndHoldGesture::overrideIds; break;
            case 181: ids = LTapGesture::overrideIds; break;
            case 184: ids = LTextBlockGroup::overrideIds; break;
            case 185: ids = LTextBrowser::overrideIds; break;
            case 186: ids = LTextDocument::overrideIds; break;
            case 187: ids = LTextEdit::overrideIds; break;
            case 188: ids = LTextFrame::overrideIds; break;
            case 189: ids = LTextList::overrideIds; break;
            case 190: ids = LTextObject::overrideIds; break;
            case 191: ids = LTextTable::overrideIds; break;
            case 192: ids = LThread::overrideIds; break;
            case 193: ids = LThreadPool::overrideIds; break;
            case 194: ids = LTimeEdit::overrideIds; break;
            case 195: ids = LTimeLine::overrideIds; break;
            case 196: ids = LTimer::overrideIds; break;
            case 197: ids = LToolBar::overrideIds; break;
            case 198: ids = LToolBox::overrideIds; break;
            case 199: ids = LToolButton::overrideIds; break;
            case 200: ids = LTranslator::overrideIds; break;
            case 201: ids = LTreeView::overrideIds; break;
            case 202: ids = LTreeWidget::overrideIds; break;
            case 204: ids = LUndoGroup::overrideIds; break;
            case 205: ids = LUndoStack::overrideIds; break;
            case 206: ids = LUndoView::overrideIds; break;
            case 207: ids = LVBoxLayout::overrideIds; break;
            case 208: ids = LValidator::overrideIds; break;
            case 209: ids = LVariantAnimation::overrideIds; break;
            case 210: ids = LWidget::overrideIds; break;
            case 211: ids = LWidgetAction::overrideIds; break;
            case 212: ids = LWindowsStyle::overrideIds; break;
            case 213: ids = LWizard::overrideIds; break;
            case 214: ids = LWizardPage::overrideIds; break;
            case 215: ids = LWorkspace::overrideIds; break;
            case 87:
            case 88:
            case 89:
            case 90:
            case 91:
            case 92:
            case 93:
            case 94:
                if(override_help) {
                    ids = *override_help(name); }
                break;
            case 7:
            case 12:
            case 62:
            case 110:
            case 111:
            case 122:
            case 123:
            case 124:
            case 125:
            case 182:
            case 183:
            case 203:
                if(override_network) {
                    ids = *override_network(name); }
                break;
            case 63:
            case 64:
            case 65:
                if(override_opengl) {
                    ids = *override_opengl(name); }
                break;
            case 78:
            case 171:
            case 172:
                if(override_svg) {
                    ids = *override_svg(name); }
                break; }}
    else {
        n = n_names.value(name);
        switch(n) {
            case 1: ids = LAbstractGraphicsShapeItem::overrideIds; break;
            case 2: ids = LAccessible::overrideIds; break;
            case 3: ids = LAccessibleEvent::overrideIds; break;
            case 4: ids = LAccessibleInterface::overrideIds; break;
            case 6: ids = LAccessibleWidget::overrideIds; break;
            case 7: ids = LActionEvent::overrideIds; break;
            case 9: ids = LBasicTimer::overrideIds; break;
            case 10: ids = LBitArray::overrideIds; break;
            case 11: ids = LBitmap::overrideIds; break;
            case 12: ids = LBrush::overrideIds; break;
            case 13: ids = LChildEvent::overrideIds; break;
            case 14: ids = LCloseEvent::overrideIds; break;
            case 16: ids = LConicalGradient::overrideIds; break;
            case 17: ids = LContextMenuEvent::overrideIds; break;
            case 18: ids = LCryptographicHash::overrideIds; break;
            case 19: ids = LCursor::overrideIds; break;
            case 20: ids = LDate::overrideIds; break;
            case 21: ids = LDateTime::overrideIds; break;
            case 22: ids = LDesktopServices::overrideIds; break;
            case 23: ids = LDir::overrideIds; break;
            case 24: ids = LDirIterator::overrideIds; break;
            case 25: ids = LDragEnterEvent::overrideIds; break;
            case 26: ids = LDragLeaveEvent::overrideIds; break;
            case 27: ids = LDragMoveEvent::overrideIds; break;
            case 28: ids = LDropEvent::overrideIds; break;
            case 29: ids = LDynamicPropertyChangeEvent::overrideIds; break;
            case 30: ids = LEasingCurve::overrideIds; break;
            case 31: ids = LEvent::overrideIds; break;
            case 32: ids = LFileIconProvider::overrideIds; break;
            case 33: ids = LFileInfo::overrideIds; break;
            case 34: ids = LFileOpenEvent::overrideIds; break;
            case 35: ids = LFocusEvent::overrideIds; break;
            case 36: ids = LFont::overrideIds; break;
            case 37: ids = LFontDatabase::overrideIds; break;
            case 38: ids = LFontMetrics::overrideIds; break;
            case 45: ids = LGestureEvent::overrideIds; break;
            case 46: ids = LGradient::overrideIds; break;
            case 47: ids = LGraphicsAnchorLayout::overrideIds; break;
            case 48: ids = LGraphicsEllipseItem::overrideIds; break;
            case 49: ids = LGraphicsGridLayout::overrideIds; break;
            case 50: ids = LGraphicsItem::overrideIds; break;
            case 51: ids = LGraphicsItemGroup::overrideIds; break;
            case 52: ids = LGraphicsLayout::overrideIds; break;
            case 53: ids = LGraphicsLayoutItem::overrideIds; break;
            case 54: ids = LGraphicsLineItem::overrideIds; break;
            case 55: ids = LGraphicsLinearLayout::overrideIds; break;
            case 56: ids = LGraphicsPathItem::overrideIds; break;
            case 57: ids = LGraphicsPixmapItem::overrideIds; break;
            case 58: ids = LGraphicsPolygonItem::overrideIds; break;
            case 59: ids = LGraphicsRectItem::overrideIds; break;
            case 60: ids = LGraphicsSceneContextMenuEvent::overrideIds; break;
            case 61: ids = LGraphicsSceneDragDropEvent::overrideIds; break;
            case 62: ids = LGraphicsSceneEvent::overrideIds; break;
            case 63: ids = LGraphicsSceneHelpEvent::overrideIds; break;
            case 64: ids = LGraphicsSceneHoverEvent::overrideIds; break;
            case 65: ids = LGraphicsSceneMouseEvent::overrideIds; break;
            case 66: ids = LGraphicsSceneMoveEvent::overrideIds; break;
            case 67: ids = LGraphicsSceneResizeEvent::overrideIds; break;
            case 68: ids = LGraphicsSceneWheelEvent::overrideIds; break;
            case 69: ids = LGraphicsSimpleTextItem::overrideIds; break;
            case 71: ids = LHelpEvent::overrideIds; break;
            case 73: ids = LHideEvent::overrideIds; break;
            case 76: ids = LHoverEvent::overrideIds; break;
            case 77: ids = LIcon::overrideIds; break;
            case 78: ids = LIconDragEvent::overrideIds; break;
            case 79: ids = LImage::overrideIds; break;
            case 80: ids = LInputEvent::overrideIds; break;
            case 81: ids = LInputMethodEvent::overrideIds; break;
            case 82: ids = LItemEditorFactory::overrideIds; break;
            case 83: ids = LItemSelection::overrideIds; break;
            case 84: ids = LItemSelectionRange::overrideIds; break;
            case 85: ids = LKeyEvent::overrideIds; break;
            case 86: ids = LLayoutItem::overrideIds; break;
            case 87: ids = LLibraryInfo::overrideIds; break;
            case 88: ids = LLinearGradient::overrideIds; break;
            case 89: ids = LListWidgetItem::overrideIds; break;
            case 90: ids = LLocale::overrideIds; break;
            case 91: ids = LMargins::overrideIds; break;
            case 92: ids = LMatrix::overrideIds; break;
            case 93: ids = LMatrix4x4::overrideIds; break;
            case 94: ids = LMetaObject::overrideIds; break;
            case 95: ids = LModelIndex::overrideIds; break;
            case 96: ids = LMouseEvent::overrideIds; break;
            case 97: ids = LMoveEvent::overrideIds; break;
            case 98: ids = LMutex::overrideIds; break;
            case 99: ids = LMutexLocker::overrideIds; break;
            case 109: ids = LPaintEvent::overrideIds; break;
            case 110: ids = LPainter::overrideIds; break;
            case 111: ids = LPainterPath::overrideIds; break;
            case 112: ids = LPainterPathStroker::overrideIds; break;
            case 113: ids = LPalette::overrideIds; break;
            case 114: ids = LPen::overrideIds; break;
            case 115: ids = LPersistentModelIndex::overrideIds; break;
            case 116: ids = LPicture::overrideIds; break;
            case 117: ids = LPixmap::overrideIds; break;
            case 118: ids = LPixmapCache::overrideIds; break;
            case 119: ids = LPrinter::overrideIds; break;
            case 120: ids = LPrinterInfo::overrideIds; break;
            case 121: ids = LProcessEnvironment::overrideIds; break;
            case 122: ids = LQuaternion::overrideIds; break;
            case 123: ids = LRadialGradient::overrideIds; break;
            case 124: ids = LReadLocker::overrideIds; break;
            case 125: ids = LReadWriteLock::overrideIds; break;
            case 126: ids = LRegExp::overrideIds; break;
            case 127: ids = LRegion::overrideIds; break;
            case 128: ids = LResizeEvent::overrideIds; break;
            case 129: ids = LRunnable::overrideIds; break;
            case 130: ids = LSemaphore::overrideIds; break;
            case 131: ids = LShortcutEvent::overrideIds; break;
            case 132: ids = LShowEvent::overrideIds; break;
            case 133: ids = LSizePolicy::overrideIds; break;
            case 134: ids = LSpacerItem::overrideIds; break;
            case 140: ids = LStandardItem::overrideIds; break;
            case 141: ids = LStatusTipEvent::overrideIds; break;
            case 143: ids = LSystemSemaphore::overrideIds; break;
            case 144: ids = LTableWidgetItem::overrideIds; break;
            case 145: ids = LTableWidgetSelectionRange::overrideIds; break;
            case 146: ids = LTabletEvent::overrideIds; break;
            case 147: ids = LTextBlock::overrideIds; break;
            case 148: ids = LTextBlockFormat::overrideIds; break;
            case 149: ids = LTextBlockUserData::overrideIds; break;
            case 150: ids = LTextBoundaryFinder::overrideIds; break;
            case 151: ids = LTextCharFormat::overrideIds; break;
            case 152: ids = LTextCodec::overrideIds; break;
            case 153: ids = LTextCursor::overrideIds; break;
            case 154: ids = LTextDecoder::overrideIds; break;
            case 155: ids = LTextDocumentFragment::overrideIds; break;
            case 156: ids = LTextDocumentWriter::overrideIds; break;
            case 157: ids = LTextEncoder::overrideIds; break;
            case 158: ids = LTextFormat::overrideIds; break;
            case 159: ids = LTextFragment::overrideIds; break;
            case 160: ids = LTextFrameFormat::overrideIds; break;
            case 161: ids = LTextImageFormat::overrideIds; break;
            case 162: ids = LTextLayout::overrideIds; break;
            case 163: ids = LTextLength::overrideIds; break;
            case 164: ids = LTextLine::overrideIds; break;
            case 165: ids = LTextListFormat::overrideIds; break;
            case 166: ids = LTextOption::overrideIds; break;
            case 167: ids = LTextTableCell::overrideIds; break;
            case 168: ids = LTextTableCellFormat::overrideIds; break;
            case 169: ids = LTextTableFormat::overrideIds; break;
            case 170: ids = LTime::overrideIds; break;
            case 171: ids = LTimerEvent::overrideIds; break;
            case 172: ids = LToolTip::overrideIds; break;
            case 173: ids = LTouchEvent::overrideIds; break;
            case 174: ids = LTransform::overrideIds; break;
            case 175: ids = LTreeWidgetItem::overrideIds; break;
            case 176: ids = LUndoCommand::overrideIds; break;
            case 177: ids = LUrl::overrideIds; break;
            case 179: ids = LVariant::overrideIds; break;
            case 180: ids = LVector2D::overrideIds; break;
            case 181: ids = LVector3D::overrideIds; break;
            case 182: ids = LVector4D::overrideIds; break;
            case 183: ids = LWaitCondition::overrideIds; break;
            case 184: ids = LWhatsThis::overrideIds; break;
            case 185: ids = LWhatsThisClickedEvent::overrideIds; break;
            case 186: ids = LWheelEvent::overrideIds; break;
            case 187: ids = LWidgetItem::overrideIds; break;
            case 188: ids = LWindowStateChangeEvent::overrideIds; break;
            case 189: ids = LWriteLocker::overrideIds; break;
            case 70:
            case 72:
                if(override_help) {
                    ids = *override_help(name); }
                break;
            case 8:
            case 74:
            case 75:
            case 100:
            case 101:
            case 102:
            case 103:
            case 104:
            case 105:
            case 106:
            case 107:
            case 135:
            case 136:
            case 137:
            case 138:
            case 139:
            case 178:
                if(override_network) {
                    ids = *override_network(name); }
                break;
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
                if(override_opengl) {
                    ids = *override_opengl(name); }
                break;
            case 142:
                if(override_svg) {
                    ids = *override_svg(name); }
                break; }}
    StrList funs;
    Q_FOREACH(int id, ids) {
        const char* ret = override_arg_types[id - 1][0];
        funs << QString("%1 %2")
                .arg(ret ? ret : "void")
                .arg(QString(override_function_ids.key(id))).toAscii(); }
    return funs; }
