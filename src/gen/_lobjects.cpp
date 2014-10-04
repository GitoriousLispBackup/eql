// THIS FILE IS GENERATED (see helper/)

#include "_lobjects.h"
#include "_main_q_classes.h"
#include "_main_n_classes.h"
#include "_main_q_methods.h"
#include "_main_n_methods.h"
#include "../dyn_object.h"
#include "../eql.h"

int LObjects::T_GLenum = -1;
int LObjects::T_GLint = -1;
int LObjects::T_GLfloat = -1;
int LObjects::T_GLuint = -1;
int LObjects::T_QGLFormat = -1;
int LObjects::T_QGLFramebufferObjectFormat = -1;
int LObjects::T_QHostAddress = -1;
int LObjects::T_QHostInfo = -1;
int LObjects::T_QNetworkCacheMetaData = -1;
int LObjects::T_QNetworkInterface = -1;
int LObjects::T_QNetworkProxy = -1;
int LObjects::T_QNetworkRequest = -1;
int LObjects::T_QSslCertificate = -1;
int LObjects::T_QSslCipher = -1;
int LObjects::T_QSslConfiguration = -1;
int LObjects::T_QSslKey = -1;
int LObjects::T_QSqlDatabase = -1;
int LObjects::T_QSqlError = -1;
int LObjects::T_QSqlField = -1;
int LObjects::T_QSqlIndex = -1;
int LObjects::T_QSqlQuery = -1;
int LObjects::T_QSqlRecord = -1;
int LObjects::T_QSqlRelation = -1;
int LObjects::T_QWebElement = -1;
int LObjects::T_QWebElementCollection = -1;
int LObjects::T_QWebHitTestResult = -1;

EQL* LObjects::eql = 0;
DynObject* LObjects::dynObject = 0;
QObject** LObjects::Q = 0;
QObject** LObjects::N = 0;
bool LObjects::call_default = false;
quint64 LObjects::calling = 0;
QList<quint64> LObjects::callingList;
uint LObjects::i_unique = 0;
const char*** LObjects::override_arg_types = 0;
QList<QByteArray> LObjects::qNames;
QList<QByteArray> LObjects::nNames;
QMap<QByteArray, int> LObjects::q_names;
QMap<QByteArray, int> LObjects::n_names;
QHash<QByteArray, uint> LObjects::override_function_ids;
QHash<quint64, void*> LObjects::override_lisp_functions;

StaticMetaObject LObjects::staticMetaObject_help = 0;
StaticMetaObject LObjects::staticMetaObject_network = 0;
StaticMetaObject LObjects::staticMetaObject_opengl = 0;
StaticMetaObject LObjects::staticMetaObject_sql = 0;
StaticMetaObject LObjects::staticMetaObject_svg = 0;
StaticMetaObject LObjects::staticMetaObject_webkit = 0;
DeleteNObject LObjects::deleteNObject_help = 0;
DeleteNObject LObjects::deleteNObject_network = 0;
DeleteNObject LObjects::deleteNObject_opengl = 0;
DeleteNObject LObjects::deleteNObject_sql = 0;
DeleteNObject LObjects::deleteNObject_svg = 0;
DeleteNObject LObjects::deleteNObject_webkit = 0;
Override LObjects::override_help = 0;
Override LObjects::override_network = 0;
Override LObjects::override_opengl = 0;
Override LObjects::override_sql = 0;
Override LObjects::override_svg = 0;
Override LObjects::override_webkit = 0;
ToMetaArg LObjects::toMetaArg_network = 0;
To_lisp_arg LObjects::to_lisp_arg_network = 0;
ToMetaArg LObjects::toMetaArg_opengl = 0;
To_lisp_arg LObjects::to_lisp_arg_opengl = 0;
ToMetaArg LObjects::toMetaArg_sql = 0;
To_lisp_arg LObjects::to_lisp_arg_sql = 0;
ToMetaArg LObjects::toMetaArg_webkit = 0;
To_lisp_arg LObjects::to_lisp_arg_webkit = 0;

NumList LAbstractAnimation::overrideIds = NumList() << 1 << 2 << 3 << 4;
NumList LAbstractButton::overrideIds = NumList() << 11 << 12 << 13 << 14 << 15 << 16 << 17 << 18 << 19 << 20 << 21 << 22 << 10;
NumList LAbstractItemDelegate::overrideIds = NumList() << 46 << 47 << 48 << 49 << 50 << 51 << 52;
NumList LAbstractItemModel::overrideIds = NumList() << 53 << 54 << 55 << 56 << 57 << 58 << 59 << 60 << 61 << 62 << 63 << 64 << 65 << 66 << 67 << 68 << 69 << 70 << 71 << 72 << 73 << 74 << 75 << 76;
NumList LAbstractItemView::overrideIds = NumList() << 77 << 78 << 79 << 80 << 81 << 82 << 83 << 84 << 85 << 86 << 87 << 88 << 89 << 90 << 91 << 92 << 93 << 94 << 95 << 24 << 30 << 31 << 32 << 33 << 15 << 35 << 16 << 37 << 17 << 39 << 19 << 20 << 21 << 41 << 10 << 96;
NumList LAbstractListModel::overrideIds = NumList() << 57 << 62;
NumList LAbstractPrintDialog::overrideIds = NumList() << 98;
NumList LAbstractProxyModel::overrideIds = NumList() << 100 << 101 << 102 << 103 << 104 << 56 << 59 << 61 << 105 << 72 << 73 << 106;
NumList LAbstractScrollArea::overrideIds = NumList() << 97 << 96 << 25 << 26 << 29 << 30 << 31 << 32 << 33 << 17 << 39 << 19 << 20 << 21 << 22 << 41 << 44;
NumList LAbstractSlider::overrideIds = NumList() << 107 << 14 << 17 << 10 << 44;
NumList LAbstractSpinBox::overrideIds = NumList() << 124 << 125 << 126 << 127 << 24 << 25 << 26 << 14 << 28 << 29 << 15 << 16 << 36 << 17 << 18 << 19 << 20 << 21 << 22 << 41 << 42 << 10 << 44;
NumList LAbstractState::overrideIds = NumList() << 128 << 129;
NumList LAbstractTextDocumentLayout::overrideIds = NumList() << 130 << 131 << 132 << 133 << 134 << 135 << 136 << 137 << 138 << 139;
NumList LAbstractTransition::overrideIds = NumList() << 140 << 141;
NumList LAction::overrideIds = NumList();
NumList LActionGroup::overrideIds = NumList();
NumList LAnimationGroup::overrideIds = NumList();
NumList LApplication::overrideIds = NumList() << 142 << 143 << 144;
NumList LBoxLayout::overrideIds = NumList() << 145 << 146 << 147 << 148 << 23 << 149 << 150 << 151 << 152 << 153 << 154 << 26 << 155;
NumList LBuffer::overrideIds = NumList() << 108 << 111 << 112 << 119 << 120 << 122 << 123 << 116 << 118;
NumList LButtonGroup::overrideIds = NumList();
NumList LCDEStyle::overrideIds = NumList() << 160 << 161 << 162 << 163;
NumList LCalendarWidget::overrideIds = NumList() << 181 << 25 << 26 << 5 << 17 << 20 << 41;
NumList LCheckBox::overrideIds = NumList() << 26 << 11 << 12 << 19 << 13 << 22;
NumList LCleanlooksStyle::overrideIds = NumList() << 164 << 160 << 177 << 178 << 161 << 171 << 172 << 179 << 162 << 174 << 173 << 165 << 166 << 163 << 167 << 168 << 169 << 170 << 175 << 176;
NumList LColorDialog::overrideIds = NumList() << 99 << 14 << 182;
NumList LColumnView::overrideIds = NumList() << 183 << 77 << 79 << 184 << 80 << 185 << 81 << 26 << 84 << 186 << 86 << 87 << 88 << 41 << 187 << 97 << 91 << 93 << 95;
NumList LComboBox::overrideIds = NumList() << 188 << 189 << 25 << 26 << 14 << 29 << 15 << 16 << 36 << 37 << 24 << 17 << 18 << 20 << 21 << 22 << 41 << 42 << 44;
NumList LCommandLinkButton::overrideIds = NumList() << 23 << 25 << 22 << 26;
NumList LCommonStyle::overrideIds = NumList() << 164 << 160 << 161 << 171 << 172 << 162 << 165 << 173 << 174 << 166 << 167 << 168 << 169 << 170 << 175 << 176;
NumList LCompleter::overrideIds = NumList() << 190 << 191 << 5;
NumList LCoreApplication::overrideIds = NumList() << 144;
NumList LDataWidgetMapper::overrideIds = NumList();
NumList LDateEdit::overrideIds = NumList();
NumList LDateTimeEdit::overrideIds = NumList() << 192 << 193 << 194 << 26 << 125 << 124 << 15 << 35 << 17 << 20 << 22 << 127 << 126 << 44;
NumList LDesktopWidget::overrideIds = NumList() << 41;
NumList LDial::overrideIds = NumList() << 25 << 26 << 19 << 20 << 21 << 22 << 41 << 107;
NumList LDialog::overrideIds = NumList() << 25 << 99 << 26 << 28 << 29 << 5 << 17 << 41 << 42;
NumList LDialogButtonBox::overrideIds = NumList() << 14;
NumList LDirModel::overrideIds = NumList() << 55 << 56 << 57 << 59 << 60 << 61 << 62 << 66 << 67 << 68 << 71 << 72 << 74 << 76;
NumList LDockWidget::overrideIds = NumList() << 14 << 28 << 22;
NumList LDoubleSpinBox::overrideIds = NumList() << 195 << 196 << 124 << 126;
NumList LDoubleValidator::overrideIds = NumList() << 197 << 126;
NumList LDrag::overrideIds = NumList();
NumList LErrorMessage::overrideIds = NumList() << 14 << 182;
NumList LEventLoop::overrideIds = NumList();
NumList LEventTransition::overrideIds = NumList() << 140 << 141;
NumList LFile::overrideIds = NumList() << 108 << 112 << 113 << 119 << 120 << 122 << 123 << 116 << 117 << 118;
NumList LFileDialog::overrideIds = NumList() << 99 << 198 << 14 << 182;
NumList LFileSystemModel::overrideIds = NumList() << 54 << 55 << 56 << 57 << 58 << 59 << 60 << 61 << 62 << 66 << 67 << 68 << 71 << 72 << 74 << 76 << 10;
NumList LFileSystemWatcher::overrideIds = NumList();
NumList LFinalState::overrideIds = NumList() << 128 << 129;
NumList LFocusFrame::overrideIds = NumList() << 5 << 22;
NumList LFontComboBox::overrideIds = NumList() << 26;
NumList LFontDialog::overrideIds = NumList() << 99 << 14 << 182;
NumList LFormLayout::overrideIds = NumList() << 145 << 146 << 147 << 148 << 23 << 149 << 150 << 153 << 154 << 26 << 155;
NumList LFrame::overrideIds = NumList() << 26 << 14 << 22;
NumList LGesture::overrideIds = NumList();
NumList LGraphicsAnchor::overrideIds = NumList();
NumList LGraphicsBlurEffect::overrideIds = NumList() << 208 << 209;
NumList LGraphicsColorizeEffect::overrideIds = NumList() << 209;
NumList LGraphicsDropShadowEffect::overrideIds = NumList() << 208 << 209;
NumList LGraphicsEffect::overrideIds = NumList() << 208 << 209 << 210;
NumList LGraphicsOpacityEffect::overrideIds = NumList() << 209;
NumList LGraphicsProxyWidget::overrideIds = NumList() << 211 << 212 << 213 << 214 << 215 << 216 << 217 << 218 << 5 << 15 << 35 << 16 << 219 << 36 << 220 << 221 << 222 << 223 << 17 << 18 << 224 << 225 << 226 << 227 << 228 << 42 << 229 << 230 << 231;
NumList LGraphicsRotation::overrideIds = NumList() << 244;
NumList LGraphicsScale::overrideIds = NumList() << 244;
NumList LGraphicsScene::overrideIds = NumList() << 24 << 214 << 215 << 216 << 217 << 245 << 246 << 218 << 15 << 16 << 247 << 37 << 17 << 18 << 224 << 225 << 226 << 227 << 231 << 5;
NumList LGraphicsTextItem::overrideIds = NumList() << 240 << 248 << 249 << 250 << 211 << 241 << 213 << 214 << 215 << 216 << 217 << 218 << 15 << 16 << 220 << 221 << 222 << 37 << 24 << 17 << 18 << 224 << 225 << 226 << 227 << 242;
NumList LGraphicsTransform::overrideIds = NumList() << 244;
NumList LGraphicsView::overrideIds = NumList() << 245 << 246 << 24 << 26 << 29 << 30 << 31 << 32 << 33 << 15 << 35 << 16 << 37 << 17 << 18 << 39 << 19 << 20 << 21 << 22 << 41 << 97 << 42 << 96 << 44;
NumList LGraphicsWidget::overrideIds = NumList() << 232 << 14 << 28 << 35 << 233 << 219 << 36 << 234 << 235 << 236 << 228 << 42 << 237 << 230 << 238 << 239 << 240 << 211 << 212 << 241 << 213 << 15 << 16 << 221 << 222 << 223 << 242 << 229 << 243;
NumList LGridLayout::overrideIds = NumList() << 146 << 147 << 148 << 23 << 149 << 150 << 151 << 152 << 153 << 154 << 26 << 155 << 145;
NumList LGroupBox::overrideIds = NumList() << 25 << 14 << 6 << 15 << 19 << 20 << 21 << 22 << 41;
NumList LHBoxLayout::overrideIds = NumList();
NumList LHeaderView::overrideIds = NumList() << 251 << 252 << 121 << 80 << 26 << 186 << 86 << 39 << 19 << 20 << 21 << 22 << 91 << 93 << 96;
NumList LHistoryState::overrideIds = NumList() << 128 << 129;
NumList LIODevice::overrideIds = NumList() << 108 << 109 << 110 << 111 << 112 << 113 << 119 << 120 << 121 << 122 << 123 << 114 << 115 << 116 << 117 << 118;
NumList LInputContext::overrideIds = NumList() << 259 << 260 << 261 << 262 << 263 << 264 << 121 << 265 << 266 << 267;
NumList LInputDialog::overrideIds = NumList() << 182 << 25 << 99 << 26;
NumList LIntValidator::overrideIds = NumList() << 268 << 126;
NumList LItemDelegate::overrideIds = NumList() << 269 << 270 << 271 << 272 << 46 << 48 << 49 << 50 << 51 << 52 << 47 << 5;
NumList LItemSelectionModel::overrideIds = NumList();
NumList LKeyEventTransition::overrideIds = NumList() << 140 << 141;
NumList LLCDNumber::overrideIds = NumList() << 26 << 22;
NumList LLabel::overrideIds = NumList() << 23 << 25 << 26 << 14 << 29 << 15 << 35 << 16 << 17 << 19 << 20 << 21 << 22;
NumList LLibrary::overrideIds = NumList();
NumList LLineEdit::overrideIds = NumList() << 24 << 25 << 26 << 14 << 29 << 30 << 31 << 32 << 33 << 15 << 16 << 37 << 17 << 39 << 19 << 20 << 21 << 22;
NumList LListView::overrideIds = NumList() << 77 << 79 << 84 << 186 << 255 << 31 << 32 << 33 << 86 << 87 << 19 << 21 << 88 << 22 << 41 << 256 << 187 << 89 << 257 << 91 << 92 << 10 << 258 << 93 << 94 << 95;
NumList LListWidget::overrideIds = NumList() << 273 << 274 << 67 << 76 << 33;
NumList LMainWindow::overrideIds = NumList() << 278 << 29;
NumList LMdiArea::overrideIds = NumList() << 25 << 26 << 6 << 5 << 22 << 41 << 97 << 42 << 10 << 96;
NumList LMdiSubWindow::overrideIds = NumList() << 25 << 26 << 14 << 6 << 28 << 29 << 5 << 15 << 16 << 36 << 17 << 38 << 39 << 19 << 20 << 21 << 40 << 22 << 41 << 42 << 10;
NumList LMenu::overrideIds = NumList() << 26 << 27 << 14 << 34 << 35 << 36 << 17 << 38 << 19 << 20 << 21 << 22 << 10 << 44;
NumList LMenuBar::overrideIds = NumList() << 23 << 25 << 26 << 27 << 14 << 5 << 15 << 16 << 17 << 38 << 19 << 20 << 21 << 22 << 41 << 10;
NumList LMessageBox::overrideIds = NumList() << 99 << 14 << 28 << 17 << 41 << 42;
NumList LMimeData::overrideIds = NumList() << 279 << 280 << 281;
NumList LMotifStyle::overrideIds = NumList() << 164 << 160 << 161 << 162 << 165 << 166 << 163 << 167 << 168 << 169 << 170 << 10;
NumList LMouseEventTransition::overrideIds = NumList() << 140 << 141;
NumList LMovie::overrideIds = NumList();
NumList LObject::overrideIds = NumList() << 5 << 6 << 7 << 8 << 9 << 10;
NumList LPageSetupDialog::overrideIds = NumList() << 99;
NumList LPanGesture::overrideIds = NumList();
NumList LParallelAnimationGroup::overrideIds = NumList() << 1 << 2 << 3 << 4;
NumList LPauseAnimation::overrideIds = NumList() << 1 << 2;
NumList LPinchGesture::overrideIds = NumList();
NumList LPlainTextDocumentLayout::overrideIds = NumList() << 130 << 131 << 132 << 133 << 134 << 135 << 136;
NumList LPlainTextEdit::overrideIds = NumList() << 289 << 290 << 291 << 292 << 14 << 29 << 30 << 31 << 32 << 33 << 15 << 35 << 16 << 37 << 24 << 17 << 18 << 39 << 19 << 20 << 21 << 22 << 41 << 97 << 42 << 44;
NumList LPlastiqueStyle::overrideIds = NumList() << 164 << 160 << 161 << 172 << 162 << 174 << 173 << 165 << 166 << 163 << 167 << 168 << 169 << 170 << 175 << 176 << 5 << 10;
NumList LPluginLoader::overrideIds = NumList();
NumList LPrintDialog::overrideIds = NumList() << 182 << 98 << 99;
NumList LPrintPreviewDialog::overrideIds = NumList() << 182 << 99;
NumList LPrintPreviewWidget::overrideIds = NumList() << 99;
NumList LProcess::overrideIds = NumList() << 293 << 108 << 109 << 110 << 111 << 112 << 113 << 114 << 115 << 116 << 118;
NumList LProgressBar::overrideIds = NumList() << 294 << 25 << 26 << 22;
NumList LProgressDialog::overrideIds = NumList() << 26 << 14 << 28 << 41 << 42;
NumList LPropertyAnimation::overrideIds = NumList() << 295 << 4;
NumList LPushButton::overrideIds = NumList() << 25 << 26 << 15 << 16 << 17 << 22;
NumList LRadioButton::overrideIds = NumList() << 26 << 12 << 19 << 22;
NumList LRegExpValidator::overrideIds = NumList() << 126;
NumList LRubberBand::overrideIds = NumList() << 14 << 40 << 22 << 41 << 42;
NumList LScrollArea::overrideIds = NumList() << 35 << 26 << 5 << 41 << 97;
NumList LScrollBar::overrideIds = NumList() << 26 << 29 << 36 << 19 << 20 << 21 << 22 << 107;
NumList LSequentialAnimationGroup::overrideIds = NumList() << 1 << 2 << 3 << 4;
NumList LSettings::overrideIds = NumList();
NumList LShortcut::overrideIds = NumList();
NumList LSignalTransition::overrideIds = NumList() << 140 << 141;
NumList LSizeGrip::overrideIds = NumList() << 99 << 26 << 5 << 36 << 19 << 20 << 21 << 40 << 22 << 42;
NumList LSlider::overrideIds = NumList() << 25 << 26 << 19 << 20 << 21 << 22;
NumList LSortFilterProxyModel::overrideIds = NumList() << 297 << 298 << 299 << 53 << 54 << 55 << 56 << 57 << 58 << 59 << 60 << 61 << 62 << 63 << 64 << 100 << 101 << 102 << 103 << 65 << 66 << 67 << 68 << 69 << 70 << 71 << 72 << 73 << 104 << 74 << 75 << 76;
NumList LSound::overrideIds = NumList();
NumList LSpinBox::overrideIds = NumList() << 300 << 196 << 124 << 126;
NumList LSplashScreen::overrideIds = NumList() << 301 << 20;
NumList LSplitter::overrideIds = NumList() << 25 << 26 << 14 << 6 << 41;
NumList LSplitterHandle::overrideIds = NumList() << 26 << 19 << 20 << 21 << 22;
NumList LStackedLayout::overrideIds = NumList() << 145 << 146 << 150 << 153 << 154 << 26 << 155;
NumList LStackedWidget::overrideIds = NumList();
NumList LStandardItemModel::overrideIds = NumList() << 55 << 56 << 57 << 59 << 60 << 61 << 62 << 63 << 64 << 66 << 67 << 68 << 69 << 70 << 71 << 72 << 73 << 74 << 76;
NumList LState::overrideIds = NumList() << 128 << 129;
NumList LStateMachine::overrideIds = NumList() << 5 << 128 << 129;
NumList LStatusBar::overrideIds = NumList() << 22 << 41 << 42;
NumList LStringListModel::overrideIds = NumList() << 56 << 59 << 64 << 70 << 71 << 72 << 74 << 76;
NumList LStyledItemDelegate::overrideIds = NumList() << 333 << 334 << 46 << 48 << 49 << 50 << 51 << 52 << 47 << 5;
NumList LSwipeGesture::overrideIds = NumList();
NumList LSyntaxHighlighter::overrideIds = NumList() << 335;
NumList LSystemTrayIcon::overrideIds = NumList();
NumList LTabBar::overrideIds = NumList() << 336 << 337 << 338 << 339 << 25 << 26 << 14 << 36 << 17 << 19 << 20 << 21 << 22 << 41 << 42 << 44;
NumList LTabWidget::overrideIds = NumList() << 336 << 338 << 25 << 26 << 14 << 17 << 22 << 41 << 42;
NumList LTableView::overrideIds = NumList() << 77 << 80 << 185 << 81 << 186 << 86 << 87 << 88 << 22 << 89 << 257 << 91 << 82 << 83 << 10 << 258 << 93 << 94;
NumList LTableWidget::overrideIds = NumList() << 340 << 341 << 67 << 76 << 33;
NumList LTapAndHoldGesture::overrideIds = NumList();
NumList LTapGesture::overrideIds = NumList();
NumList LTextBlockGroup::overrideIds = NumList() << 343 << 344 << 345;
NumList LTextBrowser::overrideIds = NumList() << 289 << 35 << 16 << 17 << 19 << 20 << 21 << 22;
NumList LTextDocument::overrideIds = NumList() << 194 << 346 << 289;
NumList LTextEdit::overrideIds = NumList() << 289 << 290 << 291 << 292 << 14 << 29 << 30 << 31 << 32 << 33 << 15 << 35 << 16 << 37 << 24 << 17 << 18 << 39 << 19 << 20 << 21 << 22 << 41 << 97 << 42 << 44;
NumList LTextFrame::overrideIds = NumList();
NumList LTextList::overrideIds = NumList();
NumList LTextObject::overrideIds = NumList();
NumList LTextTable::overrideIds = NumList();
NumList LTimeEdit::overrideIds = NumList();
NumList LTimeLine::overrideIds = NumList() << 347 << 10;
NumList LTimer::overrideIds = NumList() << 10;
NumList LToolBar::overrideIds = NumList() << 27 << 14 << 6 << 22 << 41;
NumList LToolBox::overrideIds = NumList() << 348 << 349 << 14 << 42;
NumList LToolButton::overrideIds = NumList() << 25 << 26 << 27 << 14 << 34 << 12 << 38 << 20 << 21 << 13 << 22 << 10;
NumList LTranslator::overrideIds = NumList() << 158 << 350;
NumList LTreeView::overrideIds = NumList() << 253 << 254 << 255 << 77 << 78 << 121 << 79 << 184 << 80 << 185 << 81 << 84 << 186 << 32 << 86 << 87 << 17 << 39 << 19 << 20 << 21 << 88 << 22 << 256 << 187 << 97 << 89 << 257 << 91 << 82 << 10 << 258 << 93 << 96 << 95;
NumList LTreeWidget::overrideIds = NumList() << 351 << 352 << 67 << 76 << 81 << 33;
NumList LUndoGroup::overrideIds = NumList();
NumList LUndoStack::overrideIds = NumList();
NumList LUndoView::overrideIds = NumList();
NumList LVBoxLayout::overrideIds = NumList();
NumList LValidator::overrideIds = NumList() << 124 << 126;
NumList LVariantAnimation::overrideIds = NumList() << 296 << 295 << 1 << 2 << 4;
NumList LWidget::overrideIds = NumList() << 23 << 24 << 25 << 26 << 27 << 14 << 28 << 29 << 30 << 31 << 32 << 33 << 34 << 15 << 35 << 16 << 36 << 37 << 17 << 18 << 38 << 39 << 19 << 20 << 21 << 40 << 22 << 41 << 42 << 43 << 44 << 45;
NumList LWidgetAction::overrideIds = NumList() << 371 << 372 << 5;
NumList LWindowsStyle::overrideIds = NumList() << 164 << 160 << 161 << 162 << 173 << 174 << 165 << 166 << 167 << 168 << 170 << 176 << 175 << 5 << 10;
NumList LWizard::overrideIds = NumList() << 373 << 374 << 375 << 376 << 99 << 26 << 182 << 22 << 41;
NumList LWizardPage::overrideIds = NumList() << 377 << 378 << 379 << 373 << 380;
NumList LWorkspace::overrideIds = NumList() << 26 << 14 << 6 << 5 << 36 << 22 << 41 << 42 << 44;
NumList LAbstractGraphicsShapeItem::overrideIds = NumList() << 249 << 250;
NumList LAccessible::overrideIds = NumList();
NumList LAccessibleEvent::overrideIds = NumList();
NumList LAccessibleInterface::overrideIds = NumList() << 385 << 386 << 387 << 388 << 389 << 390 << 391 << 392 << 393 << 394 << 395 << 396 << 397 << 398;
NumList LAccessibleWidget::overrideIds = NumList() << 385 << 386 << 387 << 388 << 389 << 392 << 393 << 394 << 396 << 397 << 398;
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
NumList LDropEvent::overrideIds = NumList() << 399 << 400 << 401;
NumList LDynamicPropertyChangeEvent::overrideIds = NumList();
NumList LEasingCurve::overrideIds = NumList();
NumList LEvent::overrideIds = NumList();
NumList LFileIconProvider::overrideIds = NumList() << 402 << 403 << 404;
NumList LFileInfo::overrideIds = NumList();
NumList LFileOpenEvent::overrideIds = NumList();
NumList LFocusEvent::overrideIds = NumList();
NumList LFont::overrideIds = NumList();
NumList LFontDatabase::overrideIds = NumList();
NumList LFontInfo::overrideIds = NumList();
NumList LFontMetrics::overrideIds = NumList();
NumList LGestureEvent::overrideIds = NumList();
NumList LGradient::overrideIds = NumList();
NumList LGraphicsAnchorLayout::overrideIds = NumList() << 146 << 149 << 150 << 410 << 212 << 229;
NumList LGraphicsEllipseItem::overrideIds = NumList() << 240 << 248 << 249 << 250 << 211 << 241 << 213;
NumList LGraphicsGridLayout::overrideIds = NumList() << 146 << 149 << 150 << 410 << 212 << 229;
NumList LGraphicsItem::overrideIds = NumList() << 381 << 240 << 382 << 383 << 248 << 249 << 250 << 211 << 241 << 213 << 214 << 215 << 216 << 217 << 218 << 15 << 16 << 220 << 221 << 222 << 37 << 24 << 223 << 17 << 18 << 224 << 225 << 226 << 227 << 242 << 384 << 231;
NumList LGraphicsItemGroup::overrideIds = NumList() << 240 << 249 << 250 << 211 << 213;
NumList LGraphicsLayout::overrideIds = NumList() << 146 << 149 << 150 << 410 << 411 << 243;
NumList LGraphicsLayoutItem::overrideIds = NumList() << 212 << 243 << 229;
NumList LGraphicsLineItem::overrideIds = NumList() << 240 << 248 << 249 << 250 << 211 << 241 << 213;
NumList LGraphicsLinearLayout::overrideIds = NumList() << 146 << 149 << 150 << 410 << 212 << 229;
NumList LGraphicsPathItem::overrideIds = NumList() << 240 << 248 << 249 << 250 << 211 << 241 << 213;
NumList LGraphicsPixmapItem::overrideIds = NumList() << 240 << 248 << 249 << 250 << 211 << 241 << 213;
NumList LGraphicsPolygonItem::overrideIds = NumList() << 240 << 248 << 249 << 250 << 211 << 241 << 213;
NumList LGraphicsRectItem::overrideIds = NumList() << 240 << 248 << 249 << 250 << 211 << 241 << 213;
NumList LGraphicsSceneContextMenuEvent::overrideIds = NumList();
NumList LGraphicsSceneDragDropEvent::overrideIds = NumList();
NumList LGraphicsSceneEvent::overrideIds = NumList();
NumList LGraphicsSceneHelpEvent::overrideIds = NumList();
NumList LGraphicsSceneHoverEvent::overrideIds = NumList();
NumList LGraphicsSceneMouseEvent::overrideIds = NumList();
NumList LGraphicsSceneMoveEvent::overrideIds = NumList();
NumList LGraphicsSceneResizeEvent::overrideIds = NumList();
NumList LGraphicsSceneWheelEvent::overrideIds = NumList();
NumList LGraphicsSimpleTextItem::overrideIds = NumList() << 240 << 248 << 249 << 250 << 211 << 241 << 213;
NumList LHelpEvent::overrideIds = NumList();
NumList LHideEvent::overrideIds = NumList();
NumList LHoverEvent::overrideIds = NumList();
NumList LIcon::overrideIds = NumList();
NumList LIconDragEvent::overrideIds = NumList();
NumList LImage::overrideIds = NumList();
NumList LInputEvent::overrideIds = NumList();
NumList LInputMethodEvent::overrideIds = NumList();
NumList LItemEditorFactory::overrideIds = NumList() << 412 << 413;
NumList LItemSelection::overrideIds = NumList();
NumList LItemSelectionRange::overrideIds = NumList();
NumList LKeyEvent::overrideIds = NumList();
NumList LKeySequence::overrideIds = NumList();
NumList LLayoutItem::overrideIds = NumList() << 147 << 157 << 148 << 23 << 149 << 158 << 159 << 151 << 152 << 153 << 154 << 26 << 414 << 415;
NumList LLibraryInfo::overrideIds = NumList();
NumList LLinearGradient::overrideIds = NumList();
NumList LListWidgetItem::overrideIds = NumList() << 416 << 417 << 418;
NumList LLocale::overrideIds = NumList();
NumList LMargins::overrideIds = NumList();
NumList LMatrix::overrideIds = NumList();
NumList LMatrix4x4::overrideIds = NumList();
NumList LMetaObject::overrideIds = NumList();
NumList LModelIndex::overrideIds = NumList();
NumList LMouseEvent::overrideIds = NumList();
NumList LMoveEvent::overrideIds = NumList();
NumList LPaintEvent::overrideIds = NumList();
NumList LPainter::overrideIds = NumList();
NumList LPainterPath::overrideIds = NumList();
NumList LPainterPathStroker::overrideIds = NumList();
NumList LPalette::overrideIds = NumList();
NumList LPen::overrideIds = NumList();
NumList LPersistentModelIndex::overrideIds = NumList();
NumList LPicture::overrideIds = NumList() << 420;
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
NumList LRunnable::overrideIds = NumList() << 421;
NumList LSemaphore::overrideIds = NumList();
NumList LShortcutEvent::overrideIds = NumList();
NumList LShowEvent::overrideIds = NumList();
NumList LSizePolicy::overrideIds = NumList();
NumList LSpacerItem::overrideIds = NumList() << 147 << 157 << 158 << 151 << 153 << 154 << 26 << 414;
NumList LStandardItem::overrideIds = NumList() << 416 << 417 << 441 << 213;
NumList LStatusTipEvent::overrideIds = NumList();
NumList LStyleOption::overrideIds = NumList();
NumList LStyleOptionGraphicsItem::overrideIds = NumList();
NumList LSystemSemaphore::overrideIds = NumList();
NumList LTableWidgetItem::overrideIds = NumList() << 416 << 417 << 418;
NumList LTableWidgetSelectionRange::overrideIds = NumList();
NumList LTabletEvent::overrideIds = NumList();
NumList LTextBlock::overrideIds = NumList();
NumList LTextBlockFormat::overrideIds = NumList();
NumList LTextBlockUserData::overrideIds = NumList();
NumList LTextBoundaryFinder::overrideIds = NumList();
NumList LTextCharFormat::overrideIds = NumList();
NumList LTextCodec::overrideIds = NumList() << 443 << 444 << 445 << 446 << 447;
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
NumList LTreeWidgetItem::overrideIds = NumList() << 416 << 448 << 449;
NumList LUndoCommand::overrideIds = NumList() << 450 << 451 << 452 << 453;
NumList LUrl::overrideIds = NumList();
NumList LVariant::overrideIds = NumList();
NumList LVector2D::overrideIds = NumList();
NumList LVector3D::overrideIds = NumList();
NumList LVector4D::overrideIds = NumList();
NumList LWhatsThis::overrideIds = NumList();
NumList LWhatsThisClickedEvent::overrideIds = NumList();
NumList LWheelEvent::overrideIds = NumList();
NumList LWidgetItem::overrideIds = NumList() << 147 << 157 << 148 << 23 << 158 << 151 << 153 << 154 << 26 << 415;
NumList LWindowStateChangeEvent::overrideIds = NumList();
NumList LWriteLocker::overrideIds = NumList();

