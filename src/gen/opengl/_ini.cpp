// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

QT_BEGIN_NAMESPACE

NumList LGLShader::overrideIds = NumList();
NumList LGLShaderProgram::overrideIds = NumList() << 199;
NumList LGLWidget::overrideIds = NumList() << 200 << 201 << 202 << 203 << 204 << 205 << 206 << 207 << 22 << 41;
NumList LGLColormap::overrideIds = NumList();
NumList LGLContext::overrideIds = NumList() << 405 << 406 << 407 << 408 << 409;
NumList LGLFormat::overrideIds = NumList();
NumList LGLFramebufferObject::overrideIds = NumList() << 45;
NumList LGLFramebufferObjectFormat::overrideIds = NumList();
NumList LGLPixelBuffer::overrideIds = NumList() << 45;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[62] = new Q63;
    LObjects::Q[63] = new Q64;
    LObjects::Q[64] = new Q65;
    LObjects::N[39] = new N40;
    LObjects::N[40] = new N41;
    LObjects::N[41] = new N42;
    LObjects::N[42] = new N43;
    LObjects::N[43] = new N44;
    LObjects::N[44] = new N45; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 63: m = &QGLShader::staticMetaObject; break;
        case 64: m = &QGLShaderProgram::staticMetaObject; break;
        case 65: m = &QGLWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p, int gc) {
    switch(n) {
        case 40: if(gc) delete (QGLColormap*)p; else delete (LGLColormap*)p; break;
        case 41: if(gc) delete (QGLContext*)p; else delete (LGLContext*)p; break;
        case 42: if(gc) delete (QGLFormat*)p; else delete (LGLFormat*)p; break;
        case 43: if(gc) delete (QGLFramebufferObject*)p; else delete (LGLFramebufferObject*)p; break;
        case 44: if(gc) delete (QGLFramebufferObjectFormat*)p; else delete (LGLFramebufferObjectFormat*)p; break;
        case 45: if(gc) delete (QGLPixelBuffer*)p; else delete (LGLPixelBuffer*)p; break; }}

NumList* overrideFunctions(const QByteArray& name) {
    NumList* ids = 0;
    int n = LObjects::q_names.value(name, -1);
    if(n != -1) {
        switch(n) {
            case 63: ids = &LGLShader::overrideIds; break;
            case 64: ids = &LGLShaderProgram::overrideIds; break;
            case 65: ids = &LGLWidget::overrideIds; break; }}
    else {
        n = LObjects::n_names.value(name);
        switch(n) {
            case 40: ids = &LGLColormap::overrideIds; break;
            case 41: ids = &LGLContext::overrideIds; break;
            case 42: ids = &LGLFormat::overrideIds; break;
            case 43: ids = &LGLFramebufferObject::overrideIds; break;
            case 44: ids = &LGLFramebufferObjectFormat::overrideIds; break;
            case 45: ids = &LGLPixelBuffer::overrideIds; break; }}
    return ids; }

QT_END_NAMESPACE
