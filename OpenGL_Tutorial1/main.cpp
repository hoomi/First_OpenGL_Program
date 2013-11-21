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
//#include "vgl.h"
#include "LoadShaders.h"
//#include <GL/freeglut.h>

#define BUFFER_OFFSET(x)  ((const void*) (x))




using namespace std;

enum VAO_IDs {Triangles, NumVAOs};
enum Buffer_IDs {ArrayBuffer, NumBuffers};
enum Attrib_IDs {vPosition = 0 };

GLuint VAOs[NumVAOs];
GLuint Buffers[NumBuffers];

const GLuint NumVertices = 6;

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


void init(void) {
    //This causes OpenGL to allocate some number of vertex array object names for our use
    //returns that number of names to us in VAOs
    glGenVertexArrays(NumVAOs,VAOs);
    glBindVertexArray(VAOs[Triangles]);
    GLfloat  vertices[NumVertices][2] = {
        { -0.90, -0.90 },  // Triangle 1
        {  0.85, -0.90 },
        { -0.90,  0.85 },
        {  0.90, -0.85 },  // Triangle 2
        {  0.90,  0.90 },
        { -0.85,  0.90 }
    };
    glGenBuffers(NumBuffers,Buffers);
    glBindBuffer(GL_ARRAY_BUFFER,Buffers[ArrayBuffer]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices),vertices,GL_STATIC_DRAW);
    ShaderInfo shaders[] = {
        {GL_VERTEX_SHADER, "triangles.vert"},
        {GL_FRAGMENT_SHADER, "triangles.frag"},
        {GL_NONE, NULL}
    };
    
    GLuint program = LoadShaders(shaders);
    glUseProgram(program);
    glVertexAttribPointer(vPosition,2,GL_FLOAT,GL_FALSE,0, BUFFER_OFFSET(0));
    glEnableVertexAttribArray(vPosition);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBindVertexArray(VAOs[Triangles]);
    glDrawArrays(GL_TRIANGLES, 0, NumVertices);
    glFlush();
}

int main(int argc, char** argv)
{
    initGLut(argc, argv);
    glewExperimental = GL_TRUE;
    if (glewInit()) {
        cout<<"Unable to initialize GLEW ....... exiting"<<endl;
        exit(EXIT_FAILURE);
    }
    init();
    glClearColor(0.1,0.3,0.5,0.5);
    glutDisplayFunc(display);
    //which is an infinite loop that works with the window and operating systems to process user input and other operations like that
    glutMainLoop();
}



