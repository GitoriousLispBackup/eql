// copyright (c) 2011 Polos Ruetz

#include "static_extras.h"
#include <math.h>

// *** QImage *** (code found in a Qt forum)

template<class T>
inline const T& clamp(const T& x, const T& low, const T& high) {
    return (x < low) ? low : ((high < x) ? high : x); }

inline int changeBrightness(int value, int brightness) {
    return clamp(value + brightness * 255 / 100, 0, 255); }

inline int changeContrast(int value, int contrast) {
    return clamp(((value - 127) * contrast / 100) + 127, 0, 255); }

inline int changeGamma(int value, int gamma) {
    return clamp(int(pow(value / 255.0, 100.0 / gamma) * 255), 0, 255); }

inline int changeUsingTable(int value, const int table[]) {
    return table[value]; }

template<int operation(int, int) >
static QImage changeImage(const QImage& image, int value) {
    QImage _image = image;
    _image.detach();
    if(!_image.numColors()) {
        if(_image.format() != QImage::Format_RGB32) {
            _image = _image.convertToFormat(QImage::Format_RGB32); }
        int table[256];
        for(int i = 0; i < 256; ++i) {
            table[i] = operation(i, value); }
        if(_image.hasAlphaChannel()) {
            for(int y = 0; y < _image.height(); ++y) {
                QRgb* line = reinterpret_cast<QRgb*>(_image.scanLine(y));
                for(int x = 0; x < _image.width(); ++x) {
                    line[x] = qRgba(changeUsingTable(qRed(line[x]), table),
                                    changeUsingTable(qGreen(line[x]), table),
                                    changeUsingTable(qBlue(line[x]), table),
                                    changeUsingTable(qAlpha(line[x]), table)); }}}
        else {
            for(int y = 0; y < _image.height(); ++y) {
                QRgb* line = reinterpret_cast<QRgb*>(_image.scanLine(y));
                for(int x = 0; x < _image.width(); ++x) {
                    line[x] = qRgb(changeUsingTable(qRed(line[x]), table),
                                   changeUsingTable(qGreen(line[x]), table),
                                   changeUsingTable(qBlue(line[x]), table)); }}}}
    else {
        QVector<QRgb> colors = _image.colorTable();
        for(int i = 0; i < _image.numColors(); ++i) {
            colors[i] = qRgb(operation(qRed(colors[i]), value),
                             operation(qGreen(colors[i]), value),
                             operation(qBlue(colors[i]), value)); }}
    return _image; }

QImage QImage_changeBrightness(const QImage& image, int brightness) {
    if(!brightness) {
        return image; }
    return changeImage<changeBrightness>(image, brightness); }

QImage QImage_changeContrast(const QImage& image, int contrast) {
    if(contrast == 100) {
        return image; }
    return changeImage<changeContrast>(image, contrast); }

QImage QImage_changeGamma(const QImage& image, int gamma) {
    if(gamma == 100) {
        return image; }
    return changeImage<changeGamma>(image, gamma); }
