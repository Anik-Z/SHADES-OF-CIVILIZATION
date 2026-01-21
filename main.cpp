#include <iostream>
#include <cmath>
#include <cstdio>

#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <vector>
#include <math.h>
#include<cstdio>
#define PI 3.141516
#include <cstdlib>
#include <string>


///---------------------------------------------------------------------------------------------------------------------------------------------------///
float _move = 0.0f;
float _move2 = 0.0f;
float cloudPosition=-1.0;
float cloudSpeed=0.005;
float car_position1 = 0;
float car_speed1=0.01;
float man1Position=-0.3f;
float man1Speed=+0.008;
float man2Position=-0.4f;
float man2Speed=0.012;
float man3Position=0.8f;
float man3Speed=0.01;
float man4Position=0.9f;
float man4Speed=0.015;
float suv_car_position1 = 0.0f;;
float suv_car_speed1=0.01;
bool  vehiclesRunning = true;
bool  redLightOn = false;
bool  greenLightOn = true;
float icePosition=0.0f;
float iceSpeed=0.02;
bool isSnow= false;
float move_ship_container =-0.0f;
float container_ship_speed = 0.5f;


void circle(float radius, float cX, float cY, float r, float g, float b)
{
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(r,g,b);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float x = radius * cos(A);
        float y = radius * sin(A);
        glVertex2f(x+cX,y+cY);
    }
}

void sky19()
{

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.8f, 1.0f);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(1.0f, 0.4f);
    glColor3ub(200,224,232);
    glVertex2f(1.0f, 1.0f);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, 1.0f);

    glEnd();
}

void hills()
{
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.75f, 0.80f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.9f, 0.40f);
    glVertex2f(-0.60f, 0.40f);
    glEnd();


//hill1
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.85f, 0.90f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-1.1f, 0.40f);
    glVertex2f(-0.70f, 0.40f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.5f, 0.85f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.7f, 0.40f);
    glVertex2f(-0.3f, 0.40f);
    glEnd();

//hill2
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.65f, 0.7f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.8f, 0.40f);
    glVertex2f(-0.50f, 0.40f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.85f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.4f, 0.40f);
    glVertex2f(0.1f, 0.40f);
    glEnd();


//hill3

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.35f, 0.8f);
     glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.6f, 0.40f);
    glVertex2f(-0.20f, 0.40f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.22f, 0.8f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.1f, 0.40f);
    glVertex2f(0.5f, 0.40f);
    glEnd();


//hill4
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.65f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.35f, 0.40f);
    glVertex2f(0.20f, 0.40f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.5f, 0.9f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.2f, 0.40f);
    glVertex2f(0.7f, 0.40f);
    glEnd();



//hill5
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.25f, 0.55f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.10f, 0.40f);
    glVertex2f(0.40f, 0.40f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.72f, 0.9f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.45f, 0.40f);
    glVertex2f(0.95f, 0.40f);
    glEnd();

//hill6
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.55f, 0.65f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.40f, 0.40f);
    glVertex2f(0.75f, 0.40f);
    glEnd();


//hill7
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.95f, 0.82f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.70f, 0.40f);
    glVertex2f(1.1f, 0.40f);
    glEnd();

}


void Wire()
{glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-1, 0.7);
    glVertex2f(1, 0.7);
    glVertex2f(1 ,0.702);
    glVertex2f(-1, 0.702);
    glEnd();

}


