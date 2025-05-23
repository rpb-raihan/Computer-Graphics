//Raihan Parvez, Roll: 27, Id: 22-46281-1


#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<cstdio>

float x,y,i;
float PI=3.1416;

using namespace std;
GLfloat vanPosition2=0;  //van_1
GLfloat vanspeed2=2;  //van_1
GLfloat menPosition2=0;  //men_1
GLfloat menspeed2=15.5;  //men_1
GLfloat carPosition2=0;  //car_2
GLfloat carSpeed2=1.8;   //car_2
GLfloat sunPosition2=0;  //sun_moon
GLfloat sunSpeed2= 0.5;   //sun_moon
GLfloat cloudPosition3=0;   //cloud_3
GLfloat couldSpeed3=1;  //cloud_3
GLfloat cloudPosition4=0;  //cloud_4
GLfloat couldSpeed4=0.8;   //cloud_4
GLfloat carPosition1=0;   //cloud_1
GLfloat carSpeed1=15; // high_speed
GLfloat vanPosition1=0;  //van_speed
GLfloat vanspeed1=2; // Van_speed
GLfloat basketPosition = 0.0f; //basket
GLfloat basketspeed = 0.5f;   //basket
GLfloat policecarPosition2=0;   //police_car
GLfloat policecarSpeed2=6.0;   //police_car
GLfloat hujurPosition1 = 0.0f;  //hujur_1
GLfloat bmenPosition1 = 0.0f;    //Bmen_1
GLfloat emenPosition1 = 0.0f;   //eman_1
GLfloat lmenPosition1 = 0.0f;  //Imen1
GLfloat hujurspeed1 = 0.5f;   //all_man


//*************For text part*********
void renderBitmapString(int  x, int  y, int  z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}




// ******************* Day Part***************************

