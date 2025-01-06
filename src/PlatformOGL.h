#ifndef PLATFORMOGL_H
#define PLATFORMOGL_H

// If you don't wanna use glad for your platform,
// define MELONDS_GL_HEADER to the path of some other header
// that pulls in the necessary OpenGL declarations.
// Make sure to include quotes or angle brackets as needed,
// and that all targets get the same MELONDS_GL_HEADER definition.

#ifndef MELONDS_GL_HEADER
    #if defined(USE_OPENGL_ES)
        #define MELONDS_GL_HEADER "\"frontend/glad/glad_gles32.h\""
    #else
        #define MELONDS_GL_HEADER "\"frontend/glad/glad_gl43.h\""
    #endif
#endif

#include MELONDS_GL_HEADER

#endif