void river19()
{

    glBegin(GL_QUADS);
    glColor3f(.149,0.604, 0.839);
	glVertex2f(-1.0f,0.45f);
	glVertex2f(1.0f,0.45f);
	glVertex2f(1.0f,-0.85f);
    glVertex2f(-1.0f,-0.85f);
    glEnd();
}

 void road()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.5f);
    glVertex2f(-1.0f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.90f, 1.0f, 0.3f);

    glVertex2f(-1.0f, -0.67f);
    glVertex2f(-0.80f, -0.67f);
    glVertex2f(-0.80f, -0.7f);
    glVertex2f(-1.0f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.90f, 1.0f, 0.3f);

    glVertex2f(-0.60f, -0.67f);
    glVertex2f(-0.40f, -0.67f);
    glVertex2f(-0.40f, -0.7f);
    glVertex2f(-0.60f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.90f, 1.0f, 0.3f);

    glVertex2f(-0.20f, -0.67f);
    glVertex2f(0.00f, -0.67f);
    glVertex2f(0.00f, -0.7f);
    glVertex2f(-0.20f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.90f, 1.0f, 0.3f);

    glVertex2f(0.20f, -0.67f);
    glVertex2f(0.40f, -0.67f);
    glVertex2f(0.40f, -0.7f);
    glVertex2f(0.20f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.90f, 1.0f, 0.3f);
    glVertex2f(0.60f, -0.67f);
    glVertex2f(0.80f, -0.67f);
    glVertex2f(0.80f, -0.7f);
    glVertex2f(0.60f, -0.7f);
    glEnd();

}


void skatingroad()
{
    glBegin(GL_QUADS);
    glColor3f(209.0f / 255.0f, 227.0f / 255.0f, 255.0f / 255.0f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(1.0f, -0.5f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(-1.0f, -0.1f);
    glEnd();


}

void curvedBranch(float x0, float y0, float x1, float y1, float cx, float cy, float thickness) {
    int segments = 20;
    float t;

    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.3f, 0.2f, 0.0f);

    for (int i = 0; i <= segments; i++) {
        t = (float)i / segments;


        float x = (1 - t) * (1 - t) * x0 + 2 * (1 - t) * t * cx + t * t * x1;
        float y = (1 - t) * (1 - t) * y0 + 2 * (1 - t) * t * cy + t * t * y1;


        float dx = -(y1 - y0);
        float dy = (x1 - x0);
        float len = sqrt(dx * dx + dy * dy);
        dx = (dx / len) * (thickness * (1 - t));
        dy = (dy / len) * (thickness * (1 - t));

        glVertex2f(x + dx, y + dy);
        glVertex2f(x - dx, y - dy);
    }

    glEnd();
}


 void tree1()
{
    //tree1

    glScalef(1.5,1.50,0);
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.0f);
    glVertex2f(0.048f, -.1);
    glVertex2f(0.064f, -.1);
    glVertex2f(0.064f, 0.03);
    glVertex2f(0.048f, 0.03);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,-0.03);
    glVertex2f(0.081f,-0.03);
    glVertex2f(0.06f,0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,-0.02);
    glVertex2f(0.082f,-0.02);
    glVertex2f(0.07f,0.14);
    glEnd();

    glLoadIdentity();


    //tree2

    glScalef(-1.5,1.50,0);
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.0f);
    glVertex2f(0.048f, -.1);
    glVertex2f(0.064f, -.1);
    glVertex2f(0.064f, -0.03);
    glVertex2f(0.048f, -0.03);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,-0.03);
    glVertex2f(0.081f,-0.03);
    glVertex2f(0.06f,0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.03f,-0.02);
    glVertex2f(0.082f,-0.02);
    glVertex2f(0.07f,0.14);
    glEnd();

    glLoadIdentity();