void display1 (void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    //SKY
    glBegin(GL_QUADS);
    glColor3ub(10, 196, 236 );
    glVertex2i(-100,-20);
    glVertex2i(-100,100);
    glVertex2i(100,100);
    glVertex2i(100,-20);
    glEnd();


    glPushMatrix();
    glTranslatef(sunPosition2,0.0f,0.0f);
    //Sun draw
    float x, y;
    int i;
    GLfloat radius;
    int triangleAmount =40;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(247, 254, 0);
    x=70;
    y=75;
    radius =10;
    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloudPosition3,0.0f,0.0f);
    //Cloud-1

    //P-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-75;
    y=92;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-79;
    y=87;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-85;
    y=82;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-80;
    y=81;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-73;
    y=85;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-74;
    y=79;
    radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloudPosition4,0.0f,0.0f);
    //Cloud-2

    //P-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-35;
    y=78;
    radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-41;
    y=73;
    radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-47;
    y=67;
    radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-40;
    y=66;
    radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-33;
    y=70;
    radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    //Grass
    glBegin(GL_QUADS);
    glColor3ub(136, 221, 12 );
    glVertex2i(-100,-20);
    glVertex2i(-100,-40);
    glVertex2i(100,-40);
    glVertex2i(100,-20);
    glEnd();


    //Road background
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2i(-100,-40);
    glVertex2i(-100,-100);
    glVertex2i(100,-100);
    glVertex2i(100,-40);
    glEnd();



    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(253, 254, 254);
    glVertex2i(-100,-70);
    glVertex2i(-80,-70);
    glVertex2i(-70,-70);
    glVertex2i(-50,-70);
    glVertex2i(-60,-70);
    glVertex2i(-40,-70);
    glVertex2i(-30,-70);
    glVertex2i(-10,-70);
    glVertex2i(0,-70);
    glVertex2i(20,-70);
    glVertex2i(30,-70);
    glVertex2i(50,-70);
    glVertex2i(60,-70);
    glVertex2i(80,-70);
    glVertex2i(90,-70);
    glVertex2i(100,-70);
    glEnd();

    //Background left 1st

    glBegin(GL_QUADS);
    glColor3ub(204, 209, 209 );
    glVertex2i(-101,-20);
    glVertex2i(-101,23);
    glVertex2i(-95,23);
    glVertex2i(-95,-20);
    glEnd();

    //Background left 2nd

    glBegin(GL_QUADS);
    glColor3ub(179, 182, 183);
    glVertex2i(-50,-20);
    glVertex2i(-50,23);
    glVertex2i(-28,23);
    glVertex2i(-28,-20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(93, 173, 226);
    glVertex2i(-46,-10);
    glVertex2i(-46,18);
    glVertex2i(-33,18);
    glVertex2i(-33,-10);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2i(-46, 14);
    glVertex2i(-33, 14);
    glVertex2i(-46, 10);
    glVertex2i(-33, 10);
    glVertex2i(-46, 6);
    glVertex2i(-33, 6);
    glVertex2i(-39, 18);
    glVertex2i(-39, -10);
    glEnd();

    //Background Right 1st

    glBegin(GL_QUADS);
    glColor3ub(208, 211, 212);
    glVertex2i(25,-20);
    glVertex2i(25,18);
    glVertex2i(37,18);
    glVertex2i(37,-20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(93, 173, 226);
    glVertex2i(25,5);
    glVertex2i(25,15);
    glVertex2i(35,15);
    glVertex2i(35,5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 139, 150 );
    glVertex2i(35,-20);
    glVertex2i(35,13);
    glVertex2i(50,13);
    glVertex2i(50,-20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(93, 173, 226);
    glVertex2i(37,3);
    glVertex2i(37,10);
    glVertex2i(50,10);
    glVertex2i(50,3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(208, 211, 212);
    glVertex2i(95,-20);
    glVertex2i(95,13);
    glVertex2i(100,13);
    glVertex2i(100,-20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(93, 173, 226);
    glVertex2i(95,3);
    glVertex2i(95,10);
    glVertex2i(98,10);
    glVertex2i(98,3);
    glEnd();


    //Tree-2 Draw

    //Tree Stand
    glBegin(GL_QUADS);
    glColor3ub(110, 44, 0);
    glVertex2i(-36,-23);
    glVertex2i(-36,-11);
    glVertex2i(-34,-11);
    glVertex2i(-34,-23);
    glEnd();

    //Tree Top-1
    glBegin(GL_TRIANGLES);
    glColor3ub(53, 141, 11 );
    glVertex2i(-42,-12);
    glVertex2i(-35,7);
    glVertex2i(-29,-12);
    glEnd();

    //Tree Top-2
    glBegin(GL_TRIANGLES);
    glColor3ub(53, 141, 11 );
    glVertex2i(-40,-5);
    glVertex2i(-35,13);
    glVertex2i(-30,-5);
    glEnd();

    //Tree Top-3
    glBegin(GL_TRIANGLES);
    glColor3ub(53, 141, 11 );
    glVertex2i(-39,2);
    glVertex2i(-35,15);
    glVertex2i(-31,2);
    glEnd();

    //Restaurant Stairs
    glBegin(GL_QUADS);
    glColor3ub(46, 64, 83);
    glVertex2i(-40,-30);
    glVertex2i(-40,-25);
    glVertex2i(40,-25);
    glVertex2i(40,-30);
    glVertex2i(-35,-25);
    glVertex2i(-35,-20);
    glVertex2i(35,-20);
    glVertex2i(35,-25);
    glEnd();

    //glBegin(GL_LINES);
    //glColor3f(206.0f, 193.0f, 111.0f);
    //glVertex2i(-100,0);
    //glVertex2i(100,0);
    //glEnd();

    //Restaurant pillers
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);
    glVertex2i(34,-20);
    glVertex2i(32,-20);
    glVertex2i(32,30);
    glVertex2i(34,30);

    glVertex2i(-34,-20);
    glVertex2i(-32,-20);
    glVertex2i(-32,30);
    glVertex2i(-34,30);
    glEnd();


    //Reastaurant Room 1st floor
    glBegin(GL_QUADS);
    glColor3ub(230, 126, 34);
    glVertex2i(30,-20);
    glVertex2i(10,-20);
    glVertex2i(10,0);
    glVertex2i(30,0);
    glVertex2i(-30,-20);
    glVertex2i(-10,-20);
    glVertex2i(-10,0);
    glVertex2i(-30,0);
    glEnd();

    //Restaurant Roof 1st floor
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);
    glVertex2i(30,0);
    glVertex2i(10,0);
    glVertex2i(10,5);
    glVertex2i(30,5);
    glVertex2i(-30,0);
    glVertex2i(-10,0);
    glVertex2i(-10,5);
    glVertex2i(-30,5);
    glVertex2i(10,5);
    glVertex2i(-10,5);
    glVertex2i(-10,10);
    glVertex2i(10,10);
    glEnd();

    //Restaurant Room 1st floor Glass system
    glBegin(GL_QUADS);
    glColor3ub(253, 254, 254);
    glVertex2i(29,-19);
    glVertex2i(11,-19);
    glVertex2i(11,-1);
    glVertex2i(29,-1);
    glVertex2i(-29,-19);
    glVertex2i(-11,-19);
    glVertex2i(-11,-1);
    glVertex2i(-29,-1);
    glEnd();

    //Restaurant Room 1st floor Glass 1
    glBegin(GL_QUADS);
    glColor3ub(174, 214, 241);
    glVertex2i(12,-18);
    glVertex2i(12,-2);
    glVertex2i(19,-2);
    glVertex2i(19,-18);
    glVertex2i(-12,-18);
    glVertex2i(-12,-2);
    glVertex2i(-19,-2);
    glVertex2i(-19,-18);

    glEnd();

    //restaurant Room 1st floor Glass 2
    glBegin(GL_QUADS);
    glColor3ub(174, 214, 241);
    glVertex2i(20,-18);
    glVertex2i(20,-2);
    glVertex2i(28,-2);
    glVertex2i(28,-18);
    glVertex2i(-20,-18);
    glVertex2i(-20,-2);
    glVertex2i(-28,-2);
    glVertex2i(-28,-18);

    glEnd();

    //Restaurant Room 2nd floor
    glBegin(GL_QUADS);
    glColor3ub(230, 126, 34);
    glVertex2i(30,5);
    glVertex2i(10,5);
    glVertex2i(10,25);
    glVertex2i(30,25);
    glVertex2i(-30,5);
    glVertex2i(-10,5);
    glVertex2i(-10,25);
    glVertex2i(-30,25);
    glEnd();

    //Restaurant Roof 2nd floor
    glBegin(GL_QUADS);
    glColor3ub(100, 30, 22);
    glVertex2i(40,25);
    glVertex2i(10,25);
    glVertex2i(10,30);
    glVertex2i(40,30);
    glVertex2i(-40,25);
    glVertex2i(-10,25);
    glVertex2i(-10,30);
    glVertex2i(-40,30);
    glVertex2i(12,35);
    glVertex2i(-12,35);
    glVertex2i(-12,40);
    glVertex2i(12,40);
    glVertex2i(13,40);  // For lobby
    glVertex2i(-13,40);
    glVertex2i(-13,45);
    glVertex2i(13,45);
    glEnd();
    glColor3f(255,255,255);
    renderBitmapString(-8,39,0,GLUT_BITMAP_TIMES_ROMAN_24, "Restaurant");



    //Restaurant Room 2nd floor Glass system
    glBegin(GL_QUADS);
    glColor3ub(253, 254, 254);
    glVertex2i(29,6);
    glVertex2i(11,6);
    glVertex2i(11,24);
    glVertex2i(29,24);
    glColor3ub(253, 254, 254);
    glVertex2i(-29,6);
    glVertex2i(-11,6);
    glVertex2i(-11,24);
    glVertex2i(-29,24);
    glEnd();


    //Restaurant Room 2nd floor Glass 1
    glBegin(GL_QUADS);
    glColor3ub(174, 214, 241);
    glVertex2i(12,7);
    glVertex2i(12,23);
    glVertex2i(19,23);
    glVertex2i(19,7);
    glVertex2i(-12,7);
    glVertex2i(-12,23);
    glVertex2i(-19,23);
    glVertex2i(-19,7);

    glEnd();

    //Restaurant Room 2nd floor Glass 2
    glBegin(GL_QUADS);
    glColor3ub(174, 214, 241);
    glVertex2i(20,6);
    glVertex2i(20,23);
    glVertex2i(28,23);
    glVertex2i(28,6);
    glVertex2i(-20,6);
    glVertex2i(-20,23);
    glVertex2i(-28,23);
    glVertex2i(-28,6);

    glEnd();

    //restaurant lobby 1st floor
    glBegin(GL_QUADS);
    glColor3ub(211, 84, 0);
    glVertex2i(10,-20);
    glVertex2i(-10,-20);
    glVertex2i(-10,5);
    glVertex2i(10,5);
    glEnd();

    //Restaurant lobby 2nd floor
    glBegin(GL_QUADS);
    glColor3ub(211, 84, 0);
    glVertex2i(10,10);
    glVertex2i(-10,10);
    glVertex2i(-10,35);
    glVertex2i(10,35);
    glEnd();

    //Gate pillers
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);
    glVertex2i(8,-20);
    glVertex2i(6,-20);
    glVertex2i(6,-5);
    glVertex2i(8,-5);

    glVertex2i(-8,-20);
    glVertex2i(-6,-20);
    glVertex2i(-6,-5);
    glVertex2i(-8,-5);
    glEnd();

    //Restaurant Roof Gate
    glBegin(GL_QUADS);
    glColor3ub(100, 30, 22);
    glVertex2i(9,-5);  // For gate
    glVertex2i(-9,-5);
    glVertex2i(-9,0);
    glVertex2i(9,0);
    glEnd();

    //Restaurant Gate Glass system
    glBegin(GL_QUADS);
    glColor3ub(174, 214, 241);
    glVertex2i(4,-20);
    glVertex2i(4,-5);
    glVertex2i(-4,-5);
    glVertex2i(-4,-20);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(0,-20);
    glVertex2i(0,-5);
    glEnd();

    //Restaurant Front gateway
    glBegin(GL_QUADS);
    glColor3ub(171, 178, 185 );
    glVertex2i(-40,-30);
    glVertex2i(-45,-40);
    glVertex2i(45,-40);
    glVertex2i(40,-30);
    glEnd();
    glColor3f(0,0,255);
    renderBitmapString(-8,23,0,GLUT_BITMAP_TIMES_ROMAN_24, "  Rupai");
    //Footpath Left
    glBegin(GL_QUADS);
    glColor3ub(148, 49, 38);
    glVertex2i(-45,-40);
    glVertex2i(-50,-35);
    glVertex2i(-100,-35);
    glVertex2i(-100,-40);
    glColor3ub(203, 67, 53  );
    glVertex2i(-45,-40);
    glVertex2i(-50,-35);
    glVertex2i(-45,-25);
    glVertex2i(-40,-30);
    glVertex2i(-45,-25);
    glVertex2i(-50,-35);
    glVertex2i(-100,-35);
    glVertex2i(-100,-25);
    glEnd();

    //Footpath right
    glBegin(GL_QUADS);
    glColor3ub(148, 49, 38);
    glVertex2i(45,-40);
    glVertex2i(50,-35);
    glVertex2i(100,-35);
    glVertex2i(100,-40);
    glColor3ub(203, 67, 53  );
    glVertex2i(45,-40);
    glVertex2i(50,-35);
    glVertex2i(45,-25);
    glVertex2i(40,-30);
    glVertex2i(45,-25);
    glVertex2i(50,-35);
    glVertex2i(100,-35);
    glVertex2i(100,-25);
    glEnd();




    //School second body
    glBegin(GL_QUADS);
    glColor3ub(228, 154, 34 );
    glVertex2i(45,15);
    glVertex2i(45,-20);
    glVertex2i(83,-20);
    glVertex2i(83,15);
    glEnd();

    //School second body border
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111 );
    glVertex2i(81,-1);
    glVertex2i(81,-4);
    glVertex2i(45,-4);
    glVertex2i(45,-1);
    glEnd();


    //School second body window
    glBegin(GL_QUADS);
    glColor3ub(174, 214, 241);
    glVertex2i(48,10);
    glVertex2i(52,10);
    glVertex2i(52,4);
    glVertex2i(48,4);
    glVertex2i(55,10);
    glVertex2i(59,10);
    glVertex2i(59,4);
    glVertex2i(55,4);
    glVertex2i(62,10);
    glVertex2i(66,10);
    glVertex2i(66,4);
    glVertex2i(62,4);
    glVertex2i(69,10);
    glVertex2i(73,10);
    glVertex2i(73,4);
    glVertex2i(69,4);
    glVertex2i(76,10);
    glVertex2i(80,10);
    glVertex2i(80,4);
    glVertex2i(76,4);


    glVertex2i(48,-9);
    glVertex2i(52,-9);
    glVertex2i(52,-15);
    glVertex2i(48,-15);
    glVertex2i(55,-9);
    glVertex2i(59,-9);
    glVertex2i(59,-15);
    glVertex2i(55,-15);
    glVertex2i(62,-9);
    glVertex2i(66,-9);
    glVertex2i(66,-15);
    glVertex2i(62,-15);
    glVertex2i(69,-9);
    glVertex2i(73,-9);
    glVertex2i(73,-15);
    glVertex2i(69,-15);
    glVertex2i(76,-9);
    glVertex2i(80,-9);
    glVertex2i(80,-15);
    glVertex2i(76,-15);


    glEnd();


    //School second body roof
    glBegin(GL_QUADS);
    glColor3ub(211, 84, 0);
    glVertex2i(83,15);
    glVertex2i(84,30);
    glVertex2i(50,30);
    glVertex2i(40,15);
    glEnd();


    //School first body
    glBegin(GL_QUADS);
    glColor3ub(205, 135, 22 );
    glVertex2i(81,-20);
    glVertex2i(95,-20);
    glVertex2i(95,24);
    glVertex2i(81,24);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(205, 135, 22 );
    glVertex2f(81,24);
    glVertex2f(88,35);
    glVertex2f(95,24);
    glEnd();


    //School Gate
    glBegin(GL_QUADS);
    glColor3ub(28, 40, 51);
    glVertex2i(98,-25);
    glVertex2i(98,-23);
    glVertex2i(78,-23);
    glVertex2i(78,-25);

    glVertex2i(98,-3);
    glVertex2i(98,-1);
    glVertex2i(78,-1);
    glVertex2i(78,-3);
    glEnd();

    //School Gate way
    glBegin(GL_QUADS);
    glColor3ub(174, 214, 241);
    glVertex2i(93,-20);
    glVertex2i(83,-20);
    glVertex2i(83,-5);
    glVertex2i(93,-5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(23, 32, 42);
    glVertex2i(88,-20);
    glVertex2i(88,-5);
    glEnd();

    //School Gate floor
    glBegin(GL_QUADS);
    glColor3ub(178, 186, 187 );
    glVertex2i(96,-23);
    glVertex2i(93,-20);
    glVertex2i(83,-20);
    glVertex2i(80,-23);
    glEnd();

    //School Gate pillers
    glBegin(GL_QUADS);
    glColor3ub(244, 208, 63);
    glVertex2i(98,-23);
    glVertex2i(98,-3);
    glVertex2i(96,-3);
    glVertex2i(96,-23);

    glVertex2i(78,-23);
    glVertex2i(78,-3);
    glVertex2i(80,-3);
    glVertex2i(80,-23);
    glEnd();


    //School Gate roof
    glBegin(GL_QUADS);
    glColor3ub(160, 64, 0 );
    glVertex2i(78,25);
    glVertex2i(81,24);
    glVertex2i(88,35);
    glVertex2i(88,40);

    glVertex2i(98,25);
    glVertex2i(95,24);
    glVertex2i(88,35);
    glVertex2i(88,40);
    glEnd();


    //School first body border
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111 );
    glVertex2i(81,-1);
    glVertex2i(81,2);
    glVertex2i(95,2);
    glVertex2i(95,-1);
    glEnd();

    //School first body window
    glBegin(GL_QUADS);
    glColor3ub(174, 214, 241);
    glVertex2i(93,5);
    glVertex2i(83,5);
    glVertex2i(83,15);
    glVertex2i(93,15);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(23, 32, 42);
    glVertex2i(88,5);
    glVertex2i(88,15);
    glVertex2i(93,10);
    glVertex2i(83,10);
    glEnd();

    //Tree-1 Draw

    //Tree Stand
    glBegin(GL_QUADS);
    glColor3ub(110, 44, 0);
    glVertex2i(-44,-25);
    glVertex2i(-44,-10);
    glVertex2i(-42,-10);
    glVertex2i(-42,-25);
    glEnd();

    //Tree Top 1
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84 );
    glVertex2i(-51,-12);
    glVertex2i(-43,9);
    glVertex2i(-35,-12);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84 );
    glVertex2i(-50,-5);
    glVertex2i(-43,15);
    glVertex2i(-36,-5);
    glEnd();

    //Tree Top-3
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84 );
    glVertex2i(-49,2);
    glVertex2i(-43,22);
    glVertex2i(-37,2);
    glEnd();


    //Tree-3 Draw

    //Tree Stand
    glBegin(GL_QUADS);
    glColor3ub(110, 44, 0);
    glVertex2i(44,-25);
    glVertex2i(44,-10);
    glVertex2i(42,-10);
    glVertex2i(42,-25);
    glEnd();

    //Tree Top 1
    glBegin(GL_TRIANGLES);
    glColor3ub(49, 189, 40 );
    glVertex2i(51,-12);
    glVertex2i(43,9);
    glVertex2i(35,-12);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(49, 189, 40 );
    glVertex2i(50,-5);
    glVertex2i(43,15);
    glVertex2i(36,-5);
    glEnd();

    //Tree Top-3
    glBegin(GL_TRIANGLES);
    glColor3ub(49, 189, 40 );
    glVertex2i(49,2);
    glVertex2i(43,22);
    glVertex2i(37,2);
    glEnd();


    //company building
    glBegin(GL_QUADS);
    glColor3ub(244, 247, 122 );
    glVertex2i(-98,-25);
    glVertex2i(-70,-25);
    glVertex2i(-70,10);
    glVertex2i(-98,10);
    glVertex2i(-98,15);
    glVertex2i(-70,15);
    glVertex2i(-70,50);
    glVertex2i(-98,50);
    glVertex2i(-50,-25);
    glVertex2i(-70,-25);
    glVertex2i(-70,25);
    glVertex2i(-50,25);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0, 0, 0 );
    glVertex2i(-70,-25);
    glVertex2i(-70,50);
    glEnd();

    //company building roof
    glBegin(GL_QUADS);
    glColor3ub(93, 109, 126);
    glVertex2i(-99,15);
    glVertex2i(-70,15);
    glVertex2i(-70,10);
    glVertex2i(-99,10);
    glVertex2i(-99,50);
    glVertex2i(-70,50);
    glVertex2i(-70,55);
    glVertex2i(-99,55);
    glVertex2i(-48,25);
    glVertex2i(-70,25);
    glVertex2i(-70,30);
    glVertex2i(-48,30);
    glColor3ub(33, 47, 61 );
    glVertex2i(-45,35);
    glVertex2i(-70,35);
    glVertex2i(-70,30);
    glVertex2i(-45,30);
    glEnd();

    //company Gate Glass system
    glBegin(GL_QUADS);
    glColor3ub(93, 173, 226 );
    glVertex2i(-88,-25);
    glVertex2i(-80,-25);
    glVertex2i(-80,-5);
    glVertex2i(-88,-5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(-84,-25);
    glVertex2i(-84,-5);
    glEnd();

    //company window Glass system
    glBegin(GL_QUADS);
    glColor3ub(93, 173, 226 );
    glVertex2i(-96,-20);
    glVertex2i(-90,-20);
    glVertex2i(-90,5);
    glVertex2i(-96,5);
    glVertex2i(-78,-20);
    glVertex2i(-72,-20);
    glVertex2i(-72,5);
    glVertex2i(-78,5);
    glVertex2i(-52,-20);
    glVertex2i(-68,-20);
    glVertex2i(-68,-10);
    glVertex2i(-52,-10);
    glVertex2i(-52,-5);
    glVertex2i(-68,-5);
    glVertex2i(-68,5);
    glVertex2i(-52,5);
    glVertex2i(-52,20);
    glVertex2i(-68,20);
    glVertex2i(-68,10);
    glVertex2i(-52,10);
    glVertex2i(-96,20);
    glVertex2i(-72,20);
    glVertex2i(-72,30);
    glVertex2i(-96,30);
    glVertex2i(-96,35);
    glVertex2i(-72,35);
    glVertex2i(-72,45);
    glVertex2i(-96,45);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(-96,-10);
    glVertex2i(-90,-10);
    glVertex2i(-78,-10);
    glVertex2i(-72,-10);
    glEnd();





    //Lamp 1
    glBegin(GL_QUADS);
    glColor3ub(33, 47, 61);
    glVertex2i(-72,-25);
    glVertex2i(-70,-25);
    glVertex2i(-70,0);
    glVertex2i(-72,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(-74,5);
    glVertex2f(-68,5);
    glVertex2f(-71,8);
    glEnd();


    //Light
    glBegin(GL_QUADS);
    glColor3ub(253, 254, 254);
    glVertex2i(-70,0);
    glVertex2i(-72,0);
    glVertex2i(-73,5);
    glVertex2i(-69,5);
    glEnd();



    //Lamp 2
    glBegin(GL_QUADS);
    glColor3ub(33, 47, 61);
    glVertex2i(72,-25);
    glVertex2i(70,-25);
    glVertex2i(70,0);
    glVertex2i(72,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(74,5);
    glVertex2f(68,5);
    glVertex2f(71,8);
    glEnd();


    //Light
    glBegin(GL_QUADS);
    glColor3ub(253, 254, 254);
    glVertex2i(70,0);
    glVertex2i(72,0);
    glVertex2i(73,5);
    glVertex2i(69,5);
    glEnd();



    glPushMatrix();
    glTranslatef(lmenPosition1,0.0f,0.0f);
    //Man 3 Draw (Hujur)
    //Left Leg
    glBegin(GL_QUADS);
    glColor3ub(243, 216, 216 );
    glVertex2i(-68,-27);
    glVertex2i(-67,-19);
    glVertex2i(-64,-19);
    glVertex2i(-66,-27);

    //Right leg
    glVertex2i(-64,-27);
    glVertex2i(-66,-19);
    glVertex2i(-63,-19);
    glVertex2i(-62,-27);
    glEnd();

    //Body
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 254);
    glVertex2i(-68,-21);
    glVertex2i(-67,-12);
    glVertex2i(-65,-13);
    glVertex2i(-63,-12);
    glVertex2i(-62,-21);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(15, 126, 241 );
    glVertex2i(-67,-21);
    glVertex2i(-66,-12);
    glVertex2i(-65,-16);
    glVertex2i(-64,-12);
    glVertex2i(-63,-21);
    glEnd();


    //Left hand
    glBegin(GL_QUADS);
    glColor3ub(15, 126, 241 );
    glVertex2i(-68,-12);
    glVertex2i(-67,-12);
    glVertex2i(-67,-17);
    glVertex2i(-68,-17);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(-68, -17);
    glVertex2i(-67, -17);
    glEnd();


    //Right hand
    glBegin(GL_QUADS);
    glColor3ub(15, 126, 241 );
    glVertex2i(-63,-12);
    glVertex2i(-62,-12);
    glVertex2i(-62,-16);
    glVertex2i(-63,-16);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(-62, -16);
    glVertex2i(-63, -17);
    glEnd();

    //Shoe
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(-64,-27);
    glVertex2i(-63,-25);
    glVertex2i(-62,-27);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(-68,-27);
    glVertex2i(-67,-25);
    glVertex2i(-66,-27);
    glEnd();


    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(-65, -13);
    glVertex2i(-65, -10);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=-65;
    y=-9;
    radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2i(-68,-8);
    glVertex2i(-66,-6);
    glVertex2i(-64,-6);
    glVertex2i(-62,-8);
    glEnd();


    glPopMatrix();


    glPushMatrix();
    glTranslatef(bmenPosition1,0.0f,0.0f);
    //Man 5 Draw
    //Left Leg
    glBegin(GL_QUADS);
    glColor3ub(127, 50, 19 );
    glVertex2i(68,-30);
    glVertex2i(67,-22);
    glVertex2i(64,-22);
    glVertex2i(66,-30);

    //Right leg
    glVertex2i(64,-30);
    glVertex2i(66,-22);
    glVertex2i(63,-22);
    glVertex2i(62,-30);
    glEnd();

    //Body
    glBegin(GL_POLYGON);
    glColor3ub(15, 189, 157  );
    glVertex2i(67,-22);
    glVertex2i(67,-15);
    glVertex2i(65,-16);
    glVertex2i(63,-15);
    glVertex2i(63,-22);
    glEnd();

    //Left hand
    glBegin(GL_QUADS);
    glColor3ub(15, 189, 157 );
    glVertex2i(68,-15);
    glVertex2i(67,-15);
    glVertex2i(67,-19);
    glVertex2i(68,-19);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(68, -19);
    glVertex2i(67, -20);
    glEnd();


    //Right hand
    glBegin(GL_QUADS);
    glColor3ub(15, 189, 157  );
    glVertex2i(63,-15);
    glVertex2i(62,-15);
    glVertex2i(62,-19);
    glVertex2i(63,-19);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(62, -19);
    glVertex2i(63, -20);
    glEnd();

    //Bag
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(62, -22);
    glVertex2i(62, -28);
    glEnd();

    //Shoe
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(64,-30);
    glVertex2i(63,-28);
    glVertex2i(62,-30);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(68,-30);
    glVertex2i(67,-28);
    glVertex2i(66,-30);
    glEnd();


    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(65, -16);
    glVertex2i(65, -13);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=65;
    y=-12;
    radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(68,-11);
    glVertex2i(66,-9);
    glVertex2i(64,-9);
    glVertex2i(62,-11);
    glEnd();


    glPopMatrix();

    glPushMatrix();
    glTranslatef(emenPosition1,0.0f,0.0f);
    //Man 4 Draw
    //Left Leg
    glBegin(GL_QUADS);
    glColor3ub(92, 160, 175);
    glVertex2i(58,-33);
    glVertex2i(57,-25);
    glVertex2i(54,-25);
    glVertex2i(56,-33);

    //Right leg
    glVertex2i(54,-33);
    glVertex2i(56,-25);
    glVertex2i(53,-24);
    glVertex2i(52,-33);
    glEnd();

    //Body
    glBegin(GL_POLYGON);
    glColor3ub(203, 167, 242 );
    glVertex2i(57,-25);
    glVertex2i(57,-18);
    glVertex2i(55,-19);
    glVertex2i(53,-18);
    glVertex2i(53,-25);
    glEnd();

    //Left hand
    glBegin(GL_QUADS);
    glColor3ub(203, 167, 242 );
    glVertex2i(58,-18);
    glVertex2i(57,-18);
    glVertex2i(57,-22);
    glVertex2i(58,-22);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(58, -22);
    glVertex2i(57, -23);
    glEnd();


    //Right hand
    glBegin(GL_QUADS);
    glColor3ub(203, 167, 242);
    glVertex2i(53,-18);
    glVertex2i(52,-18);
    glVertex2i(52,-22);
    glVertex2i(53,-22);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(52, -22);
    glVertex2i(53, -23);
    glEnd();


    //Shoe
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(54,-33);
    glVertex2i(53,-31);
    glVertex2i(52,-33);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(58,-33);
    glVertex2i(57,-31);
    glVertex2i(56,-33);
    glEnd();


    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(55, -19);
    glVertex2i(55, -16);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=55;
    y=-15;
    radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2i(58,-14);
    glVertex2i(56,-12);
    glVertex2i(54,-12);
    glVertex2i(52,-14);
    glEnd();


    glPopMatrix();

    glPushMatrix();
    glTranslatef(basketPosition,0.0f,0.0f);
//Man 1 Draw
    //Left Leg
    glBegin(GL_QUADS);
    glColor3ub(44, 80, 197);
    glVertex2i(22,-40);
    glVertex2i(23,-32);
    glVertex2i(26,-32);
    glVertex2i(24,-40);

    //Right leg
    glVertex2i(26,-40);
    glVertex2i(24,-32);
    glVertex2i(27,-32);
    glVertex2i(28,-40);
    glEnd();

    //Body
    glBegin(GL_POLYGON);
    glColor3ub(56, 225, 38 );
    glVertex2i(23,-33);
    glVertex2i(23,-26);
    glVertex2i(25,-27);
    glVertex2i(27,-26);
    glVertex2i(27,-33);
    glEnd();

    //Left hand
    glBegin(GL_QUADS);
    glColor3ub(56, 225, 38 );
    glVertex2i(22,-26);
    glVertex2i(23,-26);
    glVertex2i(23,-30);
    glVertex2i(22,-30);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(23, -30);
    glVertex2i(22, -31);
    glEnd();


    //Right hand
    glBegin(GL_QUADS);
    glColor3ub(56, 225, 38 );
    glVertex2i(27,-26);
    glVertex2i(28,-26);
    glVertex2i(28,-30);
    glVertex2i(27,-30);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(27, -30);
    glVertex2i(28, -31);
    glEnd();

    //Shoe
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(26,-40);
    glVertex2i(27,-38);
    glVertex2i(28,-40);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(22,-40);
    glVertex2i(23,-38);
    glVertex2i(24,-40);
    glEnd();


    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(25, -27);
    glVertex2i(25, -24);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(249, 231, 159 );
    x=25;
    y=-23;
    radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    //Hair
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2i(22,-22);
    glVertex2i(24,-20);
    glVertex2i(26,-20);
    glVertex2i(28,-22);
    glEnd();

    //
    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2i(36,-30);
    glVertex2i(34,-40);
    glVertex2i(30,-40);
    glVertex2i(28,-30);
    glEnd();
    glColor3f(255,0,0);
    renderBitmapString(31,-35,0,GLUT_BITMAP_TIMES_ROMAN_10, "Fish");

    glPopMatrix();
    glPushMatrix();
    glTranslatef(vanPosition1,0.0f,0.0f);
    // Van body
    glBegin(GL_POLYGON);
    glColor3ub(253, 254, 254);
    glVertex2f(-90, -50);
    glVertex2f(-50, -50);
    glVertex2f(-51, -40);
    glVertex2f(-55, -35);
    glVertex2f(-60, -20);
    glVertex2f(-85, -20);
    glVertex2f(-90, -35);
    glEnd();
    //Fish sign
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-79, -35);
    glVertex2f(-71, -39);
    glVertex2f(-73, -35);
    glVertex2f(-71, -31);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 0);
    glVertex2f(-87, -35);
    glVertex2f(-77, -40);
    glVertex2f(-77, -28);
    glEnd();

    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(0, 0, 255);//Fish Eye
    glVertex2f(-85,-35);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-83, -35);
    glVertex2f(-81, -36);
    glVertex2f(-81, -34);
    glEnd();


    // Van glass
    glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2i(-61,-23);
    glVertex2i(-56,-35);
    glVertex2i(-66,-35);
    glVertex2i(-66,-23);
    glEnd();
    //Van bumper
    glBegin(GL_QUADS);
    glColor3ub(46, 64, 83);
    glVertex2i(-88,-50);
    glVertex2i(-91,-50);
    glVertex2i(-91,-46);
    glVertex2i(-88,-46);
    glVertex2i(-52,-50);
    glVertex2i(-52,-46);
    glVertex2i(-49,-46);
    glVertex2i(-49,-50);
    glEnd();

    //Van Light
    glBegin(GL_QUADS);
    glColor3ub(236, 67, 34);
    glVertex2i(-90,-35);
    glVertex2i(-89,-35);
    glVertex2i(-89,-40);
    glVertex2i(-90,-40);
    glColor3ub(251, 250, 32);
    glVertex2i(-51,-40);
    glVertex2i(-55,-40);
    glVertex2i(-55,-42);
    glVertex2i(-51,-42);
    glEnd();


    //Van wheel-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-61;
    y=-50;
    radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-61;
    y=-50;
    radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Van wheel-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-79;
    y=-50;
    radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-79;
    y=-50;
    radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glPopMatrix();





    glPushMatrix();
    glTranslatef(carPosition1,0.0f,0.0f);
    //car body
    glBegin(GL_QUADS);
    glColor3ub(125, 60, 152);
    glVertex2i(50,-70);
    glVertex2i(85,-70);
    glVertex2i(87,-80);
    glVertex2i(48,-80);
    glVertex2i(58,-70);
    glVertex2i(61,-60);
    glVertex2i(76,-60);
    glVertex2i(78,-70);
    glEnd();

    //car glass
    glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2i(59,-70);
    glVertex2i(62,-61);
    glVertex2i(75,-61);
    glVertex2i(77,-70);
    glVertex2i(69,-70);
    glVertex2i(69,-61);
    glVertex2i(73,-61);
    glVertex2i(75,-70);
    glEnd();

    //car bumper
    glBegin(GL_QUADS);
    glColor3ub(46, 64, 83);
    glVertex2i(46,-80);
    glVertex2i(53,-80);
    glVertex2i(53,-76);
    glVertex2i(46,-76);
    glVertex2i(88,-80);
    glVertex2i(82,-80);
    glVertex2i(82,-76);
    glVertex2i(88,-76);
    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(69,-80);
    glVertex2i(69,-60);
    glVertex2i(58,-70);
    glVertex2i(78,-70);
    glEnd();

    //car Light
    glBegin(GL_QUADS);
    glColor3ub(236, 67, 34);
    glVertex2i(84,-70);
    glVertex2i(85,-70);
    glVertex2i(85,-75);
    glVertex2i(84,-75);
    glColor3ub(226, 224, 224);
    glVertex2i(51,-70);
    glVertex2i(49,-70);
    glVertex2i(49,-72);
    glVertex2i(51,-72);
    glEnd();

    //Car wheel-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60;
    y=-80;
    radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60;
    y=-80;
    radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Car wheel-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=75;
    y=-80;
    radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=75;
    y=-80;
    radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(policecarPosition2,0.0f,0.0f);

    //Police Car
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2i(45,-90);
    glVertex2i(48,-78);
    glVertex2i(57,-75);
    glVertex2i(65,-65);
    glVertex2i(83,-65);
    glVertex2i(86,-75);
    glVertex2i(93,-75);
    glVertex2i(95,-90);
    glEnd();

    //Front window
    glBegin(GL_QUADS);
    glColor3ub(35, 148, 186);
    glVertex2i(65,-67);
    glVertex2i(73,-67);
    glVertex2i(73,-74);
    glVertex2i(60,-74);
    glEnd();

    //Back window
    glBegin(GL_QUADS);
    glColor3ub(35, 148, 186);
    glVertex2i(74,-67);
    glVertex2i(82,-67);
    glVertex2i(84,-74);
    glVertex2i(74,-74);
    glEnd();

    //Body Art
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(35, 57, 186);
    glVertex2i(52, -80);
    glVertex2i(88, -80);
    glEnd();

    //Front art
    glBegin(GL_QUADS);
    glColor3ub(40, 55, 71 );
    glVertex2i(44,-90);
    glVertex2i(48,-90);
    glVertex2i(48,-87);
    glVertex2i(44,-87);
    glEnd();

    //Back art
    glBegin(GL_QUADS);
    glColor3ub(40, 55, 71 );
    glVertex2i(92,-90);
    glVertex2i(97,-90);
    glVertex2i(97,-87);
    glVertex2i(92,-87);
    glEnd();

    //Front Light art
    glBegin(GL_QUADS);
    glColor3ub(247, 43, 43 );
    glVertex2i(47,-82);
    glVertex2i(50,-82);
    glVertex2i(50,-79);
    glVertex2i(48,-79);
    glEnd();

    //Back Light art
    glBegin(GL_QUADS);
    glColor3ub(247, 43, 43 );
    glVertex2i(91,-82);
    glVertex2i(94,-82);
    glVertex2i(93,-79);
    glVertex2i(91,-79);
    glEnd();

    //Top Light
    glBegin(GL_QUADS);
    glColor3ub(189, 8, 8 );
    glVertex2i(67,-65);
    glVertex2i(69,-65);
    glVertex2i(69,-63);
    glVertex2i(67,-63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8, 68, 189 );
    glVertex2i(69,-65);
    glVertex2i(71,-65);
    glVertex2i(71,-63);
    glVertex2i(69,-63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(189, 8, 8 );
    glVertex2i(71,-65);
    glVertex2i(73,-65);
    glVertex2i(73,-63);
    glVertex2i(71,-63);
    glEnd();

    //Front tire
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60;
    y=-90;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    //Front Tire middle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60;
    y=-90;
    radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    //Back Tire
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=80;
    y=-90;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Back Tire Middle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=80;
    y=-90;
    radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();


    glFlush();


}

