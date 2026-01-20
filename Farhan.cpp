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

#define PI 3.141516

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
bool ambulancePlaying = false;

void buildings1()                          ///OID-6
{
    ///1st
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.6f);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.91f, 0.4f);
    glVertex2f(-0.91f, 0.6f);
    glVertex2f(-1.0f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.91f, 0.4f);
    glVertex2f(-0.89f, 0.4f);
    glVertex2f(-0.89f, 0.57f);
    glVertex2f(-0.91f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 0.47f);
    glVertex2f(-0.97f, 0.47f);
    glVertex2f(-0.97f, 0.52f);
    glVertex2f(-1.0f, 0.52f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.96f, 0.47f);
    glVertex2f(-0.93f, 0.47f);
    glVertex2f(-0.93f, 0.52f);
    glVertex2f(-0.96f, 0.52f);
    glEnd();

    ///2
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.0f, 0.6f);
    glVertex2f(-0.86f, 0.4f);
    glVertex2f(-0.76f, 0.4f);
    glVertex2f(-0.76f, 0.65f);
    glVertex2f(-0.86f, 0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.4f);
    glVertex2f(-0.76f, 0.4f);
    glVertex2f(-0.73f, 0.4f);
    glVertex2f(-0.73f, 0.62f);
    glVertex2f(-0.76f, 0.65f);
    glEnd();

    ///windows
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.84f, 0.43f);
    glVertex2f(-0.81f, 0.43f);
    glVertex2f(-0.81f, 0.48f);
    glVertex2f(-0.84f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 0.43f);
    glVertex2f(-0.77f, 0.43f);
    glVertex2f(-0.77f, 0.48f);
    glVertex2f(-0.8f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.84f, 0.5f);
    glVertex2f(-0.81f, 0.5f);
    glVertex2f(-0.81f, 0.55f);
    glVertex2f(-0.84f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.77f, 0.5f);
    glVertex2f(-0.77f, 0.55f);
    glVertex2f(-0.8f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.84f, 0.57f);
    glVertex2f(-0.81f, 0.57f);
    glVertex2f(-0.81f, 0.62f);
    glVertex2f(-0.84f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 0.57f);
    glVertex2f(-0.77f, 0.57f);
    glVertex2f(-0.77f, 0.62f);
    glVertex2f(-0.8f, 0.62f);
    glEnd();

    ///3
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex2f(-0.72f, 0.4f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.62f, 0.71f);
    glVertex2f(-0.72f, 0.71f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.4f, 0.0f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.59f, 0.4f);
    glVertex2f(-0.59f, 0.65f);
    glVertex2f(-0.62f, 0.71f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.43f);
    glVertex2f(-0.67f, 0.43f);
    glVertex2f(-0.67f, 0.48f);
    glVertex2f(-0.7f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.66f, 0.43f);
    glVertex2f(-0.63f, 0.43f);
    glVertex2f(-0.63f, 0.48f);
    glVertex2f(-0.66f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.67f, 0.5f);
    glVertex2f(-0.67f, 0.55f);
    glVertex2f(-0.7f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.66f, 0.5f);
    glVertex2f(-0.63f, 0.5f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.66f, 0.55f);
    glEnd();

    ///p3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.57f);
    glVertex2f(-0.67f, 0.57f);
    glVertex2f(-0.67f, 0.62f);
    glVertex2f(-0.7f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.66f, 0.57f);
    glVertex2f(-0.63f, 0.57f);
    glVertex2f(-0.63f, 0.62f);
    glVertex2f(-0.66f, 0.62f);
    glEnd();

    ///p4
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.64f);
    glVertex2f(-0.67f, 0.64f);
    glVertex2f(-0.67f, 0.69f);
    glVertex2f(-0.7f, 0.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.66f, 0.64f);
    glVertex2f(-0.63f, 0.64f);
    glVertex2f(-0.63f, 0.69f);
    glVertex2f(-0.66f, 0.69f);
    glEnd();

    ///4
    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.0f, 0.0f);
    glVertex2f(-0.58f, 0.4f);
    glVertex2f(-0.48f, 0.4f);
    glVertex2f(-0.48f, 0.5f);
    glVertex2f(-0.58f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-0.48f, 0.4f);
    glVertex2f(-0.47f, 0.4f);
    glVertex2f(-0.47f, 0.48f);
    glVertex2f(-0.48f, 0.5f);
    glEnd();

    ///windows
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.56f, 0.43f);
    glVertex2f(-0.53f, 0.43f);
    glVertex2f(-0.53f, 0.48f);
    glVertex2f(-0.56f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.52f, 0.43f);
    glVertex2f(-0.49f, 0.43f);
    glVertex2f(-0.49f, 0.48f);
    glVertex2f(-0.52f, 0.48f);
    glEnd();

    ///5
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-0.45f, 0.4f);
    glVertex2f(-0.35f, 0.4f);
    glVertex2f(-0.35f, 0.72f);
    glVertex2f(-0.45f, 0.72f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.3f);
    glVertex2f(-0.35f, 0.4f);
    glVertex2f(-0.33f, 0.4f);
    glVertex2f(-0.33f, 0.67f);
    glVertex2f(-0.35f, 0.72f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.43f, 0.43f);
    glVertex2f(-0.4f, 0.43f);
    glVertex2f(-0.4f, 0.48f);
    glVertex2f(-0.43f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.39f, 0.43f);
    glVertex2f(-0.36f, 0.43f);
    glVertex2f(-0.36f, 0.48f);
    glVertex2f(-0.39f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.43f, 0.5f);
    glVertex2f(-0.4f, 0.5f);
    glVertex2f(-0.4f, 0.55f);
    glVertex2f(-0.43f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.39f, 0.5f);
    glVertex2f(-0.36f, 0.5f);
    glVertex2f(-0.36f, 0.55f);
    glVertex2f(-0.39f, 0.55f);
    glEnd();

    ///p3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.43f, 0.57f);
    glVertex2f(-0.4f, 0.57f);
    glVertex2f(-0.4f, 0.62f);
    glVertex2f(-0.43f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.39f, 0.57f);
    glVertex2f(-0.36f, 0.57f);
    glVertex2f(-0.36f, 0.62f);
    glVertex2f(-0.39f, 0.62f);
    glEnd();

    ///p4
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.43f, 0.64f);
    glVertex2f(-0.4f, 0.64f);
    glVertex2f(-0.4f, 0.69f);
    glVertex2f(-0.43f, 0.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.39f, 0.64f);
    glVertex2f(-0.36f, 0.64f);
    glVertex2f(-0.36f, 0.69f);
    glVertex2f(-0.39f, 0.69f);
    glEnd();

    ///6
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.0f, 0.3f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.3f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.2f);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.18f, 0.4f);
    glVertex2f(-0.18f, 0.57f);
    glVertex2f(-0.2f, 0.6f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.28f, 0.43f);
    glVertex2f(-0.25f, 0.43f);
    glVertex2f(-0.25f, 0.48f);
    glVertex2f(-0.28f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.24f, 0.43f);
    glVertex2f(-0.21f, 0.43f);
    glVertex2f(-0.21f, 0.48f);
    glVertex2f(-0.24f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.28f, 0.5f);
    glVertex2f(-0.25f, 0.5f);
    glVertex2f(-0.25f, 0.55f);
    glVertex2f(-0.28f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.24f, 0.5f);
    glVertex2f(-0.21f, 0.5f);
    glVertex2f(-0.21f, 0.55f);
    glVertex2f(-0.24f, 0.55f);
    glEnd();

    ///7
    glBegin(GL_QUADS);
    glColor3f(0.9f, 0.9f, 0.0f);
    glVertex2f(-0.17f, 0.4f);
    glVertex2f(-0.07f, 0.4f);
    glVertex2f(-0.07f, 0.65f);
    glVertex2f(-0.17f, 0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.7f, 0.0f);
    glVertex2f(-0.07f, 0.4f);
    glVertex2f(-0.06f, 0.4f);
    glVertex2f(-0.06f, 0.62f);
    glVertex2f(-0.07f, 0.65f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.16f, 0.43f);
    glVertex2f(-0.13f, 0.43f);
    glVertex2f(-0.13f, 0.48f);
    glVertex2f(-0.16f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.12f, 0.43f);
    glVertex2f(-0.09f, 0.43f);
    glVertex2f(-0.09f, 0.48f);
    glVertex2f(-0.12f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.16f, 0.5f);
    glVertex2f(-0.13f, 0.5f);
    glVertex2f(-0.13f, 0.55f);
    glVertex2f(-0.16f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.12f, 0.5f);
    glVertex2f(-0.09f, 0.5f);
    glVertex2f(-0.09f, 0.55f);
    glVertex2f(-0.12f, 0.55f);
    glEnd();

    ///p3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.16f, 0.57f);
    glVertex2f(-0.13f, 0.57f);
    glVertex2f(-0.13f, 0.62f);
    glVertex2f(-0.16f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.12f, 0.57f);
    glVertex2f(-0.09f, 0.57f);
    glVertex2f(-0.09f, 0.62f);
    glVertex2f(-0.12f, 0.62f);
    glEnd();

    ///8
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.4f, 0.4f);
    glVertex2f(-0.04f, 0.4f);
    glVertex2f(0.04f, 0.4f);
    glVertex2f(0.04f, 0.71f);
    glVertex2f(-0.04f, 0.71f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.1f, 0.1f);
    glVertex2f(0.04f, 0.4f);
    glVertex2f(0.043f, 0.4f);
    glVertex2f(0.043f, 0.65f);
    glVertex2f(0.04f, 0.71f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.03f, 0.43f);
    glVertex2f(-0.01f, 0.43f);
    glVertex2f(-0.01f, 0.48f);
    glVertex2f(-0.03f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.01f, 0.43f);
    glVertex2f(0.03f, 0.43f);
    glVertex2f(0.03f, 0.48f);
    glVertex2f(0.01f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.03f, 0.5f);
    glVertex2f(-0.01f, 0.5f);
    glVertex2f(-0.01f, 0.55f);
    glVertex2f(-0.03f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.01f, 0.5f);
    glVertex2f(0.03f, 0.5f);
    glVertex2f(0.03f, 0.55f);
    glVertex2f(0.01f, 0.55f);
    glEnd();

    ///p3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.03f, 0.57f);
    glVertex2f(-0.01f, 0.57f);
    glVertex2f(-0.01f, 0.62f);
    glVertex2f(-0.03f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.01f, 0.57f);
    glVertex2f(0.03f, 0.57f);
    glVertex2f(0.03f, 0.62f);
    glVertex2f(0.01f, 0.62f);
    glEnd();

    ///p4
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.03f, 0.64f);
    glVertex2f(-0.01f, 0.64f);
    glVertex2f(-0.01f, 0.69f);
    glVertex2f(-0.03f, 0.69f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.01f, 0.64f);
    glVertex2f(0.03f, 0.64f);
    glVertex2f(0.03f, 0.69f);
    glVertex2f(0.01f, 0.69f);
    glEnd();

    ///9
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.0f, 0.0f);
    glVertex2f(0.08f, 0.4f);
    glVertex2f(0.18f, 0.4f);
    glVertex2f(0.18f, 0.6f);
    glVertex2f(0.08f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.0f);
    glVertex2f(0.07f, 0.4f);
    glVertex2f(0.08f, 0.4f);
    glVertex2f(0.08f, 0.6f);
    glVertex2f(0.07f, 0.55f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.09f, 0.43f);
    glVertex2f(0.12f, 0.43f);
    glVertex2f(0.12f, 0.48f);
    glVertex2f(0.09f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.13f, 0.43f);
    glVertex2f(0.16f, 0.43f);
    glVertex2f(0.16f, 0.48f);
    glVertex2f(0.13f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.09f, 0.5f);
    glVertex2f(0.12f, 0.5f);
    glVertex2f(0.12f, 0.55f);
    glVertex2f(0.09f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.13f, 0.5f);
    glVertex2f(0.16f, 0.5f);
    glVertex2f(0.16f, 0.55f);
    glVertex2f(0.13f, 0.55f);
    glEnd();

    ///10
    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.7f, 0.7f);
    glVertex2f(0.22f, 0.4f);
    glVertex2f(0.32f, 0.4f);
    glVertex2f(0.32f, 0.65f);
    glVertex2f(0.22f, 0.65f);
    glEnd();

    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(0.22f, 0.4f);
    glVertex2f(0.22f, 0.65f);
    glVertex2f(0.2f, 0.62f);
    glEnd();

    ///windows
    ///p1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.24f, 0.43f);
    glVertex2f(0.27f, 0.43f);
    glVertex2f(0.27f, 0.48f);
    glVertex2f(0.24f, 0.48f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.28f, 0.43f);
    glVertex2f(0.31f, 0.43f);
    glVertex2f(0.31f, 0.48f);
    glVertex2f(0.28f, 0.48f);
    glEnd();

    ///p2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.24f, 0.5f);
    glVertex2f(0.27f, 0.5f);
    glVertex2f(0.27f, 0.55f);
    glVertex2f(0.24f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.28f, 0.5f);
    glVertex2f(0.31f, 0.5f);
    glVertex2f(0.31f, 0.55f);
    glVertex2f(0.28f, 0.55f);
    glEnd();

    ///p3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.24f, 0.57f);
    glVertex2f(0.27f, 0.57f);
    glVertex2f(0.27f, 0.62f);
    glVertex2f(0.24f, 0.62f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.28f, 0.57f);
    glVertex2f(0.31f, 0.57f);
    glVertex2f(0.31f, 0.62f);
    glVertex2f(0.28f, 0.62f);
    glEnd();
}
/////////////////////////////////////train////////////////////////
float r_l_train_position=0;
float r_l_train_speed=0.01;