//trunk
glBegin(GL_QUADS);
    glColor3f(0.3f, 0.2f, 0.0f);
    glVertex2f(0.59f,-0.15f);
    glVertex2f(0.633f,-0.15f);
    glVertex2f(0.623f,0.066f);
    glVertex2f(0.595f,0.066f);
    glEnd();
    //1left

    curvedBranch(
        0.63f, -0.17f,
        0.69f,  0.1f,
        0.59f,  0.0f,
        0.018f
    );
    //1right
    curvedBranch(
        0.596f, -0.17f,
        0.54f,  0.1f,
        0.62f,   0.0f,
        0.018f
    );
    //2right
    // Left curved branch
    curvedBranch(0.62f, 0.01f,
                 0.67f, 0.18f,
                 0.63f, 0.09f,
                 0.01f);

    //middle
    curvedBranch(
        0.62f, 0.01f,
        0.598f, 0.18f,
        0.61f, 0.09f,
        0.015f
    );

    //2nd left
    curvedBranch(
        0.595f, 0.016f,
        0.56f, 0.18f,
        0.595f, 0.09f,
        0.01f
    );


    circle(0.045f, 0.72f, 0.085f, 0.0f, 0.75f, 0.0f);
    glEnd();
    circle(0.04f, 0.69f, 0.06f, 0.0f, 0.75f, 0.0f);
    glEnd();
    circle(0.02f, 0.66f, 0.062f, 0.0f, 0.4f, 0.0f);
    glEnd();
    circle(0.04f, 0.68f, 0.09f, 0.0f, 0.8f, 0.0f);
    glEnd();


    circle(0.03f, 0.51f, 0.07f, 0.0f, 0.75f, 0.0f);
    glEnd();
    circle(0.045f, 0.5f, 0.088f, 0.0f, 0.75f, 0.0f);
    glEnd();
    circle(0.02f, 0.55f, 0.04f, 0.0f, 0.4f, 0.0f);
    glEnd();
    circle(0.05f, 0.545f, 0.085f, 0.0f, 0.8f, 0.0f);
    glEnd();

    circle(0.02f, 0.55f, 0.12f, 0.0f, 0.4f, 0.0f);
    glEnd();
    circle(0.03f, 0.6f, 0.13f, 0.0f, 0.4f, 0.0f);
    glEnd();
    circle(0.03f, 0.58f, 0.12f, 0.0f, 0.4f, 0.0f);
    glEnd();
    circle(0.03f, 0.63f, 0.12f, 0.0f, 0.4f, 0.0f);
    glEnd();


    circle(0.05f, 0.55f, 0.16f, 0.0f, 0.8f, 0.0f);
    glEnd();
    circle(0.05f, 0.62f, 0.155f, 0.0f, 0.8f, 0.0f);
    glEnd();
    circle(0.05f, 0.68f, 0.15f, 0.0f, 0.8f, 0.0f);
    glEnd();

    circle(0.055f, 0.49f, 0.163f, 0.0f, 0.8f, 0.0f);
    glEnd();
    circle(0.055f, 0.65f, 0.18f, 0.0f, 0.8f, 0.0f);
    glEnd();
    circle(0.055f, 0.72f, 0.163f, 0.0f, 0.8f, 0.0f);
    glEnd();

    circle(0.04f, 0.54f, 0.18f, 0.0f, 0.4f, 0.0f);
    glEnd();
    circle(0.04f, 0.67f, 0.18f, 0.0f, 0.4f, 0.0f);
    glEnd();

    circle(0.055f, 0.5f, 0.20f, 0.0f, 0.8f, 0.0f);
    glEnd();
    circle(0.055f, 0.55f, 0.21f, 0.0f, 0.8f, 0.0f);
    glEnd();
    circle(0.055f, 0.62f, 0.21f, 0.0f, 0.8f, 0.0f);
    glEnd();
    circle(0.055f, 0.7f, 0.2f, 0.0f, 0.8f, 0.0f);
    glEnd();

    circle(0.055f, 0.49f, 0.24f, 0.0f, 0.8f, 0.0f);
    glEnd();
    circle(0.055f, 0.55f, 0.26f, 0.0f, 0.77f, 0.0f);
    glEnd();
    circle(0.055f, 0.62f, 0.26f, 0.0f, 0.8f, 0.0f);
    glEnd();
    circle(0.055f, 0.65f, 0.27f, 0.0f, 0.77f, 0.0f);
    glEnd();
    circle(0.055f, 0.72f, 0.22f, 0.0f, 0.8f, 0.0f);
    glEnd();

    circle(0.055f, 0.5f, 0.28f, 0.0f, 0.85f, 0.0f);
    glEnd();
    circle(0.055f, 0.55f, 0.3f, 0.0f, 0.85f, 0.0f);
    glEnd();
    circle(0.055f, 0.57f, 0.34f, 0.0f, 0.85f, 0.0f);
    glEnd();
    circle(0.055f, 0.58f, 0.28f, 0.0f, 0.85f, 0.0f);
    glEnd();
    circle(0.055f, 0.65f, 0.32f, 0.0f, 0.85f, 0.0f);
    glEnd();
    circle(0.055f, 0.7f, 0.28f, 0.0f, 0.85f, 0.0f);
    glEnd();


    glLoadIdentity();

}