//******************************************



//*************************************************


void display1N (void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    //SKY
    glBegin(GL_QUADS);
    glColor3ub(7, 26, 116 );
    glVertex2i(-100,-20);
    glVertex2i(-100,100);
    glVertex2i(100,100);
    glVertex2i(100,-20);
    glEnd();

    //Star
    glPointSize(3.0);
    glBegin(GL_POINTS);
    glColor3f(255, 255, 255 );
    glVertex2i(-90,90);
    glVertex2i(-70,90);
    glVertex2i(-50,90);
    glVertex2i(-30,90);
    glVertex2i(-10,90);
    glVertex2i(10,90);
    glVertex2i(30,90);
    glVertex2i(50,90);
    glVertex2i(70,90);
    glVertex2i(90,90);
    glEnd();

    glPointSize(3.0);
    glBegin(GL_POINTS);
    glColor3f(255, 255, 255 );
    glVertex2i(-90,70);
    glVertex2i(-70,70);
    glVertex2i(-50,70);
    glVertex2i(-30,70);
    glVertex2i(-10,70);
    glVertex2i(10,70);
    glVertex2i(30,70);
    glVertex2i(50,70);
    glVertex2i(70,70);
    glVertex2i(90,70);
    glEnd();

    glPointSize(3.0);
    glBegin(GL_POINTS);
    glColor3f(255, 255, 255 );
    glVertex2i(-90,50);
    glVertex2i(-70,50);
    glVertex2i(-50,50);
    glVertex2i(-30,50);
    glVertex2i(-10,50);
    glVertex2i(10,50);
    glVertex2i(30,50);
    glVertex2i(50,50);
    glVertex2i(70,50);
    glVertex2i(90,50);
    glEnd();



    glPushMatrix();
    glTranslatef(sunPosition2,0.0f,0.0f);
    //Sun draw
    float x, y;
    int i;
    GLfloat radius;
    int triangleAmount =40;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
    x=70;
    y=75;
    radius =10;
    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloudPosition3,0.0f,0.0f);
    //Cloud-1

    //P-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-75;
    y=92;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-79;
    y=87;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234  );
    x=-85;
    y=82;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-80;
    y=81;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-73;
    y=85;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-74;
    y=79;
    radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloudPosition4,0.0f,0.0f);
    //Cloud-2

    //P-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-35;
    y=78;
    radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-41;
    y=73;
    radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-47;
    y=67;
    radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-40;
    y=66;
    radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234  );
    x=-33;
    y=70;
    radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();
    glPopMatrix();

    //Grass
    glBegin(GL_QUADS);
    glColor3ub(136, 221, 12 );
    glVertex2i(-100,-20);
    glVertex2i(-100,-40);
    glVertex2i(100,-40);
    glVertex2i(100,-20);
    glEnd();


    //Road background
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2i(-100,-40);
    glVertex2i(-100,-100);
    glVertex2i(100,-100);
    glVertex2i(100,-40);
    glEnd();



    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(253, 254, 254);
    glVertex2i(-100,-70);
    glVertex2i(-80,-70);
    glVertex2i(-70,-70);
    glVertex2i(-50,-70);
    glVertex2i(-60,-70);
    glVertex2i(-40,-70);
    glVertex2i(-30,-70);
    glVertex2i(-10,-70);
    glVertex2i(0,-70);
    glVertex2i(20,-70);
    glVertex2i(30,-70);
    glVertex2i(50,-70);
    glVertex2i(60,-70);
    glVertex2i(80,-70);
    glVertex2i(90,-70);
    glVertex2i(100,-70);
    glEnd();

    //Background left 1st

    glBegin(GL_QUADS);
    glColor3ub(204, 209, 209 );
    glVertex2i(-101,-20);
    glVertex2i(-101,23);
    glVertex2i(-95,23);
    glVertex2i(-95,-20);
    glEnd();

    //Background left 2nd

    glBegin(GL_QUADS);
    glColor3ub(179, 182, 183);
    glVertex2i(-50,-20);
    glVertex2i(-50,23);
    glVertex2i(-28,23);
    glVertex2i(-28,-20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(93, 173, 226);
    glVertex2i(-46,-10);
    glVertex2i(-46,18);
    glVertex2i(-33,18);
    glVertex2i(-33,-10);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(23, 32, 42 );
    glVertex2i(-46, 14);
    glVertex2i(-33, 14);
    glVertex2i(-46, 10);
    glVertex2i(-33, 10);
    glVertex2i(-46, 6);
    glVertex2i(-33, 6);
    glVertex2i(-39, 18);
    glVertex2i(-39, -10);
    glEnd();

    //Background Right 1st

    glBegin(GL_QUADS);
    glColor3ub(208, 211, 212);
    glVertex2i(25,-20);
    glVertex2i(25,18);
    glVertex2i(37,18);
    glVertex2i(37,-20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(93, 173, 226);
    glVertex2i(25,5);
    glVertex2i(25,15);
    glVertex2i(35,15);
    glVertex2i(35,5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 139, 150 );
    glVertex2i(35,-20);
    glVertex2i(35,13);
    glVertex2i(50,13);
    glVertex2i(50,-20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(93, 173, 226);
    glVertex2i(37,3);
    glVertex2i(37,10);
    glVertex2i(50,10);
    glVertex2i(50,3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(208, 211, 212);
    glVertex2i(95,-20);
    glVertex2i(95,13);
    glVertex2i(100,13);
    glVertex2i(100,-20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(93, 173, 226);
    glVertex2i(95,3);
    glVertex2i(95,10);
    glVertex2i(98,10);
    glVertex2i(98,3);
    glEnd();


    //Tree-2 Draw

    //Tree Stand
    glBegin(GL_QUADS);
    glColor3ub(110, 44, 0);
    glVertex2i(-36,-23);
    glVertex2i(-36,-11);
    glVertex2i(-34,-11);
    glVertex2i(-34,-23);
    glEnd();

    //Tree Top-1
    glBegin(GL_TRIANGLES);
    glColor3ub(53, 141, 11 );
    glVertex2i(-42,-12);
    glVertex2i(-35,7);
    glVertex2i(-29,-12);
    glEnd();

    //Tree Top-2
    glBegin(GL_TRIANGLES);
    glColor3ub(53, 141, 11 );
    glVertex2i(-40,-5);
    glVertex2i(-35,13);
    glVertex2i(-30,-5);
    glEnd();

    //Tree Top-3
    glBegin(GL_TRIANGLES);
    glColor3ub(53, 141, 11 );
    glVertex2i(-39,2);
    glVertex2i(-35,15);
    glVertex2i(-31,2);
    glEnd();

    //Restaurant Stairs
    glBegin(GL_QUADS);
    glColor3ub(46, 64, 83);
    glVertex2i(-40,-30);
    glVertex2i(-40,-25);
    glVertex2i(40,-25);
    glVertex2i(40,-30);
    glVertex2i(-35,-25);
    glVertex2i(-35,-20);
    glVertex2i(35,-20);
    glVertex2i(35,-25);
    glEnd();

    //glBegin(GL_LINES);
    //glColor3f(206.0f, 193.0f, 111.0f);
    //glVertex2i(-100,0);
    //glVertex2i(100,0);
    //glEnd();

    //Restaurant pillers
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);
    glVertex2i(34,-20);
    glVertex2i(32,-20);
    glVertex2i(32,30);
    glVertex2i(34,30);

    glVertex2i(-34,-20);
    glVertex2i(-32,-20);
    glVertex2i(-32,30);
    glVertex2i(-34,30);
    glEnd();


    //Restaurant Room 1st floor
    glBegin(GL_QUADS);
    glColor3ub(230, 126, 34);
    glVertex2i(30,-20);
    glVertex2i(10,-20);
    glVertex2i(10,0);
    glVertex2i(30,0);
    glVertex2i(-30,-20);
    glVertex2i(-10,-20);
    glVertex2i(-10,0);
    glVertex2i(-30,0);
    glEnd();

    //Restaurant Roof 1st floor
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);
    glVertex2i(30,0);
    glVertex2i(10,0);
    glVertex2i(10,5);
    glVertex2i(30,5);
    glVertex2i(-30,0);
    glVertex2i(-10,0);
    glVertex2i(-10,5);
    glVertex2i(-30,5);
    glVertex2i(10,5);
    glVertex2i(-10,5);
    glVertex2i(-10,10);
    glVertex2i(10,10);
    glEnd();

    //Restaurant Room 1st floor Glass system
    glBegin(GL_QUADS);
    glColor3ub(253, 254, 254);
    glVertex2i(29,-19);
    glVertex2i(11,-19);
    glVertex2i(11,-1);
    glVertex2i(29,-1);
    glVertex2i(-29,-19);
    glVertex2i(-11,-19);
    glVertex2i(-11,-1);
    glVertex2i(-29,-1);
    glEnd();

    //Restaurant Room 1st floor Glass 1
    glBegin(GL_QUADS);
    glColor3ub(251, 250, 0);
    glVertex2i(12,-18);
    glVertex2i(12,-2);
    glVertex2i(19,-2);
    glVertex2i(19,-18);
    glVertex2i(-12,-18);
    glVertex2i(-12,-2);
    glVertex2i(-19,-2);
    glVertex2i(-19,-18);

    glEnd();

    //Restaurant Room 1st floor Glass 2
    glBegin(GL_QUADS);
    glColor3ub(251, 250, 0);
    glVertex2i(20,-18);
    glVertex2i(20,-2);
    glVertex2i(28,-2);
    glVertex2i(28,-18);
    glVertex2i(-20,-18);
    glVertex2i(-20,-2);
    glVertex2i(-28,-2);
    glVertex2i(-28,-18);

    glEnd();

    //Restaurant Room 2nd floor
    glBegin(GL_QUADS);
    glColor3ub(230, 126, 34);
    glVertex2i(30,5);
    glVertex2i(10,5);
    glVertex2i(10,25);
    glVertex2i(30,25);
    glVertex2i(-30,5);
    glVertex2i(-10,5);
    glVertex2i(-10,25);
    glVertex2i(-30,25);
    glEnd();

    //Restaurant Roof 2nd floor
    glBegin(GL_QUADS);
    glColor3ub(100, 30, 22);
    glVertex2i(40,25);
    glVertex2i(10,25);
    glVertex2i(10,30);
    glVertex2i(40,30);
    glVertex2i(-40,25);
    glVertex2i(-10,25);
    glVertex2i(-10,30);
    glVertex2i(-40,30);
    glVertex2i(12,35);
    glVertex2i(-12,35);
    glVertex2i(-12,40);
    glVertex2i(12,40);
    glVertex2i(13,40);  // For lobby
    glVertex2i(-13,40);
    glVertex2i(-13,45);
    glVertex2i(13,45);
    glEnd();

    glColor3f(255,255,255);
    renderBitmapString(-8,39,0,GLUT_BITMAP_TIMES_ROMAN_24, "Restaurant");

    //Restaurant Room 2nd floor Glass system
    glBegin(GL_QUADS);
    glColor3ub(253, 254, 254);
    glVertex2i(29,6);
    glVertex2i(11,6);
    glVertex2i(11,24);
    glVertex2i(29,24);
    glColor3ub(253, 254, 254);
    glVertex2i(-29,6);
    glVertex2i(-11,6);
    glVertex2i(-11,24);
    glVertex2i(-29,24);
    glEnd();

    //Restaurant Room 2nd floor Glass 1
    glBegin(GL_QUADS);
    glColor3ub(251, 250, 0);
    glVertex2i(12,7);
    glVertex2i(12,23);
    glVertex2i(19,23);
    glVertex2i(19,7);
    glVertex2i(-12,7);
    glVertex2i(-12,23);
    glVertex2i(-19,23);
    glVertex2i(-19,7);

    glEnd();

    //Restaurant Room 2nd floor Glass 2
    glBegin(GL_QUADS);
    glColor3ub(251, 250, 0);
    glVertex2i(20,6);
    glVertex2i(20,23);
    glVertex2i(28,23);
    glVertex2i(28,6);
    glVertex2i(-20,6);
    glVertex2i(-20,23);
    glVertex2i(-28,23);
    glVertex2i(-28,6);

    glEnd();

    //restaurant lobby 1st floor
    glBegin(GL_QUADS);
    glColor3ub(211, 84, 0);
    glVertex2i(10,-20);
    glVertex2i(-10,-20);
    glVertex2i(-10,5);
    glVertex2i(10,5);
    glEnd();

    //Restaurant lobby 2nd floor
    glBegin(GL_QUADS);
    glColor3ub(211, 84, 0);
    glVertex2i(10,10);
    glVertex2i(-10,10);
    glVertex2i(-10,35);
    glVertex2i(10,35);
    glEnd();

    //Gate pillers
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111);
    glVertex2i(8,-20);
    glVertex2i(6,-20);
    glVertex2i(6,-5);
    glVertex2i(8,-5);

    glVertex2i(-8,-20);
    glVertex2i(-6,-20);
    glVertex2i(-6,-5);
    glVertex2i(-8,-5);
    glEnd();

    //Restaurant Roof Gate
    glBegin(GL_QUADS);
    glColor3ub(100, 30, 22);
    glVertex2i(9,-5);  // For gate
    glVertex2i(-9,-5);
    glVertex2i(-9,0);
    glVertex2i(9,0);
    glEnd();

    //restaurant Gate Glass system
    glBegin(GL_QUADS);
    glColor3ub(174, 214, 241);
    glVertex2i(4,-20);
    glVertex2i(4,-5);
    glVertex2i(-4,-5);
    glVertex2i(-4,-20);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(0,-20);
    glVertex2i(0,-5);
    glEnd();




    //Restaurant Front gateway
    glBegin(GL_QUADS);
    glColor3ub(171, 178, 185 );
    glVertex2i(-40,-30);
    glVertex2i(-45,-40);
    glVertex2i(45,-40);
    glVertex2i(40,-30);
    glEnd();
    glColor3f(0,0,255);
    renderBitmapString(-8,23,0,GLUT_BITMAP_TIMES_ROMAN_24, "  Rupai");


    //Footpath Left
    glBegin(GL_QUADS);
    glColor3ub(148, 49, 38);
    glVertex2i(-45,-40);
    glVertex2i(-50,-35);
    glVertex2i(-100,-35);
    glVertex2i(-100,-40);
    glColor3ub(203, 67, 53  );
    glVertex2i(-45,-40);
    glVertex2i(-50,-35);
    glVertex2i(-45,-25);
    glVertex2i(-40,-30);
    glVertex2i(-45,-25);
    glVertex2i(-50,-35);
    glVertex2i(-100,-35);
    glVertex2i(-100,-25);
    glEnd();

    //Footpath right
    glBegin(GL_QUADS);
    glColor3ub(148, 49, 38);
    glVertex2i(45,-40);
    glVertex2i(50,-35);
    glVertex2i(100,-35);
    glVertex2i(100,-40);
    glColor3ub(203, 67, 53  );
    glVertex2i(45,-40);
    glVertex2i(50,-35);
    glVertex2i(45,-25);
    glVertex2i(40,-30);
    glVertex2i(45,-25);
    glVertex2i(50,-35);
    glVertex2i(100,-35);
    glVertex2i(100,-25);
    glEnd();




    //School second body
    glBegin(GL_QUADS);
    glColor3ub(228, 154, 34 );
    glVertex2i(45,15);
    glVertex2i(45,-20);
    glVertex2i(83,-20);
    glVertex2i(83,15);
    glEnd();

    //School second body border
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111 );
    glVertex2i(81,-1);
    glVertex2i(81,-4);
    glVertex2i(45,-4);
    glVertex2i(45,-1);
    glEnd();


    //School second body window
    glBegin(GL_QUADS);
    glColor3ub(17, 144, 165);
    glVertex2i(48,10);
    glVertex2i(52,10);
    glVertex2i(52,4);
    glVertex2i(48,4);
    glVertex2i(55,10);
    glVertex2i(59,10);
    glVertex2i(59,4);
    glVertex2i(55,4);
    glVertex2i(62,10);
    glVertex2i(66,10);
    glVertex2i(66,4);
    glVertex2i(62,4);
    glVertex2i(69,10);
    glVertex2i(73,10);
    glVertex2i(73,4);
    glVertex2i(69,4);
    glVertex2i(76,10);
    glVertex2i(80,10);
    glVertex2i(80,4);
    glVertex2i(76,4);


    glVertex2i(48,-9);
    glVertex2i(52,-9);
    glVertex2i(52,-15);
    glVertex2i(48,-15);
    glVertex2i(55,-9);
    glVertex2i(59,-9);
    glVertex2i(59,-15);
    glVertex2i(55,-15);
    glVertex2i(62,-9);
    glVertex2i(66,-9);
    glVertex2i(66,-15);
    glVertex2i(62,-15);
    glVertex2i(69,-9);
    glVertex2i(73,-9);
    glVertex2i(73,-15);
    glVertex2i(69,-15);
    glVertex2i(76,-9);
    glVertex2i(80,-9);
    glVertex2i(80,-15);
    glVertex2i(76,-15);


    glEnd();


    //School second body roof
    glBegin(GL_QUADS);
    glColor3ub(211, 84, 0);
    glVertex2i(83,15);
    glVertex2i(84,30);
    glVertex2i(50,30);
    glVertex2i(40,15);
    glEnd();


    //School first body
    glBegin(GL_QUADS);
    glColor3ub(205, 135, 22 );
    glVertex2i(81,-20);
    glVertex2i(95,-20);
    glVertex2i(95,24);
    glVertex2i(81,24);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(205, 135, 22 );
    glVertex2f(81,24);
    glVertex2f(88,35);
    glVertex2f(95,24);
    glEnd();


    //School Gate
    glBegin(GL_QUADS);
    glColor3ub(28, 40, 51);
    glVertex2i(98,-25);
    glVertex2i(98,-23);
    glVertex2i(78,-23);
    glVertex2i(78,-25);

    glVertex2i(98,-3);
    glVertex2i(98,-1);
    glVertex2i(78,-1);
    glVertex2i(78,-3);
    glEnd();

    //School Gate way
    glBegin(GL_QUADS);
    glColor3ub(17, 144, 165);
    glVertex2i(93,-20);
    glVertex2i(83,-20);
    glVertex2i(83,-5);
    glVertex2i(93,-5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(23, 32, 42);
    glVertex2i(88,-20);
    glVertex2i(88,-5);
    glEnd();

    //School Gate floor
    glBegin(GL_QUADS);
    glColor3ub(178, 186, 187 );
    glVertex2i(96,-23);
    glVertex2i(93,-20);
    glVertex2i(83,-20);
    glVertex2i(80,-23);
    glEnd();

    //School Gate pillers
    glBegin(GL_QUADS);
    glColor3ub(244, 208, 63);
    glVertex2i(98,-23);
    glVertex2i(98,-3);
    glVertex2i(96,-3);
    glVertex2i(96,-23);

    glVertex2i(78,-23);
    glVertex2i(78,-3);
    glVertex2i(80,-3);
    glVertex2i(80,-23);
    glEnd();


    //School Gate roof
    glBegin(GL_QUADS);
    glColor3ub(160, 64, 0 );
    glVertex2i(78,25);
    glVertex2i(81,24);
    glVertex2i(88,35);
    glVertex2i(88,40);

    glVertex2i(98,25);
    glVertex2i(95,24);
    glVertex2i(88,35);
    glVertex2i(88,40);
    glEnd();


    //School first body border
    glBegin(GL_QUADS);
    glColor3ub(247, 220, 111 );
    glVertex2i(81,-1);
    glVertex2i(81,2);
    glVertex2i(95,2);
    glVertex2i(95,-1);
    glEnd();

    //School first body window
    glBegin(GL_QUADS);
    glColor3ub(17, 144, 165);
    glVertex2i(93,5);
    glVertex2i(83,5);
    glVertex2i(83,15);
    glVertex2i(93,15);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(23, 32, 42);
    glVertex2i(88,5);
    glVertex2i(88,15);
    glVertex2i(93,10);
    glVertex2i(83,10);
    glEnd();

    //Tree-1 Draw

    //Tree Stand
    glBegin(GL_QUADS);
    glColor3ub(110, 44, 0);
    glVertex2i(-44,-25);
    glVertex2i(-44,-10);
    glVertex2i(-42,-10);
    glVertex2i(-42,-25);
    glEnd();

    //Tree Top 1
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84 );
    glVertex2i(-51,-12);
    glVertex2i(-43,9);
    glVertex2i(-35,-12);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84 );
    glVertex2i(-50,-5);
    glVertex2i(-43,15);
    glVertex2i(-36,-5);
    glEnd();

    //Tree Top-3
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84 );
    glVertex2i(-49,2);
    glVertex2i(-43,22);
    glVertex2i(-37,2);
    glEnd();


    //Tree-3 Draw

    //Tree Stand
    glBegin(GL_QUADS);
    glColor3ub(110, 44, 0);
    glVertex2i(44,-25);
    glVertex2i(44,-10);
    glVertex2i(42,-10);
    glVertex2i(42,-25);
    glEnd();

    //Tree Top 1
    glBegin(GL_TRIANGLES);
    glColor3ub(49, 189, 40 );
    glVertex2i(51,-12);
    glVertex2i(43,9);
    glVertex2i(35,-12);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(49, 189, 40 );
    glVertex2i(50,-5);
    glVertex2i(43,15);
    glVertex2i(36,-5);
    glEnd();

    //Tree Top-3
    glBegin(GL_TRIANGLES);
    glColor3ub(49, 189, 40 );
    glVertex2i(49,2);
    glVertex2i(43,22);
    glVertex2i(37,2);
    glEnd();


    //company building
    glBegin(GL_QUADS);
    glColor3ub(244, 247, 122 );
    glVertex2i(-98,-25);
    glVertex2i(-70,-25);
    glVertex2i(-70,10);
    glVertex2i(-98,10);
    glVertex2i(-98,15);
    glVertex2i(-70,15);
    glVertex2i(-70,50);
    glVertex2i(-98,50);
    glVertex2i(-50,-25);
    glVertex2i(-70,-25);
    glVertex2i(-70,25);
    glVertex2i(-50,25);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0, 0, 0 );
    glVertex2i(-70,-25);
    glVertex2i(-70,50);
    glEnd();

    //company building roof
    glBegin(GL_QUADS);
    glColor3ub(93, 109, 126);
    glVertex2i(-99,15);
    glVertex2i(-70,15);
    glVertex2i(-70,10);
    glVertex2i(-99,10);
    glVertex2i(-99,50);
    glVertex2i(-70,50);
    glVertex2i(-70,55);
    glVertex2i(-99,55);
    glVertex2i(-48,25);
    glVertex2i(-70,25);
    glVertex2i(-70,30);
    glVertex2i(-48,30);
    glColor3ub(33, 47, 61 );
    glVertex2i(-45,35);
    glVertex2i(-70,35);
    glVertex2i(-70,30);
    glVertex2i(-45,30);
    glEnd();

    //company Gate Glass system
    glBegin(GL_QUADS);
    glColor3ub(17, 144, 165);
    glVertex2i(-88,-25);
    glVertex2i(-80,-25);
    glVertex2i(-80,-5);
    glVertex2i(-88,-5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(-84,-25);
    glVertex2i(-84,-5);
    glEnd();

    //company window Glass system
    glBegin(GL_QUADS);
    glColor3ub(17, 144, 165);
    glVertex2i(-96,-20);
    glVertex2i(-90,-20);
    glVertex2i(-90,5);
    glVertex2i(-96,5);
    glVertex2i(-78,-20);
    glVertex2i(-72,-20);
    glVertex2i(-72,5);
    glVertex2i(-78,5);
    glVertex2i(-52,-20);
    glVertex2i(-68,-20);
    glVertex2i(-68,-10);
    glVertex2i(-52,-10);
    glVertex2i(-52,-5);
    glVertex2i(-68,-5);
    glVertex2i(-68,5);
    glVertex2i(-52,5);
    glVertex2i(-52,20);
    glVertex2i(-68,20);
    glVertex2i(-68,10);
    glVertex2i(-52,10);
    glVertex2i(-96,20);
    glVertex2i(-72,20);
    glVertex2i(-72,30);
    glVertex2i(-96,30);
    glVertex2i(-96,35);
    glVertex2i(-72,35);
    glVertex2i(-72,45);
    glVertex2i(-96,45);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2i(-96,-10);
    glVertex2i(-90,-10);
    glVertex2i(-78,-10);
    glVertex2i(-72,-10);
    glEnd();
    //Lamp 1
    glBegin(GL_QUADS);
    glColor3ub(33, 47, 61);
    glVertex2i(-72,-25);
    glVertex2i(-70,-25);
    glVertex2i(-70,0);
    glVertex2i(-72,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(-74,5);
    glVertex2f(-68,5);
    glVertex2f(-71,8);
    glEnd();


    //Light
    glBegin(GL_QUADS);
    glColor3ub(251, 250, 0 );
    glVertex2i(-70,0);
    glVertex2i(-72,0);
    glVertex2i(-73,5);
    glVertex2i(-69,5);
    glEnd();



    //Lamp 2
    glBegin(GL_QUADS);
    glColor3ub(33, 47, 61);
    glVertex2i(72,-25);
    glVertex2i(70,-25);
    glVertex2i(70,0);
    glVertex2i(72,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(74,5);
    glVertex2f(68,5);
    glVertex2f(71,8);
    glEnd();


    //Light
    glBegin(GL_QUADS);
    glColor3ub(251, 250, 0 );
    glVertex2i(70,0);
    glVertex2i(72,0);
    glVertex2i(73,5);
    glVertex2i(69,5);
    glEnd();

    glPushMatrix();
    glTranslatef(bmenPosition1,0.0f,0.0f);
    //Man 5 Draw
    //Left Leg
    glBegin(GL_QUADS);
    glColor3ub(127, 50, 19 );
    glVertex2i(68,-30);
    glVertex2i(67,-22);
    glVertex2i(64,-22);
    glVertex2i(66,-30);

    //Right leg
    glVertex2i(64,-30);
    glVertex2i(66,-22);
    glVertex2i(63,-22);
    glVertex2i(62,-30);
    glEnd();

    //Body
    glBegin(GL_POLYGON);
    glColor3ub(15, 189, 157  );
    glVertex2i(67,-22);
    glVertex2i(67,-15);
    glVertex2i(65,-16);
    glVertex2i(63,-15);
    glVertex2i(63,-22);
    glEnd();

    //Left hand
    glBegin(GL_QUADS);
    glColor3ub(15, 189, 157 );
    glVertex2i(68,-15);
    glVertex2i(67,-15);
    glVertex2i(67,-19);
    glVertex2i(68,-19);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(68, -19);
    glVertex2i(67, -20);
    glEnd();


    //Right hand
    glBegin(GL_QUADS);
    glColor3ub(15, 189, 157  );
    glVertex2i(63,-15);
    glVertex2i(62,-15);
    glVertex2i(62,-19);
    glVertex2i(63,-19);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(62, -19);
    glVertex2i(63, -20);
    glEnd();

    //Bag
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(62, -22);
    glVertex2i(62, -28);
    glEnd();

    //Shoe
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(64,-30);
    glVertex2i(63,-28);
    glVertex2i(62,-30);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(68,-30);
    glVertex2i(67,-28);
    glVertex2i(66,-30);
    glEnd();


    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(65, -16);
    glVertex2i(65, -13);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=65;
    y=-12;
    radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Hair
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(68, -11);
    glVertex2f(65, -10);
    glVertex2f(62, -11);
    glVertex2f(64, -9);
    glVertex2f(66, -9);
    glEnd();


    glPopMatrix();

    glPushMatrix();
    glTranslatef(basketPosition,0.0f,0.0f);
//Man 1 Draw
    //Left Leg
    glBegin(GL_QUADS);
    glColor3ub(44, 80, 197);
    glVertex2i(22,-40);
    glVertex2i(23,-32);
    glVertex2i(26,-32);
    glVertex2i(24,-40);

    //Right leg
    glVertex2i(26,-40);
    glVertex2i(24,-32);
    glVertex2i(27,-32);
    glVertex2i(28,-40);
    glEnd();

    //Body
    glBegin(GL_POLYGON);
    glColor3ub(56, 225, 38 );
    glVertex2i(23,-33);
    glVertex2i(23,-26);
    glVertex2i(25,-27);
    glVertex2i(27,-26);
    glVertex2i(27,-33);
    glEnd();

    //Left hand
    glBegin(GL_QUADS);
    glColor3ub(56, 225, 38 );
    glVertex2i(22,-26);
    glVertex2i(23,-26);
    glVertex2i(23,-30);
    glVertex2i(22,-30);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(23, -30);
    glVertex2i(22, -31);
    glEnd();


    //Right hand
    glBegin(GL_QUADS);
    glColor3ub(56, 225, 38 );
    glVertex2i(27,-26);
    glVertex2i(28,-26);
    glVertex2i(28,-30);
    glVertex2i(27,-30);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(27, -30);
    glVertex2i(28, -31);
    glEnd();

    //Shoe
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(26,-40);
    glVertex2i(27,-38);
    glVertex2i(28,-40);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(22,-40);
    glVertex2i(23,-38);
    glVertex2i(24,-40);
    glEnd();


    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(249, 231, 159);
    glVertex2i(25, -27);
    glVertex2i(25, -24);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(249, 231, 159);
    x=25;
    y=-23;
    radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    //Hair
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2i(22,-22);
    glVertex2i(24,-20);
    glVertex2i(26,-20);
    glVertex2i(28,-22);
    glEnd();



    //
    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2i(36,-30);
    glVertex2i(34,-40);
    glVertex2i(30,-40);
    glVertex2i(28,-30);
    glEnd();
    glColor3f(255,0,0);
    renderBitmapString(31,-35,0,GLUT_BITMAP_TIMES_ROMAN_10, "Fish");

    glPopMatrix();




    glPushMatrix();
    glTranslatef(vanPosition1,0.0f,0.0f);
    // van body
    glBegin(GL_POLYGON);
    glColor3ub(253, 254, 254);
    glVertex2f(-90, -50);
    glVertex2f(-50, -50);
    glVertex2f(-51, -40);
    glVertex2f(-55, -35);
    glVertex2f(-60, -20);
    glVertex2f(-85, -20);
    glVertex2f(-90, -35);
    glEnd();
    //Fish sign

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Fish Tail
    glVertex2f(-79, -33);
    glVertex2f(-72, -37);
    glVertex2f(-74, -33);
    glVertex2f(-72, -29);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 0); // Fish body color
    glVertex2f(-87, -33);
    glVertex2f(-77, -39);
    glVertex2f(-77, -26);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0); // Fish  wings
    glVertex2f(-83, -33);
    glVertex2f(-81, -34);
    glVertex2f(-81, -32);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(0, 0, 255);//Fish Eye
    glVertex2f(-85,-33);
    glEnd();
    //van glass
    glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);

    glVertex2i(-61,-23);
    glVertex2i(-56,-35);
    glVertex2i(-66,-35);
    glVertex2i(-66,-23);
    glEnd();
    //van bumper
    glBegin(GL_QUADS);
    glColor3ub(46, 64, 83);
    glVertex2i(-88,-50);
    glVertex2i(-91,-50);
    glVertex2i(-91,-46);
    glVertex2i(-88,-46);
    glVertex2i(-52,-50);
    glVertex2i(-52,-46);
    glVertex2i(-49,-46);
    glVertex2i(-49,-50);
    glEnd();

    //van Light
    glBegin(GL_QUADS);
    glColor3ub(236, 67, 34);
    glVertex2i(-90,-35);
    glVertex2i(-89,-35);
    glVertex2i(-89,-40);
    glVertex2i(-90,-40);
    glColor3ub(251, 250, 32);
    glVertex2i(-51,-40);
    glVertex2i(-55,-40);
    glVertex2i(-55,-42);
    glVertex2i(-51,-42);
    glEnd();

    //Night Light
    glBegin(GL_QUADS);
    glColor3ub(251, 250, 0 );
    glVertex2i(-50,-43);
    glVertex2i(-50,-41);
    glVertex2i(-15,-45);
    glVertex2i(-30,-48);
    glEnd();


    //van wheel-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-61;
    y=-50;
    radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-61;
    y=-50;
    radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //van wheel-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-79;
    y=-50;
    radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-79;
    y=-50;
    radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glPopMatrix();





    glPushMatrix();
    glTranslatef(carPosition1,0.0f,0.0f);
    //car body
    glBegin(GL_QUADS);
    glColor3ub(125, 60, 152);
    glVertex2i(50,-70);
    glVertex2i(85,-70);
    glVertex2i(87,-80);
    glVertex2i(48,-80);
    glVertex2i(58,-70);
    glVertex2i(61,-60);
    glVertex2i(76,-60);
    glVertex2i(78,-70);
    glEnd();

    //car glass
    glBegin(GL_QUADS);
    glColor3ub(52, 152, 219);
    glVertex2i(59,-70);
    glVertex2i(62,-61);
    glVertex2i(75,-61);
    glVertex2i(77,-70);
    glVertex2i(69,-70);
    glVertex2i(69,-61);
    glVertex2i(73,-61);
    glVertex2i(75,-70);
    glEnd();

    //car bumper
    glBegin(GL_QUADS);
    glColor3ub(46, 64, 83);
    glVertex2i(46,-80);
    glVertex2i(53,-80);
    glVertex2i(53,-76);
    glVertex2i(46,-76);
    glVertex2i(88,-80);
    glVertex2i(82,-80);
    glVertex2i(82,-76);
    glVertex2i(88,-76);
    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(69,-80);
    glVertex2i(69,-60);
    glVertex2i(58,-70);
    glVertex2i(78,-70);
    glEnd();

    //car Light
    glBegin(GL_QUADS);
    glColor3ub(236, 67, 34);
    glVertex2i(84,-70);
    glVertex2i(85,-70);
    glVertex2i(85,-75);
    glVertex2i(84,-75);
    glColor3ub(226, 224, 224);
    glVertex2i(51,-70);
    glVertex2i(49,-70);
    glVertex2i(49,-72);
    glVertex2i(51,-72);
    glEnd();

    //Front Light Night
    glBegin(GL_QUADS);
    glColor3ub(251, 250, 0 );
    glVertex2i(49,-73);
    glVertex2i(49,-70);
    glVertex2i(14,-76);
    glVertex2i(29,-79);
    glEnd();


    //Car wheel-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60;
    y=-80;
    radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60;
    y=-80;
    radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Car wheel-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=75;
    y=-80;
    radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=75;
    y=-80;
    radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(policecarPosition2,0.0f,0.0f);

    //Police Car
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2i(45,-90);
    glVertex2i(48,-78);
    glVertex2i(57,-75);
    glVertex2i(65,-65);
    glVertex2i(83,-65);
    glVertex2i(86,-75);
    glVertex2i(93,-75);
    glVertex2i(95,-90);
    glEnd();

    //Front window
    glBegin(GL_QUADS);
    glColor3ub(35, 148, 186);
    glVertex2i(65,-67);
    glVertex2i(73,-67);
    glVertex2i(73,-74);
    glVertex2i(60,-74);
    glEnd();

    //Back window
    glBegin(GL_QUADS);
    glColor3ub(35, 148, 186);
    glVertex2i(74,-67);
    glVertex2i(82,-67);
    glVertex2i(84,-74);
    glVertex2i(74,-74);
    glEnd();

    //Body Art
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(35, 57, 186);
    glVertex2i(52, -80);
    glVertex2i(88, -80);
    glEnd();

    //Front art
    glBegin(GL_QUADS);
    glColor3ub(40, 55, 71 );
    glVertex2i(44,-90);
    glVertex2i(48,-90);
    glVertex2i(48,-87);
    glVertex2i(44,-87);
    glEnd();

    //Back art
    glBegin(GL_QUADS);
    glColor3ub(40, 55, 71 );
    glVertex2i(92,-90);
    glVertex2i(97,-90);
    glVertex2i(97,-87);
    glVertex2i(92,-87);
    glEnd();

    //Front Light art
    glBegin(GL_QUADS);
    glColor3ub(247, 43, 43 );
    glVertex2i(47,-82);
    glVertex2i(50,-82);
    glVertex2i(50,-79);
    glVertex2i(48,-79);
    glEnd();

    //Back Light art
    glBegin(GL_QUADS);
    glColor3ub(247, 43, 43 );
    glVertex2i(91,-82);
    glVertex2i(94,-82);
    glVertex2i(93,-79);
    glVertex2i(91,-79);
    glEnd();

    //Top Light
    glBegin(GL_QUADS);
    glColor3ub(189, 8, 8 );
    glVertex2i(67,-65);
    glVertex2i(69,-65);
    glVertex2i(69,-63);
    glVertex2i(67,-63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8, 68, 189 );
    glVertex2i(69,-65);
    glVertex2i(71,-65);
    glVertex2i(71,-63);
    glVertex2i(69,-63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(189, 8, 8 );
    glVertex2i(71,-65);
    glVertex2i(73,-65);
    glVertex2i(73,-63);
    glVertex2i(71,-63);
    glEnd();

    //Front Light Night
    glBegin(GL_QUADS);
    glColor3ub(251, 250, 0 );
    glVertex2i(45,-82);
    glVertex2i(45,-79);
    glVertex2i(10,-84);
    glVertex2i(25,-87);
    glEnd();

    //Front tire
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60;
    y=-90;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    //Front Tire middle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60;
    y=-90;
    radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    //Back Tire
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=80;
    y=-90;
    radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Back Tire Middle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=80;
    y=-90;
    radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();


    glFlush();


}

