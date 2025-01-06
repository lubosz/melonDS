#pragma once

// Fix glad.h including windows.h
#ifdef _WIN32
#include "../windows_headers.h"
#endif

#if defined(USE_OPENGL_ES)
    #include "../../glad/glad_gles32.h"
#else
    #include "../../glad/glad_gl43.h"
#endif
