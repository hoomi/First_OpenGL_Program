//
//  main.cpp
//  OpenGL_Tutorial1
//
//  Created by Hooman Ostovari on 20/11/2013.
//  Copyright (c) 2013 Hooman Ostovari. All rights reserved.
//

#include <iostream>
#include <GL/glew.h>
#include <GLUT/glut.h>
//#include <GL/freeglut.h>




using namespace std;


void initGLut(int argc, char** argv) {
    //Initializes the GLUT library
    glutInit(&argc, argv);
    cout<<"1\n";
    //We only request that the window use the RGBA color space
    // Since we are using the GLUT framework from apple we have to include the version of OPENGL
    glutInitDisplayMode(GLUT_RGBA|GLUT_3_2_CORE_PROFILE);
    cout<<"2\n";
    // Defines the size of the window
    glutInitWindowSize(512, 512);
    cout<<"3\n";
    // This part is commented because we are not using the freeglut library
    // What it does is, it specifies the version of the OpenGL we are going to use
//    glutInitContextVersion(2, 1);
    cout<<"4\n";
    // This part is commented because we are not using the freeglut library
    // specify the type of OpenGL context
    // Context: "A complete set of OpenGL state variables. Note that framebuffer contents are not part of OpenGL state, but that the configuration of the framebuffer (and any associated renderbuffers) is."
//    glutInitContextProfile(GLUT_CORE_PROFILE);
    cout<<"5\n";
    // Creates the window
    glutCreateWindow(argv[0]);
    cout<<"6\n";
    
}

int main(int argc, char** argv)
{
    initGLut(argc, argv);
    //which is an infinite loop that works with the window and operating systems to process user input and other operations like that
    glutMainLoop();
}



