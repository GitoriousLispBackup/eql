// THIS FILE IS GENERATED (see helper/)

#ifndef N_CLASSES_H
#define N_CLASSES_H

#include "_ini.h"
#include "../../ecl_fun.h"
#include "../_lobjects.h"
#include <QtGui>

class LGLColormap : public QGLColormap {
    friend class N39;
public:
    LGLColormap(uint u) : unique(u) {}
    LGLColormap(uint u, const QGLColormap& x1) : QGLColormap(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGLContext : public QGLContext {
    friend class N40;
public:
    LGLContext(uint u, const QGLFormat& x1) : QGLContext(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;

    bool create(const QGLContext* x1 = 0) { void* fun = LObjects::overrideFun(unique, 401); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 401, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGLContext::create(x1); } return ret; }
    void doneCurrent() { void* fun = LObjects::overrideFun(unique, 402); if(fun) { callOverrideFun(fun, 402, 0); } if(!fun || LObjects::call_default) { QGLContext::doneCurrent(); }}
    void makeCurrent() { void* fun = LObjects::overrideFun(unique, 403); if(fun) { callOverrideFun(fun, 403, 0); } if(!fun || LObjects::call_default) { QGLContext::makeCurrent(); }}
    void swapBuffers() const { void* fun = LObjects::overrideFun(unique, 404); if(fun) { callOverrideFun(fun, 404, 0); } if(!fun || LObjects::call_default) { QGLContext::swapBuffers(); }}
    bool chooseContext(const QGLContext* x1 = 0) { void* fun = LObjects::overrideFun(unique, 405); bool ret = false; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 405, args).toBool(); } if(!fun || LObjects::call_default) { ret = QGLContext::chooseContext(x1); } return ret; }
};

class LGLFormat : public QGLFormat {
    friend class N41;
public:
    LGLFormat(uint u) : unique(u) {}
    LGLFormat(uint u, QGL::FormatOptions x1, int x2 = 0) : QGLFormat(x1, x2), unique(u) {}
    LGLFormat(uint u, const QGLFormat& x1) : QGLFormat(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGLFramebufferObject : public QGLFramebufferObject {
    friend class N42;
public:
    LGLFramebufferObject(uint u, const QSize& x1, GLenum x2 = GL_TEXTURE_2D) : QGLFramebufferObject(x1, x2), unique(u) {}
    LGLFramebufferObject(uint u, int x1, int x2, GLenum x3 = GL_TEXTURE_2D) : QGLFramebufferObject(x1, x2, x3), unique(u) {}
    LGLFramebufferObject(uint u, const QSize& x1, const QGLFramebufferObjectFormat& x2) : QGLFramebufferObject(x1, x2), unique(u) {}
    LGLFramebufferObject(uint u, int x1, int x2, const QGLFramebufferObjectFormat& x3) : QGLFramebufferObject(x1, x2, x3), unique(u) {}
    LGLFramebufferObject(uint u, int x1, int x2, Attachment x3, GLenum x4 = GL_TEXTURE_2D, GLenum x5 = GL_RGBA8) : QGLFramebufferObject(x1, x2, x3, x4, x5), unique(u) {}
    LGLFramebufferObject(uint u, const QSize& x1, Attachment x2, GLenum x3 = GL_TEXTURE_2D, GLenum x4 = GL_RGBA8) : QGLFramebufferObject(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QGLFramebufferObject::metric(x1); } return ret; }
};

class LGLFramebufferObjectFormat : public QGLFramebufferObjectFormat {
    friend class N43;
public:
    LGLFramebufferObjectFormat(uint u) : unique(u) {}
    LGLFramebufferObjectFormat(uint u, const QGLFramebufferObjectFormat& x1) : QGLFramebufferObjectFormat(x1), unique(u) {}

    static NumList overrideIds;
    uint unique;
};

class LGLPixelBuffer : public QGLPixelBuffer {
    friend class N44;
public:
    LGLPixelBuffer(uint u, const QSize& x1, const QGLFormat& x2 = QGLFormat::defaultFormat(), QGLWidget* x3 = 0) : QGLPixelBuffer(x1, x2, x3), unique(u) {}
    LGLPixelBuffer(uint u, int x1, int x2, const QGLFormat& x3 = QGLFormat::defaultFormat(), QGLWidget* x4 = 0) : QGLPixelBuffer(x1, x2, x3, x4), unique(u) {}

    static NumList overrideIds;
    uint unique;

    int metric(PaintDeviceMetric x1) const { void* fun = LObjects::overrideFun(unique, 44); int ret = 0; if(fun) { const void* args[] = { &x1 }; ret = callOverrideFun(fun, 44, args).toInt(); } if(!fun || LObjects::call_default) { ret = QGLPixelBuffer::metric(x1); } return ret; }
};

#endif