void r_l_train()
{
glPushMatrix();
    glRotatef(180,0,1,0);
    glTranslatef(r_l_train_position-0.8,0,0);
    glScalef(-1,1,0);

glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.01, 0.695);
    glVertex2f(0.05, 0.695);
    glVertex2f(0.05 ,0.699);
    glVertex2f(0.01, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.025, 0.677);
    glVertex2f(0.028, 0.677);
    glVertex2f(0.05 ,0.685);
    glVertex2f(0.045, 0.685);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.045, 0.685);
    glVertex2f(0.05, 0.685);
    glVertex2f(0.025 ,0.699);
    glVertex2f(0.023, 0.699);
    glEnd();

////////////////////////////////////////////body 1
glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.0, 0.67);
    glVertex2f(0.1, 0.67);
    glVertex2f(.1 ,0.677);
    glVertex2f(0, 0.677);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.0, 0.63);
    glVertex2f(0.1, 0.63);
    glVertex2f(.1 ,0.67);
    glVertex2f(0, 0.67);
    glEnd();

    /////////////////////dore1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.01, 0.635);
    glVertex2f(0.025, 0.635);
    glVertex2f(.025 ,0.665);
    glVertex2f(0.01, 0.665);
    glEnd();
    //////////////////////windows1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.03, 0.64);
    glVertex2f(0.06, 0.64);
    glVertex2f(.06 ,0.665);
    glVertex2f(0.03, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.065, 0.635);
    glVertex2f(0.08, 0.635);
    glVertex2f(.08 ,0.665);
    glVertex2f(0.065, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.085, 0.64);
    glVertex2f(0.1, 0.64);
    glVertex2f(.1,0.665);
    glVertex2f(0.085, 0.665);
    glEnd();
    /////////////////////////////////////////body 2
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.105, 0.63);
    glVertex2f(0.2, 0.63);
    glVertex2f(.2 ,0.67);
    glVertex2f(0.105, 0.67);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.105, 0.67);
    glVertex2f(0.2, 0.67);
    glVertex2f(.2 ,0.677);
    glVertex2f(0.105, 0.677);
    glEnd();
    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.11, 0.635);
    glVertex2f(0.125, 0.635);
    glVertex2f(.125 ,0.665);
    glVertex2f(0.11, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.13, 0.64);
    glVertex2f(0.16, 0.64);
    glVertex2f(.16 ,0.665);
    glVertex2f(0.13, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.165, 0.635);
    glVertex2f(0.18, 0.635);
    glVertex2f(.18 ,0.665);
    glVertex2f(0.165, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.185, 0.64);
    glVertex2f(0.2, 0.64);
    glVertex2f(.2,0.665);
    glVertex2f(0.185, 0.665);
    glEnd();
    /////////////////////////////body 3
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.205, 0.63);
    glVertex2f(0.3, 0.63);
    glVertex2f(.3 ,0.67);
    glVertex2f(0.205, 0.67);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.205, 0.67);
    glVertex2f(0.3, 0.67);
    glVertex2f(.3,0.677);
    glVertex2f(0.205, 0.677);
    glEnd();
    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.21, 0.635);
    glVertex2f(0.225, 0.635);
    glVertex2f(.225 ,0.665);
    glVertex2f(0.21, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.23, 0.64);
    glVertex2f(0.26, 0.64);
    glVertex2f(.26 ,0.665);
    glVertex2f(0.23, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.265, 0.635);
    glVertex2f(0.28, 0.635);
    glVertex2f(.28 ,0.665);
    glVertex2f(0.265, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.285, 0.64);
    glVertex2f(0.3, 0.64);
    glVertex2f(.3,0.665);
    glVertex2f(0.285, 0.665);
    glEnd();
    //////////////////////////////////////body 4

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.37, 0.695);
    glVertex2f(0.41, 0.695);
    glVertex2f(0.41 ,0.699);
    glVertex2f(0.37, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.389, 0.677);
    glVertex2f(0.391, 0.677);
    glVertex2f(0.41 ,0.685);
    glVertex2f(0.399, 0.685);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.40, 0.685);
    glVertex2f(0.41, 0.685);
    glVertex2f(0.391 ,0.699);
    glVertex2f(0.389, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.305, 0.67);
    glVertex2f(0.41, 0.67);
    glVertex2f(.41 ,0.677);
    glVertex2f(0.305, 0.677);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.305, 0.63);
    glVertex2f(0.41, 0.63);
    glVertex2f(.41,0.67);
    glVertex2f(0.305, 0.67);
    glEnd();

    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.31, 0.635);
    glVertex2f(0.325, 0.635);
    glVertex2f(.325 ,0.665);
    glVertex2f(0.31, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.33, 0.64);
    glVertex2f(0.36, 0.64);
    glVertex2f(.36 ,0.665);
    glVertex2f(0.33, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.365, 0.635);
    glVertex2f(0.38, 0.635);
    glVertex2f(.38 ,0.665);
    glVertex2f(0.365, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.385, 0.64);
    glVertex2f(0.4, 0.64);
    glVertex2f(.4,0.665);
    glVertex2f(0.385, 0.665);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    // glPopMatrix();
}

