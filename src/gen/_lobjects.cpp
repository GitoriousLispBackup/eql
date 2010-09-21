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
NumList LAction::overrideIds = NumList();
NumList LActionGroup::overrideIds = NumList();
NumList LBuffer::overrideIds = NumList() << 6 << 7 << 8 << 9;
NumList LButtonGroup::overrideIds = NumList();
NumList LCalendarWidget::overrideIds = NumList() << 14 << 15 << 16;
NumList LCheckBox::overrideIds = NumList() << 15;
NumList LColumnView::overrideIds = NumList() << 49 << 50 << 51 << 52 << 53 << 54 << 15 << 55 << 56;
NumList LComboBox::overrideIds = NumList() << 73 << 74 << 14 << 15;
NumList LCommandLinkButton::overrideIds = NumList();
NumList LCompleter::overrideIds = NumList() << 75 << 76;
NumList LDateEdit::overrideIds = NumList();
NumList LDateTimeEdit::overrideIds = NumList() << 77 << 15 << 78 << 79 << 80;
NumList LDesktopWidget::overrideIds = NumList();
NumList LDial::overrideIds = NumList() << 14 << 15;
NumList LDialog::overrideIds = NumList() << 14 << 85 << 15;
NumList LDialogButtonBox::overrideIds = NumList();
NumList LDockWidget::overrideIds = NumList();
NumList LDoubleSpinBox::overrideIds = NumList() << 86 << 87 << 81 << 82;
NumList LDrag::overrideIds = NumList();
NumList LErrorMessage::overrideIds = NumList();
NumList LFileDialog::overrideIds = NumList() << 85;
NumList LFontComboBox::overrideIds = NumList() << 15;
NumList LFontDialog::overrideIds = NumList() << 85;
NumList LFormLayout::overrideIds = NumList() << 88 << 89 << 90 << 91 << 17 << 92 << 93 << 94 << 95 << 15 << 96;
NumList LFrame::overrideIds = NumList() << 15;
NumList LGraphicsProxyWidget::overrideIds = NumList() << 102 << 103 << 104;
NumList LGraphicsScene::overrideIds = NumList() << 18 << 118 << 119 << 120 << 121 << 122 << 123 << 124 << 28 << 30 << 125 << 32 << 33 << 34 << 126 << 127 << 128 << 129 << 130;
NumList LGraphicsTextItem::overrideIds = NumList() << 106 << 131 << 132 << 133 << 102 << 107 << 104;
NumList LGraphicsView::overrideIds = NumList() << 18 << 15 << 122 << 123;
NumList LGraphicsWidget::overrideIds = NumList() << 105 << 106 << 102 << 103 << 107 << 104 << 20 << 21 << 29 << 108 << 109 << 31 << 110 << 111 << 112 << 113 << 43 << 114 << 115 << 116 << 117;
NumList LGridLayout::overrideIds = NumList() << 89 << 90 << 91 << 17 << 92 << 93 << 101 << 134 << 94 << 95 << 15 << 96;
NumList LGroupBox::overrideIds = NumList() << 14;
NumList LHBoxLayout::overrideIds = NumList();
NumList LInputDialog::overrideIds = NumList() << 135 << 14 << 85 << 15;
NumList LItemDelegate::overrideIds = NumList() << 136 << 137 << 138 << 139 << 140 << 141 << 142 << 143 << 144 << 145;
NumList LItemSelectionModel::overrideIds = NumList();
NumList LLCDNumber::overrideIds = NumList() << 15;
NumList LLabel::overrideIds = NumList() << 17 << 14 << 15;
NumList LLineEdit::overrideIds = NumList() << 18 << 14 << 15;
NumList LListView::overrideIds = NumList() << 49 << 50 << 55;
NumList LListWidget::overrideIds = NumList() << 26 << 147 << 148 << 149 << 150;
NumList LMainWindow::overrideIds = NumList() << 151;
NumList LMenu::overrideIds = NumList() << 15;
NumList LMenuBar::overrideIds = NumList() << 17 << 14 << 15;
NumList LMessageBox::overrideIds = NumList() << 85;
NumList LMimeData::overrideIds = NumList() << 152 << 153 << 154;
NumList LMovie::overrideIds = NumList();
NumList LObject::overrideIds = NumList() << 1 << 2 << 3 << 4 << 5;
NumList LPlainTextEdit::overrideIds = NumList() << 155 << 156 << 157 << 158;
NumList LPrintPreviewDialog::overrideIds = NumList() << 135 << 85;
NumList LProgressBar::overrideIds = NumList() << 159 << 14 << 15;
NumList LPushButton::overrideIds = NumList() << 14 << 15;
NumList LRadioButton::overrideIds = NumList() << 15;
NumList LScrollArea::overrideIds = NumList() << 29 << 15;
NumList LScrollBar::overrideIds = NumList() << 15;
NumList LSlider::overrideIds = NumList() << 14 << 15;
NumList LSpinBox::overrideIds = NumList() << 160 << 87;
NumList LSplashScreen::overrideIds = NumList() << 161;
NumList LSplitter::overrideIds = NumList() << 14 << 15;
NumList LStackedLayout::overrideIds = NumList() << 88 << 89 << 93 << 94 << 95 << 15 << 96;
NumList LStackedWidget::overrideIds = NumList();
NumList LStandardItemModel::overrideIds = NumList() << 162 << 163 << 164 << 165 << 166 << 167 << 168 << 169 << 170 << 171 << 149 << 172 << 173 << 174 << 175 << 176 << 177 << 178 << 150;
NumList LStatusBar::overrideIds = NumList();
NumList LStringListModel::overrideIds = NumList() << 163 << 165 << 170 << 174 << 175 << 176 << 178 << 150;
NumList LSyntaxHighlighter::overrideIds = NumList() << 184;
NumList LTabBar::overrideIds = NumList() << 14 << 15 << 185 << 186 << 187 << 188;
NumList LTabWidget::overrideIds = NumList() << 14 << 15 << 185 << 187;
NumList LTableView::overrideIds = NumList() << 49 << 52 << 53 << 54;
NumList LTableWidget::overrideIds = NumList() << 189 << 190 << 149 << 150;
NumList LTextBlockGroup::overrideIds = NumList() << 191 << 192 << 193;
NumList LTextBrowser::overrideIds = NumList() << 155;
NumList LTextDocument::overrideIds = NumList() << 77 << 194 << 155;
NumList LTextEdit::overrideIds = NumList() << 155 << 156 << 157 << 158;
NumList LTextFrame::overrideIds = NumList();
NumList LTextList::overrideIds = NumList();
NumList LTextObject::overrideIds = NumList();
NumList LTextTable::overrideIds = NumList();
NumList LThread::overrideIds = NumList() << 195;
NumList LTimeEdit::overrideIds = NumList();
NumList LTimer::overrideIds = NumList();
NumList LToolBar::overrideIds = NumList();
NumList LToolBox::overrideIds = NumList() << 196 << 197;
NumList LToolButton::overrideIds = NumList() << 14 << 15;
NumList LTranslator::overrideIds = NumList() << 99 << 198;
NumList LTreeView::overrideIds = NumList() << 199 << 49 << 57 << 11 << 50 << 51 << 52 << 53 << 54 << 55 << 200 << 201;
NumList LTreeWidget::overrideIds = NumList() << 54 << 202 << 203 << 149 << 150;
NumList LUndoGroup::overrideIds = NumList();
NumList LUndoStack::overrideIds = NumList();
NumList LUndoView::overrideIds = NumList();
NumList LVBoxLayout::overrideIds = NumList();
NumList LWidget::overrideIds = NumList() << 17 << 18 << 14 << 15 << 19 << 20 << 21 << 22 << 23 << 24 << 25 << 26 << 27 << 28 << 29 << 30 << 31 << 32 << 33 << 34 << 35 << 36 << 37 << 38 << 39 << 40 << 41 << 42 << 43 << 44 << 45;
NumList LWizard::overrideIds = NumList() << 204 << 205 << 85 << 15 << 206 << 207;
NumList LWizardPage::overrideIds = NumList() << 208 << 209 << 210 << 204 << 211;
NumList LWorkspace::overrideIds = NumList() << 15;
NumList LBasicTimer::overrideIds = NumList();
NumList LBitArray::overrideIds = NumList();
NumList LBitmap::overrideIds = NumList();
NumList LBrush::overrideIds = NumList();
NumList LConicalGradient::overrideIds = NumList();
NumList LDir::overrideIds = NumList();
NumList LFileIconProvider::overrideIds = NumList() << 212;
NumList LFileInfo::overrideIds = NumList();
NumList LFontMetrics::overrideIds = NumList();
NumList LGradient::overrideIds = NumList();
NumList LGraphicsEllipseItem::overrideIds = NumList() << 106 << 131 << 132 << 133 << 102 << 107 << 104;
NumList LGraphicsItem::overrideIds = NumList() << 213 << 106 << 214 << 215 << 131 << 132 << 133 << 102 << 107 << 104 << 118 << 119 << 120 << 121 << 124 << 28 << 30 << 216 << 217 << 218 << 32 << 18 << 219 << 33 << 34 << 126 << 127 << 128 << 129 << 220 << 221 << 130;
NumList LGraphicsItemGroup::overrideIds = NumList() << 106 << 132 << 133 << 102 << 104;
NumList LGraphicsLineItem::overrideIds = NumList() << 106 << 131 << 132 << 133 << 102 << 107 << 104;
NumList LGraphicsPathItem::overrideIds = NumList() << 106 << 131 << 132 << 133 << 102 << 107 << 104;
NumList LGraphicsPixmapItem::overrideIds = NumList() << 106 << 131 << 132 << 133 << 102 << 107 << 104;
NumList LGraphicsPolygonItem::overrideIds = NumList() << 106 << 131 << 132 << 133 << 102 << 107 << 104;
NumList LGraphicsRectItem::overrideIds = NumList() << 106 << 131 << 132 << 133 << 102 << 107 << 104;
NumList LGraphicsSimpleTextItem::overrideIds = NumList() << 106 << 131 << 132 << 133 << 102 << 107 << 104;
NumList LIcon::overrideIds = NumList();
NumList LImage::overrideIds = NumList();
NumList LItemEditorFactory::overrideIds = NumList() << 223 << 224;
NumList LItemSelection::overrideIds = NumList();
NumList LItemSelectionRange::overrideIds = NumList();
NumList LLinearGradient::overrideIds = NumList();
NumList LListWidgetItem::overrideIds = NumList() << 225 << 226 << 227;
NumList LLocale::overrideIds = NumList();
NumList LMatrix::overrideIds = NumList();
NumList LMatrix4x4::overrideIds = NumList();
NumList LModelIndex::overrideIds = NumList();
NumList LPainter::overrideIds = NumList();
NumList LPainterPath::overrideIds = NumList();
NumList LPalette::overrideIds = NumList();
NumList LPen::overrideIds = NumList();
NumList LPicture::overrideIds = NumList() << 228;
NumList LPixmap::overrideIds = NumList();
NumList LPrinter::overrideIds = NumList();
NumList LQuaternion::overrideIds = NumList();
NumList LRadialGradient::overrideIds = NumList();
NumList LRegExp::overrideIds = NumList();
NumList LRegion::overrideIds = NumList();
NumList LSizePolicy::overrideIds = NumList();
NumList LSpacerItem::overrideIds = NumList() << 90 << 98 << 99 << 101 << 94 << 95 << 15 << 229;
NumList LStandardItem::overrideIds = NumList() << 225 << 226 << 231 << 104;
NumList LTableWidgetItem::overrideIds = NumList() << 225 << 226 << 227;
NumList LTableWidgetSelectionRange::overrideIds = NumList();
NumList LTextBlockFormat::overrideIds = NumList();
NumList LTextCharFormat::overrideIds = NumList();
NumList LTextCursor::overrideIds = NumList();
NumList LTextDocumentFragment::overrideIds = NumList();
NumList LTextFormat::overrideIds = NumList();
NumList LTextFrameFormat::overrideIds = NumList();
NumList LTextImageFormat::overrideIds = NumList();
NumList LTextLength::overrideIds = NumList();
NumList LTextListFormat::overrideIds = NumList();
NumList LTextOption::overrideIds = NumList();
NumList LTextTableCell::overrideIds = NumList();
NumList LTextTableCellFormat::overrideIds = NumList();
NumList LTextTableFormat::overrideIds = NumList();
NumList LTransform::overrideIds = NumList();
NumList LTreeWidgetItem::overrideIds = NumList() << 225 << 232 << 233;
NumList LUndoCommand::overrideIds = NumList() << 234 << 235 << 236 << 237;
NumList LVariant::overrideIds = NumList();
NumList LVector2D::overrideIds = NumList();
NumList LVector3D::overrideIds = NumList();
NumList LVector4D::overrideIds = NumList();

