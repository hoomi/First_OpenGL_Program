//
//  Logger.cpp
//  OpenGL_Tutorial1
//
//  Created by Hooman Ostovari on 22/11/2013.
//  Copyright (c) 2013 Hooman Ostovari. All rights reserved.
//

#include <stdarg.h>
#include "Logger.h"

void Logger::debug(const int numberofArgs, ...) {
#if defined(_DEBUG) || defined(DEBUG)
    va_list ap;
    va_start(ap, numberofArgs);
    for(int j = 0;j<numberofArgs;j++) {
        cout<< va_arg(ap, char*);
    }
    va_end(ap);
    cout<<endl;
#endif
}

void Logger::error(const int numberofArgs, ...) {
#if defined(_DEBUG) || defined(DEBUG)
    va_list ap;
    va_start(ap, numberofArgs);
    for(int j = 0;j<numberofArgs;j++) {
        cerr<< va_arg(ap, char*);
    }
    va_end(ap);
    cerr<<endl;
#endif
}