float l_r_train_position=0;
float l_r_train_speed=0.02;


void l_r_train(){

glColor3ub(155,150,150);
glPushMatrix();
    glRotatef(0,0,1,0);
    glTranslatef(l_r_train_position-0.6,-0.0,0);




glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.01, 0.695);
    glVertex2f(0.05, 0.695);
    glVertex2f(0.05 ,0.699);
    glVertex2f(0.01, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.025, 0.677);
    glVertex2f(0.028, 0.677);
    glVertex2f(0.05 ,0.685);
    glVertex2f(0.045, 0.685);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.045, 0.685);
    glVertex2f(0.05, 0.685);
    glVertex2f(0.025 ,0.699);
    glVertex2f(0.023, 0.699);
    glEnd();

////////////////////////////////////////////body 1
glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.0, 0.67);
    glVertex2f(0.1, 0.67);
    glVertex2f(.1 ,0.677);
    glVertex2f(0, 0.677);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.0, 0.63);
    glVertex2f(0.1, 0.63);
    glVertex2f(.1 ,0.67);
    glVertex2f(0, 0.67);
    glEnd();

    /////////////////////dore1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.01, 0.635);
    glVertex2f(0.025, 0.635);
    glVertex2f(.025 ,0.665);
    glVertex2f(0.01, 0.665);
    glEnd();
    //////////////////////windows1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.03, 0.64);
    glVertex2f(0.06, 0.64);
    glVertex2f(.06 ,0.665);
    glVertex2f(0.03, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.065, 0.635);
    glVertex2f(0.08, 0.635);
    glVertex2f(.08 ,0.665);
    glVertex2f(0.065, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.085, 0.64);
    glVertex2f(0.1, 0.64);
    glVertex2f(.1,0.665);
    glVertex2f(0.085, 0.665);
    glEnd();
    /////////////////////////////////////////body 2
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.105, 0.63);
    glVertex2f(0.2, 0.63);
    glVertex2f(.2 ,0.67);
    glVertex2f(0.105, 0.67);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.105, 0.67);
    glVertex2f(0.2, 0.67);
    glVertex2f(.2 ,0.677);
    glVertex2f(0.105, 0.677);
    glEnd();
    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.11, 0.635);
    glVertex2f(0.125, 0.635);
    glVertex2f(.125 ,0.665);
    glVertex2f(0.11, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.13, 0.64);
    glVertex2f(0.16, 0.64);
    glVertex2f(.16 ,0.665);
    glVertex2f(0.13, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.165, 0.635);
    glVertex2f(0.18, 0.635);
    glVertex2f(.18 ,0.665);
    glVertex2f(0.165, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.185, 0.64);
    glVertex2f(0.2, 0.64);
    glVertex2f(.2,0.665);
    glVertex2f(0.185, 0.665);
    glEnd();
    /////////////////////////////body 3
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.205, 0.63);
    glVertex2f(0.3, 0.63);
    glVertex2f(.3 ,0.67);
    glVertex2f(0.205, 0.67);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.205, 0.67);
    glVertex2f(0.3, 0.67);
    glVertex2f(.3,0.677);
    glVertex2f(0.205, 0.677);
    glEnd();
    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.21, 0.635);
    glVertex2f(0.225, 0.635);
    glVertex2f(.225 ,0.665);
    glVertex2f(0.21, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.23, 0.64);
    glVertex2f(0.26, 0.64);
    glVertex2f(.26 ,0.665);
    glVertex2f(0.23, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.265, 0.635);
    glVertex2f(0.28, 0.635);
    glVertex2f(.28 ,0.665);
    glVertex2f(0.265, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.285, 0.64);
    glVertex2f(0.3, 0.64);
    glVertex2f(.3,0.665);
    glVertex2f(0.285, 0.665);
    glEnd();
    //////////////////////////////////////body 4

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.37, 0.695);
    glVertex2f(0.41, 0.695);
    glVertex2f(0.41 ,0.699);
    glVertex2f(0.37, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.389, 0.677);
    glVertex2f(0.391, 0.677);
    glVertex2f(0.41 ,0.685);
    glVertex2f(0.399, 0.685);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.40, 0.685);
    glVertex2f(0.41, 0.685);
    glVertex2f(0.391 ,0.699);
    glVertex2f(0.389, 0.699);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.305, 0.67);
    glVertex2f(0.41, 0.67);
    glVertex2f(.41 ,0.677);
    glVertex2f(0.305, 0.677);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(0.305, 0.63);
    glVertex2f(0.41, 0.63);
    glVertex2f(.41,0.67);
    glVertex2f(0.305, 0.67);
    glEnd();

    /////////////////////dore3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.31, 0.635);
    glVertex2f(0.325, 0.635);
    glVertex2f(.325 ,0.665);
    glVertex2f(0.31, 0.665);
    glEnd();
    //////////////////////windows3
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.33, 0.64);
    glVertex2f(0.36, 0.64);
    glVertex2f(.36 ,0.665);
    glVertex2f(0.33, 0.665);
    glEnd();
