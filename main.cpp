#include <iostream>
#include <GLUT/glut.h>

#include <cmath>
#include <cstdio>

#include <OpenGL/gl.h>
#include <OpenGL/glu.h>




#include <vector>
#include <cstdlib>

#include <math.h>
#include <cstdlib>


void renderBitmapString(float x, float y, float z, void *font, const char *string) {
    char *c;
    glRasterPos3f(x, y, z);
    for (c = (char*)string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}

void Intro() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    // Set text color
    glColor3f(0, 0, 0); // Custom color

    renderBitmapString(-0.25f, 0.7f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "American International University-Bangladesh");
    renderBitmapString(-0.10f, 0.6f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "GRAPHICS PROJECT");
    renderBitmapString(-0.15f, 0.5f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "SECTION: I");
    renderBitmapString( 0.1f, 0.5f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "GROUP: 3");
    renderBitmapString(-0.15f, 0.3f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "SHADES OF CIVILIZATION");
    renderBitmapString(-0.25f, 0.20f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "COURSE TEACHER:   ZISHAN AHMED ONIK");
    renderBitmapString(-0.25f, 0.10f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "23-50616-1  -  MD. ASHIKUZZAMAN ANIK");
    renderBitmapString(-0.25f, 0.00f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "23-50577-1  -  KAZI MD. WAZEH ULLAH FARHAN");
    renderBitmapString(-0.25f, -0.10f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "23-52746-2  -  SURAIYA ZABIN");
    renderBitmapString(-0.25f, -0.2f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "23-50423-1  -  SABBIR HASAN TANIM");

    glFlush(); // Render now
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);
    glutInitWindowPosition(0,0);
    glutCreateWindow("");
    //gluOrtho2D(-z,1920,0,1080);
    //gluOrtho2D(0,1920,0,1080);


    glutDisplayFunc(Intro);
    glutMainLoop();
    return 0;
}