void Bigtree()
{
        glPushMatrix();
    glTranslatef(-1.2f, -0.1f, 0);
glScalef(1.0f, 0.9f, 0.0f);

    glBegin(GL_QUADS);
        glColor3f(0.3f, 0.2f, 0.0f);
        glVertex2f(0.59f,-0.15f);
        glVertex2f(0.633f,-0.15f);
        glVertex2f(0.623f,0.066f);
        glVertex2f(0.595f,0.066f);
        glEnd();
        //1left
    curvedBranch(
        0.63f, -0.17f,
        0.69f,  0.1f,
        0.59f,  0.0f,
        0.018f
    );
    //1right
    curvedBranch(
        0.596f, -0.17f,
        0.54f,  0.1f,
        0.62f,   0.0f,
        0.018f
    );
    //2right
    // Left curved branch
    curvedBranch(0.62f, 0.01f,
                 0.67f, 0.18f,
                 0.63f, 0.09f,
                 0.01f);

    //middle
    curvedBranch(
        0.62f, 0.01f,
        0.598f, 0.18f,
        0.61f, 0.09f,
        0.015f
    );

    //2nd left
    curvedBranch(
        0.595f, 0.016f,
        0.56f, 0.18f,
        0.595f, 0.09f,
        0.01f
    );


    circle(0.04f, 0.7f, 0.092f, 0.0f, 0.75f, 0.0f); glEnd();
    circle(0.02f, 0.66f, 0.062f, 0.0f, 0.4f, 0.0f); glEnd();
    circle(0.04f, 0.68f, 0.09f, 0.0f, 0.8f, 0.0f); glEnd();

    circle(0.04f, 0.52f, 0.092f, 0.0f, 0.75f, 0.0f); glEnd();
    circle(0.03f, 0.55f, 0.06f, 0.0f, 0.4f, 0.0f); glEnd();
    circle(0.04f, 0.545f, 0.08f, 0.0f, 0.8f, 0.0f); glEnd();

    circle(0.03f, 0.55f, 0.11f, 0.0f, 0.4f, 0.0f); glEnd();
    circle(0.03f, 0.65f, 0.13f, 0.0f, 0.4f, 0.0f); glEnd();
    circle(0.03f, 0.6f, 0.12f, 0.0f, 0.4f, 0.0f); glEnd();

    circle(0.05f, 0.55f, 0.145f, 0.0f, 0.8f, 0.0f); glEnd();
    circle(0.05f, 0.62f, 0.155f, 0.0f, 0.8f, 0.0f); glEnd();

    circle(0.045f, 0.57f, 0.18f, 0.0f, 0.8f, 0.0f); glEnd();
    circle(0.045f, 0.655f, 0.19f, 0.0f, 0.8f, 0.0f); glEnd();
    circle(0.038f, 0.68f, 0.14f, 0.0f, 0.8f, 0.0f); glEnd();


    circle(0.05f, 0.56f, 0.21f, 0.0f, 0.85f, 0.0f); glEnd();
    circle(0.055f, 0.63f, 0.24f, 0.0f, 0.85f, 0.0f); glEnd();
    circle(0.045f, 0.58f, 0.24f, 0.0f, 0.85f, 0.0f); glEnd();
    circle(0.05f, 0.65f, 0.2f, 0.0f, 0.85f, 0.0f); glEnd();

    glPopMatrix();


}

