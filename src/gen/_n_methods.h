// THIS FILE IS GENERATED (see helper/)

#ifndef N_METHODS_H
#define N_METHODS_H

#include "_n_classes.h"
#include <QtGui>

class N3 : public QObject { // QBasicTimer
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LBasicTimer(u); }
    Q_INVOKABLE bool MisActive(QBasicTimer* o) const { return o->isActive(); }
    Q_INVOKABLE void Mstart(QBasicTimer* o, int x1, QObject* x2) { o->start(x1, x2); }
    Q_INVOKABLE void Mstop(QBasicTimer* o) { o->stop(); }
    Q_INVOKABLE int MtimerId(QBasicTimer* o) const { return o->timerId(); }
};

class N4 : public QObject { // QBitArray
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LBitArray(u); }
    Q_INVOKABLE void* C(uint u, int x1, bool x2 = false) { return new LBitArray(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QBitArray& x1) { return new LBitArray(u, x1); }
    Q_INVOKABLE bool Mat(QBitArray* o, int x1) const { return o->at(x1); }
    Q_INVOKABLE void Mclear(QBitArray* o) { o->clear(); }
    Q_INVOKABLE void MclearBit(QBitArray* o, int x1) { o->clearBit(x1); }
    Q_INVOKABLE int Mcount(QBitArray* o) const { return o->count(); }
    Q_INVOKABLE int Mcount(QBitArray* o, bool x1) const { return o->count(x1); }
    Q_INVOKABLE bool Mfill(QBitArray* o, bool x1, int x2 = -1) { return o->fill(x1, x2); }
    Q_INVOKABLE void Mfill(QBitArray* o, bool x1, int x2, int x3) { o->fill(x1, x2, x3); }
    Q_INVOKABLE bool MisEmpty(QBitArray* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisNull(QBitArray* o) const { return o->isNull(); }
    Q_INVOKABLE void Mresize(QBitArray* o, int x1) { o->resize(x1); }
    Q_INVOKABLE void MsetBit(QBitArray* o, int x1) { o->setBit(x1); }
    Q_INVOKABLE void MsetBit(QBitArray* o, int x1, bool x2) { o->setBit(x1, x2); }
    Q_INVOKABLE int Msize(QBitArray* o) const { return o->size(); }
    Q_INVOKABLE bool MtestBit(QBitArray* o, int x1) const { return o->testBit(x1); }
    Q_INVOKABLE bool MtoggleBit(QBitArray* o, int x1) { return o->toggleBit(x1); }
    Q_INVOKABLE void Mtruncate(QBitArray* o, int x1) { o->truncate(x1); }
};

class N6 : public QObject { // QBrush
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LBrush(u); }
    Q_INVOKABLE void* C(uint u, Qt::BrushStyle x1) { return new LBrush(u, x1); }
    Q_INVOKABLE void* C(uint u, const QColor& x1, Qt::BrushStyle x2 = Qt::SolidPattern) { return new LBrush(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, Qt::GlobalColor x1, Qt::BrushStyle x2 = Qt::SolidPattern) { return new LBrush(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QColor& x1, const QPixmap& x2) { return new LBrush(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, Qt::GlobalColor x1, const QPixmap& x2) { return new LBrush(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QPixmap& x1) { return new LBrush(u, x1); }
    Q_INVOKABLE void* C(uint u, const QImage& x1) { return new LBrush(u, x1); }
    Q_INVOKABLE void* C(uint u, const QBrush& x1) { return new LBrush(u, x1); }
    Q_INVOKABLE void* C(uint u, const QGradient& x1) { return new LBrush(u, x1); }
    Q_INVOKABLE QColor Mcolor(QBrush* o) const { return o->color(); }
    Q_INVOKABLE const QGradient* Mgradient(QBrush* o) const { return o->gradient(); }
    Q_INVOKABLE bool MisOpaque(QBrush* o) const { return o->isOpaque(); }
    Q_INVOKABLE QMatrix Mmatrix(QBrush* o) const { return o->matrix(); }
    Q_INVOKABLE void MsetColor(QBrush* o, const QColor& x1) { o->setColor(x1); }
    Q_INVOKABLE void MsetColor(QBrush* o, Qt::GlobalColor x1) { o->setColor(x1); }
    Q_INVOKABLE void MsetMatrix(QBrush* o, const QMatrix& x1) { o->setMatrix(x1); }
    Q_INVOKABLE void MsetStyle(QBrush* o, Qt::BrushStyle x1) { o->setStyle(x1); }
    Q_INVOKABLE void MsetTexture(QBrush* o, const QPixmap& x1) { o->setTexture(x1); }
    Q_INVOKABLE void MsetTextureImage(QBrush* o, const QImage& x1) { o->setTextureImage(x1); }
    Q_INVOKABLE void MsetTransform(QBrush* o, const QTransform& x1) { o->setTransform(x1); }
    Q_INVOKABLE Qt::BrushStyle Mstyle(QBrush* o) const { return o->style(); }
    Q_INVOKABLE QPixmap Mtexture(QBrush* o) const { return o->texture(); }
    Q_INVOKABLE QImage MtextureImage(QBrush* o) const { return o->textureImage(); }
    Q_INVOKABLE QTransform Mtransform(QBrush* o) const { return o->transform(); }
};

class N9 : public QObject { // QColor
    Q_OBJECT
public:
    Q_INVOKABLE int Malpha(QColor* o) const { return o->alpha(); }
    Q_INVOKABLE qreal MalphaF(QColor* o) const { return o->alphaF(); }
    Q_INVOKABLE int Mblack(QColor* o) const { return o->black(); }
    Q_INVOKABLE qreal MblackF(QColor* o) const { return o->blackF(); }
    Q_INVOKABLE int Mblue(QColor* o) const { return o->blue(); }
    Q_INVOKABLE qreal MblueF(QColor* o) const { return o->blueF(); }
    Q_INVOKABLE QColor MconvertTo(QColor* o, QColor::Spec x1) const { return o->convertTo(x1); }
    Q_INVOKABLE int Mcyan(QColor* o) const { return o->cyan(); }
    Q_INVOKABLE qreal McyanF(QColor* o) const { return o->cyanF(); }
    Q_INVOKABLE QColor Mdarker(QColor* o, int x1 = 200) const { return o->darker(x1); }
    Q_INVOKABLE int Mgreen(QColor* o) const { return o->green(); }
    Q_INVOKABLE qreal MgreenF(QColor* o) const { return o->greenF(); }
    Q_INVOKABLE int MhslHue(QColor* o) const { return o->hslHue(); }
    Q_INVOKABLE qreal MhslHueF(QColor* o) const { return o->hslHueF(); }
    Q_INVOKABLE int MhslSaturation(QColor* o) const { return o->hslSaturation(); }
    Q_INVOKABLE qreal MhslSaturationF(QColor* o) const { return o->hslSaturationF(); }
    Q_INVOKABLE int MhsvHue(QColor* o) const { return o->hsvHue(); }
    Q_INVOKABLE qreal MhsvHueF(QColor* o) const { return o->hsvHueF(); }
    Q_INVOKABLE int MhsvSaturation(QColor* o) const { return o->hsvSaturation(); }
    Q_INVOKABLE qreal MhsvSaturationF(QColor* o) const { return o->hsvSaturationF(); }
    Q_INVOKABLE int Mhue(QColor* o) const { return o->hue(); }
    Q_INVOKABLE qreal MhueF(QColor* o) const { return o->hueF(); }
    Q_INVOKABLE bool MisValid(QColor* o) const { return o->isValid(); }
    Q_INVOKABLE QColor Mlighter(QColor* o, int x1 = 150) const { return o->lighter(x1); }
    Q_INVOKABLE int Mlightness(QColor* o) const { return o->lightness(); }
    Q_INVOKABLE qreal MlightnessF(QColor* o) const { return o->lightnessF(); }
    Q_INVOKABLE int Mmagenta(QColor* o) const { return o->magenta(); }
    Q_INVOKABLE qreal MmagentaF(QColor* o) const { return o->magentaF(); }
    Q_INVOKABLE QString Mname(QColor* o) const { return o->name(); }
    Q_INVOKABLE int Mred(QColor* o) const { return o->red(); }
    Q_INVOKABLE qreal MredF(QColor* o) const { return o->redF(); }
    Q_INVOKABLE QRgb Mrgb(QColor* o) const { return o->rgb(); }
    Q_INVOKABLE QRgb Mrgba(QColor* o) const { return o->rgba(); }
    Q_INVOKABLE int Msaturation(QColor* o) const { return o->saturation(); }
    Q_INVOKABLE qreal MsaturationF(QColor* o) const { return o->saturationF(); }
    Q_INVOKABLE void MsetAlpha(QColor* o, int x1) { o->setAlpha(x1); }
    Q_INVOKABLE void MsetAlphaF(QColor* o, qreal x1) { o->setAlphaF(x1); }
    Q_INVOKABLE void MsetBlue(QColor* o, int x1) { o->setBlue(x1); }
    Q_INVOKABLE void MsetBlueF(QColor* o, qreal x1) { o->setBlueF(x1); }
    Q_INVOKABLE void MsetCmyk(QColor* o, int x1, int x2, int x3, int x4, int x5 = 255) { o->setCmyk(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetCmykF(QColor* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5 = 1.0) { o->setCmykF(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetGreen(QColor* o, int x1) { o->setGreen(x1); }
    Q_INVOKABLE void MsetGreenF(QColor* o, qreal x1) { o->setGreenF(x1); }
    Q_INVOKABLE void MsetHsl(QColor* o, int x1, int x2, int x3, int x4 = 255) { o->setHsl(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetHslF(QColor* o, qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { o->setHslF(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetHsv(QColor* o, int x1, int x2, int x3, int x4 = 255) { o->setHsv(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetHsvF(QColor* o, qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { o->setHsvF(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetNamedColor(QColor* o, const QString& x1) { o->setNamedColor(x1); }
    Q_INVOKABLE void MsetRed(QColor* o, int x1) { o->setRed(x1); }
    Q_INVOKABLE void MsetRedF(QColor* o, qreal x1) { o->setRedF(x1); }
    Q_INVOKABLE void MsetRgb(QColor* o, int x1, int x2, int x3, int x4 = 255) { o->setRgb(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetRgb(QColor* o, QRgb x1) { o->setRgb(x1); }
    Q_INVOKABLE void MsetRgbF(QColor* o, qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { o->setRgbF(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetRgba(QColor* o, QRgb x1) { o->setRgba(x1); }
    Q_INVOKABLE QColor::Spec Mspec(QColor* o) const { return o->spec(); }
    Q_INVOKABLE QColor MtoCmyk(QColor* o) const { return o->toCmyk(); }
    Q_INVOKABLE QColor MtoHsl(QColor* o) const { return o->toHsl(); }
    Q_INVOKABLE QColor MtoHsv(QColor* o) const { return o->toHsv(); }
    Q_INVOKABLE QColor MtoRgb(QColor* o) const { return o->toRgb(); }
    Q_INVOKABLE int Mvalue(QColor* o) const { return o->value(); }
    Q_INVOKABLE qreal MvalueF(QColor* o) const { return o->valueF(); }
    Q_INVOKABLE int Myellow(QColor* o) const { return o->yellow(); }
    Q_INVOKABLE qreal MyellowF(QColor* o) const { return o->yellowF(); }
    Q_INVOKABLE QStringList ScolorNames() { return QColor::colorNames(); }
    Q_INVOKABLE QColor SfromCmyk(int x1, int x2, int x3, int x4, int x5 = 255) { return QColor::fromCmyk(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QColor SfromCmykF(qreal x1, qreal x2, qreal x3, qreal x4, qreal x5 = 1.0) { return QColor::fromCmykF(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QColor SfromHsl(int x1, int x2, int x3, int x4 = 255) { return QColor::fromHsl(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromHslF(qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { return QColor::fromHslF(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromHsv(int x1, int x2, int x3, int x4 = 255) { return QColor::fromHsv(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromHsvF(qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { return QColor::fromHsvF(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromRgb(QRgb x1) { return QColor::fromRgb(x1); }
    Q_INVOKABLE QColor SfromRgb(int x1, int x2, int x3, int x4 = 255) { return QColor::fromRgb(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromRgbF(qreal x1, qreal x2, qreal x3, qreal x4 = 1.0) { return QColor::fromRgbF(x1, x2, x3, x4); }
    Q_INVOKABLE QColor SfromRgba(QRgb x1) { return QColor::fromRgba(x1); }
};

class N12 : public QObject { // QCursor
    Q_OBJECT
public:
    Q_INVOKABLE const QBitmap* Mbitmap(QCursor* o) const { return o->bitmap(); }
    Q_INVOKABLE QPoint MhotSpot(QCursor* o) const { return o->hotSpot(); }
    Q_INVOKABLE const QBitmap* Mmask(QCursor* o) const { return o->mask(); }
    Q_INVOKABLE QPixmap Mpixmap(QCursor* o) const { return o->pixmap(); }
    Q_INVOKABLE void MsetShape(QCursor* o, Qt::CursorShape x1) { o->setShape(x1); }
    Q_INVOKABLE Qt::CursorShape Mshape(QCursor* o) const { return o->shape(); }
    Q_INVOKABLE QPoint Spos() { return QCursor::pos(); }
    Q_INVOKABLE void SsetPos(int x1, int x2) { QCursor::setPos(x1, x2); }
    Q_INVOKABLE void SsetPos(const QPoint& x1) { QCursor::setPos(x1); }
};

class N13 : public QObject { // QDate
    Q_OBJECT
public:
    Q_INVOKABLE QDate MaddDays(QDate* o, int x1) const { return o->addDays(x1); }
    Q_INVOKABLE QDate MaddMonths(QDate* o, int x1) const { return o->addMonths(x1); }
    Q_INVOKABLE QDate MaddYears(QDate* o, int x1) const { return o->addYears(x1); }
    Q_INVOKABLE int Mday(QDate* o) const { return o->day(); }
    Q_INVOKABLE int MdayOfWeek(QDate* o) const { return o->dayOfWeek(); }
    Q_INVOKABLE int MdayOfYear(QDate* o) const { return o->dayOfYear(); }
    Q_INVOKABLE int MdaysInMonth(QDate* o) const { return o->daysInMonth(); }
    Q_INVOKABLE int MdaysInYear(QDate* o) const { return o->daysInYear(); }
    Q_INVOKABLE int MdaysTo(QDate* o, const QDate& x1) const { return o->daysTo(x1); }
    Q_INVOKABLE bool MisNull(QDate* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisValid(QDate* o) const { return o->isValid(); }
    Q_INVOKABLE int Mmonth(QDate* o) const { return o->month(); }
    Q_INVOKABLE bool MsetDate(QDate* o, int x1, int x2, int x3) { return o->setDate(x1, x2, x3); }
    Q_INVOKABLE int MtoJulianDay(QDate* o) const { return o->toJulianDay(); }
    Q_INVOKABLE QString MtoString(QDate* o, const QString& x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QDate* o, Qt::DateFormat x1 = Qt::TextDate) const { return o->toString(x1); }
    Q_INVOKABLE int Myear(QDate* o) const { return o->year(); }
    Q_INVOKABLE QDate ScurrentDate() { return QDate::currentDate(); }
    Q_INVOKABLE QDate SfromJulianDay(int x1) { return QDate::fromJulianDay(x1); }
    Q_INVOKABLE QDate SfromString(const QString& x1, Qt::DateFormat x2 = Qt::TextDate) { return QDate::fromString(x1, x2); }
    Q_INVOKABLE QDate SfromString(const QString& x1, const QString& x2) { return QDate::fromString(x1, x2); }
    Q_INVOKABLE bool SisLeapYear(int x1) { return QDate::isLeapYear(x1); }
    Q_INVOKABLE bool SisValid(int x1, int x2, int x3) { return QDate::isValid(x1, x2, x3); }
    Q_INVOKABLE QString SlongDayName(int x1) { return QDate::longDayName(x1); }
    Q_INVOKABLE QString SlongDayName(int x1, QDate::MonthNameType x2) { return QDate::longDayName(x1, x2); }
    Q_INVOKABLE QString SlongMonthName(int x1) { return QDate::longMonthName(x1); }
    Q_INVOKABLE QString SlongMonthName(int x1, QDate::MonthNameType x2) { return QDate::longMonthName(x1, x2); }
    Q_INVOKABLE QString SshortDayName(int x1) { return QDate::shortDayName(x1); }
    Q_INVOKABLE QString SshortDayName(int x1, QDate::MonthNameType x2) { return QDate::shortDayName(x1, x2); }
    Q_INVOKABLE QString SshortMonthName(int x1) { return QDate::shortMonthName(x1); }
    Q_INVOKABLE QString SshortMonthName(int x1, QDate::MonthNameType x2) { return QDate::shortMonthName(x1, x2); }
};

class N14 : public QObject { // QDateTime
    Q_OBJECT
public:
    Q_INVOKABLE QDateTime MaddDays(QDateTime* o, int x1) const { return o->addDays(x1); }
    Q_INVOKABLE QDateTime MaddMonths(QDateTime* o, int x1) const { return o->addMonths(x1); }
    Q_INVOKABLE QDateTime MaddSecs(QDateTime* o, int x1) const { return o->addSecs(x1); }
    Q_INVOKABLE QDateTime MaddYears(QDateTime* o, int x1) const { return o->addYears(x1); }
    Q_INVOKABLE QDate Mdate(QDateTime* o) const { return o->date(); }
    Q_INVOKABLE int MdaysTo(QDateTime* o, const QDateTime& x1) const { return o->daysTo(x1); }
    Q_INVOKABLE bool MisNull(QDateTime* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisValid(QDateTime* o) const { return o->isValid(); }
    Q_INVOKABLE int MsecsTo(QDateTime* o, const QDateTime& x1) const { return o->secsTo(x1); }
    Q_INVOKABLE void MsetDate(QDateTime* o, const QDate& x1) { o->setDate(x1); }
    Q_INVOKABLE void MsetTime(QDateTime* o, const QTime& x1) { o->setTime(x1); }
    Q_INVOKABLE void MsetTimeSpec(QDateTime* o, Qt::TimeSpec x1) { o->setTimeSpec(x1); }
    Q_INVOKABLE void MsetTime_t(QDateTime* o, uint x1) { o->setTime_t(x1); }
    Q_INVOKABLE QTime Mtime(QDateTime* o) const { return o->time(); }
    Q_INVOKABLE Qt::TimeSpec MtimeSpec(QDateTime* o) const { return o->timeSpec(); }
    Q_INVOKABLE QDateTime MtoLocalTime(QDateTime* o) const { return o->toLocalTime(); }
    Q_INVOKABLE QString MtoString(QDateTime* o, const QString& x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QDateTime* o, Qt::DateFormat x1 = Qt::TextDate) const { return o->toString(x1); }
    Q_INVOKABLE QDateTime MtoTimeSpec(QDateTime* o, Qt::TimeSpec x1) const { return o->toTimeSpec(x1); }
    Q_INVOKABLE uint MtoTime_t(QDateTime* o) const { return o->toTime_t(); }
    Q_INVOKABLE QDateTime MtoUTC(QDateTime* o) const { return o->toUTC(); }
    Q_INVOKABLE QDateTime ScurrentDateTime() { return QDateTime::currentDateTime(); }
    Q_INVOKABLE QDateTime SfromString(const QString& x1, Qt::DateFormat x2 = Qt::TextDate) { return QDateTime::fromString(x1, x2); }
    Q_INVOKABLE QDateTime SfromString(const QString& x1, const QString& x2) { return QDateTime::fromString(x1, x2); }
    Q_INVOKABLE QDateTime SfromTime_t(uint x1) { return QDateTime::fromTime_t(x1); }
};

class N15 : public QObject { // QDir
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QDir& x1) { return new LDir(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1 = QString()) { return new LDir(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const QString& x2, QDir::SortFlags x3 = QDir::Name|QDir::IgnoreCase, QDir::Filters x4 = QDir::AllEntries) { return new LDir(u, x1, x2, x3, x4); }
    Q_INVOKABLE QString MabsoluteFilePath(QDir* o, const QString& x1) const { return o->absoluteFilePath(x1); }
    Q_INVOKABLE QString MabsolutePath(QDir* o) const { return o->absolutePath(); }
    Q_INVOKABLE QString McanonicalPath(QDir* o) const { return o->canonicalPath(); }
    Q_INVOKABLE bool Mcd(QDir* o, const QString& x1) { return o->cd(x1); }
    Q_INVOKABLE bool McdUp(QDir* o) { return o->cdUp(); }
    Q_INVOKABLE uint Mcount(QDir* o) const { return o->count(); }
    Q_INVOKABLE QString MdirName(QDir* o) const { return o->dirName(); }
    Q_INVOKABLE QStringList MentryList(QDir* o, const QStringList& x1, QDir::Filters x2 = QDir::NoFilter, QDir::SortFlags x3 = QDir::NoSort) const { return o->entryList(x1, x2, x3); }
    Q_INVOKABLE QStringList MentryList(QDir* o, QDir::Filters x1 = QDir::NoFilter, QDir::SortFlags x2 = QDir::NoSort) const { return o->entryList(x1, x2); }
    Q_INVOKABLE bool Mexists(QDir* o, const QString& x1) const { return o->exists(x1); }
    Q_INVOKABLE bool Mexists(QDir* o) const { return o->exists(); }
    Q_INVOKABLE QString MfilePath(QDir* o, const QString& x1) const { return o->filePath(x1); }
    Q_INVOKABLE QDir::Filters Mfilter(QDir* o) const { return o->filter(); }
    Q_INVOKABLE bool MisAbsolute(QDir* o) const { return o->isAbsolute(); }
    Q_INVOKABLE bool MisReadable(QDir* o) const { return o->isReadable(); }
    Q_INVOKABLE bool MisRelative(QDir* o) const { return o->isRelative(); }
    Q_INVOKABLE bool MisRoot(QDir* o) const { return o->isRoot(); }
    Q_INVOKABLE bool MmakeAbsolute(QDir* o) { return o->makeAbsolute(); }
    Q_INVOKABLE bool Mmkdir(QDir* o, const QString& x1) const { return o->mkdir(x1); }
    Q_INVOKABLE bool Mmkpath(QDir* o, const QString& x1) const { return o->mkpath(x1); }
    Q_INVOKABLE QStringList MnameFilters(QDir* o) const { return o->nameFilters(); }
    Q_INVOKABLE QString Mpath(QDir* o) const { return o->path(); }
    Q_INVOKABLE void Mrefresh(QDir* o) const { o->refresh(); }
    Q_INVOKABLE QString MrelativeFilePath(QDir* o, const QString& x1) const { return o->relativeFilePath(x1); }
    Q_INVOKABLE bool Mremove(QDir* o, const QString& x1) { return o->remove(x1); }
    Q_INVOKABLE bool Mrename(QDir* o, const QString& x1, const QString& x2) { return o->rename(x1, x2); }
    Q_INVOKABLE bool Mrmdir(QDir* o, const QString& x1) const { return o->rmdir(x1); }
    Q_INVOKABLE bool Mrmpath(QDir* o, const QString& x1) const { return o->rmpath(x1); }
    Q_INVOKABLE void MsetFilter(QDir* o, QDir::Filters x1) { o->setFilter(x1); }
    Q_INVOKABLE void MsetNameFilters(QDir* o, const QStringList& x1) { o->setNameFilters(x1); }
    Q_INVOKABLE void MsetPath(QDir* o, const QString& x1) { o->setPath(x1); }
    Q_INVOKABLE void MsetSorting(QDir* o, QDir::SortFlags x1) { o->setSorting(x1); }
    Q_INVOKABLE QDir::SortFlags Msorting(QDir* o) const { return o->sorting(); }
    Q_INVOKABLE void SaddSearchPath(const QString& x1, const QString& x2) { QDir::addSearchPath(x1, x2); }
    Q_INVOKABLE QString ScleanPath(const QString& x1) { return QDir::cleanPath(x1); }
    Q_INVOKABLE QDir Scurrent() { return QDir::current(); }
    Q_INVOKABLE QString ScurrentPath() { return QDir::currentPath(); }
    Q_INVOKABLE QString SfromNativeSeparators(const QString& x1) { return QDir::fromNativeSeparators(x1); }
    Q_INVOKABLE QDir Shome() { return QDir::home(); }
    Q_INVOKABLE QString ShomePath() { return QDir::homePath(); }
    Q_INVOKABLE bool SisAbsolutePath(const QString& x1) { return QDir::isAbsolutePath(x1); }
    Q_INVOKABLE bool SisRelativePath(const QString& x1) { return QDir::isRelativePath(x1); }
    Q_INVOKABLE bool Smatch(const QString& x1, const QString& x2) { return QDir::match(x1, x2); }
    Q_INVOKABLE bool Smatch(const QStringList& x1, const QString& x2) { return QDir::match(x1, x2); }
    Q_INVOKABLE QDir Sroot() { return QDir::root(); }
    Q_INVOKABLE QString SrootPath() { return QDir::rootPath(); }
    Q_INVOKABLE QStringList SsearchPaths(const QString& x1) { return QDir::searchPaths(x1); }
    Q_INVOKABLE QChar Sseparator() { return QDir::separator(); }
    Q_INVOKABLE bool SsetCurrent(const QString& x1) { return QDir::setCurrent(x1); }
    Q_INVOKABLE void SsetSearchPaths(const QString& x1, const QStringList& x2) { QDir::setSearchPaths(x1, x2); }
    Q_INVOKABLE QDir Stemp() { return QDir::temp(); }
    Q_INVOKABLE QString StempPath() { return QDir::tempPath(); }
    Q_INVOKABLE QString StoNativeSeparators(const QString& x1) { return QDir::toNativeSeparators(x1); }
};

class N20 : public QObject { // QEvent
    Q_OBJECT
public:
    Q_INVOKABLE void Maccept(QEvent* o) { o->accept(); }
    Q_INVOKABLE void Mignore(QEvent* o) { o->ignore(); }
    Q_INVOKABLE bool MisAccepted(QEvent* o) const { return o->isAccepted(); }
    Q_INVOKABLE void MsetAccepted(QEvent* o, bool x1) { o->setAccepted(x1); }
    Q_INVOKABLE bool Mspontaneous(QEvent* o) const { return o->spontaneous(); }
    Q_INVOKABLE QEvent::Type Mtype(QEvent* o) const { return o->type(); }
    Q_INVOKABLE int SregisterEventType(int x1 = -1) { return QEvent::registerEventType(x1); }
};

class N21 : public QObject { // QFileIconProvider
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LFileIconProvider(u); }
    Q_INVOKABLE QIcon Micon(QFileIconProvider* o, QFileIconProvider::IconType x1) const { return o->icon(x1); }
};

class N22 : public QObject { // QFileInfo
    Q_OBJECT
public:
    Q_INVOKABLE QDir MabsoluteDir(QFileInfo* o) const { return o->absoluteDir(); }
    Q_INVOKABLE QString MabsoluteFilePath(QFileInfo* o) const { return o->absoluteFilePath(); }
    Q_INVOKABLE QString MabsolutePath(QFileInfo* o) const { return o->absolutePath(); }
    Q_INVOKABLE QString MbaseName(QFileInfo* o) const { return o->baseName(); }
    Q_INVOKABLE QString MbundleName(QFileInfo* o) const { return o->bundleName(); }
    Q_INVOKABLE bool Mcaching(QFileInfo* o) const { return o->caching(); }
    Q_INVOKABLE QString McanonicalFilePath(QFileInfo* o) const { return o->canonicalFilePath(); }
    Q_INVOKABLE QString McanonicalPath(QFileInfo* o) const { return o->canonicalPath(); }
    Q_INVOKABLE QString McompleteBaseName(QFileInfo* o) const { return o->completeBaseName(); }
    Q_INVOKABLE QString McompleteSuffix(QFileInfo* o) const { return o->completeSuffix(); }
    Q_INVOKABLE QDateTime Mcreated(QFileInfo* o) const { return o->created(); }
    Q_INVOKABLE QDir Mdir(QFileInfo* o) const { return o->dir(); }
    Q_INVOKABLE bool Mexists(QFileInfo* o) const { return o->exists(); }
    Q_INVOKABLE QString MfileName(QFileInfo* o) const { return o->fileName(); }
    Q_INVOKABLE QString MfilePath(QFileInfo* o) const { return o->filePath(); }
    Q_INVOKABLE QString Mgroup(QFileInfo* o) const { return o->group(); }
    Q_INVOKABLE uint MgroupId(QFileInfo* o) const { return o->groupId(); }
    Q_INVOKABLE bool MisAbsolute(QFileInfo* o) const { return o->isAbsolute(); }
    Q_INVOKABLE bool MisBundle(QFileInfo* o) const { return o->isBundle(); }
    Q_INVOKABLE bool MisDir(QFileInfo* o) const { return o->isDir(); }
    Q_INVOKABLE bool MisExecutable(QFileInfo* o) const { return o->isExecutable(); }
    Q_INVOKABLE bool MisFile(QFileInfo* o) const { return o->isFile(); }
    Q_INVOKABLE bool MisHidden(QFileInfo* o) const { return o->isHidden(); }
    Q_INVOKABLE bool MisReadable(QFileInfo* o) const { return o->isReadable(); }
    Q_INVOKABLE bool MisRelative(QFileInfo* o) const { return o->isRelative(); }
    Q_INVOKABLE bool MisRoot(QFileInfo* o) const { return o->isRoot(); }
    Q_INVOKABLE bool MisSymLink(QFileInfo* o) const { return o->isSymLink(); }
    Q_INVOKABLE bool MisWritable(QFileInfo* o) const { return o->isWritable(); }
    Q_INVOKABLE QDateTime MlastModified(QFileInfo* o) const { return o->lastModified(); }
    Q_INVOKABLE QDateTime MlastRead(QFileInfo* o) const { return o->lastRead(); }
    Q_INVOKABLE bool MmakeAbsolute(QFileInfo* o) { return o->makeAbsolute(); }
    Q_INVOKABLE QString Mowner(QFileInfo* o) const { return o->owner(); }
    Q_INVOKABLE uint MownerId(QFileInfo* o) const { return o->ownerId(); }
    Q_INVOKABLE QString Mpath(QFileInfo* o) const { return o->path(); }
    Q_INVOKABLE bool Mpermission(QFileInfo* o, QFile::Permissions x1) const { return o->permission(x1); }
    Q_INVOKABLE QFile::Permissions Mpermissions(QFileInfo* o) const { return o->permissions(); }
    Q_INVOKABLE void Mrefresh(QFileInfo* o) { o->refresh(); }
    Q_INVOKABLE void MsetCaching(QFileInfo* o, bool x1) { o->setCaching(x1); }
    Q_INVOKABLE void MsetFile(QFileInfo* o, const QString& x1) { o->setFile(x1); }
    Q_INVOKABLE void MsetFile(QFileInfo* o, const QFile& x1) { o->setFile(x1); }
    Q_INVOKABLE void MsetFile(QFileInfo* o, const QDir& x1, const QString& x2) { o->setFile(x1, x2); }
    Q_INVOKABLE QString Msuffix(QFileInfo* o) const { return o->suffix(); }
    Q_INVOKABLE QString MsymLinkTarget(QFileInfo* o) const { return o->symLinkTarget(); }
};

class N24 : public QObject { // QFontMetrics
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, const QFont& x1) { return new LFontMetrics(u, x1); }
    Q_INVOKABLE void* C(uint u, const QFont& x1, QPaintDevice* x2) { return new LFontMetrics(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QFontMetrics& x1) { return new LFontMetrics(u, x1); }
    Q_INVOKABLE int Mascent(QFontMetrics* o) const { return o->ascent(); }
    Q_INVOKABLE int MaverageCharWidth(QFontMetrics* o) const { return o->averageCharWidth(); }
    Q_INVOKABLE QRect MboundingRect(QFontMetrics* o, QChar x1) const { return o->boundingRect(x1); }
    Q_INVOKABLE QRect MboundingRect(QFontMetrics* o, const QString& x1) const { return o->boundingRect(x1); }
    Q_INVOKABLE int Mdescent(QFontMetrics* o) const { return o->descent(); }
    Q_INVOKABLE QString MelidedText(QFontMetrics* o, const QString& x1, Qt::TextElideMode x2, int x3, int x4 = 0) const { return o->elidedText(x1, x2, x3, x4); }
    Q_INVOKABLE int Mheight(QFontMetrics* o) const { return o->height(); }
    Q_INVOKABLE bool MinFont(QFontMetrics* o, QChar x1) const { return o->inFont(x1); }
    Q_INVOKABLE int Mleading(QFontMetrics* o) const { return o->leading(); }
    Q_INVOKABLE int MleftBearing(QFontMetrics* o, QChar x1) const { return o->leftBearing(x1); }
    Q_INVOKABLE int MlineSpacing(QFontMetrics* o) const { return o->lineSpacing(); }
    Q_INVOKABLE int MlineWidth(QFontMetrics* o) const { return o->lineWidth(); }
    Q_INVOKABLE int MmaxWidth(QFontMetrics* o) const { return o->maxWidth(); }
    Q_INVOKABLE int MminLeftBearing(QFontMetrics* o) const { return o->minLeftBearing(); }
    Q_INVOKABLE int MminRightBearing(QFontMetrics* o) const { return o->minRightBearing(); }
    Q_INVOKABLE int MoverlinePos(QFontMetrics* o) const { return o->overlinePos(); }
    Q_INVOKABLE int MrightBearing(QFontMetrics* o, QChar x1) const { return o->rightBearing(x1); }
    Q_INVOKABLE int MstrikeOutPos(QFontMetrics* o) const { return o->strikeOutPos(); }
    Q_INVOKABLE QRect MtightBoundingRect(QFontMetrics* o, const QString& x1) const { return o->tightBoundingRect(x1); }
    Q_INVOKABLE int MunderlinePos(QFontMetrics* o) const { return o->underlinePos(); }
    Q_INVOKABLE int Mwidth(QFontMetrics* o, const QString& x1, int x2 = -1) const { return o->width(x1, x2); }
    Q_INVOKABLE int Mwidth(QFontMetrics* o, QChar x1) const { return o->width(x1); }
    Q_INVOKABLE int MxHeight(QFontMetrics* o) const { return o->xHeight(); }
};

class N25 : public QObject { // QGradient
    Q_OBJECT
public:
    Q_INVOKABLE QGradient::CoordinateMode McoordinateMode(QGradient* o) const { return o->coordinateMode(); }
    Q_INVOKABLE void MsetColorAt(QGradient* o, qreal x1, const QColor& x2) { o->setColorAt(x1, x2); }
    Q_INVOKABLE void MsetCoordinateMode(QGradient* o, QGradient::CoordinateMode x1) { o->setCoordinateMode(x1); }
    Q_INVOKABLE void MsetSpread(QGradient* o, QGradient::Spread x1) { o->setSpread(x1); }
    Q_INVOKABLE void MsetStops(QGradient* o, const QGradientStops& x1) { o->setStops(x1); }
    Q_INVOKABLE QGradient::Spread Mspread(QGradient* o) const { return o->spread(); }
    Q_INVOKABLE QGradientStops Mstops(QGradient* o) const { return o->stops(); }
    Q_INVOKABLE QGradient::Type Mtype(QGradient* o) const { return o->type(); }
};

class N27 : public QObject { // QGraphicsItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsItem(u, x1); }
    Q_INVOKABLE bool MacceptDrops(QGraphicsItem* o) const { return o->acceptDrops(); }
    Q_INVOKABLE bool MacceptHoverEvents(QGraphicsItem* o) const { return o->acceptHoverEvents(); }
    Q_INVOKABLE bool MacceptTouchEvents(QGraphicsItem* o) const { return o->acceptTouchEvents(); }
    Q_INVOKABLE Qt::MouseButtons MacceptedMouseButtons(QGraphicsItem* o) const { return o->acceptedMouseButtons(); }
    Q_INVOKABLE void Madvance(QGraphicsItem* o, int x1) { o->advance(x1); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE QRegion MboundingRegion(QGraphicsItem* o, const QTransform& x1) const { return o->boundingRegion(x1); }
    Q_INVOKABLE qreal MboundingRegionGranularity(QGraphicsItem* o) const { return o->boundingRegionGranularity(); }
    Q_INVOKABLE QGraphicsItem::CacheMode McacheMode(QGraphicsItem* o) const { return o->cacheMode(); }
    Q_INVOKABLE QList<QGraphicsItem*> MchildItems(QGraphicsItem* o) const { return o->childItems(); }
    Q_INVOKABLE QRectF MchildrenBoundingRect(QGraphicsItem* o) const { return o->childrenBoundingRect(); }
    Q_INVOKABLE void MclearFocus(QGraphicsItem* o) { o->clearFocus(); }
    Q_INVOKABLE QPainterPath MclipPath(QGraphicsItem* o) const { return o->clipPath(); }
    Q_INVOKABLE bool McollidesWithItem(QGraphicsItem* o, const QGraphicsItem* x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { return o->collidesWithItem(x1, x2); }
    Q_INVOKABLE bool McollidesWithPath(QGraphicsItem* o, const QPainterPath& x1, Qt::ItemSelectionMode x2 = Qt::IntersectsItemShape) const { return o->collidesWithPath(x1, x2); }
    Q_INVOKABLE QList<QGraphicsItem*> McollidingItems(QGraphicsItem* o, Qt::ItemSelectionMode x1 = Qt::IntersectsItemShape) const { return o->collidingItems(x1); }
    Q_INVOKABLE QGraphicsItem* McommonAncestorItem(QGraphicsItem* o, const QGraphicsItem* x1) const { return o->commonAncestorItem(x1); }
    Q_INVOKABLE bool Mcontains(QGraphicsItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE QCursor Mcursor(QGraphicsItem* o) const { return o->cursor(); }
    Q_INVOKABLE QVariant Mdata(QGraphicsItem* o, int x1) const { return o->data(x1); }
    Q_INVOKABLE QTransform MdeviceTransform(QGraphicsItem* o, const QTransform& x1) const { return o->deviceTransform(x1); }
    Q_INVOKABLE qreal MeffectiveOpacity(QGraphicsItem* o) const { return o->effectiveOpacity(); }
    Q_INVOKABLE void MensureVisible(QGraphicsItem* o, const QRectF& x1 = QRectF(), int x2 = 50, int x3 = 50) { o->ensureVisible(x1, x2, x3); }
    Q_INVOKABLE void MensureVisible(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4, int x5 = 50, int x6 = 50) { o->ensureVisible(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE bool MfiltersChildEvents(QGraphicsItem* o) const { return o->filtersChildEvents(); }
    Q_INVOKABLE QGraphicsItem::GraphicsItemFlags Mflags(QGraphicsItem* o) const { return o->flags(); }
    Q_INVOKABLE QGraphicsItem* MfocusItem(QGraphicsItem* o) const { return o->focusItem(); }
    Q_INVOKABLE QGraphicsItem* MfocusProxy(QGraphicsItem* o) const { return o->focusProxy(); }
    Q_INVOKABLE void MgrabKeyboard(QGraphicsItem* o) { o->grabKeyboard(); }
    Q_INVOKABLE void MgrabMouse(QGraphicsItem* o) { o->grabMouse(); }
    Q_INVOKABLE QGraphicsEffect* MgraphicsEffect(QGraphicsItem* o) const { return o->graphicsEffect(); }
    Q_INVOKABLE QGraphicsItemGroup* Mgroup(QGraphicsItem* o) const { return o->group(); }
    Q_INVOKABLE bool MhasCursor(QGraphicsItem* o) const { return o->hasCursor(); }
    Q_INVOKABLE bool MhasFocus(QGraphicsItem* o) const { return o->hasFocus(); }
    Q_INVOKABLE void Mhide(QGraphicsItem* o) { o->hide(); }
    Q_INVOKABLE Qt::InputMethodHints MinputMethodHints(QGraphicsItem* o) const { return o->inputMethodHints(); }
    Q_INVOKABLE void MinstallSceneEventFilter(QGraphicsItem* o, QGraphicsItem* x1) { o->installSceneEventFilter(x1); }
    Q_INVOKABLE bool MisActive(QGraphicsItem* o) const { return o->isActive(); }
    Q_INVOKABLE bool MisAncestorOf(QGraphicsItem* o, const QGraphicsItem* x1) const { return o->isAncestorOf(x1); }
    Q_INVOKABLE bool MisClipped(QGraphicsItem* o) const { return o->isClipped(); }
    Q_INVOKABLE bool MisEnabled(QGraphicsItem* o) const { return o->isEnabled(); }
    Q_INVOKABLE bool MisObscured(QGraphicsItem* o) const { return o->isObscured(); }
    Q_INVOKABLE bool MisObscured(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->isObscured(x1, x2, x3, x4); }
    Q_INVOKABLE bool MisObscured(QGraphicsItem* o, const QRectF& x1) const { return o->isObscured(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE bool MisPanel(QGraphicsItem* o) const { return o->isPanel(); }
    Q_INVOKABLE bool MisSelected(QGraphicsItem* o) const { return o->isSelected(); }
    Q_INVOKABLE bool MisUnderMouse(QGraphicsItem* o) const { return o->isUnderMouse(); }
    Q_INVOKABLE bool MisVisible(QGraphicsItem* o) const { return o->isVisible(); }
    Q_INVOKABLE bool MisVisibleTo(QGraphicsItem* o, const QGraphicsItem* x1) const { return o->isVisibleTo(x1); }
    Q_INVOKABLE bool MisWidget(QGraphicsItem* o) const { return o->isWidget(); }
    Q_INVOKABLE bool MisWindow(QGraphicsItem* o) const { return o->isWindow(); }
    Q_INVOKABLE QTransform MitemTransform(QGraphicsItem* o, const QGraphicsItem* x1, bool* x2 = 0) const { return o->itemTransform(x1, x2); }
    Q_INVOKABLE QPointF MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPointF& x2) const { return o->mapFromItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, const QRectF& x2) const { return o->mapFromItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPolygonF& x2) const { return o->mapFromItem(x1, x2); }
    Q_INVOKABLE QPainterPath MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPainterPath& x2) const { return o->mapFromItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3, qreal x4, qreal x5) const { return o->mapFromItem(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QPointF MmapFromItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3) const { return o->mapFromItem(x1, x2, x3); }
    Q_INVOKABLE QPointF MmapFromParent(QGraphicsItem* o, const QPointF& x1) const { return o->mapFromParent(x1); }
    Q_INVOKABLE QPolygonF MmapFromParent(QGraphicsItem* o, const QRectF& x1) const { return o->mapFromParent(x1); }
    Q_INVOKABLE QPolygonF MmapFromParent(QGraphicsItem* o, const QPolygonF& x1) const { return o->mapFromParent(x1); }
    Q_INVOKABLE QPainterPath MmapFromParent(QGraphicsItem* o, const QPainterPath& x1) const { return o->mapFromParent(x1); }
    Q_INVOKABLE QPolygonF MmapFromParent(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapFromParent(x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MmapFromParent(QGraphicsItem* o, qreal x1, qreal x2) const { return o->mapFromParent(x1, x2); }
    Q_INVOKABLE QPointF MmapFromScene(QGraphicsItem* o, const QPointF& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPolygonF MmapFromScene(QGraphicsItem* o, const QRectF& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPolygonF MmapFromScene(QGraphicsItem* o, const QPolygonF& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPainterPath MmapFromScene(QGraphicsItem* o, const QPainterPath& x1) const { return o->mapFromScene(x1); }
    Q_INVOKABLE QPolygonF MmapFromScene(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapFromScene(x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MmapFromScene(QGraphicsItem* o, qreal x1, qreal x2) const { return o->mapFromScene(x1, x2); }
    Q_INVOKABLE QRectF MmapRectFromItem(QGraphicsItem* o, const QGraphicsItem* x1, const QRectF& x2) const { return o->mapRectFromItem(x1, x2); }
    Q_INVOKABLE QRectF MmapRectFromItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3, qreal x4, qreal x5) const { return o->mapRectFromItem(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QRectF MmapRectFromParent(QGraphicsItem* o, const QRectF& x1) const { return o->mapRectFromParent(x1); }
    Q_INVOKABLE QRectF MmapRectFromParent(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapRectFromParent(x1, x2, x3, x4); }
    Q_INVOKABLE QRectF MmapRectFromScene(QGraphicsItem* o, const QRectF& x1) const { return o->mapRectFromScene(x1); }
    Q_INVOKABLE QRectF MmapRectFromScene(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapRectFromScene(x1, x2, x3, x4); }
    Q_INVOKABLE QRectF MmapRectToItem(QGraphicsItem* o, const QGraphicsItem* x1, const QRectF& x2) const { return o->mapRectToItem(x1, x2); }
    Q_INVOKABLE QRectF MmapRectToItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3, qreal x4, qreal x5) const { return o->mapRectToItem(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QRectF MmapRectToParent(QGraphicsItem* o, const QRectF& x1) const { return o->mapRectToParent(x1); }
    Q_INVOKABLE QRectF MmapRectToParent(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapRectToParent(x1, x2, x3, x4); }
    Q_INVOKABLE QRectF MmapRectToScene(QGraphicsItem* o, const QRectF& x1) const { return o->mapRectToScene(x1); }
    Q_INVOKABLE QRectF MmapRectToScene(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapRectToScene(x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPointF& x2) const { return o->mapToItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, const QRectF& x2) const { return o->mapToItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPolygonF& x2) const { return o->mapToItem(x1, x2); }
    Q_INVOKABLE QPainterPath MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, const QPainterPath& x2) const { return o->mapToItem(x1, x2); }
    Q_INVOKABLE QPolygonF MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3, qreal x4, qreal x5) const { return o->mapToItem(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QPointF MmapToItem(QGraphicsItem* o, const QGraphicsItem* x1, qreal x2, qreal x3) const { return o->mapToItem(x1, x2, x3); }
    Q_INVOKABLE QPointF MmapToParent(QGraphicsItem* o, const QPointF& x1) const { return o->mapToParent(x1); }
    Q_INVOKABLE QPolygonF MmapToParent(QGraphicsItem* o, const QRectF& x1) const { return o->mapToParent(x1); }
    Q_INVOKABLE QPolygonF MmapToParent(QGraphicsItem* o, const QPolygonF& x1) const { return o->mapToParent(x1); }
    Q_INVOKABLE QPainterPath MmapToParent(QGraphicsItem* o, const QPainterPath& x1) const { return o->mapToParent(x1); }
    Q_INVOKABLE QPolygonF MmapToParent(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapToParent(x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MmapToParent(QGraphicsItem* o, qreal x1, qreal x2) const { return o->mapToParent(x1, x2); }
    Q_INVOKABLE QPointF MmapToScene(QGraphicsItem* o, const QPointF& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPolygonF MmapToScene(QGraphicsItem* o, const QRectF& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPolygonF MmapToScene(QGraphicsItem* o, const QPolygonF& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPainterPath MmapToScene(QGraphicsItem* o, const QPainterPath& x1) const { return o->mapToScene(x1); }
    Q_INVOKABLE QPolygonF MmapToScene(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) const { return o->mapToScene(x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MmapToScene(QGraphicsItem* o, qreal x1, qreal x2) const { return o->mapToScene(x1, x2); }
    Q_INVOKABLE void MmoveBy(QGraphicsItem* o, qreal x1, qreal x2) { o->moveBy(x1, x2); }
    Q_INVOKABLE qreal Mopacity(QGraphicsItem* o) const { return o->opacity(); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QGraphicsItem* Mpanel(QGraphicsItem* o) const { return o->panel(); }
    Q_INVOKABLE QGraphicsItem::PanelModality MpanelModality(QGraphicsItem* o) const { return o->panelModality(); }
    Q_INVOKABLE QGraphicsItem* MparentItem(QGraphicsItem* o) const { return o->parentItem(); }
    Q_INVOKABLE QGraphicsObject* MparentObject(QGraphicsItem* o) const { return o->parentObject(); }
    Q_INVOKABLE QGraphicsWidget* MparentWidget(QGraphicsItem* o) const { return o->parentWidget(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsItem* o) const { return o->pos(); }
    Q_INVOKABLE void MremoveSceneEventFilter(QGraphicsItem* o, QGraphicsItem* x1) { o->removeSceneEventFilter(x1); }
    Q_INVOKABLE void MresetTransform(QGraphicsItem* o) { o->resetTransform(); }
    Q_INVOKABLE qreal Mrotation(QGraphicsItem* o) const { return o->rotation(); }
    Q_INVOKABLE qreal Mscale(QGraphicsItem* o) const { return o->scale(); }
    Q_INVOKABLE QGraphicsScene* Mscene(QGraphicsItem* o) const { return o->scene(); }
    Q_INVOKABLE QRectF MsceneBoundingRect(QGraphicsItem* o) const { return o->sceneBoundingRect(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsItem* o) const { return o->scenePos(); }
    Q_INVOKABLE QTransform MsceneTransform(QGraphicsItem* o) const { return o->sceneTransform(); }
    Q_INVOKABLE void Mscroll(QGraphicsItem* o, qreal x1, qreal x2, const QRectF& x3 = QRectF()) { o->scroll(x1, x2, x3); }
    Q_INVOKABLE void MsetAcceptDrops(QGraphicsItem* o, bool x1) { o->setAcceptDrops(x1); }
    Q_INVOKABLE void MsetAcceptHoverEvents(QGraphicsItem* o, bool x1) { o->setAcceptHoverEvents(x1); }
    Q_INVOKABLE void MsetAcceptTouchEvents(QGraphicsItem* o, bool x1) { o->setAcceptTouchEvents(x1); }
    Q_INVOKABLE void MsetAcceptedMouseButtons(QGraphicsItem* o, Qt::MouseButtons x1) { o->setAcceptedMouseButtons(x1); }
    Q_INVOKABLE void MsetActive(QGraphicsItem* o, bool x1) { o->setActive(x1); }
    Q_INVOKABLE void MsetBoundingRegionGranularity(QGraphicsItem* o, qreal x1) { o->setBoundingRegionGranularity(x1); }
    Q_INVOKABLE void MsetCacheMode(QGraphicsItem* o, QGraphicsItem::CacheMode x1, const QSize& x2 = QSize()) { o->setCacheMode(x1, x2); }
    Q_INVOKABLE void MsetCursor(QGraphicsItem* o, const QCursor& x1) { o->setCursor(x1); }
    Q_INVOKABLE void MsetData(QGraphicsItem* o, int x1, const QVariant& x2) { o->setData(x1, x2); }
    Q_INVOKABLE void MsetEnabled(QGraphicsItem* o, bool x1) { o->setEnabled(x1); }
    Q_INVOKABLE void MsetFiltersChildEvents(QGraphicsItem* o, bool x1) { o->setFiltersChildEvents(x1); }
    Q_INVOKABLE void MsetFlag(QGraphicsItem* o, QGraphicsItem::GraphicsItemFlag x1, bool x2 = true) { o->setFlag(x1, x2); }
    Q_INVOKABLE void MsetFlags(QGraphicsItem* o, QGraphicsItem::GraphicsItemFlags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetFocus(QGraphicsItem* o, Qt::FocusReason x1 = Qt::OtherFocusReason) { o->setFocus(x1); }
    Q_INVOKABLE void MsetFocusProxy(QGraphicsItem* o, QGraphicsItem* x1) { o->setFocusProxy(x1); }
    Q_INVOKABLE void MsetGraphicsEffect(QGraphicsItem* o, QGraphicsEffect* x1) { o->setGraphicsEffect(x1); }
    Q_INVOKABLE void MsetGroup(QGraphicsItem* o, QGraphicsItemGroup* x1) { o->setGroup(x1); }
    Q_INVOKABLE void MsetInputMethodHints(QGraphicsItem* o, Qt::InputMethodHints x1) { o->setInputMethodHints(x1); }
    Q_INVOKABLE void MsetOpacity(QGraphicsItem* o, qreal x1) { o->setOpacity(x1); }
    Q_INVOKABLE void MsetPanelModality(QGraphicsItem* o, QGraphicsItem::PanelModality x1) { o->setPanelModality(x1); }
    Q_INVOKABLE void MsetParentItem(QGraphicsItem* o, QGraphicsItem* x1) { o->setParentItem(x1); }
    Q_INVOKABLE void MsetPos(QGraphicsItem* o, const QPointF& x1) { o->setPos(x1); }
    Q_INVOKABLE void MsetPos(QGraphicsItem* o, qreal x1, qreal x2) { o->setPos(x1, x2); }
    Q_INVOKABLE void MsetRotation(QGraphicsItem* o, qreal x1) { o->setRotation(x1); }
    Q_INVOKABLE void MsetScale(QGraphicsItem* o, qreal x1) { o->setScale(x1); }
    Q_INVOKABLE void MsetSelected(QGraphicsItem* o, bool x1) { o->setSelected(x1); }
    Q_INVOKABLE void MsetToolTip(QGraphicsItem* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetTransform(QGraphicsItem* o, const QTransform& x1, bool x2 = false) { o->setTransform(x1, x2); }
    Q_INVOKABLE void MsetTransformOriginPoint(QGraphicsItem* o, const QPointF& x1) { o->setTransformOriginPoint(x1); }
    Q_INVOKABLE void MsetTransformOriginPoint(QGraphicsItem* o, qreal x1, qreal x2) { o->setTransformOriginPoint(x1, x2); }
    Q_INVOKABLE void MsetTransformations(QGraphicsItem* o, const QList<QGraphicsTransform*>& x1) { o->setTransformations(x1); }
    Q_INVOKABLE void MsetVisible(QGraphicsItem* o, bool x1) { o->setVisible(x1); }
    Q_INVOKABLE void MsetX(QGraphicsItem* o, qreal x1) { o->setX(x1); }
    Q_INVOKABLE void MsetY(QGraphicsItem* o, qreal x1) { o->setY(x1); }
    Q_INVOKABLE void MsetZValue(QGraphicsItem* o, qreal x1) { o->setZValue(x1); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsItem* o) const { return o->shape(); }
    Q_INVOKABLE void Mshow(QGraphicsItem* o) { o->show(); }
    Q_INVOKABLE void MstackBefore(QGraphicsItem* o, const QGraphicsItem* x1) { o->stackBefore(x1); }
    Q_INVOKABLE QGraphicsObject* MtoGraphicsObject(QGraphicsItem* o) { return o->toGraphicsObject(); }
    Q_INVOKABLE const QGraphicsObject* MtoGraphicsObject(QGraphicsItem* o) const { return o->toGraphicsObject(); }
    Q_INVOKABLE QString MtoolTip(QGraphicsItem* o) const { return o->toolTip(); }
    Q_INVOKABLE QGraphicsItem* MtopLevelItem(QGraphicsItem* o) const { return o->topLevelItem(); }
    Q_INVOKABLE QGraphicsWidget* MtopLevelWidget(QGraphicsItem* o) const { return o->topLevelWidget(); }
    Q_INVOKABLE QTransform Mtransform(QGraphicsItem* o) const { return o->transform(); }
    Q_INVOKABLE QPointF MtransformOriginPoint(QGraphicsItem* o) const { return o->transformOriginPoint(); }
    Q_INVOKABLE QList<QGraphicsTransform*> Mtransformations(QGraphicsItem* o) const { return o->transformations(); }
    Q_INVOKABLE int Mtype(QGraphicsItem* o) const { return o->type(); }
    Q_INVOKABLE void MungrabKeyboard(QGraphicsItem* o) { o->ungrabKeyboard(); }
    Q_INVOKABLE void MungrabMouse(QGraphicsItem* o) { o->ungrabMouse(); }
    Q_INVOKABLE void MunsetCursor(QGraphicsItem* o) { o->unsetCursor(); }
    Q_INVOKABLE void Mupdate(QGraphicsItem* o, const QRectF& x1 = QRectF()) { o->update(x1); }
    Q_INVOKABLE void Mupdate(QGraphicsItem* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->update(x1, x2, x3, x4); }
    Q_INVOKABLE QGraphicsWidget* Mwindow(QGraphicsItem* o) const { return o->window(); }
    Q_INVOKABLE qreal Mx(QGraphicsItem* o) const { return o->x(); }
    Q_INVOKABLE qreal My(QGraphicsItem* o) const { return o->y(); }
    Q_INVOKABLE qreal MzValue(QGraphicsItem* o) const { return o->zValue(); }
    Q_INVOKABLE const int SType() { return QGraphicsItem::Type; }
    Q_INVOKABLE const int SUserType() { return QGraphicsItem::UserType; }
};

class N30 : public QObject { // QGraphicsLayoutItem
    Q_OBJECT
public:
    Q_INVOKABLE QRectF McontentsRect(QGraphicsLayoutItem* o) const { return o->contentsRect(); }
    Q_INVOKABLE QSizeF MeffectiveSizeHint(QGraphicsLayoutItem* o, Qt::SizeHint x1, const QSizeF& x2 = QSizeF()) const { return o->effectiveSizeHint(x1, x2); }
    Q_INVOKABLE QRectF Mgeometry(QGraphicsLayoutItem* o) const { return o->geometry(); }
    Q_INVOKABLE QGraphicsItem* MgraphicsItem(QGraphicsLayoutItem* o) const { return o->graphicsItem(); }
    Q_INVOKABLE bool MisLayout(QGraphicsLayoutItem* o) const { return o->isLayout(); }
    Q_INVOKABLE qreal MmaximumHeight(QGraphicsLayoutItem* o) const { return o->maximumHeight(); }
    Q_INVOKABLE QSizeF MmaximumSize(QGraphicsLayoutItem* o) const { return o->maximumSize(); }
    Q_INVOKABLE qreal MmaximumWidth(QGraphicsLayoutItem* o) const { return o->maximumWidth(); }
    Q_INVOKABLE qreal MminimumHeight(QGraphicsLayoutItem* o) const { return o->minimumHeight(); }
    Q_INVOKABLE QSizeF MminimumSize(QGraphicsLayoutItem* o) const { return o->minimumSize(); }
    Q_INVOKABLE qreal MminimumWidth(QGraphicsLayoutItem* o) const { return o->minimumWidth(); }
    Q_INVOKABLE bool MownedByLayout(QGraphicsLayoutItem* o) const { return o->ownedByLayout(); }
    Q_INVOKABLE QGraphicsLayoutItem* MparentLayoutItem(QGraphicsLayoutItem* o) const { return o->parentLayoutItem(); }
    Q_INVOKABLE qreal MpreferredHeight(QGraphicsLayoutItem* o) const { return o->preferredHeight(); }
    Q_INVOKABLE QSizeF MpreferredSize(QGraphicsLayoutItem* o) const { return o->preferredSize(); }
    Q_INVOKABLE qreal MpreferredWidth(QGraphicsLayoutItem* o) const { return o->preferredWidth(); }
    Q_INVOKABLE void MsetGeometry(QGraphicsLayoutItem* o, const QRectF& x1) { o->setGeometry(x1); }
    Q_INVOKABLE void MsetMaximumHeight(QGraphicsLayoutItem* o, qreal x1) { o->setMaximumHeight(x1); }
    Q_INVOKABLE void MsetMaximumSize(QGraphicsLayoutItem* o, const QSizeF& x1) { o->setMaximumSize(x1); }
    Q_INVOKABLE void MsetMaximumSize(QGraphicsLayoutItem* o, qreal x1, qreal x2) { o->setMaximumSize(x1, x2); }
    Q_INVOKABLE void MsetMaximumWidth(QGraphicsLayoutItem* o, qreal x1) { o->setMaximumWidth(x1); }
    Q_INVOKABLE void MsetMinimumHeight(QGraphicsLayoutItem* o, qreal x1) { o->setMinimumHeight(x1); }
    Q_INVOKABLE void MsetMinimumSize(QGraphicsLayoutItem* o, const QSizeF& x1) { o->setMinimumSize(x1); }
    Q_INVOKABLE void MsetMinimumSize(QGraphicsLayoutItem* o, qreal x1, qreal x2) { o->setMinimumSize(x1, x2); }
    Q_INVOKABLE void MsetMinimumWidth(QGraphicsLayoutItem* o, qreal x1) { o->setMinimumWidth(x1); }
    Q_INVOKABLE void MsetParentLayoutItem(QGraphicsLayoutItem* o, QGraphicsLayoutItem* x1) { o->setParentLayoutItem(x1); }
    Q_INVOKABLE void MsetPreferredHeight(QGraphicsLayoutItem* o, qreal x1) { o->setPreferredHeight(x1); }
    Q_INVOKABLE void MsetPreferredSize(QGraphicsLayoutItem* o, const QSizeF& x1) { o->setPreferredSize(x1); }
    Q_INVOKABLE void MsetPreferredSize(QGraphicsLayoutItem* o, qreal x1, qreal x2) { o->setPreferredSize(x1, x2); }
    Q_INVOKABLE void MsetPreferredWidth(QGraphicsLayoutItem* o, qreal x1) { o->setPreferredWidth(x1); }
    Q_INVOKABLE void MsetSizePolicy(QGraphicsLayoutItem* o, const QSizePolicy& x1) { o->setSizePolicy(x1); }
    Q_INVOKABLE void MsetSizePolicy(QGraphicsLayoutItem* o, QSizePolicy::Policy x1, QSizePolicy::Policy x2, QSizePolicy::ControlType x3 = QSizePolicy::DefaultType) { o->setSizePolicy(x1, x2, x3); }
    Q_INVOKABLE QSizePolicy MsizePolicy(QGraphicsLayoutItem* o) const { return o->sizePolicy(); }
    Q_INVOKABLE void MupdateGeometry(QGraphicsLayoutItem* o) { o->updateGeometry(); }
};

class N47 : public QObject { // QIcon
    Q_OBJECT
public:
    Q_INVOKABLE void* CC(uint u, LIcon* o) { LIcon* copy = new LIcon(u); *copy = *o; return copy; }
    Q_INVOKABLE void* C(uint u) { return new LIcon(u); }
    Q_INVOKABLE void* C(uint u, const QPixmap& x1) { return new LIcon(u, x1); }
    Q_INVOKABLE void* C(uint u, const QIcon& x1) { return new LIcon(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LIcon(u, x1); }
    Q_INVOKABLE QSize MactualSize(QIcon* o, const QSize& x1, QIcon::Mode x2 = QIcon::Normal, QIcon::State x3 = QIcon::Off) const { return o->actualSize(x1, x2, x3); }
    Q_INVOKABLE void MaddFile(QIcon* o, const QString& x1, const QSize& x2 = QSize(), QIcon::Mode x3 = QIcon::Normal, QIcon::State x4 = QIcon::Off) { o->addFile(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddPixmap(QIcon* o, const QPixmap& x1, QIcon::Mode x2 = QIcon::Normal, QIcon::State x3 = QIcon::Off) { o->addPixmap(x1, x2, x3); }
    Q_INVOKABLE QList<QSize> MavailableSizes(QIcon* o, QIcon::Mode x1 = QIcon::Normal, QIcon::State x2 = QIcon::Off) const { return o->availableSizes(x1, x2); }
    Q_INVOKABLE bool MisNull(QIcon* o) const { return o->isNull(); }
    Q_INVOKABLE void Mpaint(QIcon* o, QPainter* x1, const QRect& x2, Qt::Alignment x3 = Qt::AlignCenter, QIcon::Mode x4 = QIcon::Normal, QIcon::State x5 = QIcon::Off) const { o->paint(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void Mpaint(QIcon* o, QPainter* x1, int x2, int x3, int x4, int x5, Qt::Alignment x6 = Qt::AlignCenter, QIcon::Mode x7 = QIcon::Normal, QIcon::State x8 = QIcon::Off) const { o->paint(x1, x2, x3, x4, x5, x6, x7, x8); }
    Q_INVOKABLE QPixmap Mpixmap(QIcon* o, const QSize& x1, QIcon::Mode x2 = QIcon::Normal, QIcon::State x3 = QIcon::Off) const { return o->pixmap(x1, x2, x3); }
    Q_INVOKABLE QPixmap Mpixmap(QIcon* o, int x1, int x2, QIcon::Mode x3 = QIcon::Normal, QIcon::State x4 = QIcon::Off) const { return o->pixmap(x1, x2, x3, x4); }
    Q_INVOKABLE QPixmap Mpixmap(QIcon* o, int x1, QIcon::Mode x2 = QIcon::Normal, QIcon::State x3 = QIcon::Off) const { return o->pixmap(x1, x2, x3); }
    Q_INVOKABLE QIcon SfromTheme(const QString& x1, const QIcon& x2 = QIcon()) { return QIcon::fromTheme(x1, x2); }
    Q_INVOKABLE bool ShasThemeIcon(const QString& x1) { return QIcon::hasThemeIcon(x1); }
    Q_INVOKABLE void SsetThemeName(const QString& x1) { QIcon::setThemeName(x1); }
    Q_INVOKABLE void SsetThemeSearchPaths(const QStringList& x1) { QIcon::setThemeSearchPaths(x1); }
    Q_INVOKABLE QString SthemeName() { return QIcon::themeName(); }
    Q_INVOKABLE QStringList SthemeSearchPaths() { return QIcon::themeSearchPaths(); }
};

class N51 : public QObject { // QItemEditorFactory
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LItemEditorFactory(u); }
    Q_INVOKABLE QWidget* McreateEditor(QItemEditorFactory* o, QVariant::Type x1, QWidget* x2) const { return o->createEditor(x1, x2); }
    Q_INVOKABLE void MregisterEditor(QItemEditorFactory* o, QVariant::Type x1, QItemEditorCreatorBase* x2) { o->registerEditor(x1, x2); }
    Q_INVOKABLE QByteArray MvaluePropertyName(QItemEditorFactory* o, QVariant::Type x1) const { return o->valuePropertyName(x1); }
    Q_INVOKABLE const QItemEditorFactory* SdefaultFactory() { return QItemEditorFactory::defaultFactory(); }
    Q_INVOKABLE void SsetDefaultFactory(QItemEditorFactory* x1) { QItemEditorFactory::setDefaultFactory(x1); }
};

class N52 : public QObject { // QItemSelection
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LItemSelection(u); }
    Q_INVOKABLE void* C(uint u, const QModelIndex& x1, const QModelIndex& x2) { return new LItemSelection(u, x1, x2); }
    Q_INVOKABLE bool Mcontains(QItemSelection* o, const QModelIndex& x1) const { return o->contains(x1); }
    Q_INVOKABLE QModelIndexList Mindexes(QItemSelection* o) const { return o->indexes(); }
    Q_INVOKABLE void Mmerge(QItemSelection* o, const QItemSelection& x1, QItemSelectionModel::SelectionFlags x2) { o->merge(x1, x2); }
    Q_INVOKABLE void Mselect(QItemSelection* o, const QModelIndex& x1, const QModelIndex& x2) { o->select(x1, x2); }
    Q_INVOKABLE void Ssplit(const QItemSelectionRange& x1, const QItemSelectionRange& x2, QItemSelection* x3) { QItemSelection::split(x1, x2, x3); }
};

class N53 : public QObject { // QItemSelectionRange
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LItemSelectionRange(u); }
    Q_INVOKABLE void* C(uint u, const QItemSelectionRange& x1) { return new LItemSelectionRange(u, x1); }
    Q_INVOKABLE void* C(uint u, const QModelIndex& x1, const QModelIndex& x2) { return new LItemSelectionRange(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QModelIndex& x1) { return new LItemSelectionRange(u, x1); }
    Q_INVOKABLE int Mbottom(QItemSelectionRange* o) const { return o->bottom(); }
    Q_INVOKABLE QModelIndex MbottomRight(QItemSelectionRange* o) const { return o->bottomRight(); }
    Q_INVOKABLE bool Mcontains(QItemSelectionRange* o, const QModelIndex& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool Mcontains(QItemSelectionRange* o, int x1, int x2, const QModelIndex& x3) const { return o->contains(x1, x2, x3); }
    Q_INVOKABLE int Mheight(QItemSelectionRange* o) const { return o->height(); }
    Q_INVOKABLE QModelIndexList Mindexes(QItemSelectionRange* o) const { return o->indexes(); }
    Q_INVOKABLE QItemSelectionRange Mintersected(QItemSelectionRange* o, const QItemSelectionRange& x1) const { return o->intersected(x1); }
    Q_INVOKABLE bool Mintersects(QItemSelectionRange* o, const QItemSelectionRange& x1) const { return o->intersects(x1); }
    Q_INVOKABLE bool MisValid(QItemSelectionRange* o) const { return o->isValid(); }
    Q_INVOKABLE int Mleft(QItemSelectionRange* o) const { return o->left(); }
    Q_INVOKABLE const QAbstractItemModel* Mmodel(QItemSelectionRange* o) const { return o->model(); }
    Q_INVOKABLE QModelIndex Mparent(QItemSelectionRange* o) const { return o->parent(); }
    Q_INVOKABLE int Mright(QItemSelectionRange* o) const { return o->right(); }
    Q_INVOKABLE int Mtop(QItemSelectionRange* o) const { return o->top(); }
    Q_INVOKABLE QModelIndex MtopLeft(QItemSelectionRange* o) const { return o->topLeft(); }
    Q_INVOKABLE int Mwidth(QItemSelectionRange* o) const { return o->width(); }
};

class N55 : public QObject { // QLayoutItem
    Q_OBJECT
public:
    Q_INVOKABLE Qt::Alignment Malignment(QLayoutItem* o) const { return o->alignment(); }
    Q_INVOKABLE QSizePolicy::ControlTypes McontrolTypes(QLayoutItem* o) const { return o->controlTypes(); }
    Q_INVOKABLE Qt::Orientations MexpandingDirections(QLayoutItem* o) const { return o->expandingDirections(); }
    Q_INVOKABLE QRect Mgeometry(QLayoutItem* o) const { return o->geometry(); }
    Q_INVOKABLE bool MhasHeightForWidth(QLayoutItem* o) const { return o->hasHeightForWidth(); }
    Q_INVOKABLE int MheightForWidth(QLayoutItem* o, int x1) const { return o->heightForWidth(x1); }
    Q_INVOKABLE void Minvalidate(QLayoutItem* o) { o->invalidate(); }
    Q_INVOKABLE bool MisEmpty(QLayoutItem* o) const { return o->isEmpty(); }
    Q_INVOKABLE QLayout* Mlayout(QLayoutItem* o) { return o->layout(); }
    Q_INVOKABLE QSize MmaximumSize(QLayoutItem* o) const { return o->maximumSize(); }
    Q_INVOKABLE int MminimumHeightForWidth(QLayoutItem* o, int x1) const { return o->minimumHeightForWidth(x1); }
    Q_INVOKABLE QSize MminimumSize(QLayoutItem* o) const { return o->minimumSize(); }
    Q_INVOKABLE void MsetAlignment(QLayoutItem* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetGeometry(QLayoutItem* o, const QRect& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSize MsizeHint(QLayoutItem* o) const { return o->sizeHint(); }
    Q_INVOKABLE QSpacerItem* MspacerItem(QLayoutItem* o) { return o->spacerItem(); }
    Q_INVOKABLE QWidget* Mwidget(QLayoutItem* o) { return o->widget(); }
};

class N57 : public QObject { // QListWidgetItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QListWidget* x1 = 0, int x2 = QListWidgetItem::Type) { return new LListWidgetItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QListWidget* x2 = 0, int x3 = QListWidgetItem::Type) { return new LListWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QIcon& x1, const QString& x2, QListWidget* x3 = 0, int x4 = QListWidgetItem::Type) { return new LListWidgetItem(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QListWidgetItem& x1) { return new LListWidgetItem(u, x1); }
    Q_INVOKABLE QBrush Mbackground(QListWidgetItem* o) const { return o->background(); }
    Q_INVOKABLE Qt::CheckState McheckState(QListWidgetItem* o) const { return o->checkState(); }
    Q_INVOKABLE QListWidgetItem* Mclone(QListWidgetItem* o) const { return o->clone(); }
    Q_INVOKABLE QVariant Mdata(QListWidgetItem* o, int x1) const { return o->data(x1); }
    Q_INVOKABLE Qt::ItemFlags Mflags(QListWidgetItem* o) const { return o->flags(); }
    Q_INVOKABLE QFont Mfont(QListWidgetItem* o) const { return o->font(); }
    Q_INVOKABLE QBrush Mforeground(QListWidgetItem* o) const { return o->foreground(); }
    Q_INVOKABLE QIcon Micon(QListWidgetItem* o) const { return o->icon(); }
    Q_INVOKABLE bool MisHidden(QListWidgetItem* o) const { return o->isHidden(); }
    Q_INVOKABLE bool MisSelected(QListWidgetItem* o) const { return o->isSelected(); }
    Q_INVOKABLE QListWidget* MlistWidget(QListWidgetItem* o) const { return o->listWidget(); }
    Q_INVOKABLE void MsetBackground(QListWidgetItem* o, const QBrush& x1) { o->setBackground(x1); }
    Q_INVOKABLE void MsetCheckState(QListWidgetItem* o, Qt::CheckState x1) { o->setCheckState(x1); }
    Q_INVOKABLE void MsetData(QListWidgetItem* o, int x1, const QVariant& x2) { o->setData(x1, x2); }
    Q_INVOKABLE void MsetFlags(QListWidgetItem* o, Qt::ItemFlags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetFont(QListWidgetItem* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetForeground(QListWidgetItem* o, const QBrush& x1) { o->setForeground(x1); }
    Q_INVOKABLE void MsetHidden(QListWidgetItem* o, bool x1) { o->setHidden(x1); }
    Q_INVOKABLE void MsetIcon(QListWidgetItem* o, const QIcon& x1) { o->setIcon(x1); }
    Q_INVOKABLE void MsetSelected(QListWidgetItem* o, bool x1) { o->setSelected(x1); }
    Q_INVOKABLE void MsetSizeHint(QListWidgetItem* o, const QSize& x1) { o->setSizeHint(x1); }
    Q_INVOKABLE void MsetStatusTip(QListWidgetItem* o, const QString& x1) { o->setStatusTip(x1); }
    Q_INVOKABLE void MsetText(QListWidgetItem* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE void MsetTextAlignment(QListWidgetItem* o, int x1) { o->setTextAlignment(x1); }
    Q_INVOKABLE void MsetToolTip(QListWidgetItem* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetWhatsThis(QListWidgetItem* o, const QString& x1) { o->setWhatsThis(x1); }
    Q_INVOKABLE QSize MsizeHint(QListWidgetItem* o) const { return o->sizeHint(); }
    Q_INVOKABLE QString MstatusTip(QListWidgetItem* o) const { return o->statusTip(); }
    Q_INVOKABLE QString Mtext(QListWidgetItem* o) const { return o->text(); }
    Q_INVOKABLE int MtextAlignment(QListWidgetItem* o) const { return o->textAlignment(); }
    Q_INVOKABLE QString MtoolTip(QListWidgetItem* o) const { return o->toolTip(); }
    Q_INVOKABLE int Mtype(QListWidgetItem* o) const { return o->type(); }
    Q_INVOKABLE QString MwhatsThis(QListWidgetItem* o) const { return o->whatsThis(); }
};

class N58 : public QObject { // QLocale
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LLocale(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LLocale(u, x1); }
    Q_INVOKABLE void* C(uint u, QLocale::Language x1, QLocale::Country x2 = QLocale::AnyCountry) { return new LLocale(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QLocale& x1) { return new LLocale(u, x1); }
    Q_INVOKABLE QString MamText(QLocale* o) const { return o->amText(); }
    Q_INVOKABLE QLocale::Country Mcountry(QLocale* o) const { return o->country(); }
    Q_INVOKABLE QString MdateFormat(QLocale* o, QLocale::FormatType x1 = QLocale::LongFormat) const { return o->dateFormat(x1); }
    Q_INVOKABLE QString MdateTimeFormat(QLocale* o, QLocale::FormatType x1 = QLocale::LongFormat) const { return o->dateTimeFormat(x1); }
    Q_INVOKABLE QString MdayName(QLocale* o, int x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->dayName(x1, x2); }
    Q_INVOKABLE QChar MdecimalPoint(QLocale* o) const { return o->decimalPoint(); }
    Q_INVOKABLE QChar Mexponential(QLocale* o) const { return o->exponential(); }
    Q_INVOKABLE QChar MgroupSeparator(QLocale* o) const { return o->groupSeparator(); }
    Q_INVOKABLE QLocale::Language Mlanguage(QLocale* o) const { return o->language(); }
    Q_INVOKABLE QLocale::MeasurementSystem MmeasurementSystem(QLocale* o) const { return o->measurementSystem(); }
    Q_INVOKABLE QString MmonthName(QLocale* o, int x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->monthName(x1, x2); }
    Q_INVOKABLE QString Mname(QLocale* o) const { return o->name(); }
    Q_INVOKABLE QChar MnegativeSign(QLocale* o) const { return o->negativeSign(); }
    Q_INVOKABLE QLocale::NumberOptions MnumberOptions(QLocale* o) const { return o->numberOptions(); }
    Q_INVOKABLE QChar Mpercent(QLocale* o) const { return o->percent(); }
    Q_INVOKABLE QString MpmText(QLocale* o) const { return o->pmText(); }
    Q_INVOKABLE QChar MpositiveSign(QLocale* o) const { return o->positiveSign(); }
    Q_INVOKABLE void MsetNumberOptions(QLocale* o, QLocale::NumberOptions x1) { o->setNumberOptions(x1); }
    Q_INVOKABLE QString MstandaloneDayName(QLocale* o, int x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->standaloneDayName(x1, x2); }
    Q_INVOKABLE QString MstandaloneMonthName(QLocale* o, int x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->standaloneMonthName(x1, x2); }
    Q_INVOKABLE QString MtimeFormat(QLocale* o, QLocale::FormatType x1 = QLocale::LongFormat) const { return o->timeFormat(x1); }
    Q_INVOKABLE QDate MtoDate(QLocale* o, const QString& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toDate(x1, x2); }
    Q_INVOKABLE QDate MtoDate(QLocale* o, const QString& x1, const QString& x2) const { return o->toDate(x1, x2); }
    Q_INVOKABLE QDateTime MtoDateTime(QLocale* o, const QString& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toDateTime(x1, x2); }
    Q_INVOKABLE QDateTime MtoDateTime(QLocale* o, const QString& x1, const QString& x2) const { return o->toDateTime(x1, x2); }
    Q_INVOKABLE double MtoDouble(QLocale* o, const QString& x1, bool* x2 = 0) const { return o->toDouble(x1, x2); }
    Q_INVOKABLE float MtoFloat(QLocale* o, const QString& x1, bool* x2 = 0) const { return o->toFloat(x1, x2); }
    Q_INVOKABLE int MtoInt(QLocale* o, const QString& x1, bool* x2 = 0, int x3 = 0) const { return o->toInt(x1, x2, x3); }
    Q_INVOKABLE qlonglong MtoLongLong(QLocale* o, const QString& x1, bool* x2 = 0, int x3 = 0) const { return o->toLongLong(x1, x2, x3); }
    Q_INVOKABLE short MtoShort(QLocale* o, const QString& x1, bool* x2 = 0, int x3 = 0) const { return o->toShort(x1, x2, x3); }
    Q_INVOKABLE QString MtoString(QLocale* o, qlonglong x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QDate& x1, const QString& x2) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QDate& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QTime& x1, const QString& x2) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QTime& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QDateTime& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, const QDateTime& x1, const QString& x2) const { return o->toString(x1, x2); }
    Q_INVOKABLE QString MtoString(QLocale* o, qulonglong x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, double x1, char x2 = 'g', int x3 = 6) const { return o->toString(x1, x2, x3); }
    Q_INVOKABLE QString MtoString(QLocale* o, short x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, ushort x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, int x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, uint x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QLocale* o, float x1, char x2 = 'g', int x3 = 6) const { return o->toString(x1, x2, x3); }
    Q_INVOKABLE QTime MtoTime(QLocale* o, const QString& x1, QLocale::FormatType x2 = QLocale::LongFormat) const { return o->toTime(x1, x2); }
    Q_INVOKABLE QTime MtoTime(QLocale* o, const QString& x1, const QString& x2) const { return o->toTime(x1, x2); }
    Q_INVOKABLE uint MtoUInt(QLocale* o, const QString& x1, bool* x2 = 0, int x3 = 0) const { return o->toUInt(x1, x2, x3); }
    Q_INVOKABLE qlonglong MtoULongLong(QLocale* o, const QString& x1, bool* x2 = 0, int x3 = 0) const { return o->toULongLong(x1, x2, x3); }
    Q_INVOKABLE ushort MtoUShort(QLocale* o, const QString& x1, bool* x2 = 0, int x3 = 0) const { return o->toUShort(x1, x2, x3); }
    Q_INVOKABLE QChar MzeroDigit(QLocale* o) const { return o->zeroDigit(); }
    Q_INVOKABLE QLocale Sc() { return QLocale::c(); }
    Q_INVOKABLE QString ScountryToString(QLocale::Country x1) { return QLocale::countryToString(x1); }
    Q_INVOKABLE QString SlanguageToString(QLocale::Language x1) { return QLocale::languageToString(x1); }
    Q_INVOKABLE void SsetDefault(const QLocale& x1) { QLocale::setDefault(x1); }
    Q_INVOKABLE QLocale Ssystem() { return QLocale::system(); }
};

class N59 : public QObject { // QMatrix
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LMatrix(u); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { return new LMatrix(u, x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void* C(uint u, const QMatrix& x1) { return new LMatrix(u, x1); }
    Q_INVOKABLE qreal Mm11(QMatrix* o) const { return o->m11(); }
    Q_INVOKABLE qreal Mm12(QMatrix* o) const { return o->m12(); }
    Q_INVOKABLE qreal Mm21(QMatrix* o) const { return o->m21(); }
    Q_INVOKABLE qreal Mm22(QMatrix* o) const { return o->m22(); }
    Q_INVOKABLE qreal Mdeterminant(QMatrix* o) const { return o->determinant(); }
    Q_INVOKABLE qreal Mdx(QMatrix* o) const { return o->dx(); }
    Q_INVOKABLE qreal Mdy(QMatrix* o) const { return o->dy(); }
    Q_INVOKABLE QMatrix Minverted(QMatrix* o, bool* x1 = 0) const { return o->inverted(x1); }
    Q_INVOKABLE bool MisIdentity(QMatrix* o) const { return o->isIdentity(); }
    Q_INVOKABLE bool MisInvertible(QMatrix* o) const { return o->isInvertible(); }
    Q_INVOKABLE QPointF Mmap(QMatrix* o, const QPointF& x1) const { return o->map(x1); }
    Q_INVOKABLE QPoint Mmap(QMatrix* o, const QPoint& x1) const { return o->map(x1); }
    Q_INVOKABLE QLineF Mmap(QMatrix* o, const QLineF& x1) const { return o->map(x1); }
    Q_INVOKABLE QLine Mmap(QMatrix* o, const QLine& x1) const { return o->map(x1); }
    Q_INVOKABLE QPolygonF Mmap(QMatrix* o, const QPolygonF& x1) const { return o->map(x1); }
    Q_INVOKABLE QPolygon Mmap(QMatrix* o, const QPolygon& x1) const { return o->map(x1); }
    Q_INVOKABLE QRegion Mmap(QMatrix* o, const QRegion& x1) const { return o->map(x1); }
    Q_INVOKABLE QPainterPath Mmap(QMatrix* o, const QPainterPath& x1) const { return o->map(x1); }
    Q_INVOKABLE QRectF MmapRect(QMatrix* o, const QRectF& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QRect MmapRect(QMatrix* o, const QRect& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QPolygon MmapToPolygon(QMatrix* o, const QRect& x1) const { return o->mapToPolygon(x1); }
    Q_INVOKABLE void Mreset(QMatrix* o) { o->reset(); }
    Q_INVOKABLE QMatrix Mrotate(QMatrix* o, qreal x1) { return o->rotate(x1); }
    Q_INVOKABLE QMatrix Mscale(QMatrix* o, qreal x1, qreal x2) { return o->scale(x1, x2); }
    Q_INVOKABLE void MsetMatrix(QMatrix* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { o->setMatrix(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QMatrix Mshear(QMatrix* o, qreal x1, qreal x2) { return o->shear(x1, x2); }
    Q_INVOKABLE QMatrix Mtranslate(QMatrix* o, qreal x1, qreal x2) { return o->translate(x1, x2); }
};

class N60 : public QObject { // QMatrix4x4
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LMatrix4x4(u); }
    Q_INVOKABLE void* C(uint u, const QTransform& x1) { return new LMatrix4x4(u, x1); }
    Q_INVOKABLE void* C(uint u, const QMatrix& x1) { return new LMatrix4x4(u, x1); }
    Q_INVOKABLE QVector4D Mcolumn(QMatrix4x4* o, int x1) const { return o->column(x1); }
    Q_INVOKABLE qreal Mdeterminant(QMatrix4x4* o) const { return o->determinant(); }
    Q_INVOKABLE void Mfill(QMatrix4x4* o, qreal x1) { o->fill(x1); }
    Q_INVOKABLE void MflipCoordinates(QMatrix4x4* o) { o->flipCoordinates(); }
    Q_INVOKABLE void Mfrustum(QMatrix4x4* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { o->frustum(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QMatrix4x4 Minverted(QMatrix4x4* o, bool* x1 = 0) const { return o->inverted(x1); }
    Q_INVOKABLE bool MisIdentity(QMatrix4x4* o) const { return o->isIdentity(); }
    Q_INVOKABLE void MlookAt(QMatrix4x4* o, const QVector3D& x1, const QVector3D& x2, const QVector3D& x3) { o->lookAt(x1, x2, x3); }
    Q_INVOKABLE QPoint Mmap(QMatrix4x4* o, const QPoint& x1) const { return o->map(x1); }
    Q_INVOKABLE QPointF Mmap(QMatrix4x4* o, const QPointF& x1) const { return o->map(x1); }
    Q_INVOKABLE QVector3D Mmap(QMatrix4x4* o, const QVector3D& x1) const { return o->map(x1); }
    Q_INVOKABLE QVector4D Mmap(QMatrix4x4* o, const QVector4D& x1) const { return o->map(x1); }
    Q_INVOKABLE QRect MmapRect(QMatrix4x4* o, const QRect& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QRectF MmapRect(QMatrix4x4* o, const QRectF& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QVector3D MmapVector(QMatrix4x4* o, const QVector3D& x1) const { return o->mapVector(x1); }
    Q_INVOKABLE QMatrix3x3 MnormalMatrix(QMatrix4x4* o) const { return o->normalMatrix(); }
    Q_INVOKABLE void Moptimize(QMatrix4x4* o) { o->optimize(); }
    Q_INVOKABLE void Mortho(QMatrix4x4* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { o->ortho(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void Mortho(QMatrix4x4* o, const QRect& x1) { o->ortho(x1); }
    Q_INVOKABLE void Mortho(QMatrix4x4* o, const QRectF& x1) { o->ortho(x1); }
    Q_INVOKABLE void Mperspective(QMatrix4x4* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->perspective(x1, x2, x3, x4); }
    Q_INVOKABLE void Mrotate(QMatrix4x4* o, qreal x1, const QVector3D& x2) { o->rotate(x1, x2); }
    Q_INVOKABLE void Mrotate(QMatrix4x4* o, const QQuaternion& x1) { o->rotate(x1); }
    Q_INVOKABLE void Mrotate(QMatrix4x4* o, qreal x1, qreal x2, qreal x3, qreal x4 = 0.0f) { o->rotate(x1, x2, x3, x4); }
    Q_INVOKABLE QVector4D Mrow(QMatrix4x4* o, int x1) const { return o->row(x1); }
    Q_INVOKABLE void Mscale(QMatrix4x4* o, const QVector3D& x1) { o->scale(x1); }
    Q_INVOKABLE void Mscale(QMatrix4x4* o, qreal x1, qreal x2) { o->scale(x1, x2); }
    Q_INVOKABLE void Mscale(QMatrix4x4* o, qreal x1, qreal x2, qreal x3) { o->scale(x1, x2, x3); }
    Q_INVOKABLE void Mscale(QMatrix4x4* o, qreal x1) { o->scale(x1); }
    Q_INVOKABLE void MsetColumn(QMatrix4x4* o, int x1, const QVector4D& x2) { o->setColumn(x1, x2); }
    Q_INVOKABLE void MsetRow(QMatrix4x4* o, int x1, const QVector4D& x2) { o->setRow(x1, x2); }
    Q_INVOKABLE void MsetToIdentity(QMatrix4x4* o) { o->setToIdentity(); }
    Q_INVOKABLE QMatrix MtoAffine(QMatrix4x4* o) const { return o->toAffine(); }
    Q_INVOKABLE QTransform MtoTransform(QMatrix4x4* o) const { return o->toTransform(); }
    Q_INVOKABLE QTransform MtoTransform(QMatrix4x4* o, qreal x1) const { return o->toTransform(x1); }
    Q_INVOKABLE void Mtranslate(QMatrix4x4* o, const QVector3D& x1) { o->translate(x1); }
    Q_INVOKABLE void Mtranslate(QMatrix4x4* o, qreal x1, qreal x2) { o->translate(x1, x2); }
    Q_INVOKABLE void Mtranslate(QMatrix4x4* o, qreal x1, qreal x2, qreal x3) { o->translate(x1, x2, x3); }
    Q_INVOKABLE QMatrix4x4 Mtransposed(QMatrix4x4* o) const { return o->transposed(); }
};

class N61 : public QObject { // QMetaObject
    Q_OBJECT
public:
    Q_INVOKABLE int MclassInfoCount(QMetaObject* o) const { return o->classInfoCount(); }
    Q_INVOKABLE int MclassInfoOffset(QMetaObject* o) const { return o->classInfoOffset(); }
    Q_INVOKABLE const char* MclassName(QMetaObject* o) const { return o->className(); }
    Q_INVOKABLE int MconstructorCount(QMetaObject* o) const { return o->constructorCount(); }
    Q_INVOKABLE int MenumeratorCount(QMetaObject* o) const { return o->enumeratorCount(); }
    Q_INVOKABLE int MenumeratorOffset(QMetaObject* o) const { return o->enumeratorOffset(); }
    Q_INVOKABLE int MindexOfClassInfo(QMetaObject* o, const char* x1) const { return o->indexOfClassInfo(x1); }
    Q_INVOKABLE int MindexOfConstructor(QMetaObject* o, const char* x1) const { return o->indexOfConstructor(x1); }
    Q_INVOKABLE int MindexOfEnumerator(QMetaObject* o, const char* x1) const { return o->indexOfEnumerator(x1); }
    Q_INVOKABLE int MindexOfMethod(QMetaObject* o, const char* x1) const { return o->indexOfMethod(x1); }
    Q_INVOKABLE int MindexOfProperty(QMetaObject* o, const char* x1) const { return o->indexOfProperty(x1); }
    Q_INVOKABLE int MindexOfSignal(QMetaObject* o, const char* x1) const { return o->indexOfSignal(x1); }
    Q_INVOKABLE int MindexOfSlot(QMetaObject* o, const char* x1) const { return o->indexOfSlot(x1); }
    Q_INVOKABLE int MmethodCount(QMetaObject* o) const { return o->methodCount(); }
    Q_INVOKABLE int MmethodOffset(QMetaObject* o) const { return o->methodOffset(); }
    Q_INVOKABLE int MpropertyCount(QMetaObject* o) const { return o->propertyCount(); }
    Q_INVOKABLE int MpropertyOffset(QMetaObject* o) const { return o->propertyOffset(); }
    Q_INVOKABLE const QMetaObject* MsuperClass(QMetaObject* o) const { return o->superClass(); }
    Q_INVOKABLE bool ScheckConnectArgs(const char* x1, const char* x2) { return QMetaObject::checkConnectArgs(x1, x2); }
    Q_INVOKABLE void SconnectSlotsByName(QObject* x1) { QMetaObject::connectSlotsByName(x1); }
    Q_INVOKABLE QByteArray SnormalizedSignature(const char* x1) { return QMetaObject::normalizedSignature(x1); }
    Q_INVOKABLE QByteArray SnormalizedType(const char* x1) { return QMetaObject::normalizedType(x1); }
};

class N62 : public QObject { // QModelIndex
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LModelIndex(u); }
    Q_INVOKABLE void* C(uint u, const QModelIndex& x1) { return new LModelIndex(u, x1); }
    Q_INVOKABLE QModelIndex Mchild(QModelIndex* o, int x1, int x2) const { return o->child(x1, x2); }
    Q_INVOKABLE int Mcolumn(QModelIndex* o) const { return o->column(); }
    Q_INVOKABLE QVariant Mdata(QModelIndex* o, int x1 = Qt::DisplayRole) const { return o->data(x1); }
    Q_INVOKABLE Qt::ItemFlags Mflags(QModelIndex* o) const { return o->flags(); }
    Q_INVOKABLE bool MisValid(QModelIndex* o) const { return o->isValid(); }
    Q_INVOKABLE const QAbstractItemModel* Mmodel(QModelIndex* o) const { return o->model(); }
    Q_INVOKABLE QModelIndex Mparent(QModelIndex* o) const { return o->parent(); }
    Q_INVOKABLE int Mrow(QModelIndex* o) const { return o->row(); }
    Q_INVOKABLE QModelIndex Msibling(QModelIndex* o, int x1, int x2) const { return o->sibling(x1, x2); }
};

class N65 : public QObject { // QPaintDevice
    Q_OBJECT
public:
    Q_INVOKABLE int McolorCount(QPaintDevice* o) const { return o->colorCount(); }
    Q_INVOKABLE int Mdepth(QPaintDevice* o) const { return o->depth(); }
    Q_INVOKABLE int Mheight(QPaintDevice* o) const { return o->height(); }
    Q_INVOKABLE int MheightMM(QPaintDevice* o) const { return o->heightMM(); }
    Q_INVOKABLE int MlogicalDpiX(QPaintDevice* o) const { return o->logicalDpiX(); }
    Q_INVOKABLE int MlogicalDpiY(QPaintDevice* o) const { return o->logicalDpiY(); }
    Q_INVOKABLE bool MpaintingActive(QPaintDevice* o) const { return o->paintingActive(); }
    Q_INVOKABLE int MphysicalDpiX(QPaintDevice* o) const { return o->physicalDpiX(); }
    Q_INVOKABLE int MphysicalDpiY(QPaintDevice* o) const { return o->physicalDpiY(); }
    Q_INVOKABLE int Mwidth(QPaintDevice* o) const { return o->width(); }
    Q_INVOKABLE int MwidthMM(QPaintDevice* o) const { return o->widthMM(); }
};

class N67 : public QObject { // QPainter
    Q_OBJECT
public:
    Q_INVOKABLE bool Mbegin(QPainter* o, QWidget* x1) { return o->begin(x1); }
    Q_INVOKABLE bool Mbegin(QPainter* o, QPixmap* x1) { return o->begin(x1); }
    Q_INVOKABLE void* C(uint u) { return new LPainter(u); }
    Q_INVOKABLE void* C(uint u, QPaintDevice* x1) { return new LPainter(u, x1); }
    Q_INVOKABLE QBrush Mbackground(QPainter* o) const { return o->background(); }
    Q_INVOKABLE Qt::BGMode MbackgroundMode(QPainter* o) const { return o->backgroundMode(); }
    Q_INVOKABLE bool Mbegin(QPainter* o, QPaintDevice* x1) { return o->begin(x1); }
    Q_INVOKABLE void MbeginNativePainting(QPainter* o) { o->beginNativePainting(); }
    Q_INVOKABLE QRectF MboundingRect(QPainter* o, const QRectF& x1, int x2, const QString& x3) { return o->boundingRect(x1, x2, x3); }
    Q_INVOKABLE QRect MboundingRect(QPainter* o, const QRect& x1, int x2, const QString& x3) { return o->boundingRect(x1, x2, x3); }
    Q_INVOKABLE QRect MboundingRect(QPainter* o, int x1, int x2, int x3, int x4, int x5, const QString& x6) { return o->boundingRect(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QRectF MboundingRect(QPainter* o, const QRectF& x1, const QString& x2, const QTextOption& x3 = QTextOption()) { return o->boundingRect(x1, x2, x3); }
    Q_INVOKABLE QBrush Mbrush(QPainter* o) const { return o->brush(); }
    Q_INVOKABLE QPoint MbrushOrigin(QPainter* o) const { return o->brushOrigin(); }
    Q_INVOKABLE QPainterPath MclipPath(QPainter* o) const { return o->clipPath(); }
    Q_INVOKABLE QRegion MclipRegion(QPainter* o) const { return o->clipRegion(); }
    Q_INVOKABLE QTransform McombinedTransform(QPainter* o) const { return o->combinedTransform(); }
    Q_INVOKABLE QPainter::CompositionMode McompositionMode(QPainter* o) const { return o->compositionMode(); }
    Q_INVOKABLE QPaintDevice* Mdevice(QPainter* o) const { return o->device(); }
    Q_INVOKABLE QTransform MdeviceTransform(QPainter* o) const { return o->deviceTransform(); }
    Q_INVOKABLE void MdrawArc(QPainter* o, const QRectF& x1, int x2, int x3) { o->drawArc(x1, x2, x3); }
    Q_INVOKABLE void MdrawArc(QPainter* o, const QRect& x1, int x2, int x3) { o->drawArc(x1, x2, x3); }
    Q_INVOKABLE void MdrawArc(QPainter* o, int x1, int x2, int x3, int x4, int x5, int x6) { o->drawArc(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MdrawChord(QPainter* o, const QRectF& x1, int x2, int x3) { o->drawChord(x1, x2, x3); }
    Q_INVOKABLE void MdrawChord(QPainter* o, const QRect& x1, int x2, int x3) { o->drawChord(x1, x2, x3); }
    Q_INVOKABLE void MdrawChord(QPainter* o, int x1, int x2, int x3, int x4, int x5, int x6) { o->drawChord(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MdrawConvexPolygon(QPainter* o, const QPointF* x1, int x2) { o->drawConvexPolygon(x1, x2); }
    Q_INVOKABLE void MdrawConvexPolygon(QPainter* o, const QPolygonF& x1) { o->drawConvexPolygon(x1); }
    Q_INVOKABLE void MdrawConvexPolygon(QPainter* o, const QPolygon& x1) { o->drawConvexPolygon(x1); }
    Q_INVOKABLE void MdrawEllipse(QPainter* o, const QRectF& x1) { o->drawEllipse(x1); }
    Q_INVOKABLE void MdrawEllipse(QPainter* o, const QRect& x1) { o->drawEllipse(x1); }
    Q_INVOKABLE void MdrawEllipse(QPainter* o, int x1, int x2, int x3, int x4) { o->drawEllipse(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawEllipse(QPainter* o, const QPointF& x1, qreal x2, qreal x3) { o->drawEllipse(x1, x2, x3); }
    Q_INVOKABLE void MdrawEllipse(QPainter* o, const QPoint& x1, int x2, int x3) { o->drawEllipse(x1, x2, x3); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QRectF& x1, const QImage& x2, const QRectF& x3, Qt::ImageConversionFlags x4 = Qt::AutoColor) { o->drawImage(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QRect& x1, const QImage& x2, const QRect& x3, Qt::ImageConversionFlags x4 = Qt::AutoColor) { o->drawImage(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QPointF& x1, const QImage& x2) { o->drawImage(x1, x2); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QPoint& x1, const QImage& x2) { o->drawImage(x1, x2); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QPointF& x1, const QImage& x2, const QRectF& x3, Qt::ImageConversionFlags x4 = Qt::AutoColor) { o->drawImage(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QPoint& x1, const QImage& x2, const QRect& x3, Qt::ImageConversionFlags x4 = Qt::AutoColor) { o->drawImage(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QRectF& x1, const QImage& x2) { o->drawImage(x1, x2); }
    Q_INVOKABLE void MdrawImage(QPainter* o, const QRect& x1, const QImage& x2) { o->drawImage(x1, x2); }
    Q_INVOKABLE void MdrawImage(QPainter* o, int x1, int x2, const QImage& x3, int x4 = 0, int x5 = 0, int x6 = -1, int x7 = -1, Qt::ImageConversionFlags x8 = Qt::AutoColor) { o->drawImage(x1, x2, x3, x4, x5, x6, x7, x8); }
    Q_INVOKABLE void MdrawLine(QPainter* o, const QLineF& x1) { o->drawLine(x1); }
    Q_INVOKABLE void MdrawLine(QPainter* o, const QLine& x1) { o->drawLine(x1); }
    Q_INVOKABLE void MdrawLine(QPainter* o, const QPoint& x1, const QPoint& x2) { o->drawLine(x1, x2); }
    Q_INVOKABLE void MdrawLine(QPainter* o, const QPointF& x1, const QPointF& x2) { o->drawLine(x1, x2); }
    Q_INVOKABLE void MdrawLine(QPainter* o, int x1, int x2, int x3, int x4) { o->drawLine(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QLineF* x1, int x2) { o->drawLines(x1, x2); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QLine* x1, int x2) { o->drawLines(x1, x2); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QPointF* x1, int x2) { o->drawLines(x1, x2); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QVector<QPointF>& x1) { o->drawLines(x1); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QVector<QPoint>& x1) { o->drawLines(x1); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QVector<QLineF>& x1) { o->drawLines(x1); }
    Q_INVOKABLE void MdrawLines(QPainter* o, const QVector<QLine>& x1) { o->drawLines(x1); }
    Q_INVOKABLE void MdrawPath(QPainter* o, const QPainterPath& x1) { o->drawPath(x1); }
    Q_INVOKABLE void MdrawPicture(QPainter* o, const QPointF& x1, const QPicture& x2) { o->drawPicture(x1, x2); }
    Q_INVOKABLE void MdrawPicture(QPainter* o, const QPoint& x1, const QPicture& x2) { o->drawPicture(x1, x2); }
    Q_INVOKABLE void MdrawPicture(QPainter* o, int x1, int x2, const QPicture& x3) { o->drawPicture(x1, x2, x3); }
    Q_INVOKABLE void MdrawPie(QPainter* o, const QRectF& x1, int x2, int x3) { o->drawPie(x1, x2, x3); }
    Q_INVOKABLE void MdrawPie(QPainter* o, const QRect& x1, int x2, int x3) { o->drawPie(x1, x2, x3); }
    Q_INVOKABLE void MdrawPie(QPainter* o, int x1, int x2, int x3, int x4, int x5, int x6) { o->drawPie(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QRectF& x1, const QPixmap& x2, const QRectF& x3) { o->drawPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QRect& x1, const QPixmap& x2, const QRect& x3) { o->drawPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QPointF& x1, const QPixmap& x2, const QRectF& x3) { o->drawPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QPoint& x1, const QPixmap& x2, const QRect& x3) { o->drawPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QPointF& x1, const QPixmap& x2) { o->drawPixmap(x1, x2); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QPoint& x1, const QPixmap& x2) { o->drawPixmap(x1, x2); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, int x1, int x2, const QPixmap& x3) { o->drawPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, const QRect& x1, const QPixmap& x2) { o->drawPixmap(x1, x2); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, int x1, int x2, int x3, int x4, const QPixmap& x5) { o->drawPixmap(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, int x1, int x2, int x3, int x4, const QPixmap& x5, int x6, int x7, int x8, int x9) { o->drawPixmap(x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE void MdrawPixmap(QPainter* o, int x1, int x2, const QPixmap& x3, int x4, int x5, int x6, int x7) { o->drawPixmap(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE void MdrawPoint(QPainter* o, const QPointF& x1) { o->drawPoint(x1); }
    Q_INVOKABLE void MdrawPoint(QPainter* o, const QPoint& x1) { o->drawPoint(x1); }
    Q_INVOKABLE void MdrawPoint(QPainter* o, int x1, int x2) { o->drawPoint(x1, x2); }
    Q_INVOKABLE void MdrawPoints(QPainter* o, const QPointF* x1, int x2) { o->drawPoints(x1, x2); }
    Q_INVOKABLE void MdrawPoints(QPainter* o, const QPolygonF& x1) { o->drawPoints(x1); }
    Q_INVOKABLE void MdrawPoints(QPainter* o, const QPolygon& x1) { o->drawPoints(x1); }
    Q_INVOKABLE void MdrawPolygon(QPainter* o, const QPointF* x1, int x2, Qt::FillRule x3 = Qt::OddEvenFill) { o->drawPolygon(x1, x2, x3); }
    Q_INVOKABLE void MdrawPolygon(QPainter* o, const QPolygonF& x1, Qt::FillRule x2 = Qt::OddEvenFill) { o->drawPolygon(x1, x2); }
    Q_INVOKABLE void MdrawPolygon(QPainter* o, const QPolygon& x1, Qt::FillRule x2 = Qt::OddEvenFill) { o->drawPolygon(x1, x2); }
    Q_INVOKABLE void MdrawPolyline(QPainter* o, const QPointF* x1, int x2) { o->drawPolyline(x1, x2); }
    Q_INVOKABLE void MdrawPolyline(QPainter* o, const QPolygonF& x1) { o->drawPolyline(x1); }
    Q_INVOKABLE void MdrawPolyline(QPainter* o, const QPolygon& x1) { o->drawPolyline(x1); }
    Q_INVOKABLE void MdrawRect(QPainter* o, const QRectF& x1) { o->drawRect(x1); }
    Q_INVOKABLE void MdrawRect(QPainter* o, const QRect& x1) { o->drawRect(x1); }
    Q_INVOKABLE void MdrawRect(QPainter* o, int x1, int x2, int x3, int x4) { o->drawRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawRects(QPainter* o, const QRectF* x1, int x2) { o->drawRects(x1, x2); }
    Q_INVOKABLE void MdrawRects(QPainter* o, const QRect* x1, int x2) { o->drawRects(x1, x2); }
    Q_INVOKABLE void MdrawRects(QPainter* o, const QVector<QRectF>& x1) { o->drawRects(x1); }
    Q_INVOKABLE void MdrawRects(QPainter* o, const QVector<QRect>& x1) { o->drawRects(x1); }
    Q_INVOKABLE void MdrawRoundedRect(QPainter* o, const QRectF& x1, qreal x2, qreal x3, Qt::SizeMode x4 = Qt::AbsoluteSize) { o->drawRoundedRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawRoundedRect(QPainter* o, const QRect& x1, qreal x2, qreal x3, Qt::SizeMode x4 = Qt::AbsoluteSize) { o->drawRoundedRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawRoundedRect(QPainter* o, int x1, int x2, int x3, int x4, qreal x5, qreal x6, Qt::SizeMode x7 = Qt::AbsoluteSize) { o->drawRoundedRect(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE void MdrawText(QPainter* o, const QPointF& x1, const QString& x2) { o->drawText(x1, x2); }
    Q_INVOKABLE void MdrawText(QPainter* o, const QPoint& x1, const QString& x2) { o->drawText(x1, x2); }
    Q_INVOKABLE void MdrawText(QPainter* o, const QRectF& x1, int x2, const QString& x3, QRectF* x4 = 0) { o->drawText(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawText(QPainter* o, const QRect& x1, int x2, const QString& x3, QRect* x4 = 0) { o->drawText(x1, x2, x3, x4); }
    Q_INVOKABLE void MdrawText(QPainter* o, int x1, int x2, const QString& x3) { o->drawText(x1, x2, x3); }
    Q_INVOKABLE void MdrawText(QPainter* o, int x1, int x2, int x3, int x4, int x5, const QString& x6, QRect* x7 = 0) { o->drawText(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE void MdrawText(QPainter* o, const QRectF& x1, const QString& x2, const QTextOption& x3 = QTextOption()) { o->drawText(x1, x2, x3); }
    Q_INVOKABLE void MdrawTiledPixmap(QPainter* o, const QRectF& x1, const QPixmap& x2, const QPointF& x3 = QPointF()) { o->drawTiledPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawTiledPixmap(QPainter* o, const QRect& x1, const QPixmap& x2, const QPoint& x3 = QPoint()) { o->drawTiledPixmap(x1, x2, x3); }
    Q_INVOKABLE void MdrawTiledPixmap(QPainter* o, int x1, int x2, int x3, int x4, const QPixmap& x5, int x6 = 0, int x7 = 0) { o->drawTiledPixmap(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE bool Mend(QPainter* o) { return o->end(); }
    Q_INVOKABLE void MendNativePainting(QPainter* o) { o->endNativePainting(); }
    Q_INVOKABLE void MeraseRect(QPainter* o, const QRectF& x1) { o->eraseRect(x1); }
    Q_INVOKABLE void MeraseRect(QPainter* o, const QRect& x1) { o->eraseRect(x1); }
    Q_INVOKABLE void MeraseRect(QPainter* o, int x1, int x2, int x3, int x4) { o->eraseRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MfillPath(QPainter* o, const QPainterPath& x1, const QBrush& x2) { o->fillPath(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRectF& x1, const QBrush& x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, int x1, int x2, int x3, int x4, Qt::BrushStyle x5) { o->fillRect(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRect& x1, Qt::BrushStyle x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRectF& x1, Qt::BrushStyle x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRect& x1, const QBrush& x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRect& x1, const QColor& x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRectF& x1, const QColor& x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, int x1, int x2, int x3, int x4, const QBrush& x5) { o->fillRect(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MfillRect(QPainter* o, int x1, int x2, int x3, int x4, const QColor& x5) { o->fillRect(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MfillRect(QPainter* o, int x1, int x2, int x3, int x4, Qt::GlobalColor x5) { o->fillRect(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRect& x1, Qt::GlobalColor x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE void MfillRect(QPainter* o, const QRectF& x1, Qt::GlobalColor x2) { o->fillRect(x1, x2); }
    Q_INVOKABLE QFont Mfont(QPainter* o) const { return o->font(); }
    Q_INVOKABLE QFontMetrics MfontMetrics(QPainter* o) const { return o->fontMetrics(); }
    Q_INVOKABLE bool MhasClipping(QPainter* o) const { return o->hasClipping(); }
    Q_INVOKABLE void MinitFrom(QPainter* o, const QWidget* x1) { o->initFrom(x1); }
    Q_INVOKABLE bool MisActive(QPainter* o) const { return o->isActive(); }
    Q_INVOKABLE Qt::LayoutDirection MlayoutDirection(QPainter* o) const { return o->layoutDirection(); }
    Q_INVOKABLE qreal Mopacity(QPainter* o) const { return o->opacity(); }
    Q_INVOKABLE QPen Mpen(QPainter* o) const { return o->pen(); }
    Q_INVOKABLE QPainter::RenderHints MrenderHints(QPainter* o) const { return o->renderHints(); }
    Q_INVOKABLE void MresetTransform(QPainter* o) { o->resetTransform(); }
    Q_INVOKABLE void Mrestore(QPainter* o) { o->restore(); }
    Q_INVOKABLE void Mrotate(QPainter* o, qreal x1) { o->rotate(x1); }
    Q_INVOKABLE void Msave(QPainter* o) { o->save(); }
    Q_INVOKABLE void Mscale(QPainter* o, qreal x1, qreal x2) { o->scale(x1, x2); }
    Q_INVOKABLE void MsetBackground(QPainter* o, const QBrush& x1) { o->setBackground(x1); }
    Q_INVOKABLE void MsetBackgroundMode(QPainter* o, Qt::BGMode x1) { o->setBackgroundMode(x1); }
    Q_INVOKABLE void MsetBrush(QPainter* o, const QBrush& x1) { o->setBrush(x1); }
    Q_INVOKABLE void MsetBrush(QPainter* o, Qt::BrushStyle x1) { o->setBrush(x1); }
    Q_INVOKABLE void MsetBrushOrigin(QPainter* o, const QPointF& x1) { o->setBrushOrigin(x1); }
    Q_INVOKABLE void MsetBrushOrigin(QPainter* o, const QPoint& x1) { o->setBrushOrigin(x1); }
    Q_INVOKABLE void MsetBrushOrigin(QPainter* o, int x1, int x2) { o->setBrushOrigin(x1, x2); }
    Q_INVOKABLE void MsetClipPath(QPainter* o, const QPainterPath& x1, Qt::ClipOperation x2 = Qt::ReplaceClip) { o->setClipPath(x1, x2); }
    Q_INVOKABLE void MsetClipRect(QPainter* o, const QRectF& x1, Qt::ClipOperation x2 = Qt::ReplaceClip) { o->setClipRect(x1, x2); }
    Q_INVOKABLE void MsetClipRect(QPainter* o, int x1, int x2, int x3, int x4, Qt::ClipOperation x5 = Qt::ReplaceClip) { o->setClipRect(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetClipRect(QPainter* o, const QRect& x1, Qt::ClipOperation x2 = Qt::ReplaceClip) { o->setClipRect(x1, x2); }
    Q_INVOKABLE void MsetClipRegion(QPainter* o, const QRegion& x1, Qt::ClipOperation x2 = Qt::ReplaceClip) { o->setClipRegion(x1, x2); }
    Q_INVOKABLE void MsetClipping(QPainter* o, bool x1) { o->setClipping(x1); }
    Q_INVOKABLE void MsetCompositionMode(QPainter* o, QPainter::CompositionMode x1) { o->setCompositionMode(x1); }
    Q_INVOKABLE void MsetFont(QPainter* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetLayoutDirection(QPainter* o, Qt::LayoutDirection x1) { o->setLayoutDirection(x1); }
    Q_INVOKABLE void MsetOpacity(QPainter* o, qreal x1) { o->setOpacity(x1); }
    Q_INVOKABLE void MsetPen(QPainter* o, const QPen& x1) { o->setPen(x1); }
    Q_INVOKABLE void MsetPen(QPainter* o, const QColor& x1) { o->setPen(x1); }
    Q_INVOKABLE void MsetPen(QPainter* o, Qt::PenStyle x1) { o->setPen(x1); }
    Q_INVOKABLE void MsetRenderHint(QPainter* o, QPainter::RenderHint x1, bool x2 = true) { o->setRenderHint(x1, x2); }
    Q_INVOKABLE void MsetRenderHints(QPainter* o, QPainter::RenderHints x1, bool x2 = true) { o->setRenderHints(x1, x2); }
    Q_INVOKABLE void MsetTransform(QPainter* o, const QTransform& x1, bool x2 = false) { o->setTransform(x1, x2); }
    Q_INVOKABLE void MsetViewTransformEnabled(QPainter* o, bool x1) { o->setViewTransformEnabled(x1); }
    Q_INVOKABLE void MsetViewport(QPainter* o, const QRect& x1) { o->setViewport(x1); }
    Q_INVOKABLE void MsetViewport(QPainter* o, int x1, int x2, int x3, int x4) { o->setViewport(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetWindow(QPainter* o, const QRect& x1) { o->setWindow(x1); }
    Q_INVOKABLE void MsetWindow(QPainter* o, int x1, int x2, int x3, int x4) { o->setWindow(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetWorldMatrixEnabled(QPainter* o, bool x1) { o->setWorldMatrixEnabled(x1); }
    Q_INVOKABLE void MsetWorldTransform(QPainter* o, const QTransform& x1, bool x2 = false) { o->setWorldTransform(x1, x2); }
    Q_INVOKABLE void Mshear(QPainter* o, qreal x1, qreal x2) { o->shear(x1, x2); }
    Q_INVOKABLE void MstrokePath(QPainter* o, const QPainterPath& x1, const QPen& x2) { o->strokePath(x1, x2); }
    Q_INVOKABLE bool MtestRenderHint(QPainter* o, QPainter::RenderHint x1) const { return o->testRenderHint(x1); }
    Q_INVOKABLE QTransform Mtransform(QPainter* o) const { return o->transform(); }
    Q_INVOKABLE void Mtranslate(QPainter* o, const QPointF& x1) { o->translate(x1); }
    Q_INVOKABLE void Mtranslate(QPainter* o, const QPoint& x1) { o->translate(x1); }
    Q_INVOKABLE void Mtranslate(QPainter* o, qreal x1, qreal x2) { o->translate(x1, x2); }
    Q_INVOKABLE bool MviewTransformEnabled(QPainter* o) const { return o->viewTransformEnabled(); }
    Q_INVOKABLE QRect Mviewport(QPainter* o) const { return o->viewport(); }
    Q_INVOKABLE QRect Mwindow(QPainter* o) const { return o->window(); }
    Q_INVOKABLE bool MworldMatrixEnabled(QPainter* o) const { return o->worldMatrixEnabled(); }
    Q_INVOKABLE QTransform MworldTransform(QPainter* o) const { return o->worldTransform(); }
};

class N68 : public QObject { // QPainterPath
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LPainterPath(u); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1) { return new LPainterPath(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPainterPath& x1) { return new LPainterPath(u, x1); }
    Q_INVOKABLE void MaddEllipse(QPainterPath* o, const QRectF& x1) { o->addEllipse(x1); }
    Q_INVOKABLE void MaddEllipse(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->addEllipse(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddEllipse(QPainterPath* o, const QPointF& x1, qreal x2, qreal x3) { o->addEllipse(x1, x2, x3); }
    Q_INVOKABLE void MaddPath(QPainterPath* o, const QPainterPath& x1) { o->addPath(x1); }
    Q_INVOKABLE void MaddPolygon(QPainterPath* o, const QPolygonF& x1) { o->addPolygon(x1); }
    Q_INVOKABLE void MaddRect(QPainterPath* o, const QRectF& x1) { o->addRect(x1); }
    Q_INVOKABLE void MaddRect(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->addRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddRegion(QPainterPath* o, const QRegion& x1) { o->addRegion(x1); }
    Q_INVOKABLE void MaddRoundedRect(QPainterPath* o, const QRectF& x1, qreal x2, qreal x3, Qt::SizeMode x4 = Qt::AbsoluteSize) { o->addRoundedRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MaddRoundedRect(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, Qt::SizeMode x7 = Qt::AbsoluteSize) { o->addRoundedRect(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE void MaddText(QPainterPath* o, const QPointF& x1, const QFont& x2, const QString& x3) { o->addText(x1, x2, x3); }
    Q_INVOKABLE void MaddText(QPainterPath* o, qreal x1, qreal x2, const QFont& x3, const QString& x4) { o->addText(x1, x2, x3, x4); }
    Q_INVOKABLE qreal MangleAtPercent(QPainterPath* o, qreal x1) const { return o->angleAtPercent(x1); }
    Q_INVOKABLE void MarcMoveTo(QPainterPath* o, const QRectF& x1, qreal x2) { o->arcMoveTo(x1, x2); }
    Q_INVOKABLE void MarcMoveTo(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5) { o->arcMoveTo(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MarcTo(QPainterPath* o, const QRectF& x1, qreal x2, qreal x3) { o->arcTo(x1, x2, x3); }
    Q_INVOKABLE void MarcTo(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { o->arcTo(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QRectF MboundingRect(QPainterPath* o) const { return o->boundingRect(); }
    Q_INVOKABLE void McloseSubpath(QPainterPath* o) { o->closeSubpath(); }
    Q_INVOKABLE void MconnectPath(QPainterPath* o, const QPainterPath& x1) { o->connectPath(x1); }
    Q_INVOKABLE bool Mcontains(QPainterPath* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool Mcontains(QPainterPath* o, const QRectF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool Mcontains(QPainterPath* o, const QPainterPath& x1) const { return o->contains(x1); }
    Q_INVOKABLE QRectF McontrolPointRect(QPainterPath* o) const { return o->controlPointRect(); }
    Q_INVOKABLE void McubicTo(QPainterPath* o, const QPointF& x1, const QPointF& x2, const QPointF& x3) { o->cubicTo(x1, x2, x3); }
    Q_INVOKABLE void McubicTo(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { o->cubicTo(x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE QPointF McurrentPosition(QPainterPath* o) const { return o->currentPosition(); }
    Q_INVOKABLE QPainterPath::Element MelementAt(QPainterPath* o, int x1) const { return o->elementAt(x1); }
    Q_INVOKABLE int MelementCount(QPainterPath* o) const { return o->elementCount(); }
    Q_INVOKABLE Qt::FillRule MfillRule(QPainterPath* o) const { return o->fillRule(); }
    Q_INVOKABLE QPainterPath Mintersected(QPainterPath* o, const QPainterPath& x1) const { return o->intersected(x1); }
    Q_INVOKABLE bool Mintersects(QPainterPath* o, const QRectF& x1) const { return o->intersects(x1); }
    Q_INVOKABLE bool Mintersects(QPainterPath* o, const QPainterPath& x1) const { return o->intersects(x1); }
    Q_INVOKABLE bool MisEmpty(QPainterPath* o) const { return o->isEmpty(); }
    Q_INVOKABLE qreal Mlength(QPainterPath* o) const { return o->length(); }
    Q_INVOKABLE void MlineTo(QPainterPath* o, const QPointF& x1) { o->lineTo(x1); }
    Q_INVOKABLE void MlineTo(QPainterPath* o, qreal x1, qreal x2) { o->lineTo(x1, x2); }
    Q_INVOKABLE void MmoveTo(QPainterPath* o, const QPointF& x1) { o->moveTo(x1); }
    Q_INVOKABLE void MmoveTo(QPainterPath* o, qreal x1, qreal x2) { o->moveTo(x1, x2); }
    Q_INVOKABLE qreal MpercentAtLength(QPainterPath* o, qreal x1) const { return o->percentAtLength(x1); }
    Q_INVOKABLE QPointF MpointAtPercent(QPainterPath* o, qreal x1) const { return o->pointAtPercent(x1); }
    Q_INVOKABLE void MquadTo(QPainterPath* o, const QPointF& x1, const QPointF& x2) { o->quadTo(x1, x2); }
    Q_INVOKABLE void MquadTo(QPainterPath* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->quadTo(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetElementPositionAt(QPainterPath* o, int x1, qreal x2, qreal x3) { o->setElementPositionAt(x1, x2, x3); }
    Q_INVOKABLE void MsetFillRule(QPainterPath* o, Qt::FillRule x1) { o->setFillRule(x1); }
    Q_INVOKABLE QPainterPath Msimplified(QPainterPath* o) const { return o->simplified(); }
    Q_INVOKABLE qreal MslopeAtPercent(QPainterPath* o, qreal x1) const { return o->slopeAtPercent(x1); }
    Q_INVOKABLE QPainterPath Msubtracted(QPainterPath* o, const QPainterPath& x1) const { return o->subtracted(x1); }
    Q_INVOKABLE QPolygonF MtoFillPolygon(QPainterPath* o, const QTransform& x1) const { return o->toFillPolygon(x1); }
    Q_INVOKABLE QPolygonF MtoFillPolygon(QPainterPath* o, const QMatrix& x1 = QMatrix()) const { return o->toFillPolygon(x1); }
    Q_INVOKABLE QList<QPolygonF> MtoFillPolygons(QPainterPath* o, const QTransform& x1) const { return o->toFillPolygons(x1); }
    Q_INVOKABLE QList<QPolygonF> MtoFillPolygons(QPainterPath* o, const QMatrix& x1 = QMatrix()) const { return o->toFillPolygons(x1); }
    Q_INVOKABLE QPainterPath MtoReversed(QPainterPath* o) const { return o->toReversed(); }
    Q_INVOKABLE QList<QPolygonF> MtoSubpathPolygons(QPainterPath* o, const QTransform& x1) const { return o->toSubpathPolygons(x1); }
    Q_INVOKABLE QList<QPolygonF> MtoSubpathPolygons(QPainterPath* o, const QMatrix& x1 = QMatrix()) const { return o->toSubpathPolygons(x1); }
    Q_INVOKABLE void Mtranslate(QPainterPath* o, qreal x1, qreal x2) { o->translate(x1, x2); }
    Q_INVOKABLE void Mtranslate(QPainterPath* o, const QPointF& x1) { o->translate(x1); }
    Q_INVOKABLE QPainterPath Mtranslated(QPainterPath* o, qreal x1, qreal x2) const { return o->translated(x1, x2); }
    Q_INVOKABLE QPainterPath Mtranslated(QPainterPath* o, const QPointF& x1) const { return o->translated(x1); }
    Q_INVOKABLE QPainterPath Munited(QPainterPath* o, const QPainterPath& x1) const { return o->united(x1); }
};

class N69 : public QObject { // QPalette
    Q_OBJECT
public:
    Q_INVOKABLE void* CC(uint u, LPalette* o) { LPalette* copy = new LPalette(u); *copy = *o; return copy; }
    Q_INVOKABLE void* C(uint u) { return new LPalette(u); }
    Q_INVOKABLE void* C(uint u, const QColor& x1) { return new LPalette(u, x1); }
    Q_INVOKABLE void* C(uint u, Qt::GlobalColor x1) { return new LPalette(u, x1); }
    Q_INVOKABLE void* C(uint u, const QColor& x1, const QColor& x2) { return new LPalette(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QBrush& x1, const QBrush& x2, const QBrush& x3, const QBrush& x4, const QBrush& x5, const QBrush& x6, const QBrush& x7, const QBrush& x8, const QBrush& x9) { return new LPalette(u, x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE void* C(uint u, const QPalette& x1) { return new LPalette(u, x1); }
    Q_INVOKABLE QBrush MalternateBase(QPalette* o) const { return o->alternateBase(); }
    Q_INVOKABLE QBrush Mbase(QPalette* o) const { return o->base(); }
    Q_INVOKABLE QBrush MbrightText(QPalette* o) const { return o->brightText(); }
    Q_INVOKABLE QBrush Mbrush(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorRole x2) const { return o->brush(x1, x2); }
    Q_INVOKABLE QBrush Mbrush(QPalette* o, QPalette::ColorRole x1) const { return o->brush(x1); }
    Q_INVOKABLE QBrush Mbutton(QPalette* o) const { return o->button(); }
    Q_INVOKABLE QBrush MbuttonText(QPalette* o) const { return o->buttonText(); }
    Q_INVOKABLE QColor Mcolor(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorRole x2) const { return o->color(x1, x2); }
    Q_INVOKABLE QColor Mcolor(QPalette* o, QPalette::ColorRole x1) const { return o->color(x1); }
    Q_INVOKABLE QPalette::ColorGroup McurrentColorGroup(QPalette* o) const { return o->currentColorGroup(); }
    Q_INVOKABLE QBrush Mdark(QPalette* o) const { return o->dark(); }
    Q_INVOKABLE QBrush Mhighlight(QPalette* o) const { return o->highlight(); }
    Q_INVOKABLE QBrush MhighlightedText(QPalette* o) const { return o->highlightedText(); }
    Q_INVOKABLE bool MisBrushSet(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorRole x2) const { return o->isBrushSet(x1, x2); }
    Q_INVOKABLE bool MisCopyOf(QPalette* o, const QPalette& x1) const { return o->isCopyOf(x1); }
    Q_INVOKABLE bool MisEqual(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorGroup x2) const { return o->isEqual(x1, x2); }
    Q_INVOKABLE QBrush Mlight(QPalette* o) const { return o->light(); }
    Q_INVOKABLE QBrush Mlink(QPalette* o) const { return o->link(); }
    Q_INVOKABLE QBrush MlinkVisited(QPalette* o) const { return o->linkVisited(); }
    Q_INVOKABLE QBrush Mmid(QPalette* o) const { return o->mid(); }
    Q_INVOKABLE QBrush Mmidlight(QPalette* o) const { return o->midlight(); }
    Q_INVOKABLE QPalette Mresolve(QPalette* o, const QPalette& x1) const { return o->resolve(x1); }
    Q_INVOKABLE void MsetBrush(QPalette* o, QPalette::ColorRole x1, const QBrush& x2) { o->setBrush(x1, x2); }
    Q_INVOKABLE void MsetBrush(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorRole x2, const QBrush& x3) { o->setBrush(x1, x2, x3); }
    Q_INVOKABLE void MsetColor(QPalette* o, QPalette::ColorGroup x1, QPalette::ColorRole x2, const QColor& x3) { o->setColor(x1, x2, x3); }
    Q_INVOKABLE void MsetColor(QPalette* o, QPalette::ColorRole x1, const QColor& x2) { o->setColor(x1, x2); }
    Q_INVOKABLE void MsetCurrentColorGroup(QPalette* o, QPalette::ColorGroup x1) { o->setCurrentColorGroup(x1); }
    Q_INVOKABLE QBrush Mshadow(QPalette* o) const { return o->shadow(); }
    Q_INVOKABLE QBrush Mtext(QPalette* o) const { return o->text(); }
    Q_INVOKABLE QBrush MtoolTipBase(QPalette* o) const { return o->toolTipBase(); }
    Q_INVOKABLE QBrush MtoolTipText(QPalette* o) const { return o->toolTipText(); }
    Q_INVOKABLE QBrush Mwindow(QPalette* o) const { return o->window(); }
    Q_INVOKABLE QBrush MwindowText(QPalette* o) const { return o->windowText(); }
};

class N70 : public QObject { // QPen
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LPen(u); }
    Q_INVOKABLE void* C(uint u, Qt::PenStyle x1) { return new LPen(u, x1); }
    Q_INVOKABLE void* C(uint u, const QColor& x1) { return new LPen(u, x1); }
    Q_INVOKABLE void* C(uint u, const QBrush& x1, qreal x2, Qt::PenStyle x3 = Qt::SolidLine, Qt::PenCapStyle x4 = Qt::SquareCap, Qt::PenJoinStyle x5 = Qt::BevelJoin) { return new LPen(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QPen& x1) { return new LPen(u, x1); }
    Q_INVOKABLE QBrush Mbrush(QPen* o) const { return o->brush(); }
    Q_INVOKABLE Qt::PenCapStyle McapStyle(QPen* o) const { return o->capStyle(); }
    Q_INVOKABLE QColor Mcolor(QPen* o) const { return o->color(); }
    Q_INVOKABLE qreal MdashOffset(QPen* o) const { return o->dashOffset(); }
    Q_INVOKABLE QVector<qreal> MdashPattern(QPen* o) const { return o->dashPattern(); }
    Q_INVOKABLE bool MisCosmetic(QPen* o) const { return o->isCosmetic(); }
    Q_INVOKABLE bool MisSolid(QPen* o) const { return o->isSolid(); }
    Q_INVOKABLE Qt::PenJoinStyle MjoinStyle(QPen* o) const { return o->joinStyle(); }
    Q_INVOKABLE qreal MmiterLimit(QPen* o) const { return o->miterLimit(); }
    Q_INVOKABLE void MsetBrush(QPen* o, const QBrush& x1) { o->setBrush(x1); }
    Q_INVOKABLE void MsetCapStyle(QPen* o, Qt::PenCapStyle x1) { o->setCapStyle(x1); }
    Q_INVOKABLE void MsetColor(QPen* o, const QColor& x1) { o->setColor(x1); }
    Q_INVOKABLE void MsetCosmetic(QPen* o, bool x1) { o->setCosmetic(x1); }
    Q_INVOKABLE void MsetDashOffset(QPen* o, qreal x1) { o->setDashOffset(x1); }
    Q_INVOKABLE void MsetDashPattern(QPen* o, const QVector<qreal>& x1) { o->setDashPattern(x1); }
    Q_INVOKABLE void MsetJoinStyle(QPen* o, Qt::PenJoinStyle x1) { o->setJoinStyle(x1); }
    Q_INVOKABLE void MsetMiterLimit(QPen* o, qreal x1) { o->setMiterLimit(x1); }
    Q_INVOKABLE void MsetStyle(QPen* o, Qt::PenStyle x1) { o->setStyle(x1); }
    Q_INVOKABLE void MsetWidth(QPen* o, int x1) { o->setWidth(x1); }
    Q_INVOKABLE void MsetWidthF(QPen* o, qreal x1) { o->setWidthF(x1); }
    Q_INVOKABLE Qt::PenStyle Mstyle(QPen* o) const { return o->style(); }
    Q_INVOKABLE int Mwidth(QPen* o) const { return o->width(); }
    Q_INVOKABLE qreal MwidthF(QPen* o) const { return o->widthF(); }
};

class N74 : public QObject { // QQuaternion
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LQuaternion(u); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4) { return new LQuaternion(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, qreal x1, const QVector3D& x2) { return new LQuaternion(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QVector4D& x1) { return new LQuaternion(u, x1); }
    Q_INVOKABLE QQuaternion Mconjugate(QQuaternion* o) const { return o->conjugate(); }
    Q_INVOKABLE bool MisIdentity(QQuaternion* o) const { return o->isIdentity(); }
    Q_INVOKABLE bool MisNull(QQuaternion* o) const { return o->isNull(); }
    Q_INVOKABLE qreal Mlength(QQuaternion* o) const { return o->length(); }
    Q_INVOKABLE qreal MlengthSquared(QQuaternion* o) const { return o->lengthSquared(); }
    Q_INVOKABLE void Mnormalize(QQuaternion* o) { o->normalize(); }
    Q_INVOKABLE QQuaternion Mnormalized(QQuaternion* o) const { return o->normalized(); }
    Q_INVOKABLE QVector3D MrotatedVector(QQuaternion* o, const QVector3D& x1) const { return o->rotatedVector(x1); }
    Q_INVOKABLE qreal Mscalar(QQuaternion* o) const { return o->scalar(); }
    Q_INVOKABLE void MsetScalar(QQuaternion* o, qreal x1) { o->setScalar(x1); }
    Q_INVOKABLE void MsetVector(QQuaternion* o, const QVector3D& x1) { o->setVector(x1); }
    Q_INVOKABLE void MsetVector(QQuaternion* o, qreal x1, qreal x2, qreal x3) { o->setVector(x1, x2, x3); }
    Q_INVOKABLE void MsetX(QQuaternion* o, qreal x1) { o->setX(x1); }
    Q_INVOKABLE void MsetY(QQuaternion* o, qreal x1) { o->setY(x1); }
    Q_INVOKABLE void MsetZ(QQuaternion* o, qreal x1) { o->setZ(x1); }
    Q_INVOKABLE QVector4D MtoVector4D(QQuaternion* o) const { return o->toVector4D(); }
    Q_INVOKABLE QVector3D Mvector(QQuaternion* o) const { return o->vector(); }
    Q_INVOKABLE qreal Mx(QQuaternion* o) const { return o->x(); }
    Q_INVOKABLE qreal My(QQuaternion* o) const { return o->y(); }
    Q_INVOKABLE qreal Mz(QQuaternion* o) const { return o->z(); }
    Q_INVOKABLE QQuaternion SfromAxisAndAngle(const QVector3D& x1, qreal x2) { return QQuaternion::fromAxisAndAngle(x1, x2); }
    Q_INVOKABLE QQuaternion SfromAxisAndAngle(qreal x1, qreal x2, qreal x3, qreal x4) { return QQuaternion::fromAxisAndAngle(x1, x2, x3, x4); }
    Q_INVOKABLE QQuaternion Snlerp(const QQuaternion& x1, const QQuaternion& x2, qreal x3) { return QQuaternion::nlerp(x1, x2, x3); }
    Q_INVOKABLE QQuaternion Sslerp(const QQuaternion& x1, const QQuaternion& x2, qreal x3) { return QQuaternion::slerp(x1, x2, x3); }
};

class N76 : public QObject { // QRegExp
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LRegExp(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1, Qt::CaseSensitivity x2 = Qt::CaseSensitive, QRegExp::PatternSyntax x3 = QRegExp::RegExp) { return new LRegExp(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QRegExp& x1) { return new LRegExp(u, x1); }
    Q_INVOKABLE QString Mcap(QRegExp* o, int x1 = 0) const { return o->cap(x1); }
    Q_INVOKABLE int McaptureCount(QRegExp* o) const { return o->captureCount(); }
    Q_INVOKABLE QStringList McapturedTexts(QRegExp* o) const { return o->capturedTexts(); }
    Q_INVOKABLE Qt::CaseSensitivity McaseSensitivity(QRegExp* o) const { return o->caseSensitivity(); }
    Q_INVOKABLE QString MerrorString(QRegExp* o) const { return o->errorString(); }
    Q_INVOKABLE bool MexactMatch(QRegExp* o, const QString& x1) const { return o->exactMatch(x1); }
    Q_INVOKABLE int MindexIn(QRegExp* o, const QString& x1, int x2 = 0, QRegExp::CaretMode x3 = QRegExp::CaretAtZero) const { return o->indexIn(x1, x2, x3); }
    Q_INVOKABLE bool MisEmpty(QRegExp* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisMinimal(QRegExp* o) const { return o->isMinimal(); }
    Q_INVOKABLE bool MisValid(QRegExp* o) const { return o->isValid(); }
    Q_INVOKABLE int MlastIndexIn(QRegExp* o, const QString& x1, int x2 = -1, QRegExp::CaretMode x3 = QRegExp::CaretAtZero) const { return o->lastIndexIn(x1, x2, x3); }
    Q_INVOKABLE int MmatchedLength(QRegExp* o) const { return o->matchedLength(); }
    Q_INVOKABLE QString Mpattern(QRegExp* o) const { return o->pattern(); }
    Q_INVOKABLE QRegExp::PatternSyntax MpatternSyntax(QRegExp* o) const { return o->patternSyntax(); }
    Q_INVOKABLE int Mpos(QRegExp* o, int x1 = 0) const { return o->pos(x1); }
    Q_INVOKABLE void MsetCaseSensitivity(QRegExp* o, Qt::CaseSensitivity x1) { o->setCaseSensitivity(x1); }
    Q_INVOKABLE void MsetMinimal(QRegExp* o, bool x1) { o->setMinimal(x1); }
    Q_INVOKABLE void MsetPattern(QRegExp* o, const QString& x1) { o->setPattern(x1); }
    Q_INVOKABLE void MsetPatternSyntax(QRegExp* o, QRegExp::PatternSyntax x1) { o->setPatternSyntax(x1); }
    Q_INVOKABLE QString Sescape(const QString& x1) { return QRegExp::escape(x1); }
};

class N77 : public QObject { // QRegion
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LRegion(u); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, int x3, int x4, QRegion::RegionType x5 = QRegion::Rectangle) { return new LRegion(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QPolygon& x1, Qt::FillRule x2 = Qt::OddEvenFill) { return new LRegion(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QRegion& x1) { return new LRegion(u, x1); }
    Q_INVOKABLE void* C(uint u, const QBitmap& x1) { return new LRegion(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRect& x1, QRegion::RegionType x2 = QRegion::Rectangle) { return new LRegion(u, x1, x2); }
    Q_INVOKABLE QRect MboundingRect(QRegion* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QRegion* o, const QPoint& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool Mcontains(QRegion* o, const QRect& x1) const { return o->contains(x1); }
    Q_INVOKABLE QRegion Mintersected(QRegion* o, const QRegion& x1) const { return o->intersected(x1); }
    Q_INVOKABLE QRegion Mintersected(QRegion* o, const QRect& x1) const { return o->intersected(x1); }
    Q_INVOKABLE bool Mintersects(QRegion* o, const QRegion& x1) const { return o->intersects(x1); }
    Q_INVOKABLE bool Mintersects(QRegion* o, const QRect& x1) const { return o->intersects(x1); }
    Q_INVOKABLE bool MisEmpty(QRegion* o) const { return o->isEmpty(); }
    Q_INVOKABLE int MrectCount(QRegion* o) const { return o->rectCount(); }
    Q_INVOKABLE QVector<QRect> Mrects(QRegion* o) const { return o->rects(); }
    Q_INVOKABLE void MsetRects(QRegion* o, const QRect* x1, int x2) { o->setRects(x1, x2); }
    Q_INVOKABLE QRegion Msubtracted(QRegion* o, const QRegion& x1) const { return o->subtracted(x1); }
    Q_INVOKABLE void Mtranslate(QRegion* o, int x1, int x2) { o->translate(x1, x2); }
    Q_INVOKABLE void Mtranslate(QRegion* o, const QPoint& x1) { o->translate(x1); }
    Q_INVOKABLE QRegion Mtranslated(QRegion* o, int x1, int x2) const { return o->translated(x1, x2); }
    Q_INVOKABLE QRegion Mtranslated(QRegion* o, const QPoint& x1) const { return o->translated(x1); }
    Q_INVOKABLE QRegion Munited(QRegion* o, const QRegion& x1) const { return o->united(x1); }
    Q_INVOKABLE QRegion Munited(QRegion* o, const QRect& x1) const { return o->united(x1); }
    Q_INVOKABLE QRegion Mxored(QRegion* o, const QRegion& x1) const { return o->xored(x1); }
};

class N80 : public QObject { // QSizePolicy
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LSizePolicy(u); }
    Q_INVOKABLE void* C(uint u, QSizePolicy::Policy x1, QSizePolicy::Policy x2) { return new LSizePolicy(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QSizePolicy::Policy x1, QSizePolicy::Policy x2, QSizePolicy::ControlType x3) { return new LSizePolicy(u, x1, x2, x3); }
    Q_INVOKABLE QSizePolicy::ControlType McontrolType(QSizePolicy* o) const { return o->controlType(); }
    Q_INVOKABLE Qt::Orientations MexpandingDirections(QSizePolicy* o) const { return o->expandingDirections(); }
    Q_INVOKABLE bool MhasHeightForWidth(QSizePolicy* o) const { return o->hasHeightForWidth(); }
    Q_INVOKABLE QSizePolicy::Policy MhorizontalPolicy(QSizePolicy* o) const { return o->horizontalPolicy(); }
    Q_INVOKABLE int MhorizontalStretch(QSizePolicy* o) const { return o->horizontalStretch(); }
    Q_INVOKABLE void MsetControlType(QSizePolicy* o, QSizePolicy::ControlType x1) { o->setControlType(x1); }
    Q_INVOKABLE void MsetHeightForWidth(QSizePolicy* o, bool x1) { o->setHeightForWidth(x1); }
    Q_INVOKABLE void MsetHorizontalPolicy(QSizePolicy* o, QSizePolicy::Policy x1) { o->setHorizontalPolicy(x1); }
    Q_INVOKABLE void MsetHorizontalStretch(QSizePolicy* o, uchar x1) { o->setHorizontalStretch(x1); }
    Q_INVOKABLE void MsetVerticalPolicy(QSizePolicy* o, QSizePolicy::Policy x1) { o->setVerticalPolicy(x1); }
    Q_INVOKABLE void MsetVerticalStretch(QSizePolicy* o, uchar x1) { o->setVerticalStretch(x1); }
    Q_INVOKABLE void Mtranspose(QSizePolicy* o) { o->transpose(); }
    Q_INVOKABLE QSizePolicy::Policy MverticalPolicy(QSizePolicy* o) const { return o->verticalPolicy(); }
    Q_INVOKABLE int MverticalStretch(QSizePolicy* o) const { return o->verticalStretch(); }
};

class N82 : public QObject { // QStandardItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LStandardItem(u); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LStandardItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QIcon& x1, const QString& x2) { return new LStandardItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, int x1, int x2 = 1) { return new LStandardItem(u, x1, x2); }
    Q_INVOKABLE QString MaccessibleDescription(QStandardItem* o) const { return o->accessibleDescription(); }
    Q_INVOKABLE QString MaccessibleText(QStandardItem* o) const { return o->accessibleText(); }
    Q_INVOKABLE void MappendColumn(QStandardItem* o, const QList<QStandardItem*>& x1) { o->appendColumn(x1); }
    Q_INVOKABLE void MappendRow(QStandardItem* o, const QList<QStandardItem*>& x1) { o->appendRow(x1); }
    Q_INVOKABLE void MappendRow(QStandardItem* o, QStandardItem* x1) { o->appendRow(x1); }
    Q_INVOKABLE void MappendRows(QStandardItem* o, const QList<QStandardItem*>& x1) { o->appendRows(x1); }
    Q_INVOKABLE QBrush Mbackground(QStandardItem* o) const { return o->background(); }
    Q_INVOKABLE Qt::CheckState McheckState(QStandardItem* o) const { return o->checkState(); }
    Q_INVOKABLE QStandardItem* Mchild(QStandardItem* o, int x1, int x2 = 0) const { return o->child(x1, x2); }
    Q_INVOKABLE QStandardItem* Mclone(QStandardItem* o) const { return o->clone(); }
    Q_INVOKABLE int Mcolumn(QStandardItem* o) const { return o->column(); }
    Q_INVOKABLE int McolumnCount(QStandardItem* o) const { return o->columnCount(); }
    Q_INVOKABLE QVariant Mdata(QStandardItem* o, int x1 = Qt::UserRole+1) const { return o->data(x1); }
    Q_INVOKABLE Qt::ItemFlags Mflags(QStandardItem* o) const { return o->flags(); }
    Q_INVOKABLE QFont Mfont(QStandardItem* o) const { return o->font(); }
    Q_INVOKABLE QBrush Mforeground(QStandardItem* o) const { return o->foreground(); }
    Q_INVOKABLE bool MhasChildren(QStandardItem* o) const { return o->hasChildren(); }
    Q_INVOKABLE QIcon Micon(QStandardItem* o) const { return o->icon(); }
    Q_INVOKABLE QModelIndex Mindex(QStandardItem* o) const { return o->index(); }
    Q_INVOKABLE void MinsertColumn(QStandardItem* o, int x1, const QList<QStandardItem*>& x2) { o->insertColumn(x1, x2); }
    Q_INVOKABLE void MinsertColumns(QStandardItem* o, int x1, int x2) { o->insertColumns(x1, x2); }
    Q_INVOKABLE void MinsertRow(QStandardItem* o, int x1, const QList<QStandardItem*>& x2) { o->insertRow(x1, x2); }
    Q_INVOKABLE void MinsertRow(QStandardItem* o, int x1, QStandardItem* x2) { o->insertRow(x1, x2); }
    Q_INVOKABLE void MinsertRows(QStandardItem* o, int x1, const QList<QStandardItem*>& x2) { o->insertRows(x1, x2); }
    Q_INVOKABLE void MinsertRows(QStandardItem* o, int x1, int x2) { o->insertRows(x1, x2); }
    Q_INVOKABLE bool MisCheckable(QStandardItem* o) const { return o->isCheckable(); }
    Q_INVOKABLE bool MisDragEnabled(QStandardItem* o) const { return o->isDragEnabled(); }
    Q_INVOKABLE bool MisDropEnabled(QStandardItem* o) const { return o->isDropEnabled(); }
    Q_INVOKABLE bool MisEditable(QStandardItem* o) const { return o->isEditable(); }
    Q_INVOKABLE bool MisEnabled(QStandardItem* o) const { return o->isEnabled(); }
    Q_INVOKABLE bool MisSelectable(QStandardItem* o) const { return o->isSelectable(); }
    Q_INVOKABLE bool MisTristate(QStandardItem* o) const { return o->isTristate(); }
    Q_INVOKABLE QStandardItemModel* Mmodel(QStandardItem* o) const { return o->model(); }
    Q_INVOKABLE QStandardItem* Mparent(QStandardItem* o) const { return o->parent(); }
    Q_INVOKABLE void MremoveColumn(QStandardItem* o, int x1) { o->removeColumn(x1); }
    Q_INVOKABLE void MremoveColumns(QStandardItem* o, int x1, int x2) { o->removeColumns(x1, x2); }
    Q_INVOKABLE void MremoveRow(QStandardItem* o, int x1) { o->removeRow(x1); }
    Q_INVOKABLE void MremoveRows(QStandardItem* o, int x1, int x2) { o->removeRows(x1, x2); }
    Q_INVOKABLE int Mrow(QStandardItem* o) const { return o->row(); }
    Q_INVOKABLE int MrowCount(QStandardItem* o) const { return o->rowCount(); }
    Q_INVOKABLE void MsetAccessibleDescription(QStandardItem* o, const QString& x1) { o->setAccessibleDescription(x1); }
    Q_INVOKABLE void MsetAccessibleText(QStandardItem* o, const QString& x1) { o->setAccessibleText(x1); }
    Q_INVOKABLE void MsetBackground(QStandardItem* o, const QBrush& x1) { o->setBackground(x1); }
    Q_INVOKABLE void MsetCheckState(QStandardItem* o, Qt::CheckState x1) { o->setCheckState(x1); }
    Q_INVOKABLE void MsetCheckable(QStandardItem* o, bool x1) { o->setCheckable(x1); }
    Q_INVOKABLE void MsetChild(QStandardItem* o, int x1, int x2, QStandardItem* x3) { o->setChild(x1, x2, x3); }
    Q_INVOKABLE void MsetChild(QStandardItem* o, int x1, QStandardItem* x2) { o->setChild(x1, x2); }
    Q_INVOKABLE void MsetColumnCount(QStandardItem* o, int x1) { o->setColumnCount(x1); }
    Q_INVOKABLE void MsetData(QStandardItem* o, const QVariant& x1, int x2 = Qt::UserRole+1) { o->setData(x1, x2); }
    Q_INVOKABLE void MsetDragEnabled(QStandardItem* o, bool x1) { o->setDragEnabled(x1); }
    Q_INVOKABLE void MsetDropEnabled(QStandardItem* o, bool x1) { o->setDropEnabled(x1); }
    Q_INVOKABLE void MsetEditable(QStandardItem* o, bool x1) { o->setEditable(x1); }
    Q_INVOKABLE void MsetEnabled(QStandardItem* o, bool x1) { o->setEnabled(x1); }
    Q_INVOKABLE void MsetFlags(QStandardItem* o, Qt::ItemFlags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetFont(QStandardItem* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetForeground(QStandardItem* o, const QBrush& x1) { o->setForeground(x1); }
    Q_INVOKABLE void MsetIcon(QStandardItem* o, const QIcon& x1) { o->setIcon(x1); }
    Q_INVOKABLE void MsetRowCount(QStandardItem* o, int x1) { o->setRowCount(x1); }
    Q_INVOKABLE void MsetSelectable(QStandardItem* o, bool x1) { o->setSelectable(x1); }
    Q_INVOKABLE void MsetSizeHint(QStandardItem* o, const QSize& x1) { o->setSizeHint(x1); }
    Q_INVOKABLE void MsetStatusTip(QStandardItem* o, const QString& x1) { o->setStatusTip(x1); }
    Q_INVOKABLE void MsetText(QStandardItem* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE void MsetTextAlignment(QStandardItem* o, Qt::Alignment x1) { o->setTextAlignment(x1); }
    Q_INVOKABLE void MsetToolTip(QStandardItem* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetTristate(QStandardItem* o, bool x1) { o->setTristate(x1); }
    Q_INVOKABLE void MsetWhatsThis(QStandardItem* o, const QString& x1) { o->setWhatsThis(x1); }
    Q_INVOKABLE QSize MsizeHint(QStandardItem* o) const { return o->sizeHint(); }
    Q_INVOKABLE void MsortChildren(QStandardItem* o, int x1, Qt::SortOrder x2 = Qt::AscendingOrder) { o->sortChildren(x1, x2); }
    Q_INVOKABLE QString MstatusTip(QStandardItem* o) const { return o->statusTip(); }
    Q_INVOKABLE QStandardItem* MtakeChild(QStandardItem* o, int x1, int x2 = 0) { return o->takeChild(x1, x2); }
    Q_INVOKABLE QList<QStandardItem*> MtakeColumn(QStandardItem* o, int x1) { return o->takeColumn(x1); }
    Q_INVOKABLE QList<QStandardItem*> MtakeRow(QStandardItem* o, int x1) { return o->takeRow(x1); }
    Q_INVOKABLE QString Mtext(QStandardItem* o) const { return o->text(); }
    Q_INVOKABLE Qt::Alignment MtextAlignment(QStandardItem* o) const { return o->textAlignment(); }
    Q_INVOKABLE QString MtoolTip(QStandardItem* o) const { return o->toolTip(); }
    Q_INVOKABLE int Mtype(QStandardItem* o) const { return o->type(); }
    Q_INVOKABLE QString MwhatsThis(QStandardItem* o) const { return o->whatsThis(); }
};

class N83 : public QObject { // QTableWidgetItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1 = QTableWidgetItem::Type) { return new LTableWidgetItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, int x2 = QTableWidgetItem::Type) { return new LTableWidgetItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QIcon& x1, const QString& x2, int x3 = QTableWidgetItem::Type) { return new LTableWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QTableWidgetItem& x1) { return new LTableWidgetItem(u, x1); }
    Q_INVOKABLE QBrush Mbackground(QTableWidgetItem* o) const { return o->background(); }
    Q_INVOKABLE Qt::CheckState McheckState(QTableWidgetItem* o) const { return o->checkState(); }
    Q_INVOKABLE QTableWidgetItem* Mclone(QTableWidgetItem* o) const { return o->clone(); }
    Q_INVOKABLE int Mcolumn(QTableWidgetItem* o) const { return o->column(); }
    Q_INVOKABLE QVariant Mdata(QTableWidgetItem* o, int x1) const { return o->data(x1); }
    Q_INVOKABLE Qt::ItemFlags Mflags(QTableWidgetItem* o) const { return o->flags(); }
    Q_INVOKABLE QFont Mfont(QTableWidgetItem* o) const { return o->font(); }
    Q_INVOKABLE QBrush Mforeground(QTableWidgetItem* o) const { return o->foreground(); }
    Q_INVOKABLE QIcon Micon(QTableWidgetItem* o) const { return o->icon(); }
    Q_INVOKABLE bool MisSelected(QTableWidgetItem* o) const { return o->isSelected(); }
    Q_INVOKABLE int Mrow(QTableWidgetItem* o) const { return o->row(); }
    Q_INVOKABLE void MsetBackground(QTableWidgetItem* o, const QBrush& x1) { o->setBackground(x1); }
    Q_INVOKABLE void MsetCheckState(QTableWidgetItem* o, Qt::CheckState x1) { o->setCheckState(x1); }
    Q_INVOKABLE void MsetData(QTableWidgetItem* o, int x1, const QVariant& x2) { o->setData(x1, x2); }
    Q_INVOKABLE void MsetFlags(QTableWidgetItem* o, Qt::ItemFlags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetFont(QTableWidgetItem* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetForeground(QTableWidgetItem* o, const QBrush& x1) { o->setForeground(x1); }
    Q_INVOKABLE void MsetIcon(QTableWidgetItem* o, const QIcon& x1) { o->setIcon(x1); }
    Q_INVOKABLE void MsetSelected(QTableWidgetItem* o, bool x1) { o->setSelected(x1); }
    Q_INVOKABLE void MsetSizeHint(QTableWidgetItem* o, const QSize& x1) { o->setSizeHint(x1); }
    Q_INVOKABLE void MsetStatusTip(QTableWidgetItem* o, const QString& x1) { o->setStatusTip(x1); }
    Q_INVOKABLE void MsetText(QTableWidgetItem* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE void MsetTextAlignment(QTableWidgetItem* o, int x1) { o->setTextAlignment(x1); }
    Q_INVOKABLE void MsetToolTip(QTableWidgetItem* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetWhatsThis(QTableWidgetItem* o, const QString& x1) { o->setWhatsThis(x1); }
    Q_INVOKABLE QSize MsizeHint(QTableWidgetItem* o) const { return o->sizeHint(); }
    Q_INVOKABLE QString MstatusTip(QTableWidgetItem* o) const { return o->statusTip(); }
    Q_INVOKABLE QTableWidget* MtableWidget(QTableWidgetItem* o) const { return o->tableWidget(); }
    Q_INVOKABLE QString Mtext(QTableWidgetItem* o) const { return o->text(); }
    Q_INVOKABLE int MtextAlignment(QTableWidgetItem* o) const { return o->textAlignment(); }
    Q_INVOKABLE QString MtoolTip(QTableWidgetItem* o) const { return o->toolTip(); }
    Q_INVOKABLE int Mtype(QTableWidgetItem* o) const { return o->type(); }
    Q_INVOKABLE QString MwhatsThis(QTableWidgetItem* o) const { return o->whatsThis(); }
};

class N84 : public QObject { // QTableWidgetSelectionRange
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTableWidgetSelectionRange(u); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, int x3, int x4) { return new LTableWidgetSelectionRange(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QTableWidgetSelectionRange& x1) { return new LTableWidgetSelectionRange(u, x1); }
    Q_INVOKABLE int MbottomRow(QTableWidgetSelectionRange* o) const { return o->bottomRow(); }
    Q_INVOKABLE int McolumnCount(QTableWidgetSelectionRange* o) const { return o->columnCount(); }
    Q_INVOKABLE int MleftColumn(QTableWidgetSelectionRange* o) const { return o->leftColumn(); }
    Q_INVOKABLE int MrightColumn(QTableWidgetSelectionRange* o) const { return o->rightColumn(); }
    Q_INVOKABLE int MrowCount(QTableWidgetSelectionRange* o) const { return o->rowCount(); }
    Q_INVOKABLE int MtopRow(QTableWidgetSelectionRange* o) const { return o->topRow(); }
};

class N86 : public QObject { // QTextBlock
    Q_OBJECT
public:
    Q_INVOKABLE QTextBlockFormat MblockFormat(QTextBlock* o) const { return o->blockFormat(); }
    Q_INVOKABLE int MblockFormatIndex(QTextBlock* o) const { return o->blockFormatIndex(); }
    Q_INVOKABLE int MblockNumber(QTextBlock* o) const { return o->blockNumber(); }
    Q_INVOKABLE QTextCharFormat McharFormat(QTextBlock* o) const { return o->charFormat(); }
    Q_INVOKABLE int McharFormatIndex(QTextBlock* o) const { return o->charFormatIndex(); }
    Q_INVOKABLE void MclearLayout(QTextBlock* o) { o->clearLayout(); }
    Q_INVOKABLE bool Mcontains(QTextBlock* o, int x1) const { return o->contains(x1); }
    Q_INVOKABLE const QTextDocument* Mdocument(QTextBlock* o) const { return o->document(); }
    Q_INVOKABLE int MfirstLineNumber(QTextBlock* o) const { return o->firstLineNumber(); }
    Q_INVOKABLE bool MisValid(QTextBlock* o) const { return o->isValid(); }
    Q_INVOKABLE bool MisVisible(QTextBlock* o) const { return o->isVisible(); }
    Q_INVOKABLE int Mlength(QTextBlock* o) const { return o->length(); }
    Q_INVOKABLE int MlineCount(QTextBlock* o) const { return o->lineCount(); }
    Q_INVOKABLE QTextBlock Mnext(QTextBlock* o) const { return o->next(); }
    Q_INVOKABLE int Mposition(QTextBlock* o) const { return o->position(); }
    Q_INVOKABLE QTextBlock Mprevious(QTextBlock* o) const { return o->previous(); }
    Q_INVOKABLE int Mrevision(QTextBlock* o) const { return o->revision(); }
    Q_INVOKABLE void MsetLineCount(QTextBlock* o, int x1) { o->setLineCount(x1); }
    Q_INVOKABLE void MsetRevision(QTextBlock* o, int x1) { o->setRevision(x1); }
    Q_INVOKABLE void MsetUserData(QTextBlock* o, QTextBlockUserData* x1) { o->setUserData(x1); }
    Q_INVOKABLE void MsetUserState(QTextBlock* o, int x1) { o->setUserState(x1); }
    Q_INVOKABLE void MsetVisible(QTextBlock* o, bool x1) { o->setVisible(x1); }
    Q_INVOKABLE QString Mtext(QTextBlock* o) const { return o->text(); }
    Q_INVOKABLE QTextList* MtextList(QTextBlock* o) const { return o->textList(); }
    Q_INVOKABLE QTextBlockUserData* MuserData(QTextBlock* o) const { return o->userData(); }
    Q_INVOKABLE int MuserState(QTextBlock* o) const { return o->userState(); }
};

class N89 : public QObject { // QTextCursor
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextCursor(u); }
    Q_INVOKABLE void* C(uint u, QTextDocument* x1) { return new LTextCursor(u, x1); }
    Q_INVOKABLE void* C(uint u, QTextFrame* x1) { return new LTextCursor(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextBlock& x1) { return new LTextCursor(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextCursor& x1) { return new LTextCursor(u, x1); }
    Q_INVOKABLE int Manchor(QTextCursor* o) const { return o->anchor(); }
    Q_INVOKABLE bool MatBlockEnd(QTextCursor* o) const { return o->atBlockEnd(); }
    Q_INVOKABLE bool MatBlockStart(QTextCursor* o) const { return o->atBlockStart(); }
    Q_INVOKABLE bool MatEnd(QTextCursor* o) const { return o->atEnd(); }
    Q_INVOKABLE bool MatStart(QTextCursor* o) const { return o->atStart(); }
    Q_INVOKABLE void MbeginEditBlock(QTextCursor* o) { o->beginEditBlock(); }
    Q_INVOKABLE QTextBlock Mblock(QTextCursor* o) const { return o->block(); }
    Q_INVOKABLE QTextCharFormat MblockCharFormat(QTextCursor* o) const { return o->blockCharFormat(); }
    Q_INVOKABLE QTextBlockFormat MblockFormat(QTextCursor* o) const { return o->blockFormat(); }
    Q_INVOKABLE int MblockNumber(QTextCursor* o) const { return o->blockNumber(); }
    Q_INVOKABLE QTextCharFormat McharFormat(QTextCursor* o) const { return o->charFormat(); }
    Q_INVOKABLE void MclearSelection(QTextCursor* o) { o->clearSelection(); }
    Q_INVOKABLE int McolumnNumber(QTextCursor* o) const { return o->columnNumber(); }
    Q_INVOKABLE QTextList* McreateList(QTextCursor* o, const QTextListFormat& x1) { return o->createList(x1); }
    Q_INVOKABLE QTextList* McreateList(QTextCursor* o, QTextListFormat::Style x1) { return o->createList(x1); }
    Q_INVOKABLE QTextFrame* McurrentFrame(QTextCursor* o) const { return o->currentFrame(); }
    Q_INVOKABLE QTextList* McurrentList(QTextCursor* o) const { return o->currentList(); }
    Q_INVOKABLE QTextTable* McurrentTable(QTextCursor* o) const { return o->currentTable(); }
    Q_INVOKABLE void MdeleteChar(QTextCursor* o) { o->deleteChar(); }
    Q_INVOKABLE void MdeletePreviousChar(QTextCursor* o) { o->deletePreviousChar(); }
    Q_INVOKABLE QTextDocument* Mdocument(QTextCursor* o) const { return o->document(); }
    Q_INVOKABLE void MendEditBlock(QTextCursor* o) { o->endEditBlock(); }
    Q_INVOKABLE bool MhasComplexSelection(QTextCursor* o) const { return o->hasComplexSelection(); }
    Q_INVOKABLE bool MhasSelection(QTextCursor* o) const { return o->hasSelection(); }
    Q_INVOKABLE void MinsertBlock(QTextCursor* o) { o->insertBlock(); }
    Q_INVOKABLE void MinsertBlock(QTextCursor* o, const QTextBlockFormat& x1) { o->insertBlock(x1); }
    Q_INVOKABLE void MinsertBlock(QTextCursor* o, const QTextBlockFormat& x1, const QTextCharFormat& x2) { o->insertBlock(x1, x2); }
    Q_INVOKABLE void MinsertFragment(QTextCursor* o, const QTextDocumentFragment& x1) { o->insertFragment(x1); }
    Q_INVOKABLE QTextFrame* MinsertFrame(QTextCursor* o, const QTextFrameFormat& x1) { return o->insertFrame(x1); }
    Q_INVOKABLE void MinsertHtml(QTextCursor* o, const QString& x1) { o->insertHtml(x1); }
    Q_INVOKABLE void MinsertImage(QTextCursor* o, const QTextImageFormat& x1) { o->insertImage(x1); }
    Q_INVOKABLE void MinsertImage(QTextCursor* o, const QTextImageFormat& x1, QTextFrameFormat::Position x2) { o->insertImage(x1, x2); }
    Q_INVOKABLE void MinsertImage(QTextCursor* o, const QString& x1) { o->insertImage(x1); }
    Q_INVOKABLE void MinsertImage(QTextCursor* o, const QImage& x1, const QString& x2 = QString()) { o->insertImage(x1, x2); }
    Q_INVOKABLE QTextList* MinsertList(QTextCursor* o, const QTextListFormat& x1) { return o->insertList(x1); }
    Q_INVOKABLE QTextList* MinsertList(QTextCursor* o, QTextListFormat::Style x1) { return o->insertList(x1); }
    Q_INVOKABLE QTextTable* MinsertTable(QTextCursor* o, int x1, int x2, const QTextTableFormat& x3) { return o->insertTable(x1, x2, x3); }
    Q_INVOKABLE QTextTable* MinsertTable(QTextCursor* o, int x1, int x2) { return o->insertTable(x1, x2); }
    Q_INVOKABLE void MinsertText(QTextCursor* o, const QString& x1) { o->insertText(x1); }
    Q_INVOKABLE void MinsertText(QTextCursor* o, const QString& x1, const QTextCharFormat& x2) { o->insertText(x1, x2); }
    Q_INVOKABLE bool MisCopyOf(QTextCursor* o, const QTextCursor& x1) const { return o->isCopyOf(x1); }
    Q_INVOKABLE bool MisNull(QTextCursor* o) const { return o->isNull(); }
    Q_INVOKABLE void MjoinPreviousEditBlock(QTextCursor* o) { o->joinPreviousEditBlock(); }
    Q_INVOKABLE void MmergeBlockCharFormat(QTextCursor* o, const QTextCharFormat& x1) { o->mergeBlockCharFormat(x1); }
    Q_INVOKABLE void MmergeBlockFormat(QTextCursor* o, const QTextBlockFormat& x1) { o->mergeBlockFormat(x1); }
    Q_INVOKABLE void MmergeCharFormat(QTextCursor* o, const QTextCharFormat& x1) { o->mergeCharFormat(x1); }
    Q_INVOKABLE bool MmovePosition(QTextCursor* o, QTextCursor::MoveOperation x1, QTextCursor::MoveMode x2 = QTextCursor::MoveAnchor, int x3 = 1) { return o->movePosition(x1, x2, x3); }
    Q_INVOKABLE int Mposition(QTextCursor* o) const { return o->position(); }
    Q_INVOKABLE void MremoveSelectedText(QTextCursor* o) { o->removeSelectedText(); }
    Q_INVOKABLE void Mselect(QTextCursor* o, QTextCursor::SelectionType x1) { o->select(x1); }
    Q_INVOKABLE QString MselectedText(QTextCursor* o) const { return o->selectedText(); }
    Q_INVOKABLE QTextDocumentFragment Mselection(QTextCursor* o) const { return o->selection(); }
    Q_INVOKABLE int MselectionEnd(QTextCursor* o) const { return o->selectionEnd(); }
    Q_INVOKABLE int MselectionStart(QTextCursor* o) const { return o->selectionStart(); }
    Q_INVOKABLE void MsetBlockCharFormat(QTextCursor* o, const QTextCharFormat& x1) { o->setBlockCharFormat(x1); }
    Q_INVOKABLE void MsetBlockFormat(QTextCursor* o, const QTextBlockFormat& x1) { o->setBlockFormat(x1); }
    Q_INVOKABLE void MsetCharFormat(QTextCursor* o, const QTextCharFormat& x1) { o->setCharFormat(x1); }
    Q_INVOKABLE void MsetPosition(QTextCursor* o, int x1, QTextCursor::MoveMode x2 = QTextCursor::MoveAnchor) { o->setPosition(x1, x2); }
    Q_INVOKABLE void MsetVisualNavigation(QTextCursor* o, bool x1) { o->setVisualNavigation(x1); }
    Q_INVOKABLE bool MvisualNavigation(QTextCursor* o) const { return o->visualNavigation(); }
};

class N90 : public QObject { // QTextDocumentFragment
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextDocumentFragment(u); }
    Q_INVOKABLE void* C(uint u, const QTextDocument* x1) { return new LTextDocumentFragment(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextCursor& x1) { return new LTextDocumentFragment(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextDocumentFragment& x1) { return new LTextDocumentFragment(u, x1); }
    Q_INVOKABLE bool MisEmpty(QTextDocumentFragment* o) const { return o->isEmpty(); }
    Q_INVOKABLE QString MtoHtml(QTextDocumentFragment* o, const QByteArray& x1) const { return o->toHtml(x1); }
    Q_INVOKABLE QString MtoHtml(QTextDocumentFragment* o) const { return o->toHtml(); }
    Q_INVOKABLE QString MtoPlainText(QTextDocumentFragment* o) const { return o->toPlainText(); }
    Q_INVOKABLE QTextDocumentFragment SfromHtml(const QString& x1) { return QTextDocumentFragment::fromHtml(x1); }
    Q_INVOKABLE QTextDocumentFragment SfromHtml(const QString& x1, const QTextDocument* x2) { return QTextDocumentFragment::fromHtml(x1, x2); }
    Q_INVOKABLE QTextDocumentFragment SfromPlainText(const QString& x1) { return QTextDocumentFragment::fromPlainText(x1); }
};

class N91 : public QObject { // QTextFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextFormat(u); }
    Q_INVOKABLE void* C(uint u, int x1) { return new LTextFormat(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextFormat& x1) { return new LTextFormat(u, x1); }
    Q_INVOKABLE QBrush Mbackground(QTextFormat* o) const { return o->background(); }
    Q_INVOKABLE bool MboolProperty(QTextFormat* o, int x1) const { return o->boolProperty(x1); }
    Q_INVOKABLE QBrush MbrushProperty(QTextFormat* o, int x1) const { return o->brushProperty(x1); }
    Q_INVOKABLE void MclearBackground(QTextFormat* o) { o->clearBackground(); }
    Q_INVOKABLE void MclearForeground(QTextFormat* o) { o->clearForeground(); }
    Q_INVOKABLE void MclearProperty(QTextFormat* o, int x1) { o->clearProperty(x1); }
    Q_INVOKABLE QColor McolorProperty(QTextFormat* o, int x1) const { return o->colorProperty(x1); }
    Q_INVOKABLE qreal MdoubleProperty(QTextFormat* o, int x1) const { return o->doubleProperty(x1); }
    Q_INVOKABLE QBrush Mforeground(QTextFormat* o) const { return o->foreground(); }
    Q_INVOKABLE bool MhasProperty(QTextFormat* o, int x1) const { return o->hasProperty(x1); }
    Q_INVOKABLE int MintProperty(QTextFormat* o, int x1) const { return o->intProperty(x1); }
    Q_INVOKABLE bool MisBlockFormat(QTextFormat* o) const { return o->isBlockFormat(); }
    Q_INVOKABLE bool MisCharFormat(QTextFormat* o) const { return o->isCharFormat(); }
    Q_INVOKABLE bool MisFrameFormat(QTextFormat* o) const { return o->isFrameFormat(); }
    Q_INVOKABLE bool MisImageFormat(QTextFormat* o) const { return o->isImageFormat(); }
    Q_INVOKABLE bool MisListFormat(QTextFormat* o) const { return o->isListFormat(); }
    Q_INVOKABLE bool MisTableCellFormat(QTextFormat* o) const { return o->isTableCellFormat(); }
    Q_INVOKABLE bool MisTableFormat(QTextFormat* o) const { return o->isTableFormat(); }
    Q_INVOKABLE bool MisValid(QTextFormat* o) const { return o->isValid(); }
    Q_INVOKABLE Qt::LayoutDirection MlayoutDirection(QTextFormat* o) const { return o->layoutDirection(); }
    Q_INVOKABLE QTextLength MlengthProperty(QTextFormat* o, int x1) const { return o->lengthProperty(x1); }
    Q_INVOKABLE QVector<QTextLength> MlengthVectorProperty(QTextFormat* o, int x1) const { return o->lengthVectorProperty(x1); }
    Q_INVOKABLE void Mmerge(QTextFormat* o, const QTextFormat& x1) { o->merge(x1); }
    Q_INVOKABLE int MobjectIndex(QTextFormat* o) const { return o->objectIndex(); }
    Q_INVOKABLE int MobjectType(QTextFormat* o) const { return o->objectType(); }
    Q_INVOKABLE QPen MpenProperty(QTextFormat* o, int x1) const { return o->penProperty(x1); }
    Q_INVOKABLE QVariant Mproperty(QTextFormat* o, int x1) const { return o->property(x1); }
    Q_INVOKABLE int MpropertyCount(QTextFormat* o) const { return o->propertyCount(); }
    Q_INVOKABLE void MsetBackground(QTextFormat* o, const QBrush& x1) { o->setBackground(x1); }
    Q_INVOKABLE void MsetForeground(QTextFormat* o, const QBrush& x1) { o->setForeground(x1); }
    Q_INVOKABLE void MsetLayoutDirection(QTextFormat* o, Qt::LayoutDirection x1) { o->setLayoutDirection(x1); }
    Q_INVOKABLE void MsetObjectIndex(QTextFormat* o, int x1) { o->setObjectIndex(x1); }
    Q_INVOKABLE void MsetObjectType(QTextFormat* o, int x1) { o->setObjectType(x1); }
    Q_INVOKABLE void MsetProperty(QTextFormat* o, int x1, const QVariant& x2) { o->setProperty(x1, x2); }
    Q_INVOKABLE void MsetProperty(QTextFormat* o, int x1, const QVector<QTextLength>& x2) { o->setProperty(x1, x2); }
    Q_INVOKABLE QString MstringProperty(QTextFormat* o, int x1) const { return o->stringProperty(x1); }
    Q_INVOKABLE QTextBlockFormat MtoBlockFormat(QTextFormat* o) const { return o->toBlockFormat(); }
    Q_INVOKABLE QTextCharFormat MtoCharFormat(QTextFormat* o) const { return o->toCharFormat(); }
    Q_INVOKABLE QTextFrameFormat MtoFrameFormat(QTextFormat* o) const { return o->toFrameFormat(); }
    Q_INVOKABLE QTextImageFormat MtoImageFormat(QTextFormat* o) const { return o->toImageFormat(); }
    Q_INVOKABLE QTextListFormat MtoListFormat(QTextFormat* o) const { return o->toListFormat(); }
    Q_INVOKABLE QTextTableCellFormat MtoTableCellFormat(QTextFormat* o) const { return o->toTableCellFormat(); }
    Q_INVOKABLE QTextTableFormat MtoTableFormat(QTextFormat* o) const { return o->toTableFormat(); }
    Q_INVOKABLE int Mtype(QTextFormat* o) const { return o->type(); }
};

class N94 : public QObject { // QTextLength
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextLength(u); }
    Q_INVOKABLE void* C(uint u, QTextLength::Type x1, qreal x2) { return new LTextLength(u, x1, x2); }
    Q_INVOKABLE qreal MrawValue(QTextLength* o) const { return o->rawValue(); }
    Q_INVOKABLE QTextLength::Type Mtype(QTextLength* o) const { return o->type(); }
    Q_INVOKABLE qreal Mvalue(QTextLength* o, qreal x1) const { return o->value(x1); }
};

class N96 : public QObject { // QTextOption
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextOption(u); }
    Q_INVOKABLE void* C(uint u, Qt::Alignment x1) { return new LTextOption(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTextOption& x1) { return new LTextOption(u, x1); }
    Q_INVOKABLE Qt::Alignment Malignment(QTextOption* o) const { return o->alignment(); }
    Q_INVOKABLE QTextOption::Flags Mflags(QTextOption* o) const { return o->flags(); }
    Q_INVOKABLE void MsetAlignment(QTextOption* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetFlags(QTextOption* o, QTextOption::Flags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetTabArray(QTextOption* o, QList<qreal> x1) { o->setTabArray(x1); }
    Q_INVOKABLE void MsetTabStop(QTextOption* o, qreal x1) { o->setTabStop(x1); }
    Q_INVOKABLE void MsetTextDirection(QTextOption* o, Qt::LayoutDirection x1) { o->setTextDirection(x1); }
    Q_INVOKABLE void MsetUseDesignMetrics(QTextOption* o, bool x1) { o->setUseDesignMetrics(x1); }
    Q_INVOKABLE void MsetWrapMode(QTextOption* o, QTextOption::WrapMode x1) { o->setWrapMode(x1); }
    Q_INVOKABLE QList<qreal> MtabArray(QTextOption* o) const { return o->tabArray(); }
    Q_INVOKABLE qreal MtabStop(QTextOption* o) const { return o->tabStop(); }
    Q_INVOKABLE Qt::LayoutDirection MtextDirection(QTextOption* o) const { return o->textDirection(); }
    Q_INVOKABLE bool MuseDesignMetrics(QTextOption* o) const { return o->useDesignMetrics(); }
    Q_INVOKABLE QTextOption::WrapMode MwrapMode(QTextOption* o) const { return o->wrapMode(); }
};

class N97 : public QObject { // QTextTableCell
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextTableCell(u); }
    Q_INVOKABLE void* C(uint u, const QTextTableCell& x1) { return new LTextTableCell(u, x1); }
    Q_INVOKABLE int Mcolumn(QTextTableCell* o) const { return o->column(); }
    Q_INVOKABLE int McolumnSpan(QTextTableCell* o) const { return o->columnSpan(); }
    Q_INVOKABLE QTextCursor MfirstCursorPosition(QTextTableCell* o) const { return o->firstCursorPosition(); }
    Q_INVOKABLE QTextCharFormat Mformat(QTextTableCell* o) const { return o->format(); }
    Q_INVOKABLE bool MisValid(QTextTableCell* o) const { return o->isValid(); }
    Q_INVOKABLE QTextCursor MlastCursorPosition(QTextTableCell* o) const { return o->lastCursorPosition(); }
    Q_INVOKABLE int Mrow(QTextTableCell* o) const { return o->row(); }
    Q_INVOKABLE int MrowSpan(QTextTableCell* o) const { return o->rowSpan(); }
    Q_INVOKABLE void MsetFormat(QTextTableCell* o, const QTextCharFormat& x1) { o->setFormat(x1); }
    Q_INVOKABLE int MtableCellFormatIndex(QTextTableCell* o) const { return o->tableCellFormatIndex(); }
};

class N100 : public QObject { // QTime
    Q_OBJECT
public:
    Q_INVOKABLE QTime MaddMSecs(QTime* o, int x1) const { return o->addMSecs(x1); }
    Q_INVOKABLE QTime MaddSecs(QTime* o, int x1) const { return o->addSecs(x1); }
    Q_INVOKABLE int Melapsed(QTime* o) const { return o->elapsed(); }
    Q_INVOKABLE int Mhour(QTime* o) const { return o->hour(); }
    Q_INVOKABLE bool MisNull(QTime* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisValid(QTime* o) const { return o->isValid(); }
    Q_INVOKABLE int Mminute(QTime* o) const { return o->minute(); }
    Q_INVOKABLE int Mmsec(QTime* o) const { return o->msec(); }
    Q_INVOKABLE int MmsecsTo(QTime* o, const QTime& x1) const { return o->msecsTo(x1); }
    Q_INVOKABLE int Mrestart(QTime* o) { return o->restart(); }
    Q_INVOKABLE int Msecond(QTime* o) const { return o->second(); }
    Q_INVOKABLE int MsecsTo(QTime* o, const QTime& x1) const { return o->secsTo(x1); }
    Q_INVOKABLE bool MsetHMS(QTime* o, int x1, int x2, int x3, int x4 = 0) { return o->setHMS(x1, x2, x3, x4); }
    Q_INVOKABLE void Mstart(QTime* o) { o->start(); }
    Q_INVOKABLE QString MtoString(QTime* o, const QString& x1) const { return o->toString(x1); }
    Q_INVOKABLE QString MtoString(QTime* o, Qt::DateFormat x1 = Qt::TextDate) const { return o->toString(x1); }
    Q_INVOKABLE QTime ScurrentTime() { return QTime::currentTime(); }
    Q_INVOKABLE QTime SfromString(const QString& x1, Qt::DateFormat x2 = Qt::TextDate) { return QTime::fromString(x1, x2); }
    Q_INVOKABLE QTime SfromString(const QString& x1, const QString& x2) { return QTime::fromString(x1, x2); }
    Q_INVOKABLE bool SisValid(int x1, int x2, int x3, int x4 = 0) { return QTime::isValid(x1, x2, x3, x4); }
};

class N102 : public QObject { // QTransform
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTransform(u); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, qreal x7, qreal x8, qreal x9 = 1.0) { return new LTransform(u, x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6) { return new LTransform(u, x1, x2, x3, x4, x5, x6); }
    Q_INVOKABLE void* C(uint u, const QMatrix& x1) { return new LTransform(u, x1); }
    Q_INVOKABLE qreal Mm11(QTransform* o) const { return o->m11(); }
    Q_INVOKABLE qreal Mm12(QTransform* o) const { return o->m12(); }
    Q_INVOKABLE qreal Mm13(QTransform* o) const { return o->m13(); }
    Q_INVOKABLE qreal Mm21(QTransform* o) const { return o->m21(); }
    Q_INVOKABLE qreal Mm22(QTransform* o) const { return o->m22(); }
    Q_INVOKABLE qreal Mm23(QTransform* o) const { return o->m23(); }
    Q_INVOKABLE qreal Mm31(QTransform* o) const { return o->m31(); }
    Q_INVOKABLE qreal Mm32(QTransform* o) const { return o->m32(); }
    Q_INVOKABLE qreal Mm33(QTransform* o) const { return o->m33(); }
    Q_INVOKABLE QTransform Madjoint(QTransform* o) const { return o->adjoint(); }
    Q_INVOKABLE qreal Mdeterminant(QTransform* o) const { return o->determinant(); }
    Q_INVOKABLE qreal Mdx(QTransform* o) const { return o->dx(); }
    Q_INVOKABLE qreal Mdy(QTransform* o) const { return o->dy(); }
    Q_INVOKABLE QTransform Minverted(QTransform* o, bool* x1 = 0) const { return o->inverted(x1); }
    Q_INVOKABLE bool MisAffine(QTransform* o) const { return o->isAffine(); }
    Q_INVOKABLE bool MisIdentity(QTransform* o) const { return o->isIdentity(); }
    Q_INVOKABLE bool MisInvertible(QTransform* o) const { return o->isInvertible(); }
    Q_INVOKABLE bool MisRotating(QTransform* o) const { return o->isRotating(); }
    Q_INVOKABLE bool MisScaling(QTransform* o) const { return o->isScaling(); }
    Q_INVOKABLE bool MisTranslating(QTransform* o) const { return o->isTranslating(); }
    Q_INVOKABLE QPointF Mmap(QTransform* o, const QPointF& x1) const { return o->map(x1); }
    Q_INVOKABLE QPoint Mmap(QTransform* o, const QPoint& x1) const { return o->map(x1); }
    Q_INVOKABLE QLine Mmap(QTransform* o, const QLine& x1) const { return o->map(x1); }
    Q_INVOKABLE QLineF Mmap(QTransform* o, const QLineF& x1) const { return o->map(x1); }
    Q_INVOKABLE QPolygonF Mmap(QTransform* o, const QPolygonF& x1) const { return o->map(x1); }
    Q_INVOKABLE QPolygon Mmap(QTransform* o, const QPolygon& x1) const { return o->map(x1); }
    Q_INVOKABLE QRegion Mmap(QTransform* o, const QRegion& x1) const { return o->map(x1); }
    Q_INVOKABLE QPainterPath Mmap(QTransform* o, const QPainterPath& x1) const { return o->map(x1); }
    Q_INVOKABLE QRectF MmapRect(QTransform* o, const QRectF& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QRect MmapRect(QTransform* o, const QRect& x1) const { return o->mapRect(x1); }
    Q_INVOKABLE QPolygon MmapToPolygon(QTransform* o, const QRect& x1) const { return o->mapToPolygon(x1); }
    Q_INVOKABLE void Mreset(QTransform* o) { o->reset(); }
    Q_INVOKABLE QTransform Mrotate(QTransform* o, qreal x1, Qt::Axis x2 = Qt::ZAxis) { return o->rotate(x1, x2); }
    Q_INVOKABLE QTransform MrotateRadians(QTransform* o, qreal x1, Qt::Axis x2 = Qt::ZAxis) { return o->rotateRadians(x1, x2); }
    Q_INVOKABLE QTransform Mscale(QTransform* o, qreal x1, qreal x2) { return o->scale(x1, x2); }
    Q_INVOKABLE void MsetMatrix(QTransform* o, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5, qreal x6, qreal x7, qreal x8, qreal x9) { o->setMatrix(x1, x2, x3, x4, x5, x6, x7, x8, x9); }
    Q_INVOKABLE QTransform Mshear(QTransform* o, qreal x1, qreal x2) { return o->shear(x1, x2); }
    Q_INVOKABLE QMatrix MtoAffine(QTransform* o) const { return o->toAffine(); }
    Q_INVOKABLE QTransform Mtranslate(QTransform* o, qreal x1, qreal x2) { return o->translate(x1, x2); }
    Q_INVOKABLE QTransform Mtransposed(QTransform* o) const { return o->transposed(); }
    Q_INVOKABLE QTransform::TransformationType Mtype(QTransform* o) const { return o->type(); }
    Q_INVOKABLE QTransform SfromScale(qreal x1, qreal x2) { return QTransform::fromScale(x1, x2); }
    Q_INVOKABLE QTransform SfromTranslate(qreal x1, qreal x2) { return QTransform::fromTranslate(x1, x2); }
    Q_INVOKABLE bool SquadToQuad(const QPolygonF& x1, const QPolygonF& x2, QTransform& x3) { return QTransform::quadToQuad(x1, x2, x3); }
    Q_INVOKABLE bool SquadToSquare(const QPolygonF& x1, QTransform& x2) { return QTransform::quadToSquare(x1, x2); }
    Q_INVOKABLE bool SsquareToQuad(const QPolygonF& x1, QTransform& x2) { return QTransform::squareToQuad(x1, x2); }
};

class N103 : public QObject { // QTreeWidgetItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QStringList& x1, int x2 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QTreeWidget* x1, int x2 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QTreeWidget* x1, const QStringList& x2, int x3 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QTreeWidget* x1, QTreeWidgetItem* x2, int x3 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QTreeWidgetItem* x1, int x2 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, QTreeWidgetItem* x1, const QStringList& x2, int x3 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, QTreeWidgetItem* x1, QTreeWidgetItem* x2, int x3 = QTreeWidgetItem::Type) { return new LTreeWidgetItem(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QTreeWidgetItem& x1) { return new LTreeWidgetItem(u, x1); }
    Q_INVOKABLE void MaddChild(QTreeWidgetItem* o, QTreeWidgetItem* x1) { o->addChild(x1); }
    Q_INVOKABLE void MaddChildren(QTreeWidgetItem* o, const QList<QTreeWidgetItem*>& x1) { o->addChildren(x1); }
    Q_INVOKABLE QBrush Mbackground(QTreeWidgetItem* o, int x1) const { return o->background(x1); }
    Q_INVOKABLE Qt::CheckState McheckState(QTreeWidgetItem* o, int x1) const { return o->checkState(x1); }
    Q_INVOKABLE QTreeWidgetItem* Mchild(QTreeWidgetItem* o, int x1) const { return o->child(x1); }
    Q_INVOKABLE int MchildCount(QTreeWidgetItem* o) const { return o->childCount(); }
    Q_INVOKABLE QTreeWidgetItem::ChildIndicatorPolicy MchildIndicatorPolicy(QTreeWidgetItem* o) const { return o->childIndicatorPolicy(); }
    Q_INVOKABLE QTreeWidgetItem* Mclone(QTreeWidgetItem* o) const { return o->clone(); }
    Q_INVOKABLE int McolumnCount(QTreeWidgetItem* o) const { return o->columnCount(); }
    Q_INVOKABLE QVariant Mdata(QTreeWidgetItem* o, int x1, int x2) const { return o->data(x1, x2); }
    Q_INVOKABLE Qt::ItemFlags Mflags(QTreeWidgetItem* o) const { return o->flags(); }
    Q_INVOKABLE QFont Mfont(QTreeWidgetItem* o, int x1) const { return o->font(x1); }
    Q_INVOKABLE QBrush Mforeground(QTreeWidgetItem* o, int x1) const { return o->foreground(x1); }
    Q_INVOKABLE QIcon Micon(QTreeWidgetItem* o, int x1) const { return o->icon(x1); }
    Q_INVOKABLE int MindexOfChild(QTreeWidgetItem* o, QTreeWidgetItem* x1) const { return o->indexOfChild(x1); }
    Q_INVOKABLE void MinsertChild(QTreeWidgetItem* o, int x1, QTreeWidgetItem* x2) { o->insertChild(x1, x2); }
    Q_INVOKABLE void MinsertChildren(QTreeWidgetItem* o, int x1, const QList<QTreeWidgetItem*>& x2) { o->insertChildren(x1, x2); }
    Q_INVOKABLE bool MisDisabled(QTreeWidgetItem* o) const { return o->isDisabled(); }
    Q_INVOKABLE bool MisExpanded(QTreeWidgetItem* o) const { return o->isExpanded(); }
    Q_INVOKABLE bool MisFirstColumnSpanned(QTreeWidgetItem* o) const { return o->isFirstColumnSpanned(); }
    Q_INVOKABLE bool MisHidden(QTreeWidgetItem* o) const { return o->isHidden(); }
    Q_INVOKABLE bool MisSelected(QTreeWidgetItem* o) const { return o->isSelected(); }
    Q_INVOKABLE QTreeWidgetItem* Mparent(QTreeWidgetItem* o) const { return o->parent(); }
    Q_INVOKABLE void MremoveChild(QTreeWidgetItem* o, QTreeWidgetItem* x1) { o->removeChild(x1); }
    Q_INVOKABLE void MsetBackground(QTreeWidgetItem* o, int x1, const QBrush& x2) { o->setBackground(x1, x2); }
    Q_INVOKABLE void MsetCheckState(QTreeWidgetItem* o, int x1, Qt::CheckState x2) { o->setCheckState(x1, x2); }
    Q_INVOKABLE void MsetChildIndicatorPolicy(QTreeWidgetItem* o, QTreeWidgetItem::ChildIndicatorPolicy x1) { o->setChildIndicatorPolicy(x1); }
    Q_INVOKABLE void MsetData(QTreeWidgetItem* o, int x1, int x2, const QVariant& x3) { o->setData(x1, x2, x3); }
    Q_INVOKABLE void MsetDisabled(QTreeWidgetItem* o, bool x1) { o->setDisabled(x1); }
    Q_INVOKABLE void MsetExpanded(QTreeWidgetItem* o, bool x1) { o->setExpanded(x1); }
    Q_INVOKABLE void MsetFirstColumnSpanned(QTreeWidgetItem* o, bool x1) { o->setFirstColumnSpanned(x1); }
    Q_INVOKABLE void MsetFlags(QTreeWidgetItem* o, Qt::ItemFlags x1) { o->setFlags(x1); }
    Q_INVOKABLE void MsetFont(QTreeWidgetItem* o, int x1, const QFont& x2) { o->setFont(x1, x2); }
    Q_INVOKABLE void MsetForeground(QTreeWidgetItem* o, int x1, const QBrush& x2) { o->setForeground(x1, x2); }
    Q_INVOKABLE void MsetHidden(QTreeWidgetItem* o, bool x1) { o->setHidden(x1); }
    Q_INVOKABLE void MsetIcon(QTreeWidgetItem* o, int x1, const QIcon& x2) { o->setIcon(x1, x2); }
    Q_INVOKABLE void MsetSelected(QTreeWidgetItem* o, bool x1) { o->setSelected(x1); }
    Q_INVOKABLE void MsetSizeHint(QTreeWidgetItem* o, int x1, const QSize& x2) { o->setSizeHint(x1, x2); }
    Q_INVOKABLE void MsetStatusTip(QTreeWidgetItem* o, int x1, const QString& x2) { o->setStatusTip(x1, x2); }
    Q_INVOKABLE void MsetText(QTreeWidgetItem* o, int x1, const QString& x2) { o->setText(x1, x2); }
    Q_INVOKABLE void MsetTextAlignment(QTreeWidgetItem* o, int x1, int x2) { o->setTextAlignment(x1, x2); }
    Q_INVOKABLE void MsetToolTip(QTreeWidgetItem* o, int x1, const QString& x2) { o->setToolTip(x1, x2); }
    Q_INVOKABLE void MsetWhatsThis(QTreeWidgetItem* o, int x1, const QString& x2) { o->setWhatsThis(x1, x2); }
    Q_INVOKABLE QSize MsizeHint(QTreeWidgetItem* o, int x1) const { return o->sizeHint(x1); }
    Q_INVOKABLE void MsortChildren(QTreeWidgetItem* o, int x1, Qt::SortOrder x2) { o->sortChildren(x1, x2); }
    Q_INVOKABLE QString MstatusTip(QTreeWidgetItem* o, int x1) const { return o->statusTip(x1); }
    Q_INVOKABLE QTreeWidgetItem* MtakeChild(QTreeWidgetItem* o, int x1) { return o->takeChild(x1); }
    Q_INVOKABLE QList<QTreeWidgetItem*> MtakeChildren(QTreeWidgetItem* o) { return o->takeChildren(); }
    Q_INVOKABLE QString Mtext(QTreeWidgetItem* o, int x1) const { return o->text(x1); }
    Q_INVOKABLE int MtextAlignment(QTreeWidgetItem* o, int x1) const { return o->textAlignment(x1); }
    Q_INVOKABLE QString MtoolTip(QTreeWidgetItem* o, int x1) const { return o->toolTip(x1); }
    Q_INVOKABLE QTreeWidget* MtreeWidget(QTreeWidgetItem* o) const { return o->treeWidget(); }
    Q_INVOKABLE int Mtype(QTreeWidgetItem* o) const { return o->type(); }
    Q_INVOKABLE QString MwhatsThis(QTreeWidgetItem* o, int x1) const { return o->whatsThis(x1); }
};

class N104 : public QObject { // QUndoCommand
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QUndoCommand* x1 = 0) { return new LUndoCommand(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QUndoCommand* x2 = 0) { return new LUndoCommand(u, x1, x2); }
    Q_INVOKABLE const QUndoCommand* Mchild(QUndoCommand* o, int x1) const { return o->child(x1); }
    Q_INVOKABLE int MchildCount(QUndoCommand* o) const { return o->childCount(); }
    Q_INVOKABLE int Mid(QUndoCommand* o) const { return o->id(); }
    Q_INVOKABLE bool MmergeWith(QUndoCommand* o, const QUndoCommand* x1) { return o->mergeWith(x1); }
    Q_INVOKABLE void Mredo(QUndoCommand* o) { o->redo(); }
    Q_INVOKABLE void MsetText(QUndoCommand* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE QString Mtext(QUndoCommand* o) const { return o->text(); }
    Q_INVOKABLE void Mundo(QUndoCommand* o) { o->undo(); }
};

class N105 : public QObject { // QUrl
    Q_OBJECT
public:
    Q_INVOKABLE void MaddEncodedQueryItem(QUrl* o, const QByteArray& x1, const QByteArray& x2) { o->addEncodedQueryItem(x1, x2); }
    Q_INVOKABLE void MaddQueryItem(QUrl* o, const QString& x1, const QString& x2) { o->addQueryItem(x1, x2); }
    Q_INVOKABLE QList<QByteArray> MallEncodedQueryItemValues(QUrl* o, const QByteArray& x1) const { return o->allEncodedQueryItemValues(x1); }
    Q_INVOKABLE QStringList MallQueryItemValues(QUrl* o, const QString& x1) const { return o->allQueryItemValues(x1); }
    Q_INVOKABLE QString Mauthority(QUrl* o) const { return o->authority(); }
    Q_INVOKABLE void Mclear(QUrl* o) { o->clear(); }
    Q_INVOKABLE QByteArray MencodedFragment(QUrl* o) const { return o->encodedFragment(); }
    Q_INVOKABLE QByteArray MencodedHost(QUrl* o) const { return o->encodedHost(); }
    Q_INVOKABLE QByteArray MencodedPassword(QUrl* o) const { return o->encodedPassword(); }
    Q_INVOKABLE QByteArray MencodedPath(QUrl* o) const { return o->encodedPath(); }
    Q_INVOKABLE QByteArray MencodedQuery(QUrl* o) const { return o->encodedQuery(); }
    Q_INVOKABLE QByteArray MencodedQueryItemValue(QUrl* o, const QByteArray& x1) const { return o->encodedQueryItemValue(x1); }
    Q_INVOKABLE QByteArray MencodedUserName(QUrl* o) const { return o->encodedUserName(); }
    Q_INVOKABLE QString MerrorString(QUrl* o) const { return o->errorString(); }
    Q_INVOKABLE QString Mfragment(QUrl* o) const { return o->fragment(); }
    Q_INVOKABLE bool MhasEncodedQueryItem(QUrl* o, const QByteArray& x1) const { return o->hasEncodedQueryItem(x1); }
    Q_INVOKABLE bool MhasFragment(QUrl* o) const { return o->hasFragment(); }
    Q_INVOKABLE bool MhasQuery(QUrl* o) const { return o->hasQuery(); }
    Q_INVOKABLE bool MhasQueryItem(QUrl* o, const QString& x1) const { return o->hasQueryItem(x1); }
    Q_INVOKABLE QString Mhost(QUrl* o) const { return o->host(); }
    Q_INVOKABLE bool MisEmpty(QUrl* o) const { return o->isEmpty(); }
    Q_INVOKABLE bool MisParentOf(QUrl* o, const QUrl& x1) const { return o->isParentOf(x1); }
    Q_INVOKABLE bool MisRelative(QUrl* o) const { return o->isRelative(); }
    Q_INVOKABLE bool MisValid(QUrl* o) const { return o->isValid(); }
    Q_INVOKABLE QString Mpassword(QUrl* o) const { return o->password(); }
    Q_INVOKABLE QString Mpath(QUrl* o) const { return o->path(); }
    Q_INVOKABLE int Mport(QUrl* o) const { return o->port(); }
    Q_INVOKABLE int Mport(QUrl* o, int x1) const { return o->port(x1); }
    Q_INVOKABLE QString MqueryItemValue(QUrl* o, const QString& x1) const { return o->queryItemValue(x1); }
    Q_INVOKABLE char MqueryPairDelimiter(QUrl* o) const { return o->queryPairDelimiter(); }
    Q_INVOKABLE char MqueryValueDelimiter(QUrl* o) const { return o->queryValueDelimiter(); }
    Q_INVOKABLE void MremoveAllEncodedQueryItems(QUrl* o, const QByteArray& x1) { o->removeAllEncodedQueryItems(x1); }
    Q_INVOKABLE void MremoveAllQueryItems(QUrl* o, const QString& x1) { o->removeAllQueryItems(x1); }
    Q_INVOKABLE void MremoveEncodedQueryItem(QUrl* o, const QByteArray& x1) { o->removeEncodedQueryItem(x1); }
    Q_INVOKABLE void MremoveQueryItem(QUrl* o, const QString& x1) { o->removeQueryItem(x1); }
    Q_INVOKABLE QUrl Mresolved(QUrl* o, const QUrl& x1) const { return o->resolved(x1); }
    Q_INVOKABLE QString Mscheme(QUrl* o) const { return o->scheme(); }
    Q_INVOKABLE void MsetAuthority(QUrl* o, const QString& x1) { o->setAuthority(x1); }
    Q_INVOKABLE void MsetEncodedFragment(QUrl* o, const QByteArray& x1) { o->setEncodedFragment(x1); }
    Q_INVOKABLE void MsetEncodedHost(QUrl* o, const QByteArray& x1) { o->setEncodedHost(x1); }
    Q_INVOKABLE void MsetEncodedPassword(QUrl* o, const QByteArray& x1) { o->setEncodedPassword(x1); }
    Q_INVOKABLE void MsetEncodedPath(QUrl* o, const QByteArray& x1) { o->setEncodedPath(x1); }
    Q_INVOKABLE void MsetEncodedQuery(QUrl* o, const QByteArray& x1) { o->setEncodedQuery(x1); }
    Q_INVOKABLE void MsetEncodedUrl(QUrl* o, const QByteArray& x1) { o->setEncodedUrl(x1); }
    Q_INVOKABLE void MsetEncodedUrl(QUrl* o, const QByteArray& x1, QUrl::ParsingMode x2) { o->setEncodedUrl(x1, x2); }
    Q_INVOKABLE void MsetEncodedUserName(QUrl* o, const QByteArray& x1) { o->setEncodedUserName(x1); }
    Q_INVOKABLE void MsetFragment(QUrl* o, const QString& x1) { o->setFragment(x1); }
    Q_INVOKABLE void MsetHost(QUrl* o, const QString& x1) { o->setHost(x1); }
    Q_INVOKABLE void MsetPassword(QUrl* o, const QString& x1) { o->setPassword(x1); }
    Q_INVOKABLE void MsetPath(QUrl* o, const QString& x1) { o->setPath(x1); }
    Q_INVOKABLE void MsetPort(QUrl* o, int x1) { o->setPort(x1); }
    Q_INVOKABLE void MsetQueryDelimiters(QUrl* o, char x1, char x2) { o->setQueryDelimiters(x1, x2); }
    Q_INVOKABLE void MsetScheme(QUrl* o, const QString& x1) { o->setScheme(x1); }
    Q_INVOKABLE void MsetUrl(QUrl* o, const QString& x1) { o->setUrl(x1); }
    Q_INVOKABLE void MsetUrl(QUrl* o, const QString& x1, QUrl::ParsingMode x2) { o->setUrl(x1, x2); }
    Q_INVOKABLE void MsetUserInfo(QUrl* o, const QString& x1) { o->setUserInfo(x1); }
    Q_INVOKABLE void MsetUserName(QUrl* o, const QString& x1) { o->setUserName(x1); }
    Q_INVOKABLE QByteArray MtoEncoded(QUrl* o, QUrl::FormattingOptions x1 = QUrl::None) const { return o->toEncoded(x1); }
    Q_INVOKABLE QString MtoLocalFile(QUrl* o) const { return o->toLocalFile(); }
    Q_INVOKABLE QString MtoString(QUrl* o, QUrl::FormattingOptions x1 = QUrl::None) const { return o->toString(x1); }
    Q_INVOKABLE QString MuserInfo(QUrl* o) const { return o->userInfo(); }
    Q_INVOKABLE QString MuserName(QUrl* o) const { return o->userName(); }
    Q_INVOKABLE QString SfromAce(const QByteArray& x1) { return QUrl::fromAce(x1); }
    Q_INVOKABLE QUrl SfromEncoded(const QByteArray& x1) { return QUrl::fromEncoded(x1); }
    Q_INVOKABLE QUrl SfromEncoded(const QByteArray& x1, QUrl::ParsingMode x2) { return QUrl::fromEncoded(x1, x2); }
    Q_INVOKABLE QUrl SfromLocalFile(const QString& x1) { return QUrl::fromLocalFile(x1); }
    Q_INVOKABLE QString SfromPercentEncoding(const QByteArray& x1) { return QUrl::fromPercentEncoding(x1); }
    Q_INVOKABLE QUrl SfromUserInput(const QString& x1) { return QUrl::fromUserInput(x1); }
    Q_INVOKABLE QStringList SidnWhitelist() { return QUrl::idnWhitelist(); }
    Q_INVOKABLE void SsetIdnWhitelist(const QStringList& x1) { QUrl::setIdnWhitelist(x1); }
    Q_INVOKABLE QByteArray StoAce(const QString& x1) { return QUrl::toAce(x1); }
    Q_INVOKABLE QByteArray StoPercentEncoding(const QString& x1, const QByteArray& x2 = QByteArray(), const QByteArray& x3 = QByteArray()) { return QUrl::toPercentEncoding(x1, x2, x3); }
};

class N106 : public QObject { // QVariant
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LVariant(u); }
    Q_INVOKABLE void* C(uint u, const QLocale& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRegExp& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, Qt::GlobalColor x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, QVariant::Type x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVariant& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, int x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, uint x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, qlonglong x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, qulonglong x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, bool x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, double x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, float x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const char* x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QByteArray& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QBitArray& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QStringList& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QChar& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QDate& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QTime& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QDateTime& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QSize& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QSizeF& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPoint& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QLine& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QLineF& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRect& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRectF& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE void* C(uint u, const QUrl& x1) { return new LVariant(u, x1); }
    Q_INVOKABLE bool McanConvert(QVariant* o, QVariant::Type x1) const { return o->canConvert(x1); }
    Q_INVOKABLE void Mclear(QVariant* o) { o->clear(); }
    Q_INVOKABLE bool Mconvert(QVariant* o, QVariant::Type x1) { return o->convert(x1); }
    Q_INVOKABLE bool MisNull(QVariant* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisValid(QVariant* o) const { return o->isValid(); }
    Q_INVOKABLE QBitArray MtoBitArray(QVariant* o) const { return o->toBitArray(); }
    Q_INVOKABLE bool MtoBool(QVariant* o) const { return o->toBool(); }
    Q_INVOKABLE QByteArray MtoByteArray(QVariant* o) const { return o->toByteArray(); }
    Q_INVOKABLE QChar MtoChar(QVariant* o) const { return o->toChar(); }
    Q_INVOKABLE QDate MtoDate(QVariant* o) const { return o->toDate(); }
    Q_INVOKABLE QDateTime MtoDateTime(QVariant* o) const { return o->toDateTime(); }
    Q_INVOKABLE double MtoDouble(QVariant* o, bool* x1 = 0) const { return o->toDouble(x1); }
    Q_INVOKABLE float MtoFloat(QVariant* o, bool* x1 = 0) const { return o->toFloat(x1); }
    Q_INVOKABLE int MtoInt(QVariant* o, bool* x1 = 0) const { return o->toInt(x1); }
    Q_INVOKABLE QLine MtoLine(QVariant* o) const { return o->toLine(); }
    Q_INVOKABLE QLineF MtoLineF(QVariant* o) const { return o->toLineF(); }
    Q_INVOKABLE QLocale MtoLocale(QVariant* o) const { return o->toLocale(); }
    Q_INVOKABLE qlonglong MtoLongLong(QVariant* o, bool* x1 = 0) const { return o->toLongLong(x1); }
    Q_INVOKABLE QPoint MtoPoint(QVariant* o) const { return o->toPoint(); }
    Q_INVOKABLE QPointF MtoPointF(QVariant* o) const { return o->toPointF(); }
    Q_INVOKABLE qreal MtoReal(QVariant* o, bool* x1 = 0) const { return o->toReal(x1); }
    Q_INVOKABLE QRect MtoRect(QVariant* o) const { return o->toRect(); }
    Q_INVOKABLE QRectF MtoRectF(QVariant* o) const { return o->toRectF(); }
    Q_INVOKABLE QRegExp MtoRegExp(QVariant* o) const { return o->toRegExp(); }
    Q_INVOKABLE QSize MtoSize(QVariant* o) const { return o->toSize(); }
    Q_INVOKABLE QSizeF MtoSizeF(QVariant* o) const { return o->toSizeF(); }
    Q_INVOKABLE QString MtoString(QVariant* o) const { return o->toString(); }
    Q_INVOKABLE QStringList MtoStringList(QVariant* o) const { return o->toStringList(); }
    Q_INVOKABLE QTime MtoTime(QVariant* o) const { return o->toTime(); }
    Q_INVOKABLE uint MtoUInt(QVariant* o, bool* x1 = 0) const { return o->toUInt(x1); }
    Q_INVOKABLE qulonglong MtoULongLong(QVariant* o, bool* x1 = 0) const { return o->toULongLong(x1); }
    Q_INVOKABLE QUrl MtoUrl(QVariant* o) const { return o->toUrl(); }
    Q_INVOKABLE QVariant::Type Mtype(QVariant* o) const { return o->type(); }
    Q_INVOKABLE const char* MtypeName(QVariant* o) const { return o->typeName(); }
    Q_INVOKABLE int MuserType(QVariant* o) const { return o->userType(); }
    Q_INVOKABLE QVariant::Type SnameToType(const char* x1) { return QVariant::nameToType(x1); }
    Q_INVOKABLE const char* StypeToName(QVariant::Type x1) { return QVariant::typeToName(x1); }
};

class N107 : public QObject { // QVector2D
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LVector2D(u); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2) { return new LVector2D(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QPoint& x1) { return new LVector2D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1) { return new LVector2D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector3D& x1) { return new LVector2D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector4D& x1) { return new LVector2D(u, x1); }
    Q_INVOKABLE bool MisNull(QVector2D* o) const { return o->isNull(); }
    Q_INVOKABLE qreal Mlength(QVector2D* o) const { return o->length(); }
    Q_INVOKABLE qreal MlengthSquared(QVector2D* o) const { return o->lengthSquared(); }
    Q_INVOKABLE void Mnormalize(QVector2D* o) { o->normalize(); }
    Q_INVOKABLE QVector2D Mnormalized(QVector2D* o) const { return o->normalized(); }
    Q_INVOKABLE void MsetX(QVector2D* o, qreal x1) { o->setX(x1); }
    Q_INVOKABLE void MsetY(QVector2D* o, qreal x1) { o->setY(x1); }
    Q_INVOKABLE QPoint MtoPoint(QVector2D* o) const { return o->toPoint(); }
    Q_INVOKABLE QPointF MtoPointF(QVector2D* o) const { return o->toPointF(); }
    Q_INVOKABLE QVector3D MtoVector3D(QVector2D* o) const { return o->toVector3D(); }
    Q_INVOKABLE QVector4D MtoVector4D(QVector2D* o) const { return o->toVector4D(); }
    Q_INVOKABLE qreal Mx(QVector2D* o) const { return o->x(); }
    Q_INVOKABLE qreal My(QVector2D* o) const { return o->y(); }
    Q_INVOKABLE qreal SdotProduct(const QVector2D& x1, const QVector2D& x2) { return QVector2D::dotProduct(x1, x2); }
};

class N108 : public QObject { // QVector3D
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LVector3D(u); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3) { return new LVector3D(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QPoint& x1) { return new LVector3D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1) { return new LVector3D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector2D& x1) { return new LVector3D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector2D& x1, qreal x2) { return new LVector3D(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QVector4D& x1) { return new LVector3D(u, x1); }
    Q_INVOKABLE qreal MdistanceToLine(QVector3D* o, const QVector3D& x1, const QVector3D& x2) const { return o->distanceToLine(x1, x2); }
    Q_INVOKABLE qreal MdistanceToPlane(QVector3D* o, const QVector3D& x1, const QVector3D& x2) const { return o->distanceToPlane(x1, x2); }
    Q_INVOKABLE qreal MdistanceToPlane(QVector3D* o, const QVector3D& x1, const QVector3D& x2, const QVector3D& x3) const { return o->distanceToPlane(x1, x2, x3); }
    Q_INVOKABLE bool MisNull(QVector3D* o) const { return o->isNull(); }
    Q_INVOKABLE qreal Mlength(QVector3D* o) const { return o->length(); }
    Q_INVOKABLE qreal MlengthSquared(QVector3D* o) const { return o->lengthSquared(); }
    Q_INVOKABLE void Mnormalize(QVector3D* o) { o->normalize(); }
    Q_INVOKABLE QVector3D Mnormalized(QVector3D* o) const { return o->normalized(); }
    Q_INVOKABLE void MsetX(QVector3D* o, qreal x1) { o->setX(x1); }
    Q_INVOKABLE void MsetY(QVector3D* o, qreal x1) { o->setY(x1); }
    Q_INVOKABLE void MsetZ(QVector3D* o, qreal x1) { o->setZ(x1); }
    Q_INVOKABLE QPoint MtoPoint(QVector3D* o) const { return o->toPoint(); }
    Q_INVOKABLE QPointF MtoPointF(QVector3D* o) const { return o->toPointF(); }
    Q_INVOKABLE QVector2D MtoVector2D(QVector3D* o) const { return o->toVector2D(); }
    Q_INVOKABLE QVector4D MtoVector4D(QVector3D* o) const { return o->toVector4D(); }
    Q_INVOKABLE qreal Mx(QVector3D* o) const { return o->x(); }
    Q_INVOKABLE qreal My(QVector3D* o) const { return o->y(); }
    Q_INVOKABLE qreal Mz(QVector3D* o) const { return o->z(); }
    Q_INVOKABLE QVector3D ScrossProduct(const QVector3D& x1, const QVector3D& x2) { return QVector3D::crossProduct(x1, x2); }
    Q_INVOKABLE qreal SdotProduct(const QVector3D& x1, const QVector3D& x2) { return QVector3D::dotProduct(x1, x2); }
    Q_INVOKABLE QVector3D Snormal(const QVector3D& x1, const QVector3D& x2) { return QVector3D::normal(x1, x2); }
    Q_INVOKABLE QVector3D Snormal(const QVector3D& x1, const QVector3D& x2, const QVector3D& x3) { return QVector3D::normal(x1, x2, x3); }
};

class N109 : public QObject { // QVector4D
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LVector4D(u); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4) { return new LVector4D(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const QPoint& x1) { return new LVector4D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1) { return new LVector4D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector2D& x1) { return new LVector4D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector2D& x1, qreal x2, qreal x3) { return new LVector4D(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QVector3D& x1) { return new LVector4D(u, x1); }
    Q_INVOKABLE void* C(uint u, const QVector3D& x1, qreal x2) { return new LVector4D(u, x1, x2); }
    Q_INVOKABLE bool MisNull(QVector4D* o) const { return o->isNull(); }
    Q_INVOKABLE qreal Mlength(QVector4D* o) const { return o->length(); }
    Q_INVOKABLE qreal MlengthSquared(QVector4D* o) const { return o->lengthSquared(); }
    Q_INVOKABLE void Mnormalize(QVector4D* o) { o->normalize(); }
    Q_INVOKABLE QVector4D Mnormalized(QVector4D* o) const { return o->normalized(); }
    Q_INVOKABLE void MsetW(QVector4D* o, qreal x1) { o->setW(x1); }
    Q_INVOKABLE void MsetX(QVector4D* o, qreal x1) { o->setX(x1); }
    Q_INVOKABLE void MsetY(QVector4D* o, qreal x1) { o->setY(x1); }
    Q_INVOKABLE void MsetZ(QVector4D* o, qreal x1) { o->setZ(x1); }
    Q_INVOKABLE QPoint MtoPoint(QVector4D* o) const { return o->toPoint(); }
    Q_INVOKABLE QPointF MtoPointF(QVector4D* o) const { return o->toPointF(); }
    Q_INVOKABLE QVector2D MtoVector2D(QVector4D* o) const { return o->toVector2D(); }
    Q_INVOKABLE QVector2D MtoVector2DAffine(QVector4D* o) const { return o->toVector2DAffine(); }
    Q_INVOKABLE QVector3D MtoVector3D(QVector4D* o) const { return o->toVector3D(); }
    Q_INVOKABLE QVector3D MtoVector3DAffine(QVector4D* o) const { return o->toVector3DAffine(); }
    Q_INVOKABLE qreal Mw(QVector4D* o) const { return o->w(); }
    Q_INVOKABLE qreal Mx(QVector4D* o) const { return o->x(); }
    Q_INVOKABLE qreal My(QVector4D* o) const { return o->y(); }
    Q_INVOKABLE qreal Mz(QVector4D* o) const { return o->z(); }
    Q_INVOKABLE qreal SdotProduct(const QVector4D& x1, const QVector4D& x2) { return QVector4D::dotProduct(x1, x2); }
};

class N1 : public N27 { // QAbstractGraphicsShapeItem
    Q_OBJECT
public:
    Q_INVOKABLE QBrush Mbrush(QAbstractGraphicsShapeItem* o) const { return o->brush(); }
    Q_INVOKABLE QPen Mpen(QAbstractGraphicsShapeItem* o) const { return o->pen(); }
    Q_INVOKABLE void MsetBrush(QAbstractGraphicsShapeItem* o, const QBrush& x1) { o->setBrush(x1); }
    Q_INVOKABLE void MsetPen(QAbstractGraphicsShapeItem* o, const QPen& x1) { o->setPen(x1); }
    Q_INVOKABLE bool MisObscuredBy(QAbstractGraphicsShapeItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QAbstractGraphicsShapeItem* o) const { return o->opaqueArea(); }
};

class N2 : public N20 { // QActionEvent
    Q_OBJECT
public:
    Q_INVOKABLE QAction* Maction(QActionEvent* o) const { return o->action(); }
    Q_INVOKABLE QAction* Mbefore(QActionEvent* o) const { return o->before(); }
};

class N7 : public N20 { // QChildEvent
    Q_OBJECT
public:
    Q_INVOKABLE bool Madded(QChildEvent* o) const { return o->added(); }
    Q_INVOKABLE QObject* Mchild(QChildEvent* o) const { return o->child(); }
    Q_INVOKABLE bool Mpolished(QChildEvent* o) const { return o->polished(); }
    Q_INVOKABLE bool Mremoved(QChildEvent* o) const { return o->removed(); }
};

class N8 : public N20 { // QCloseEvent
    Q_OBJECT
public:
};

class N10 : public N25 { // QConicalGradient
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LConicalGradient(u); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1, qreal x2) { return new LConicalGradient(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3) { return new LConicalGradient(u, x1, x2, x3); }
    Q_INVOKABLE qreal Mangle(QConicalGradient* o) const { return o->angle(); }
    Q_INVOKABLE QPointF Mcenter(QConicalGradient* o) const { return o->center(); }
    Q_INVOKABLE void MsetAngle(QConicalGradient* o, qreal x1) { o->setAngle(x1); }
    Q_INVOKABLE void MsetCenter(QConicalGradient* o, const QPointF& x1) { o->setCenter(x1); }
    Q_INVOKABLE void MsetCenter(QConicalGradient* o, qreal x1, qreal x2) { o->setCenter(x1, x2); }
};

class N17 : public N20 { // QDragLeaveEvent
    Q_OBJECT
public:
};

class N19 : public N20 { // QDropEvent
    Q_OBJECT
public:
    Q_INVOKABLE void MacceptProposedAction(QDropEvent* o) { o->acceptProposedAction(); }
    Q_INVOKABLE Qt::DropAction MdropAction(QDropEvent* o) const { return o->dropAction(); }
    Q_INVOKABLE Qt::KeyboardModifiers MkeyboardModifiers(QDropEvent* o) const { return o->keyboardModifiers(); }
    Q_INVOKABLE const QMimeData* MmimeData(QDropEvent* o) const { return o->mimeData(); }
    Q_INVOKABLE Qt::MouseButtons MmouseButtons(QDropEvent* o) const { return o->mouseButtons(); }
    Q_INVOKABLE QPoint Mpos(QDropEvent* o) const { return o->pos(); }
    Q_INVOKABLE Qt::DropActions MpossibleActions(QDropEvent* o) const { return o->possibleActions(); }
    Q_INVOKABLE Qt::DropAction MproposedAction(QDropEvent* o) const { return o->proposedAction(); }
    Q_INVOKABLE void MsetDropAction(QDropEvent* o, Qt::DropAction x1) { o->setDropAction(x1); }
    Q_INVOKABLE QWidget* Msource(QDropEvent* o) const { return o->source(); }
    Q_INVOKABLE QByteArray MencodedData(QDropEvent* o, const char* x1) const { return o->encodedData(x1); }
    Q_INVOKABLE const char* Mformat(QDropEvent* o, int x1 = 0) const { return o->format(x1); }
    Q_INVOKABLE bool Mprovides(QDropEvent* o, const char* x1) const { return o->provides(x1); }
};

class N23 : public N20 { // QFocusEvent
    Q_OBJECT
public:
    Q_INVOKABLE bool MgotFocus(QFocusEvent* o) const { return o->gotFocus(); }
    Q_INVOKABLE bool MlostFocus(QFocusEvent* o) const { return o->lostFocus(); }
    Q_INVOKABLE Qt::FocusReason Mreason(QFocusEvent* o) const { return o->reason(); }
};

class N26 : public N1 { // QGraphicsEllipseItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsEllipseItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) { return new LGraphicsEllipseItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) { return new LGraphicsEllipseItem(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE QRectF Mrect(QGraphicsEllipseItem* o) const { return o->rect(); }
    Q_INVOKABLE void MsetRect(QGraphicsEllipseItem* o, const QRectF& x1) { o->setRect(x1); }
    Q_INVOKABLE void MsetRect(QGraphicsEllipseItem* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setRect(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetSpanAngle(QGraphicsEllipseItem* o, int x1) { o->setSpanAngle(x1); }
    Q_INVOKABLE void MsetStartAngle(QGraphicsEllipseItem* o, int x1) { o->setStartAngle(x1); }
    Q_INVOKABLE int MspanAngle(QGraphicsEllipseItem* o) const { return o->spanAngle(); }
    Q_INVOKABLE int MstartAngle(QGraphicsEllipseItem* o) const { return o->startAngle(); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsEllipseItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsEllipseItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsEllipseItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsEllipseItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsEllipseItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsEllipseItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsEllipseItem* o) const { return o->type(); }
};

class N28 : public N27 { // QGraphicsItemGroup
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsItemGroup(u, x1); }
    Q_INVOKABLE void MaddToGroup(QGraphicsItemGroup* o, QGraphicsItem* x1) { o->addToGroup(x1); }
    Q_INVOKABLE void MremoveFromGroup(QGraphicsItemGroup* o, QGraphicsItem* x1) { o->removeFromGroup(x1); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsItemGroup* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsItemGroup* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsItemGroup* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsItemGroup* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE int Mtype(QGraphicsItemGroup* o) const { return o->type(); }
};

class N29 : public N30 { // QGraphicsLayout
    Q_OBJECT
public:
    Q_INVOKABLE void Mactivate(QGraphicsLayout* o) { o->activate(); }
    Q_INVOKABLE int Mcount(QGraphicsLayout* o) const { return o->count(); }
    Q_INVOKABLE void Minvalidate(QGraphicsLayout* o) { o->invalidate(); }
    Q_INVOKABLE bool MisActivated(QGraphicsLayout* o) const { return o->isActivated(); }
    Q_INVOKABLE QGraphicsLayoutItem* MitemAt(QGraphicsLayout* o, int x1) const { return o->itemAt(x1); }
    Q_INVOKABLE void MremoveAt(QGraphicsLayout* o, int x1) { o->removeAt(x1); }
    Q_INVOKABLE void MsetContentsMargins(QGraphicsLayout* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setContentsMargins(x1, x2, x3, x4); }
    Q_INVOKABLE void MwidgetEvent(QGraphicsLayout* o, QEvent* x1) { o->widgetEvent(x1); }
    Q_INVOKABLE void MupdateGeometry(QGraphicsLayout* o) { o->updateGeometry(); }
};

class N31 : public N27 { // QGraphicsLineItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsLineItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QLineF& x1, QGraphicsItem* x2 = 0) { return new LGraphicsLineItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) { return new LGraphicsLineItem(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE QLineF Mline(QGraphicsLineItem* o) const { return o->line(); }
    Q_INVOKABLE QPen Mpen(QGraphicsLineItem* o) const { return o->pen(); }
    Q_INVOKABLE void MsetLine(QGraphicsLineItem* o, const QLineF& x1) { o->setLine(x1); }
    Q_INVOKABLE void MsetLine(QGraphicsLineItem* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setLine(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetPen(QGraphicsLineItem* o, const QPen& x1) { o->setPen(x1); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsLineItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsLineItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsLineItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsLineItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsLineItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsLineItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsLineItem* o) const { return o->type(); }
};

class N32 : public N1 { // QGraphicsPathItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsPathItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPainterPath& x1, QGraphicsItem* x2 = 0) { return new LGraphicsPathItem(u, x1, x2); }
    Q_INVOKABLE QPainterPath Mpath(QGraphicsPathItem* o) const { return o->path(); }
    Q_INVOKABLE void MsetPath(QGraphicsPathItem* o, const QPainterPath& x1) { o->setPath(x1); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsPathItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsPathItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsPathItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsPathItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsPathItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsPathItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsPathItem* o) const { return o->type(); }
};

class N33 : public N27 { // QGraphicsPixmapItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsPixmapItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPixmap& x1, QGraphicsItem* x2 = 0) { return new LGraphicsPixmapItem(u, x1, x2); }
    Q_INVOKABLE QPointF Moffset(QGraphicsPixmapItem* o) const { return o->offset(); }
    Q_INVOKABLE QPixmap Mpixmap(QGraphicsPixmapItem* o) const { return o->pixmap(); }
    Q_INVOKABLE void MsetOffset(QGraphicsPixmapItem* o, const QPointF& x1) { o->setOffset(x1); }
    Q_INVOKABLE void MsetOffset(QGraphicsPixmapItem* o, qreal x1, qreal x2) { o->setOffset(x1, x2); }
    Q_INVOKABLE void MsetPixmap(QGraphicsPixmapItem* o, const QPixmap& x1) { o->setPixmap(x1); }
    Q_INVOKABLE void MsetShapeMode(QGraphicsPixmapItem* o, QGraphicsPixmapItem::ShapeMode x1) { o->setShapeMode(x1); }
    Q_INVOKABLE void MsetTransformationMode(QGraphicsPixmapItem* o, Qt::TransformationMode x1) { o->setTransformationMode(x1); }
    Q_INVOKABLE QGraphicsPixmapItem::ShapeMode MshapeMode(QGraphicsPixmapItem* o) const { return o->shapeMode(); }
    Q_INVOKABLE Qt::TransformationMode MtransformationMode(QGraphicsPixmapItem* o) const { return o->transformationMode(); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsPixmapItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsPixmapItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsPixmapItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsPixmapItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsPixmapItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsPixmapItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsPixmapItem* o) const { return o->type(); }
};

class N34 : public N1 { // QGraphicsPolygonItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsPolygonItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPolygonF& x1, QGraphicsItem* x2 = 0) { return new LGraphicsPolygonItem(u, x1, x2); }
    Q_INVOKABLE Qt::FillRule MfillRule(QGraphicsPolygonItem* o) const { return o->fillRule(); }
    Q_INVOKABLE QPolygonF Mpolygon(QGraphicsPolygonItem* o) const { return o->polygon(); }
    Q_INVOKABLE void MsetFillRule(QGraphicsPolygonItem* o, Qt::FillRule x1) { o->setFillRule(x1); }
    Q_INVOKABLE void MsetPolygon(QGraphicsPolygonItem* o, const QPolygonF& x1) { o->setPolygon(x1); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsPolygonItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsPolygonItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsPolygonItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsPolygonItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsPolygonItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsPolygonItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsPolygonItem* o) const { return o->type(); }
};

class N35 : public N1 { // QGraphicsRectItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsRectItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QRectF& x1, QGraphicsItem* x2 = 0) { return new LGraphicsRectItem(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, QGraphicsItem* x5 = 0) { return new LGraphicsRectItem(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE QRectF Mrect(QGraphicsRectItem* o) const { return o->rect(); }
    Q_INVOKABLE void MsetRect(QGraphicsRectItem* o, const QRectF& x1) { o->setRect(x1); }
    Q_INVOKABLE void MsetRect(QGraphicsRectItem* o, qreal x1, qreal x2, qreal x3, qreal x4) { o->setRect(x1, x2, x3, x4); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsRectItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsRectItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsRectItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsRectItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsRectItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3 = 0) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsRectItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsRectItem* o) const { return o->type(); }
};

class N38 : public N20 { // QGraphicsSceneEvent
    Q_OBJECT
public:
    Q_INVOKABLE QWidget* Mwidget(QGraphicsSceneEvent* o) const { return o->widget(); }
};

class N39 : public N38 { // QGraphicsSceneHelpEvent
    Q_OBJECT
public:
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneHelpEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneHelpEvent* o) const { return o->screenPos(); }
};

class N40 : public N38 { // QGraphicsSceneHoverEvent
    Q_OBJECT
public:
    Q_INVOKABLE QPointF MlastPos(QGraphicsSceneHoverEvent* o) const { return o->lastPos(); }
    Q_INVOKABLE QPointF MlastScenePos(QGraphicsSceneHoverEvent* o) const { return o->lastScenePos(); }
    Q_INVOKABLE QPoint MlastScreenPos(QGraphicsSceneHoverEvent* o) const { return o->lastScreenPos(); }
    Q_INVOKABLE Qt::KeyboardModifiers Mmodifiers(QGraphicsSceneHoverEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsSceneHoverEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneHoverEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneHoverEvent* o) const { return o->screenPos(); }
};

class N41 : public N38 { // QGraphicsSceneMouseEvent
    Q_OBJECT
public:
    Q_INVOKABLE Qt::MouseButton Mbutton(QGraphicsSceneMouseEvent* o) const { return o->button(); }
    Q_INVOKABLE QPointF MbuttonDownPos(QGraphicsSceneMouseEvent* o, Qt::MouseButton x1) const { return o->buttonDownPos(x1); }
    Q_INVOKABLE QPointF MbuttonDownScenePos(QGraphicsSceneMouseEvent* o, Qt::MouseButton x1) const { return o->buttonDownScenePos(x1); }
    Q_INVOKABLE QPoint MbuttonDownScreenPos(QGraphicsSceneMouseEvent* o, Qt::MouseButton x1) const { return o->buttonDownScreenPos(x1); }
    Q_INVOKABLE Qt::MouseButtons Mbuttons(QGraphicsSceneMouseEvent* o) const { return o->buttons(); }
    Q_INVOKABLE QPointF MlastPos(QGraphicsSceneMouseEvent* o) const { return o->lastPos(); }
    Q_INVOKABLE QPointF MlastScenePos(QGraphicsSceneMouseEvent* o) const { return o->lastScenePos(); }
    Q_INVOKABLE QPoint MlastScreenPos(QGraphicsSceneMouseEvent* o) const { return o->lastScreenPos(); }
    Q_INVOKABLE Qt::KeyboardModifiers Mmodifiers(QGraphicsSceneMouseEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsSceneMouseEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneMouseEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneMouseEvent* o) const { return o->screenPos(); }
};

class N42 : public N38 { // QGraphicsSceneMoveEvent
    Q_OBJECT
public:
    Q_INVOKABLE QPointF MnewPos(QGraphicsSceneMoveEvent* o) const { return o->newPos(); }
    Q_INVOKABLE QPointF MoldPos(QGraphicsSceneMoveEvent* o) const { return o->oldPos(); }
};

class N43 : public N38 { // QGraphicsSceneResizeEvent
    Q_OBJECT
public:
    Q_INVOKABLE QSizeF MnewSize(QGraphicsSceneResizeEvent* o) const { return o->newSize(); }
    Q_INVOKABLE QSizeF MoldSize(QGraphicsSceneResizeEvent* o) const { return o->oldSize(); }
};

class N44 : public N38 { // QGraphicsSceneWheelEvent
    Q_OBJECT
public:
    Q_INVOKABLE Qt::MouseButtons Mbuttons(QGraphicsSceneWheelEvent* o) const { return o->buttons(); }
    Q_INVOKABLE int Mdelta(QGraphicsSceneWheelEvent* o) const { return o->delta(); }
    Q_INVOKABLE Qt::KeyboardModifiers Mmodifiers(QGraphicsSceneWheelEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE Qt::Orientation Morientation(QGraphicsSceneWheelEvent* o) const { return o->orientation(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsSceneWheelEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneWheelEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneWheelEvent* o) const { return o->screenPos(); }
};

class N45 : public N1 { // QGraphicsSimpleTextItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QGraphicsItem* x1 = 0) { return new LGraphicsSimpleTextItem(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, QGraphicsItem* x2 = 0) { return new LGraphicsSimpleTextItem(u, x1, x2); }
    Q_INVOKABLE QFont Mfont(QGraphicsSimpleTextItem* o) const { return o->font(); }
    Q_INVOKABLE void MsetFont(QGraphicsSimpleTextItem* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetText(QGraphicsSimpleTextItem* o, const QString& x1) { o->setText(x1); }
    Q_INVOKABLE QString Mtext(QGraphicsSimpleTextItem* o) const { return o->text(); }
    Q_INVOKABLE QRectF MboundingRect(QGraphicsSimpleTextItem* o) const { return o->boundingRect(); }
    Q_INVOKABLE bool Mcontains(QGraphicsSimpleTextItem* o, const QPointF& x1) const { return o->contains(x1); }
    Q_INVOKABLE bool MisObscuredBy(QGraphicsSimpleTextItem* o, const QGraphicsItem* x1) const { return o->isObscuredBy(x1); }
    Q_INVOKABLE QPainterPath MopaqueArea(QGraphicsSimpleTextItem* o) const { return o->opaqueArea(); }
    Q_INVOKABLE void Mpaint(QGraphicsSimpleTextItem* o, QPainter* x1, const QStyleOptionGraphicsItem* x2, QWidget* x3) { o->paint(x1, x2, x3); }
    Q_INVOKABLE QPainterPath Mshape(QGraphicsSimpleTextItem* o) const { return o->shape(); }
    Q_INVOKABLE int Mtype(QGraphicsSimpleTextItem* o) const { return o->type(); }
};

class N46 : public N20 { // QHideEvent
    Q_OBJECT
public:
};

class N48 : public N65 { // QImage
    Q_OBJECT
public:
    Q_INVOKABLE void* CC(uint u, LImage* o) { LImage* copy = new LImage(u); *copy = *o; return copy; }
    Q_INVOKABLE void* C(uint u) { return new LImage(u); }
    Q_INVOKABLE void* C(uint u, const QSize& x1, QImage::Format x2) { return new LImage(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, int x1, int x2, QImage::Format x3) { return new LImage(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, uchar* x1, int x2, int x3, QImage::Format x4) { return new LImage(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, const uchar* x1, int x2, int x3, QImage::Format x4) { return new LImage(u, x1, x2, x3, x4); }
    Q_INVOKABLE void* C(uint u, uchar* x1, int x2, int x3, int x4, QImage::Format x5) { return new LImage(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const uchar* x1, int x2, int x3, int x4, QImage::Format x5) { return new LImage(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const char* x2 = 0) { return new LImage(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const char* x1, const char* x2 = 0) { return new LImage(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QImage& x1) { return new LImage(u, x1); }
    Q_INVOKABLE bool MallGray(QImage* o) const { return o->allGray(); }
    Q_INVOKABLE uchar* Mbits(QImage* o) { return o->bits(); }
    Q_INVOKABLE const uchar* Mbits(QImage* o) const { return o->bits(); }
    Q_INVOKABLE int MbyteCount(QImage* o) const { return o->byteCount(); }
    Q_INVOKABLE int MbytesPerLine(QImage* o) const { return o->bytesPerLine(); }
    Q_INVOKABLE QRgb Mcolor(QImage* o, int x1) const { return o->color(x1); }
    Q_INVOKABLE int McolorCount(QImage* o) const { return o->colorCount(); }
    Q_INVOKABLE QVector<QRgb> McolorTable(QImage* o) const { return o->colorTable(); }
    Q_INVOKABLE QImage MconvertToFormat(QImage* o, QImage::Format x1, Qt::ImageConversionFlags x2 = Qt::AutoColor) const { return o->convertToFormat(x1, x2); }
    Q_INVOKABLE QImage MconvertToFormat(QImage* o, QImage::Format x1, const QVector<QRgb>& x2, Qt::ImageConversionFlags x3 = Qt::AutoColor) const { return o->convertToFormat(x1, x2, x3); }
    Q_INVOKABLE QImage Mcopy(QImage* o, const QRect& x1 = QRect()) const { return o->copy(x1); }
    Q_INVOKABLE QImage Mcopy(QImage* o, int x1, int x2, int x3, int x4) const { return o->copy(x1, x2, x3, x4); }
    Q_INVOKABLE QImage McreateAlphaMask(QImage* o, Qt::ImageConversionFlags x1 = Qt::AutoColor) const { return o->createAlphaMask(x1); }
    Q_INVOKABLE QImage McreateHeuristicMask(QImage* o, bool x1 = true) const { return o->createHeuristicMask(x1); }
    Q_INVOKABLE QImage McreateMaskFromColor(QImage* o, QRgb x1, Qt::MaskMode x2 = Qt::MaskInColor) const { return o->createMaskFromColor(x1, x2); }
    Q_INVOKABLE int Mdepth(QImage* o) const { return o->depth(); }
    Q_INVOKABLE int MdotsPerMeterX(QImage* o) const { return o->dotsPerMeterX(); }
    Q_INVOKABLE int MdotsPerMeterY(QImage* o) const { return o->dotsPerMeterY(); }
    Q_INVOKABLE void Mfill(QImage* o, uint x1) { o->fill(x1); }
    Q_INVOKABLE QImage::Format Mformat(QImage* o) const { return o->format(); }
    Q_INVOKABLE bool MhasAlphaChannel(QImage* o) const { return o->hasAlphaChannel(); }
    Q_INVOKABLE int Mheight(QImage* o) const { return o->height(); }
    Q_INVOKABLE void MinvertPixels(QImage* o, QImage::InvertMode x1 = QImage::InvertRgb) { o->invertPixels(x1); }
    Q_INVOKABLE bool MisGrayscale(QImage* o) const { return o->isGrayscale(); }
    Q_INVOKABLE bool MisNull(QImage* o) const { return o->isNull(); }
    Q_INVOKABLE bool Mload(QImage* o, const QString& x1, const char* x2 = 0) { return o->load(x1, x2); }
    Q_INVOKABLE bool MloadFromData(QImage* o, const uchar* x1, int x2, const char* x3 = 0) { return o->loadFromData(x1, x2, x3); }
    Q_INVOKABLE bool MloadFromData(QImage* o, const QByteArray& x1, const char* x2 = 0) { return o->loadFromData(x1, x2); }
    Q_INVOKABLE QImage Mmirrored(QImage* o, bool x1 = false, bool x2 = true) const { return o->mirrored(x1, x2); }
    Q_INVOKABLE QPoint Moffset(QImage* o) const { return o->offset(); }
    Q_INVOKABLE QRgb Mpixel(QImage* o, const QPoint& x1) const { return o->pixel(x1); }
    Q_INVOKABLE QRgb Mpixel(QImage* o, int x1, int x2) const { return o->pixel(x1, x2); }
    Q_INVOKABLE int MpixelIndex(QImage* o, const QPoint& x1) const { return o->pixelIndex(x1); }
    Q_INVOKABLE int MpixelIndex(QImage* o, int x1, int x2) const { return o->pixelIndex(x1, x2); }
    Q_INVOKABLE QRect Mrect(QImage* o) const { return o->rect(); }
    Q_INVOKABLE QImage MrgbSwapped(QImage* o) const { return o->rgbSwapped(); }
    Q_INVOKABLE bool Msave(QImage* o, const QString& x1, const char* x2 = 0, int x3 = -1) const { return o->save(x1, x2, x3); }
    Q_INVOKABLE QImage Mscaled(QImage* o, const QSize& x1, Qt::AspectRatioMode x2 = Qt::IgnoreAspectRatio, Qt::TransformationMode x3 = Qt::FastTransformation) const { return o->scaled(x1, x2, x3); }
    Q_INVOKABLE QImage Mscaled(QImage* o, int x1, int x2, Qt::AspectRatioMode x3 = Qt::IgnoreAspectRatio, Qt::TransformationMode x4 = Qt::FastTransformation) const { return o->scaled(x1, x2, x3, x4); }
    Q_INVOKABLE QImage MscaledToHeight(QImage* o, int x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->scaledToHeight(x1, x2); }
    Q_INVOKABLE QImage MscaledToWidth(QImage* o, int x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->scaledToWidth(x1, x2); }
    Q_INVOKABLE uchar* MscanLine(QImage* o, int x1) { return o->scanLine(x1); }
    Q_INVOKABLE const uchar* MscanLine(QImage* o, int x1) const { return o->scanLine(x1); }
    Q_INVOKABLE void MsetColor(QImage* o, int x1, QRgb x2) { o->setColor(x1, x2); }
    Q_INVOKABLE void MsetColorCount(QImage* o, int x1) { o->setColorCount(x1); }
    Q_INVOKABLE void MsetColorTable(QImage* o, const QVector<QRgb> x1) { o->setColorTable(x1); }
    Q_INVOKABLE void MsetDotsPerMeterX(QImage* o, int x1) { o->setDotsPerMeterX(x1); }
    Q_INVOKABLE void MsetDotsPerMeterY(QImage* o, int x1) { o->setDotsPerMeterY(x1); }
    Q_INVOKABLE void MsetOffset(QImage* o, const QPoint& x1) { o->setOffset(x1); }
    Q_INVOKABLE void MsetPixel(QImage* o, const QPoint& x1, uint x2) { o->setPixel(x1, x2); }
    Q_INVOKABLE void MsetPixel(QImage* o, int x1, int x2, uint x3) { o->setPixel(x1, x2, x3); }
    Q_INVOKABLE void MsetText(QImage* o, const QString& x1, const QString& x2) { o->setText(x1, x2); }
    Q_INVOKABLE QSize Msize(QImage* o) const { return o->size(); }
    Q_INVOKABLE QString Mtext(QImage* o, const QString& x1 = QString()) const { return o->text(x1); }
    Q_INVOKABLE QStringList MtextKeys(QImage* o) const { return o->textKeys(); }
    Q_INVOKABLE QImage Mtransformed(QImage* o, const QMatrix& x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->transformed(x1, x2); }
    Q_INVOKABLE QImage Mtransformed(QImage* o, const QTransform& x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->transformed(x1, x2); }
    Q_INVOKABLE bool Mvalid(QImage* o, const QPoint& x1) const { return o->valid(x1); }
    Q_INVOKABLE bool Mvalid(QImage* o, int x1, int x2) const { return o->valid(x1, x2); }
    Q_INVOKABLE int Mwidth(QImage* o) const { return o->width(); }
    Q_INVOKABLE QImage SfromData(const uchar* x1, int x2, const char* x3 = 0) { return QImage::fromData(x1, x2, x3); }
    Q_INVOKABLE QImage SfromData(const QByteArray& x1, const char* x2 = 0) { return QImage::fromData(x1, x2); }
    Q_INVOKABLE QMatrix StrueMatrix(const QMatrix& x1, int x2, int x3) { return QImage::trueMatrix(x1, x2, x3); }
    Q_INVOKABLE QTransform StrueMatrix(const QTransform& x1, int x2, int x3) { return QImage::trueMatrix(x1, x2, x3); }
};

class N49 : public N20 { // QInputEvent
    Q_OBJECT
public:
    Q_INVOKABLE Qt::KeyboardModifiers Mmodifiers(QInputEvent* o) const { return o->modifiers(); }
};

class N50 : public N20 { // QInputMethodEvent
    Q_OBJECT
public:
    Q_INVOKABLE QString McommitString(QInputMethodEvent* o) const { return o->commitString(); }
    Q_INVOKABLE QString MpreeditString(QInputMethodEvent* o) const { return o->preeditString(); }
    Q_INVOKABLE int MreplacementLength(QInputMethodEvent* o) const { return o->replacementLength(); }
    Q_INVOKABLE int MreplacementStart(QInputMethodEvent* o) const { return o->replacementStart(); }
    Q_INVOKABLE void MsetCommitString(QInputMethodEvent* o, const QString& x1, int x2 = 0, int x3 = 0) { o->setCommitString(x1, x2, x3); }
};

class N54 : public N49 { // QKeyEvent
    Q_OBJECT
public:
    Q_INVOKABLE int Mcount(QKeyEvent* o) const { return o->count(); }
    Q_INVOKABLE bool MisAutoRepeat(QKeyEvent* o) const { return o->isAutoRepeat(); }
    Q_INVOKABLE int Mkey(QKeyEvent* o) const { return o->key(); }
    Q_INVOKABLE bool Mmatches(QKeyEvent* o, QKeySequence::StandardKey x1) const { return o->matches(x1); }
    Q_INVOKABLE Qt::KeyboardModifiers Mmodifiers(QKeyEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE QString Mtext(QKeyEvent* o) const { return o->text(); }
};

class N56 : public N25 { // QLinearGradient
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LLinearGradient(u); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1, const QPointF& x2) { return new LLinearGradient(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4) { return new LLinearGradient(u, x1, x2, x3, x4); }
    Q_INVOKABLE QPointF MfinalStop(QLinearGradient* o) const { return o->finalStop(); }
    Q_INVOKABLE void MsetFinalStop(QLinearGradient* o, const QPointF& x1) { o->setFinalStop(x1); }
    Q_INVOKABLE void MsetFinalStop(QLinearGradient* o, qreal x1, qreal x2) { o->setFinalStop(x1, x2); }
    Q_INVOKABLE void MsetStart(QLinearGradient* o, const QPointF& x1) { o->setStart(x1); }
    Q_INVOKABLE void MsetStart(QLinearGradient* o, qreal x1, qreal x2) { o->setStart(x1, x2); }
    Q_INVOKABLE QPointF Mstart(QLinearGradient* o) const { return o->start(); }
};

class N63 : public N49 { // QMouseEvent
    Q_OBJECT
public:
    Q_INVOKABLE Qt::MouseButton Mbutton(QMouseEvent* o) const { return o->button(); }
    Q_INVOKABLE Qt::MouseButtons Mbuttons(QMouseEvent* o) const { return o->buttons(); }
    Q_INVOKABLE QPoint MglobalPos(QMouseEvent* o) const { return o->globalPos(); }
    Q_INVOKABLE int MglobalX(QMouseEvent* o) const { return o->globalX(); }
    Q_INVOKABLE int MglobalY(QMouseEvent* o) const { return o->globalY(); }
    Q_INVOKABLE QPoint Mpos(QMouseEvent* o) const { return o->pos(); }
    Q_INVOKABLE QPointF MposF(QMouseEvent* o) const { return o->posF(); }
    Q_INVOKABLE int Mx(QMouseEvent* o) const { return o->x(); }
    Q_INVOKABLE int My(QMouseEvent* o) const { return o->y(); }
};

class N64 : public N20 { // QMoveEvent
    Q_OBJECT
public:
    Q_INVOKABLE QPoint MoldPos(QMoveEvent* o) const { return o->oldPos(); }
    Q_INVOKABLE QPoint Mpos(QMoveEvent* o) const { return o->pos(); }
};

class N66 : public N20 { // QPaintEvent
    Q_OBJECT
public:
    Q_INVOKABLE QRect Mrect(QPaintEvent* o) const { return o->rect(); }
    Q_INVOKABLE QRegion Mregion(QPaintEvent* o) const { return o->region(); }
};

class N71 : public N65 { // QPicture
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1 = -1) { return new LPicture(u, x1); }
    Q_INVOKABLE void* C(uint u, const QPicture& x1) { return new LPicture(u, x1); }
    Q_INVOKABLE QRect MboundingRect(QPicture* o) const { return o->boundingRect(); }
    Q_INVOKABLE const char* Mdata(QPicture* o) const { return o->data(); }
    Q_INVOKABLE bool MisNull(QPicture* o) const { return o->isNull(); }
    Q_INVOKABLE bool Mload(QPicture* o, const QString& x1, const char* x2 = 0) { return o->load(x1, x2); }
    Q_INVOKABLE bool Mplay(QPicture* o, QPainter* x1) { return o->play(x1); }
    Q_INVOKABLE bool Msave(QPicture* o, const QString& x1, const char* x2 = 0) { return o->save(x1, x2); }
    Q_INVOKABLE void MsetBoundingRect(QPicture* o, const QRect& x1) { o->setBoundingRect(x1); }
    Q_INVOKABLE void MsetData(QPicture* o, const char* x1, uint x2) { o->setData(x1, x2); }
    Q_INVOKABLE uint Msize(QPicture* o) const { return o->size(); }
};

class N72 : public N65 { // QPixmap
    Q_OBJECT
public:
    Q_INVOKABLE void* CC(uint u, LPixmap* o) { LPixmap* copy = new LPixmap(u); *copy = *o; return copy; }
    Q_INVOKABLE void* C(uint u) { return new LPixmap(u); }
    Q_INVOKABLE void* C(uint u, int x1, int x2) { return new LPixmap(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const char* x2 = 0, Qt::ImageConversionFlags x3 = Qt::AutoColor) { return new LPixmap(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, const QPixmap& x1) { return new LPixmap(u, x1); }
    Q_INVOKABLE void* C(uint u, const QSize& x1) { return new LPixmap(u, x1); }
    Q_INVOKABLE QPixmap Mcopy(QPixmap* o, const QRect& x1 = QRect()) const { return o->copy(x1); }
    Q_INVOKABLE QPixmap Mcopy(QPixmap* o, int x1, int x2, int x3, int x4) const { return o->copy(x1, x2, x3, x4); }
    Q_INVOKABLE QBitmap McreateHeuristicMask(QPixmap* o, bool x1 = true) const { return o->createHeuristicMask(x1); }
    Q_INVOKABLE QBitmap McreateMaskFromColor(QPixmap* o, const QColor& x1, Qt::MaskMode x2) const { return o->createMaskFromColor(x1, x2); }
    Q_INVOKABLE QBitmap McreateMaskFromColor(QPixmap* o, const QColor& x1) const { return o->createMaskFromColor(x1); }
    Q_INVOKABLE int Mdepth(QPixmap* o) const { return o->depth(); }
    Q_INVOKABLE void Mdetach(QPixmap* o) { o->detach(); }
    Q_INVOKABLE void Mfill(QPixmap* o, const QColor& x1 = Qt::white) { o->fill(x1); }
    Q_INVOKABLE void Mfill(QPixmap* o, const QWidget* x1, const QPoint& x2) { o->fill(x1, x2); }
    Q_INVOKABLE void Mfill(QPixmap* o, const QWidget* x1, int x2, int x3) { o->fill(x1, x2, x3); }
    Q_INVOKABLE bool MhasAlpha(QPixmap* o) const { return o->hasAlpha(); }
    Q_INVOKABLE bool MhasAlphaChannel(QPixmap* o) const { return o->hasAlphaChannel(); }
    Q_INVOKABLE int Mheight(QPixmap* o) const { return o->height(); }
    Q_INVOKABLE bool MisNull(QPixmap* o) const { return o->isNull(); }
    Q_INVOKABLE bool MisQBitmap(QPixmap* o) const { return o->isQBitmap(); }
    Q_INVOKABLE bool Mload(QPixmap* o, const QString& x1, const char* x2 = 0, Qt::ImageConversionFlags x3 = Qt::AutoColor) { return o->load(x1, x2, x3); }
    Q_INVOKABLE bool MloadFromData(QPixmap* o, const uchar* x1, uint x2, const char* x3 = 0, Qt::ImageConversionFlags x4 = Qt::AutoColor) { return o->loadFromData(x1, x2, x3, x4); }
    Q_INVOKABLE bool MloadFromData(QPixmap* o, const QByteArray& x1, const char* x2 = 0, Qt::ImageConversionFlags x3 = Qt::AutoColor) { return o->loadFromData(x1, x2, x3); }
    Q_INVOKABLE QBitmap Mmask(QPixmap* o) const { return o->mask(); }
    Q_INVOKABLE QRect Mrect(QPixmap* o) const { return o->rect(); }
    Q_INVOKABLE bool Msave(QPixmap* o, const QString& x1, const char* x2 = 0, int x3 = -1) const { return o->save(x1, x2, x3); }
    Q_INVOKABLE QPixmap Mscaled(QPixmap* o, const QSize& x1, Qt::AspectRatioMode x2 = Qt::IgnoreAspectRatio, Qt::TransformationMode x3 = Qt::FastTransformation) const { return o->scaled(x1, x2, x3); }
    Q_INVOKABLE QPixmap Mscaled(QPixmap* o, int x1, int x2, Qt::AspectRatioMode x3 = Qt::IgnoreAspectRatio, Qt::TransformationMode x4 = Qt::FastTransformation) const { return o->scaled(x1, x2, x3, x4); }
    Q_INVOKABLE QPixmap MscaledToHeight(QPixmap* o, int x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->scaledToHeight(x1, x2); }
    Q_INVOKABLE QPixmap MscaledToWidth(QPixmap* o, int x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->scaledToWidth(x1, x2); }
    Q_INVOKABLE void Mscroll(QPixmap* o, int x1, int x2, int x3, int x4, int x5, int x6, QRegion* x7 = 0) { o->scroll(x1, x2, x3, x4, x5, x6, x7); }
    Q_INVOKABLE void Mscroll(QPixmap* o, int x1, int x2, const QRect& x3, QRegion* x4 = 0) { o->scroll(x1, x2, x3, x4); }
    Q_INVOKABLE void MsetMask(QPixmap* o, const QBitmap& x1) { o->setMask(x1); }
    Q_INVOKABLE QSize Msize(QPixmap* o) const { return o->size(); }
    Q_INVOKABLE QImage MtoImage(QPixmap* o) const { return o->toImage(); }
    Q_INVOKABLE QPixmap Mtransformed(QPixmap* o, const QTransform& x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->transformed(x1, x2); }
    Q_INVOKABLE QPixmap Mtransformed(QPixmap* o, const QMatrix& x1, Qt::TransformationMode x2 = Qt::FastTransformation) const { return o->transformed(x1, x2); }
    Q_INVOKABLE int Mwidth(QPixmap* o) const { return o->width(); }
    Q_INVOKABLE int SdefaultDepth() { return QPixmap::defaultDepth(); }
    Q_INVOKABLE QPixmap SfromImage(const QImage& x1, Qt::ImageConversionFlags x2 = Qt::AutoColor) { return QPixmap::fromImage(x1, x2); }
    Q_INVOKABLE QPixmap SgrabWidget(QWidget* x1, const QRect& x2) { return QPixmap::grabWidget(x1, x2); }
    Q_INVOKABLE QPixmap SgrabWidget(QWidget* x1, int x2 = 0, int x3 = 0, int x4 = -1, int x5 = -1) { return QPixmap::grabWidget(x1, x2, x3, x4, x5); }
    Q_INVOKABLE QTransform StrueMatrix(const QTransform& x1, int x2, int x3) { return QPixmap::trueMatrix(x1, x2, x3); }
    Q_INVOKABLE QMatrix StrueMatrix(const QMatrix& x1, int x2, int x3) { return QPixmap::trueMatrix(x1, x2, x3); }
};

class N73 : public N65 { // QPrinter
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, QPrinter::PrinterMode x1 = QPrinter::ScreenResolution) { return new LPrinter(u, x1); }
    Q_INVOKABLE bool Mabort(QPrinter* o) { return o->abort(); }
    Q_INVOKABLE int MactualNumCopies(QPrinter* o) const { return o->actualNumCopies(); }
    Q_INVOKABLE bool McollateCopies(QPrinter* o) const { return o->collateCopies(); }
    Q_INVOKABLE QPrinter::ColorMode McolorMode(QPrinter* o) const { return o->colorMode(); }
    Q_INVOKABLE QString Mcreator(QPrinter* o) const { return o->creator(); }
    Q_INVOKABLE QString MdocName(QPrinter* o) const { return o->docName(); }
    Q_INVOKABLE bool MdoubleSidedPrinting(QPrinter* o) const { return o->doubleSidedPrinting(); }
    Q_INVOKABLE QPrinter::DuplexMode Mduplex(QPrinter* o) const { return o->duplex(); }
    Q_INVOKABLE bool MfontEmbeddingEnabled(QPrinter* o) const { return o->fontEmbeddingEnabled(); }
    Q_INVOKABLE int MfromPage(QPrinter* o) const { return o->fromPage(); }
    Q_INVOKABLE bool MfullPage(QPrinter* o) const { return o->fullPage(); }
    Q_INVOKABLE bool MisValid(QPrinter* o) const { return o->isValid(); }
    Q_INVOKABLE bool MnewPage(QPrinter* o) { return o->newPage(); }
    Q_INVOKABLE int MnumCopies(QPrinter* o) const { return o->numCopies(); }
    Q_INVOKABLE QPrinter::Orientation Morientation(QPrinter* o) const { return o->orientation(); }
    Q_INVOKABLE QString MoutputFileName(QPrinter* o) const { return o->outputFileName(); }
    Q_INVOKABLE QPrinter::OutputFormat MoutputFormat(QPrinter* o) const { return o->outputFormat(); }
    Q_INVOKABLE QPrinter::PageOrder MpageOrder(QPrinter* o) const { return o->pageOrder(); }
    Q_INVOKABLE QRect MpageRect(QPrinter* o) const { return o->pageRect(); }
    Q_INVOKABLE QRectF MpageRect(QPrinter* o, QPrinter::Unit x1) const { return o->pageRect(x1); }
    Q_INVOKABLE QRect MpaperRect(QPrinter* o) const { return o->paperRect(); }
    Q_INVOKABLE QRectF MpaperRect(QPrinter* o, QPrinter::Unit x1) const { return o->paperRect(x1); }
    Q_INVOKABLE QPrinter::PaperSize MpaperSize(QPrinter* o) const { return o->paperSize(); }
    Q_INVOKABLE QSizeF MpaperSize(QPrinter* o, QPrinter::Unit x1) const { return o->paperSize(x1); }
    Q_INVOKABLE QPrinter::PaperSource MpaperSource(QPrinter* o) const { return o->paperSource(); }
    Q_INVOKABLE QString MprintProgram(QPrinter* o) const { return o->printProgram(); }
    Q_INVOKABLE QPrinter::PrintRange MprintRange(QPrinter* o) const { return o->printRange(); }
    Q_INVOKABLE QString MprinterName(QPrinter* o) const { return o->printerName(); }
    Q_INVOKABLE QPrinter::PrinterState MprinterState(QPrinter* o) const { return o->printerState(); }
    Q_INVOKABLE int Mresolution(QPrinter* o) const { return o->resolution(); }
    Q_INVOKABLE void MsetCollateCopies(QPrinter* o, bool x1) { o->setCollateCopies(x1); }
    Q_INVOKABLE void MsetColorMode(QPrinter* o, QPrinter::ColorMode x1) { o->setColorMode(x1); }
    Q_INVOKABLE void MsetCreator(QPrinter* o, const QString& x1) { o->setCreator(x1); }
    Q_INVOKABLE void MsetDocName(QPrinter* o, const QString& x1) { o->setDocName(x1); }
    Q_INVOKABLE void MsetDoubleSidedPrinting(QPrinter* o, bool x1) { o->setDoubleSidedPrinting(x1); }
    Q_INVOKABLE void MsetDuplex(QPrinter* o, QPrinter::DuplexMode x1) { o->setDuplex(x1); }
    Q_INVOKABLE void MsetFontEmbeddingEnabled(QPrinter* o, bool x1) { o->setFontEmbeddingEnabled(x1); }
    Q_INVOKABLE void MsetFromTo(QPrinter* o, int x1, int x2) { o->setFromTo(x1, x2); }
    Q_INVOKABLE void MsetFullPage(QPrinter* o, bool x1) { o->setFullPage(x1); }
    Q_INVOKABLE void MsetNumCopies(QPrinter* o, int x1) { o->setNumCopies(x1); }
    Q_INVOKABLE void MsetOrientation(QPrinter* o, QPrinter::Orientation x1) { o->setOrientation(x1); }
    Q_INVOKABLE void MsetOutputFileName(QPrinter* o, const QString& x1) { o->setOutputFileName(x1); }
    Q_INVOKABLE void MsetOutputFormat(QPrinter* o, QPrinter::OutputFormat x1) { o->setOutputFormat(x1); }
    Q_INVOKABLE void MsetPageMargins(QPrinter* o, qreal x1, qreal x2, qreal x3, qreal x4, QPrinter::Unit x5) { o->setPageMargins(x1, x2, x3, x4, x5); }
    Q_INVOKABLE void MsetPageOrder(QPrinter* o, QPrinter::PageOrder x1) { o->setPageOrder(x1); }
    Q_INVOKABLE void MsetPaperSize(QPrinter* o, QPrinter::PaperSize x1) { o->setPaperSize(x1); }
    Q_INVOKABLE void MsetPaperSize(QPrinter* o, const QSizeF& x1, QPrinter::Unit x2) { o->setPaperSize(x1, x2); }
    Q_INVOKABLE void MsetPaperSource(QPrinter* o, QPrinter::PaperSource x1) { o->setPaperSource(x1); }
    Q_INVOKABLE void MsetPrintProgram(QPrinter* o, const QString& x1) { o->setPrintProgram(x1); }
    Q_INVOKABLE void MsetPrintRange(QPrinter* o, QPrinter::PrintRange x1) { o->setPrintRange(x1); }
    Q_INVOKABLE void MsetPrinterName(QPrinter* o, const QString& x1) { o->setPrinterName(x1); }
    Q_INVOKABLE void MsetResolution(QPrinter* o, int x1) { o->setResolution(x1); }
    Q_INVOKABLE QList<int> MsupportedResolutions(QPrinter* o) const { return o->supportedResolutions(); }
    Q_INVOKABLE int MtoPage(QPrinter* o) const { return o->toPage(); }
};

class N75 : public N25 { // QRadialGradient
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LRadialGradient(u); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1, qreal x2, const QPointF& x3) { return new LRadialGradient(u, x1, x2, x3); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3, qreal x4, qreal x5) { return new LRadialGradient(u, x1, x2, x3, x4, x5); }
    Q_INVOKABLE void* C(uint u, const QPointF& x1, qreal x2) { return new LRadialGradient(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, qreal x1, qreal x2, qreal x3) { return new LRadialGradient(u, x1, x2, x3); }
    Q_INVOKABLE QPointF Mcenter(QRadialGradient* o) const { return o->center(); }
    Q_INVOKABLE QPointF MfocalPoint(QRadialGradient* o) const { return o->focalPoint(); }
    Q_INVOKABLE qreal Mradius(QRadialGradient* o) const { return o->radius(); }
    Q_INVOKABLE void MsetCenter(QRadialGradient* o, const QPointF& x1) { o->setCenter(x1); }
    Q_INVOKABLE void MsetCenter(QRadialGradient* o, qreal x1, qreal x2) { o->setCenter(x1, x2); }
    Q_INVOKABLE void MsetFocalPoint(QRadialGradient* o, const QPointF& x1) { o->setFocalPoint(x1); }
    Q_INVOKABLE void MsetFocalPoint(QRadialGradient* o, qreal x1, qreal x2) { o->setFocalPoint(x1, x2); }
    Q_INVOKABLE void MsetRadius(QRadialGradient* o, qreal x1) { o->setRadius(x1); }
};

class N78 : public N20 { // QResizeEvent
    Q_OBJECT
public:
    Q_INVOKABLE QSize MoldSize(QResizeEvent* o) const { return o->oldSize(); }
    Q_INVOKABLE QSize Msize(QResizeEvent* o) const { return o->size(); }
};

class N79 : public N20 { // QShowEvent
    Q_OBJECT
public:
};

class N81 : public N55 { // QSpacerItem
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u, int x1, int x2, QSizePolicy::Policy x3 = QSizePolicy::Minimum, QSizePolicy::Policy x4 = QSizePolicy::Minimum) { return new LSpacerItem(u, x1, x2, x3, x4); }
    Q_INVOKABLE void MchangeSize(QSpacerItem* o, int x1, int x2, QSizePolicy::Policy x3 = QSizePolicy::Minimum, QSizePolicy::Policy x4 = QSizePolicy::Minimum) { o->changeSize(x1, x2, x3, x4); }
    Q_INVOKABLE Qt::Orientations MexpandingDirections(QSpacerItem* o) const { return o->expandingDirections(); }
    Q_INVOKABLE QRect Mgeometry(QSpacerItem* o) const { return o->geometry(); }
    Q_INVOKABLE bool MisEmpty(QSpacerItem* o) const { return o->isEmpty(); }
    Q_INVOKABLE QSize MmaximumSize(QSpacerItem* o) const { return o->maximumSize(); }
    Q_INVOKABLE QSize MminimumSize(QSpacerItem* o) const { return o->minimumSize(); }
    Q_INVOKABLE void MsetGeometry(QSpacerItem* o, const QRect& x1) { o->setGeometry(x1); }
    Q_INVOKABLE QSize MsizeHint(QSpacerItem* o) const { return o->sizeHint(); }
    Q_INVOKABLE QSpacerItem* MspacerItem(QSpacerItem* o) { return o->spacerItem(); }
};

class N85 : public N49 { // QTabletEvent
    Q_OBJECT
public:
    Q_INVOKABLE QTabletEvent::TabletDevice Mdevice(QTabletEvent* o) const { return o->device(); }
    Q_INVOKABLE QPoint MglobalPos(QTabletEvent* o) const { return o->globalPos(); }
    Q_INVOKABLE int MglobalX(QTabletEvent* o) const { return o->globalX(); }
    Q_INVOKABLE int MglobalY(QTabletEvent* o) const { return o->globalY(); }
    Q_INVOKABLE QPointF MhiResGlobalPos(QTabletEvent* o) const { return o->hiResGlobalPos(); }
    Q_INVOKABLE qreal MhiResGlobalX(QTabletEvent* o) const { return o->hiResGlobalX(); }
    Q_INVOKABLE qreal MhiResGlobalY(QTabletEvent* o) const { return o->hiResGlobalY(); }
    Q_INVOKABLE QTabletEvent::PointerType MpointerType(QTabletEvent* o) const { return o->pointerType(); }
    Q_INVOKABLE QPoint Mpos(QTabletEvent* o) const { return o->pos(); }
    Q_INVOKABLE qreal Mpressure(QTabletEvent* o) const { return o->pressure(); }
    Q_INVOKABLE qreal Mrotation(QTabletEvent* o) const { return o->rotation(); }
    Q_INVOKABLE qreal MtangentialPressure(QTabletEvent* o) const { return o->tangentialPressure(); }
    Q_INVOKABLE int Mx(QTabletEvent* o) const { return o->x(); }
    Q_INVOKABLE int MxTilt(QTabletEvent* o) const { return o->xTilt(); }
    Q_INVOKABLE int My(QTabletEvent* o) const { return o->y(); }
    Q_INVOKABLE int MyTilt(QTabletEvent* o) const { return o->yTilt(); }
    Q_INVOKABLE int Mz(QTabletEvent* o) const { return o->z(); }
};

class N87 : public N91 { // QTextBlockFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextBlockFormat(u); }
    Q_INVOKABLE Qt::Alignment Malignment(QTextBlockFormat* o) const { return o->alignment(); }
    Q_INVOKABLE qreal MbottomMargin(QTextBlockFormat* o) const { return o->bottomMargin(); }
    Q_INVOKABLE int Mindent(QTextBlockFormat* o) const { return o->indent(); }
    Q_INVOKABLE bool MisValid(QTextBlockFormat* o) const { return o->isValid(); }
    Q_INVOKABLE qreal MleftMargin(QTextBlockFormat* o) const { return o->leftMargin(); }
    Q_INVOKABLE bool MnonBreakableLines(QTextBlockFormat* o) const { return o->nonBreakableLines(); }
    Q_INVOKABLE QTextBlockFormat::PageBreakFlags MpageBreakPolicy(QTextBlockFormat* o) const { return o->pageBreakPolicy(); }
    Q_INVOKABLE qreal MrightMargin(QTextBlockFormat* o) const { return o->rightMargin(); }
    Q_INVOKABLE void MsetAlignment(QTextBlockFormat* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetBottomMargin(QTextBlockFormat* o, qreal x1) { o->setBottomMargin(x1); }
    Q_INVOKABLE void MsetIndent(QTextBlockFormat* o, int x1) { o->setIndent(x1); }
    Q_INVOKABLE void MsetLeftMargin(QTextBlockFormat* o, qreal x1) { o->setLeftMargin(x1); }
    Q_INVOKABLE void MsetNonBreakableLines(QTextBlockFormat* o, bool x1) { o->setNonBreakableLines(x1); }
    Q_INVOKABLE void MsetPageBreakPolicy(QTextBlockFormat* o, QTextBlockFormat::PageBreakFlags x1) { o->setPageBreakPolicy(x1); }
    Q_INVOKABLE void MsetRightMargin(QTextBlockFormat* o, qreal x1) { o->setRightMargin(x1); }
    Q_INVOKABLE void MsetTabPositions(QTextBlockFormat* o, const QList<QTextOption::Tab>& x1) { o->setTabPositions(x1); }
    Q_INVOKABLE void MsetTextIndent(QTextBlockFormat* o, qreal x1) { o->setTextIndent(x1); }
    Q_INVOKABLE void MsetTopMargin(QTextBlockFormat* o, qreal x1) { o->setTopMargin(x1); }
    Q_INVOKABLE QList<QTextOption::Tab> MtabPositions(QTextBlockFormat* o) const { return o->tabPositions(); }
    Q_INVOKABLE qreal MtextIndent(QTextBlockFormat* o) const { return o->textIndent(); }
    Q_INVOKABLE qreal MtopMargin(QTextBlockFormat* o) const { return o->topMargin(); }
};

class N88 : public N91 { // QTextCharFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextCharFormat(u); }
    Q_INVOKABLE QString ManchorHref(QTextCharFormat* o) const { return o->anchorHref(); }
    Q_INVOKABLE QStringList ManchorNames(QTextCharFormat* o) const { return o->anchorNames(); }
    Q_INVOKABLE QFont Mfont(QTextCharFormat* o) const { return o->font(); }
    Q_INVOKABLE QFont::Capitalization MfontCapitalization(QTextCharFormat* o) const { return o->fontCapitalization(); }
    Q_INVOKABLE QString MfontFamily(QTextCharFormat* o) const { return o->fontFamily(); }
    Q_INVOKABLE bool MfontFixedPitch(QTextCharFormat* o) const { return o->fontFixedPitch(); }
    Q_INVOKABLE bool MfontItalic(QTextCharFormat* o) const { return o->fontItalic(); }
    Q_INVOKABLE bool MfontKerning(QTextCharFormat* o) const { return o->fontKerning(); }
    Q_INVOKABLE qreal MfontLetterSpacing(QTextCharFormat* o) const { return o->fontLetterSpacing(); }
    Q_INVOKABLE bool MfontOverline(QTextCharFormat* o) const { return o->fontOverline(); }
    Q_INVOKABLE qreal MfontPointSize(QTextCharFormat* o) const { return o->fontPointSize(); }
    Q_INVOKABLE bool MfontStrikeOut(QTextCharFormat* o) const { return o->fontStrikeOut(); }
    Q_INVOKABLE QFont::StyleHint MfontStyleHint(QTextCharFormat* o) const { return o->fontStyleHint(); }
    Q_INVOKABLE QFont::StyleStrategy MfontStyleStrategy(QTextCharFormat* o) const { return o->fontStyleStrategy(); }
    Q_INVOKABLE bool MfontUnderline(QTextCharFormat* o) const { return o->fontUnderline(); }
    Q_INVOKABLE int MfontWeight(QTextCharFormat* o) const { return o->fontWeight(); }
    Q_INVOKABLE qreal MfontWordSpacing(QTextCharFormat* o) const { return o->fontWordSpacing(); }
    Q_INVOKABLE bool MisAnchor(QTextCharFormat* o) const { return o->isAnchor(); }
    Q_INVOKABLE bool MisValid(QTextCharFormat* o) const { return o->isValid(); }
    Q_INVOKABLE void MsetAnchor(QTextCharFormat* o, bool x1) { o->setAnchor(x1); }
    Q_INVOKABLE void MsetAnchorHref(QTextCharFormat* o, const QString& x1) { o->setAnchorHref(x1); }
    Q_INVOKABLE void MsetAnchorNames(QTextCharFormat* o, const QStringList& x1) { o->setAnchorNames(x1); }
    Q_INVOKABLE void MsetFont(QTextCharFormat* o, const QFont& x1) { o->setFont(x1); }
    Q_INVOKABLE void MsetFontCapitalization(QTextCharFormat* o, QFont::Capitalization x1) { o->setFontCapitalization(x1); }
    Q_INVOKABLE void MsetFontFamily(QTextCharFormat* o, const QString& x1) { o->setFontFamily(x1); }
    Q_INVOKABLE void MsetFontFixedPitch(QTextCharFormat* o, bool x1) { o->setFontFixedPitch(x1); }
    Q_INVOKABLE void MsetFontItalic(QTextCharFormat* o, bool x1) { o->setFontItalic(x1); }
    Q_INVOKABLE void MsetFontKerning(QTextCharFormat* o, bool x1) { o->setFontKerning(x1); }
    Q_INVOKABLE void MsetFontLetterSpacing(QTextCharFormat* o, qreal x1) { o->setFontLetterSpacing(x1); }
    Q_INVOKABLE void MsetFontOverline(QTextCharFormat* o, bool x1) { o->setFontOverline(x1); }
    Q_INVOKABLE void MsetFontPointSize(QTextCharFormat* o, qreal x1) { o->setFontPointSize(x1); }
    Q_INVOKABLE void MsetFontStrikeOut(QTextCharFormat* o, bool x1) { o->setFontStrikeOut(x1); }
    Q_INVOKABLE void MsetFontStyleHint(QTextCharFormat* o, QFont::StyleHint x1, QFont::StyleStrategy x2 = QFont::PreferDefault) { o->setFontStyleHint(x1, x2); }
    Q_INVOKABLE void MsetFontStyleStrategy(QTextCharFormat* o, QFont::StyleStrategy x1) { o->setFontStyleStrategy(x1); }
    Q_INVOKABLE void MsetFontUnderline(QTextCharFormat* o, bool x1) { o->setFontUnderline(x1); }
    Q_INVOKABLE void MsetFontWeight(QTextCharFormat* o, int x1) { o->setFontWeight(x1); }
    Q_INVOKABLE void MsetFontWordSpacing(QTextCharFormat* o, qreal x1) { o->setFontWordSpacing(x1); }
    Q_INVOKABLE void MsetTextOutline(QTextCharFormat* o, const QPen& x1) { o->setTextOutline(x1); }
    Q_INVOKABLE void MsetToolTip(QTextCharFormat* o, const QString& x1) { o->setToolTip(x1); }
    Q_INVOKABLE void MsetUnderlineColor(QTextCharFormat* o, const QColor& x1) { o->setUnderlineColor(x1); }
    Q_INVOKABLE void MsetUnderlineStyle(QTextCharFormat* o, QTextCharFormat::UnderlineStyle x1) { o->setUnderlineStyle(x1); }
    Q_INVOKABLE void MsetVerticalAlignment(QTextCharFormat* o, QTextCharFormat::VerticalAlignment x1) { o->setVerticalAlignment(x1); }
    Q_INVOKABLE QPen MtextOutline(QTextCharFormat* o) const { return o->textOutline(); }
    Q_INVOKABLE QString MtoolTip(QTextCharFormat* o) const { return o->toolTip(); }
    Q_INVOKABLE QColor MunderlineColor(QTextCharFormat* o) const { return o->underlineColor(); }
    Q_INVOKABLE QTextCharFormat::UnderlineStyle MunderlineStyle(QTextCharFormat* o) const { return o->underlineStyle(); }
    Q_INVOKABLE QTextCharFormat::VerticalAlignment MverticalAlignment(QTextCharFormat* o) const { return o->verticalAlignment(); }
};

class N92 : public N91 { // QTextFrameFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextFrameFormat(u); }
    Q_INVOKABLE qreal Mborder(QTextFrameFormat* o) const { return o->border(); }
    Q_INVOKABLE QBrush MborderBrush(QTextFrameFormat* o) const { return o->borderBrush(); }
    Q_INVOKABLE QTextFrameFormat::BorderStyle MborderStyle(QTextFrameFormat* o) const { return o->borderStyle(); }
    Q_INVOKABLE qreal MbottomMargin(QTextFrameFormat* o) const { return o->bottomMargin(); }
    Q_INVOKABLE QTextLength Mheight(QTextFrameFormat* o) const { return o->height(); }
    Q_INVOKABLE bool MisValid(QTextFrameFormat* o) const { return o->isValid(); }
    Q_INVOKABLE qreal MleftMargin(QTextFrameFormat* o) const { return o->leftMargin(); }
    Q_INVOKABLE qreal Mmargin(QTextFrameFormat* o) const { return o->margin(); }
    Q_INVOKABLE qreal Mpadding(QTextFrameFormat* o) const { return o->padding(); }
    Q_INVOKABLE QTextFrameFormat::PageBreakFlags MpageBreakPolicy(QTextFrameFormat* o) const { return o->pageBreakPolicy(); }
    Q_INVOKABLE QTextFrameFormat::Position Mposition(QTextFrameFormat* o) const { return o->position(); }
    Q_INVOKABLE qreal MrightMargin(QTextFrameFormat* o) const { return o->rightMargin(); }
    Q_INVOKABLE void MsetBorder(QTextFrameFormat* o, qreal x1) { o->setBorder(x1); }
    Q_INVOKABLE void MsetBorderBrush(QTextFrameFormat* o, const QBrush& x1) { o->setBorderBrush(x1); }
    Q_INVOKABLE void MsetBorderStyle(QTextFrameFormat* o, QTextFrameFormat::BorderStyle x1) { o->setBorderStyle(x1); }
    Q_INVOKABLE void MsetBottomMargin(QTextFrameFormat* o, qreal x1) { o->setBottomMargin(x1); }
    Q_INVOKABLE void MsetHeight(QTextFrameFormat* o, const QTextLength& x1) { o->setHeight(x1); }
    Q_INVOKABLE void MsetHeight(QTextFrameFormat* o, qreal x1) { o->setHeight(x1); }
    Q_INVOKABLE void MsetLeftMargin(QTextFrameFormat* o, qreal x1) { o->setLeftMargin(x1); }
    Q_INVOKABLE void MsetMargin(QTextFrameFormat* o, qreal x1) { o->setMargin(x1); }
    Q_INVOKABLE void MsetPadding(QTextFrameFormat* o, qreal x1) { o->setPadding(x1); }
    Q_INVOKABLE void MsetPageBreakPolicy(QTextFrameFormat* o, QTextFrameFormat::PageBreakFlags x1) { o->setPageBreakPolicy(x1); }
    Q_INVOKABLE void MsetPosition(QTextFrameFormat* o, QTextFrameFormat::Position x1) { o->setPosition(x1); }
    Q_INVOKABLE void MsetRightMargin(QTextFrameFormat* o, qreal x1) { o->setRightMargin(x1); }
    Q_INVOKABLE void MsetTopMargin(QTextFrameFormat* o, qreal x1) { o->setTopMargin(x1); }
    Q_INVOKABLE void MsetWidth(QTextFrameFormat* o, const QTextLength& x1) { o->setWidth(x1); }
    Q_INVOKABLE void MsetWidth(QTextFrameFormat* o, qreal x1) { o->setWidth(x1); }
    Q_INVOKABLE qreal MtopMargin(QTextFrameFormat* o) const { return o->topMargin(); }
    Q_INVOKABLE QTextLength Mwidth(QTextFrameFormat* o) const { return o->width(); }
};

class N93 : public N88 { // QTextImageFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextImageFormat(u); }
    Q_INVOKABLE qreal Mheight(QTextImageFormat* o) const { return o->height(); }
    Q_INVOKABLE bool MisValid(QTextImageFormat* o) const { return o->isValid(); }
    Q_INVOKABLE QString Mname(QTextImageFormat* o) const { return o->name(); }
    Q_INVOKABLE void MsetHeight(QTextImageFormat* o, qreal x1) { o->setHeight(x1); }
    Q_INVOKABLE void MsetName(QTextImageFormat* o, const QString& x1) { o->setName(x1); }
    Q_INVOKABLE void MsetWidth(QTextImageFormat* o, qreal x1) { o->setWidth(x1); }
    Q_INVOKABLE qreal Mwidth(QTextImageFormat* o) const { return o->width(); }
};

class N95 : public N91 { // QTextListFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextListFormat(u); }
    Q_INVOKABLE int Mindent(QTextListFormat* o) const { return o->indent(); }
    Q_INVOKABLE bool MisValid(QTextListFormat* o) const { return o->isValid(); }
    Q_INVOKABLE void MsetIndent(QTextListFormat* o, int x1) { o->setIndent(x1); }
    Q_INVOKABLE void MsetStyle(QTextListFormat* o, QTextListFormat::Style x1) { o->setStyle(x1); }
    Q_INVOKABLE QTextListFormat::Style Mstyle(QTextListFormat* o) const { return o->style(); }
};

class N98 : public N88 { // QTextTableCellFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextTableCellFormat(u); }
    Q_INVOKABLE qreal MbottomPadding(QTextTableCellFormat* o) const { return o->bottomPadding(); }
    Q_INVOKABLE bool MisValid(QTextTableCellFormat* o) const { return o->isValid(); }
    Q_INVOKABLE qreal MleftPadding(QTextTableCellFormat* o) const { return o->leftPadding(); }
    Q_INVOKABLE qreal MrightPadding(QTextTableCellFormat* o) const { return o->rightPadding(); }
    Q_INVOKABLE void MsetBottomPadding(QTextTableCellFormat* o, qreal x1) { o->setBottomPadding(x1); }
    Q_INVOKABLE void MsetLeftPadding(QTextTableCellFormat* o, qreal x1) { o->setLeftPadding(x1); }
    Q_INVOKABLE void MsetPadding(QTextTableCellFormat* o, qreal x1) { o->setPadding(x1); }
    Q_INVOKABLE void MsetRightPadding(QTextTableCellFormat* o, qreal x1) { o->setRightPadding(x1); }
    Q_INVOKABLE void MsetTopPadding(QTextTableCellFormat* o, qreal x1) { o->setTopPadding(x1); }
    Q_INVOKABLE qreal MtopPadding(QTextTableCellFormat* o) const { return o->topPadding(); }
};

class N99 : public N92 { // QTextTableFormat
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LTextTableFormat(u); }
    Q_INVOKABLE Qt::Alignment Malignment(QTextTableFormat* o) const { return o->alignment(); }
    Q_INVOKABLE qreal McellPadding(QTextTableFormat* o) const { return o->cellPadding(); }
    Q_INVOKABLE qreal McellSpacing(QTextTableFormat* o) const { return o->cellSpacing(); }
    Q_INVOKABLE void MclearColumnWidthConstraints(QTextTableFormat* o) { o->clearColumnWidthConstraints(); }
    Q_INVOKABLE QVector<QTextLength> McolumnWidthConstraints(QTextTableFormat* o) const { return o->columnWidthConstraints(); }
    Q_INVOKABLE int Mcolumns(QTextTableFormat* o) const { return o->columns(); }
    Q_INVOKABLE int MheaderRowCount(QTextTableFormat* o) const { return o->headerRowCount(); }
    Q_INVOKABLE bool MisValid(QTextTableFormat* o) const { return o->isValid(); }
    Q_INVOKABLE void MsetAlignment(QTextTableFormat* o, Qt::Alignment x1) { o->setAlignment(x1); }
    Q_INVOKABLE void MsetCellPadding(QTextTableFormat* o, qreal x1) { o->setCellPadding(x1); }
    Q_INVOKABLE void MsetCellSpacing(QTextTableFormat* o, qreal x1) { o->setCellSpacing(x1); }
    Q_INVOKABLE void MsetColumnWidthConstraints(QTextTableFormat* o, const QVector<QTextLength>& x1) { o->setColumnWidthConstraints(x1); }
    Q_INVOKABLE void MsetHeaderRowCount(QTextTableFormat* o, int x1) { o->setHeaderRowCount(x1); }
};

class N101 : public N20 { // QTimerEvent
    Q_OBJECT
public:
    Q_INVOKABLE int MtimerId(QTimerEvent* o) const { return o->timerId(); }
};

class N110 : public N49 { // QWheelEvent
    Q_OBJECT
public:
    Q_INVOKABLE Qt::MouseButtons Mbuttons(QWheelEvent* o) const { return o->buttons(); }
    Q_INVOKABLE int Mdelta(QWheelEvent* o) const { return o->delta(); }
    Q_INVOKABLE QPoint MglobalPos(QWheelEvent* o) const { return o->globalPos(); }
    Q_INVOKABLE int MglobalX(QWheelEvent* o) const { return o->globalX(); }
    Q_INVOKABLE int MglobalY(QWheelEvent* o) const { return o->globalY(); }
    Q_INVOKABLE Qt::Orientation Morientation(QWheelEvent* o) const { return o->orientation(); }
    Q_INVOKABLE QPoint Mpos(QWheelEvent* o) const { return o->pos(); }
    Q_INVOKABLE int Mx(QWheelEvent* o) const { return o->x(); }
    Q_INVOKABLE int My(QWheelEvent* o) const { return o->y(); }
};

class N5 : public N72 { // QBitmap
    Q_OBJECT
public:
    Q_INVOKABLE void* C(uint u) { return new LBitmap(u); }
    Q_INVOKABLE void* C(uint u, const QPixmap& x1) { return new LBitmap(u, x1); }
    Q_INVOKABLE void* C(uint u, int x1, int x2) { return new LBitmap(u, x1, x2); }
    Q_INVOKABLE void* C(uint u, const QSize& x1) { return new LBitmap(u, x1); }
    Q_INVOKABLE void* C(uint u, const QString& x1, const char* x2 = 0) { return new LBitmap(u, x1, x2); }
    Q_INVOKABLE void Mclear(QBitmap* o) { o->clear(); }
    Q_INVOKABLE QBitmap Mtransformed(QBitmap* o, const QTransform& x1) const { return o->transformed(x1); }
    Q_INVOKABLE QBitmap SfromData(const QSize& x1, const uchar* x2, QImage::Format x3 = QImage::Format_MonoLSB) { return QBitmap::fromData(x1, x2, x3); }
    Q_INVOKABLE QBitmap SfromImage(const QImage& x1, Qt::ImageConversionFlags x2 = Qt::AutoColor) { return QBitmap::fromImage(x1, x2); }
};

class N11 : public N49 { // QContextMenuEvent
    Q_OBJECT
public:
    Q_INVOKABLE QPoint MglobalPos(QContextMenuEvent* o) const { return o->globalPos(); }
    Q_INVOKABLE int MglobalX(QContextMenuEvent* o) const { return o->globalX(); }
    Q_INVOKABLE int MglobalY(QContextMenuEvent* o) const { return o->globalY(); }
    Q_INVOKABLE QPoint Mpos(QContextMenuEvent* o) const { return o->pos(); }
    Q_INVOKABLE QContextMenuEvent::Reason Mreason(QContextMenuEvent* o) const { return o->reason(); }
    Q_INVOKABLE int Mx(QContextMenuEvent* o) const { return o->x(); }
    Q_INVOKABLE int My(QContextMenuEvent* o) const { return o->y(); }
};

class N18 : public N19 { // QDragMoveEvent
    Q_OBJECT
public:
    Q_INVOKABLE void Maccept(QDragMoveEvent* o, const QRect& x1) { o->accept(x1); }
    Q_INVOKABLE void Maccept(QDragMoveEvent* o) { o->accept(); }
    Q_INVOKABLE QRect ManswerRect(QDragMoveEvent* o) const { return o->answerRect(); }
    Q_INVOKABLE void Mignore(QDragMoveEvent* o, const QRect& x1) { o->ignore(x1); }
    Q_INVOKABLE void Mignore(QDragMoveEvent* o) { o->ignore(); }
};

class N36 : public N38 { // QGraphicsSceneContextMenuEvent
    Q_OBJECT
public:
    Q_INVOKABLE Qt::KeyboardModifiers Mmodifiers(QGraphicsSceneContextMenuEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsSceneContextMenuEvent* o) const { return o->pos(); }
    Q_INVOKABLE QGraphicsSceneContextMenuEvent::Reason Mreason(QGraphicsSceneContextMenuEvent* o) const { return o->reason(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneContextMenuEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneContextMenuEvent* o) const { return o->screenPos(); }
};

class N37 : public N38 { // QGraphicsSceneDragDropEvent
    Q_OBJECT
public:
    Q_INVOKABLE void MacceptProposedAction(QGraphicsSceneDragDropEvent* o) { o->acceptProposedAction(); }
    Q_INVOKABLE Qt::MouseButtons Mbuttons(QGraphicsSceneDragDropEvent* o) const { return o->buttons(); }
    Q_INVOKABLE Qt::DropAction MdropAction(QGraphicsSceneDragDropEvent* o) const { return o->dropAction(); }
    Q_INVOKABLE const QMimeData* MmimeData(QGraphicsSceneDragDropEvent* o) const { return o->mimeData(); }
    Q_INVOKABLE Qt::KeyboardModifiers Mmodifiers(QGraphicsSceneDragDropEvent* o) const { return o->modifiers(); }
    Q_INVOKABLE QPointF Mpos(QGraphicsSceneDragDropEvent* o) const { return o->pos(); }
    Q_INVOKABLE Qt::DropActions MpossibleActions(QGraphicsSceneDragDropEvent* o) const { return o->possibleActions(); }
    Q_INVOKABLE Qt::DropAction MproposedAction(QGraphicsSceneDragDropEvent* o) const { return o->proposedAction(); }
    Q_INVOKABLE QPointF MscenePos(QGraphicsSceneDragDropEvent* o) const { return o->scenePos(); }
    Q_INVOKABLE QPoint MscreenPos(QGraphicsSceneDragDropEvent* o) const { return o->screenPos(); }
    Q_INVOKABLE void MsetDropAction(QGraphicsSceneDragDropEvent* o, Qt::DropAction x1) { o->setDropAction(x1); }
    Q_INVOKABLE QWidget* Msource(QGraphicsSceneDragDropEvent* o) const { return o->source(); }
};

class N16 : public N18 { // QDragEnterEvent
    Q_OBJECT
public:
};

#endif
