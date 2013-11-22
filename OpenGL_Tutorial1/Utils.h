//
//  Utils.h
//  OpenGL_Tutorial1
//
//  Created by Hooman Ostovari on 22/11/2013.
//  Copyright (c) 2013 Hooman Ostovari. All rights reserved.
//

#ifndef __OpenGL_Tutorial1__Utils__
#define __OpenGL_Tutorial1__Utils__

#include <iostream>
#include <GL/glew.h>

#endif /* defined(__OpenGL_Tutorial1__Utils__) */


class Utils {
public:
    static const GLubyte* getGLSLVersion(void);
    static const GLubyte* getGLVendor(void);
    static const GLubyte* getGLRenderer(void);
    static const GLubyte* getGLVersion(void);
};