/////////////////////dore2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.365, 0.635);
    glVertex2f(0.38, 0.635);
    glVertex2f(.38 ,0.665);
    glVertex2f(0.365, 0.665);
    glEnd();
    //////////////////////windows2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.385, 0.64);
    glVertex2f(0.4, 0.64);
    glVertex2f(.4,0.665);
    glVertex2f(0.385, 0.665);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    // glPopMatrix();

}

void bridge()
{
   glBegin(GL_QUADS);
    glColor3f(0.5f, 0.5f, 0.5f);   // gray color
    glVertex2f(-1, 0.6);
    glVertex2f(1, 0.6);
    glVertex2f(1 ,0.63);
    glVertex2f(-1, 0.63);
   glEnd();

}

void Wire11()
{glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-1, 0.7);
    glVertex2f(1, 0.7);
    glVertex2f(1 ,0.702);
    glVertex2f(-1, 0.702);
    glEnd();

}


void bridge_wirepillar()

{
 float L = 140.0;
    float l = 40.0;

    glScalef(0.005,0.005,0);

    // left side pillars with lights
    for (int i = 0; i <= 6; i++)   /// pillar 1 to 7
    {
        float x = 62.0f - i*l;

        // draw pillar line
        glColor3ub(0,0,0);
        glLineWidth(6.0f);   // uniform pillar width
        glBegin(GL_LINES);
        glVertex2f(x,260.0f-L);
        glVertex2f(x,282.0f-L);
        glEnd();

        // light bulb (sphere) on top of pillar
        glPushMatrix();
        glTranslatef(x, 282.0f-L, 0.0f);   // move to top of pillar
        glColor3ub(255, 255, 0);           // yellow light
        glutSolidSphere(3, 20, 20);        // smaller bulb (radius 3)
        glPopMatrix();
    }

    // right side pillars with lights
    float right_x[] = {62.0f + l, 62.0f + 2.2f*l, 62.0f + 3*l};

    for (int j = 0; j < 3; j++)
    {
        float x = right_x[j];

        // draw pillar line
        glColor3ub(0,0,0);
        glLineWidth(6.0f);   // uniform pillar width
        glBegin(GL_LINES);
        glVertex2f(x,260.0f-L);
        glVertex2f(x,282.0f-L);
        glEnd();

        // light bulb on top
        glPushMatrix();
        glTranslatef(x, 282.0f-L, 0.0f);
        glColor3ub(255,255,0);
        glutSolidSphere(3, 20, 20);        // smaller bulb (radius 3)
        glPopMatrix();
    }

    glLoadIdentity();
}
////////////////////////////////bench

