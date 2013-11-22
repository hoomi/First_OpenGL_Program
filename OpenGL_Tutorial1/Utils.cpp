//
//  Utils.cpp
//  OpenGL_Tutorial1
//
//  Created by Hooman Ostovari on 22/11/2013.
//  Copyright (c) 2013 Hooman Ostovari. All rights reserved.
//

#include "Utils.h"


const GLubyte* Utils::getGLSLVersion(void) {
    return glGetString( GL_SHADING_LANGUAGE_VERSION );
}

const GLubyte* Utils::getGLRenderer(void) {
    return glGetString(GL_RENDERER);
}

const GLubyte* Utils::getGLVendor(void) {
    return glGetString(GL_VENDOR);
}

const GLubyte* Utils::getGLVersion(void) {
    return glGetString(GL_VERSION);
}


