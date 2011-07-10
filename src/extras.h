// copyright (c) 2011 Polos Ruetz
//
// extra functions added to some Qt class
// e.g. (qfun image "changeBrightness" 10)

#ifndef EXTRAS_H
#define EXTRAS_H

#include <QImage>

// QImage
QImage QImage_changeBrightness(const QImage&, int);
QImage QImage_changeContrast(const QImage&, int);
QImage QImage_changeGamma(const QImage&, int);

#endif