void road_border6()
{ glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-1, 0.49);
    glVertex2f(1, 0.49);
    glVertex2f(1 ,0.50);
    glVertex2f(-1, 0.50);
    glEnd();


//////////////////////////////////////white line
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-1, 0.49);
    glVertex2f(-0.98, 0.49);
    glVertex2f(-0.98 ,0.50);
    glVertex2f(-1, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-0.9, 0.49);
    glVertex2f(-0.8, 0.49);
    glVertex2f(-0.8 ,0.50);
    glVertex2f(-0.9, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-0.7, 0.49);
    glVertex2f(-0.6, 0.49);
    glVertex2f(-0.6 ,0.50);
    glVertex2f(-0.7, 0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-0.5, 0.49);
    glVertex2f(-0.4, 0.49);
    glVertex2f(-0.4 ,0.50);
    glVertex2f(-0.5, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-0.3, 0.49);
    glVertex2f(-0.2, 0.49);
    glVertex2f(-0.2 ,0.50);
    glVertex2f(-0.3, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-0.1, 0.49);
    glVertex2f(-0.05, 0.49);
    glVertex2f(-0.05 ,0.50);
    glVertex2f(-0.1, 0.50);
    glEnd();
glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.0, 0.49);
    glVertex2f(0.05, 0.49);
    glVertex2f(0.05,0.50);
    glVertex2f(0.0, 0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.15, 0.49);
    glVertex2f(0.2, 0.49);
    glVertex2f(0.2 ,0.50);
    glVertex2f(0.15, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.35, 0.49);
    glVertex2f(0.4, 0.49);
    glVertex2f(0.4 ,0.50);
    glVertex2f(0.35, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.55, 0.49);
    glVertex2f(0.6, 0.49);
    glVertex2f(0.6 ,0.50);
    glVertex2f(0.55, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.65, 0.49);
    glVertex2f(0.7, 0.49);
    glVertex2f(0.7 ,0.50);
    glVertex2f(0.65, 0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(0.85, 0.49);
    glVertex2f(0.9, 0.49);
    glVertex2f(0.9 ,0.50);
    glVertex2f(0.85, 0.50);
    glEnd();
    }

