#ifndef INI2_H
#define INI2_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

static GLfloat toFloat(cl_object l_num) {
    GLfloat f = 0;
    if(ECL_DOUBLE_FLOAT_P(l_num)) {
        f = df(l_num); }
    else if(ECL_SINGLE_FLOAT_P(l_num)) {
        f = sf(l_num); }
    else if(FIXNUMP(l_num)) {
        f = fixint(l_num); }
    else {
        cl_object l_f = cl_float(1, l_num);
        if(ECL_DOUBLE_FLOAT_P(l_f)) {
            f = df(l_f); }
        else if(ECL_SINGLE_FLOAT_P(l_f)) {
            f = sf(l_f); }}
    return f; }

static GLint toInt(cl_object l_num) {
    GLint i = 0;
    if(FIXNUMP(l_num)) {
        i = fixint(l_num); }
    return i; }

static GLuint toUInt(cl_object l_num) {
    GLuint i = 0;
    if(FIXNUMP(l_num)) {
        i = fixnnint(l_num); }
    return i; }

void ini2() {
    LObjects::T_GLfloat = qRegisterMetaType<GLfloat>("GLfloat");
    LObjects::T_GLint = qRegisterMetaType<GLint>("GLint");
    LObjects::T_GLuint = qRegisterMetaType<GLuint>("GLuint"); }

void* toMetaArg(int n, cl_object l_arg) {
    void* p = 0;
    if(LObjects::T_GLfloat == n)     { p = new GLfloat(toFloat(l_arg)); }
    else if(LObjects::T_GLint == n)  { p = new GLint(toInt(l_arg)); }
    else if(LObjects::T_GLuint == n) { p = new GLuint(toUInt(l_arg)); }
    return p; }

cl_object to_lisp_arg(int n, void* p) {
    cl_object l_ret = Cnil;
    if(LObjects::T_GLfloat == n)     { l_ret = ecl_make_doublefloat(*(GLfloat*)p); }
    else if(LObjects::T_GLint == n)  { l_ret = MAKE_FIXNUM(*(GLint*)p); }
    else if(LObjects::T_GLuint == n) { l_ret = MAKE_FIXNUM(*(GLuint*)p); }
    return l_ret; }

#endif
