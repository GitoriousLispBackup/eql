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
char*** LObjects::override_arg_types = 0;
QList<QByteArray> LObjects::qNames;
QList<QByteArray> LObjects::nNames;
QMap<QByteArray, int> LObjects::q_names;
QMap<QByteArray, int> LObjects::n_names;
QHash<QString, uint> LObjects::ui_unique;
QHash<QByteArray, uint> LObjects::override_function_ids;
QHash<quint64, void*> LObjects::override_lisp_functions;
NumList LAction::overrideIds = NumList();
NumList LActionGroup::overrideIds = NumList();
NumList LButtonGroup::overrideIds = NumList();
NumList LCalendarWidget::overrideIds = NumList() << 6 << 7 << 8;
NumList LCheckBox::overrideIds = NumList() << 7;
NumList LColumnView::overrideIds = NumList() << 41 << 42 << 43 << 44 << 45 << 46 << 7 << 47 << 48;
NumList LComboBox::overrideIds = NumList() << 65 << 66 << 6 << 7;
NumList LCommandLinkButton::overrideIds = NumList();
NumList LCompleter::overrideIds = NumList() << 67 << 68;
NumList LDateEdit::overrideIds = NumList();
NumList LDateTimeEdit::overrideIds = NumList() << 69 << 7 << 70 << 71 << 72;
NumList LDesktopWidget::overrideIds = NumList();
NumList LDial::overrideIds = NumList() << 6 << 7;
NumList LDialog::overrideIds = NumList() << 6 << 77 << 7;
NumList LDockWidget::overrideIds = NumList();
NumList LDoubleSpinBox::overrideIds = NumList() << 78 << 79 << 73 << 74;
NumList LDrag::overrideIds = NumList();
NumList LErrorMessage::overrideIds = NumList();
NumList LFileDialog::overrideIds = NumList() << 77;
NumList LFontComboBox::overrideIds = NumList() << 7;
NumList LFontDialog::overrideIds = NumList() << 77;
NumList LFormLayout::overrideIds = NumList() << 80 << 81 << 82 << 83 << 9 << 84 << 85 << 86 << 87 << 7 << 88;
NumList LFrame::overrideIds = NumList() << 7;
NumList LGraphicsProxyWidget::overrideIds = NumList() << 94 << 95 << 96;
NumList LGraphicsScene::overrideIds = NumList() << 10 << 110 << 111 << 112 << 113 << 114 << 115 << 116 << 20 << 22 << 117 << 24 << 25 << 26 << 118 << 119 << 120 << 121 << 122;
NumList LGraphicsTextItem::overrideIds = NumList() << 98 << 123 << 124 << 125 << 94 << 99 << 96;
NumList LGraphicsView::overrideIds = NumList() << 10 << 7 << 114 << 115;
NumList LGraphicsWidget::overrideIds = NumList() << 97 << 98 << 94 << 95 << 99 << 96 << 12 << 13 << 21 << 100 << 101 << 23 << 102 << 103 << 104 << 105 << 35 << 106 << 107 << 108 << 109;
NumList LGridLayout::overrideIds = NumList() << 81 << 82 << 83 << 9 << 84 << 85 << 93 << 126 << 86 << 87 << 7 << 88;
NumList LGroupBox::overrideIds = NumList() << 6;
NumList LHBoxLayout::overrideIds = NumList();
NumList LInputDialog::overrideIds = NumList() << 127 << 6 << 77 << 7;
NumList LItemDelegate::overrideIds = NumList() << 128 << 129 << 130 << 131 << 132 << 133 << 134 << 135 << 136 << 137;
NumList LItemSelectionModel::overrideIds = NumList();
NumList LLCDNumber::overrideIds = NumList() << 7;
NumList LLabel::overrideIds = NumList() << 9 << 6 << 7;
NumList LLineEdit::overrideIds = NumList() << 10 << 6 << 7;
NumList LListView::overrideIds = NumList() << 41 << 42 << 47;
NumList LListWidget::overrideIds = NumList() << 18 << 139 << 140 << 141 << 142;
NumList LMainWindow::overrideIds = NumList() << 143;
NumList LMenu::overrideIds = NumList() << 7;
NumList LMenuBar::overrideIds = NumList() << 9 << 6 << 7;
NumList LMessageBox::overrideIds = NumList() << 77;
NumList LMimeData::overrideIds = NumList() << 144 << 145 << 146;
NumList LMovie::overrideIds = NumList();
NumList LObject::overrideIds = NumList() << 1 << 2 << 3 << 4 << 5;
NumList LPlainTextEdit::overrideIds = NumList() << 147 << 148 << 149 << 150;
NumList LProgressBar::overrideIds = NumList() << 151 << 6 << 7;
NumList LPushButton::overrideIds = NumList() << 6 << 7;
NumList LRadioButton::overrideIds = NumList() << 7;
NumList LScrollArea::overrideIds = NumList() << 21 << 7;
NumList LScrollBar::overrideIds = NumList() << 7;
NumList LSlider::overrideIds = NumList() << 6 << 7;
NumList LSpinBox::overrideIds = NumList() << 152 << 79;
NumList LSplashScreen::overrideIds = NumList() << 153;
NumList LSplitter::overrideIds = NumList() << 6 << 7;
NumList LStackedLayout::overrideIds = NumList() << 80 << 81 << 85 << 86 << 87 << 7 << 88;
NumList LStackedWidget::overrideIds = NumList();
NumList LStandardItemModel::overrideIds = NumList() << 154 << 155 << 156 << 157 << 158 << 159 << 160 << 161 << 162 << 163 << 141 << 164 << 165 << 166 << 167 << 168 << 169 << 170 << 142;
NumList LStatusBar::overrideIds = NumList();
NumList LStringListModel::overrideIds = NumList() << 155 << 157 << 162 << 166 << 167 << 168 << 170 << 142;
NumList LTabBar::overrideIds = NumList() << 6 << 7 << 176 << 177 << 178 << 179;
NumList LTabWidget::overrideIds = NumList() << 6 << 7 << 176 << 178;
NumList LTableView::overrideIds = NumList() << 41 << 44 << 45 << 46;
NumList LTableWidget::overrideIds = NumList() << 180 << 181 << 141 << 142;
NumList LTextBlockGroup::overrideIds = NumList() << 182 << 183 << 184;
NumList LTextBrowser::overrideIds = NumList() << 147;
NumList LTextDocument::overrideIds = NumList() << 69 << 185 << 147;
NumList LTextEdit::overrideIds = NumList() << 147 << 148 << 149 << 150;
NumList LTextFrame::overrideIds = NumList();
NumList LTextList::overrideIds = NumList();
NumList LTextObject::overrideIds = NumList();
NumList LTextTable::overrideIds = NumList();
NumList LThread::overrideIds = NumList() << 186;
NumList LTimeEdit::overrideIds = NumList();
NumList LTimer::overrideIds = NumList();
NumList LToolBar::overrideIds = NumList();
NumList LToolBox::overrideIds = NumList() << 187 << 188;
NumList LToolButton::overrideIds = NumList() << 6 << 7;
NumList LTranslator::overrideIds = NumList() << 91 << 189;
NumList LTreeView::overrideIds = NumList() << 190 << 41 << 49 << 191 << 42 << 43 << 44 << 45 << 46 << 47 << 192 << 193;
NumList LTreeWidget::overrideIds = NumList() << 46 << 194 << 195 << 141 << 142;
NumList LUndoGroup::overrideIds = NumList();
NumList LUndoStack::overrideIds = NumList();
NumList LUndoView::overrideIds = NumList();
NumList LVBoxLayout::overrideIds = NumList();
NumList LWidget::overrideIds = NumList() << 9 << 10 << 6 << 7 << 11 << 12 << 13 << 14 << 15 << 16 << 17 << 18 << 19 << 20 << 21 << 22 << 23 << 24 << 25 << 26 << 27 << 28 << 29 << 30 << 31 << 32 << 33 << 34 << 35 << 36 << 37;
NumList LWizard::overrideIds = NumList() << 196 << 197 << 77 << 7 << 198 << 199;
NumList LWizardPage::overrideIds = NumList() << 200 << 201 << 202 << 196 << 203;
NumList LWorkspace::overrideIds = NumList() << 7;
NumList LBasicTimer::overrideIds = NumList();
NumList LBitArray::overrideIds = NumList();
NumList LBitmap::overrideIds = NumList();
NumList LBrush::overrideIds = NumList();
NumList LConicalGradient::overrideIds = NumList();
NumList LDir::overrideIds = NumList();
NumList LFileIconProvider::overrideIds = NumList() << 204;
NumList LFileInfo::overrideIds = NumList();
NumList LFontMetrics::overrideIds = NumList();
NumList LGradient::overrideIds = NumList();
NumList LGraphicsEllipseItem::overrideIds = NumList() << 98 << 123 << 124 << 125 << 94 << 99 << 96;
NumList LGraphicsItem::overrideIds = NumList() << 205 << 98 << 206 << 207 << 123 << 124 << 125 << 94 << 99 << 96 << 110 << 111 << 112 << 113 << 116 << 20 << 22 << 208 << 209 << 210 << 24 << 10 << 211 << 25 << 26 << 118 << 119 << 120 << 121 << 212 << 213 << 122;
NumList LGraphicsItemGroup::overrideIds = NumList() << 98 << 124 << 125 << 94 << 96;
NumList LGraphicsLineItem::overrideIds = NumList() << 98 << 123 << 124 << 125 << 94 << 99 << 96;
NumList LGraphicsPathItem::overrideIds = NumList() << 98 << 123 << 124 << 125 << 94 << 99 << 96;
NumList LGraphicsPixmapItem::overrideIds = NumList() << 98 << 123 << 124 << 125 << 94 << 99 << 96;
NumList LGraphicsPolygonItem::overrideIds = NumList() << 98 << 123 << 124 << 125 << 94 << 99 << 96;
NumList LGraphicsRectItem::overrideIds = NumList() << 98 << 123 << 124 << 125 << 94 << 99 << 96;
NumList LGraphicsSimpleTextItem::overrideIds = NumList() << 98 << 123 << 124 << 125 << 94 << 99 << 96;
NumList LIcon::overrideIds = NumList();
NumList LImage::overrideIds = NumList();
NumList LItemEditorFactory::overrideIds = NumList() << 215 << 216;
NumList LItemSelection::overrideIds = NumList();
NumList LItemSelectionRange::overrideIds = NumList();
NumList LLinearGradient::overrideIds = NumList();
NumList LListWidgetItem::overrideIds = NumList() << 217 << 218 << 219;
NumList LLocale::overrideIds = NumList();
NumList LMatrix::overrideIds = NumList();
NumList LMatrix4x4::overrideIds = NumList();
NumList LModelIndex::overrideIds = NumList();
NumList LPainter::overrideIds = NumList();
NumList LPainterPath::overrideIds = NumList();
NumList LPalette::overrideIds = NumList();
NumList LPen::overrideIds = NumList();
NumList LPicture::overrideIds = NumList() << 220;
NumList LPixmap::overrideIds = NumList();
NumList LPrinter::overrideIds = NumList();
NumList LQuaternion::overrideIds = NumList();
NumList LRadialGradient::overrideIds = NumList();
NumList LRegExp::overrideIds = NumList();
NumList LRegion::overrideIds = NumList();
NumList LSizePolicy::overrideIds = NumList();
NumList LSpacerItem::overrideIds = NumList() << 82 << 90 << 91 << 93 << 86 << 87 << 7 << 221;
NumList LStandardItem::overrideIds = NumList() << 217 << 218 << 223 << 96;
NumList LTableWidgetItem::overrideIds = NumList() << 217 << 218 << 219;
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
NumList LTreeWidgetItem::overrideIds = NumList() << 217 << 224 << 225;
NumList LUndoCommand::overrideIds = NumList() << 226 << 227 << 228 << 229;
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
        Q = new QObject* [111];
        N = new QObject* [110];
        Q[0] = new Q1; Q[1] = new Q2; Q[2] = new Q3; Q[3] = new Q4; Q[4] = new Q5; Q[5] = new Q6; Q[6] = new Q7; Q[7] = new Q8; Q[8] = new Q9; Q[9] = new Q10; Q[10] = new Q11; Q[11] = new Q12; Q[12] = new Q13; Q[13] = new Q14; Q[14] = new Q15; Q[15] = new Q16; Q[16] = new Q17; Q[17] = new Q18; Q[18] = new Q19; Q[19] = new Q20; Q[20] = new Q21; Q[21] = new Q22; Q[22] = new Q23; Q[23] = new Q24; Q[24] = new Q25; Q[25] = new Q26; Q[26] = new Q27; Q[27] = new Q28; Q[28] = new Q29; Q[29] = new Q30; Q[30] = new Q31; Q[31] = new Q32; Q[32] = new Q33; Q[33] = new Q34; Q[34] = new Q35; Q[35] = new Q36; Q[36] = new Q37; Q[37] = new Q38; Q[38] = new Q39; Q[39] = new Q40; Q[40] = new Q41; Q[41] = new Q42; Q[42] = new Q43; Q[43] = new Q44; Q[44] = new Q45; Q[45] = new Q46; Q[46] = new Q47; Q[47] = new Q48; Q[48] = new Q49; Q[49] = new Q50; Q[50] = new Q51; Q[51] = new Q52; Q[52] = new Q53; Q[53] = new Q54; Q[54] = new Q55; Q[55] = new Q56; Q[56] = new Q57; Q[57] = new Q58; Q[58] = new Q59; Q[59] = new Q60; Q[60] = new Q61; Q[61] = new Q62; Q[62] = new Q63; Q[63] = new Q64; Q[64] = new Q65; Q[65] = new Q66; Q[66] = new Q67; Q[67] = new Q68; Q[68] = new Q69; Q[69] = new Q70; Q[70] = new Q71; Q[71] = new Q72; Q[72] = new Q73; Q[73] = new Q74; Q[74] = new Q75; Q[75] = new Q76; Q[76] = new Q77; Q[77] = new Q78; Q[78] = new Q79; Q[79] = new Q80; Q[80] = new Q81; Q[81] = new Q82; Q[82] = new Q83; Q[83] = new Q84; Q[84] = new Q85; Q[85] = new Q86; Q[86] = new Q87; Q[87] = new Q88; Q[88] = new Q89; Q[89] = new Q90; Q[90] = new Q91; Q[91] = new Q92; Q[92] = new Q93; Q[93] = new Q94; Q[94] = new Q95; Q[95] = new Q96; Q[96] = new Q97; Q[97] = new Q98; Q[98] = new Q99; Q[99] = new Q100; Q[100] = new Q101; Q[101] = new Q102; Q[102] = new Q103; Q[103] = new Q104; Q[104] = new Q105; Q[105] = new Q106; Q[106] = new Q107; Q[107] = new Q108; Q[108] = new Q109; Q[109] = new Q110; Q[110] = new Q111; 
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
        q_names["QButtonGroup"] = 15;
        q_names["QCalendarWidget"] = 16;
        q_names["QCheckBox"] = 17;
        q_names["QClipboard"] = 18;
        q_names["QColumnView"] = 19;
        q_names["QComboBox"] = 20;
        q_names["QCommandLinkButton"] = 21;
        q_names["QCompleter"] = 22;
        q_names["QCoreApplication"] = 23;
        q_names["QDateEdit"] = 24;
        q_names["QDateTimeEdit"] = 25;
        q_names["QDesktopWidget"] = 26;
        q_names["QDial"] = 27;
        q_names["QDialog"] = 28;
        q_names["QDockWidget"] = 29;
        q_names["QDoubleSpinBox"] = 30;
        q_names["QDrag"] = 31;
        q_names["QErrorMessage"] = 32;
        q_names["QFileDialog"] = 33;
        q_names["QFontComboBox"] = 34;
        q_names["QFontDialog"] = 35;
        q_names["QFormLayout"] = 36;
        q_names["QFrame"] = 37;
        q_names["QGraphicsEffect"] = 38;
        q_names["QGraphicsObject"] = 39;
        q_names["QGraphicsProxyWidget"] = 40;
        q_names["QGraphicsScene"] = 41;
        q_names["QGraphicsTextItem"] = 42;
        q_names["QGraphicsView"] = 43;
        q_names["QGraphicsWidget"] = 44;
        q_names["QGridLayout"] = 45;
        q_names["QGroupBox"] = 46;
        q_names["QHBoxLayout"] = 47;
        q_names["QHeaderView"] = 48;
        q_names["QInputContext"] = 49;
        q_names["QInputDialog"] = 50;
        q_names["QItemDelegate"] = 51;
        q_names["QItemSelectionModel"] = 52;
        q_names["QLCDNumber"] = 53;
        q_names["QLabel"] = 54;
        q_names["QLayout"] = 55;
        q_names["QLineEdit"] = 56;
        q_names["QListView"] = 57;
        q_names["QListWidget"] = 58;
        q_names["QMainWindow"] = 59;
        q_names["QMenu"] = 60;
        q_names["QMenuBar"] = 61;
        q_names["QMessageBox"] = 62;
        q_names["QMimeData"] = 63;
        q_names["QMovie"] = 64;
        q_names["QObject"] = 65;
        q_names["QPlainTextEdit"] = 66;
        q_names["QProgressBar"] = 67;
        q_names["QPushButton"] = 68;
        q_names["QRadioButton"] = 69;
        q_names["QScrollArea"] = 70;
        q_names["QScrollBar"] = 71;
        q_names["QSessionManager"] = 72;
        q_names["QSlider"] = 73;
        q_names["QSpinBox"] = 74;
        q_names["QSplashScreen"] = 75;
        q_names["QSplitter"] = 76;
        q_names["QStackedLayout"] = 77;
        q_names["QStackedWidget"] = 78;
        q_names["QStandardItemModel"] = 79;
        q_names["QStatusBar"] = 80;
        q_names["QStringListModel"] = 81;
        q_names["QTabBar"] = 82;
        q_names["QTabWidget"] = 83;
        q_names["QTableView"] = 84;
        q_names["QTableWidget"] = 85;
        q_names["QTextBlockGroup"] = 86;
        q_names["QTextBrowser"] = 87;
        q_names["QTextDocument"] = 88;
        q_names["QTextEdit"] = 89;
        q_names["QTextFrame"] = 90;
        q_names["QTextList"] = 91;
        q_names["QTextObject"] = 92;
        q_names["QTextTable"] = 93;
        q_names["QThread"] = 94;
        q_names["QTimeEdit"] = 95;
        q_names["QTimer"] = 96;
        q_names["QToolBar"] = 97;
        q_names["QToolBox"] = 98;
        q_names["QToolButton"] = 99;
        q_names["QTranslator"] = 100;
        q_names["QTreeView"] = 101;
        q_names["QTreeWidget"] = 102;
        q_names["QUndoGroup"] = 103;
        q_names["QUndoStack"] = 104;
        q_names["QUndoView"] = 105;
        q_names["QVBoxLayout"] = 106;
        q_names["QValidator"] = 107;
        q_names["QWidget"] = 108;
        q_names["QWizard"] = 109;
        q_names["QWizardPage"] = 110;
        q_names["QWorkspace"] = 111;
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
        override_function_ids["minimumSizeHint()"] = 6;
        override_function_ids["sizeHint()"] = 7;
        override_function_ids["paintCell(QPainter*,QRect,QDate)"] = 8;
        override_function_ids["heightForWidth(int)"] = 9;
        override_function_ids["inputMethodQuery(Qt::InputMethodQuery)"] = 10;
        override_function_ids["actionEvent(QActionEvent*)"] = 11;
        override_function_ids["changeEvent(QEvent*)"] = 12;
        override_function_ids["closeEvent(QCloseEvent*)"] = 13;
        override_function_ids["contextMenuEvent(QContextMenuEvent*)"] = 14;
        override_function_ids["dragEnterEvent(QDragEnterEvent*)"] = 15;
        override_function_ids["dragLeaveEvent(QDragLeaveEvent*)"] = 16;
        override_function_ids["dragMoveEvent(QDragMoveEvent*)"] = 17;
        override_function_ids["dropEvent(QDropEvent*)"] = 18;
        override_function_ids["enterEvent(QEvent*)"] = 19;
        override_function_ids["focusInEvent(QFocusEvent*)"] = 20;
        override_function_ids["focusNextPrevChild(bool)"] = 21;
        override_function_ids["focusOutEvent(QFocusEvent*)"] = 22;
        override_function_ids["hideEvent(QHideEvent*)"] = 23;
        override_function_ids["inputMethodEvent(QInputMethodEvent*)"] = 24;
        override_function_ids["keyPressEvent(QKeyEvent*)"] = 25;
        override_function_ids["keyReleaseEvent(QKeyEvent*)"] = 26;
        override_function_ids["leaveEvent(QEvent*)"] = 27;
        override_function_ids["mouseDoubleClickEvent(QMouseEvent*)"] = 28;
        override_function_ids["mouseMoveEvent(QMouseEvent*)"] = 29;
        override_function_ids["mousePressEvent(QMouseEvent*)"] = 30;
        override_function_ids["mouseReleaseEvent(QMouseEvent*)"] = 31;
        override_function_ids["moveEvent(QMoveEvent*)"] = 32;
        override_function_ids["paintEvent(QPaintEvent*)"] = 33;
        override_function_ids["resizeEvent(QResizeEvent*)"] = 34;
        override_function_ids["showEvent(QShowEvent*)"] = 35;
        override_function_ids["tabletEvent(QTabletEvent*)"] = 36;
        override_function_ids["wheelEvent(QWheelEvent*)"] = 37;
        override_function_ids["checkStateSet()"] = 38;
        override_function_ids["hitButton(QPoint)"] = 39;
        override_function_ids["nextCheckState()"] = 40;
        override_function_ids["indexAt(QPoint)"] = 41;
        override_function_ids["scrollTo(QModelIndex,ScrollHint)"] = 42;
        override_function_ids["selectAll()"] = 43;
        override_function_ids["setModel(QAbstractItemModel*)"] = 44;
        override_function_ids["setRootIndex(QModelIndex)"] = 45;
        override_function_ids["setSelectionModel(QItemSelectionModel*)"] = 46;
        override_function_ids["visualRect(QModelIndex)"] = 47;
        override_function_ids["createColumn(QModelIndex)"] = 48;
        override_function_ids["keyboardSearch(QString)"] = 49;
        override_function_ids["sizeHintForColumn(int)"] = 50;
        override_function_ids["sizeHintForRow(int)"] = 51;
        override_function_ids["edit(QModelIndex,EditTrigger,QEvent*)"] = 52;
        override_function_ids["horizontalOffset()"] = 53;
        override_function_ids["isIndexHidden(QModelIndex)"] = 54;
        override_function_ids["moveCursor(CursorAction,Qt::KeyboardModifiers)"] = 55;
        override_function_ids["selectedIndexes()"] = 56;
        override_function_ids["selectionCommand(QModelIndex,QEvent*)"] = 57;
        override_function_ids["setSelection(QRect,QItemSelectionModel::SelectionFlags)"] = 58;
        override_function_ids["startDrag(Qt::DropActions)"] = 59;
        override_function_ids["verticalOffset()"] = 60;
        override_function_ids["viewOptions()"] = 61;
        override_function_ids["visualRegionForSelection(QItemSelection)"] = 62;
        override_function_ids["scrollContentsBy(int,int)"] = 63;
        override_function_ids["viewportEvent(QEvent*)"] = 64;
        override_function_ids["hidePopup()"] = 65;
        override_function_ids["showPopup()"] = 66;
        override_function_ids["pathFromIndex(QModelIndex)"] = 67;
        override_function_ids["splitPath(QString)"] = 68;
        override_function_ids["clear()"] = 69;
        override_function_ids["stepBy(int)"] = 70;
        override_function_ids["dateTimeFromText(QString)"] = 71;
        override_function_ids["textFromDateTime(QDateTime)"] = 72;
        override_function_ids["fixup(QString)"] = 73;
        override_function_ids["validate(QString,int)"] = 74;
        override_function_ids["stepEnabled()"] = 75;
        override_function_ids["sliderChange(SliderChange)"] = 76;
        override_function_ids["setVisible(bool)"] = 77;
        override_function_ids["textFromValue(double)"] = 78;
        override_function_ids["valueFromText(QString)"] = 79;
        override_function_ids["addItem(QLayoutItem*)"] = 80;
        override_function_ids["count()"] = 81;
        override_function_ids["expandingDirections()"] = 82;
        override_function_ids["hasHeightForWidth()"] = 83;
        override_function_ids["invalidate()"] = 84;
        override_function_ids["itemAt(int)"] = 85;
        override_function_ids["minimumSize()"] = 86;
        override_function_ids["setGeometry(QRect)"] = 87;
        override_function_ids["takeAt(int)"] = 88;
        override_function_ids["indexOf(QWidget*)"] = 89;
        override_function_ids["geometry()"] = 90;
        override_function_ids["isEmpty()"] = 91;
        override_function_ids["layout()"] = 92;
        override_function_ids["maximumSize()"] = 93;
        override_function_ids["paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 94;
        override_function_ids["setGeometry(QRectF)"] = 95;
        override_function_ids["type()"] = 96;
        override_function_ids["paintWindowFrame(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"] = 97;
        override_function_ids["boundingRect()"] = 98;
        override_function_ids["shape()"] = 99;
        override_function_ids["grabKeyboardEvent(QEvent*)"] = 100;
        override_function_ids["grabMouseEvent(QEvent*)"] = 101;
        override_function_ids["initStyleOption(QStyleOption*)"] = 102;
        override_function_ids["moveEvent(QGraphicsSceneMoveEvent*)"] = 103;
        override_function_ids["polishEvent()"] = 104;
        override_function_ids["resizeEvent(QGraphicsSceneResizeEvent*)"] = 105;
        override_function_ids["ungrabKeyboardEvent(QEvent*)"] = 106;
        override_function_ids["ungrabMouseEvent(QEvent*)"] = 107;
        override_function_ids["windowFrameEvent(QEvent*)"] = 108;
        override_function_ids["windowFrameSectionAt(QPointF)"] = 109;
        override_function_ids["contextMenuEvent(QGraphicsSceneContextMenuEvent*)"] = 110;
        override_function_ids["dragEnterEvent(QGraphicsSceneDragDropEvent*)"] = 111;
        override_function_ids["dragLeaveEvent(QGraphicsSceneDragDropEvent*)"] = 112;
        override_function_ids["dragMoveEvent(QGraphicsSceneDragDropEvent*)"] = 113;
        override_function_ids["drawBackground(QPainter*,QRectF)"] = 114;
        override_function_ids["drawForeground(QPainter*,QRectF)"] = 115;
        override_function_ids["dropEvent(QGraphicsSceneDragDropEvent*)"] = 116;
        override_function_ids["helpEvent(QGraphicsSceneHelpEvent*)"] = 117;
        override_function_ids["mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)"] = 118;
        override_function_ids["mouseMoveEvent(QGraphicsSceneMouseEvent*)"] = 119;
        override_function_ids["mousePressEvent(QGraphicsSceneMouseEvent*)"] = 120;
        override_function_ids["mouseReleaseEvent(QGraphicsSceneMouseEvent*)"] = 121;
        override_function_ids["wheelEvent(QGraphicsSceneWheelEvent*)"] = 122;
        override_function_ids["contains(QPointF)"] = 123;
        override_function_ids["isObscuredBy(QGraphicsItem*)"] = 124;
        override_function_ids["opaqueArea()"] = 125;
        override_function_ids["minimumHeightForWidth(int)"] = 126;
        override_function_ids["done(int)"] = 127;
        override_function_ids["createEditor(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 128;
        override_function_ids["paint(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 129;
        override_function_ids["setEditorData(QWidget*,QModelIndex)"] = 130;
        override_function_ids["setModelData(QWidget*,QAbstractItemModel*,QModelIndex)"] = 131;
        override_function_ids["sizeHint(QStyleOptionViewItem,QModelIndex)"] = 132;
        override_function_ids["updateEditorGeometry(QWidget*,QStyleOptionViewItem,QModelIndex)"] = 133;
        override_function_ids["drawCheck(QPainter*,QStyleOptionViewItem,QRect,Qt::CheckState)"] = 134;
        override_function_ids["drawDecoration(QPainter*,QStyleOptionViewItem,QRect,QPixmap)"] = 135;
        override_function_ids["drawDisplay(QPainter*,QStyleOptionViewItem,QRect,QString)"] = 136;
        override_function_ids["drawFocus(QPainter*,QStyleOptionViewItem,QRect)"] = 137;
        override_function_ids["editorEvent(QEvent*,QAbstractItemModel*,QStyleOptionViewItem,QModelIndex)"] = 138;
        override_function_ids["dropMimeData(int,QMimeData*,Qt::DropAction)"] = 139;
        override_function_ids["mimeData(QList<QListWidgetItem*>)"] = 140;
        override_function_ids["mimeTypes()"] = 141;
        override_function_ids["supportedDropActions()"] = 142;
        override_function_ids["createPopupMenu()"] = 143;
        override_function_ids["formats()"] = 144;
        override_function_ids["hasFormat(QString)"] = 145;
        override_function_ids["retrieveData(QString,QVariant::Type)"] = 146;
        override_function_ids["loadResource(int,QUrl)"] = 147;
        override_function_ids["canInsertFromMimeData(QMimeData*)"] = 148;
        override_function_ids["createMimeDataFromSelection()"] = 149;
        override_function_ids["insertFromMimeData(QMimeData*)"] = 150;
        override_function_ids["text()"] = 151;
        override_function_ids["textFromValue(int)"] = 152;
        override_function_ids["drawContents(QPainter*)"] = 153;
        override_function_ids["columnCount(QModelIndex)"] = 154;
        override_function_ids["data(QModelIndex,int)"] = 155;
        override_function_ids["dropMimeData(QMimeData*,Qt::DropAction,int,int,QModelIndex)"] = 156;
        override_function_ids["flags(QModelIndex)"] = 157;
        override_function_ids["hasChildren(QModelIndex)"] = 158;
        override_function_ids["headerData(int,Qt::Orientation,int)"] = 159;
        override_function_ids["index(int,int,QModelIndex)"] = 160;
        override_function_ids["insertColumns(int,int,QModelIndex)"] = 161;
        override_function_ids["insertRows(int,int,QModelIndex)"] = 162;
        override_function_ids["mimeData(QModelIndexList)"] = 163;
        override_function_ids["parent(QModelIndex)"] = 164;
        override_function_ids["removeColumns(int,int,QModelIndex)"] = 165;
        override_function_ids["removeRows(int,int,QModelIndex)"] = 166;
        override_function_ids["rowCount(QModelIndex)"] = 167;
        override_function_ids["setData(QModelIndex,QVariant,int)"] = 168;
        override_function_ids["setHeaderData(int,Qt::Orientation,QVariant,int)"] = 169;
        override_function_ids["sort(int,Qt::SortOrder)"] = 170;
        override_function_ids["buddy(QModelIndex)"] = 171;
        override_function_ids["canFetchMore(QModelIndex)"] = 172;
        override_function_ids["fetchMore(QModelIndex)"] = 173;
        override_function_ids["match(QModelIndex,int,QVariant,int,Qt::MatchFlags)"] = 174;
        override_function_ids["span(QModelIndex)"] = 175;
        override_function_ids["tabInserted(int)"] = 176;
        override_function_ids["tabLayoutChange()"] = 177;
        override_function_ids["tabRemoved(int)"] = 178;
        override_function_ids["tabSizeHint(int)"] = 179;
        override_function_ids["dropMimeData(int,int,QMimeData*,Qt::DropAction)"] = 180;
        override_function_ids["mimeData(QList<QTableWidgetItem*>)"] = 181;
        override_function_ids["blockFormatChanged(QTextBlock)"] = 182;
        override_function_ids["blockInserted(QTextBlock)"] = 183;
        override_function_ids["blockRemoved(QTextBlock)"] = 184;
        override_function_ids["createObject(QTextFormat)"] = 185;
        override_function_ids["run()"] = 186;
        override_function_ids["itemInserted(int)"] = 187;
        override_function_ids["itemRemoved(int)"] = 188;
        override_function_ids["translate(const char*,const char*,const char*)"] = 189;
        override_function_ids["dataChanged(QModelIndex,QModelIndex)"] = 190;
        override_function_ids["reset()"] = 191;
        override_function_ids["drawBranches(QPainter*,QRect,QModelIndex)"] = 192;
        override_function_ids["drawRow(QPainter*,QStyleOptionViewItem,QModelIndex)"] = 193;
        override_function_ids["dropMimeData(QTreeWidgetItem*,int,QMimeData*,Qt::DropAction)"] = 194;
        override_function_ids["mimeData(QList<QTreeWidgetItem*>)"] = 195;
        override_function_ids["nextId()"] = 196;
        override_function_ids["validateCurrentPage()"] = 197;
        override_function_ids["cleanupPage(int)"] = 198;
        override_function_ids["initializePage(int)"] = 199;
        override_function_ids["cleanupPage()"] = 200;
        override_function_ids["initializePage()"] = 201;
        override_function_ids["isComplete()"] = 202;
        override_function_ids["validatePage()"] = 203;
        override_function_ids["icon(IconType)"] = 204;
        override_function_ids["advance(int)"] = 205;
        override_function_ids["collidesWithItem(QGraphicsItem*,Qt::ItemSelectionMode)"] = 206;
        override_function_ids["collidesWithPath(QPainterPath,Qt::ItemSelectionMode)"] = 207;
        override_function_ids["hoverEnterEvent(QGraphicsSceneHoverEvent*)"] = 208;
        override_function_ids["hoverLeaveEvent(QGraphicsSceneHoverEvent*)"] = 209;
        override_function_ids["hoverMoveEvent(QGraphicsSceneHoverEvent*)"] = 210;
        override_function_ids["itemChange(GraphicsItemChange,QVariant)"] = 211;
        override_function_ids["sceneEvent(QEvent*)"] = 212;
        override_function_ids["sceneEventFilter(QGraphicsItem*,QEvent*)"] = 213;
        override_function_ids["metric(PaintDeviceMetric)"] = 214;
        override_function_ids["createEditor(QVariant::Type,QWidget*)"] = 215;
        override_function_ids["valuePropertyName(QVariant::Type)"] = 216;
        override_function_ids["clone()"] = 217;
        override_function_ids["data(int)"] = 218;
        override_function_ids["setData(int,QVariant)"] = 219;
        override_function_ids["setData(const char*,uint)"] = 220;
        override_function_ids["spacerItem()"] = 221;
        override_function_ids["widget()"] = 222;
        override_function_ids["setData(QVariant,int)"] = 223;
        override_function_ids["data(int,int)"] = 224;
        override_function_ids["setData(int,int,QVariant)"] = 225;
        override_function_ids["id()"] = 226;
        override_function_ids["mergeWith(QUndoCommand*)"] = 227;
        override_function_ids["redo()"] = 228;
        override_function_ids["undo()"] = 229;
        override_arg_types = new char** [229];
        { static char* s[] = { 0, "QChildEvent*", 0 }; override_arg_types[0] = s; }
        { static char* s[] = { 0, "const char*", 0 }; override_arg_types[1] = s; }
        { static char* s[] = { 0, "QEvent*", 0 }; override_arg_types[2] = s; }
        { static char* s[] = { 0, "const char*", 0 }; override_arg_types[3] = s; }
        { static char* s[] = { 0, "QTimerEvent*", 0 }; override_arg_types[4] = s; }
        { static char* s[] = { "QSize", 0 }; override_arg_types[5] = s; }
        { static char* s[] = { "QSize", 0 }; override_arg_types[6] = s; }
        { static char* s[] = { 0, "QPainter*", "QRect", "QDate", 0 }; override_arg_types[7] = s; }
        { static char* s[] = { "int", "int", 0 }; override_arg_types[8] = s; }
        { static char* s[] = { "QVariant", "Qt::InputMethodQuery", 0 }; override_arg_types[9] = s; }
        { static char* s[] = { 0, "QActionEvent*", 0 }; override_arg_types[10] = s; }
        { static char* s[] = { 0, "QEvent*", 0 }; override_arg_types[11] = s; }
        { static char* s[] = { 0, "QCloseEvent*", 0 }; override_arg_types[12] = s; }
        { static char* s[] = { 0, "QContextMenuEvent*", 0 }; override_arg_types[13] = s; }
        { static char* s[] = { 0, "QDragEnterEvent*", 0 }; override_arg_types[14] = s; }
        { static char* s[] = { 0, "QDragLeaveEvent*", 0 }; override_arg_types[15] = s; }
        { static char* s[] = { 0, "QDragMoveEvent*", 0 }; override_arg_types[16] = s; }
        { static char* s[] = { 0, "QDropEvent*", 0 }; override_arg_types[17] = s; }
        { static char* s[] = { 0, "QEvent*", 0 }; override_arg_types[18] = s; }
        { static char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[19] = s; }
        { static char* s[] = { "bool", "bool", 0 }; override_arg_types[20] = s; }
        { static char* s[] = { 0, "QFocusEvent*", 0 }; override_arg_types[21] = s; }
        { static char* s[] = { 0, "QHideEvent*", 0 }; override_arg_types[22] = s; }
        { static char* s[] = { 0, "QInputMethodEvent*", 0 }; override_arg_types[23] = s; }
        { static char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[24] = s; }
        { static char* s[] = { 0, "QKeyEvent*", 0 }; override_arg_types[25] = s; }
        { static char* s[] = { 0, "QEvent*", 0 }; override_arg_types[26] = s; }
        { static char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[27] = s; }
        { static char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[28] = s; }
        { static char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[29] = s; }
        { static char* s[] = { 0, "QMouseEvent*", 0 }; override_arg_types[30] = s; }
        { static char* s[] = { 0, "QMoveEvent*", 0 }; override_arg_types[31] = s; }
        { static char* s[] = { 0, "QPaintEvent*", 0 }; override_arg_types[32] = s; }
        { static char* s[] = { 0, "QResizeEvent*", 0 }; override_arg_types[33] = s; }
        { static char* s[] = { 0, "QShowEvent*", 0 }; override_arg_types[34] = s; }
        { static char* s[] = { 0, "QTabletEvent*", 0 }; override_arg_types[35] = s; }
        { static char* s[] = { 0, "QWheelEvent*", 0 }; override_arg_types[36] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[37] = s; }
        { static char* s[] = { "bool", "QPoint", 0 }; override_arg_types[38] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[39] = s; }
        { static char* s[] = { "QModelIndex", "QPoint", 0 }; override_arg_types[40] = s; }
        { static char* s[] = { 0, "QModelIndex", "ScrollHint", 0 }; override_arg_types[41] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[42] = s; }
        { static char* s[] = { 0, "QAbstractItemModel*", 0 }; override_arg_types[43] = s; }
        { static char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[44] = s; }
        { static char* s[] = { 0, "QItemSelectionModel*", 0 }; override_arg_types[45] = s; }
        { static char* s[] = { "QRect", "QModelIndex", 0 }; override_arg_types[46] = s; }
        { static char* s[] = { "QAbstractItemView*", "QModelIndex", 0 }; override_arg_types[47] = s; }
        { static char* s[] = { 0, "QString", 0 }; override_arg_types[48] = s; }
        { static char* s[] = { "int", "int", 0 }; override_arg_types[49] = s; }
        { static char* s[] = { "int", "int", 0 }; override_arg_types[50] = s; }
        { static char* s[] = { "bool", "QModelIndex", "EditTrigger", "QEvent*", 0 }; override_arg_types[51] = s; }
        { static char* s[] = { "int", 0 }; override_arg_types[52] = s; }
        { static char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[53] = s; }
        { static char* s[] = { "QModelIndex", "CursorAction", "Qt::KeyboardModifiers", 0 }; override_arg_types[54] = s; }
        { static char* s[] = { "QModelIndexList", 0 }; override_arg_types[55] = s; }
        { static char* s[] = { "QItemSelectionModel::SelectionFlags", "QModelIndex", "QEvent*", 0 }; override_arg_types[56] = s; }
        { static char* s[] = { 0, "QRect", "QItemSelectionModel::SelectionFlags", 0 }; override_arg_types[57] = s; }
        { static char* s[] = { 0, "Qt::DropActions", 0 }; override_arg_types[58] = s; }
        { static char* s[] = { "int", 0 }; override_arg_types[59] = s; }
        { static char* s[] = { "QStyleOptionViewItem", 0 }; override_arg_types[60] = s; }
        { static char* s[] = { "QRegion", "QItemSelection", 0 }; override_arg_types[61] = s; }
        { static char* s[] = { 0, "int", "int", 0 }; override_arg_types[62] = s; }
        { static char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[63] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[64] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[65] = s; }
        { static char* s[] = { "QString", "QModelIndex", 0 }; override_arg_types[66] = s; }
        { static char* s[] = { "QStringList", "QString", 0 }; override_arg_types[67] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[68] = s; }
        { static char* s[] = { 0, "int", 0 }; override_arg_types[69] = s; }
        { static char* s[] = { "QDateTime", "QString", 0 }; override_arg_types[70] = s; }
        { static char* s[] = { "QString", "QDateTime", 0 }; override_arg_types[71] = s; }
        { static char* s[] = { 0, "QString", 0 }; override_arg_types[72] = s; }
        { static char* s[] = { "QValidator::State", "QString", "int", 0 }; override_arg_types[73] = s; }
        { static char* s[] = { "StepEnabled", 0 }; override_arg_types[74] = s; }
        { static char* s[] = { 0, "SliderChange", 0 }; override_arg_types[75] = s; }
        { static char* s[] = { 0, "bool", 0 }; override_arg_types[76] = s; }
        { static char* s[] = { "QString", "double", 0 }; override_arg_types[77] = s; }
        { static char* s[] = { "double", "QString", 0 }; override_arg_types[78] = s; }
        { static char* s[] = { 0, "QLayoutItem*", 0 }; override_arg_types[79] = s; }
        { static char* s[] = { "int", 0 }; override_arg_types[80] = s; }
        { static char* s[] = { "Qt::Orientations", 0 }; override_arg_types[81] = s; }
        { static char* s[] = { "bool", 0 }; override_arg_types[82] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[83] = s; }
        { static char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[84] = s; }
        { static char* s[] = { "QSize", 0 }; override_arg_types[85] = s; }
        { static char* s[] = { 0, "QRect", 0 }; override_arg_types[86] = s; }
        { static char* s[] = { "QLayoutItem*", "int", 0 }; override_arg_types[87] = s; }
        { static char* s[] = { "int", "QWidget*", 0 }; override_arg_types[88] = s; }
        { static char* s[] = { "QRect", 0 }; override_arg_types[89] = s; }
        { static char* s[] = { "bool", 0 }; override_arg_types[90] = s; }
        { static char* s[] = { "QLayout*", 0 }; override_arg_types[91] = s; }
        { static char* s[] = { "QSize", 0 }; override_arg_types[92] = s; }
        { static char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[93] = s; }
        { static char* s[] = { 0, "QRectF", 0 }; override_arg_types[94] = s; }
        { static char* s[] = { "int", 0 }; override_arg_types[95] = s; }
        { static char* s[] = { 0, "QPainter*", "QStyleOptionGraphicsItem*", "QWidget*", 0 }; override_arg_types[96] = s; }
        { static char* s[] = { "QRectF", 0 }; override_arg_types[97] = s; }
        { static char* s[] = { "QPainterPath", 0 }; override_arg_types[98] = s; }
        { static char* s[] = { 0, "QEvent*", 0 }; override_arg_types[99] = s; }
        { static char* s[] = { 0, "QEvent*", 0 }; override_arg_types[100] = s; }
        { static char* s[] = { 0, "QStyleOption*", 0 }; override_arg_types[101] = s; }
        { static char* s[] = { 0, "QGraphicsSceneMoveEvent*", 0 }; override_arg_types[102] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[103] = s; }
        { static char* s[] = { 0, "QGraphicsSceneResizeEvent*", 0 }; override_arg_types[104] = s; }
        { static char* s[] = { 0, "QEvent*", 0 }; override_arg_types[105] = s; }
        { static char* s[] = { 0, "QEvent*", 0 }; override_arg_types[106] = s; }
        { static char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[107] = s; }
        { static char* s[] = { "Qt::WindowFrameSection", "QPointF", 0 }; override_arg_types[108] = s; }
        { static char* s[] = { 0, "QGraphicsSceneContextMenuEvent*", 0 }; override_arg_types[109] = s; }
        { static char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[110] = s; }
        { static char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[111] = s; }
        { static char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[112] = s; }
        { static char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[113] = s; }
        { static char* s[] = { 0, "QPainter*", "QRectF", 0 }; override_arg_types[114] = s; }
        { static char* s[] = { 0, "QGraphicsSceneDragDropEvent*", 0 }; override_arg_types[115] = s; }
        { static char* s[] = { 0, "QGraphicsSceneHelpEvent*", 0 }; override_arg_types[116] = s; }
        { static char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[117] = s; }
        { static char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[118] = s; }
        { static char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[119] = s; }
        { static char* s[] = { 0, "QGraphicsSceneMouseEvent*", 0 }; override_arg_types[120] = s; }
        { static char* s[] = { 0, "QGraphicsSceneWheelEvent*", 0 }; override_arg_types[121] = s; }
        { static char* s[] = { "bool", "QPointF", 0 }; override_arg_types[122] = s; }
        { static char* s[] = { "bool", "QGraphicsItem*", 0 }; override_arg_types[123] = s; }
        { static char* s[] = { "QPainterPath", 0 }; override_arg_types[124] = s; }
        { static char* s[] = { "int", "int", 0 }; override_arg_types[125] = s; }
        { static char* s[] = { 0, "int", 0 }; override_arg_types[126] = s; }
        { static char* s[] = { "QWidget*", "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[127] = s; }
        { static char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[128] = s; }
        { static char* s[] = { 0, "QWidget*", "QModelIndex", 0 }; override_arg_types[129] = s; }
        { static char* s[] = { 0, "QWidget*", "QAbstractItemModel*", "QModelIndex", 0 }; override_arg_types[130] = s; }
        { static char* s[] = { "QSize", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[131] = s; }
        { static char* s[] = { 0, "QWidget*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[132] = s; }
        { static char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "Qt::CheckState", 0 }; override_arg_types[133] = s; }
        { static char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QPixmap", 0 }; override_arg_types[134] = s; }
        { static char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", "QString", 0 }; override_arg_types[135] = s; }
        { static char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QRect", 0 }; override_arg_types[136] = s; }
        { static char* s[] = { "bool", "QEvent*", "QAbstractItemModel*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[137] = s; }
        { static char* s[] = { "bool", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[138] = s; }
        { static char* s[] = { "QMimeData*", "QList<QListWidgetItem*>", 0 }; override_arg_types[139] = s; }
        { static char* s[] = { "QStringList", 0 }; override_arg_types[140] = s; }
        { static char* s[] = { "Qt::DropActions", 0 }; override_arg_types[141] = s; }
        { static char* s[] = { "QMenu*", 0 }; override_arg_types[142] = s; }
        { static char* s[] = { "QStringList", 0 }; override_arg_types[143] = s; }
        { static char* s[] = { "bool", "QString", 0 }; override_arg_types[144] = s; }
        { static char* s[] = { "QVariant", "QString", "QVariant::Type", 0 }; override_arg_types[145] = s; }
        { static char* s[] = { "QVariant", "int", "QUrl", 0 }; override_arg_types[146] = s; }
        { static char* s[] = { "bool", "QMimeData*", 0 }; override_arg_types[147] = s; }
        { static char* s[] = { "QMimeData*", 0 }; override_arg_types[148] = s; }
        { static char* s[] = { 0, "QMimeData*", 0 }; override_arg_types[149] = s; }
        { static char* s[] = { "QString", 0 }; override_arg_types[150] = s; }
        { static char* s[] = { "QString", "int", 0 }; override_arg_types[151] = s; }
        { static char* s[] = { 0, "QPainter*", 0 }; override_arg_types[152] = s; }
        { static char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[153] = s; }
        { static char* s[] = { "QVariant", "QModelIndex", "int", 0 }; override_arg_types[154] = s; }
        { static char* s[] = { "bool", "QMimeData*", "Qt::DropAction", "int", "int", "QModelIndex", 0 }; override_arg_types[155] = s; }
        { static char* s[] = { "Qt::ItemFlags", "QModelIndex", 0 }; override_arg_types[156] = s; }
        { static char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[157] = s; }
        { static char* s[] = { "QVariant", "int", "Qt::Orientation", "int", 0 }; override_arg_types[158] = s; }
        { static char* s[] = { "QModelIndex", "int", "int", "QModelIndex", 0 }; override_arg_types[159] = s; }
        { static char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[160] = s; }
        { static char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[161] = s; }
        { static char* s[] = { "QMimeData*", "QModelIndexList", 0 }; override_arg_types[162] = s; }
        { static char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[163] = s; }
        { static char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[164] = s; }
        { static char* s[] = { "bool", "int", "int", "QModelIndex", 0 }; override_arg_types[165] = s; }
        { static char* s[] = { "int", "QModelIndex", 0 }; override_arg_types[166] = s; }
        { static char* s[] = { "bool", "QModelIndex", "QVariant", "int", 0 }; override_arg_types[167] = s; }
        { static char* s[] = { "bool", "int", "Qt::Orientation", "QVariant", "int", 0 }; override_arg_types[168] = s; }
        { static char* s[] = { 0, "int", "Qt::SortOrder", 0 }; override_arg_types[169] = s; }
        { static char* s[] = { "QModelIndex", "QModelIndex", 0 }; override_arg_types[170] = s; }
        { static char* s[] = { "bool", "QModelIndex", 0 }; override_arg_types[171] = s; }
        { static char* s[] = { 0, "QModelIndex", 0 }; override_arg_types[172] = s; }
        { static char* s[] = { "QModelIndexList", "QModelIndex", "int", "QVariant", "int", "Qt::MatchFlags", 0 }; override_arg_types[173] = s; }
        { static char* s[] = { "QSize", "QModelIndex", 0 }; override_arg_types[174] = s; }
        { static char* s[] = { 0, "int", 0 }; override_arg_types[175] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[176] = s; }
        { static char* s[] = { 0, "int", 0 }; override_arg_types[177] = s; }
        { static char* s[] = { "QSize", "int", 0 }; override_arg_types[178] = s; }
        { static char* s[] = { "bool", "int", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[179] = s; }
        { static char* s[] = { "QMimeData*", "QList<QTableWidgetItem*>", 0 }; override_arg_types[180] = s; }
        { static char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[181] = s; }
        { static char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[182] = s; }
        { static char* s[] = { 0, "QTextBlock", 0 }; override_arg_types[183] = s; }
        { static char* s[] = { "QTextObject*", "QTextFormat", 0 }; override_arg_types[184] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[185] = s; }
        { static char* s[] = { 0, "int", 0 }; override_arg_types[186] = s; }
        { static char* s[] = { 0, "int", 0 }; override_arg_types[187] = s; }
        { static char* s[] = { "QString", "const char*", "const char*", "const char*", 0 }; override_arg_types[188] = s; }
        { static char* s[] = { 0, "QModelIndex", "QModelIndex", 0 }; override_arg_types[189] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[190] = s; }
        { static char* s[] = { 0, "QPainter*", "QRect", "QModelIndex", 0 }; override_arg_types[191] = s; }
        { static char* s[] = { 0, "QPainter*", "QStyleOptionViewItem", "QModelIndex", 0 }; override_arg_types[192] = s; }
        { static char* s[] = { "bool", "QTreeWidgetItem*", "int", "QMimeData*", "Qt::DropAction", 0 }; override_arg_types[193] = s; }
        { static char* s[] = { "QMimeData*", "QList<QTreeWidgetItem*>", 0 }; override_arg_types[194] = s; }
        { static char* s[] = { "int", 0 }; override_arg_types[195] = s; }
        { static char* s[] = { "bool", 0 }; override_arg_types[196] = s; }
        { static char* s[] = { 0, "int", 0 }; override_arg_types[197] = s; }
        { static char* s[] = { 0, "int", 0 }; override_arg_types[198] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[199] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[200] = s; }
        { static char* s[] = { "bool", 0 }; override_arg_types[201] = s; }
        { static char* s[] = { "bool", 0 }; override_arg_types[202] = s; }
        { static char* s[] = { "QIcon", "IconType", 0 }; override_arg_types[203] = s; }
        { static char* s[] = { 0, "int", 0 }; override_arg_types[204] = s; }
        { static char* s[] = { "bool", "QGraphicsItem*", "Qt::ItemSelectionMode", 0 }; override_arg_types[205] = s; }
        { static char* s[] = { "bool", "QPainterPath", "Qt::ItemSelectionMode", 0 }; override_arg_types[206] = s; }
        { static char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[207] = s; }
        { static char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[208] = s; }
        { static char* s[] = { 0, "QGraphicsSceneHoverEvent*", 0 }; override_arg_types[209] = s; }
        { static char* s[] = { "QVariant", "GraphicsItemChange", "QVariant", 0 }; override_arg_types[210] = s; }
        { static char* s[] = { "bool", "QEvent*", 0 }; override_arg_types[211] = s; }
        { static char* s[] = { "bool", "QGraphicsItem*", "QEvent*", 0 }; override_arg_types[212] = s; }
        { static char* s[] = { "int", "PaintDeviceMetric", 0 }; override_arg_types[213] = s; }
        { static char* s[] = { "QWidget*", "QVariant::Type", "QWidget*", 0 }; override_arg_types[214] = s; }
        { static char* s[] = { "QByteArray", "QVariant::Type", 0 }; override_arg_types[215] = s; }
        { static char* s[] = { "QListWidgetItem*", 0 }; override_arg_types[216] = s; }
        { static char* s[] = { "QVariant", "int", 0 }; override_arg_types[217] = s; }
        { static char* s[] = { 0, "int", "QVariant", 0 }; override_arg_types[218] = s; }
        { static char* s[] = { 0, "const char*", "uint", 0 }; override_arg_types[219] = s; }
        { static char* s[] = { "QSpacerItem*", 0 }; override_arg_types[220] = s; }
        { static char* s[] = { "QWidget*", 0 }; override_arg_types[221] = s; }
        { static char* s[] = { 0, "QVariant", "int", 0 }; override_arg_types[222] = s; }
        { static char* s[] = { "QVariant", "int", "int", 0 }; override_arg_types[223] = s; }
        { static char* s[] = { 0, "int", "int", "QVariant", 0 }; override_arg_types[224] = s; }
        { static char* s[] = { "int", 0 }; override_arg_types[225] = s; }
        { static char* s[] = { "bool", "QUndoCommand*", 0 }; override_arg_types[226] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[227] = s; }
        { static char* s[] = { 0, 0 }; override_arg_types[228] = s; }
        qNames = q_names.keys();
        nNames = n_names.keys(); }}

void* LObjects::overrideFun(uint unique, int id) {
    return override_lisp_functions.value(229 * (quint64)unique + id, 0); }

void LObjects::setOverrideFun(uint unique, int id, void* fun) {
    override_lisp_functions[229 * (quint64)unique + id] = fun; }

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
        case 15: m = &QButtonGroup::staticMetaObject; break;
        case 16: m = &QCalendarWidget::staticMetaObject; break;
        case 17: m = &QCheckBox::staticMetaObject; break;
        case 18: m = &QClipboard::staticMetaObject; break;
        case 19: m = &QColumnView::staticMetaObject; break;
        case 20: m = &QComboBox::staticMetaObject; break;
        case 21: m = &QCommandLinkButton::staticMetaObject; break;
        case 22: m = &QCompleter::staticMetaObject; break;
        case 23: m = &QCoreApplication::staticMetaObject; break;
        case 24: m = &QDateEdit::staticMetaObject; break;
        case 25: m = &QDateTimeEdit::staticMetaObject; break;
        case 26: m = &QDesktopWidget::staticMetaObject; break;
        case 27: m = &QDial::staticMetaObject; break;
        case 28: m = &QDialog::staticMetaObject; break;
        case 29: m = &QDockWidget::staticMetaObject; break;
        case 30: m = &QDoubleSpinBox::staticMetaObject; break;
        case 31: m = &QDrag::staticMetaObject; break;
        case 32: m = &QErrorMessage::staticMetaObject; break;
        case 33: m = &QFileDialog::staticMetaObject; break;
        case 34: m = &QFontComboBox::staticMetaObject; break;
        case 35: m = &QFontDialog::staticMetaObject; break;
        case 36: m = &QFormLayout::staticMetaObject; break;
        case 37: m = &QFrame::staticMetaObject; break;
        case 38: m = &QGraphicsEffect::staticMetaObject; break;
        case 39: m = &QGraphicsObject::staticMetaObject; break;
        case 40: m = &QGraphicsProxyWidget::staticMetaObject; break;
        case 41: m = &QGraphicsScene::staticMetaObject; break;
        case 42: m = &QGraphicsTextItem::staticMetaObject; break;
        case 43: m = &QGraphicsView::staticMetaObject; break;
        case 44: m = &QGraphicsWidget::staticMetaObject; break;
        case 45: m = &QGridLayout::staticMetaObject; break;
        case 46: m = &QGroupBox::staticMetaObject; break;
        case 47: m = &QHBoxLayout::staticMetaObject; break;
        case 48: m = &QHeaderView::staticMetaObject; break;
        case 49: m = &QInputContext::staticMetaObject; break;
        case 50: m = &QInputDialog::staticMetaObject; break;
        case 51: m = &QItemDelegate::staticMetaObject; break;
        case 52: m = &QItemSelectionModel::staticMetaObject; break;
        case 53: m = &QLCDNumber::staticMetaObject; break;
        case 54: m = &QLabel::staticMetaObject; break;
        case 55: m = &QLayout::staticMetaObject; break;
        case 56: m = &QLineEdit::staticMetaObject; break;
        case 57: m = &QListView::staticMetaObject; break;
        case 58: m = &QListWidget::staticMetaObject; break;
        case 59: m = &QMainWindow::staticMetaObject; break;
        case 60: m = &QMenu::staticMetaObject; break;
        case 61: m = &QMenuBar::staticMetaObject; break;
        case 62: m = &QMessageBox::staticMetaObject; break;
        case 63: m = &QMimeData::staticMetaObject; break;
        case 64: m = &QMovie::staticMetaObject; break;
        case 65: m = &QObject::staticMetaObject; break;
        case 66: m = &QPlainTextEdit::staticMetaObject; break;
        case 67: m = &QProgressBar::staticMetaObject; break;
        case 68: m = &QPushButton::staticMetaObject; break;
        case 69: m = &QRadioButton::staticMetaObject; break;
        case 70: m = &QScrollArea::staticMetaObject; break;
        case 71: m = &QScrollBar::staticMetaObject; break;
        case 72: m = &QSessionManager::staticMetaObject; break;
        case 73: m = &QSlider::staticMetaObject; break;
        case 74: m = &QSpinBox::staticMetaObject; break;
        case 75: m = &QSplashScreen::staticMetaObject; break;
        case 76: m = &QSplitter::staticMetaObject; break;
        case 77: m = &QStackedLayout::staticMetaObject; break;
        case 78: m = &QStackedWidget::staticMetaObject; break;
        case 79: m = &QStandardItemModel::staticMetaObject; break;
        case 80: m = &QStatusBar::staticMetaObject; break;
        case 81: m = &QStringListModel::staticMetaObject; break;
        case 82: m = &QTabBar::staticMetaObject; break;
        case 83: m = &QTabWidget::staticMetaObject; break;
        case 84: m = &QTableView::staticMetaObject; break;
        case 85: m = &QTableWidget::staticMetaObject; break;
        case 86: m = &QTextBlockGroup::staticMetaObject; break;
        case 87: m = &QTextBrowser::staticMetaObject; break;
        case 88: m = &QTextDocument::staticMetaObject; break;
        case 89: m = &QTextEdit::staticMetaObject; break;
        case 90: m = &QTextFrame::staticMetaObject; break;
        case 91: m = &QTextList::staticMetaObject; break;
        case 92: m = &QTextObject::staticMetaObject; break;
        case 93: m = &QTextTable::staticMetaObject; break;
        case 94: m = &QThread::staticMetaObject; break;
        case 95: m = &QTimeEdit::staticMetaObject; break;
        case 96: m = &QTimer::staticMetaObject; break;
        case 97: m = &QToolBar::staticMetaObject; break;
        case 98: m = &QToolBox::staticMetaObject; break;
        case 99: m = &QToolButton::staticMetaObject; break;
        case 100: m = &QTranslator::staticMetaObject; break;
        case 101: m = &QTreeView::staticMetaObject; break;
        case 102: m = &QTreeWidget::staticMetaObject; break;
        case 103: m = &QUndoGroup::staticMetaObject; break;
        case 104: m = &QUndoStack::staticMetaObject; break;
        case 105: m = &QUndoView::staticMetaObject; break;
        case 106: m = &QVBoxLayout::staticMetaObject; break;
        case 107: m = &QValidator::staticMetaObject; break;
        case 108: m = &QWidget::staticMetaObject; break;
        case 109: m = &QWizard::staticMetaObject; break;
        case 110: m = &QWizardPage::staticMetaObject; break;
        case 111: m = &QWorkspace::staticMetaObject; break; }
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
            case 15: ids = LButtonGroup::overrideIds; break;
            case 16: ids = LCalendarWidget::overrideIds; break;
            case 17: ids = LCheckBox::overrideIds; break;
            case 19: ids = LColumnView::overrideIds; break;
            case 20: ids = LComboBox::overrideIds; break;
            case 21: ids = LCommandLinkButton::overrideIds; break;
            case 22: ids = LCompleter::overrideIds; break;
            case 24: ids = LDateEdit::overrideIds; break;
            case 25: ids = LDateTimeEdit::overrideIds; break;
            case 26: ids = LDesktopWidget::overrideIds; break;
            case 27: ids = LDial::overrideIds; break;
            case 28: ids = LDialog::overrideIds; break;
            case 29: ids = LDockWidget::overrideIds; break;
            case 30: ids = LDoubleSpinBox::overrideIds; break;
            case 31: ids = LDrag::overrideIds; break;
            case 32: ids = LErrorMessage::overrideIds; break;
            case 33: ids = LFileDialog::overrideIds; break;
            case 34: ids = LFontComboBox::overrideIds; break;
            case 35: ids = LFontDialog::overrideIds; break;
            case 36: ids = LFormLayout::overrideIds; break;
            case 37: ids = LFrame::overrideIds; break;
            case 40: ids = LGraphicsProxyWidget::overrideIds; break;
            case 41: ids = LGraphicsScene::overrideIds; break;
            case 42: ids = LGraphicsTextItem::overrideIds; break;
            case 43: ids = LGraphicsView::overrideIds; break;
            case 44: ids = LGraphicsWidget::overrideIds; break;
            case 45: ids = LGridLayout::overrideIds; break;
            case 46: ids = LGroupBox::overrideIds; break;
            case 47: ids = LHBoxLayout::overrideIds; break;
            case 50: ids = LInputDialog::overrideIds; break;
            case 51: ids = LItemDelegate::overrideIds; break;
            case 52: ids = LItemSelectionModel::overrideIds; break;
            case 53: ids = LLCDNumber::overrideIds; break;
            case 54: ids = LLabel::overrideIds; break;
            case 56: ids = LLineEdit::overrideIds; break;
            case 57: ids = LListView::overrideIds; break;
            case 58: ids = LListWidget::overrideIds; break;
            case 59: ids = LMainWindow::overrideIds; break;
            case 60: ids = LMenu::overrideIds; break;
            case 61: ids = LMenuBar::overrideIds; break;
            case 62: ids = LMessageBox::overrideIds; break;
            case 63: ids = LMimeData::overrideIds; break;
            case 64: ids = LMovie::overrideIds; break;
            case 65: ids = LObject::overrideIds; break;
            case 66: ids = LPlainTextEdit::overrideIds; break;
            case 67: ids = LProgressBar::overrideIds; break;
            case 68: ids = LPushButton::overrideIds; break;
            case 69: ids = LRadioButton::overrideIds; break;
            case 70: ids = LScrollArea::overrideIds; break;
            case 71: ids = LScrollBar::overrideIds; break;
            case 73: ids = LSlider::overrideIds; break;
            case 74: ids = LSpinBox::overrideIds; break;
            case 75: ids = LSplashScreen::overrideIds; break;
            case 76: ids = LSplitter::overrideIds; break;
            case 77: ids = LStackedLayout::overrideIds; break;
            case 78: ids = LStackedWidget::overrideIds; break;
            case 79: ids = LStandardItemModel::overrideIds; break;
            case 80: ids = LStatusBar::overrideIds; break;
            case 81: ids = LStringListModel::overrideIds; break;
            case 82: ids = LTabBar::overrideIds; break;
            case 83: ids = LTabWidget::overrideIds; break;
            case 84: ids = LTableView::overrideIds; break;
            case 85: ids = LTableWidget::overrideIds; break;
            case 86: ids = LTextBlockGroup::overrideIds; break;
            case 87: ids = LTextBrowser::overrideIds; break;
            case 88: ids = LTextDocument::overrideIds; break;
            case 89: ids = LTextEdit::overrideIds; break;
            case 90: ids = LTextFrame::overrideIds; break;
            case 91: ids = LTextList::overrideIds; break;
            case 92: ids = LTextObject::overrideIds; break;
            case 93: ids = LTextTable::overrideIds; break;
            case 94: ids = LThread::overrideIds; break;
            case 95: ids = LTimeEdit::overrideIds; break;
            case 96: ids = LTimer::overrideIds; break;
            case 97: ids = LToolBar::overrideIds; break;
            case 98: ids = LToolBox::overrideIds; break;
            case 99: ids = LToolButton::overrideIds; break;
            case 100: ids = LTranslator::overrideIds; break;
            case 101: ids = LTreeView::overrideIds; break;
            case 102: ids = LTreeWidget::overrideIds; break;
            case 103: ids = LUndoGroup::overrideIds; break;
            case 104: ids = LUndoStack::overrideIds; break;
            case 105: ids = LUndoView::overrideIds; break;
            case 106: ids = LVBoxLayout::overrideIds; break;
            case 108: ids = LWidget::overrideIds; break;
            case 109: ids = LWizard::overrideIds; break;
            case 110: ids = LWizardPage::overrideIds; break;
            case 111: ids = LWorkspace::overrideIds; break; }}
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
        char* ret = override_arg_types[id - 1][0];
        funs << QString("%1 %2")
                .arg(ret ? ret : "void")
                .arg(QString(override_function_ids.key(id))).toAscii(); }
    return funs; }