int triangleAmount = 500;
float twicePi = 2.0f * PI;
float angle1=0.0;
float angle2=120.0;
float angle3=240.0;


void bus_wheel_circle(GLfloat cx, GLfloat cy, GLfloat radius, int r, int g, int b)
{
    glColor3ub(r,g,b);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            cx + (radius * cos(i *  twicePi / triangleAmount)),
            cy + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

}

    void road1()
    {glBegin(GL_QUADS);
    glColor3f(0.2,0.2,0.2);
    glVertex2f(-1, 0.30);
    glVertex2f(1, 0.30);
    glVertex2f(1 ,0.49);
    glVertex2f(-1, 0.49);
    glEnd();
        }
    float public_bus_position=0;
float public_bus_speed=0.01;
        void public_bus()
    {glPushMatrix();
    glRotatef(0,0,1,0);
    glTranslatef(public_bus_position-0.6,-0.0,0);
    ////////////////////////////body

        glBegin(GL_QUADS);
   glColor3f(1, 0, 0);
    glVertex2f(-.9, 0.47);
    glVertex2f(-0.67, 0.47);
    glVertex2f(-.67,0.55);
    glVertex2f(-0.9, 0.55);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(0, 0, 0);
    glVertex2f(-.89, 0.49);
    glVertex2f(-0.695, 0.49);
    glVertex2f(-.695 ,0.53);
    glVertex2f(-0.89, 0.53);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(0, 0, 0);
    glVertex2f(-.69, 0.48);
    glVertex2f(-0.67, 0.48);
    glVertex2f(-.67,0.53);
    glVertex2f(-0.69, 0.53);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(0, 0, 0);
   glVertex2f(-0.68, 0.545);
    glVertex2f(-.65, 0.545);
    glVertex2f(-.65,0.55);
    glVertex2f(-0.68, 0.55);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(0, 0, 0);
   glVertex2f(-0.658, 0.52);
    glVertex2f(-.65, 0.52);
    glVertex2f(-.65,0.55);
    glVertex2f(-0.658, 0.55);
    glEnd();

    ///////GLfloat cx, GLfloat cy, GLfloat radius, int r, int g, int b
    bus_wheel_circle(-0.87,0.47,0.015,1,1,1);
    bus_wheel_circle(-0.83,0.47,0.015,1,1,1);
    bus_wheel_circle(-0.71,0.47,0.015,1,1,1);

     glPopMatrix();
    glLoadIdentity();
    }

void road_marking()
    {
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(-1, 0.445);
    glVertex2f(-0.2, 0.445);
    glVertex2f(-.2 ,0.45);
    glVertex2f(-1, 0.45);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(-0.15, 0.445);
    glVertex2f(-0.1, 0.445);
    glVertex2f(-.1 ,0.45);
    glVertex2f(-0.15, 0.45);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(-0.08, 0.445);
    glVertex2f(-0.05, 0.445);
    glVertex2f(-.05,0.45);
    glVertex2f(-0.08, 0.45);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(-0.03, 0.445);
    glVertex2f(0.01, 0.445);
    glVertex2f(0.01,0.45);
    glVertex2f(-0.03, 0.45);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(0.03, 0.445);
    glVertex2f(0.07, 0.445);
    glVertex2f(.07,0.45);
    glVertex2f(0.03, 0.45);
    glEnd();
    glBegin(GL_QUADS);
   glColor3f(255, 255, 0);
    glVertex2f(0.1, 0.445);
    glVertex2f(1, 0.445);
    glVertex2f(1 ,0.45);
    glVertex2f(0.1, 0.45);
    glEnd();

        }////////////////////////////////////////////pillar fence
