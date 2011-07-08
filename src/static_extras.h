// copyright (c) 2010-2011 Polos Ruetz
//
// static functions added to some Qt class
// e.g. (qfun "QImage" "changeBrightness" image 50)

#ifndef STATIC_EXTRAS_H
#define STATIC_EXTRAS_H

#include <QImage>

// QImage
QImage QImage_changeBrightness(const QImage&, int);
QImage QImage_changeContrast(const QImage&, int);
QImage QImage_changeGamma(const QImage&, int);

#endif