//*****************************************************************


//****************************Update thing*************************************

void update(int value)
{


    vanPosition2+=vanspeed2;     //van2_O
    carPosition2-=carSpeed2;  //car2_O

    hujurPosition1-=hujurspeed1;  //hujur1_O
    bmenPosition1+=hujurspeed1;  //bmen1_O
    emenPosition1-=hujurspeed1;   //eman1_o
    lmenPosition1-=hujurspeed1;   //imen1_O



    if(hujurPosition1<-18)
        hujurPosition1=200;


    if(bmenPosition1>43)
        bmenPosition1=-180;

    if(emenPosition1<-160)
        emenPosition1=50;

    if(vanPosition2>195)
    {
        vanPosition2=-40;
        menPosition2=0;

    }
    if(vanPosition2>88 && vanPosition2<93)
    {
        vanPosition2-=1.95;//van break

    }
    if(vanPosition2>88)
    {
        menPosition2+=menspeed2;
        if(menPosition2>28)
        {
            menPosition2+=1.5;
        }


    }

    if(carPosition2<-180)
        carPosition2=70;




    sunPosition2-=sunSpeed2;   //sun_O
    cloudPosition3+=couldSpeed3;  //cloud3_O
    cloudPosition4+=couldSpeed4;  //cloud4_O
    carPosition1-=carSpeed1;  //car1_O
    vanPosition1+=vanspeed1;     //van1_O
    basketPosition-=basketspeed;  //basket_O
    policecarPosition2-=policecarSpeed2;  //police_O


    if(sunPosition2<-180)
        sunPosition2=30;
    if(cloudPosition3>190)
        cloudPosition3=-30;
    if(cloudPosition4>150)
        cloudPosition4=-80;
    if(carPosition1<-180)
        carPosition1=70;
    if(vanPosition1>195)
        vanPosition1=-40;
    if(policecarPosition2<-200)
        policecarPosition2=50;

    if(vanPosition1>96 && vanPosition1<99)
    {
        vanPosition1-=1.95;           //van break
        basketPosition=0;
    }


    if(basketPosition<-23)
        basketPosition=vanPosition1;




    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}




void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}



void handleKeypress(unsigned char key, int x, int y)
{

    switch (key)
    {

    case 'r':
        glutDisplayFunc(display1);
        glutPostRedisplay();
        break;

    case 'p':
        glutDisplayFunc(display1N);
        glutPostRedisplay();
        break;

        glutPostRedisplay();


    }
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1200, 600);
    glutInitWindowPosition (0, 0);
    glutCreateWindow (" Restaurant View");
    glutKeyboardFunc(handleKeypress);
    init ();
    glutDisplayFunc(display1);
    glutTimerFunc(1, update, 0);
    glutMainLoop();
    return 0;

}