void cable2(){

    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.0f, 0.0f);
    glVertex2f(0.55, 0.702);
    glVertex2f(0.5581, 0.702);
    glVertex2f(0.5577206393564, 0.6422895175778);
    glVertex2f(0.5498433631957, 0.6430772451939);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(0.5117919786159, 0.6422895175778);
    glVertex2f(0.6047438373113, 0.6418956537698);
     glVertex2f(0.6189229344005, 0.5906933587257);
    glVertex2f(0.4980067453348, 0.5899056311096);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.0f, 0.0f);
    glVertex2f(0.4980067453348, 0.5899056311096);
    glVertex2f(0.6189229344005, 0.5906933587257);
    glVertex2f(0.607105317983, 0.5492227572163);
    glVertex2f(0.5099011999664, 0.5507415715603);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.502f, 0.0f, 0.0f);
    glVertex2f(0.5269333376212, 0.6434318867888);
    glVertex2f (0.52,0.59);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.502f, 0.0f, 0.0f);
    glVertex2f(0.58,0.64);
    glVertex2f(0.59,0.590);
    glEnd();

}

void cable(){
    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.0f, 0.0f);
    glVertex2f(-0.5696, 0.702);
    glVertex2f(-0.5596, 0.702);
    glVertex2f(-0.5584950286975, 0.644888102843);
    glVertex2f(-0.56982461821, 0.644888102843);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(-0.6127577995204, 0.6454843970279);
    glVertex2f(-0.5233611918577, 0.6451961499495);
    glVertex2f(-0.5059953634307, 0.5929886490722);
    glVertex2f(-0.6280481778946, 0.5937889953966);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.0f, 0.0f);
    glVertex2f(-0.6280481778946, 0.5937889953966);
    glVertex2f(-0.5059953634307, 0.5929886490722);
    glVertex2f(-0.5208017704313, 0.5541718523411);
    glVertex2f(-0.615242636705, 0.5549721986654);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.502f, 0.0f, 0.0f);

    glVertex2f(-0.59,0.59);
    glVertex2f (-0.597,0.64);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.502f, 0.0f, 0.0f);
    glVertex2f(-0.535,0.59);
    glVertex2f (-0.53,0.64);

    glEnd();
}


void drawcable(){
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    cable();
    glPopMatrix();
}

void drawcable2(){
    glPushMatrix();
    glTranslatef(_move2, 0.0f, 0.0f);
    cable2();
    glPopMatrix();


}


 void update(int value) {
    _move += 0.002;

        if (_move > 1.96) {
     _move = -1.0f;
    }

    _move2 -= 0.002;
    if(_move2<-1.96)
    {
    _move2= +1.0;
    }

    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}

void circle1(float p1, float q1, float r1)
{
    int i;
    int tringle2=40;
    GLfloat tp2 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glVertex2f (p1,q1);
    for(i= 0; i<=tringle2; i++)
    {
        glVertex2f (
            p1+(r1*cos(i*tp2/tringle2)),
            q1+(r1*sin(i*tp2/tringle2))
        );
    }
    glEnd();
}

void Cloud()
{
    glColor3f(1, 1, 1);

    glPushMatrix();
    glTranslatef(cloudPosition+0.48, 0.9, 0);

    // First cloud
    circle1(-0.42, -0.05, 0.05f);
    circle1(-0.46, -0.10, 0.05f);
    circle1(-0.39, -0.10, 0.05f);

    // Second cloud
    circle1(0.08, 0.05, 0.05f);
    circle1(0.04, 0.00, 0.05f);
    circle1(0.11, 0.00, 0.05f);

    // Third cloud
    circle1(0.38, -0.05, 0.05f);
    circle1(0.34, -0.1, 0.05f);
    circle1(0.41, -0.1, 0.05f);

    glPopMatrix();
}
void update_cloud(int value)        ///AFID-1
{
    cloudPosition+=cloudSpeed;
    if(cloudPosition>1.0)
    {
        cloudPosition=-1.7;
    }

    glutPostRedisplay();
    glutTimerFunc(80, update_cloud, 0);
}


