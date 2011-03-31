// THIS FILE IS GENERATED (see helper/)

#include "_q_methods.h"
#include "_n_methods.h"
#include "_ini2.h"

NumList LGLShader::overrideIds = NumList();
NumList LGLShaderProgram::overrideIds = NumList() << 198;
NumList LGLWidget::overrideIds = NumList() << 199 << 200 << 201 << 202 << 203 << 204 << 205 << 206 << 21 << 40;
NumList LGLColormap::overrideIds = NumList();
NumList LGLContext::overrideIds = NumList() << 370 << 371 << 372 << 373 << 374;
NumList LGLFormat::overrideIds = NumList();
NumList LGLFramebufferObject::overrideIds = NumList() << 44;
NumList LGLFramebufferObjectFormat::overrideIds = NumList();
NumList LGLPixelBuffer::overrideIds = NumList() << 44;

void ini() {
    static bool _ = false; if(_) return; _ = true;
    ini2();
    LObjects::Q[62] = new Q63;
    LObjects::Q[63] = new Q64;
    LObjects::Q[64] = new Q65;
    LObjects::N[38] = new N39;
    LObjects::N[39] = new N40;
    LObjects::N[40] = new N41;
    LObjects::N[41] = new N42;
    LObjects::N[42] = new N43;
    LObjects::N[43] = new N44; }

const QMetaObject* staticMetaObject(int n) {
    const QMetaObject* m = 0;
    switch(n) {
        case 63: m = &QGLShader::staticMetaObject; break;
        case 64: m = &QGLShaderProgram::staticMetaObject; break;
        case 65: m = &QGLWidget::staticMetaObject; break; }
    return m; }

void deleteNObject(int n, void* p) {
    switch(n) {
        case 39: delete (LGLColormap*)p; break;
        case 40: delete (LGLContext*)p; break;
        case 41: delete (LGLFormat*)p; break;
        case 42: delete (LGLFramebufferObject*)p; break;
        case 43: delete (LGLFramebufferObjectFormat*)p; break;
        case 44: delete (LGLPixelBuffer*)p; break; }}

NumList* override(const QByteArray& name) {
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
            case 39: ids = &LGLColormap::overrideIds; break;
            case 40: ids = &LGLContext::overrideIds; break;
            case 41: ids = &LGLFormat::overrideIds; break;
            case 42: ids = &LGLFramebufferObject::overrideIds; break;
            case 43: ids = &LGLFramebufferObjectFormat::overrideIds; break;
            case 44: ids = &LGLPixelBuffer::overrideIds; break; }}
    return ids; }