void LObjects::ini(EQL* e) {
    static bool ok = false;
    if(!ok) {
        ok = true;
        eql = e;
        dynObject = new DynObject;
        Q = new QObject* [116];
        N = new QObject* [110];
        Q[0] = new Q1; Q[1] = new Q2; Q[2] = new Q3; Q[3] = new Q4; Q[4] = new Q5; Q[5] = new Q6; Q[6] = new Q7; Q[7] = new Q8; Q[8] = new Q9; Q[9] = new Q10; Q[10] = new Q11; Q[11] = new Q12; Q[12] = new Q13; Q[13] = new Q14; Q[14] = new Q15; Q[15] = new Q16; Q[16] = new Q17; Q[17] = new Q18; Q[18] = new Q19; Q[19] = new Q20; Q[20] = new Q21; Q[21] = new Q22; Q[22] = new Q23; Q[23] = new Q24; Q[24] = new Q25; Q[25] = new Q26; Q[26] = new Q27; Q[27] = new Q28; Q[28] = new Q29; Q[29] = new Q30; Q[30] = new Q31; Q[31] = new Q32; Q[32] = new Q33; Q[33] = new Q34; Q[34] = new Q35; Q[35] = new Q36; Q[36] = new Q37; Q[37] = new Q38; Q[38] = new Q39; Q[39] = new Q40; Q[40] = new Q41; Q[41] = new Q42; Q[42] = new Q43; Q[43] = new Q44; Q[44] = new Q45; Q[45] = new Q46; Q[46] = new Q47; Q[47] = new Q48; Q[48] = new Q49; Q[49] = new Q50; Q[50] = new Q51; Q[51] = new Q52; Q[52] = new Q53; Q[53] = new Q54; Q[54] = new Q55; Q[55] = new Q56; Q[56] = new Q57; Q[57] = new Q58; Q[58] = new Q59; Q[59] = new Q60; Q[60] = new Q61; Q[61] = new Q62; Q[62] = new Q63; Q[63] = new Q64; Q[64] = new Q65; Q[65] = new Q66; Q[66] = new Q67; Q[67] = new Q68; Q[68] = new Q69; Q[69] = new Q70; Q[70] = new Q71; Q[71] = new Q72; Q[72] = new Q73; Q[73] = new Q74; Q[74] = new Q75; Q[75] = new Q76; Q[76] = new Q77; Q[77] = new Q78; Q[78] = new Q79; Q[79] = new Q80; Q[80] = new Q81; Q[81] = new Q82; Q[82] = new Q83; Q[83] = new Q84; Q[84] = new Q85; Q[85] = new Q86; Q[86] = new Q87; Q[87] = new Q88; Q[88] = new Q89; Q[89] = new Q90; Q[90] = new Q91; Q[91] = new Q92; Q[92] = new Q93; Q[93] = new Q94; Q[94] = new Q95; Q[95] = new Q96; Q[96] = new Q97; Q[97] = new Q98; Q[98] = new Q99; Q[99] = new Q100; Q[100] = new Q101; Q[101] = new Q102; Q[102] = new Q103; Q[103] = new Q104; Q[104] = new Q105; Q[105] = new Q106; Q[106] = new Q107; Q[107] = new Q108; Q[108] = new Q109; Q[109] = new Q110; Q[110] = new Q111; Q[111] = new Q112; Q[112] = new Q113; Q[113] = new Q114; Q[114] = new Q115; Q[115] = new Q116; 
        N[0] = new N1; N[1] = new N2; N[2] = new N3; N[3] = new N4; N[4] = new N5; N[5] = new N6; N[6] = new N7; N[7] = new N8; N[8] = new N9; N[9] = new N10; N[10] = new N11; N[11] = new N12; N[12] = new N13; N[13] = new N14; N[14] = new N15; N[15] = new N16; N[16] = new N17; N[17] = new N18; N[18] = new N19; N[19] = new N20; N[20] = new N21; N[21] = new N22; N[22] = new N23; N[23] = new N24; N[24] = new N25; N[25] = new N26; N[26] = new N27; N[27] = new N28; N[28] = new N29; N[29] = new N30; N[30] = new N31; N[31] = new N32; N[32] = new N33; N[33] = new N34; N[34] = new N35; N[35] = new N36; N[36] = new N37; N[37] = new N38; N[38] = new N39; N[39] = new N40; N[40] = new N41; N[41] = new N42; N[42] = new N43; N[43] = new N44; N[44] = new N45; N[45] = new N46; N[46] = new N47; N[47] = new N48; N[48] = new N49; N[49] = new N50; N[50] = new N51; N[51] = new N52; N[52] = new N53; N[53] = new N54; N[54] = new N55; N[55] = new N56; N[56] = new N57; N[57] = new N58; N[58] = new N59; N[59] = new N60; N[60] = new N61; N[61] = new N62; N[62] = new N63; N[63] = new N64; N[64] = new N65; N[65] = new N66; N[66] = new N67; N[67] = new N68; N[68] = new N69; N[69] = new N70; N[70] = new N71; N[71] = new N72; N[72] = new N73; N[73] = new N74; N[74] = new N75; N[75] = new N76; N[76] = new N77; N[77] = new N78; N[78] = new N79; N[79] = new N80; N[80] = new N81; N[81] = new N82; N[82] = new N83; N[83] = new N84; N[84] = new N85; N[85] = new N86; N[86] = new N87; N[87] = new N88; N[88] = new N89; N[89] = new N90; N[90] = new N91; N[91] = new N92; N[92] = new N93; N[93] = new N94; N[94] = new N95; N[95] = new N96; N[96] = new N97; N[97] = new N98; N[98] = new N99; N[99] = new N100; N[100] = new N101; N[101] = new N102; N[102] = new N103; N[103] = new N104; N[104] = new N105; N[105] = new N106; N[106] = new N107; N[107] = new N108; N[108] = new N109; N[109] = new N110; 
        q_names["QAbstractButton"] = 1;
        q_names["QAbstractItemDelegate"] = 2;
        q_names["QAbstractItemModel"] = 3;
        q_names["QAbstractItemView"] = 4;
        q_names["QAbstractListModel"] = 5;
        q_names["QAbstractProxyModel"] = 6;
        q_names["QAbstractScrollArea"] = 7;
        q_names["QAbstractSlider"] = 8;
        q_names["QAbstractSpinBox"] = 9;
        q_names["QAbstractTextDocumentLayout"] = 10;
        q_names["QAction"] = 11;
        q_names["QActionGroup"] = 12;
        q_names["QApplication"] = 13;
        q_names["QBoxLayout"] = 14;
        q_names["QBuffer"] = 15;
        q_names["QButtonGroup"] = 16;
        q_names["QCalendarWidget"] = 17;
        q_names["QCheckBox"] = 18;
        q_names["QClipboard"] = 19;
        q_names["QColumnView"] = 20;
        q_names["QComboBox"] = 21;
        q_names["QCommandLinkButton"] = 22;
        q_names["QCompleter"] = 23;
        q_names["QCoreApplication"] = 24;
        q_names["QDateEdit"] = 25;
        q_names["QDateTimeEdit"] = 26;
        q_names["QDesktopWidget"] = 27;
        q_names["QDial"] = 28;
        q_names["QDialog"] = 29;
        q_names["QDialogButtonBox"] = 30;
        q_names["QDockWidget"] = 31;
        q_names["QDoubleSpinBox"] = 32;
        q_names["QDrag"] = 33;
        q_names["QErrorMessage"] = 34;
        q_names["QFileDialog"] = 35;
        q_names["QFontComboBox"] = 36;
        q_names["QFontDialog"] = 37;
        q_names["QFormLayout"] = 38;
        q_names["QFrame"] = 39;
        q_names["QGraphicsEffect"] = 40;
        q_names["QGraphicsObject"] = 41;
        q_names["QGraphicsProxyWidget"] = 42;
        q_names["QGraphicsScene"] = 43;
        q_names["QGraphicsTextItem"] = 44;
        q_names["QGraphicsView"] = 45;
        q_names["QGraphicsWidget"] = 46;
        q_names["QGridLayout"] = 47;
        q_names["QGroupBox"] = 48;
        q_names["QHBoxLayout"] = 49;
        q_names["QHeaderView"] = 50;
        q_names["QIODevice"] = 51;
        q_names["QInputContext"] = 52;
        q_names["QInputDialog"] = 53;
        q_names["QItemDelegate"] = 54;
        q_names["QItemSelectionModel"] = 55;
        q_names["QLCDNumber"] = 56;
        q_names["QLabel"] = 57;
        q_names["QLayout"] = 58;
        q_names["QLineEdit"] = 59;
        q_names["QListView"] = 60;
        q_names["QListWidget"] = 61;
        q_names["QMainWindow"] = 62;
        q_names["QMenu"] = 63;
        q_names["QMenuBar"] = 64;
        q_names["QMessageBox"] = 65;
        q_names["QMimeData"] = 66;
        q_names["QMovie"] = 67;
        q_names["QObject"] = 68;
        q_names["QPlainTextEdit"] = 69;
        q_names["QPrintPreviewDialog"] = 70;
        q_names["QProgressBar"] = 71;
        q_names["QPushButton"] = 72;
        q_names["QRadioButton"] = 73;
        q_names["QScrollArea"] = 74;
        q_names["QScrollBar"] = 75;
        q_names["QSessionManager"] = 76;
        q_names["QSlider"] = 77;
        q_names["QSpinBox"] = 78;
        q_names["QSplashScreen"] = 79;
        q_names["QSplitter"] = 80;
        q_names["QStackedLayout"] = 81;
        q_names["QStackedWidget"] = 82;
        q_names["QStandardItemModel"] = 83;
        q_names["QStatusBar"] = 84;
        q_names["QStringListModel"] = 85;
        q_names["QSyntaxHighlighter"] = 86;
        q_names["QTabBar"] = 87;
        q_names["QTabWidget"] = 88;
        q_names["QTableView"] = 89;
        q_names["QTableWidget"] = 90;
        q_names["QTextBlockGroup"] = 91;
        q_names["QTextBrowser"] = 92;
        q_names["QTextDocument"] = 93;
        q_names["QTextEdit"] = 94;
        q_names["QTextFrame"] = 95;
        q_names["QTextList"] = 96;
        q_names["QTextObject"] = 97;
        q_names["QTextTable"] = 98;
        q_names["QThread"] = 99;
        q_names["QTimeEdit"] = 100;
        q_names["QTimer"] = 101;
        q_names["QToolBar"] = 102;
        q_names["QToolBox"] = 103;
        q_names["QToolButton"] = 104;
        q_names["QTranslator"] = 105;
        q_names["QTreeView"] = 106;
        q_names["QTreeWidget"] = 107;
        q_names["QUndoGroup"] = 108;
        q_names["QUndoStack"] = 109;
        q_names["QUndoView"] = 110;
        q_names["QVBoxLayout"] = 111;
        q_names["QValidator"] = 112;
        q_names["QWidget"] = 113;
        q_names["QWizard"] = 114;
        q_names["QWizardPage"] = 115;
        q_names["QWorkspace"] = 116;
        n_names["QAbstractGraphicsShapeItem"] = 1;
        n_names["QActionEvent"] = 2;
        n_names["QBasicTimer"] = 3;
        n_names["QBitArray"] = 4;
        n_names["QBitmap"] = 5;
        n_names["QBrush"] = 6;
        n_names["QChildEvent"] = 7;
        n_names["QCloseEvent"] = 8;
        n_names["QColor"] = 9;
        n_names["QConicalGradient"] = 10;
        n_names["QContextMenuEvent"] = 11;
        n_names["QCursor"] = 12;
        n_names["QDate"] = 13;
        n_names["QDateTime"] = 14;
        n_names["QDir"] = 15;
        n_names["QDragEnterEvent"] = 16;
        n_names["QDragLeaveEvent"] = 17;
        n_names["QDragMoveEvent"] = 18;
        n_names["QDropEvent"] = 19;
        n_names["QEvent"] = 20;
        n_names["QFileIconProvider"] = 21;
        n_names["QFileInfo"] = 22;
        n_names["QFocusEvent"] = 23;
        n_names["QFontMetrics"] = 24;
        n_names["QGradient"] = 25;
        n_names["QGraphicsEllipseItem"] = 26;
        n_names["QGraphicsItem"] = 27;
        n_names["QGraphicsItemGroup"] = 28;
        n_names["QGraphicsLayout"] = 29;
        n_names["QGraphicsLayoutItem"] = 30;
        n_names["QGraphicsLineItem"] = 31;
        n_names["QGraphicsPathItem"] = 32;
        n_names["QGraphicsPixmapItem"] = 33;
        n_names["QGraphicsPolygonItem"] = 34;
        n_names["QGraphicsRectItem"] = 35;
        n_names["QGraphicsSceneContextMenuEvent"] = 36;
        n_names["QGraphicsSceneDragDropEvent"] = 37;
        n_names["QGraphicsSceneEvent"] = 38;
        n_names["QGraphicsSceneHelpEvent"] = 39;
        n_names["QGraphicsSceneHoverEvent"] = 40;
        n_names["QGraphicsSceneMouseEvent"] = 41;
        n_names["QGraphicsSceneMoveEvent"] = 42;
        n_names["QGraphicsSceneResizeEvent"] = 43;
        n_names["QGraphicsSceneWheelEvent"] = 44;
        n_names["QGraphicsSimpleTextItem"] = 45;
        n_names["QHideEvent"] = 46;
        n_names["QIcon"] = 47;
        n_names["QImage"] = 48;
        n_names["QInputEvent"] = 49;
        n_names["QInputMethodEvent"] = 50;
        n_names["QItemEditorFactory"] = 51;
        n_names["QItemSelection"] = 52;
        n_names["QItemSelectionRange"] = 53;
        n_names["QKeyEvent"] = 54;
        n_names["QLayoutItem"] = 55;
        n_names["QLinearGradient"] = 56;
        n_names["QListWidgetItem"] = 57;
        n_names["QLocale"] = 58;
        n_names["QMatrix"] = 59;
        n_names["QMatrix4x4"] = 60;
        n_names["QMetaObject"] = 61;
        n_names["QModelIndex"] = 62;
        n_names["QMouseEvent"] = 63;
        n_names["QMoveEvent"] = 64;
        n_names["QPaintDevice"] = 65;
        n_names["QPaintEvent"] = 66;
        n_names["QPainter"] = 67;
        n_names["QPainterPath"] = 68;
        n_names["QPalette"] = 69;
        n_names["QPen"] = 70;
        n_names["QPicture"] = 71;
        n_names["QPixmap"] = 72;
        n_names["QPrinter"] = 73;
        n_names["QQuaternion"] = 74;
        n_names["QRadialGradient"] = 75;
        n_names["QRegExp"] = 76;
        n_names["QRegion"] = 77;
        n_names["QResizeEvent"] = 78;
        n_names["QShowEvent"] = 79;
        n_names["QSizePolicy"] = 80;
        n_names["QSpacerItem"] = 81;
        n_names["QStandardItem"] = 82;
        n_names["QTableWidgetItem"] = 83;
        n_names["QTableWidgetSelectionRange"] = 84;
        n_names["QTabletEvent"] = 85;
        n_names["QTextBlock"] = 86;
        n_names["QTextBlockFormat"] = 87;
        n_names["QTextCharFormat"] = 88;
        n_names["QTextCursor"] = 89;
        n_names["QTextDocumentFragment"] = 90;
        n_names["QTextFormat"] = 91;
        n_names["QTextFrameFormat"] = 92;
        n_names["QTextImageFormat"] = 93;
        n_names["QTextLength"] = 94;
        n_names["QTextListFormat"] = 95;
        n_names["QTextOption"] = 96;
        n_names["QTextTableCell"] = 97;
        n_names["QTextTableCellFormat"] = 98;
        n_names["QTextTableFormat"] = 99;
        n_names["QTime"] = 100;
        n_names["QTimerEvent"] = 101;
        n_names["QTransform"] = 102;
        n_names["QTreeWidgetItem"] = 103;
        n_names["QUndoCommand"] = 104;
        n_names["QUrl"] = 105;
        n_names["QVariant"] = 106;
        n_names["QVector2D"] = 107;
        n_names["QVector3D"] = 108;
        n_names["QVector4D"] = 109;
        n_names["QWheelEvent"] = 110;
        override_function_ids["childEvent(QChildEvent*)"] = 1;
        override_function_ids["connectNotify(const char*)"] = 2;
        override_function_ids["customEvent(QEvent*)"] = 3;
        override_function_ids["disconnectNotify(const char*)"] = 4;
        override_function_ids["timerEvent(QTimerEvent*)"] = 5;
        override_function_ids["atEnd()"] = 6;
        override_function_ids["canReadLine()"] = 7;
        override_function_ids["close()"] = 8;
        override_function_ids["open(OpenMode)"] = 9;
        override_function_ids["isSequential()"] = 10;
        override_function_ids["reset()"] = 11;
        override_function_ids["waitForBytesWritten(int)"] = 12;
        override_function_ids["waitForReadyRead(int)"] = 13;
        override_function_ids["minimumSizeHint()"] = 14;
        override_function_ids["sizeHint()"] = 15;
        override_function_ids["paintCell(QPainter*,QRect,QDate)"] = 16;
        override_function_ids["heightForWidth(int)"] = 17;
        override_function_ids["inputMethodQuery(Qt::InputMethodQuery)"] = 18;
        override_function_ids["actionEvent(QActionEvent*)"] = 19;
        override_function_ids["changeEvent(QEvent*)"] = 20;
        override_function_ids["closeEvent(QCloseEvent*)"] = 21;
        override_function_ids["contextMenuEvent(QContextMenuEvent*)"] = 22;
        override_function_ids["dragEnterEvent(QDragEnterEvent*)"] = 23;
        override_function_ids["dragLeaveEvent(QDragLeaveEvent*)"] = 24;
        override_function_ids["dragMoveEvent(QDragMoveEvent*)"] = 25;
        override_function_ids["dropEvent(QDropEvent*)"] = 26;
        override_function_ids["enterEvent(QEvent*)"] = 27;
        override_function_ids["focusInEvent(QFocusEvent*)"] = 28;
        override_function_ids["focusNextPrevChild(bool)"] = 29;
        override_function_ids["focusOutEvent(QFocusEvent*)"] = 30;
        override_function_ids["hideEvent(QHideEvent*)"] = 31;
        override_function_ids["inputMethodEvent(QInputMethodEvent*)"] = 32;
        override_function_ids["keyPressEvent(QKeyEvent*)"] = 33;
        override_function_ids["keyReleaseEvent(QKeyEvent*)"] = 34;
        override_function_ids["leaveEvent(QEvent*)"] = 35;
        override_function_ids["mouseDoubleClickEvent(QMouseEvent*)"] = 36;
        override_function_ids["mouseMoveEvent(QMouseEvent*)"] = 37;
        override_function_ids["mousePressEvent(QMouseEvent*)"] = 38;
        override_function_ids["mouseReleaseEvent(QMouseEvent*)"] = 39;
        override_function_ids["moveEvent(QMoveEvent*)"] = 40;
        override_function_ids["paintEvent(QPaintEvent*)"] = 41;
        override_function_ids["resizeEvent(QResizeEvent*)"] = 42;
        override_function_ids["showEvent(QShowEvent*)"] = 43;
        override_function_ids["tabletEvent(QTabletEvent*)"] = 44;
        override_function_ids["wheelEvent(QWheelEvent*)"] = 45;
        override_function_ids["checkStateSet()"] = 46;
        override_function_ids["hitButton(QPoint)"] = 47;
        override_function_ids["nextCheckState()"] = 48;
        override_function_ids["indexAt(QPoint)"] = 49;
        override_function_ids["scrollTo(QModelIndex,ScrollHint)"] = 50;
        override_function_ids["selectAll()"] = 51;
        override_function_ids["setModel(QAbstractItemModel*)"] = 52;
        override_function_ids["setRootIndex(QModelIndex)"] = 53;
        override_function_ids["setSelectionModel(QItemSelectionModel*)"] = 54;
        override_function_ids["visualRect(QModelIndex)"] = 55;
        override_function_ids["createColumn(QModelIndex)"] = 56;
        override_function_ids["keyboardSearch(QString)"] = 57;
        override_function_ids["sizeHintForColumn(int)"] = 58;
        override_function_ids["sizeHintForRow(int)"] = 59;
        override_function_ids["edit(QModelIndex,EditTrigger,QEvent*)"] = 60;
        override_function_ids["horizontalOffset()"] = 61;
        override_function_ids["isIndexHidden(QModelIndex)"] = 62;
        override_function_ids["moveCursor(CursorAction,Qt::KeyboardModifiers)"] = 63;
        override_function_ids["selectedIndexes()"] = 64;
        override_function_ids["selectionCommand(QModelIndex,QEvent*)"] = 65;
        override_function_ids["setSelection(QRect,QItemSelectionModel::SelectionFlags)"] = 66;
        override_function_ids["startDrag(Qt::DropActions)"] = 67;
        override_function_ids["verticalOffset()"] = 68;
        override_function_ids["viewOptions()"] = 69;
        override_function_ids["visualRegionForSelection(QItemSelection)"] = 70;
        override_function_ids["scrollContentsBy(int,int)"] = 71;
        override_function_ids["viewportEvent(QEvent*)"] = 72;
        override_function_ids["hidePopup()"] = 73;
        override_function_ids["showPopup()"] = 74;
        override_function_ids["pathFromIndex(QModelIndex)"] = 75;
        override_function_ids["splitPath(QString)"] = 76;
        override_function_ids["clear()"] = 77;
        override_function_ids["stepBy(int)"] = 78;
        override_function_ids["dateTimeFromText(QString)"] = 79;
        override_function_ids["textFromDateTime(QDateTime)"] = 80;
        override_function_ids["fixup(QString)"] = 81;
        override_function_ids["validate(QString,int)"] = 82;
        override_function_ids["stepEnabled()"] = 83;
        override_function_ids["sliderChange(SliderChange)"] = 84;
        override_function_ids["setVisible(bool)"] = 85;
        override_function_ids["textFromValue(double)"] = 86;
        override_function_ids["valueFromText(QString)"] = 87;
        override_function_ids["addItem(QLayoutItem*)"] = 88;
        override_function_ids["count()"] = 89;
        override_function_ids["expandingDirections()"] = 90;
        override_function_ids["hasHeightForWidth()"] = 91;
        override_function_ids["invalidate()"] = 92;
        override_function_ids["itemAt(int)"] = 93;
        override_function_ids["minimumSize()"] = 94;
        override_function_ids["setGeometry(QRect)"] = 95;
        override_function_ids["takeAt(int)"] = 96;
        override_function_ids["indexOf(QWidget*)"] = 97;
        override_function_ids["geometry()"] = 98;
        override_function_ids["isEmpty()"] = 99;
        override_function_ids["layout()"] = 100;
        override_function_ids["maximumSize()"] = 101;
        override_function_ids["paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 102;
        override_function_ids["setGeometry(QRectF)"] = 103;
        override_function_ids["type()"] = 104;
        override_function_ids["paintWindowFrame(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 105;
        override_function_ids["boundingRect()"] = 106;
        override_function_ids["shape()"] = 107;
        override_function_ids["grabKeyboardEvent(QEvent*)"] = 108;
        override_function_ids["grabMouseEvent(QEvent*)"] = 109;
        override_function_ids["initStyleOption(QStyleOption*)"] = 110;
        override_function_ids["moveEvent(QGraphicsSceneMoveEvent*)"] = 111;
        override_function_ids["polishEvent()"] = 112;
        override_function_ids["resizeEvent(QGraphicsSceneResizeEvent*)"] = 113;
        override_function_ids["ungrabKeyboardEvent(QEvent*)"] = 114;
        override_function_ids["ungrabMouseEvent(QEvent*)"] = 115;
        override_function_ids["windowFrameEvent(QEvent*)"] = 116;
        override_function_ids["windowFrameSectionAt(QPointF)"] = 117;
        override_function_ids["contextMenuEvent(QGraphicsSceneContextMenuEvent*)"] = 118;
        override_function_ids["dragEnterEvent(QGraphicsSceneDragDropEvent*)"] = 119;
        override_function_ids["dragLeaveEvent(QGraphicsSceneDragDropEvent*)"] = 120;
        override_function_ids["dragMoveEvent(QGraphicsSceneDragDropEvent*)"] = 121;
        override_function_ids["drawBackground(QPainter*,QRectF)"] = 122;
        override_function_ids["drawForeground(QPainter*,QRectF)"] = 123;
        override_function_ids["dropEvent(QGraphicsSceneDragDropEvent*)"] = 124;
        override_function_ids["helpEvent(QGraphicsSceneHelpEvent*)"] = 125;
        override_function_ids["mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)"] = 126;
        override_function_ids["mouseMoveEvent(QGraphicsSceneMouseEvent*)"] = 127;
        override_function_ids["mousePressEvent(QGraphicsSceneMouseEvent*)"] = 128;
        override_function_ids["mouseReleaseEvent(QGraphicsSceneMouseEvent*)"] = 129;
        override_function_ids["wheelEvent(QGraphicsSceneWheelEvent*)"] = 130;
        override_function_ids["contains(QPointF)"] = 131;
        override_function_ids["isObscuredBy(QGraphicsItem*)"] = 132;
        override_function_ids["opaqueArea()"] = 133;
        override_function_ids["minimumHeightForWidth(int)"] = 134;
        override_function_ids["done(int)"] = 135;
        override_function_ids["createEditor(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 136;
        override_function_ids["paint(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 137;
        override_function_ids["setEditorData(QWidget*,QModelIndex)"] = 138;
        override_function_ids["setModelData(QWidget*,QAbstractItemModel*,QModelIndex)"] = 139;
        override_function_ids["sizeHint(QStyleOptionViewItem,QModelIndex)"] = 140;
        override_function_ids["updateEditorGeometry(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 141;
        override_function_ids["drawCheck(QPainter*,QStyleOptionViewItem,QRect,Qt::CheckState)"] = 142;
        override_function_ids["drawDecoration(QPainter*,QStyleOptionViewItem,QRect,QPixmap)"] = 143;
        override_function_ids["drawDisplay(QPainter*,QStyleOptionViewItem,QRect,QString)"] = 144;
        override_function_ids["drawFocus(QPainter*,QStyleOptionViewItem,QRect)"] = 145;
        override_function_ids["editorEvent(QEvent*,QAbstractItemModel*,QStyleOptionViewItem,QModelIndex)"] = 146;
        override_function_ids["dropMimeData(int,QMimeData*,Qt::DropAction)"] = 147;
        override_function_ids["mimeData(QList<QListWidgetItem*>)"] = 148;
        override_function_ids["mimeTypes()"] = 149;
        override_function_ids["supportedDropActions()"] = 150;
        override_function_ids["createPopupMenu()"] = 151;
        override_function_ids["formats()"] = 152;
        override_function_ids["hasFormat(QString)"] = 153;
        override_function_ids["retrieveData(QString,QVariant::Type)"] = 154;
        override_function_ids["loadResource(int,QUrl)"] = 155;
        override_function_ids["canInsertFromMimeData(QMimeData*)"] = 156;
        override_function_ids["createMimeDataFromSelection()"] = 157;
        override_function_ids["insertFromMimeData(QMimeData*)"] = 158;
        override_function_ids["text()"] = 159;
        override_function_ids["textFromValue(int)"] = 160;
        override_function_ids["drawContents(QPainter*)"] = 161;
        override_function_ids["columnCount(QModelIndex)"] = 162;
        override_function_ids["data(QModelIndex,int)"] = 163;
        override_function_ids["dropMimeData(QMimeData*,Qt::DropAction,int,int,QModelIndex)"] = 164;
        override_function_ids["flags(QModelIndex)"] = 165;
        override_function_ids["hasChildren(QModelIndex)"] = 166;
        override_function_ids["headerData(int,Qt::Orientation,int)"] = 167;
        override_function_ids["index(int,int,QModelIndex)"] = 168;
        override_function_ids["insertColumns(int,int,QModelIndex)"] = 169;
        override_function_ids["insertRows(int,int,QModelIndex)"] = 170;
        override_function_ids["mimeData(QModelIndexList)"] = 171;
        override_function_ids["parent(QModelIndex)"] = 172;
        override_function_ids["removeColumns(int,int,QModelIndex)"] = 173;
        override_function_ids["removeRows(int,int,QModelIndex)"] = 174;
        override_function_ids["rowCount(QModelIndex)"] = 175;
        override_function_ids["setData(QModelIndex,QVariant,int)"] = 176;
        override_function_ids["setHeaderData(int,Qt::Orientation,QVariant,int)"] = 177;
        override_function_ids["sort(int,Qt::SortOrder)"] = 178;
        override_function_ids["buddy(QModelIndex)"] = 179;
        override_function_ids["canFetchMore(QModelIndex)"] = 180;
        override_function_ids["fetchMore(QModelIndex)"] = 181;
        override_function_ids["match(QModelIndex,int,QVariant,int,Qt::MatchFlags)"] = 182;
        override_function_ids["span(QModelIndex)"] = 183;
        override_function_ids["highlightBlock(QString)"] = 184;
        override_function_ids["tabInserted(int)"] = 185;
        override_function_ids["tabLayoutChange()"] = 186;
        override_function_ids["tabRemoved(int)"] = 187;
        override_function_ids["tabSizeHint(int)"] = 188;
        override_function_ids["dropMimeData(int,int,QMimeData*,Qt::DropAction)"] = 189;
        override_function_ids["mimeData(QList<QTableWidgetItem*>)"] = 190;
        override_function_ids["blockFormatChanged(QTextBlock)"] = 191;
        override_function_ids["blockInserted(QTextBlock)"] = 192;
        override_function_ids["blockRemoved(QTextBlock)"] = 193;
        override_function_ids["createObject(QTextFormat)"] = 194;
        override_function_ids["run()"] = 195;
        override_function_ids["itemInserted(int)"] = 196;
        override_function_ids["itemRemoved(int)"] = 197;
        override_function_ids["translate(const char*,const char*,const char*)"] = 198;
        override_function_ids["dataChanged(QModelIndex,QModelIndex)"] = 199;
        override_function_ids["drawBranches(QPainter*,QRect,QModelIndex)"] = 200;
        override_function_ids["drawRow(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 201;
        override_function_ids["dropMimeData(QTreeWidgetItem*,int,QMimeData*,Qt::DropAction)"] = 202;
        override_function_ids["mimeData(QList<QTreeWidgetItem*>)"] = 203;
        override_function_ids["nextId()"] = 204;
        override_function_ids["validateCurrentPage()"] = 205;
        override_function_ids["cleanupPage(int)"] = 206;
        override_function_ids["initializePage(int)"] = 207;
        override_function_ids["cleanupPage()"] = 208;
        override_function_ids["initializePage()"] = 209;
        override_function_ids["isComplete()"] = 210;
        override_function_ids["validatePage()"] = 211;
        override_function_ids["icon(IconType)"] = 212;
        override_function_ids["advance(int)"] = 213;
        override_function_ids["collidesWithItem(QGraphicsItem*,Qt::ItemSelectionMode)"] = 214;
        override_function_ids["collidesWithPath(QPainterPath,Qt::ItemSelectionMode)"] = 215;
        override_function_ids["hoverEnterEvent(QGraphicsSceneHoverEvent*)"] = 216;
        override_function_ids["hoverLeaveEvent(QGraphicsSceneHoverEvent*)"] = 217;
        override_function_ids["hoverMoveEvent(QGraphicsSceneHoverEvent*)"] = 218;
        override_function_ids["itemChange(GraphicsItemChange,QVariant)"] = 219;
        override_function_ids["sceneEvent(QEvent*)"] = 220;
        override_function_ids["sceneEventFilter(QGraphicsItem*,QEvent*)"] = 221;
        override_function_ids["metric(PaintDeviceMetric)"] = 222;
        override_function_ids["createEditor(QVariant::Type,QWidget*)"] = 223;
        override_function_ids["valuePropertyName(QVariant::Type)"] = 224;
        override_function_ids["clone()"] = 225;
        override_function_ids["data(int)"] = 226;
        override_function_ids["setData(int,QVariant)"] = 227;
        override_function_ids["setData(const char*,uint)"] = 228;
        override_function_ids["spacerItem()"] = 229;
        override_function_ids["widget()"] = 230;
        override_function_ids["setData(QVariant,int)"] = 231;
        override_function_ids["data(int,int)"] = 232;
        override_function_ids["setData(int,int,QVariant)"] = 233;
        override_function_ids["id()"] = 234;
        override_function_ids["mergeWith(QUndoCommand*)"] = 235;
        override_function_ids["redo()"] = 236;
        override_function_ids["undo()"] = 237;
        override_arg_types = new const char** [237];
        { static const char* s[] = { 0, "QChildEvent*", 0 }; override_arg_types[0] = s; }
        { static const char* s[] = { 0, "const char*", 0 }; override_arg_types[1] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[2] = s; }
        { static const char* s[] = { 0, "const char*", 0 }; override_arg_types[3] = s; }
        { static const char* s[] = { 0, "QTimerEvent*", 0 }; override_arg_types[4] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[5] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[6] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[7] = s; }
        { static const char* s[] = { "bool", "OpenMode", 0 }; override_arg_types[8] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[9] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[10] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[11] = s; }
        { static const char* s[] = { "bool", "int", 0 }; override_arg_types[12] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[13] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[14] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "QDate", 0 }; override_arg_types[15] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[16] = s; }
        { static const char* s[] = { "QVariant", "Qt::InputMethodQuery", 0 }; override_arg_types[17] = s; }
        { static const char* s[] = { 0, "QActionEvent*", 0 }; override_arg_types[18] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[19] = s; }
        { static const char* s[] = { 0, "QCloseEvent*", 0 }; override_arg_types[20] = s; }
        { static const char* s[] = { 0, "QContextMenuEvent*", 0 }; override_arg_types[21] = s; }
        { static const char* s[] = { 0, "QDragEnterEvent*", 0 }; override_arg_types[22] = s; }
        { static const char* s[] = { 0, "QDragLeaveEvent*", 0 }; override_arg_types[23] = s; }
        { static const char* s[] = { 0, "QDragMoveEvent*", 0 }; override_arg_types[24] = s; }
        { static const char* s[] = { 0, "QDropEvent*", 0 }; override_arg_types[25] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[26] = s; }
        { static const char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[27] = s; }
        { static const char* s[] = { "bool", "bool", 0 }; override_arg_types[28] = s; }
        { static const char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[29] = s; }
        { static const char* s[] = { 0, "QHideEvent*", 0 }; override_arg_types[30] = s; }
        { static const char* s[] = { 0, "QInputMethodEvent*", 0 }; override_arg_types[31] = s; }
        { static const char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[32] = s; }
        { static const char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[33] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[34] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[35] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[36] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[37] = s; }
        { static const char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[38] = s; }
        { static const char* s[] = { 0, "QMoveEvent*", 0 }; override_arg_types[39] = s; }
        { static const char* s[] = { 0, "QPaintEvent*", 0 }; override_arg_types[40] = s; }
        { static const char* s[] = { 0, "QResizeEvent*", 0 }; override_arg_types[41] = s; }
        { static const char* s[] = { 0, "QShowEvent*", 0 }; override_arg_types[42] = s; }
        { static const char* s[] = { 0, "QTabletEvent*", 0 }; override_arg_types[43] = s; }
        { static const char* s[] = { 0, "QWheelEvent*", 0 }; override_arg_types[44] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[45] = s; }
        { static const char* s[] = { "bool", "QPoint", 0 }; override_arg_types[46] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[47] = s; }
        { static const char* s[] = { "QModelIndex", "QPoint", 0 }; override_arg_types[48] = s; }
        { static const char* s[] = { 0, "QModelIndex", "ScrollHint", 0 }; override_arg_types[49] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[50] = s; }
        { static const char* s[] = { 0, "QAbstractItemModel*", 0 }; override_arg_types[51] = s; }
        { static const char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[52] = s; }
        { static const char* s[] = { 0, "QItemSelectionModel*", 0 }; override_arg_types[53] = s; }
        { static const char* s[] = { "QRect", "QModelIndex", 0 }; override_arg_types[54] = s; }
        { static const char* s[] = { "QAbstractItemView*", "QModelIndex", 0 }; override_arg_types[55] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[56] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[57] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[58] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "EditTrigger", "QEvent*", 0 }; override_arg_types[59] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[60] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[61] = s; }
        { static const char* s[] = { "QModelIndex", "CursorAction", "Qt::KeyboardModifiers", 0 }; override_arg_types[62] = s; }
        { static const char* s[] = { "QModelIndexList", 0 }; override_arg_types[63] = s; }
        { static const char* s[] = { "QItemSelectionModel::SelectionFlags", "QModelIndex", "QEvent*", 0 }; override_arg_types[64] = s; }
        { static const char* s[] = { 0, "QRect", "QItemSelectionModel::SelectionFlags", 0 }; override_arg_types[65] = s; }
        { static const char* s[] = { 0, "Qt::DropActions", 0 }; override_arg_types[66] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[67] = s; }
        { static const char* s[] = { "QStyleOptionViewItem", 0 }; override_arg_types[68] = s; }
        { static const char* s[] = { "QRegion", "QItemSelection", 0 }; override_arg_types[69] = s; }
        { static const char* s[] = { 0, "int", "int", 0 }; override_arg_types[70] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[71] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[72] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[73] = s; }
        { static const char* s[] = { "QString", "QModelIndex", 0 }; override_arg_types[74] = s; }
        { static const char* s[] = { "QStringList", "QString", 0 }; override_arg_types[75] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[76] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[77] = s; }
        { static const char* s[] = { "QDateTime", "QString", 0 }; override_arg_types[78] = s; }
        { static const char* s[] = { "QString", "QDateTime", 0 }; override_arg_types[79] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[80] = s; }
        { static const char* s[] = { "QValidator::State", "QString", "int", 0 }; override_arg_types[81] = s; }
        { static const char* s[] = { "StepEnabled", 0 }; override_arg_types[82] = s; }
        { static const char* s[] = { 0, "SliderChange", 0 }; override_arg_types[83] = s; }
        { static const char* s[] = { 0, "bool", 0 }; override_arg_types[84] = s; }
        { static const char* s[] = { "QString", "double", 0 }; override_arg_types[85] = s; }
        { static const char* s[] = { "double", "QString", 0 }; override_arg_types[86] = s; }
        { static const char* s[] = { 0, "QLayoutItem*", 0 }; override_arg_types[87] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[88] = s; }
        { static const char* s[] = { "Qt::Orientations", 0 }; override_arg_types[89] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[90] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[91] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[92] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[93] = s; }
        { static const char* s[] = { 0, "QRect", 0 }; override_arg_types[94] = s; }
        { static const char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[95] = s; }
        { static const char* s[] = { "int", "QWidget*", 0 }; override_arg_types[96] = s; }
        { static const char* s[] = { "QRect", 0 }; override_arg_types[97] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[98] = s; }
        { static const char* s[] = { "QLayout*", 0 }; override_arg_types[99] = s; }
        { static const char* s[] = { "QSize", 0 }; override_arg_types[100] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[101] = s; }
        { static const char* s[] = { 0, "QRectF", 0 }; override_arg_types[102] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[103] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[104] = s; }
        { static const char* s[] = { "QRectF", 0 }; override_arg_types[105] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[106] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[107] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[108] = s; }
        { static const char* s[] = { 0, "QStyleOption*", 0 }; override_arg_types[109] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMoveEvent*", 0 }; override_arg_types[110] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[111] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneResizeEvent*", 0 }; override_arg_types[112] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[113] = s; }
        { static const char* s[] = { 0, "QEvent*", 0 }; override_arg_types[114] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[115] = s; }
        { static const char* s[] = { "Qt::WindowFrameSection", "QPointF", 0 }; override_arg_types[116] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneContextMenuEvent*", 0 }; override_arg_types[117] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[118] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[119] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[120] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[121] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[122] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[123] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHelpEvent*", 0 }; override_arg_types[124] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[125] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[126] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[127] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[128] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneWheelEvent*", 0 }; override_arg_types[129] = s; }
        { static const char* s[] = { "bool", "QPointF", 0 }; override_arg_types[130] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", 0 }; override_arg_types[131] = s; }
        { static const char* s[] = { "QPainterPath", 0 }; override_arg_types[132] = s; }
        { static const char* s[] = { "int", "int", 0 }; override_arg_types[133] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[134] = s; }
        { static const char* s[] = { "QWidget*", "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[135] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[136] = s; }
        { static const char* s[] = { 0, "QWidget*", "QModelIndex", 0 }; override_arg_types[137] = s; }
        { static const char* s[] = { 0, "QWidget*", "QAbstractItemModel*", "QModelIndex", 0 }; override_arg_types[138] = s; }
        { static const char* s[] = { "QSize", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[139] = s; }
        { static const char* s[] = { 0, "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[140] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "Qt::CheckState", 0 }; override_arg_types[141] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QPixmap", 0 }; override_arg_types[142] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QString", 0 }; override_arg_types[143] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", 0 }; override_arg_types[144] = s; }
        { static const char* s[] = { "bool", "QEvent*", "QAbstractItemModel*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[145] = s; }
        { static const char* s[] = { "bool", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[146] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QListWidgetItem*>", 0 }; override_arg_types[147] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[148] = s; }
        { static const char* s[] = { "Qt::DropActions", 0 }; override_arg_types[149] = s; }
        { static const char* s[] = { "QMenu*", 0 }; override_arg_types[150] = s; }
        { static const char* s[] = { "QStringList", 0 }; override_arg_types[151] = s; }
        { static const char* s[] = { "bool", "QString", 0 }; override_arg_types[152] = s; }
        { static const char* s[] = { "QVariant", "QString", "QVariant::Type", 0 }; override_arg_types[153] = s; }
        { static const char* s[] = { "QVariant", "int", "QUrl", 0 }; override_arg_types[154] = s; }
        { static const char* s[] = { "bool", "QMimeData*", 0 }; override_arg_types[155] = s; }
        { static const char* s[] = { "QMimeData*", 0 }; override_arg_types[156] = s; }
        { static const char* s[] = { 0, "QMimeData*", 0 }; override_arg_types[157] = s; }
        { static const char* s[] = { "QString", 0 }; override_arg_types[158] = s; }
        { static const char* s[] = { "QString", "int", 0 }; override_arg_types[159] = s; }
        { static const char* s[] = { 0, "QPainter*", 0 }; override_arg_types[160] = s; }
        { static const char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[161] = s; }
        { static const char* s[] = { "QVariant", "QModelIndex", "int", 0 }; override_arg_types[162] = s; }
        { static const char* s[] = { "bool", "QMimeData*", "Qt::DropAction", "int", "int", "QModelIndex", 0 }; override_arg_types[163] = s; }
        { static const char* s[] = { "Qt::ItemFlags", "QModelIndex", 0 }; override_arg_types[164] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[165] = s; }
        { static const char* s[] = { "QVariant", "int", "Qt::Orientation", "int", 0 }; override_arg_types[166] = s; }
        { static const char* s[] = { "QModelIndex", "int", "int", "QModelIndex", 0 }; override_arg_types[167] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[168] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[169] = s; }
        { static const char* s[] = { "QMimeData*", "QModelIndexList", 0 }; override_arg_types[170] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[171] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[172] = s; }
        { static const char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[173] = s; }
        { static const char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[174] = s; }
        { static const char* s[] = { "bool", "QModelIndex", "QVariant", "int", 0 }; override_arg_types[175] = s; }
        { static const char* s[] = { "bool", "int", "Qt::Orientation", "QVariant", "int", 0 }; override_arg_types[176] = s; }
        { static const char* s[] = { 0, "int", "Qt::SortOrder", 0 }; override_arg_types[177] = s; }
        { static const char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[178] = s; }
        { static const char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[179] = s; }
        { static const char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[180] = s; }
        { static const char* s[] = { "QModelIndexList", "QModelIndex", "int", "QVariant", "int", "Qt::MatchFlags", 0 }; override_arg_types[181] = s; }
        { static const char* s[] = { "QSize", "QModelIndex", 0 }; override_arg_types[182] = s; }
        { static const char* s[] = { 0, "QString", 0 }; override_arg_types[183] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[184] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[185] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[186] = s; }
        { static const char* s[] = { "QSize", "int", 0 }; override_arg_types[187] = s; }
        { static const char* s[] = { "bool", "int", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[188] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTableWidgetItem*>", 0 }; override_arg_types[189] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[190] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[191] = s; }
        { static const char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[192] = s; }
        { static const char* s[] = { "QTextObject*", "QTextFormat", 0 }; override_arg_types[193] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[194] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[195] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[196] = s; }
        { static const char* s[] = { "QString", "const char*", "const char*", "const char*", 0 }; override_arg_types[197] = s; }
        { static const char* s[] = { 0, "QModelIndex", "QModelIndex", 0 }; override_arg_types[198] = s; }
        { static const char* s[] = { 0, "QPainter*", "QRect", "QModelIndex", 0 }; override_arg_types[199] = s; }
        { static const char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[200] = s; }
        { static const char* s[] = { "bool", "QTreeWidgetItem*", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[201] = s; }
        { static const char* s[] = { "QMimeData*", "QList<QTreeWidgetItem*>", 0 }; override_arg_types[202] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[203] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[204] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[205] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[206] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[207] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[208] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[209] = s; }
        { static const char* s[] = { "bool", 0 }; override_arg_types[210] = s; }
        { static const char* s[] = { "QIcon", "IconType", 0 }; override_arg_types[211] = s; }
        { static const char* s[] = { 0, "int", 0 }; override_arg_types[212] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "Qt::ItemSelectionMode", 0 }; override_arg_types[213] = s; }
        { static const char* s[] = { "bool", "QPainterPath", "Qt::ItemSelectionMode", 0 }; override_arg_types[214] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[215] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[216] = s; }
        { static const char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[217] = s; }
        { static const char* s[] = { "QVariant", "GraphicsItemChange", "QVariant", 0 }; override_arg_types[218] = s; }
        { static const char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[219] = s; }
        { static const char* s[] = { "bool", "QGraphicsItem*", "QEvent*", 0 }; override_arg_types[220] = s; }
        { static const char* s[] = { "int", "PaintDeviceMetric", 0 }; override_arg_types[221] = s; }
        { static const char* s[] = { "QWidget*", "QVariant::Type", "QWidget*", 0 }; override_arg_types[222] = s; }
        { static const char* s[] = { "QByteArray", "QVariant::Type", 0 }; override_arg_types[223] = s; }
        { static const char* s[] = { "QListWidgetItem*", 0 }; override_arg_types[224] = s; }
        { static const char* s[] = { "QVariant", "int", 0 }; override_arg_types[225] = s; }
        { static const char* s[] = { 0, "int", "QVariant", 0 }; override_arg_types[226] = s; }
        { static const char* s[] = { 0, "const char*", "uint", 0 }; override_arg_types[227] = s; }
        { static const char* s[] = { "QSpacerItem*", 0 }; override_arg_types[228] = s; }
        { static const char* s[] = { "QWidget*", 0 }; override_arg_types[229] = s; }
        { static const char* s[] = { 0, "QVariant", "int", 0 }; override_arg_types[230] = s; }
        { static const char* s[] = { "QVariant", "int", "int", 0 }; override_arg_types[231] = s; }
        { static const char* s[] = { 0, "int", "int", "QVariant", 0 }; override_arg_types[232] = s; }
        { static const char* s[] = { "int", 0 }; override_arg_types[233] = s; }
        { static const char* s[] = { "bool", "QUndoCommand*", 0 }; override_arg_types[234] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[235] = s; }
        { static const char* s[] = { 0, 0 }; override_arg_types[236] = s; }
        qNames = q_names.keys();
        nNames = n_names.keys(); }}

void* LObjects::overrideFun(uint unique, int id) {
    return override_lisp_functions.value(237 * (quint64)unique + id, 0); }

void LObjects::setOverrideFun(uint unique, int id, void* fun) {
    override_lisp_functions[237 * (quint64)unique + id] = fun; }

const QMetaObject* LObjects::staticMetaObject(const QByteArray& name, int n) {
    if(n == -1) {
        n = LObjects::q_names.value(name); }
    const QMetaObject* m = 0;
    switch(n) {
        case 1: m = &QAbstractButton::staticMetaObject; break;
        case 2: m = &QAbstractItemDelegate::staticMetaObject; break;
        case 3: m = &QAbstractItemModel::staticMetaObject; break;
        case 4: m = &QAbstractItemView::staticMetaObject; break;
        case 5: m = &QAbstractListModel::staticMetaObject; break;
        case 6: m = &QAbstractProxyModel::staticMetaObject; break;
        case 7: m = &QAbstractScrollArea::staticMetaObject; break;
        case 8: m = &QAbstractSlider::staticMetaObject; break;
        case 9: m = &QAbstractSpinBox::staticMetaObject; break;
        case 10: m = &QAbstractTextDocumentLayout::staticMetaObject; break;
        case 11: m = &QAction::staticMetaObject; break;
        case 12: m = &QActionGroup::staticMetaObject; break;
        case 13: m = &QApplication::staticMetaObject; break;
        case 14: m = &QBoxLayout::staticMetaObject; break;
        case 15: m = &QBuffer::staticMetaObject; break;
        case 16: m = &QButtonGroup::staticMetaObject; break;
        case 17: m = &QCalendarWidget::staticMetaObject; break;
        case 18: m = &QCheckBox::staticMetaObject; break;
        case 19: m = &QClipboard::staticMetaObject; break;
        case 20: m = &QColumnView::staticMetaObject; break;
        case 21: m = &QComboBox::staticMetaObject; break;
        case 22: m = &QCommandLinkButton::staticMetaObject; break;
        case 23: m = &QCompleter::staticMetaObject; break;
        case 24: m = &QCoreApplication::staticMetaObject; break;
        case 25: m = &QDateEdit::staticMetaObject; break;
        case 26: m = &QDateTimeEdit::staticMetaObject; break;
        case 27: m = &QDesktopWidget::staticMetaObject; break;
        case 28: m = &QDial::staticMetaObject; break;
        case 29: m = &QDialog::staticMetaObject; break;
        case 30: m = &QDialogButtonBox::staticMetaObject; break;
        case 31: m = &QDockWidget::staticMetaObject; break;
        case 32: m = &QDoubleSpinBox::staticMetaObject; break;
        case 33: m = &QDrag::staticMetaObject; break;
        case 34: m = &QErrorMessage::staticMetaObject; break;
        case 35: m = &QFileDialog::staticMetaObject; break;
        case 36: m = &QFontComboBox::staticMetaObject; break;
        case 37: m = &QFontDialog::staticMetaObject; break;
        case 38: m = &QFormLayout::staticMetaObject; break;
        case 39: m = &QFrame::staticMetaObject; break;
        case 40: m = &QGraphicsEffect::staticMetaObject; break;
        case 41: m = &QGraphicsObject::staticMetaObject; break;
        case 42: m = &QGraphicsProxyWidget::staticMetaObject; break;
        case 43: m = &QGraphicsScene::staticMetaObject; break;
        case 44: m = &QGraphicsTextItem::staticMetaObject; break;
        case 45: m = &QGraphicsView::staticMetaObject; break;
        case 46: m = &QGraphicsWidget::staticMetaObject; break;
        case 47: m = &QGridLayout::staticMetaObject; break;
        case 48: m = &QGroupBox::staticMetaObject; break;
        case 49: m = &QHBoxLayout::staticMetaObject; break;
        case 50: m = &QHeaderView::staticMetaObject; break;
        case 51: m = &QIODevice::staticMetaObject; break;
        case 52: m = &QInputContext::staticMetaObject; break;
        case 53: m = &QInputDialog::staticMetaObject; break;
        case 54: m = &QItemDelegate::staticMetaObject; break;
        case 55: m = &QItemSelectionModel::staticMetaObject; break;
        case 56: m = &QLCDNumber::staticMetaObject; break;
        case 57: m = &QLabel::staticMetaObject; break;
        case 58: m = &QLayout::staticMetaObject; break;
        case 59: m = &QLineEdit::staticMetaObject; break;
        case 60: m = &QListView::staticMetaObject; break;
        case 61: m = &QListWidget::staticMetaObject; break;
        case 62: m = &QMainWindow::staticMetaObject; break;
        case 63: m = &QMenu::staticMetaObject; break;
        case 64: m = &QMenuBar::staticMetaObject; break;
        case 65: m = &QMessageBox::staticMetaObject; break;
        case 66: m = &QMimeData::staticMetaObject; break;
        case 67: m = &QMovie::staticMetaObject; break;
        case 68: m = &QObject::staticMetaObject; break;
        case 69: m = &QPlainTextEdit::staticMetaObject; break;
        case 70: m = &QPrintPreviewDialog::staticMetaObject; break;
        case 71: m = &QProgressBar::staticMetaObject; break;
        case 72: m = &QPushButton::staticMetaObject; break;
        case 73: m = &QRadioButton::staticMetaObject; break;
        case 74: m = &QScrollArea::staticMetaObject; break;
        case 75: m = &QScrollBar::staticMetaObject; break;
        case 76: m = &QSessionManager::staticMetaObject; break;
        case 77: m = &QSlider::staticMetaObject; break;
        case 78: m = &QSpinBox::staticMetaObject; break;
        case 79: m = &QSplashScreen::staticMetaObject; break;
        case 80: m = &QSplitter::staticMetaObject; break;
        case 81: m = &QStackedLayout::staticMetaObject; break;
        case 82: m = &QStackedWidget::staticMetaObject; break;
        case 83: m = &QStandardItemModel::staticMetaObject; break;
        case 84: m = &QStatusBar::staticMetaObject; break;
        case 85: m = &QStringListModel::staticMetaObject; break;
        case 86: m = &QSyntaxHighlighter::staticMetaObject; break;
        case 87: m = &QTabBar::staticMetaObject; break;
        case 88: m = &QTabWidget::staticMetaObject; break;
        case 89: m = &QTableView::staticMetaObject; break;
        case 90: m = &QTableWidget::staticMetaObject; break;
        case 91: m = &QTextBlockGroup::staticMetaObject; break;
        case 92: m = &QTextBrowser::staticMetaObject; break;
        case 93: m = &QTextDocument::staticMetaObject; break;
        case 94: m = &QTextEdit::staticMetaObject; break;
        case 95: m = &QTextFrame::staticMetaObject; break;
        case 96: m = &QTextList::staticMetaObject; break;
        case 97: m = &QTextObject::staticMetaObject; break;
        case 98: m = &QTextTable::staticMetaObject; break;
        case 99: m = &QThread::staticMetaObject; break;
        case 100: m = &QTimeEdit::staticMetaObject; break;
        case 101: m = &QTimer::staticMetaObject; break;
        case 102: m = &QToolBar::staticMetaObject; break;
        case 103: m = &QToolBox::staticMetaObject; break;
        case 104: m = &QToolButton::staticMetaObject; break;
        case 105: m = &QTranslator::staticMetaObject; break;
        case 106: m = &QTreeView::staticMetaObject; break;
        case 107: m = &QTreeWidget::staticMetaObject; break;
        case 108: m = &QUndoGroup::staticMetaObject; break;
        case 109: m = &QUndoStack::staticMetaObject; break;
        case 110: m = &QUndoView::staticMetaObject; break;
        case 111: m = &QVBoxLayout::staticMetaObject; break;
        case 112: m = &QValidator::staticMetaObject; break;
        case 113: m = &QWidget::staticMetaObject; break;
        case 114: m = &QWizard::staticMetaObject; break;
        case 115: m = &QWizardPage::staticMetaObject; break;
        case 116: m = &QWorkspace::staticMetaObject; break; }
    return m; }

void LObjects::deleteNObject(int n, void* p) {
    switch(n) {
        case 3: delete (LBasicTimer*)p; break;
        case 4: delete (LBitArray*)p; break;
        case 5: delete (LBitmap*)p; break;
        case 6: delete (LBrush*)p; break;
        case 10: delete (LConicalGradient*)p; break;
        case 15: delete (LDir*)p; break;
        case 21: delete (LFileIconProvider*)p; break;
        case 22: delete (LFileInfo*)p; break;
        case 24: delete (LFontMetrics*)p; break;
        case 25: delete (LGradient*)p; break;
        case 26: delete (LGraphicsEllipseItem*)p; break;
        case 27: delete (LGraphicsItem*)p; break;
        case 28: delete (LGraphicsItemGroup*)p; break;
        case 31: delete (LGraphicsLineItem*)p; break;
        case 32: delete (LGraphicsPathItem*)p; break;
        case 33: delete (LGraphicsPixmapItem*)p; break;
        case 34: delete (LGraphicsPolygonItem*)p; break;
        case 35: delete (LGraphicsRectItem*)p; break;
        case 45: delete (LGraphicsSimpleTextItem*)p; break;
        case 47: delete (LIcon*)p; break;
        case 48: delete (LImage*)p; break;
        case 51: delete (LItemEditorFactory*)p; break;
        case 52: delete (LItemSelection*)p; break;
        case 53: delete (LItemSelectionRange*)p; break;
        case 56: delete (LLinearGradient*)p; break;
        case 57: delete (LListWidgetItem*)p; break;
        case 58: delete (LLocale*)p; break;
        case 59: delete (LMatrix*)p; break;
        case 60: delete (LMatrix4x4*)p; break;
        case 62: delete (LModelIndex*)p; break;
        case 67: delete (LPainter*)p; break;
        case 68: delete (LPainterPath*)p; break;
        case 69: delete (LPalette*)p; break;
        case 70: delete (LPen*)p; break;
        case 71: delete (LPicture*)p; break;
        case 72: delete (LPixmap*)p; break;
        case 73: delete (LPrinter*)p; break;
        case 74: delete (LQuaternion*)p; break;
        case 75: delete (LRadialGradient*)p; break;
        case 76: delete (LRegExp*)p; break;
        case 77: delete (LRegion*)p; break;
        case 80: delete (LSizePolicy*)p; break;
        case 81: delete (LSpacerItem*)p; break;
        case 82: delete (LStandardItem*)p; break;
        case 83: delete (LTableWidgetItem*)p; break;
        case 84: delete (LTableWidgetSelectionRange*)p; break;
        case 87: delete (LTextBlockFormat*)p; break;
        case 88: delete (LTextCharFormat*)p; break;
        case 89: delete (LTextCursor*)p; break;
        case 90: delete (LTextDocumentFragment*)p; break;
        case 91: delete (LTextFormat*)p; break;
        case 92: delete (LTextFrameFormat*)p; break;
        case 93: delete (LTextImageFormat*)p; break;
        case 94: delete (LTextLength*)p; break;
        case 95: delete (LTextListFormat*)p; break;
        case 96: delete (LTextOption*)p; break;
        case 97: delete (LTextTableCell*)p; break;
        case 98: delete (LTextTableCellFormat*)p; break;
        case 99: delete (LTextTableFormat*)p; break;
        case 102: delete (LTransform*)p; break;
        case 103: delete (LTreeWidgetItem*)p; break;
        case 104: delete (LUndoCommand*)p; break;
        case 106: delete (LVariant*)p; break;
        case 107: delete (LVector2D*)p; break;
        case 108: delete (LVector3D*)p; break;
        case 109: delete (LVector4D*)p; break; }}

const char* LObjects::nObjectSuperClass(const QByteArray& name) {
    const char* s = 0;
    switch(LObjects::n_names.value(name)) {
        case 1: s = "QGraphicsItem"; break;
        case 2: s = "QEvent"; break;
        case 5: s = "QPixmap"; break;
        case 7: s = "QEvent"; break;
        case 8: s = "QEvent"; break;
        case 10: s = "QGradient"; break;
        case 11: s = "QInputEvent"; break;
        case 16: s = "QDragMoveEvent"; break;
        case 17: s = "QEvent"; break;
        case 18: s = "QDropEvent"; break;
        case 19: s = "QEvent"; break;
        case 23: s = "QEvent"; break;
        case 26: s = "QAbstractGraphicsShapeItem"; break;
        case 28: s = "QGraphicsItem"; break;
        case 29: s = "QGraphicsLayoutItem"; break;
        case 31: s = "QGraphicsItem"; break;
        case 32: s = "QAbstractGraphicsShapeItem"; break;
        case 33: s = "QGraphicsItem"; break;
        case 34: s = "QAbstractGraphicsShapeItem"; break;
        case 35: s = "QAbstractGraphicsShapeItem"; break;
        case 36: s = "QGraphicsSceneEvent"; break;
        case 37: s = "QGraphicsSceneEvent"; break;
        case 38: s = "QEvent"; break;
        case 39: s = "QGraphicsSceneEvent"; break;
        case 40: s = "QGraphicsSceneEvent"; break;
        case 41: s = "QGraphicsSceneEvent"; break;
        case 42: s = "QGraphicsSceneEvent"; break;
        case 43: s = "QGraphicsSceneEvent"; break;
        case 44: s = "QGraphicsSceneEvent"; break;
        case 45: s = "QAbstractGraphicsShapeItem"; break;
        case 46: s = "QEvent"; break;
        case 48: s = "QPaintDevice"; break;
        case 49: s = "QEvent"; break;
        case 50: s = "QEvent"; break;
        case 54: s = "QInputEvent"; break;
        case 56: s = "QGradient"; break;
        case 63: s = "QInputEvent"; break;
        case 64: s = "QEvent"; break;
        case 66: s = "QEvent"; break;
        case 71: s = "QPaintDevice"; break;
        case 72: s = "QPaintDevice"; break;
        case 73: s = "QPaintDevice"; break;
        case 75: s = "QGradient"; break;
        case 78: s = "QEvent"; break;
        case 79: s = "QEvent"; break;
        case 81: s = "QLayoutItem"; break;
        case 85: s = "QInputEvent"; break;
        case 87: s = "QTextFormat"; break;
        case 88: s = "QTextFormat"; break;
        case 92: s = "QTextFormat"; break;
        case 93: s = "QTextCharFormat"; break;
        case 95: s = "QTextFormat"; break;
        case 98: s = "QTextCharFormat"; break;
        case 99: s = "QTextFrameFormat"; break;
        case 101: s = "QEvent"; break;
        case 110: s = "QInputEvent"; break; }
    return s; }

StrList LObjects::override(const QByteArray& name) {
    NumList ids;
    int n = q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 11: ids = LAction::overrideIds; break;
            case 12: ids = LActionGroup::overrideIds; break;
            case 15: ids = LBuffer::overrideIds; break;
            case 16: ids = LButtonGroup::overrideIds; break;
            case 17: ids = LCalendarWidget::overrideIds; break;
            case 18: ids = LCheckBox::overrideIds; break;
            case 20: ids = LColumnView::overrideIds; break;
            case 21: ids = LComboBox::overrideIds; break;
            case 22: ids = LCommandLinkButton::overrideIds; break;
            case 23: ids = LCompleter::overrideIds; break;
            case 25: ids = LDateEdit::overrideIds; break;
            case 26: ids = LDateTimeEdit::overrideIds; break;
            case 27: ids = LDesktopWidget::overrideIds; break;
            case 28: ids = LDial::overrideIds; break;
            case 29: ids = LDialog::overrideIds; break;
            case 30: ids = LDialogButtonBox::overrideIds; break;
            case 31: ids = LDockWidget::overrideIds; break;
            case 32: ids = LDoubleSpinBox::overrideIds; break;
            case 33: ids = LDrag::overrideIds; break;
            case 34: ids = LErrorMessage::overrideIds; break;
            case 35: ids = LFileDialog::overrideIds; break;
            case 36: ids = LFontComboBox::overrideIds; break;
            case 37: ids = LFontDialog::overrideIds; break;
            case 38: ids = LFormLayout::overrideIds; break;
            case 39: ids = LFrame::overrideIds; break;
            case 42: ids = LGraphicsProxyWidget::overrideIds; break;
            case 43: ids = LGraphicsScene::overrideIds; break;
            case 44: ids = LGraphicsTextItem::overrideIds; break;
            case 45: ids = LGraphicsView::overrideIds; break;
            case 46: ids = LGraphicsWidget::overrideIds; break;
            case 47: ids = LGridLayout::overrideIds; break;
            case 48: ids = LGroupBox::overrideIds; break;
            case 49: ids = LHBoxLayout::overrideIds; break;
            case 53: ids = LInputDialog::overrideIds; break;
            case 54: ids = LItemDelegate::overrideIds; break;
            case 55: ids = LItemSelectionModel::overrideIds; break;
            case 56: ids = LLCDNumber::overrideIds; break;
            case 57: ids = LLabel::overrideIds; break;
            case 59: ids = LLineEdit::overrideIds; break;
            case 60: ids = LListView::overrideIds; break;
            case 61: ids = LListWidget::overrideIds; break;
            case 62: ids = LMainWindow::overrideIds; break;
            case 63: ids = LMenu::overrideIds; break;
            case 64: ids = LMenuBar::overrideIds; break;
            case 65: ids = LMessageBox::overrideIds; break;
            case 66: ids = LMimeData::overrideIds; break;
            case 67: ids = LMovie::overrideIds; break;
            case 68: ids = LObject::overrideIds; break;
            case 69: ids = LPlainTextEdit::overrideIds; break;
            case 70: ids = LPrintPreviewDialog::overrideIds; break;
            case 71: ids = LProgressBar::overrideIds; break;
            case 72: ids = LPushButton::overrideIds; break;
            case 73: ids = LRadioButton::overrideIds; break;
            case 74: ids = LScrollArea::overrideIds; break;
            case 75: ids = LScrollBar::overrideIds; break;
            case 77: ids = LSlider::overrideIds; break;
            case 78: ids = LSpinBox::overrideIds; break;
            case 79: ids = LSplashScreen::overrideIds; break;
            case 80: ids = LSplitter::overrideIds; break;
            case 81: ids = LStackedLayout::overrideIds; break;
            case 82: ids = LStackedWidget::overrideIds; break;
            case 83: ids = LStandardItemModel::overrideIds; break;
            case 84: ids = LStatusBar::overrideIds; break;
            case 85: ids = LStringListModel::overrideIds; break;
            case 86: ids = LSyntaxHighlighter::overrideIds; break;
            case 87: ids = LTabBar::overrideIds; break;
            case 88: ids = LTabWidget::overrideIds; break;
            case 89: ids = LTableView::overrideIds; break;
            case 90: ids = LTableWidget::overrideIds; break;
            case 91: ids = LTextBlockGroup::overrideIds; break;
            case 92: ids = LTextBrowser::overrideIds; break;
            case 93: ids = LTextDocument::overrideIds; break;
            case 94: ids = LTextEdit::overrideIds; break;
            case 95: ids = LTextFrame::overrideIds; break;
            case 96: ids = LTextList::overrideIds; break;
            case 97: ids = LTextObject::overrideIds; break;
            case 98: ids = LTextTable::overrideIds; break;
            case 99: ids = LThread::overrideIds; break;
            case 100: ids = LTimeEdit::overrideIds; break;
            case 101: ids = LTimer::overrideIds; break;
            case 102: ids = LToolBar::overrideIds; break;
            case 103: ids = LToolBox::overrideIds; break;
            case 104: ids = LToolButton::overrideIds; break;
            case 105: ids = LTranslator::overrideIds; break;
            case 106: ids = LTreeView::overrideIds; break;
            case 107: ids = LTreeWidget::overrideIds; break;
            case 108: ids = LUndoGroup::overrideIds; break;
            case 109: ids = LUndoStack::overrideIds; break;
            case 110: ids = LUndoView::overrideIds; break;
            case 111: ids = LVBoxLayout::overrideIds; break;
            case 113: ids = LWidget::overrideIds; break;
            case 114: ids = LWizard::overrideIds; break;
            case 115: ids = LWizardPage::overrideIds; break;
            case 116: ids = LWorkspace::overrideIds; break; }}
    else {
        n = n_names.value(name);
        switch(n) {
            case 3: ids = LBasicTimer::overrideIds; break;
            case 4: ids = LBitArray::overrideIds; break;
            case 5: ids = LBitmap::overrideIds; break;
            case 6: ids = LBrush::overrideIds; break;
            case 10: ids = LConicalGradient::overrideIds; break;
            case 15: ids = LDir::overrideIds; break;
            case 21: ids = LFileIconProvider::overrideIds; break;
            case 22: ids = LFileInfo::overrideIds; break;
            case 24: ids = LFontMetrics::overrideIds; break;
            case 25: ids = LGradient::overrideIds; break;
            case 26: ids = LGraphicsEllipseItem::overrideIds; break;
            case 27: ids = LGraphicsItem::overrideIds; break;
            case 28: ids = LGraphicsItemGroup::overrideIds; break;
            case 31: ids = LGraphicsLineItem::overrideIds; break;
            case 32: ids = LGraphicsPathItem::overrideIds; break;
            case 33: ids = LGraphicsPixmapItem::overrideIds; break;
            case 34: ids = LGraphicsPolygonItem::overrideIds; break;
            case 35: ids = LGraphicsRectItem::overrideIds; break;
            case 45: ids = LGraphicsSimpleTextItem::overrideIds; break;
            case 47: ids = LIcon::overrideIds; break;
            case 48: ids = LImage::overrideIds; break;
            case 51: ids = LItemEditorFactory::overrideIds; break;
            case 52: ids = LItemSelection::overrideIds; break;
            case 53: ids = LItemSelectionRange::overrideIds; break;
            case 56: ids = LLinearGradient::overrideIds; break;
            case 57: ids = LListWidgetItem::overrideIds; break;
            case 58: ids = LLocale::overrideIds; break;
            case 59: ids = LMatrix::overrideIds; break;
            case 60: ids = LMatrix4x4::overrideIds; break;
            case 62: ids = LModelIndex::overrideIds; break;
            case 67: ids = LPainter::overrideIds; break;
            case 68: ids = LPainterPath::overrideIds; break;
            case 69: ids = LPalette::overrideIds; break;
            case 70: ids = LPen::overrideIds; break;
            case 71: ids = LPicture::overrideIds; break;
            case 72: ids = LPixmap::overrideIds; break;
            case 73: ids = LPrinter::overrideIds; break;
            case 74: ids = LQuaternion::overrideIds; break;
            case 75: ids = LRadialGradient::overrideIds; break;
            case 76: ids = LRegExp::overrideIds; break;
            case 77: ids = LRegion::overrideIds; break;
            case 80: ids = LSizePolicy::overrideIds; break;
            case 81: ids = LSpacerItem::overrideIds; break;
            case 82: ids = LStandardItem::overrideIds; break;
            case 83: ids = LTableWidgetItem::overrideIds; break;
            case 84: ids = LTableWidgetSelectionRange::overrideIds; break;
            case 87: ids = LTextBlockFormat::overrideIds; break;
            case 88: ids = LTextCharFormat::overrideIds; break;
            case 89: ids = LTextCursor::overrideIds; break;
            case 90: ids = LTextDocumentFragment::overrideIds; break;
            case 91: ids = LTextFormat::overrideIds; break;
            case 92: ids = LTextFrameFormat::overrideIds; break;
            case 93: ids = LTextImageFormat::overrideIds; break;
            case 94: ids = LTextLength::overrideIds; break;
            case 95: ids = LTextListFormat::overrideIds; break;
            case 96: ids = LTextOption::overrideIds; break;
            case 97: ids = LTextTableCell::overrideIds; break;
            case 98: ids = LTextTableCellFormat::overrideIds; break;
            case 99: ids = LTextTableFormat::overrideIds; break;
            case 102: ids = LTransform::overrideIds; break;
            case 103: ids = LTreeWidgetItem::overrideIds; break;
            case 104: ids = LUndoCommand::overrideIds; break;
            case 106: ids = LVariant::overrideIds; break;
            case 107: ids = LVector2D::overrideIds; break;
            case 108: ids = LVector3D::overrideIds; break;
            case 109: ids = LVector4D::overrideIds; break; }}
    StrList funs;
    Q_FOREACH(int id, ids) {
        const char* ret = override_arg_types[id - 1][0];
        funs << QString("%1 %2")
                .arg(ret ? ret : "void")
                .arg(QString(override_function_ids.key(id))).toAscii(); }
    return funs; }