void snowman()
{

    glColor3f(1,1,1);
    circle1(0.744f, -0.229f, 0.054f);
    circle1(0.745f, -0.335f, 0.075f);
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(0.72,-0.18);
    glVertex2f(0.74,-0.15);
    glVertex2f(0.79,-0.15);
    glVertex2f(0.84,-0.18);
    glVertex2f(0.80,-0.18);
    glVertex2f(0.78,-0.19);

    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3f(1, .549, 0);
    glVertex2f(0.75, -0.25);
    glVertex2f(0.70, -0.245);
    glVertex2f(0.75, -0.23);
    glEnd();

    glColor3f(0, 0, 0);
    circle1(0.77, -0.22, 0.01f);


   glColor3f(0, 0, 0);
   circle1(0.72, -0.22, 0.01f);


}

void hill2()
{

    glPopMatrix();

    // Rotated (180° flip around X-axis → -Y)
    glPushMatrix();
    glTranslatef(0.0f, 0.56f, 0.0f);
    glRotatef(105.0f, 1.0f, 0.0f, 0.0f);
    // hill 0

    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(-0.75f, 0.80f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(-0.9f, 0.40f);
    glVertex2f(-0.60f, 0.40f);
    glEnd();

    // Hill 1 - left
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(-0.85f, 0.90f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(-1.1f, 0.40f);
    glVertex2f(-0.70f, 0.40f);
    glEnd();

    // Hill 1 - right
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(-0.5f, 0.85f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(-0.7f, 0.40f);
    glVertex2f(-0.3f, 0.40f);
    glEnd();

    // Hill 2 - left
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(-0.65f, 0.7f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(-0.8f, 0.40f);
    glVertex2f(-0.50f, 0.40f);
    glEnd();

    // Hill 2 - right
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(-0.15f, 0.85f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(-0.4f, 0.40f);
    glVertex2f(0.1f, 0.40f);
    glEnd();

    // Hill 3 - left
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(-0.35f, 0.8f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(-0.6f, 0.40f);
    glVertex2f(-0.20f, 0.40f);
    glEnd();

    // Hill 3 - right
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(0.22f, 0.8f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(-0.1f, 0.40f);
    glVertex2f(0.5f, 0.40f);
    glEnd();

    // Hill 4 - left
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(0.0f, 0.65f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(-0.35f, 0.40f);
    glVertex2f(0.20f, 0.40f);
    glEnd();

    // Hill 4 - right
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(0.5f, 0.9f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(0.2f, 0.40f);
    glVertex2f(0.7f, 0.40f);
    glEnd();

    // Hill 5 - left
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(0.25f, 0.55f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(0.10f, 0.40f);
    glVertex2f(0.40f, 0.40f);
    glEnd();

    // Hill 5 - right
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(0.72f, 0.9f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(0.45f, 0.40f);
    glVertex2f(0.95f, 0.40f);
    glEnd();

    // Hill 6
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(0.55f, 0.65f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(0.40f, 0.40f);
    glVertex2f(0.75f, 0.40f);
    glEnd();

    // Hill 7
    glBegin(GL_TRIANGLES);
    glColor4f(0.4f, 0.6f, 0.7f, 0.4f);
    glVertex2f(0.95f, 0.82f);
    glColor4f(0.0f, 0.25f, 0.35f, 0.4f);
    glVertex2f(0.70f, 0.40f);
    glVertex2f(1.1f, 0.40f);
    glEnd();
        glPopMatrix();
}

void road_border()
{
    glPushMatrix();

    glTranslatef(0.0f, -1.75f, 0.0f);
    glScalef(1.5f, 2.5f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-1, 0.49);
    glVertex2f(1, 0.49);
    glVertex2f(1 ,0.50);
    glVertex2f(-1, 0.50);
    glEnd();

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
}