void LObjects::ini(EQL* e) {
    static bool ok = false;
    if(!ok) {
        ok = true;
        eql = e;
        dynObject = new DynObject;
        Q = new QObject* [225]; for(int i = 0; i < 225; ++i) { Q[i] = 0; }
        N = new QObject* [206]; for(int i = 0; i < 206; ++i) { N[i] = 0; }
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
        Q[82] = new Q83;
        Q[83] = new Q84;
        Q[84] = new Q85;
        Q[85] = new Q86;
        Q[86] = new Q87;
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
        Q[109] = new Q110;
        Q[112] = new Q113;
        Q[113] = new Q114;
        Q[114] = new Q115;
        Q[115] = new Q116;
        Q[116] = new Q117;
        Q[117] = new Q118;
        Q[118] = new Q119;
        Q[119] = new Q120;
        Q[120] = new Q121;
        Q[121] = new Q122;
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
        Q[167] = new Q168;
        Q[168] = new Q169;
        Q[169] = new Q170;
        Q[170] = new Q171;
        Q[171] = new Q172;
        Q[172] = new Q173;
        Q[173] = new Q174;
        Q[174] = new Q175;
        Q[175] = new Q176;
        Q[178] = new Q179;
        Q[179] = new Q180;
        Q[180] = new Q181;
        Q[181] = new Q182;
        Q[182] = new Q183;
        Q[183] = new Q184;
        Q[184] = new Q185;
        Q[185] = new Q186;
        Q[186] = new Q187;
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
        Q[202] = new Q203;
        Q[203] = new Q204;
        Q[204] = new Q205;
        Q[205] = new Q206;
        Q[207] = new Q208;
        Q[208] = new Q209;
        Q[209] = new Q210;
        Q[210] = new Q211;
        Q[211] = new Q212;
        Q[212] = new Q213;
        Q[219] = new Q220;
        Q[220] = new Q221;
        Q[221] = new Q222;
        Q[222] = new Q223;
        Q[223] = new Q224;
        Q[224] = new Q225;
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
        N[38] = new N39;
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
        N[69] = new N70;
        N[71] = new N72;
        N[73] = new N74;
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
        N[147] = new N148;
        N[148] = new N149;
        N[149] = new N150;
        N[150] = new N151;
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
        N[177] = new N178;
        N[178] = new N179;
        N[179] = new N180;
        N[180] = new N181;
        N[181] = new N182;
        N[182] = new N183;
        N[183] = new N184;
        N[184] = new N185;
        N[185] = new N186;
        N[186] = new N187;
        N[188] = new N189;
        N[189] = new N190;
        N[190] = new N191;
        N[191] = new N192;
        N[200] = new N201;
        N[201] = new N202;
        N[202] = new N203;
        N[203] = new N204;
        N[204] = new N205;
        N[205] = new N206;
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
        q_names["QGraphicsWebView"] = 82;
        q_names["QGraphicsWidget"] = 83;
        q_names["QGridLayout"] = 84;
        q_names["QGroupBox"] = 85;
        q_names["QHBoxLayout"] = 86;
        q_names["QHeaderView"] = 87;
        q_names["QHelpContentModel"] = 88;
        q_names["QHelpContentWidget"] = 89;
        q_names["QHelpEngineCore"] = 90;
        q_names["QHelpIndexModel"] = 91;
        q_names["QHelpIndexWidget"] = 92;
        q_names["QHelpSearchEngine"] = 93;
        q_names["QHelpSearchQueryWidget"] = 94;
        q_names["QHelpSearchResultWidget"] = 95;
        q_names["QHistoryState"] = 96;
        q_names["QIODevice"] = 97;
        q_names["QInputContext"] = 98;
        q_names["QInputDialog"] = 99;
        q_names["QIntValidator"] = 100;
        q_names["QItemDelegate"] = 101;
        q_names["QItemSelectionModel"] = 102;
        q_names["QKeyEventTransition"] = 103;
        q_names["QLCDNumber"] = 104;
        q_names["QLabel"] = 105;
        q_names["QLayout"] = 106;
        q_names["QLibrary"] = 107;
        q_names["QLineEdit"] = 108;
        q_names["QListView"] = 109;
        q_names["QListWidget"] = 110;
        q_names["QLocalServer"] = 111;
        q_names["QLocalSocket"] = 112;
        q_names["QMainWindow"] = 113;
        q_names["QMdiArea"] = 114;
        q_names["QMdiSubWindow"] = 115;
        q_names["QMenu"] = 116;
        q_names["QMenuBar"] = 117;
        q_names["QMessageBox"] = 118;
        q_names["QMimeData"] = 119;
        q_names["QMotifStyle"] = 120;
        q_names["QMouseEventTransition"] = 121;
        q_names["QMovie"] = 122;
        q_names["QNetworkAccessManager"] = 123;
        q_names["QNetworkCookieJar"] = 124;
        q_names["QNetworkDiskCache"] = 125;
        q_names["QNetworkReply"] = 126;
        q_names["QObject"] = 127;
        q_names["QPageSetupDialog"] = 128;
        q_names["QPanGesture"] = 129;
        q_names["QParallelAnimationGroup"] = 130;
        q_names["QPauseAnimation"] = 131;
        q_names["QPinchGesture"] = 132;
        q_names["QPlainTextDocumentLayout"] = 133;
        q_names["QPlainTextEdit"] = 134;
        q_names["QPlastiqueStyle"] = 135;
        q_names["QPluginLoader"] = 136;
        q_names["QPrintDialog"] = 137;
        q_names["QPrintPreviewDialog"] = 138;
        q_names["QPrintPreviewWidget"] = 139;
        q_names["QProcess"] = 140;
        q_names["QProgressBar"] = 141;
        q_names["QProgressDialog"] = 142;
        q_names["QPropertyAnimation"] = 143;
        q_names["QPushButton"] = 144;
        q_names["QRadioButton"] = 145;
        q_names["QRegExpValidator"] = 146;
        q_names["QRubberBand"] = 147;
        q_names["QScrollArea"] = 148;
        q_names["QScrollBar"] = 149;
        q_names["QSequentialAnimationGroup"] = 150;
        q_names["QSessionManager"] = 151;
        q_names["QSettings"] = 152;
        q_names["QShortcut"] = 153;
        q_names["QSignalTransition"] = 154;
        q_names["QSizeGrip"] = 155;
        q_names["QSlider"] = 156;
        q_names["QSortFilterProxyModel"] = 157;
        q_names["QSound"] = 158;
        q_names["QSpinBox"] = 159;
        q_names["QSplashScreen"] = 160;
        q_names["QSplitter"] = 161;
        q_names["QSplitterHandle"] = 162;
        q_names["QSqlDriver"] = 163;
        q_names["QSqlQueryModel"] = 164;
        q_names["QSqlRelationalDelegate"] = 165;
        q_names["QSqlRelationalTableModel"] = 166;
        q_names["QSqlTableModel"] = 167;
        q_names["QStackedLayout"] = 168;
        q_names["QStackedWidget"] = 169;
        q_names["QStandardItemModel"] = 170;
        q_names["QState"] = 171;
        q_names["QStateMachine"] = 172;
        q_names["QStatusBar"] = 173;
        q_names["QStringListModel"] = 174;
        q_names["QStyle"] = 175;
        q_names["QStyledItemDelegate"] = 176;
        q_names["QSvgRenderer"] = 177;
        q_names["QSvgWidget"] = 178;
        q_names["QSwipeGesture"] = 179;
        q_names["QSyntaxHighlighter"] = 180;
        q_names["QSystemTrayIcon"] = 181;
        q_names["QTabBar"] = 182;
        q_names["QTabWidget"] = 183;
        q_names["QTableView"] = 184;
        q_names["QTableWidget"] = 185;
        q_names["QTapAndHoldGesture"] = 186;
        q_names["QTapGesture"] = 187;
        q_names["QTcpServer"] = 188;
        q_names["QTcpSocket"] = 189;
        q_names["QTextBlockGroup"] = 190;
        q_names["QTextBrowser"] = 191;
        q_names["QTextDocument"] = 192;
        q_names["QTextEdit"] = 193;
        q_names["QTextFrame"] = 194;
        q_names["QTextList"] = 195;
        q_names["QTextObject"] = 196;
        q_names["QTextTable"] = 197;
        q_names["QTimeEdit"] = 198;
        q_names["QTimeLine"] = 199;
        q_names["QTimer"] = 200;
        q_names["QToolBar"] = 201;
        q_names["QToolBox"] = 202;
        q_names["QToolButton"] = 203;
        q_names["QTranslator"] = 204;
        q_names["QTreeView"] = 205;
        q_names["QTreeWidget"] = 206;
        q_names["QUdpSocket"] = 207;
        q_names["QUndoGroup"] = 208;
        q_names["QUndoStack"] = 209;
        q_names["QUndoView"] = 210;
        q_names["QVBoxLayout"] = 211;
        q_names["QValidator"] = 212;
        q_names["QVariantAnimation"] = 213;
        q_names["QWebFrame"] = 214;
        q_names["QWebHistoryInterface"] = 215;
        q_names["QWebInspector"] = 216;
        q_names["QWebPage"] = 217;
        q_names["QWebPluginFactory"] = 218;
        q_names["QWebView"] = 219;
        q_names["QWidget"] = 220;
        q_names["QWidgetAction"] = 221;
        q_names["QWindowsStyle"] = 222;
        q_names["QWizard"] = 223;
        q_names["QWizardPage"] = 224;
        q_names["QWorkspace"] = 225;
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
        n_names["QFontInfo"] = 38;
        n_names["QFontMetrics"] = 39;
        n_names["QGLColormap"] = 40;
        n_names["QGLContext"] = 41;
        n_names["QGLFormat"] = 42;
        n_names["QGLFramebufferObject"] = 43;
        n_names["QGLFramebufferObjectFormat"] = 44;
        n_names["QGLPixelBuffer"] = 45;
        n_names["QGestureEvent"] = 46;
        n_names["QGradient"] = 47;
        n_names["QGraphicsAnchorLayout"] = 48;
        n_names["QGraphicsEllipseItem"] = 49;
        n_names["QGraphicsGridLayout"] = 50;
        n_names["QGraphicsItem"] = 51;
        n_names["QGraphicsItemGroup"] = 52;
        n_names["QGraphicsLayout"] = 53;
        n_names["QGraphicsLayoutItem"] = 54;
        n_names["QGraphicsLineItem"] = 55;
        n_names["QGraphicsLinearLayout"] = 56;
        n_names["QGraphicsPathItem"] = 57;
        n_names["QGraphicsPixmapItem"] = 58;
        n_names["QGraphicsPolygonItem"] = 59;
        n_names["QGraphicsRectItem"] = 60;
        n_names["QGraphicsSceneContextMenuEvent"] = 61;
        n_names["QGraphicsSceneDragDropEvent"] = 62;
        n_names["QGraphicsSceneEvent"] = 63;
        n_names["QGraphicsSceneHelpEvent"] = 64;
        n_names["QGraphicsSceneHoverEvent"] = 65;
        n_names["QGraphicsSceneMouseEvent"] = 66;
        n_names["QGraphicsSceneMoveEvent"] = 67;
        n_names["QGraphicsSceneResizeEvent"] = 68;
        n_names["QGraphicsSceneWheelEvent"] = 69;
        n_names["QGraphicsSimpleTextItem"] = 70;
        n_names["QHelpContentItem"] = 71;
        n_names["QHelpEvent"] = 72;
        n_names["QHelpSearchQuery"] = 73;
        n_names["QHideEvent"] = 74;
        n_names["QHostAddress"] = 75;
        n_names["QHostInfo"] = 76;
        n_names["QHoverEvent"] = 77;
        n_names["QIcon"] = 78;
        n_names["QIconDragEvent"] = 79;
        n_names["QImage"] = 80;
        n_names["QInputEvent"] = 81;
        n_names["QInputMethodEvent"] = 82;
        n_names["QItemEditorFactory"] = 83;
        n_names["QItemSelection"] = 84;
        n_names["QItemSelectionRange"] = 85;
        n_names["QKeyEvent"] = 86;
        n_names["QKeySequence"] = 87;
        n_names["QLayoutItem"] = 88;
        n_names["QLibraryInfo"] = 89;
        n_names["QLinearGradient"] = 90;
        n_names["QListWidgetItem"] = 91;
        n_names["QLocale"] = 92;
        n_names["QMargins"] = 93;
        n_names["QMatrix"] = 94;
        n_names["QMatrix4x4"] = 95;
        n_names["QMetaObject"] = 96;
        n_names["QModelIndex"] = 97;
        n_names["QMouseEvent"] = 98;
        n_names["QMoveEvent"] = 99;
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
        n_names["QSqlDatabase"] = 135;
        n_names["QSqlError"] = 136;
        n_names["QSqlField"] = 137;
        n_names["QSqlIndex"] = 138;
        n_names["QSqlQuery"] = 139;
        n_names["QSqlRecord"] = 140;
        n_names["QSqlRelation"] = 141;
        n_names["QSqlResult"] = 142;
        n_names["QSslCertificate"] = 143;
        n_names["QSslCipher"] = 144;
        n_names["QSslConfiguration"] = 145;
        n_names["QSslError"] = 146;
        n_names["QSslKey"] = 147;
        n_names["QStandardItem"] = 148;
        n_names["QStatusTipEvent"] = 149;
        n_names["QStyleOption"] = 150;
        n_names["QStyleOptionGraphicsItem"] = 151;
        n_names["QSvgGenerator"] = 152;
        n_names["QSystemSemaphore"] = 153;
        n_names["QTableWidgetItem"] = 154;
        n_names["QTableWidgetSelectionRange"] = 155;
        n_names["QTabletEvent"] = 156;
        n_names["QTextBlock"] = 157;
        n_names["QTextBlockFormat"] = 158;
        n_names["QTextBlockUserData"] = 159;
        n_names["QTextBoundaryFinder"] = 160;
        n_names["QTextCharFormat"] = 161;
        n_names["QTextCodec"] = 162;
        n_names["QTextCursor"] = 163;
        n_names["QTextDecoder"] = 164;
        n_names["QTextDocumentFragment"] = 165;
        n_names["QTextDocumentWriter"] = 166;
        n_names["QTextEncoder"] = 167;
        n_names["QTextFormat"] = 168;
        n_names["QTextFragment"] = 169;
        n_names["QTextFrameFormat"] = 170;
        n_names["QTextImageFormat"] = 171;
        n_names["QTextLayout"] = 172;
        n_names["QTextLength"] = 173;
        n_names["QTextLine"] = 174;
        n_names["QTextListFormat"] = 175;
        n_names["QTextOption"] = 176;
        n_names["QTextTableCell"] = 177;
        n_names["QTextTableCellFormat"] = 178;
        n_names["QTextTableFormat"] = 179;
        n_names["QTime"] = 180;
        n_names["QTimerEvent"] = 181;
        n_names["QToolTip"] = 182;
        n_names["QTouchEvent"] = 183;
        n_names["QTransform"] = 184;
        n_names["QTreeWidgetItem"] = 185;
        n_names["QUndoCommand"] = 186;
        n_names["QUrl"] = 187;
        n_names["QUrlInfo"] = 188;
        n_names["QVariant"] = 189;
        n_names["QVector2D"] = 190;
        n_names["QVector3D"] = 191;
        n_names["QVector4D"] = 192;
        n_names["QWebDatabase"] = 193;
        n_names["QWebElement"] = 194;
        n_names["QWebElementCollection"] = 195;
        n_names["QWebHistory"] = 196;
        n_names["QWebHistoryItem"] = 197;
        n_names["QWebHitTestResult"] = 198;
        n_names["QWebSecurityOrigin"] = 199;
        n_names["QWebSettings"] = 200;
        n_names["QWhatsThis"] = 201;
        n_names["QWhatsThisClickedEvent"] = 202;
        n_names["QWheelEvent"] = 203;
        n_names["QWidgetItem"] = 204;
        n_names["QWindowStateChangeEvent"] = 205;
        n_names["QWriteLocker"] = 206;
        override_function_ids["duration()"] = 1;
        override_function_ids["updateCurrentTime(int)"] = 2;
        override_function_ids["updateDirection(QAbstractAnimation::Direction)"] = 3;
        override_function_ids["updateState(QAbstractAnimation::State,QAbstractAnimation::State)"] = 4;
        override_function_ids["eventFilter(QObject*,QEvent*)"] = 5;
        override_function_ids["childEvent(QChildEvent*)"] = 6;
        override_function_ids["connectNotify(const char*)"] = 7;
        override_function_ids["customEvent(QEvent*)"] = 8;
        override_function_ids["disconnectNotify(const char*)"] = 9;
        override_function_ids["timerEvent(QTimerEvent*)"] = 10;
        override_function_ids["checkStateSet()"] = 11;
        override_function_ids["hitButton(QPoint)"] = 12;
        override_function_ids["nextCheckState()"] = 13;
        override_function_ids["changeEvent(QEvent*)"] = 14;
        override_function_ids["focusInEvent(QFocusEvent*)"] = 15;
        override_function_ids["focusOutEvent(QFocusEvent*)"] = 16;
        override_function_ids["keyPressEvent(QKeyEvent*)"] = 17;
        override_function_ids["keyReleaseEvent(QKeyEvent*)"] = 18;
        override_function_ids["mouseMoveEvent(QMouseEvent*)"] = 19;
        override_function_ids["mousePressEvent(QMouseEvent*)"] = 20;
        override_function_ids["mouseReleaseEvent(QMouseEvent*)"] = 21;
        override_function_ids["paintEvent(QPaintEvent*)"] = 22;
        override_function_ids["heightForWidth(int)"] = 23;
        override_function_ids["inputMethodQuery(Qt::InputMethodQuery)"] = 24;
        override_function_ids["minimumSizeHint()"] = 25;
        override_function_ids["sizeHint()"] = 26;
        override_function_ids["actionEvent(QActionEvent*)"] = 27;
        override_function_ids["closeEvent(QCloseEvent*)"] = 28;
        override_function_ids["contextMenuEvent(QContextMenuEvent*)"] = 29;
        override_function_ids["dragEnterEvent(QDragEnterEvent*)"] = 30;
        override_function_ids["dragLeaveEvent(QDragLeaveEvent*)"] = 31;
        override_function_ids["dragMoveEvent(QDragMoveEvent*)"] = 32;
        override_function_ids["dropEvent(QDropEvent*)"] = 33;
        override_function_ids["enterEvent(QEvent*)"] = 34;
        override_function_ids["focusNextPrevChild(bool)"] = 35;
        override_function_ids["hideEvent(QHideEvent*)"] = 36;
        override_function_ids["inputMethodEvent(QInputMethodEvent*)"] = 37;
        override_function_ids["leaveEvent(QEvent*)"] = 38;
        override_function_ids["mouseDoubleClickEvent(QMouseEvent*)"] = 39;
        override_function_ids["moveEvent(QMoveEvent*)"] = 40;
        override_function_ids["resizeEvent(QResizeEvent*)"] = 41;
        override_function_ids["showEvent(QShowEvent*)"] = 42;
        override_function_ids["tabletEvent(QTabletEvent*)"] = 43;
        override_function_ids["wheelEvent(QWheelEvent*)"] = 44;
        override_function_ids["metric(PaintDeviceMetric)"] = 45;
        override_function_ids["createEditor(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 46;
        override_function_ids["editorEvent(QEvent*,QAbstractItemModel*,QStyleOptionViewItem,QModelIndex)"] = 47;
        override_function_ids["paint(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 48;
        override_function_ids["setEditorData(QWidget*,QModelIndex)"] = 49;
        override_function_ids["setModelData(QWidget*,QAbstractItemModel*,QModelIndex)"] = 50;
        override_function_ids["sizeHint(QStyleOptionViewItem,QModelIndex)"] = 51;
        override_function_ids["updateEditorGeometry(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 52;
        override_function_ids["buddy(QModelIndex)"] = 53;
        override_function_ids["canFetchMore(QModelIndex)"] = 54;
        override_function_ids["columnCount(QModelIndex)"] = 55;
        override_function_ids["data(QModelIndex,int)"] = 56;
        override_function_ids["dropMimeData(QMimeData*,Qt::DropAction,int,int,QModelIndex)"] = 57;
        override_function_ids["fetchMore(QModelIndex)"] = 58;
        override_function_ids["flags(QModelIndex)"] = 59;
        override_function_ids["hasChildren(QModelIndex)"] = 60;
        override_function_ids["headerData(int,Qt::Orientation,int)"] = 61;
        override_function_ids["index(int,int,QModelIndex)"] = 62;
        override_function_ids["insertColumns(int,int,QModelIndex)"] = 63;
        override_function_ids["insertRows(int,int,QModelIndex)"] = 64;
        override_function_ids["match(QModelIndex,int,QVariant,int,Qt::MatchFlags)"] = 65;
        override_function_ids["mimeData(QModelIndexList)"] = 66;
        override_function_ids["mimeTypes()"] = 67;
        override_function_ids["parent(QModelIndex)"] = 68;
        override_function_ids["removeColumns(int,int,QModelIndex)"] = 69;
        override_function_ids["removeRows(int,int,QModelIndex)"] = 70;
        override_function_ids["rowCount(QModelIndex)"] = 71;
        override_function_ids["setData(QModelIndex,QVariant,int)"] = 72;
        override_function_ids["setHeaderData(int,Qt::Orientation,QVariant,int)"] = 73;
        override_function_ids["sort(int,Qt::SortOrder)"] = 74;
        override_function_ids["span(QModelIndex)"] = 75;
        override_function_ids["supportedDropActions()"] = 76;
        override_function_ids["indexAt(QPoint)"] = 77;
        override_function_ids["keyboardSearch(QString)"] = 78;
        override_function_ids["scrollTo(QModelIndex,ScrollHint)"] = 79;
        override_function_ids["setModel(QAbstractItemModel*)"] = 80;
        override_function_ids["setSelectionModel(QItemSelectionModel*)"] = 81;
        override_function_ids["sizeHintForColumn(int)"] = 82;
        override_function_ids["sizeHintForRow(int)"] = 83;
        override_function_ids["visualRect(QModelIndex)"] = 84;
        override_function_ids["edit(QModelIndex,EditTrigger,QEvent*)"] = 85;
        override_function_ids["horizontalOffset()"] = 86;
        override_function_ids["isIndexHidden(QModelIndex)"] = 87;
        override_function_ids["moveCursor(CursorAction,Qt::KeyboardModifiers)"] = 88;
        override_function_ids["selectedIndexes()"] = 89;
        override_function_ids["selectionCommand(QModelIndex,QEvent*)"] = 90;
        override_function_ids["setSelection(QRect,QItemSelectionModel::SelectionFlags)"] = 91;
        override_function_ids["startDrag(Qt::DropActions)"] = 92;
        override_function_ids["verticalOffset()"] = 93;
        override_function_ids["viewOptions()"] = 94;
        override_function_ids["visualRegionForSelection(QItemSelection)"] = 95;
        override_function_ids["viewportEvent(QEvent*)"] = 96;
        override_function_ids["scrollContentsBy(int,int)"] = 97;
        override_function_ids["exec()"] = 98;
        override_function_ids["setVisible(bool)"] = 99;
        override_function_ids["mapFromSource(QModelIndex)"] = 100;
        override_function_ids["mapSelectionFromSource(QItemSelection)"] = 101;
        override_function_ids["mapSelectionToSource(QItemSelection)"] = 102;
        override_function_ids["mapToSource(QModelIndex)"] = 103;
        override_function_ids["setSourceModel(QAbstractItemModel*)"] = 104;
        override_function_ids["revert()"] = 105;
        override_function_ids["submit()"] = 106;
        override_function_ids["sliderChange(SliderChange)"] = 107;
        override_function_ids["atEnd()"] = 108;
        override_function_ids["bytesAvailable()"] = 109;
        override_function_ids["bytesToWrite()"] = 110;
        override_function_ids["canReadLine()"] = 111;
        override_function_ids["close()"] = 112;
        override_function_ids["isSequential()"] = 113;
        override_function_ids["waitForBytesWritten(int)"] = 114;
        override_function_ids["waitForReadyRead(int)"] = 115;
        override_function_ids["readData(char*,qint64)"] = 116;
        override_function_ids["readLineData(char*,qint64)"] = 117;
        override_function_ids["writeData(const char*,qint64)"] = 118;
        override_function_ids["open(OpenMode)"] = 119;
        override_function_ids["pos()"] = 120;
        override_function_ids["reset()"] = 121;
        override_function_ids["seek(qint64)"] = 122;
        override_function_ids["size()"] = 123;
        override_function_ids["fixup(QString)"] = 124;
        override_function_ids["stepBy(int)"] = 125;
        override_function_ids["validate(QString,int)"] = 126;
        override_function_ids["stepEnabled()"] = 127;
        override_function_ids["onEntry(QEvent*)"] = 128;
        override_function_ids["onExit(QEvent*)"] = 129;
        override_function_ids["blockBoundingRect(QTextBlock)"] = 130;
        override_function_ids["documentSize()"] = 131;
        override_function_ids["draw(QPainter*,PaintContext)"] = 132;
        override_function_ids["frameBoundingRect(QTextFrame*)"] = 133;
        override_function_ids["hitTest(QPointF,Qt::HitTestAccuracy)"] = 134;
        override_function_ids["pageCount()"] = 135;
        override_function_ids["documentChanged(int,int,int)"] = 136;
        override_function_ids["drawInlineObject(QPainter*,QRectF,QTextInlineObject,int,QTextFormat)"] = 137;
        override_function_ids["positionInlineObject(QTextInlineObject,int,QTextFormat)"] = 138;
        override_function_ids["resizeInlineObject(QTextInlineObject,int,QTextFormat)"] = 139;
        override_function_ids["eventTest(QEvent*)"] = 140;
        override_function_ids["onTransition(QEvent*)"] = 141;
        override_function_ids["commitData(QSessionManager)"] = 142;
        override_function_ids["saveState(QSessionManager)"] = 143;
        override_function_ids["notify(QObject*,QEvent*)"] = 144;
        override_function_ids["addItem(QLayoutItem*)"] = 145;
        override_function_ids["count()"] = 146;
        override_function_ids["expandingDirections()"] = 147;
        override_function_ids["hasHeightForWidth()"] = 148;
        override_function_ids["invalidate()"] = 149;
        override_function_ids["itemAt(int)"] = 150;
        override_function_ids["maximumSize()"] = 151;
        override_function_ids["minimumHeightForWidth(int)"] = 152;
        override_function_ids["minimumSize()"] = 153;
        override_function_ids["setGeometry(QRect)"] = 154;
        override_function_ids["takeAt(int)"] = 155;
        override_function_ids["indexOf(QWidget*)"] = 156;
        override_function_ids["geometry()"] = 157;
        override_function_ids["isEmpty()"] = 158;
        override_function_ids["layout()"] = 159;
        override_function_ids["drawControl(ControlElement,QStyleOption*,QPainter*,QWidget*)"] = 160;
        override_function_ids["drawPrimitive(PrimitiveElement,QStyleOption*,QPainter*,QWidget*)"] = 161;
        override_function_ids["pixelMetric(PixelMetric,QStyleOption*,QWidget*)"] = 162;
        override_function_ids["standardPalette()"] = 163;
        override_function_ids["drawComplexControl(ComplexControl,QStyleOptionComplex*,QPainter*,QWidget*)"] = 164;
        override_function_ids["polish(QPalette)"] = 165;
        override_function_ids["sizeFromContents(ContentsType,QStyleOption*,QSize,QWidget*)"] = 166;
        override_function_ids["standardPixmap(StandardPixmap,QStyleOption*,QWidget*)"] = 167;
        override_function_ids["styleHint(StyleHint,QStyleOption*,QWidget*,QStyleHintReturn*)"] = 168;
        override_function_ids["subControlRect(ComplexControl,QStyleOptionComplex*,SubControl,QWidget*)"] = 169;
        override_function_ids["subElementRect(SubElement,QStyleOption*,QWidget*)"] = 170;
        override_function_ids["generatedIconPixmap(QIcon::Mode,QPixmap,QStyleOption*)"] = 171;
        override_function_ids["hitTestComplexControl(ComplexControl,QStyleOptionComplex*,QPoint,QWidget*)"] = 172;
        override_function_ids["polish(QApplication*)"] = 173;
        override_function_ids["polish(QWidget*)"] = 174;
        override_function_ids["unpolish(QWidget*)"] = 175;
        override_function_ids["unpolish(QApplication*)"] = 176;
        override_function_ids["drawItemPixmap(QPainter*,QRect,int,QPixmap)"] = 177;
        override_function_ids["drawItemText(QPainter*,QRect,int,QPalette,bool,QString,QPalette::ColorRole)"] = 178;
        override_function_ids["itemPixmapRect(QRect,int,QPixmap)"] = 179;
        override_function_ids["itemTextRect(QFontMetrics,QRect,int,bool,QString)"] = 180;
        override_function_ids["paintCell(QPainter*,QRect,QDate)"] = 181;
        override_function_ids["done(int)"] = 182;
        override_function_ids["createColumn(QModelIndex)"] = 183;
        override_function_ids["selectAll()"] = 184;
        override_function_ids["setRootIndex(QModelIndex)"] = 185;
        override_function_ids["currentChanged(QModelIndex,QModelIndex)"] = 186;
        override_function_ids["rowsInserted(QModelIndex,int,int)"] = 187;
        override_function_ids["hidePopup()"] = 188;
        override_function_ids["showPopup()"] = 189;
        override_function_ids["pathFromIndex(QModelIndex)"] = 190;
        override_function_ids["splitPath(QString)"] = 191;
        override_function_ids["dateTimeFromText(QString)"] = 192;
        override_function_ids["textFromDateTime(QDateTime)"] = 193;
        override_function_ids["clear()"] = 194;
        override_function_ids["textFromValue(double)"] = 195;
        override_function_ids["valueFromText(QString)"] = 196;
        override_function_ids["setRange(double,double,int)"] = 197;
        override_function_ids["accept()"] = 198;
        override_function_ids["link()"] = 199;
        override_function_ids["glDraw()"] = 200;
        override_function_ids["glInit()"] = 201;
        override_function_ids["initializeGL()"] = 202;
        override_function_ids["initializeOverlayGL()"] = 203;
        override_function_ids["paintGL()"] = 204;
        override_function_ids["paintOverlayGL()"] = 205;
        override_function_ids["resizeGL(int,int)"] = 206;
        override_function_ids["resizeOverlayGL(int,int)"] = 207;
        override_function_ids["boundingRectFor(QRectF)"] = 208;
        override_function_ids["draw(QPainter*)"] = 209;
        override_function_ids["sourceChanged(ChangeFlags)"] = 210;
        override_function_ids["paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 211;
        override_function_ids["setGeometry(QRectF)"] = 212;
        override_function_ids["type()"] = 213;
        override_function_ids["contextMenuEvent(QGraphicsSceneContextMenuEvent*)"] = 214;
        override_function_ids["dragEnterEvent(QGraphicsSceneDragDropEvent*)"] = 215;
        override_function_ids["dragLeaveEvent(QGraphicsSceneDragDropEvent*)"] = 216;
        override_function_ids["dragMoveEvent(QGraphicsSceneDragDropEvent*)"] = 217;
        override_function_ids["dropEvent(QGraphicsSceneDragDropEvent*)"] = 218;
        override_function_ids["grabMouseEvent(QEvent*)"] = 219;
        override_function_ids["hoverEnterEvent(QGraphicsSceneHoverEvent*)"] = 220;
        override_function_ids["hoverLeaveEvent(QGraphicsSceneHoverEvent*)"] = 221;
        override_function_ids["hoverMoveEvent(QGraphicsSceneHoverEvent*)"] = 222;
        override_function_ids["itemChange(GraphicsItemChange,QVariant)"] = 223;
        override_function_ids["mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)"] = 224;
        override_function_ids["mouseMoveEvent(QGraphicsSceneMouseEvent*)"] = 225;
        override_function_ids["mousePressEvent(QGraphicsSceneMouseEvent*)"] = 226;
        override_function_ids["mouseReleaseEvent(QGraphicsSceneMouseEvent*)"] = 227;
        override_function_ids["resizeEvent(QGraphicsSceneResizeEvent*)"] = 228;
        override_function_ids["sizeHint(Qt::SizeHint,QSizeF)"] = 229;
        override_function_ids["ungrabMouseEvent(QEvent*)"] = 230;
        override_function_ids["wheelEvent(QGraphicsSceneWheelEvent*)"] = 231;
        override_function_ids["paintWindowFrame(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 232;
        override_function_ids["grabKeyboardEvent(QEvent*)"] = 233;
        override_function_ids["initStyleOption(QStyleOption*)"] = 234;
        override_function_ids["moveEvent(QGraphicsSceneMoveEvent*)"] = 235;
        override_function_ids["polishEvent()"] = 236;
        override_function_ids["ungrabKeyboardEvent(QEvent*)"] = 237;
        override_function_ids["windowFrameEvent(QEvent*)"] = 238;
        override_function_ids["windowFrameSectionAt(QPointF)"] = 239;
        override_function_ids["boundingRect()"] = 240;
        override_function_ids["shape()"] = 241;
        override_function_ids["sceneEvent(QEvent*)"] = 242;
        override_function_ids["updateGeometry()"] = 243;
        override_function_ids["applyTo(QMatrix4x4*)"] = 244;
        override_function_ids["drawBackground(QPainter*,QRectF)"] = 245;
        override_function_ids["drawForeground(QPainter*,QRectF)"] = 246;
        override_function_ids["helpEvent(QGraphicsSceneHelpEvent*)"] = 247;
        override_function_ids["contains(QPointF)"] = 248;
        override_function_ids["isObscuredBy(QGraphicsItem*)"] = 249;
        override_function_ids["opaqueArea()"] = 250;
        override_function_ids["paintSection(QPainter*,QRect,int)"] = 251;
        override_function_ids["sectionSizeFromContents(int)"] = 252;
        override_function_ids["drawBranches(QPainter*,QRect,QModelIndex)"] = 253;
        override_function_ids["drawRow(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 254;
        override_function_ids["dataChanged(QModelIndex,QModelIndex)"] = 255;
        override_function_ids["rowsAboutToBeRemoved(QModelIndex,int,int)"] = 256;
        override_function_ids["selectionChanged(QItemSelection,QItemSelection)"] = 257;
        override_function_ids["updateGeometries()"] = 258;
        override_function_ids["actions()"] = 259;
        override_function_ids["filterEvent(QEvent*)"] = 260;
        override_function_ids["font()"] = 261;
        override_function_ids["identifierName()"] = 262;
        override_function_ids["isComposing()"] = 263;
        override_function_ids["language()"] = 264;
        override_function_ids["setFocusWidget(QWidget*)"] = 265;
        override_function_ids["update()"] = 266;
        override_function_ids["widgetDestroyed(QWidget*)"] = 267;
        override_function_ids["setRange(int,int)"] = 268;
        override_function_ids["drawCheck(QPainter*,QStyleOptionViewItem,QRect,Qt::CheckState)"] = 269;
        override_function_ids["drawDecoration(QPainter*,QStyleOptionViewItem,QRect,QPixmap)"] = 270;
        override_function_ids["drawDisplay(QPainter*,QStyleOptionViewItem,QRect,QString)"] = 271;
        override_function_ids["drawFocus(QPainter*,QStyleOptionViewItem,QRect)"] = 272;
        override_function_ids["dropMimeData(int,QMimeData*,Qt::DropAction)"] = 273;
        override_function_ids["mimeData(QList<QListWidgetItem*>)"] = 274;
        override_function_ids["hasPendingConnections()"] = 275;
        override_function_ids["nextPendingConnection()"] = 276;
        override_function_ids["incomingConnection(quintptr)"] = 277;
        override_function_ids["createPopupMenu()"] = 278;
        override_function_ids["formats()"] = 279;
        override_function_ids["hasFormat(QString)"] = 280;
        override_function_ids["retrieveData(QString,QVariant::Type)"] = 281;
        override_function_ids["cookiesForUrl(QUrl)"] = 282;
        override_function_ids["setCookiesFromUrl(QList<QNetworkCookie>,QUrl)"] = 283;
        override_function_ids["expire()"] = 284;
        override_function_ids["cacheSize()"] = 285;
        override_function_ids["metaData(QUrl)"] = 286;
        override_function_ids["remove(QUrl)"] = 287;
        override_function_ids["updateMetaData(QNetworkCacheMetaData)"] = 288;
        override_function_ids["loadResource(int,QUrl)"] = 289;
        override_function_ids["canInsertFromMimeData(QMimeData*)"] = 290;
        override_function_ids["createMimeDataFromSelection()"] = 291;
        override_function_ids["insertFromMimeData(QMimeData*)"] = 292;
        override_function_ids["setupChildProcess()"] = 293;
        override_function_ids["text()"] = 294;
        override_function_ids["updateCurrentValue(QVariant)"] = 295;
        override_function_ids["interpolated(QVariant,QVariant,qreal)"] = 296;
        override_function_ids["filterAcceptsColumn(int,QModelIndex)"] = 297;
        override_function_ids["filterAcceptsRow(int,QModelIndex)"] = 298;
        override_function_ids["lessThan(QModelIndex,QModelIndex)"] = 299;
        override_function_ids["textFromValue(int)"] = 300;
        override_function_ids["drawContents(QPainter*)"] = 301;
        override_function_ids["beginTransaction()"] = 302;
        override_function_ids["commitTransaction()"] = 303;
        override_function_ids["createResult()"] = 304;
        override_function_ids["escapeIdentifier(QString,IdentifierType)"] = 305;
        override_function_ids["formatValue(QSqlField,bool)"] = 306;
        override_function_ids["handle()"] = 307;
        override_function_ids["hasFeature(DriverFeature)"] = 308;
        override_function_ids["isOpen()"] = 309;
        override_function_ids["open(QString,QString,QString,QString,int,QString)"] = 310;
        override_function_ids["primaryIndex(QString)"] = 311;
        override_function_ids["record(QString)"] = 312;
        override_function_ids["rollbackTransaction()"] = 313;
        override_function_ids["sqlStatement(StatementType,QString,QSqlRecord,bool)"] = 314;
        override_function_ids["tables(QSql::TableType)"] = 315;
        override_function_ids["setLastError(QSqlError)"] = 316;
        override_function_ids["setOpen(bool)"] = 317;
        override_function_ids["setOpenError(bool)"] = 318;
        override_function_ids["queryChange()"] = 319;
        override_function_ids["relationModel(int)"] = 320;
        override_function_ids["setRelation(int,QSqlRelation)"] = 321;
        override_function_ids["select()"] = 322;
        override_function_ids["setTable(QString)"] = 323;
        override_function_ids["insertRowIntoTable(QSqlRecord)"] = 324;
        override_function_ids["orderByClause()"] = 325;
        override_function_ids["selectStatement()"] = 326;
        override_function_ids["updateRowInTable(int,QSqlRecord)"] = 327;
        override_function_ids["revertRow(int)"] = 328;
        override_function_ids["setEditStrategy(EditStrategy)"] = 329;
        override_function_ids["setFilter(QString)"] = 330;
        override_function_ids["setSort(int,Qt::SortOrder)"] = 331;
        override_function_ids["deleteRowFromTable(int)"] = 332;
        override_function_ids["displayText(QVariant,QLocale)"] = 333;
        override_function_ids["initStyleOption(QStyleOptionViewItem*,QModelIndex)"] = 334;
        override_function_ids["highlightBlock(QString)"] = 335;
        override_function_ids["tabInserted(int)"] = 336;
        override_function_ids["tabLayoutChange()"] = 337;
        override_function_ids["tabRemoved(int)"] = 338;
        override_function_ids["tabSizeHint(int)"] = 339;
        override_function_ids["dropMimeData(int,int,QMimeData*,Qt::DropAction)"] = 340;
        override_function_ids["mimeData(QList<QTableWidgetItem*>)"] = 341;
        override_function_ids["incomingConnection(int)"] = 342;
        override_function_ids["blockFormatChanged(QTextBlock)"] = 343;
        override_function_ids["blockInserted(QTextBlock)"] = 344;
        override_function_ids["blockRemoved(QTextBlock)"] = 345;
        override_function_ids["createObject(QTextFormat)"] = 346;
        override_function_ids["valueForTime(int)"] = 347;
        override_function_ids["itemInserted(int)"] = 348;
        override_function_ids["itemRemoved(int)"] = 349;
        override_function_ids["translate(const char*,const char*,const char*)"] = 350;
        override_function_ids["dropMimeData(QTreeWidgetItem*,int,QMimeData*,Qt::DropAction)"] = 351;
        override_function_ids["mimeData(QList<QTreeWidgetItem*>)"] = 352;
        override_function_ids["addHistoryEntry(QString)"] = 353;
        override_function_ids["historyContains(QString)"] = 354;
        override_function_ids["extension(Extension,ExtensionOption*,ExtensionReturn*)"] = 355;
        override_function_ids["supportsExtension(Extension)"] = 356;
        override_function_ids["triggerAction(WebAction,bool)"] = 357;
        override_function_ids["acceptNavigationRequest(QWebFrame*,QNetworkRequest,NavigationType)"] = 358;
        override_function_ids["chooseFile(QWebFrame*,QString)"] = 359;
        override_function_ids["createPlugin(QString,QUrl,QStringList,QStringList)"] = 360;
        override_function_ids["createWindow(WebWindowType)"] = 361;
        override_function_ids["javaScriptAlert(QWebFrame*,QString)"] = 362;
        override_function_ids["javaScriptConfirm(QWebFrame*,QString)"] = 363;
        override_function_ids["javaScriptConsoleMessage(QString,int,QString)"] = 364;
        override_function_ids["javaScriptPrompt(QWebFrame*,QString,QString,QString*)"] = 365;
        override_function_ids["userAgentForUrl(QUrl)"] = 366;
        override_function_ids["create(QString,QUrl,QStringList,QStringList)"] = 367;
        override_function_ids["plugins()"] = 368;
        override_function_ids["refreshPlugins()"] = 369;
        override_function_ids["createWindow(QWebPage::WebWindowType)"] = 370;
        override_function_ids["createWidget(QWidget*)"] = 371;
        override_function_ids["deleteWidget(QWidget*)"] = 372;
        override_function_ids["nextId()"] = 373;
        override_function_ids["validateCurrentPage()"] = 374;
        override_function_ids["cleanupPage(int)"] = 375;
        override_function_ids["initializePage(int)"] = 376;
        override_function_ids["cleanupPage()"] = 377;
        override_function_ids["initializePage()"] = 378;
        override_function_ids["isComplete()"] = 379;
        override_function_ids["validatePage()"] = 380;
        override_function_ids["advance(int)"] = 381;
        override_function_ids["collidesWithItem(QGraphicsItem*,Qt::ItemSelectionMode)"] = 382;
        override_function_ids["collidesWithPath(QPainterPath,Qt::ItemSelectionMode)"] = 383;
        override_function_ids["sceneEventFilter(QGraphicsItem*,QEvent*)"] = 384;
        override_function_ids["actionText(int,Text,int)"] = 385;
        override_function_ids["childAt(int,int)"] = 386;
        override_function_ids["childCount()"] = 387;
        override_function_ids["doAction(int,int,QVariantList)"] = 388;
        override_function_ids["indexOfChild(QAccessibleInterface*)"] = 389;
        override_function_ids["isValid()"] = 390;
        override_function_ids["object()"] = 391;
        override_function_ids["rect(int)"] = 392;
        override_function_ids["relationTo(int,QAccessibleInterface*,int)"] = 393;
        override_function_ids["role(int)"] = 394;
        override_function_ids["setText(Text,int,QString)"] = 395;
        override_function_ids["state(int)"] = 396;
        override_function_ids["text(Text,int)"] = 397;
        override_function_ids["userActionCount(int)"] = 398;
        override_function_ids["encodedData(const char*)"] = 399;
        override_function_ids["format(int)"] = 400;
        override_function_ids["provides(const char*)"] = 401;
        override_function_ids["icon(IconType)"] = 402;
        override_function_ids["icon(QFileInfo)"] = 403;
        override_function_ids["type(QFileInfo)"] = 404;
        override_function_ids["create(QGLContext*)"] = 405;
        override_function_ids["doneCurrent()"] = 406;
        override_function_ids["makeCurrent()"] = 407;
        override_function_ids["swapBuffers()"] = 408;
        override_function_ids["chooseContext(QGLContext*)"] = 409;
        override_function_ids["removeAt(int)"] = 410;
        override_function_ids["widgetEvent(QEvent*)"] = 411;
        override_function_ids["createEditor(QVariant::Type,QWidget*)"] = 412;
        override_function_ids["valuePropertyName(QVariant::Type)"] = 413;
        override_function_ids["spacerItem()"] = 414;
        override_function_ids["widget()"] = 415;
        override_function_ids["clone()"] = 416;
        override_function_ids["data(int)"] = 417;
        override_function_ids["setData(int,QVariant)"] = 418;
        override_function_ids["queryProxy(QNetworkProxyQuery)"] = 419;
        override_function_ids["setData(const char*,uint)"] = 420;
        override_function_ids["run()"] = 421;
        override_function_ids["bindValue(int,QVariant,QSql::ParamType)"] = 422;
        override_function_ids["bindValue(QString,QVariant,QSql::ParamType)"] = 423;
        override_function_ids["fetch(int)"] = 424;
        override_function_ids["fetchFirst()"] = 425;
        override_function_ids["fetchLast()"] = 426;
        override_function_ids["fetchNext()"] = 427;
        override_function_ids["fetchPrevious()"] = 428;
        override_function_ids["isNull(int)"] = 429;
        override_function_ids["lastInsertId()"] = 430;
        override_function_ids["numRowsAffected()"] = 431;
        override_function_ids["prepare(QString)"] = 432;
        override_function_ids["record()"] = 433;
        override_function_ids["reset(QString)"] = 434;
        override_function_ids["savePrepare(QString)"] = 435;
        override_function_ids["setActive(bool)"] = 436;
        override_function_ids["setAt(int)"] = 437;
        override_function_ids["setForwardOnly(bool)"] = 438;
        override_function_ids["setQuery(QString)"] = 439;
        override_function_ids["setSelect(bool)"] = 440;
        override_function_ids["setData(QVariant,int)"] = 441;
        override_function_ids["metric(QPaintDevice::PaintDeviceMetric)"] = 442;
        override_function_ids["aliases()"] = 443;
        override_function_ids["mibEnum()"] = 444;
        override_function_ids["name()"] = 445;
        override_function_ids["convertFromUnicode(QChar*,int,ConverterState*)"] = 446;
        override_function_ids["convertToUnicode(const char*,int,ConverterState*)"] = 447;
        override_function_ids["data(int,int)"] = 448;
        override_function_ids["setData(int,int,QVariant)"] = 449;
        override_function_ids["id()"] = 450;
        override_function_ids["mergeWith(QUndoCommand*)"] = 451;
        override_function_ids["redo()"] = 452;
        override_function_ids["undo()"] = 453;
        override_function_ids["setDir(bool)"] = 454;
        override_function_ids["setFile(bool)"] = 455;
        override_function_ids["setGroup(QString)"] = 456;
        override_function_ids["setLastModified(QDateTime)"] = 457;
        override_function_ids["setName(QString)"] = 458;
        override_function_ids["setOwner(QString)"] = 459;
        override_function_ids["setPermissions(int)"] = 460;
        override_function_ids["setReadable(bool)"] = 461;
        override_function_ids["setSize(qint64)"] = 462;
        override_function_ids["setSymLink(bool)"] = 463;
        override_function_ids["setWritable(bool)"] = 464;
        override_arg_types = new const char** [464];
        { static const char* s[] = { "int", 0 }; override_arg_types[0] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[1] = s; }
        { static const char* s[] = { 0, "QAbstractAnimation::Direction", 0 }; override_arg_types[2] = s; }
        { static const char* s[] = { 0, "QAbstractAnimation::State", "QAbstractAnimation::State", 0 }; override_arg_types[3] = s; }
        { static const char* s[] = { "bool", "QObject*", "QEvent*", 0 }; override_arg_types[4] = s; }
        { static const char* s[] = { 0, "QChildEvent*", 0 }; override_arg_types[5] = s; }
        { static const char* s[] = { 0, "const char*", 0 }; override_arg_types[6] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[7] = s; }
        { static const char* s[] = { 0, "const char*", 0 }; override_arg_types[8] = s; }
        { static const char* s[] = { 0, "QTimerEvent*", 0 }; override_arg_types[9] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[10] = s; }
        { static const char* s[] = { "bool", "QPoint", 0 }; override_arg_types[11] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[12] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[13] = s; }
        { static const char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[14] = s; }
        { static const char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[15] = s; }
        { static const char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[16] = s; }
        { static const char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[17] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[18] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[19] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[20] = s; }
        { static const char* s[] = { 0, "QPaintEvent*", 0 }; override_arg_types[21] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[22] = s; }
        { static const char* s[] = { "QVariant", "Qt::InputMethodQuery", 0 }; override_arg_types[23] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[24] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[25] = s; }
        { static const char* s[] = { 0, "QActionEvent*", 0 }; override_arg_types[26] = s; }
        { static const char* s[] = { 0, "QCloseEvent*", 0 }; override_arg_types[27] = s; }
        { static const char* s[] = { 0, "QContextMenuEvent*", 0 }; override_arg_types[28] = s; }
        { static const char* s[] = { 0, "QDragEnterEvent*", 0 }; override_arg_types[29] = s; }
        { static const char* s[] = { 0, "QDragLeaveEvent*", 0 }; override_arg_types[30] = s; }
        { static const char* s[] = { 0, "QDragMoveEvent*", 0 }; override_arg_types[31] = s; }
        { static const char* s[] = { 0, "QDropEvent*", 0 }; override_arg_types[32] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[33] = s; }
        { static const char* s[] = { "bool", "bool", 0 }; override_arg_types[34] = s; }
        { static const char* s[] = { 0, "QHideEvent*", 0 }; override_arg_types[35] = s; }
        { static const char* s[] = { 0, "QInputMethodEvent*", 0 }; override_arg_types[36] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[37] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[38] = s; }
        { static const char* s[] = { 0, "QMoveEvent*", 0 }; override_arg_types[39] = s; }
        { static const char* s[] = { 0, "QResizeEvent*", 0 }; override_arg_types[40] = s; }
        { static const char* s[] = { 0, "QShowEvent*", 0 }; override_arg_types[41] = s; }
        { static const char* s[] = { 0, "QTabletEvent*", 0 }; override_arg_types[42] = s; }
        { static const char* s[] = { 0, "QWheelEvent*", 0 }; override_arg_types[43] = s; }
        { static const char* s[] = { "int", "PaintDeviceMetric", 0 }; override_arg_types[44] = s; }
        { static const char* s[] = { "QWidget*", "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[45] = s; }
        { static const char* s[] = { "bool", "QEvent*", "QAbstractItemModel*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[46] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[47] = s; }
        { static const char* s[] = { 0, "QWidget*", "QModelIndex", 0 }; override_arg_types[48] = s; }
        { static const char* s[] = { 0, "QWidget*", "QAbstractItemModel*", "QModelIndex", 0 }; override_arg_types[49] = s; }
        { static const char* s[] = { "QSize", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[50] = s; }
        { static const char* s[] = { 0, "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[51] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[52] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[53] = s; }
        { static const char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[54] = s; }
        { static const char* s[] = { "QVariant", "QModelIndex", "int", 0 }; override_arg_types[55] = s; }
        { static const char* s[] = { "bool", "QMimeData*", "Qt::DropAction", "int", "int", "QModelIndex", 0 }; override_arg_types[56] = s; }
        { static const char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[57] = s; }
        { static const char* s[] = { "Qt::ItemFlags", "QModelIndex", 0 }; override_arg_types[58] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[59] = s; }
        { static const char* s[] = { "QVariant", "int", "Qt::Orientation", "int", 0 }; override_arg_types[60] = s; }
        { static const char* s[] = { "QModelIndex", "int", "int", "QModelIndex", 0 }; override_arg_types[61] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[62] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[63] = s; }
        { static const char* s[] = { "QModelIndexList", "QModelIndex", "int", "QVariant", "int", "Qt::MatchFlags", 0 }; override_arg_types[64] = s; }
        { static const char* s[] = { "QMimeData*", "QModelIndexList", 0 }; override_arg_types[65] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[66] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[67] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[68] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[69] = s; }
        { static const char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[70] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "QVariant", "int", 0 }; override_arg_types[71] = s; }
        { static const char* s[] = { "bool", "int", "Qt::Orientation", "QVariant", "int", 0 }; override_arg_types[72] = s; }
        { static const char* s[] = { 0, "int", "Qt::SortOrder", 0 }; override_arg_types[73] = s; }
        { static const char* s[] = { "QSize", "QModelIndex", 0 }; override_arg_types[74] = s; }
        { static const char* s[] = { "Qt::DropActions", 0 }; override_arg_types[75] = s; }
        { static const char* s[] = { "QModelIndex", "QPoint", 0 }; override_arg_types[76] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[77] = s; }
        { static const char* s[] = { 0, "QModelIndex", "ScrollHint", 0 }; override_arg_types[78] = s; }
        { static const char* s[] = { 0, "QAbstractItemModel*", 0 }; override_arg_types[79] = s; }
        { static const char* s[] = { 0, "QItemSelectionModel*", 0 }; override_arg_types[80] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[81] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[82] = s; }
        { static const char* s[] = { "QRect", "QModelIndex", 0 }; override_arg_types[83] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "EditTrigger", "QEvent*", 0 }; override_arg_types[84] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[85] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[86] = s; }
        { static const char* s[] = { "QModelIndex", "CursorAction", "Qt::KeyboardModifiers", 0 }; override_arg_types[87] = s; }
        { static const char* s[] = { "QModelIndexList", 0 }; override_arg_types[88] = s; }
        { static const char* s[] = { "QItemSelectionModel::SelectionFlags", "QModelIndex", "QEvent*", 0 }; override_arg_types[89] = s; }
        { static const char* s[] = { 0, "QRect", "QItemSelectionModel::SelectionFlags", 0 }; override_arg_types[90] = s; }
        { static const char* s[] = { 0, "Qt::DropActions", 0 }; override_arg_types[91] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[92] = s; }
        { static const char* s[] = { "QStyleOptionViewItem", 0 }; override_arg_types[93] = s; }
        { static const char* s[] = { "QRegion", "QItemSelection", 0 }; override_arg_types[94] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[95] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[96] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[97] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[98] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[99] = s; }
        { static const char* s[] = { "QItemSelection", "QItemSelection", 0 }; override_arg_types[100] = s; }
        { static const char* s[] = { "QItemSelection", "QItemSelection", 0 }; override_arg_types[101] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[102] = s; }
        { static const char* s[] = { 0, "QAbstractItemModel*", 0 }; override_arg_types[103] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[104] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[105] = s; }
        { static const char* s[] = { 0, "SliderChange", 0 }; override_arg_types[106] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[107] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[108] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[109] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[110] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[111] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[112] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[113] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[114] = s; }
        { static const char* s[] = { "qlonglong", "char*", "qint64", 0 }; override_arg_types[115] = s; }
        { static const char* s[] = { "qlonglong", "char*", "qint64", 0 }; override_arg_types[116] = s; }
        { static const char* s[] = { "qlonglong", "const char*", "qint64", 0 }; override_arg_types[117] = s; }
        { static const char* s[] = { "bool", "OpenMode", 0 }; override_arg_types[118] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[119] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[120] = s; }
        { static const char* s[] = { "bool", "qint64", 0 }; override_arg_types[121] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[122] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[123] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[124] = s; }
        { static const char* s[] = { "QValidator::State", "QString", "int", 0 }; override_arg_types[125] = s; }
        { static const char* s[] = { "StepEnabled", 0 }; override_arg_types[126] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[127] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[128] = s; }
        { static const char* s[] = { "QRectF", "QTextBlock", 0 }; override_arg_types[129] = s; }
        { static const char* s[] = { "QSizeF", 0 }; override_arg_types[130] = s; }
        { static const char* s[] = { 0, "QPainter*", "PaintContext", 0 }; override_arg_types[131] = s; }
        { static const char* s[] = { "QRectF", "QTextFrame*", 0 }; override_arg_types[132] = s; }
        { static const char* s[] = { "int", "QPointF", "Qt::HitTestAccuracy", 0 }; override_arg_types[133] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[134] = s; }
        { static const char* s[] = { 0, "int", "int", "int", 0 }; override_arg_types[135] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[136] = s; }
        { static const char* s[] = { 0, "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[137] = s; }
        { static const char* s[] = { 0, "QTextInlineObject", "int", "QTextFormat", 0 }; override_arg_types[138] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[139] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[140] = s; }
        { static const char* s[] = { 0, "QSessionManager", 0 }; override_arg_types[141] = s; }
        { static const char* s[] = { 0, "QSessionManager", 0 }; override_arg_types[142] = s; }
        { static const char* s[] = { "bool", "QObject*", "QEvent*", 0 }; override_arg_types[143] = s; }
        { static const char* s[] = { 0, "QLayoutItem*", 0 }; override_arg_types[144] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[145] = s; }
        { static const char* s[] = { "Qt::Orientations", 0 }; override_arg_types[146] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[147] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[148] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[149] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[150] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[151] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[152] = s; }
        { static const char* s[] = { 0, "QRect", 0 }; override_arg_types[153] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[154] = s; }
        { static const char* s[] = { "int", "QWidget*", 0 }; override_arg_types[155] = s; }
        { static const char* s[] = { "QRect", 0 }; override_arg_types[156] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[157] = s; }
        { static const char* s[] = { "QLayout*", 0 }; override_arg_types[158] = s; }
        { static const char* s[] = { 0, "ControlElement", "QStyleOption*", "QPainter*", "QWidget*", 0 }; override_arg_types[159] = s; }
        { static const char* s[] = { 0, "PrimitiveElement", "QStyleOption*", "QPainter*", "QWidget*", 0 }; override_arg_types[160] = s; }
        { static const char* s[] = { "int", "PixelMetric", "QStyleOption*", "QWidget*", 0 }; override_arg_types[161] = s; }
        { static const char* s[] = { "QPalette", 0 }; override_arg_types[162] = s; }
        { static const char* s[] = { 0, "ComplexControl", "QStyleOptionComplex*", "QPainter*", "QWidget*", 0 }; override_arg_types[163] = s; }
        { static const char* s[] = { 0, "QPalette", 0 }; override_arg_types[164] = s; }
        { static const char* s[] = { "QSize", "ContentsType", "QStyleOption*", "QSize", "QWidget*", 0 }; override_arg_types[165] = s; }
        { static const char* s[] = { "QPixmap", "StandardPixmap", "QStyleOption*", "QWidget*", 0 }; override_arg_types[166] = s; }
        { static const char* s[] = { "int", "StyleHint", "QStyleOption*", "QWidget*", "QStyleHintReturn*", 0 }; override_arg_types[167] = s; }
        { static const char* s[] = { "QRect", "ComplexControl", "QStyleOptionComplex*", "SubControl", "QWidget*", 0 }; override_arg_types[168] = s; }
        { static const char* s[] = { "QRect", "SubElement", "QStyleOption*", "QWidget*", 0 }; override_arg_types[169] = s; }
        { static const char* s[] = { "QPixmap", "QIcon::Mode", "QPixmap", "QStyleOption*", 0 }; override_arg_types[170] = s; }
        { static const char* s[] = { "SubControl", "ComplexControl", "QStyleOptionComplex*", "QPoint", "QWidget*", 0 }; override_arg_types[171] = s; }
        { static const char* s[] = { 0, "QApplication*", 0 }; override_arg_types[172] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[173] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[174] = s; }
        { static const char* s[] = { 0, "QApplication*", 0 }; override_arg_types[175] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", "QPixmap", 0 }; override_arg_types[176] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", "QPalette", "bool", "QString", "QPalette::ColorRole", 0 }; override_arg_types[177] = s; }
        { static const char* s[] = { "QRect", "QRect", "int", "QPixmap", 0 }; override_arg_types[178] = s; }
        { static const char* s[] = { "QRect", "QFontMetrics", "QRect", "int", "bool", "QString", 0 }; override_arg_types[179] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "QDate", 0 }; override_arg_types[180] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[181] = s; }
        { static const char* s[] = { "QAbstractItemView*", "QModelIndex", 0 }; override_arg_types[182] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[183] = s; }
        { static const char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[184] = s; }
        { static const char* s[] = { 0, "QModelIndex", "QModelIndex", 0 }; override_arg_types[185] = s; }
        { static const char* s[] = { 0, "QModelIndex", "int", "int", 0 }; override_arg_types[186] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[187] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[188] = s; }
        { static const char* s[] = { "QString", "QModelIndex", 0 }; override_arg_types[189] = s; }
        { static const char* s[] = { "QStringList", "QString", 0 }; override_arg_types[190] = s; }
        { static const char* s[] = { "QDateTime", "QString", 0 }; override_arg_types[191] = s; }
        { static const char* s[] = { "QString", "QDateTime", 0 }; override_arg_types[192] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[193] = s; }
        { static const char* s[] = { "QString", "double", 0 }; override_arg_types[194] = s; }
        { static const char* s[] = { "double", "QString", 0 }; override_arg_types[195] = s; }
        { static const char* s[] = { 0, "double", "double", "int", 0 }; override_arg_types[196] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[197] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[198] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[199] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[200] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[201] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[202] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[203] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[204] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[205] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[206] = s; }
        { static const char* s[] = { "QRectF", "QRectF", 0 }; override_arg_types[207] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[208] = s; }
        { static const char* s[] = { 0, "ChangeFlags", 0 }; override_arg_types[209] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[210] = s; }
        { static const char* s[] = { 0, "QRectF", 0 }; override_arg_types[211] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[212] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneContextMenuEvent*", 0 }; override_arg_types[213] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[214] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[215] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[216] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[217] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[218] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[219] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[220] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[221] = s; }
        { static const char* s[] = { "QVariant", "GraphicsItemChange", "QVariant", 0 }; override_arg_types[222] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[223] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[224] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[225] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[226] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneResizeEvent*", 0 }; override_arg_types[227] = s; }
        { static const char* s[] = { "QSizeF", "Qt::SizeHint", "QSizeF", 0 }; override_arg_types[228] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[229] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneWheelEvent*", 0 }; override_arg_types[230] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[231] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[232] = s; }
        { static const char* s[] = { 0, "QStyleOption*", 0 }; override_arg_types[233] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMoveEvent*", 0 }; override_arg_types[234] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[235] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[236] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[237] = s; }
        { static const char* s[] = { "Qt::WindowFrameSection", "QPointF", 0 }; override_arg_types[238] = s; }
        { static const char* s[] = { "QRectF", 0 }; override_arg_types[239] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[240] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[241] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[242] = s; }
        { static const char* s[] = { 0, "QMatrix4x4*", 0 }; override_arg_types[243] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[244] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[245] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHelpEvent*", 0 }; override_arg_types[246] = s; }
        { static const char* s[] = { "bool", "QPointF", 0 }; override_arg_types[247] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", 0 }; override_arg_types[248] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[249] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "int", 0 }; override_arg_types[250] = s; }
        { static const char* s[] = { "QSize", "int", 0 }; override_arg_types[251] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "QModelIndex", 0 }; override_arg_types[252] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[253] = s; }
        { static const char* s[] = { 0, "QModelIndex", "QModelIndex", 0 }; override_arg_types[254] = s; }
        { static const char* s[] = { 0, "QModelIndex", "int", "int", 0 }; override_arg_types[255] = s; }
        { static const char* s[] = { 0, "QItemSelection", "QItemSelection", 0 }; override_arg_types[256] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[257] = s; }
        { static const char* s[] = { "QList<QAction*>", 0 }; override_arg_types[258] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[259] = s; }
        { static const char* s[] = { "QFont", 0 }; override_arg_types[260] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[261] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[262] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[263] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[264] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[265] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[266] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[267] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "Qt::CheckState", 0 }; override_arg_types[268] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QPixmap", 0 }; override_arg_types[269] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QString", 0 }; override_arg_types[270] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", 0 }; override_arg_types[271] = s; }
        { static const char* s[] = { "bool", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[272] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QListWidgetItem*>", 0 }; override_arg_types[273] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[274] = s; }
        { static const char* s[] = { "QLocalSocket*", 0 }; override_arg_types[275] = s; }
        { static const char* s[] = { 0, "quintptr", 0 }; override_arg_types[276] = s; }
        { static const char* s[] = { "QMenu*", 0 }; override_arg_types[277] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[278] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[279] = s; }
        { static const char* s[] = { "QVariant", "QString", "QVariant::Type", 0 }; override_arg_types[280] = s; }
        { static const char* s[] = { "QList<QNetworkCookie>", "QUrl", 0 }; override_arg_types[281] = s; }
        { static const char* s[] = { "bool", "QList<QNetworkCookie>", "QUrl", 0 }; override_arg_types[282] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[283] = s; }
        { static const char* s[] = { "qlonglong", 0 }; override_arg_types[284] = s; }
        { static const char* s[] = { "QNetworkCacheMetaData", "QUrl", 0 }; override_arg_types[285] = s; }
        { static const char* s[] = { "bool", "QUrl", 0 }; override_arg_types[286] = s; }
        { static const char* s[] = { 0, "QNetworkCacheMetaData", 0 }; override_arg_types[287] = s; }
        { static const char* s[] = { "QVariant", "int", "QUrl", 0 }; override_arg_types[288] = s; }
        { static const char* s[] = { "bool", "QMimeData*", 0 }; override_arg_types[289] = s; }
        { static const char* s[] = { "QMimeData*", 0 }; override_arg_types[290] = s; }
        { static const char* s[] = { 0, "QMimeData*", 0 }; override_arg_types[291] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[292] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[293] = s; }
        { static const char* s[] = { 0, "QVariant", 0 }; override_arg_types[294] = s; }
        { static const char* s[] = { "QVariant", "QVariant", "QVariant", "qreal", 0 }; override_arg_types[295] = s; }
        { static const char* s[] = { "bool", "int", "QModelIndex", 0 }; override_arg_types[296] = s; }
        { static const char* s[] = { "bool", "int", "QModelIndex", 0 }; override_arg_types[297] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "QModelIndex", 0 }; override_arg_types[298] = s; }
        { static const char* s[] = { "QString", "int", 0 }; override_arg_types[299] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[300] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[301] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[302] = s; }
        { static const char* s[] = { "QSqlResult*", 0 }; override_arg_types[303] = s; }
        { static const char* s[] = { "QString", "QString", "IdentifierType", 0 }; override_arg_types[304] = s; }
        { static const char* s[] = { "QString", "QSqlField", "bool", 0 }; override_arg_types[305] = s; }
        { static const char* s[] = { "QVariant", 0 }; override_arg_types[306] = s; }
        { static const char* s[] = { "bool", "DriverFeature", 0 }; override_arg_types[307] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[308] = s; }
        { static const char* s[] = { "bool", "QString", "QString", "QString", "QString", "int", "QString", 0 }; override_arg_types[309] = s; }
        { static const char* s[] = { "QSqlIndex", "QString", 0 }; override_arg_types[310] = s; }
        { static const char* s[] = { "QSqlRecord", "QString", 0 }; override_arg_types[311] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[312] = s; }
        { static const char* s[] = { "QString", "StatementType", "QString", "QSqlRecord", "bool", 0 }; override_arg_types[313] = s; }
        { static const char* s[] = { "QStringList", "QSql::TableType", 0 }; override_arg_types[314] = s; }
        { static const char* s[] = { 0, "QSqlError", 0 }; override_arg_types[315] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[316] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[317] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[318] = s; }
        { static const char* s[] = { "QSqlTableModel*", "int", 0 }; override_arg_types[319] = s; }
        { static const char* s[] = { 0, "int", "QSqlRelation", 0 }; override_arg_types[320] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[321] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[322] = s; }
        { static const char* s[] = { "bool", "QSqlRecord", 0 }; override_arg_types[323] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[324] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[325] = s; }
        { static const char* s[] = { "bool", "int", "QSqlRecord", 0 }; override_arg_types[326] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[327] = s; }
        { static const char* s[] = { 0, "EditStrategy", 0 }; override_arg_types[328] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[329] = s; }
        { static const char* s[] = { 0, "int", "Qt::SortOrder", 0 }; override_arg_types[330] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[331] = s; }
        { static const char* s[] = { "QString", "QVariant", "QLocale", 0 }; override_arg_types[332] = s; }
        { static const char* s[] = { 0, "QStyleOptionViewItem*", "QModelIndex", 0 }; override_arg_types[333] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[334] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[335] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[336] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[337] = s; }
        { static const char* s[] = { "QSize", "int", 0 }; override_arg_types[338] = s; }
        { static const char* s[] = { "bool", "int", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[339] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTableWidgetItem*>", 0 }; override_arg_types[340] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[341] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[342] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[343] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[344] = s; }
        { static const char* s[] = { "QTextObject*", "QTextFormat", 0 }; override_arg_types[345] = s; }
        { static const char* s[] = { "qreal", "int", 0 }; override_arg_types[346] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[347] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[348] = s; }
        { static const char* s[] = { "QString", "const char*", "const char*", "const char*", 0 }; override_arg_types[349] = s; }
        { static const char* s[] = { "bool", "QTreeWidgetItem*", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[350] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTreeWidgetItem*>", 0 }; override_arg_types[351] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[352] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[353] = s; }
        { static const char* s[] = { "bool", "Extension", "ExtensionOption*", "ExtensionReturn*", 0 }; override_arg_types[354] = s; }
        { static const char* s[] = { "bool", "Extension", 0 }; override_arg_types[355] = s; }
        { static const char* s[] = { 0, "WebAction", "bool", 0 }; override_arg_types[356] = s; }
        { static const char* s[] = { "bool", "QWebFrame*", "QNetworkRequest", "NavigationType", 0 }; override_arg_types[357] = s; }
        { static const char* s[] = { "QString", "QWebFrame*", "QString", 0 }; override_arg_types[358] = s; }
        { static const char* s[] = { "QObject*", "QString", "QUrl", "QStringList", "QStringList", 0 }; override_arg_types[359] = s; }
        { static const char* s[] = { "QWebPage*", "WebWindowType", 0 }; override_arg_types[360] = s; }
        { static const char* s[] = { 0, "QWebFrame*", "QString", 0 }; override_arg_types[361] = s; }
        { static const char* s[] = { "bool", "QWebFrame*", "QString", 0 }; override_arg_types[362] = s; }
        { static const char* s[] = { 0, "QString", "int", "QString", 0 }; override_arg_types[363] = s; }
        { static const char* s[] = { "bool", "QWebFrame*", "QString", "QString", "QString*", 0 }; override_arg_types[364] = s; }
        { static const char* s[] = { "QString", "QUrl", 0 }; override_arg_types[365] = s; }
        { static const char* s[] = { "QObject*", "QString", "QUrl", "QStringList", "QStringList", 0 }; override_arg_types[366] = s; }
        { static const char* s[] = { "QList<Plugin>", 0 }; override_arg_types[367] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[368] = s; }
        { static const char* s[] = { "QWebView*", "QWebPage::WebWindowType", 0 }; override_arg_types[369] = s; }
        { static const char* s[] = { "QWidget*", "QWidget*", 0 }; override_arg_types[370] = s; }
        { static const char* s[] = { 0, "QWidget*", 0 }; override_arg_types[371] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[372] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[373] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[374] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[375] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[376] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[377] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[378] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[379] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[380] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "Qt::ItemSelectionMode", 0 }; override_arg_types[381] = s; }
        { static const char* s[] = { "bool", "QPainterPath", "Qt::ItemSelectionMode", 0 }; override_arg_types[382] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "QEvent*", 0 }; override_arg_types[383] = s; }
        { static const char* s[] = { "QString", "int", "Text", "int", 0 }; override_arg_types[384] = s; }
        { static const char* s[] = { "int", "int", "int", 0 }; override_arg_types[385] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[386] = s; }
        { static const char* s[] = { "bool", "int", "int", "QVariantList", 0 }; override_arg_types[387] = s; }
        { static const char* s[] = { "int", "QAccessibleInterface*", 0 }; override_arg_types[388] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[389] = s; }
        { static const char* s[] = { "QObject*", 0 }; override_arg_types[390] = s; }
        { static const char* s[] = { "QRect", "int", 0 }; override_arg_types[391] = s; }
        { static const char* s[] = { "Relation", "int", "QAccessibleInterface*", "int", 0 }; override_arg_types[392] = s; }
        { static const char* s[] = { "Role", "int", 0 }; override_arg_types[393] = s; }
        { static const char* s[] = { 0, "Text", "int", "QString", 0 }; override_arg_types[394] = s; }
        { static const char* s[] = { "State", "int", 0 }; override_arg_types[395] = s; }
        { static const char* s[] = { "QString", "Text", "int", 0 }; override_arg_types[396] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[397] = s; }
        { static const char* s[] = { "QByteArray", "const char*", 0 }; override_arg_types[398] = s; }
        { static const char* s[] = { "const char*", "int", 0 }; override_arg_types[399] = s; }
        { static const char* s[] = { "bool", "const char*", 0 }; override_arg_types[400] = s; }
        { static const char* s[] = { "QIcon", "IconType", 0 }; override_arg_types[401] = s; }
        { static const char* s[] = { "QIcon", "QFileInfo", 0 }; override_arg_types[402] = s; }
        { static const char* s[] = { "QString", "QFileInfo", 0 }; override_arg_types[403] = s; }
        { static const char* s[] = { "bool", "QGLContext*", 0 }; override_arg_types[404] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[405] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[406] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[407] = s; }
        { static const char* s[] = { "bool", "QGLContext*", 0 }; override_arg_types[408] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[409] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[410] = s; }
        { static const char* s[] = { "QWidget*", "QVariant::Type", "QWidget*", 0 }; override_arg_types[411] = s; }
        { static const char* s[] = { "QByteArray", "QVariant::Type", 0 }; override_arg_types[412] = s; }
        { static const char* s[] = { "QSpacerItem*", 0 }; override_arg_types[413] = s; }
        { static const char* s[] = { "QWidget*", 0 }; override_arg_types[414] = s; }
        { static const char* s[] = { "QListWidgetItem*", 0 }; override_arg_types[415] = s; }
        { static const char* s[] = { "QVariant", "int", 0 }; override_arg_types[416] = s; }
        { static const char* s[] = { 0, "int", "QVariant", 0 }; override_arg_types[417] = s; }
        { static const char* s[] = { "QList<QNetworkProxy>", "QNetworkProxyQuery", 0 }; override_arg_types[418] = s; }
        { static const char* s[] = { 0, "const char*", "uint", 0 }; override_arg_types[419] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[420] = s; }
        { static const char* s[] = { 0, "int", "QVariant", "QSql::ParamType", 0 }; override_arg_types[421] = s; }
        { static const char* s[] = { 0, "QString", "QVariant", "QSql::ParamType", 0 }; override_arg_types[422] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[423] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[424] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[425] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[426] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[427] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[428] = s; }
        { static const char* s[] = { "QVariant", 0 }; override_arg_types[429] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[430] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[431] = s; }
        { static const char* s[] = { "QSqlRecord", 0 }; override_arg_types[432] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[433] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[434] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[435] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[436] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[437] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[438] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[439] = s; }
        { static const char* s[] = { 0, "QVariant", "int", 0 }; override_arg_types[440] = s; }
        { static const char* s[] = { "int", "QPaintDevice::PaintDeviceMetric", 0 }; override_arg_types[441] = s; }
        { static const char* s[] = { "QList<QByteArray>", 0 }; override_arg_types[442] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[443] = s; }
        { static const char* s[] = { "QByteArray", 0 }; override_arg_types[444] = s; }
        { static const char* s[] = { "QByteArray", "QChar*", "int", "ConverterState*", 0 }; override_arg_types[445] = s; }
        { static const char* s[] = { "QString", "const char*", "int", "ConverterState*", 0 }; override_arg_types[446] = s; }
        { static const char* s[] = { "QVariant", "int", "int", 0 }; override_arg_types[447] = s; }
        { static const char* s[] = { 0, "int", "int", "QVariant", 0 }; override_arg_types[448] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[449] = s; }
        { static const char* s[] = { "bool", "QUndoCommand*", 0 }; override_arg_types[450] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[451] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[452] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[453] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[454] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[455] = s; }
        { static const char* s[] = { 0, "QDateTime", 0 }; override_arg_types[456] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[457] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[458] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[459] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[460] = s; }
        { static const char* s[] = { 0, "qint64", 0 }; override_arg_types[461] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[462] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[463] = s; }
        qNames = q_names.keys();
        nNames = n_names.keys(); }}

void LObjects::cleanUp() {
    delete EQL::eventLoop;
    delete[] override_arg_types;
    for(int i = 205; i + 1; --i) { delete N[i]; }
    for(int i = 224; i + 1; --i) { delete Q[i]; }
    delete[] N;
    delete[] Q;
    delete dynObject; }

quint64 LObjects::override_id(uint unique, int id) {
    return (464 * (quint64)unique + id); }

void* LObjects::overrideFun(quint64 id) {
    return override_lisp_functions.value(id, 0); }

void LObjects::setOverrideFun(quint64 id, void* fun) {
    override_lisp_functions[id] = fun; }

const QMetaObject* LObjects::staticMetaObject(const QByteArray& name, int n) {
    if(!n) {
        n = LObjects::q_names.value(name, 0);
        if(!n) {
            n = -LObjects::n_names.value(name, 0); }}
    const QMetaObject* m = 0;
    switch(n) {
        case -205: m = &QWindowStateChangeEvent::staticMetaObject; break;
        case -203: m = &QWheelEvent::staticMetaObject; break;
        case -202: m = &QWhatsThisClickedEvent::staticMetaObject; break;
        case -183: m = &QTouchEvent::staticMetaObject; break;
        case -181: m = &QTimerEvent::staticMetaObject; break;
        case -179: m = &QTextTableFormat::staticMetaObject; break;
        case -178: m = &QTextTableCellFormat::staticMetaObject; break;
        case -175: m = &QTextListFormat::staticMetaObject; break;
        case -171: m = &QTextImageFormat::staticMetaObject; break;
        case -170: m = &QTextFrameFormat::staticMetaObject; break;
        case -168: m = &QTextFormat::staticMetaObject; break;
        case -161: m = &QTextCharFormat::staticMetaObject; break;
        case -158: m = &QTextBlockFormat::staticMetaObject; break;
        case -156: m = &QTabletEvent::staticMetaObject; break;
        case -149: m = &QStatusTipEvent::staticMetaObject; break;
        case -133: m = &QSizePolicy::staticMetaObject; break;
        case -132: m = &QShowEvent::staticMetaObject; break;
        case -131: m = &QShortcutEvent::staticMetaObject; break;
        case -128: m = &QResizeEvent::staticMetaObject; break;
        case -123: m = &QRadialGradient::staticMetaObject; break;
        case -113: m = &QPalette::staticMetaObject; break;
        case -110: m = &QPainter::staticMetaObject; break;
        case -109: m = &QPaintEvent::staticMetaObject; break;
        case -99: m = &QMoveEvent::staticMetaObject; break;
        case -98: m = &QMouseEvent::staticMetaObject; break;
        case -92: m = &QLocale::staticMetaObject; break;
        case -90: m = &QLinearGradient::staticMetaObject; break;
        case -86: m = &QKeyEvent::staticMetaObject; break;
        case -82: m = &QInputMethodEvent::staticMetaObject; break;
        case -81: m = &QInputEvent::staticMetaObject; break;
        case -79: m = &QIconDragEvent::staticMetaObject; break;
        case -77: m = &QHoverEvent::staticMetaObject; break;
        case -74: m = &QHideEvent::staticMetaObject; break;
        case -72: m = &QHelpEvent::staticMetaObject; break;
        case -69: m = &QGraphicsSceneWheelEvent::staticMetaObject; break;
        case -68: m = &QGraphicsSceneResizeEvent::staticMetaObject; break;
        case -67: m = &QGraphicsSceneMoveEvent::staticMetaObject; break;
        case -66: m = &QGraphicsSceneMouseEvent::staticMetaObject; break;
        case -65: m = &QGraphicsSceneHoverEvent::staticMetaObject; break;
        case -64: m = &QGraphicsSceneHelpEvent::staticMetaObject; break;
        case -63: m = &QGraphicsSceneEvent::staticMetaObject; break;
        case -62: m = &QGraphicsSceneDragDropEvent::staticMetaObject; break;
        case -61: m = &QGraphicsSceneContextMenuEvent::staticMetaObject; break;
        case -47: m = &QGradient::staticMetaObject; break;
        case -46: m = &QGestureEvent::staticMetaObject; break;
        case -37: m = &QFontDatabase::staticMetaObject; break;
        case -36: m = &QFont::staticMetaObject; break;
        case -35: m = &QFocusEvent::staticMetaObject; break;
        case -34: m = &QFileOpenEvent::staticMetaObject; break;
        case -31: m = &QEvent::staticMetaObject; break;
        case -30: m = &QEasingCurve::staticMetaObject; break;
        case -29: m = &QDynamicPropertyChangeEvent::staticMetaObject; break;
        case -28: m = &QDropEvent::staticMetaObject; break;
        case -27: m = &QDragMoveEvent::staticMetaObject; break;
        case -26: m = &QDragLeaveEvent::staticMetaObject; break;
        case -25: m = &QDragEnterEvent::staticMetaObject; break;
        case -17: m = &QContextMenuEvent::staticMetaObject; break;
        case -16: m = &QConicalGradient::staticMetaObject; break;
        case -14: m = &QCloseEvent::staticMetaObject; break;
        case -13: m = &QChildEvent::staticMetaObject; break;
        case -7: m = &QActionEvent::staticMetaObject; break;
        case -3: m = &QAccessibleEvent::staticMetaObject; break;
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
        case 83: m = &QGraphicsWidget::staticMetaObject; break;
        case 84: m = &QGridLayout::staticMetaObject; break;
        case 85: m = &QGroupBox::staticMetaObject; break;
        case 86: m = &QHBoxLayout::staticMetaObject; break;
        case 87: m = &QHeaderView::staticMetaObject; break;
        case 96: m = &QHistoryState::staticMetaObject; break;
        case 97: m = &QIODevice::staticMetaObject; break;
        case 98: m = &QInputContext::staticMetaObject; break;
        case 99: m = &QInputDialog::staticMetaObject; break;
        case 100: m = &QIntValidator::staticMetaObject; break;
        case 101: m = &QItemDelegate::staticMetaObject; break;
        case 102: m = &QItemSelectionModel::staticMetaObject; break;
        case 103: m = &QKeyEventTransition::staticMetaObject; break;
        case 104: m = &QLCDNumber::staticMetaObject; break;
        case 105: m = &QLabel::staticMetaObject; break;
        case 106: m = &QLayout::staticMetaObject; break;
        case 107: m = &QLibrary::staticMetaObject; break;
        case 108: m = &QLineEdit::staticMetaObject; break;
        case 109: m = &QListView::staticMetaObject; break;
        case 110: m = &QListWidget::staticMetaObject; break;
        case 113: m = &QMainWindow::staticMetaObject; break;
        case 114: m = &QMdiArea::staticMetaObject; break;
        case 115: m = &QMdiSubWindow::staticMetaObject; break;
        case 116: m = &QMenu::staticMetaObject; break;
        case 117: m = &QMenuBar::staticMetaObject; break;
        case 118: m = &QMessageBox::staticMetaObject; break;
        case 119: m = &QMimeData::staticMetaObject; break;
        case 120: m = &QMotifStyle::staticMetaObject; break;
        case 121: m = &QMouseEventTransition::staticMetaObject; break;
        case 122: m = &QMovie::staticMetaObject; break;
        case 127: m = &QObject::staticMetaObject; break;
        case 128: m = &QPageSetupDialog::staticMetaObject; break;
        case 129: m = &QPanGesture::staticMetaObject; break;
        case 130: m = &QParallelAnimationGroup::staticMetaObject; break;
        case 131: m = &QPauseAnimation::staticMetaObject; break;
        case 132: m = &QPinchGesture::staticMetaObject; break;
        case 133: m = &QPlainTextDocumentLayout::staticMetaObject; break;
        case 134: m = &QPlainTextEdit::staticMetaObject; break;
        case 135: m = &QPlastiqueStyle::staticMetaObject; break;
        case 136: m = &QPluginLoader::staticMetaObject; break;
        case 137: m = &QPrintDialog::staticMetaObject; break;
        case 138: m = &QPrintPreviewDialog::staticMetaObject; break;
        case 139: m = &QPrintPreviewWidget::staticMetaObject; break;
        case 140: m = &QProcess::staticMetaObject; break;
        case 141: m = &QProgressBar::staticMetaObject; break;
        case 142: m = &QProgressDialog::staticMetaObject; break;
        case 143: m = &QPropertyAnimation::staticMetaObject; break;
        case 144: m = &QPushButton::staticMetaObject; break;
        case 145: m = &QRadioButton::staticMetaObject; break;
        case 146: m = &QRegExpValidator::staticMetaObject; break;
        case 147: m = &QRubberBand::staticMetaObject; break;
        case 148: m = &QScrollArea::staticMetaObject; break;
        case 149: m = &QScrollBar::staticMetaObject; break;
        case 150: m = &QSequentialAnimationGroup::staticMetaObject; break;
        case 151: m = &QSessionManager::staticMetaObject; break;
        case 152: m = &QSettings::staticMetaObject; break;
        case 153: m = &QShortcut::staticMetaObject; break;
        case 154: m = &QSignalTransition::staticMetaObject; break;
        case 155: m = &QSizeGrip::staticMetaObject; break;
        case 156: m = &QSlider::staticMetaObject; break;
        case 157: m = &QSortFilterProxyModel::staticMetaObject; break;
        case 158: m = &QSound::staticMetaObject; break;
        case 159: m = &QSpinBox::staticMetaObject; break;
        case 160: m = &QSplashScreen::staticMetaObject; break;
        case 161: m = &QSplitter::staticMetaObject; break;
        case 162: m = &QSplitterHandle::staticMetaObject; break;
        case 168: m = &QStackedLayout::staticMetaObject; break;
        case 169: m = &QStackedWidget::staticMetaObject; break;
        case 170: m = &QStandardItemModel::staticMetaObject; break;
        case 171: m = &QState::staticMetaObject; break;
        case 172: m = &QStateMachine::staticMetaObject; break;
        case 173: m = &QStatusBar::staticMetaObject; break;
        case 174: m = &QStringListModel::staticMetaObject; break;
        case 175: m = &QStyle::staticMetaObject; break;
        case 176: m = &QStyledItemDelegate::staticMetaObject; break;
        case 179: m = &QSwipeGesture::staticMetaObject; break;
        case 180: m = &QSyntaxHighlighter::staticMetaObject; break;
        case 181: m = &QSystemTrayIcon::staticMetaObject; break;
        case 182: m = &QTabBar::staticMetaObject; break;
        case 183: m = &QTabWidget::staticMetaObject; break;
        case 184: m = &QTableView::staticMetaObject; break;
        case 185: m = &QTableWidget::staticMetaObject; break;
        case 186: m = &QTapAndHoldGesture::staticMetaObject; break;
        case 187: m = &QTapGesture::staticMetaObject; break;
        case 190: m = &QTextBlockGroup::staticMetaObject; break;
        case 191: m = &QTextBrowser::staticMetaObject; break;
        case 192: m = &QTextDocument::staticMetaObject; break;
        case 193: m = &QTextEdit::staticMetaObject; break;
        case 194: m = &QTextFrame::staticMetaObject; break;
        case 195: m = &QTextList::staticMetaObject; break;
        case 196: m = &QTextObject::staticMetaObject; break;
        case 197: m = &QTextTable::staticMetaObject; break;
        case 198: m = &QTimeEdit::staticMetaObject; break;
        case 199: m = &QTimeLine::staticMetaObject; break;
        case 200: m = &QTimer::staticMetaObject; break;
        case 201: m = &QToolBar::staticMetaObject; break;
        case 202: m = &QToolBox::staticMetaObject; break;
        case 203: m = &QToolButton::staticMetaObject; break;
        case 204: m = &QTranslator::staticMetaObject; break;
        case 205: m = &QTreeView::staticMetaObject; break;
        case 206: m = &QTreeWidget::staticMetaObject; break;
        case 208: m = &QUndoGroup::staticMetaObject; break;
        case 209: m = &QUndoStack::staticMetaObject; break;
        case 210: m = &QUndoView::staticMetaObject; break;
        case 211: m = &QVBoxLayout::staticMetaObject; break;
        case 212: m = &QValidator::staticMetaObject; break;
        case 213: m = &QVariantAnimation::staticMetaObject; break;
        case 220: m = &QWidget::staticMetaObject; break;
        case 221: m = &QWidgetAction::staticMetaObject; break;
        case 222: m = &QWindowsStyle::staticMetaObject; break;
        case 223: m = &QWizard::staticMetaObject; break;
        case 224: m = &QWizardPage::staticMetaObject; break;
        case 225: m = &QWorkspace::staticMetaObject; break;
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
            if(staticMetaObject_help) {
                m = staticMetaObject_help(n); }
            break;
        case 7:
        case 12:
        case 62:
        case 111:
        case 112:
        case 123:
        case 124:
        case 125:
        case 126:
        case 188:
        case 189:
        case 207:
            if(staticMetaObject_network) {
                m = staticMetaObject_network(n); }
            break;
        case 63:
        case 64:
        case 65:
            if(staticMetaObject_opengl) {
                m = staticMetaObject_opengl(n); }
            break;
        case 163:
        case 164:
        case 165:
        case 166:
        case 167:
            if(staticMetaObject_sql) {
                m = staticMetaObject_sql(n); }
            break;
        case 78:
        case 177:
        case 178:
            if(staticMetaObject_svg) {
                m = staticMetaObject_svg(n); }
            break;
        case 82:
        case 214:
        case 215:
        case 216:
        case 217:
        case 218:
        case 219:
            if(staticMetaObject_webkit) {
                m = staticMetaObject_webkit(n); }
            break; }
    return m; }

void LObjects::deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 1: if(gc) delete (QAbstractGraphicsShapeItem*)p; else delete (LAbstractGraphicsShapeItem*)p; break;
        case 2: if(gc) delete (QAccessible*)p; else delete (LAccessible*)p; break;
        case 3: if(gc) delete (QAccessibleEvent*)p; else delete (LAccessibleEvent*)p; break;
        case 4: if(gc) delete (QAccessibleInterface*)p; else delete (LAccessibleInterface*)p; break;
        case 6: if(gc) /* nothing */; else delete (LAccessibleWidget*)p; break;
        case 7: if(gc) delete (QActionEvent*)p; else delete (LActionEvent*)p; break;
        case 9: if(gc) delete (QBasicTimer*)p; else delete (LBasicTimer*)p; break;
        case 10: if(gc) delete (QBitArray*)p; else delete (LBitArray*)p; break;
        case 11: if(gc) delete (QBitmap*)p; else delete (LBitmap*)p; break;
        case 12: if(gc) delete (QBrush*)p; else delete (LBrush*)p; break;
        case 13: if(gc) delete (QChildEvent*)p; else delete (LChildEvent*)p; break;
        case 14: if(gc) delete (QCloseEvent*)p; else delete (LCloseEvent*)p; break;
        case 15: if(gc) delete (QColor*)p; else delete (LColor*)p; break;
        case 16: if(gc) delete (QConicalGradient*)p; else delete (LConicalGradient*)p; break;
        case 17: if(gc) delete (QContextMenuEvent*)p; else delete (LContextMenuEvent*)p; break;
        case 18: if(gc) delete (QCryptographicHash*)p; else delete (LCryptographicHash*)p; break;
        case 19: if(gc) delete (QCursor*)p; else delete (LCursor*)p; break;
        case 20: if(gc) delete (QDate*)p; else delete (LDate*)p; break;
        case 21: if(gc) delete (QDateTime*)p; else delete (LDateTime*)p; break;
        case 22: if(gc) delete (QDesktopServices*)p; else delete (LDesktopServices*)p; break;
        case 23: if(gc) delete (QDir*)p; else delete (LDir*)p; break;
        case 24: if(gc) delete (QDirIterator*)p; else delete (LDirIterator*)p; break;
        case 25: if(gc) delete (QDragEnterEvent*)p; else delete (LDragEnterEvent*)p; break;
        case 26: if(gc) delete (QDragLeaveEvent*)p; else delete (LDragLeaveEvent*)p; break;
        case 27: if(gc) delete (QDragMoveEvent*)p; else delete (LDragMoveEvent*)p; break;
        case 28: if(gc) delete (QDropEvent*)p; else delete (LDropEvent*)p; break;
        case 29: if(gc) delete (QDynamicPropertyChangeEvent*)p; else delete (LDynamicPropertyChangeEvent*)p; break;
        case 30: if(gc) delete (QEasingCurve*)p; else delete (LEasingCurve*)p; break;
        case 31: if(gc) delete (QEvent*)p; else delete (LEvent*)p; break;
        case 32: if(gc) delete (QFileIconProvider*)p; else delete (LFileIconProvider*)p; break;
        case 33: if(gc) delete (QFileInfo*)p; else delete (LFileInfo*)p; break;
        case 34: if(gc) delete (QFileOpenEvent*)p; else delete (LFileOpenEvent*)p; break;
        case 35: if(gc) delete (QFocusEvent*)p; else delete (LFocusEvent*)p; break;
        case 36: if(gc) delete (QFont*)p; else delete (LFont*)p; break;
        case 37: if(gc) delete (QFontDatabase*)p; else delete (LFontDatabase*)p; break;
        case 38: if(gc) delete (QFontInfo*)p; else delete (LFontInfo*)p; break;
        case 39: if(gc) delete (QFontMetrics*)p; else delete (LFontMetrics*)p; break;
        case 46: if(gc) delete (QGestureEvent*)p; else delete (LGestureEvent*)p; break;
        case 47: if(gc) delete (QGradient*)p; else delete (LGradient*)p; break;
        case 48: if(gc) delete (QGraphicsAnchorLayout*)p; else delete (LGraphicsAnchorLayout*)p; break;
        case 49: if(gc) delete (QGraphicsEllipseItem*)p; else delete (LGraphicsEllipseItem*)p; break;
        case 50: if(gc) delete (QGraphicsGridLayout*)p; else delete (LGraphicsGridLayout*)p; break;
        case 51: if(gc) delete (QGraphicsItem*)p; else delete (LGraphicsItem*)p; break;
        case 52: if(gc) delete (QGraphicsItemGroup*)p; else delete (LGraphicsItemGroup*)p; break;
        case 53: if(gc) delete (QGraphicsLayout*)p; else delete (LGraphicsLayout*)p; break;
        case 54: if(gc) delete (QGraphicsLayoutItem*)p; else delete (LGraphicsLayoutItem*)p; break;
        case 55: if(gc) delete (QGraphicsLineItem*)p; else delete (LGraphicsLineItem*)p; break;
        case 56: if(gc) delete (QGraphicsLinearLayout*)p; else delete (LGraphicsLinearLayout*)p; break;
        case 57: if(gc) delete (QGraphicsPathItem*)p; else delete (LGraphicsPathItem*)p; break;
        case 58: if(gc) delete (QGraphicsPixmapItem*)p; else delete (LGraphicsPixmapItem*)p; break;
        case 59: if(gc) delete (QGraphicsPolygonItem*)p; else delete (LGraphicsPolygonItem*)p; break;
        case 60: if(gc) delete (QGraphicsRectItem*)p; else delete (LGraphicsRectItem*)p; break;
        case 61: if(gc) delete (QGraphicsSceneContextMenuEvent*)p; else delete (LGraphicsSceneContextMenuEvent*)p; break;
        case 62: if(gc) delete (QGraphicsSceneDragDropEvent*)p; else delete (LGraphicsSceneDragDropEvent*)p; break;
        case 63: if(gc) delete (QGraphicsSceneEvent*)p; else delete (LGraphicsSceneEvent*)p; break;
        case 64: if(gc) delete (QGraphicsSceneHelpEvent*)p; else delete (LGraphicsSceneHelpEvent*)p; break;
        case 65: if(gc) delete (QGraphicsSceneHoverEvent*)p; else delete (LGraphicsSceneHoverEvent*)p; break;
        case 66: if(gc) delete (QGraphicsSceneMouseEvent*)p; else delete (LGraphicsSceneMouseEvent*)p; break;
        case 67: if(gc) delete (QGraphicsSceneMoveEvent*)p; else delete (LGraphicsSceneMoveEvent*)p; break;
        case 68: if(gc) delete (QGraphicsSceneResizeEvent*)p; else delete (LGraphicsSceneResizeEvent*)p; break;
        case 69: if(gc) delete (QGraphicsSceneWheelEvent*)p; else delete (LGraphicsSceneWheelEvent*)p; break;
        case 70: if(gc) delete (QGraphicsSimpleTextItem*)p; else delete (LGraphicsSimpleTextItem*)p; break;
        case 72: if(gc) delete (QHelpEvent*)p; else delete (LHelpEvent*)p; break;
        case 74: if(gc) delete (QHideEvent*)p; else delete (LHideEvent*)p; break;
        case 77: if(gc) delete (QHoverEvent*)p; else delete (LHoverEvent*)p; break;
        case 78: if(gc) delete (QIcon*)p; else delete (LIcon*)p; break;
        case 79: if(gc) delete (QIconDragEvent*)p; else delete (LIconDragEvent*)p; break;
        case 80: if(gc) delete (QImage*)p; else delete (LImage*)p; break;
        case 81: if(gc) delete (QInputEvent*)p; else delete (LInputEvent*)p; break;
        case 82: if(gc) delete (QInputMethodEvent*)p; else delete (LInputMethodEvent*)p; break;
        case 83: if(gc) delete (QItemEditorFactory*)p; else delete (LItemEditorFactory*)p; break;
        case 84: if(gc) delete (QItemSelection*)p; else delete (LItemSelection*)p; break;
        case 85: if(gc) delete (QItemSelectionRange*)p; else delete (LItemSelectionRange*)p; break;
        case 86: if(gc) delete (QKeyEvent*)p; else delete (LKeyEvent*)p; break;
        case 87: if(gc) delete (QKeySequence*)p; else delete (LKeySequence*)p; break;
        case 88: if(gc) delete (QLayoutItem*)p; else delete (LLayoutItem*)p; break;
        case 89: if(gc) delete (QLibraryInfo*)p; else delete (LLibraryInfo*)p; break;
        case 90: if(gc) delete (QLinearGradient*)p; else delete (LLinearGradient*)p; break;
        case 91: if(gc) delete (QListWidgetItem*)p; else delete (LListWidgetItem*)p; break;
        case 92: if(gc) delete (QLocale*)p; else delete (LLocale*)p; break;
        case 93: if(gc) delete (QMargins*)p; else delete (LMargins*)p; break;
        case 94: if(gc) delete (QMatrix*)p; else delete (LMatrix*)p; break;
        case 95: if(gc) delete (QMatrix4x4*)p; else delete (LMatrix4x4*)p; break;
        case 96: if(gc) delete (QMetaObject*)p; else delete (LMetaObject*)p; break;
        case 97: if(gc) delete (QModelIndex*)p; else delete (LModelIndex*)p; break;
        case 98: if(gc) delete (QMouseEvent*)p; else delete (LMouseEvent*)p; break;
        case 99: if(gc) delete (QMoveEvent*)p; else delete (LMoveEvent*)p; break;
        case 109: if(gc) delete (QPaintEvent*)p; else delete (LPaintEvent*)p; break;
        case 110: if(gc) delete (QPainter*)p; else delete (LPainter*)p; break;
        case 111: if(gc) delete (QPainterPath*)p; else delete (LPainterPath*)p; break;
        case 112: if(gc) delete (QPainterPathStroker*)p; else delete (LPainterPathStroker*)p; break;
        case 113: if(gc) delete (QPalette*)p; else delete (LPalette*)p; break;
        case 114: if(gc) delete (QPen*)p; else delete (LPen*)p; break;
        case 115: if(gc) delete (QPersistentModelIndex*)p; else delete (LPersistentModelIndex*)p; break;
        case 116: if(gc) delete (QPicture*)p; else delete (LPicture*)p; break;
        case 117: if(gc) delete (QPixmap*)p; else delete (LPixmap*)p; break;
        case 118: if(gc) delete (QPixmapCache*)p; else delete (LPixmapCache*)p; break;
        case 119: if(gc) delete (QPrinter*)p; else delete (LPrinter*)p; break;
        case 120: if(gc) delete (QPrinterInfo*)p; else delete (LPrinterInfo*)p; break;
        case 121: if(gc) delete (QProcessEnvironment*)p; else delete (LProcessEnvironment*)p; break;
        case 122: if(gc) delete (QQuaternion*)p; else delete (LQuaternion*)p; break;
        case 123: if(gc) delete (QRadialGradient*)p; else delete (LRadialGradient*)p; break;
        case 124: if(gc) delete (QReadLocker*)p; else delete (LReadLocker*)p; break;
        case 125: if(gc) delete (QReadWriteLock*)p; else delete (LReadWriteLock*)p; break;
        case 126: if(gc) delete (QRegExp*)p; else delete (LRegExp*)p; break;
        case 127: if(gc) delete (QRegion*)p; else delete (LRegion*)p; break;
        case 128: if(gc) delete (QResizeEvent*)p; else delete (LResizeEvent*)p; break;
        case 129: if(gc) delete (QRunnable*)p; else delete (LRunnable*)p; break;
        case 130: if(gc) delete (QSemaphore*)p; else delete (LSemaphore*)p; break;
        case 131: if(gc) delete (QShortcutEvent*)p; else delete (LShortcutEvent*)p; break;
        case 132: if(gc) delete (QShowEvent*)p; else delete (LShowEvent*)p; break;
        case 133: if(gc) delete (QSizePolicy*)p; else delete (LSizePolicy*)p; break;
        case 134: if(gc) delete (QSpacerItem*)p; else delete (LSpacerItem*)p; break;
        case 148: if(gc) delete (QStandardItem*)p; else delete (LStandardItem*)p; break;
        case 149: if(gc) delete (QStatusTipEvent*)p; else delete (LStatusTipEvent*)p; break;
        case 150: if(gc) delete (QStyleOption*)p; else delete (LStyleOption*)p; break;
        case 151: if(gc) delete (QStyleOptionGraphicsItem*)p; else delete (LStyleOptionGraphicsItem*)p; break;
        case 153: if(gc) delete (QSystemSemaphore*)p; else delete (LSystemSemaphore*)p; break;
        case 154: if(gc) delete (QTableWidgetItem*)p; else delete (LTableWidgetItem*)p; break;
        case 155: if(gc) delete (QTableWidgetSelectionRange*)p; else delete (LTableWidgetSelectionRange*)p; break;
        case 156: if(gc) delete (QTabletEvent*)p; else delete (LTabletEvent*)p; break;
        case 157: if(gc) delete (QTextBlock*)p; else delete (LTextBlock*)p; break;
        case 158: if(gc) delete (QTextBlockFormat*)p; else delete (LTextBlockFormat*)p; break;
        case 159: if(gc) delete (QTextBlockUserData*)p; else delete (LTextBlockUserData*)p; break;
        case 160: if(gc) delete (QTextBoundaryFinder*)p; else delete (LTextBoundaryFinder*)p; break;
        case 161: if(gc) delete (QTextCharFormat*)p; else delete (LTextCharFormat*)p; break;
        case 162: if(gc) /* nothing */; else delete (LTextCodec*)p; break;
        case 163: if(gc) delete (QTextCursor*)p; else delete (LTextCursor*)p; break;
        case 164: if(gc) delete (QTextDecoder*)p; else delete (LTextDecoder*)p; break;
        case 165: if(gc) delete (QTextDocumentFragment*)p; else delete (LTextDocumentFragment*)p; break;
        case 166: if(gc) delete (QTextDocumentWriter*)p; else delete (LTextDocumentWriter*)p; break;
        case 167: if(gc) delete (QTextEncoder*)p; else delete (LTextEncoder*)p; break;
        case 168: if(gc) delete (QTextFormat*)p; else delete (LTextFormat*)p; break;
        case 169: if(gc) delete (QTextFragment*)p; else delete (LTextFragment*)p; break;
        case 170: if(gc) delete (QTextFrameFormat*)p; else delete (LTextFrameFormat*)p; break;
        case 171: if(gc) delete (QTextImageFormat*)p; else delete (LTextImageFormat*)p; break;
        case 172: if(gc) delete (QTextLayout*)p; else delete (LTextLayout*)p; break;
        case 173: if(gc) delete (QTextLength*)p; else delete (LTextLength*)p; break;
        case 174: if(gc) delete (QTextLine*)p; else delete (LTextLine*)p; break;
        case 175: if(gc) delete (QTextListFormat*)p; else delete (LTextListFormat*)p; break;
        case 176: if(gc) delete (QTextOption*)p; else delete (LTextOption*)p; break;
        case 177: if(gc) delete (QTextTableCell*)p; else delete (LTextTableCell*)p; break;
        case 178: if(gc) delete (QTextTableCellFormat*)p; else delete (LTextTableCellFormat*)p; break;
        case 179: if(gc) delete (QTextTableFormat*)p; else delete (LTextTableFormat*)p; break;
        case 180: if(gc) delete (QTime*)p; else delete (LTime*)p; break;
        case 181: if(gc) delete (QTimerEvent*)p; else delete (LTimerEvent*)p; break;
        case 182: if(gc) delete (QToolTip*)p; else delete (LToolTip*)p; break;
        case 183: if(gc) delete (QTouchEvent*)p; else delete (LTouchEvent*)p; break;
        case 184: if(gc) delete (QTransform*)p; else delete (LTransform*)p; break;
        case 185: if(gc) delete (QTreeWidgetItem*)p; else delete (LTreeWidgetItem*)p; break;
        case 186: if(gc) delete (QUndoCommand*)p; else delete (LUndoCommand*)p; break;
        case 187: if(gc) delete (QUrl*)p; else delete (LUrl*)p; break;
        case 189: if(gc) delete (QVariant*)p; else delete (LVariant*)p; break;
        case 190: if(gc) delete (QVector2D*)p; else delete (LVector2D*)p; break;
        case 191: if(gc) delete (QVector3D*)p; else delete (LVector3D*)p; break;
        case 192: if(gc) delete (QVector4D*)p; else delete (LVector4D*)p; break;
        case 201: if(gc) delete (QWhatsThis*)p; else delete (LWhatsThis*)p; break;
        case 202: if(gc) delete (QWhatsThisClickedEvent*)p; else delete (LWhatsThisClickedEvent*)p; break;
        case 203: if(gc) delete (QWheelEvent*)p; else delete (LWheelEvent*)p; break;
        case 204: if(gc) delete (QWidgetItem*)p; else delete (LWidgetItem*)p; break;
        case 205: if(gc) delete (QWindowStateChangeEvent*)p; else delete (LWindowStateChangeEvent*)p; break;
        case 206: if(gc) delete (QWriteLocker*)p; else delete (LWriteLocker*)p; break;
        case 71:
        case 73:
            if(deleteNObject_help) {
                deleteNObject_help(n, p, gc); }
            break;
        case 8:
        case 75:
        case 76:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 143:
        case 144:
        case 145:
        case 146:
        case 147:
        case 188:
            if(deleteNObject_network) {
                deleteNObject_network(n, p, gc); }
            break;
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
            if(deleteNObject_opengl) {
                deleteNObject_opengl(n, p, gc); }
            break;
        case 135:
        case 136:
        case 137:
        case 138:
        case 139:
        case 140:
        case 141:
        case 142:
            if(deleteNObject_sql) {
                deleteNObject_sql(n, p, gc); }
            break;
        case 152:
            if(deleteNObject_svg) {
                deleteNObject_svg(n, p, gc); }
            break;
        case 193:
        case 194:
        case 195:
        case 196:
        case 197:
        case 198:
        case 199:
        case 200:
            if(deleteNObject_webkit) {
                deleteNObject_webkit(n, p, gc); }
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
        case 43: s = "QPaintDevice"; break;
        case 45: s = "QPaintDevice"; break;
        case 46: s = "QEvent"; break;
        case 48: s = "QGraphicsLayout"; break;
        case 49: s = "QAbstractGraphicsShapeItem"; break;
        case 50: s = "QGraphicsLayout"; break;
        case 52: s = "QGraphicsItem"; break;
        case 53: s = "QGraphicsLayoutItem"; break;
        case 55: s = "QGraphicsItem"; break;
        case 56: s = "QGraphicsLayout"; break;
        case 57: s = "QAbstractGraphicsShapeItem"; break;
        case 58: s = "QGraphicsItem"; break;
        case 59: s = "QAbstractGraphicsShapeItem"; break;
        case 60: s = "QAbstractGraphicsShapeItem"; break;
        case 61: s = "QGraphicsSceneEvent"; break;
        case 62: s = "QGraphicsSceneEvent"; break;
        case 63: s = "QEvent"; break;
        case 64: s = "QGraphicsSceneEvent"; break;
        case 65: s = "QGraphicsSceneEvent"; break;
        case 66: s = "QGraphicsSceneEvent"; break;
        case 67: s = "QGraphicsSceneEvent"; break;
        case 68: s = "QGraphicsSceneEvent"; break;
        case 69: s = "QGraphicsSceneEvent"; break;
        case 70: s = "QAbstractGraphicsShapeItem"; break;
        case 72: s = "QEvent"; break;
        case 74: s = "QEvent"; break;
        case 77: s = "QEvent"; break;
        case 79: s = "QEvent"; break;
        case 80: s = "QPaintDevice"; break;
        case 81: s = "QEvent"; break;
        case 82: s = "QEvent"; break;
        case 86: s = "QInputEvent"; break;
        case 90: s = "QGradient"; break;
        case 98: s = "QInputEvent"; break;
        case 99: s = "QEvent"; break;
        case 109: s = "QEvent"; break;
        case 116: s = "QPaintDevice"; break;
        case 117: s = "QPaintDevice"; break;
        case 119: s = "QPaintDevice"; break;
        case 123: s = "QGradient"; break;
        case 128: s = "QEvent"; break;
        case 131: s = "QEvent"; break;
        case 132: s = "QEvent"; break;
        case 134: s = "QLayoutItem"; break;
        case 138: s = "QSqlRecord"; break;
        case 149: s = "QEvent"; break;
        case 151: s = "QStyleOption"; break;
        case 152: s = "QPaintDevice"; break;
        case 156: s = "QInputEvent"; break;
        case 158: s = "QTextFormat"; break;
        case 161: s = "QTextFormat"; break;
        case 170: s = "QTextFormat"; break;
        case 171: s = "QTextCharFormat"; break;
        case 175: s = "QTextFormat"; break;
        case 178: s = "QTextCharFormat"; break;
        case 179: s = "QTextFrameFormat"; break;
        case 181: s = "QEvent"; break;
        case 183: s = "QInputEvent"; break;
        case 202: s = "QEvent"; break;
        case 203: s = "QInputEvent"; break;
        case 204: s = "QLayoutItem"; break;
        case 205: s = "QEvent"; break; }
    return s; }

StrList LObjects::overrideFunctions(const QByteArray& name) {
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
            case 83: ids = LGraphicsWidget::overrideIds; break;
            case 84: ids = LGridLayout::overrideIds; break;
            case 85: ids = LGroupBox::overrideIds; break;
            case 86: ids = LHBoxLayout::overrideIds; break;
            case 87: ids = LHeaderView::overrideIds; break;
            case 96: ids = LHistoryState::overrideIds; break;
            case 97: ids = LIODevice::overrideIds; break;
            case 98: ids = LInputContext::overrideIds; break;
            case 99: ids = LInputDialog::overrideIds; break;
            case 100: ids = LIntValidator::overrideIds; break;
            case 101: ids = LItemDelegate::overrideIds; break;
            case 102: ids = LItemSelectionModel::overrideIds; break;
            case 103: ids = LKeyEventTransition::overrideIds; break;
            case 104: ids = LLCDNumber::overrideIds; break;
            case 105: ids = LLabel::overrideIds; break;
            case 107: ids = LLibrary::overrideIds; break;
            case 108: ids = LLineEdit::overrideIds; break;
            case 109: ids = LListView::overrideIds; break;
            case 110: ids = LListWidget::overrideIds; break;
            case 113: ids = LMainWindow::overrideIds; break;
            case 114: ids = LMdiArea::overrideIds; break;
            case 115: ids = LMdiSubWindow::overrideIds; break;
            case 116: ids = LMenu::overrideIds; break;
            case 117: ids = LMenuBar::overrideIds; break;
            case 118: ids = LMessageBox::overrideIds; break;
            case 119: ids = LMimeData::overrideIds; break;
            case 120: ids = LMotifStyle::overrideIds; break;
            case 121: ids = LMouseEventTransition::overrideIds; break;
            case 122: ids = LMovie::overrideIds; break;
            case 127: ids = LObject::overrideIds; break;
            case 128: ids = LPageSetupDialog::overrideIds; break;
            case 129: ids = LPanGesture::overrideIds; break;
            case 130: ids = LParallelAnimationGroup::overrideIds; break;
            case 131: ids = LPauseAnimation::overrideIds; break;
            case 132: ids = LPinchGesture::overrideIds; break;
            case 133: ids = LPlainTextDocumentLayout::overrideIds; break;
            case 134: ids = LPlainTextEdit::overrideIds; break;
            case 135: ids = LPlastiqueStyle::overrideIds; break;
            case 136: ids = LPluginLoader::overrideIds; break;
            case 137: ids = LPrintDialog::overrideIds; break;
            case 138: ids = LPrintPreviewDialog::overrideIds; break;
            case 139: ids = LPrintPreviewWidget::overrideIds; break;
            case 140: ids = LProcess::overrideIds; break;
            case 141: ids = LProgressBar::overrideIds; break;
            case 142: ids = LProgressDialog::overrideIds; break;
            case 143: ids = LPropertyAnimation::overrideIds; break;
            case 144: ids = LPushButton::overrideIds; break;
            case 145: ids = LRadioButton::overrideIds; break;
            case 146: ids = LRegExpValidator::overrideIds; break;
            case 147: ids = LRubberBand::overrideIds; break;
            case 148: ids = LScrollArea::overrideIds; break;
            case 149: ids = LScrollBar::overrideIds; break;
            case 150: ids = LSequentialAnimationGroup::overrideIds; break;
            case 152: ids = LSettings::overrideIds; break;
            case 153: ids = LShortcut::overrideIds; break;
            case 154: ids = LSignalTransition::overrideIds; break;
            case 155: ids = LSizeGrip::overrideIds; break;
            case 156: ids = LSlider::overrideIds; break;
            case 157: ids = LSortFilterProxyModel::overrideIds; break;
            case 158: ids = LSound::overrideIds; break;
            case 159: ids = LSpinBox::overrideIds; break;
            case 160: ids = LSplashScreen::overrideIds; break;
            case 161: ids = LSplitter::overrideIds; break;
            case 162: ids = LSplitterHandle::overrideIds; break;
            case 168: ids = LStackedLayout::overrideIds; break;
            case 169: ids = LStackedWidget::overrideIds; break;
            case 170: ids = LStandardItemModel::overrideIds; break;
            case 171: ids = LState::overrideIds; break;
            case 172: ids = LStateMachine::overrideIds; break;
            case 173: ids = LStatusBar::overrideIds; break;
            case 174: ids = LStringListModel::overrideIds; break;
            case 176: ids = LStyledItemDelegate::overrideIds; break;
            case 179: ids = LSwipeGesture::overrideIds; break;
            case 180: ids = LSyntaxHighlighter::overrideIds; break;
            case 181: ids = LSystemTrayIcon::overrideIds; break;
            case 182: ids = LTabBar::overrideIds; break;
            case 183: ids = LTabWidget::overrideIds; break;
            case 184: ids = LTableView::overrideIds; break;
            case 185: ids = LTableWidget::overrideIds; break;
            case 186: ids = LTapAndHoldGesture::overrideIds; break;
            case 187: ids = LTapGesture::overrideIds; break;
            case 190: ids = LTextBlockGroup::overrideIds; break;
            case 191: ids = LTextBrowser::overrideIds; break;
            case 192: ids = LTextDocument::overrideIds; break;
            case 193: ids = LTextEdit::overrideIds; break;
            case 194: ids = LTextFrame::overrideIds; break;
            case 195: ids = LTextList::overrideIds; break;
            case 196: ids = LTextObject::overrideIds; break;
            case 197: ids = LTextTable::overrideIds; break;
            case 198: ids = LTimeEdit::overrideIds; break;
            case 199: ids = LTimeLine::overrideIds; break;
            case 200: ids = LTimer::overrideIds; break;
            case 201: ids = LToolBar::overrideIds; break;
            case 202: ids = LToolBox::overrideIds; break;
            case 203: ids = LToolButton::overrideIds; break;
            case 204: ids = LTranslator::overrideIds; break;
            case 205: ids = LTreeView::overrideIds; break;
            case 206: ids = LTreeWidget::overrideIds; break;
            case 208: ids = LUndoGroup::overrideIds; break;
            case 209: ids = LUndoStack::overrideIds; break;
            case 210: ids = LUndoView::overrideIds; break;
            case 211: ids = LVBoxLayout::overrideIds; break;
            case 212: ids = LValidator::overrideIds; break;
            case 213: ids = LVariantAnimation::overrideIds; break;
            case 220: ids = LWidget::overrideIds; break;
            case 221: ids = LWidgetAction::overrideIds; break;
            case 222: ids = LWindowsStyle::overrideIds; break;
            case 223: ids = LWizard::overrideIds; break;
            case 224: ids = LWizardPage::overrideIds; break;
            case 225: ids = LWorkspace::overrideIds; break;
            case 88:
            case 89:
            case 90:
            case 91:
            case 92:
            case 93:
            case 94:
            case 95:
                if(override_help) {
                    NumList* _ids = override_help(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 7:
            case 12:
            case 62:
            case 111:
            case 112:
            case 123:
            case 124:
            case 125:
            case 126:
            case 188:
            case 189:
            case 207:
                if(override_network) {
                    NumList* _ids = override_network(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 63:
            case 64:
            case 65:
                if(override_opengl) {
                    NumList* _ids = override_opengl(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 163:
            case 164:
            case 165:
            case 166:
            case 167:
                if(override_sql) {
                    NumList* _ids = override_sql(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 78:
            case 177:
            case 178:
                if(override_svg) {
                    NumList* _ids = override_svg(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 82:
            case 214:
            case 215:
            case 216:
            case 217:
            case 218:
            case 219:
                if(override_webkit) {
                    NumList* _ids = override_webkit(name);
                    if(_ids) {
                        ids = *_ids; }}
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
            case 15: ids = LColor::overrideIds; break;
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
            case 38: ids = LFontInfo::overrideIds; break;
            case 39: ids = LFontMetrics::overrideIds; break;
            case 46: ids = LGestureEvent::overrideIds; break;
            case 47: ids = LGradient::overrideIds; break;
            case 48: ids = LGraphicsAnchorLayout::overrideIds; break;
            case 49: ids = LGraphicsEllipseItem::overrideIds; break;
            case 50: ids = LGraphicsGridLayout::overrideIds; break;
            case 51: ids = LGraphicsItem::overrideIds; break;
            case 52: ids = LGraphicsItemGroup::overrideIds; break;
            case 53: ids = LGraphicsLayout::overrideIds; break;
            case 54: ids = LGraphicsLayoutItem::overrideIds; break;
            case 55: ids = LGraphicsLineItem::overrideIds; break;
            case 56: ids = LGraphicsLinearLayout::overrideIds; break;
            case 57: ids = LGraphicsPathItem::overrideIds; break;
            case 58: ids = LGraphicsPixmapItem::overrideIds; break;
            case 59: ids = LGraphicsPolygonItem::overrideIds; break;
            case 60: ids = LGraphicsRectItem::overrideIds; break;
            case 61: ids = LGraphicsSceneContextMenuEvent::overrideIds; break;
            case 62: ids = LGraphicsSceneDragDropEvent::overrideIds; break;
            case 63: ids = LGraphicsSceneEvent::overrideIds; break;
            case 64: ids = LGraphicsSceneHelpEvent::overrideIds; break;
            case 65: ids = LGraphicsSceneHoverEvent::overrideIds; break;
            case 66: ids = LGraphicsSceneMouseEvent::overrideIds; break;
            case 67: ids = LGraphicsSceneMoveEvent::overrideIds; break;
            case 68: ids = LGraphicsSceneResizeEvent::overrideIds; break;
            case 69: ids = LGraphicsSceneWheelEvent::overrideIds; break;
            case 70: ids = LGraphicsSimpleTextItem::overrideIds; break;
            case 72: ids = LHelpEvent::overrideIds; break;
            case 74: ids = LHideEvent::overrideIds; break;
            case 77: ids = LHoverEvent::overrideIds; break;
            case 78: ids = LIcon::overrideIds; break;
            case 79: ids = LIconDragEvent::overrideIds; break;
            case 80: ids = LImage::overrideIds; break;
            case 81: ids = LInputEvent::overrideIds; break;
            case 82: ids = LInputMethodEvent::overrideIds; break;
            case 83: ids = LItemEditorFactory::overrideIds; break;
            case 84: ids = LItemSelection::overrideIds; break;
            case 85: ids = LItemSelectionRange::overrideIds; break;
            case 86: ids = LKeyEvent::overrideIds; break;
            case 87: ids = LKeySequence::overrideIds; break;
            case 88: ids = LLayoutItem::overrideIds; break;
            case 89: ids = LLibraryInfo::overrideIds; break;
            case 90: ids = LLinearGradient::overrideIds; break;
            case 91: ids = LListWidgetItem::overrideIds; break;
            case 92: ids = LLocale::overrideIds; break;
            case 93: ids = LMargins::overrideIds; break;
            case 94: ids = LMatrix::overrideIds; break;
            case 95: ids = LMatrix4x4::overrideIds; break;
            case 96: ids = LMetaObject::overrideIds; break;
            case 97: ids = LModelIndex::overrideIds; break;
            case 98: ids = LMouseEvent::overrideIds; break;
            case 99: ids = LMoveEvent::overrideIds; break;
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
            case 148: ids = LStandardItem::overrideIds; break;
            case 149: ids = LStatusTipEvent::overrideIds; break;
            case 150: ids = LStyleOption::overrideIds; break;
            case 151: ids = LStyleOptionGraphicsItem::overrideIds; break;
            case 153: ids = LSystemSemaphore::overrideIds; break;
            case 154: ids = LTableWidgetItem::overrideIds; break;
            case 155: ids = LTableWidgetSelectionRange::overrideIds; break;
            case 156: ids = LTabletEvent::overrideIds; break;
            case 157: ids = LTextBlock::overrideIds; break;
            case 158: ids = LTextBlockFormat::overrideIds; break;
            case 159: ids = LTextBlockUserData::overrideIds; break;
            case 160: ids = LTextBoundaryFinder::overrideIds; break;
            case 161: ids = LTextCharFormat::overrideIds; break;
            case 162: ids = LTextCodec::overrideIds; break;
            case 163: ids = LTextCursor::overrideIds; break;
            case 164: ids = LTextDecoder::overrideIds; break;
            case 165: ids = LTextDocumentFragment::overrideIds; break;
            case 166: ids = LTextDocumentWriter::overrideIds; break;
            case 167: ids = LTextEncoder::overrideIds; break;
            case 168: ids = LTextFormat::overrideIds; break;
            case 169: ids = LTextFragment::overrideIds; break;
            case 170: ids = LTextFrameFormat::overrideIds; break;
            case 171: ids = LTextImageFormat::overrideIds; break;
            case 172: ids = LTextLayout::overrideIds; break;
            case 173: ids = LTextLength::overrideIds; break;
            case 174: ids = LTextLine::overrideIds; break;
            case 175: ids = LTextListFormat::overrideIds; break;
            case 176: ids = LTextOption::overrideIds; break;
            case 177: ids = LTextTableCell::overrideIds; break;
            case 178: ids = LTextTableCellFormat::overrideIds; break;
            case 179: ids = LTextTableFormat::overrideIds; break;
            case 180: ids = LTime::overrideIds; break;
            case 181: ids = LTimerEvent::overrideIds; break;
            case 182: ids = LToolTip::overrideIds; break;
            case 183: ids = LTouchEvent::overrideIds; break;
            case 184: ids = LTransform::overrideIds; break;
            case 185: ids = LTreeWidgetItem::overrideIds; break;
            case 186: ids = LUndoCommand::overrideIds; break;
            case 187: ids = LUrl::overrideIds; break;
            case 189: ids = LVariant::overrideIds; break;
            case 190: ids = LVector2D::overrideIds; break;
            case 191: ids = LVector3D::overrideIds; break;
            case 192: ids = LVector4D::overrideIds; break;
            case 201: ids = LWhatsThis::overrideIds; break;
            case 202: ids = LWhatsThisClickedEvent::overrideIds; break;
            case 203: ids = LWheelEvent::overrideIds; break;
            case 204: ids = LWidgetItem::overrideIds; break;
            case 205: ids = LWindowStateChangeEvent::overrideIds; break;
            case 206: ids = LWriteLocker::overrideIds; break;
            case 71:
            case 73:
                if(override_help) {
                    NumList* _ids = override_help(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 8:
            case 75:
            case 76:
            case 100:
            case 101:
            case 102:
            case 103:
            case 104:
            case 105:
            case 106:
            case 107:
            case 143:
            case 144:
            case 145:
            case 146:
            case 147:
            case 188:
                if(override_network) {
                    NumList* _ids = override_network(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
                if(override_opengl) {
                    NumList* _ids = override_opengl(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 135:
            case 136:
            case 137:
            case 138:
            case 139:
            case 140:
            case 141:
            case 142:
                if(override_sql) {
                    NumList* _ids = override_sql(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 152:
                if(override_svg) {
                    NumList* _ids = override_svg(name);
                    if(_ids) {
                        ids = *_ids; }}
                break;
            case 193:
            case 194:
            case 195:
            case 196:
            case 197:
            case 198:
            case 199:
            case 200:
                if(override_webkit) {
                    NumList* _ids = override_webkit(name);
                    if(_ids) {
                        ids = *_ids; }}
                break; }}
    StrList funs;
    Q_FOREACH(int id, ids) {
        const char* ret = override_arg_types[id - 1][0];
        funs << QString("%1 %2")
                .arg(ret ? ret : "void")
                .arg(QString(override_function_ids.key(id))).toAscii(); }
    return funs; }
