//
//  Logger.h
//  OpenGL_Tutorial1
//
//  Created by Hooman Ostovari on 22/11/2013.
//  Copyright (c) 2013 Hooman Ostovari. All rights reserved.
//

#ifndef __OpenGL_Tutorial1__Logger__
#define __OpenGL_Tutorial1__Logger__

#include <iostream>


#endif /* defined(__OpenGL_Tutorial1__Logger__) */

using namespace std;

class Logger {
public:
    static void debug(const int numberOfArgs, ...);
    static void error(const int numberofArgs, ...);
};