void p_fence()                            ///OID-15
{   glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-1, 0.52);
    glVertex2f(-0.15, 0.52);
    glVertex2f(-0.15 ,0.522);
    glVertex2f(-1, 0.522);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(0.15, 0.52);
    glVertex2f(1, 0.52);
    glVertex2f(1 ,0.522);
    glVertex2f(0.15, 0.522);
    glEnd();

    float L = 0.05;
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.98f,0.52f);
    glVertex2f(-0.98f,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.94f,0.52f);
    glVertex2f(-0.94f,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.9f,0.52f);
    glVertex2f(-0.9f,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f,0.52f);
    glVertex2f(-0.85f,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+L,0.52f);
    glVertex2f(-0.85f+L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.84f+2*L,0.52f);
    glVertex2f(-0.84f+2*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+3*L,0.52f);
    glVertex2f(-0.85f+3*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+4*L,0.52f);
    glVertex2f(-0.85f+4*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+5*L,0.52f);
    glVertex2f(-0.85f+5*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.84f+6*L,0.52f);
    glVertex2f(-0.84f+6*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+7*L,0.52f);
    glVertex2f(-0.85f+7*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+8*L,0.52f);
    glVertex2f(-0.85f+8*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+9*L,0.52f);
    glVertex2f(-0.85f+9*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.84f+10*L,0.52f);
    glVertex2f(-0.84f+10*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+11*L,0.52f);
    glVertex2f(-0.85f+11*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+12*L,0.52f);
    glVertex2f(-0.85f+12*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+13*L,0.52f);
    glVertex2f(-0.85f+13*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+14*L,0.52f);
    glVertex2f(-0.85f+14*L,0.50f);
    glEnd();

    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+21*L,0.52f);
    glVertex2f(-0.85f+21*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+22*L,0.52f);
    glVertex2f(-0.85f+22*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+23*L,0.52f);
    glVertex2f(-0.85f+23*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+24*L,0.52f);
    glVertex2f(-0.85f+24*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+25*L,0.52f);
    glVertex2f(-0.85f+25*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+26*L,0.52f);
    glVertex2f(-0.85f+26*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+27*L,0.52f);
    glVertex2f(-0.85f+27*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+28*L,0.52f);
    glVertex2f(-0.85f+28*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+29*L,0.52f);
    glVertex2f(-0.85f+29*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+30*L,0.52f);
    glVertex2f(-0.85f+30*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+31*L,0.52f);
    glVertex2f(-0.85f+31*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+32*L,0.52f);
    glVertex2f(-0.85f+32*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+33*L,0.52f);
    glVertex2f(-0.85f+33*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+34*L,0.52f);
    glVertex2f(-0.85f+34*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+35*L,0.52f);
    glVertex2f(-0.85f+35*L,0.50f);
    glEnd();
    glColor3ub(57,43,23);
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2f(-0.85f+36*L,0.52f);
    glVertex2f(-0.85f+36*L,0.50f);
    glEnd();



}
//////////////////////////////////////////////////////
void pillar()
{   //////p1
glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
     glVertex2f(-0.97, 0.57);
    glVertex2f(-0.95 ,0.57);
    glVertex2f(-0.92 ,0.63);
    glVertex2f(-1, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(-0.97, 0.5);
    glVertex2f(-0.95, 0.5);
    glVertex2f(-0.95 ,0.57);
    glVertex2f(-0.97, 0.57);
    glEnd();

//////p2

glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
     glVertex2f(-0.77, 0.57);
    glVertex2f(-0.75 ,0.57);
    glVertex2f(-0.72 ,0.63);
    glVertex2f(-0.8, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(-0.77, 0.5);
    glVertex2f(-0.75, 0.5);
    glVertex2f(-0.75 ,0.57);
    glVertex2f(-0.77, 0.57);
    glEnd();
    //////p3


glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
     glVertex2f(-0.57, 0.57);
    glVertex2f(-0.55 ,0.57);
    glVertex2f(-0.52 ,0.63);
    glVertex2f(-0.6, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(-0.57, 0.5);
    glVertex2f(-0.55, 0.5);
    glVertex2f(-0.55 ,0.57);
    glVertex2f(-0.57, 0.57);
    glEnd();
    //////p4

glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
     glVertex2f(-0.37, 0.57);
    glVertex2f(-0.35 ,0.57);
    glVertex2f(-0.32 ,0.63);
    glVertex2f(-0.4, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(-0.37, 0.5);
    glVertex2f(-0.35, 0.5);
    glVertex2f(-0.35 ,0.57);
    glVertex2f(-0.37, 0.57);
    glEnd();
    //////p5

glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
     glVertex2f(-0.17, 0.57);
    glVertex2f(-0.15 ,0.57);
    glVertex2f(-0.12 ,0.63);
    glVertex2f(-0.2, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(-0.17, 0.5);
    glVertex2f(-0.15, 0.5);
    glVertex2f(-0.15 ,0.57);
    glVertex2f(-0.17, 0.57);
    glEnd();
    //////p6


glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(0.15 ,0.57);
     glVertex2f(0.17, 0.57);
    glVertex2f(0.2 ,0.63);
    glVertex2f(0.12, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(0.17, 0.5);
    glVertex2f(0.15, 0.5);
    glVertex2f(0.15 ,0.57);
    glVertex2f(0.17, 0.57);
    glEnd();
    //////p7
glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(0.35 ,0.57);
     glVertex2f(0.37, 0.57);
    glVertex2f(0.4 ,0.63);
    glVertex2f(0.32, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(0.37, 0.5);
    glVertex2f(0.35, 0.5);
    glVertex2f(0.35 ,0.57);
    glVertex2f(0.37, 0.57);
    glEnd();
    //////p9
glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);
    glVertex2f(0.65 ,0.57);
     glVertex2f(0.67, 0.57);
    glVertex2f(0.7 ,0.63);
    glVertex2f(0.62, 0.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.00,0.17,0.20);

    glVertex2f(0.65, 0.5);
    glVertex2f(0.67, 0.5);
     glVertex2f(0.67, 0.57);
    glVertex2f(0.65 ,0.57);

    glEnd();


}


//////////////////////////////////////

void buildings()                          ///OID-6
{   ///////////////////////////////1st
  glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.6f);
    glVertex2f(0.0f, 0.50f);
    glVertex2f(0.1f, 0.50f);
    glVertex2f(0.1f, 0.80f);
    glVertex2f(0.0f, 0.80f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(0.1f, 0.50f);
    glVertex2f(0.15f, 0.50f);
    glVertex2f(0.15f, 0.78f);
    glVertex2f(0.1f, 0.80f);
    glEnd();
    //////////////////////////////////1st windows

glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(0.05f, 0.5f);
    glVertex2f(0.05f, 0.60f);
    glVertex2f(0.0f, 0.60f);
    glEnd();

glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.05f, 0.60f);
    glVertex2f(0.1f, 0.60f);
    glVertex2f(0.1f, 0.65f);
    glVertex2f(0.05f, 0.65f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.005f, 0.65f);
    glVertex2f(0.05f, 0.65f);
    glVertex2f(0.05f, 0.70f);
    glVertex2f(0.005f, 0.70f);
    glEnd();

glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.05f, 0.70f);
    glVertex2f(0.1f, 0.70f);
    glVertex2f(0.1f, 0.75f);
    glVertex2f(0.05f, 0.75f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.005f, 0.75f);
    glVertex2f(0.05f, 0.75f);
    glVertex2f(0.05f, 0.795f);
    glVertex2f(0.005f, 0.795f);
    glEnd();



    ///////////////////////////////1st
    glBegin(GL_QUADS);
     glColor3f(0.6f, 0.0f, 0.6f);
    glVertex2f(0.2f, 0.50f);
    glVertex2f(0.3f, 0.50f);
    glVertex2f(0.3f, 0.80f);
    glVertex2f(0.2f, 0.80f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.6f, 0.0f, 0.6f);
    glVertex2f(0.2f, 0.50f);
    glVertex2f(0.3f, 0.50f);
    glVertex2f(0.3f, 0.80f);
    glVertex2f(0.2f, 0.80f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.4f, 0.0f, 0.4f);
    glVertex2f(0.2f, 0.50f);
    glVertex2f(0.22f, 0.50f);
    glVertex2f(0.22f, 0.78f);
    glVertex2f(0.2f, 0.80f);
    glEnd();

    ///////////////////////////////1st
    glBegin(GL_QUADS);
     glColor3f(0.6f, 0.0f, 0.0f);
    glVertex2f(0.35f, 0.50f);
    glVertex2f(0.65f, 0.50f);
    glVertex2f(0.65f, 0.80f);
    glVertex2f(0.35f, 0.80f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.50f);
    glVertex2f(0.64f, 0.50f);
    glVertex2f(0.64f, 0.54f);
    glVertex2f(0.36f, 0.54f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.55f);
    glVertex2f(0.64f, 0.55f);
    glVertex2f(0.64f, 0.59f);
    glVertex2f(0.36f, 0.59f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.60f);
    glVertex2f(0.64f, 0.60f);
    glVertex2f(0.64f, 0.64f);
    glVertex2f(0.36f, 0.64f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.65f);
    glVertex2f(0.64f, 0.65f);
    glVertex2f(0.64f, 0.69f);
    glVertex2f(0.36f, 0.69f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.70f);
    glVertex2f(0.64f, 0.70f);
    glVertex2f(0.64f, 0.74f);
    glVertex2f(0.36f, 0.74f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36f, 0.75f);
    glVertex2f(0.64f, 0.75f);
    glVertex2f(0.64f, 0.79f);
    glVertex2f(0.36f, 0.79f);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(0.00,0.40,0.80);
    glVertex2f(0.42f, 0.50f);
    glVertex2f(0.45f, 0.50f);
    glVertex2f(0.45f, 0.79f);
    glVertex2f(0.42f, 0.79f);
    glEnd();
     glBegin(GL_QUADS);
     glColor3f(0.00,0.40,0.80);
    glVertex2f(0.55f, 0.50f);
    glVertex2f(0.57f, 0.50f);
    glVertex2f(0.57f, 0.79f);
    glVertex2f(0.55f, 0.79f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.6f, 0.0f, 0.3f);
    glVertex2f(0.42f, 0.80f);
    glVertex2f(0.57f, 0.80f);
    glVertex2f(0.57f, 0.85f);
    glVertex2f(0.42f, 0.85f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3f(0.6f, 0.6f, 0.6f);
   glVertex2f(0.42f, 0.85f);
    glVertex2f(0.57f, 0.85f);

     glVertex2f(0.5f, 0.90f);
    glVertex2f(0.5f, 0.90f);
    glEnd(); }

void day_Display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    buildings();
    buildings1();
    r_l_train();
    l_r_train();
    Wire11();
    bridge_wirepillar();
    bridge();
    road_border6();
    p_fence() ;
    pillar();
    road1();
    public_bus();
    road_marking();
//


    glFlush();  /// Render now
}

void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
        case '2':
        glutDisplayFunc(day_Display);
        break;
        
    glutPostRedisplay();
}

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


    glutDisplayFunc(day_Display);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();
    return 0;
}