#include <GL/glut.h>
#include <stdio.h>

float angulo = 0.0;
float limiteXpositivo = 40.0;
float limiteYpositivo = 40.0;
float limiteXnegativo = -40.0;
float limiteYnegativo = -40.0;
float EjeXderecho = 0.0;
float EjeYderecho = 0.0;
float EjeXizquierdo = 0.0;
float EjeYizquierdo = 0.0;
float red= 0.0, green=0.0, blue=0.0;
int aux =0;

float traslacionXizquierda = -30.0;
float traslacionYizquierda = 0.0;
float traslacionXderecha = 30.0;
float traslacionYderecha = 0.0;
float traslacionXaux = -70.0;
float traslacionYaux = 0.0;

void inicializar()
{
    glClearColor(1.0,1.0,1.0,1.0);
}

void graficarEjes()
{
    glColor3f(1,1,1);
    glBegin(GL_LINES);
        glVertex2f(-50,0);
        glVertex2f(50,0);
        glVertex2f(0,-50);
        glVertex2f(0,50);
    glEnd();
}

void graficar()
{

    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    graficarEjes();






    //glScalef(0.5,2,1);
    //glRotatef(angulo,0,0,1);




       //Glaciar
     glPushMatrix();

    glTranslatef(traslacionXaux,traslacionYaux,0);

    glColor3f(0.05, 0.21, 0.43);
    glBegin(GL_QUADS);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-12.7, 0.2);
        glVertex2f(-8.1, -5.1);
        glVertex2f(-11.7, -7.9);
    glEnd();

    glColor3f(0.22, 0.32, 0.51);
    glBegin(GL_TRIANGLES);
        glVertex2f(-12.7, -0.2);
        glVertex2f(0.7, 1.3);
        glVertex2f(-8.1, -5.1);
    glEnd();

    glColor3f(0.62, 0.85, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-8.1, -5.1);
        glVertex2f(-3.5, 0.0);
        glVertex2f(2.2, -0.8);
        glVertex2f(5.8, -6.5);
    glEnd();

    glColor3f(0.79, 0.91, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(-3.5, 0.0);
        glVertex2f(0.7, 1.3);
        glVertex2f(6.1, -1.5);
    glEnd();

    glColor3f(0.79, 0.91, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(2.2, -0.8);
        glVertex2f(7.5, -3.3);
        glVertex2f(5.8, -6.5);
    glEnd();

    glColor3f(0.41, 0.58, 0.89);
    glBegin(GL_TRIANGLES);
        glVertex2f(2.2, -0.8);
        glVertex2f(6.1, -1.5);
        glVertex2f(7.5, -3.3);
    glEnd();

    glColor3f(0.48, 0.87, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.3);
        glVertex2f(6.1, 4.7);
        glVertex2f(6.1, -1.5);
    glEnd();

    glColor3f(0.33, 0.46, 0.65);
    glBegin(GL_QUADS);
        glVertex2f(6.1, -1.5);
        glVertex2f(6.1, 4.7);
        glVertex2f(8.1, 7.4);
        glVertex2f(7.5, -3.3);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_QUADS);
        glVertex2f(7.5, -3.3);
        glVertex2f(8.1, 7.4);
        glVertex2f(11.1, 13.1);
        glVertex2f(12.1, 6.0);
    glEnd();

    glColor3f(0.38, 0.46, 0.52);
    glBegin(GL_TRIANGLES);
        glVertex2f(5.8, -6.5);
        glVertex2f(7.5, -3.3);
        glVertex2f(11.8, -3.5);
    glEnd();

    glColor3f(0.24, 0.34, 0.56);
    glBegin(GL_TRIANGLES);
        glVertex2f(7.5, -3.3);
        glVertex2f(12.1, 6.0);
        glVertex2f(14.1, 5.7);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(7.5, -3.3);
        glVertex2f(14.1, 5.7);
        glVertex2f(11.8, -3.5);
    glEnd();

    glColor3f(0.24, 0.34, 0.56);
    glBegin(GL_TRIANGLES);
        glVertex2f(11.8, -3.5);
        glVertex2f(14.1, 5.7);
        glVertex2f(19.3, -5.4);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(11.8, -3.5);
        glVertex2f(19.3, -5.4);
        glVertex2f(25.3, -9.7);
    glEnd();

    glColor3f(0.61, 0.80, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(14.1, 5.7);
        glVertex2f(18.7, 10.0);
        glVertex2f(19.3, -5.4);
    glEnd();

    glColor3f(0.80, 0.92, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(19.3, -5.4);
        glVertex2f(18.7, 10.0);
        glVertex2f(24.0, -6.2);
    glEnd();

    glColor3f(0.63, 0.85, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(19.3, -5.4);
        glVertex2f(24.0, -6.2);
        glVertex2f(25.3, -9.7);
    glEnd();

    glColor3f(0.43, 0.66, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(24.0, -6.2);
        glVertex2f(25.3, -9.7);
        glVertex2f(29.2, -6.8);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(24.0, -6.2);
        glVertex2f(21.7, 1.0);
        glVertex2f(24.0, 2.9);
    glEnd();

    glColor3f(0.62, 0.79, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(21.7, 1.0);
        glVertex2f(18.7, 10.0);
        glVertex2f(24.0, 2.9);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.20, 0.31, 0.49);
        glVertex2f(24.0, -6.2);

        glColor3f(0.25, 0.43, 0.73);
        glVertex2f(24.0, 2.9);

        glColor3f(0.20, 0.27, 0.41);
        glVertex2f(29.2, -6.8);
    glEnd();

    glColor3f(0.21, 0.30, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(29.2, -6.8);
        glVertex2f(26.6, 1.3);
        glVertex2f(31.8, -5.9);
    glEnd();

    glColor3f(0.45, 0.59, 0.71);
    glBegin(GL_TRIANGLES);
        glVertex2f(26.6, 1.3);
        glVertex2f(32.1, 0.1);
        glVertex2f(31.8, -5.9);
    glEnd();

    glColor3f(0.30, 0.42, 0.55);
    glBegin(GL_TRIANGLES);
        glVertex2f(31.8, -5.9);
        glVertex2f(32.1, 0.1);
        glVertex2f(37.8, -6.3);
    glEnd();

    glColor3f(0.58, 0.80, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(26.6, 1.3);
        glVertex2f(28.1, 10.2);
        glVertex2f(32.1, 0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(26.6, 1.3);
        glVertex2f(24.8, 7.8);
        glVertex2f(28.1, 10.2);
    glEnd();

    glColor3f(0.29, 0.47, 0.84);
    glBegin(GL_TRIANGLES);
        glVertex2f(37.8, -6.3);
        glVertex2f(33.8, 1.4);
        glVertex2f(36.7, 0.5);
    glEnd();

    glColor3f(0.58, 0.81, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(37.8, -6.3);
        glVertex2f(36.7, 0.5);
        glVertex2f(40.4, -4.8);
    glEnd();

    glColor3f(0.12, 0.36, 0.81);
    glBegin(GL_QUADS);
        glVertex2f(32.1, 0.1);
        glVertex2f(28.1, 10.2);
        glVertex2f(33.8, 1.4);
        glVertex2f(37.8, -6.3);
    glEnd();

    glColor3f(0.12, 0.36, 0.81);
    glBegin(GL_QUADS);
        glVertex2f(24.0, 2.9);
        glVertex2f(22.9, 14.0);
        glVertex2f(26.6, 1.3);
        glVertex2f(29.2, -6.8);
    glEnd();

    glColor3f(0.56, 0.70, 0.94);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(24.0, 2.9);
        glVertex2f(23.4, 8.6);
    glEnd();

    glColor3f(0.90, 0.97, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(22.2, 15.1);
        glVertex2f(23.4, 8.6);
    glEnd();

    glColor3f(0.77, 0.89, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(22.2, 15.1);
        glVertex2f(18.9, 17.9);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(18.9, 17.9);
        glVertex2f(15.4, 16.3);
    glEnd();

    glColor3f(0.28, 0.47, 0.85);
    glBegin(GL_QUADS);
        glVertex2f(14.1, 5.7);
        glVertex2f(13.7, 16.7);
        glVertex2f(15.4, 16.3);
        glVertex2f(18.7, 10.0);
    glEnd();

    glColor3f(0.0, 0.34, 0.69);
    glBegin(GL_QUADS);
        glVertex2f(15.1, 10.7);
        glVertex2f(13.7, 16.7);
        glVertex2f(15.4, 16.3);
        glVertex2f(18.7, 10.0);
    glEnd();

    glColor3f(0.57, 0.81, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(12.1, 6.0);
        glVertex2f(14.1, 5.7);
        glVertex2f(13.7, 16.7);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(12.1, 6.0);
        glVertex2f(10.9, 15.3);
        glVertex2f(13.7, 16.7);
    glEnd();

    glColor3f(0.70, 0.83, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(8.1, 7.4);
        glVertex2f(9.1, 13.0);
        glVertex2f(11.1, 13.2);
    glEnd();

    glColor3f(0.77, 0.92, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(6.1, 4.7);
        glVertex2f(9.1, 13.0);
        glVertex2f(8.1, 7.4);
    glEnd();

    glColor3f(0.27, 0.46, 0.83);
    glBegin(GL_TRIANGLES);
        glVertex2f(9.1, 13.0);
        glVertex2f(6.2, 22.0);
        glVertex2f(11.1, 13.2);
    glEnd();

    glColor3f(0.57, 0.81, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(6.7, 12.2);
        glVertex2f(6.2, 22.0);
        glVertex2f(9.1, 13.0);
    glEnd();

    glColor3f(0.85, 0.94, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(0.7, 1.3);
        glVertex2f(6.7, 12.2);
        glVertex2f(9.1, 13.0);
        glVertex2f(6.1, 4.7);
    glEnd();

    glColor3f(0.09, 0.31, 0.74);
    glBegin(GL_TRIANGLES);
        glVertex2f(6.7, 12.2);
        glVertex2f(2.9, 18.3);
        glVertex2f(6.2, 22.0);
    glEnd();

    glColor3f(0.29, 0.47, 0.86);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.3);
        glVertex2f(2.9, 18.3);
        glVertex2f(6.7, 12.2);
    glEnd();

    glColor3f(0.71, 0.87, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.3);
        glVertex2f(0.2, 14.3);
        glVertex2f(2.9, 18.3);
    glEnd();

    glColor3f(0.57, 0.81, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.2, 14.3);
        glVertex2f(-0.1, 17.4);
        glVertex2f(2.9, 18.3);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-1.3, 11.7);
        glVertex2f(-2.0, 13.6);
        glVertex2f(0.2, 14.3);
    glEnd();

    glColor3f(0.43, 0.6, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(0.2, 14.3);
        glVertex2f(0.7, 1.3);
    glEnd();

    glColor3f(0.56, 0.83, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-2.0, 13.6);
        glVertex2f(-1.3, 11.7);
    glEnd();

    glColor3f(0.44, 0.67, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-6.0, 11.0);
        glVertex2f(-3.9, 9.3);
    glEnd();

    glColor3f(0.57, 0.81, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-6.0, 11.0);
        glVertex2f(-9.9, 13.1);
    glEnd();

    glColor3f(0.73, 0.87, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-11.6, 10.0);
        glVertex2f(-9.9, 13.1);
    glEnd();

    glColor3f(0.30, 0.48, 0.81);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-14.9, 11.2);
        glVertex2f(-11.6, 10.0);
    glEnd();

    glColor3f(0.0, 0.30, 0.59);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-14.8, 5.6);
        glVertex2f(-14.9, 11.2);
    glEnd();


    glColor3f(0.36, 0.52, 0.77);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.33);
        glVertex2f(-14.8, 5.9);
        glVertex2f(-12.7, -0.2);
    glEnd();

    glColor3f(0.38, 0.57, 0.81);
    glBegin(GL_TRIANGLES);
        glVertex2f(-15.5, -1.5);
        glVertex2f(-16.6, 5.7);
        glVertex2f(-14.8, 5.6);
    glEnd();

    glColor3f(0.38, 0.57, 0.81);
    glBegin(GL_TRIANGLES);
        glVertex2f(-16.6, 5.7);
        glVertex2f(-14.9, 11.2);
        glVertex2f(-14.8, 5.6);
    glEnd();

    glColor3f(0.07, 0.24, 0.53);
    glBegin(GL_TRIANGLES);
        glVertex2f(-15.5, -1.5);
        glVertex2f(-14.8, 5.6);
        glVertex2f(-12.7, -0.2);
    glEnd();

    glColor3f(0.23, 0.35, 0.57);
    glBegin(GL_TRIANGLES);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-15.5, -1.5);
        glVertex2f(-12.7, -0.2);
    glEnd();

    glColor3f(0.05, 0.28, 0.60);
    glBegin(GL_QUADS);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-18.4, 0.9);
        glVertex2f(-16.6, 5.7);
        glVertex2f(-15.5, -1.5);
    glEnd();

    glColor3f(0.05, 0.28, 0.60);
    glBegin(GL_QUADS);
        glVertex2f(-18.4, 0.9);
        glVertex2f(-21.5, 6.9);
        glVertex2f(-14.9, 11.2);
        glVertex2f(-16.6, 5.7);
    glEnd();

    glColor3f(0.29, 0.47, 0.86);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.5, 6.9);
        glVertex2f(-21.6, 13.6);
        glVertex2f(-14.9, 11.2);
    glEnd();

    glColor3f(0.09, 0.31, 0.75);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.6, 13.6);
        glVertex2f(-18.7, 19.0);
        glVertex2f(-14.9, 11.2);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.6, 13.6);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-18.7, 19.0);
    glEnd();

    glColor3f(0.81, 0.94, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-23.0, 25.2);
        glVertex2f(-20.7, 18.4);
    glEnd();

    glColor3f(0.69, 0.83, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-21.6, 13.6);
    glEnd();

    glColor3f(0.73, 0.88, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.5, 6.9);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-21.6, 13.6);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-25.2, 21.0);
        glVertex2f(-23.0, 25.2);
    glEnd();

    glColor3f(0.8, 0.93, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-25.9, 18.0);
        glVertex2f(-25.2, 21.0);
    glEnd();

    glColor3f(0.57, 0.81, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-29.8, 14.0);
        glVertex2f(-25.2, 21.0);
        glVertex2f(-25.9, 18.0);
    glEnd();

    glColor3f(0.67, 0.82, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-27.2, 9.8);
        glVertex2f(-25.9, 18.0);
        glVertex2f(-23.5, 11.1);
    glEnd();

    glColor3f(0.84, 0.93, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-27.2, 9.8);
        glVertex2f(-23.5, 11.1);
    glEnd();

    glColor3f(0.76, 0.90, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-29.8, 14.0);
        glVertex2f(-25.9, 18.0);
    glEnd();

    glColor3f(0.45, 0.62, 0.92);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-25.5, 1.1);
    glEnd();

    glColor3f(0.72, 0.97, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-25.5, 1.1);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-21.5, -1.1);
    glEnd();

    glColor3f(0.31, 0.49, 0.88);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.5, -1.1);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-18.4, 0.9);
    glEnd();

    glColor3f(0.43, 0.67, 0.99);
    glBegin(GL_QUADS);
        glVertex2f(-21.3, -4.2);
        glVertex2f(-21.5, -1.1);
        glVertex2f(-18.4, 0.9);
        glVertex2f(-18.7, -7.6);
    glEnd();


    glColor3f(0.09, 0.31, 0.74);
    glBegin(GL_TRIANGLES);
        glVertex2f(-25.3, 1.1);
        glVertex2f(-21.5, -1.1);
        glVertex2f(-21.3, -4.2);
    glEnd();

    glColor3f(0.28, 0.47, 0.85);
    glBegin(GL_TRIANGLES);
        glVertex2f(-22.8, -7.8);
        glVertex2f(-25.3, 1.1);
        glVertex2f(-18.7, -7.6);
    glEnd();

    glColor3f(0.43, 0.67, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(-26.4, -6.8);
        glVertex2f(-25.3, 1.1);
        glVertex2f(-22.8, -7.8);
    glEnd();

    glColor3f(0.28, 0.47, 0.85);
    glBegin(GL_TRIANGLES);
        glVertex2f(-26.4, -6.8);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-25.3, 1.1);
    glEnd();

    glColor3f(0.58, 0.81, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-31.4, -9.8);
        glVertex2f(-26.4, -6.8);
        glVertex2f(-22.8, -7.8);
    glEnd();

    glColor3f(0.43, 0.67, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-31.4, -9.8);
        glVertex2f(-22.8, -7.8);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-11.8, -7.9);
    glEnd();

    glColor3f(0.0, 0.20, 0.32);
    glBegin(GL_TRIANGLES);
        glVertex2f(-32.6, -0.1);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-26.4, -6.8);
    glEnd();

    glColor3f(0.22, 0.36, 0.60);
    glBegin(GL_TRIANGLES);
        glVertex2f(-32.6, -0.1);
        glVertex2f(-30.2, 6.2);
        glVertex2f(-28.2, 3.5);
    glEnd();

    glColor3f(0.08, 0.29, 0.69);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-30.2, 6.2);
        glVertex2f(-29.8, 14.0);
    glEnd();

 //Glaciar End

glPopMatrix();












         //Glaciar
     glPushMatrix();

    glTranslatef(traslacionXizquierda,traslacionYizquierda,0);

    glColor3f(0.05, 0.21, 0.43);
    glBegin(GL_QUADS);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-12.7, 0.2);
        glVertex2f(-8.1, -5.1);
        glVertex2f(-11.7, -7.9);
    glEnd();

    glColor3f(0.22, 0.32, 0.51);
    glBegin(GL_TRIANGLES);
        glVertex2f(-12.7, -0.2);
        glVertex2f(0.7, 1.3);
        glVertex2f(-8.1, -5.1);
    glEnd();

    glColor3f(0.62, 0.85, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-8.1, -5.1);
        glVertex2f(-3.5, 0.0);
        glVertex2f(2.2, -0.8);
        glVertex2f(5.8, -6.5);
    glEnd();

    glColor3f(0.79, 0.91, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(-3.5, 0.0);
        glVertex2f(0.7, 1.3);
        glVertex2f(6.1, -1.5);
    glEnd();

    glColor3f(0.79, 0.91, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(2.2, -0.8);
        glVertex2f(7.5, -3.3);
        glVertex2f(5.8, -6.5);
    glEnd();

    glColor3f(0.41, 0.58, 0.89);
    glBegin(GL_TRIANGLES);
        glVertex2f(2.2, -0.8);
        glVertex2f(6.1, -1.5);
        glVertex2f(7.5, -3.3);
    glEnd();

    glColor3f(0.48, 0.87, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.3);
        glVertex2f(6.1, 4.7);
        glVertex2f(6.1, -1.5);
    glEnd();

    glColor3f(0.33, 0.46, 0.65);
    glBegin(GL_QUADS);
        glVertex2f(6.1, -1.5);
        glVertex2f(6.1, 4.7);
        glVertex2f(8.1, 7.4);
        glVertex2f(7.5, -3.3);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_QUADS);
        glVertex2f(7.5, -3.3);
        glVertex2f(8.1, 7.4);
        glVertex2f(11.1, 13.1);
        glVertex2f(12.1, 6.0);
    glEnd();

    glColor3f(0.38, 0.46, 0.52);
    glBegin(GL_TRIANGLES);
        glVertex2f(5.8, -6.5);
        glVertex2f(7.5, -3.3);
        glVertex2f(11.8, -3.5);
    glEnd();

    glColor3f(0.24, 0.34, 0.56);
    glBegin(GL_TRIANGLES);
        glVertex2f(7.5, -3.3);
        glVertex2f(12.1, 6.0);
        glVertex2f(14.1, 5.7);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(7.5, -3.3);
        glVertex2f(14.1, 5.7);
        glVertex2f(11.8, -3.5);
    glEnd();

    glColor3f(0.24, 0.34, 0.56);
    glBegin(GL_TRIANGLES);
        glVertex2f(11.8, -3.5);
        glVertex2f(14.1, 5.7);
        glVertex2f(19.3, -5.4);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(11.8, -3.5);
        glVertex2f(19.3, -5.4);
        glVertex2f(25.3, -9.7);
    glEnd();

    glColor3f(0.61, 0.80, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(14.1, 5.7);
        glVertex2f(18.7, 10.0);
        glVertex2f(19.3, -5.4);
    glEnd();

    glColor3f(0.80, 0.92, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(19.3, -5.4);
        glVertex2f(18.7, 10.0);
        glVertex2f(24.0, -6.2);
    glEnd();

    glColor3f(0.63, 0.85, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(19.3, -5.4);
        glVertex2f(24.0, -6.2);
        glVertex2f(25.3, -9.7);
    glEnd();

    glColor3f(0.43, 0.66, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(24.0, -6.2);
        glVertex2f(25.3, -9.7);
        glVertex2f(29.2, -6.8);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(24.0, -6.2);
        glVertex2f(21.7, 1.0);
        glVertex2f(24.0, 2.9);
    glEnd();

    glColor3f(0.62, 0.79, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(21.7, 1.0);
        glVertex2f(18.7, 10.0);
        glVertex2f(24.0, 2.9);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.20, 0.31, 0.49);
        glVertex2f(24.0, -6.2);

        glColor3f(0.25, 0.43, 0.73);
        glVertex2f(24.0, 2.9);

        glColor3f(0.20, 0.27, 0.41);
        glVertex2f(29.2, -6.8);
    glEnd();

    glColor3f(0.21, 0.30, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(29.2, -6.8);
        glVertex2f(26.6, 1.3);
        glVertex2f(31.8, -5.9);
    glEnd();

    glColor3f(0.45, 0.59, 0.71);
    glBegin(GL_TRIANGLES);
        glVertex2f(26.6, 1.3);
        glVertex2f(32.1, 0.1);
        glVertex2f(31.8, -5.9);
    glEnd();

    glColor3f(0.30, 0.42, 0.55);
    glBegin(GL_TRIANGLES);
        glVertex2f(31.8, -5.9);
        glVertex2f(32.1, 0.1);
        glVertex2f(37.8, -6.3);
    glEnd();

    glColor3f(0.58, 0.80, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(26.6, 1.3);
        glVertex2f(28.1, 10.2);
        glVertex2f(32.1, 0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(26.6, 1.3);
        glVertex2f(24.8, 7.8);
        glVertex2f(28.1, 10.2);
    glEnd();

    glColor3f(0.29, 0.47, 0.84);
    glBegin(GL_TRIANGLES);
        glVertex2f(37.8, -6.3);
        glVertex2f(33.8, 1.4);
        glVertex2f(36.7, 0.5);
    glEnd();

    glColor3f(0.58, 0.81, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(37.8, -6.3);
        glVertex2f(36.7, 0.5);
        glVertex2f(40.4, -4.8);
    glEnd();

    glColor3f(0.12, 0.36, 0.81);
    glBegin(GL_QUADS);
        glVertex2f(32.1, 0.1);
        glVertex2f(28.1, 10.2);
        glVertex2f(33.8, 1.4);
        glVertex2f(37.8, -6.3);
    glEnd();

    glColor3f(0.12, 0.36, 0.81);
    glBegin(GL_QUADS);
        glVertex2f(24.0, 2.9);
        glVertex2f(22.9, 14.0);
        glVertex2f(26.6, 1.3);
        glVertex2f(29.2, -6.8);
    glEnd();

    glColor3f(0.56, 0.70, 0.94);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(24.0, 2.9);
        glVertex2f(23.4, 8.6);
    glEnd();

    glColor3f(0.90, 0.97, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(22.2, 15.1);
        glVertex2f(23.4, 8.6);
    glEnd();

    glColor3f(0.77, 0.89, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(22.2, 15.1);
        glVertex2f(18.9, 17.9);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(18.9, 17.9);
        glVertex2f(15.4, 16.3);
    glEnd();

    glColor3f(0.28, 0.47, 0.85);
    glBegin(GL_QUADS);
        glVertex2f(14.1, 5.7);
        glVertex2f(13.7, 16.7);
        glVertex2f(15.4, 16.3);
        glVertex2f(18.7, 10.0);
    glEnd();

    glColor3f(0.0, 0.34, 0.69);
    glBegin(GL_QUADS);
        glVertex2f(15.1, 10.7);
        glVertex2f(13.7, 16.7);
        glVertex2f(15.4, 16.3);
        glVertex2f(18.7, 10.0);
    glEnd();

    glColor3f(0.57, 0.81, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(12.1, 6.0);
        glVertex2f(14.1, 5.7);
        glVertex2f(13.7, 16.7);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(12.1, 6.0);
        glVertex2f(10.9, 15.3);
        glVertex2f(13.7, 16.7);
    glEnd();

    glColor3f(0.70, 0.83, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(8.1, 7.4);
        glVertex2f(9.1, 13.0);
        glVertex2f(11.1, 13.2);
    glEnd();

    glColor3f(0.77, 0.92, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(6.1, 4.7);
        glVertex2f(9.1, 13.0);
        glVertex2f(8.1, 7.4);
    glEnd();

    glColor3f(0.27, 0.46, 0.83);
    glBegin(GL_TRIANGLES);
        glVertex2f(9.1, 13.0);
        glVertex2f(6.2, 22.0);
        glVertex2f(11.1, 13.2);
    glEnd();

    glColor3f(0.57, 0.81, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(6.7, 12.2);
        glVertex2f(6.2, 22.0);
        glVertex2f(9.1, 13.0);
    glEnd();

    glColor3f(0.85, 0.94, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(0.7, 1.3);
        glVertex2f(6.7, 12.2);
        glVertex2f(9.1, 13.0);
        glVertex2f(6.1, 4.7);
    glEnd();

    glColor3f(0.09, 0.31, 0.74);
    glBegin(GL_TRIANGLES);
        glVertex2f(6.7, 12.2);
        glVertex2f(2.9, 18.3);
        glVertex2f(6.2, 22.0);
    glEnd();

    glColor3f(0.29, 0.47, 0.86);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.3);
        glVertex2f(2.9, 18.3);
        glVertex2f(6.7, 12.2);
    glEnd();

    glColor3f(0.71, 0.87, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.3);
        glVertex2f(0.2, 14.3);
        glVertex2f(2.9, 18.3);
    glEnd();

    glColor3f(0.57, 0.81, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.2, 14.3);
        glVertex2f(-0.1, 17.4);
        glVertex2f(2.9, 18.3);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-1.3, 11.7);
        glVertex2f(-2.0, 13.6);
        glVertex2f(0.2, 14.3);
    glEnd();

    glColor3f(0.43, 0.6, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(0.2, 14.3);
        glVertex2f(0.7, 1.3);
    glEnd();

    glColor3f(0.56, 0.83, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-2.0, 13.6);
        glVertex2f(-1.3, 11.7);
    glEnd();

    glColor3f(0.44, 0.67, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-6.0, 11.0);
        glVertex2f(-3.9, 9.3);
    glEnd();

    glColor3f(0.57, 0.81, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-6.0, 11.0);
        glVertex2f(-9.9, 13.1);
    glEnd();

    glColor3f(0.73, 0.87, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-11.6, 10.0);
        glVertex2f(-9.9, 13.1);
    glEnd();

    glColor3f(0.30, 0.48, 0.81);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-14.9, 11.2);
        glVertex2f(-11.6, 10.0);
    glEnd();

    glColor3f(0.0, 0.30, 0.59);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-14.8, 5.6);
        glVertex2f(-14.9, 11.2);
    glEnd();


    glColor3f(0.36, 0.52, 0.77);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.33);
        glVertex2f(-14.8, 5.9);
        glVertex2f(-12.7, -0.2);
    glEnd();

    glColor3f(0.38, 0.57, 0.81);
    glBegin(GL_TRIANGLES);
        glVertex2f(-15.5, -1.5);
        glVertex2f(-16.6, 5.7);
        glVertex2f(-14.8, 5.6);
    glEnd();

    glColor3f(0.38, 0.57, 0.81);
    glBegin(GL_TRIANGLES);
        glVertex2f(-16.6, 5.7);
        glVertex2f(-14.9, 11.2);
        glVertex2f(-14.8, 5.6);
    glEnd();

    glColor3f(0.07, 0.24, 0.53);
    glBegin(GL_TRIANGLES);
        glVertex2f(-15.5, -1.5);
        glVertex2f(-14.8, 5.6);
        glVertex2f(-12.7, -0.2);
    glEnd();

    glColor3f(0.23, 0.35, 0.57);
    glBegin(GL_TRIANGLES);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-15.5, -1.5);
        glVertex2f(-12.7, -0.2);
    glEnd();

    glColor3f(0.05, 0.28, 0.60);
    glBegin(GL_QUADS);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-18.4, 0.9);
        glVertex2f(-16.6, 5.7);
        glVertex2f(-15.5, -1.5);
    glEnd();

    glColor3f(0.05, 0.28, 0.60);
    glBegin(GL_QUADS);
        glVertex2f(-18.4, 0.9);
        glVertex2f(-21.5, 6.9);
        glVertex2f(-14.9, 11.2);
        glVertex2f(-16.6, 5.7);
    glEnd();

    glColor3f(0.29, 0.47, 0.86);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.5, 6.9);
        glVertex2f(-21.6, 13.6);
        glVertex2f(-14.9, 11.2);
    glEnd();

    glColor3f(0.09, 0.31, 0.75);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.6, 13.6);
        glVertex2f(-18.7, 19.0);
        glVertex2f(-14.9, 11.2);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.6, 13.6);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-18.7, 19.0);
    glEnd();

    glColor3f(0.81, 0.94, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-23.0, 25.2);
        glVertex2f(-20.7, 18.4);
    glEnd();

    glColor3f(0.69, 0.83, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-21.6, 13.6);
    glEnd();

    glColor3f(0.73, 0.88, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.5, 6.9);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-21.6, 13.6);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-25.2, 21.0);
        glVertex2f(-23.0, 25.2);
    glEnd();

    glColor3f(0.8, 0.93, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-25.9, 18.0);
        glVertex2f(-25.2, 21.0);
    glEnd();

    glColor3f(0.57, 0.81, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-29.8, 14.0);
        glVertex2f(-25.2, 21.0);
        glVertex2f(-25.9, 18.0);
    glEnd();

    glColor3f(0.67, 0.82, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-27.2, 9.8);
        glVertex2f(-25.9, 18.0);
        glVertex2f(-23.5, 11.1);
    glEnd();

    glColor3f(0.84, 0.93, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-27.2, 9.8);
        glVertex2f(-23.5, 11.1);
    glEnd();

    glColor3f(0.76, 0.90, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-29.8, 14.0);
        glVertex2f(-25.9, 18.0);
    glEnd();

    glColor3f(0.45, 0.62, 0.92);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-25.5, 1.1);
    glEnd();

    glColor3f(0.72, 0.97, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-25.5, 1.1);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-21.5, -1.1);
    glEnd();

    glColor3f(0.31, 0.49, 0.88);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.5, -1.1);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-18.4, 0.9);
    glEnd();

    glColor3f(0.43, 0.67, 0.99);
    glBegin(GL_QUADS);
        glVertex2f(-21.3, -4.2);
        glVertex2f(-21.5, -1.1);
        glVertex2f(-18.4, 0.9);
        glVertex2f(-18.7, -7.6);
    glEnd();


    glColor3f(0.09, 0.31, 0.74);
    glBegin(GL_TRIANGLES);
        glVertex2f(-25.3, 1.1);
        glVertex2f(-21.5, -1.1);
        glVertex2f(-21.3, -4.2);
    glEnd();

    glColor3f(0.28, 0.47, 0.85);
    glBegin(GL_TRIANGLES);
        glVertex2f(-22.8, -7.8);
        glVertex2f(-25.3, 1.1);
        glVertex2f(-18.7, -7.6);
    glEnd();

    glColor3f(0.43, 0.67, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(-26.4, -6.8);
        glVertex2f(-25.3, 1.1);
        glVertex2f(-22.8, -7.8);
    glEnd();

    glColor3f(0.28, 0.47, 0.85);
    glBegin(GL_TRIANGLES);
        glVertex2f(-26.4, -6.8);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-25.3, 1.1);
    glEnd();

    glColor3f(0.58, 0.81, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-31.4, -9.8);
        glVertex2f(-26.4, -6.8);
        glVertex2f(-22.8, -7.8);
    glEnd();

    glColor3f(0.43, 0.67, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-31.4, -9.8);
        glVertex2f(-22.8, -7.8);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-11.8, -7.9);
    glEnd();

    glColor3f(0.0, 0.20, 0.32);
    glBegin(GL_TRIANGLES);
        glVertex2f(-32.6, -0.1);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-26.4, -6.8);
    glEnd();

    glColor3f(0.22, 0.36, 0.60);
    glBegin(GL_TRIANGLES);
        glVertex2f(-32.6, -0.1);
        glVertex2f(-30.2, 6.2);
        glVertex2f(-28.2, 3.5);
    glEnd();

    glColor3f(0.08, 0.29, 0.69);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-30.2, 6.2);
        glVertex2f(-29.8, 14.0);
    glEnd();

 //Glaciar End

glPopMatrix();









     //Glaciar
     glPushMatrix();

    glTranslatef(traslacionXderecha,traslacionYderecha,0);

    glColor3f(0.05, 0.21, 0.43);
    glBegin(GL_QUADS);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-12.7, 0.2);
        glVertex2f(-8.1, -5.1);
        glVertex2f(-11.7, -7.9);
    glEnd();

    glColor3f(0.22, 0.32, 0.51);
    glBegin(GL_TRIANGLES);
        glVertex2f(-12.7, -0.2);
        glVertex2f(0.7, 1.3);
        glVertex2f(-8.1, -5.1);
    glEnd();

    glColor3f(0.62, 0.85, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-8.1, -5.1);
        glVertex2f(-3.5, 0.0);
        glVertex2f(2.2, -0.8);
        glVertex2f(5.8, -6.5);
    glEnd();

    glColor3f(0.79, 0.91, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(-3.5, 0.0);
        glVertex2f(0.7, 1.3);
        glVertex2f(6.1, -1.5);
    glEnd();

    glColor3f(0.79, 0.91, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(2.2, -0.8);
        glVertex2f(7.5, -3.3);
        glVertex2f(5.8, -6.5);
    glEnd();

    glColor3f(0.41, 0.58, 0.89);
    glBegin(GL_TRIANGLES);
        glVertex2f(2.2, -0.8);
        glVertex2f(6.1, -1.5);
        glVertex2f(7.5, -3.3);
    glEnd();

    glColor3f(0.48, 0.87, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.3);
        glVertex2f(6.1, 4.7);
        glVertex2f(6.1, -1.5);
    glEnd();

    glColor3f(0.33, 0.46, 0.65);
    glBegin(GL_QUADS);
        glVertex2f(6.1, -1.5);
        glVertex2f(6.1, 4.7);
        glVertex2f(8.1, 7.4);
        glVertex2f(7.5, -3.3);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_QUADS);
        glVertex2f(7.5, -3.3);
        glVertex2f(8.1, 7.4);
        glVertex2f(11.1, 13.1);
        glVertex2f(12.1, 6.0);
    glEnd();

    glColor3f(0.38, 0.46, 0.52);
    glBegin(GL_TRIANGLES);
        glVertex2f(5.8, -6.5);
        glVertex2f(7.5, -3.3);
        glVertex2f(11.8, -3.5);
    glEnd();

    glColor3f(0.24, 0.34, 0.56);
    glBegin(GL_TRIANGLES);
        glVertex2f(7.5, -3.3);
        glVertex2f(12.1, 6.0);
        glVertex2f(14.1, 5.7);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(7.5, -3.3);
        glVertex2f(14.1, 5.7);
        glVertex2f(11.8, -3.5);
    glEnd();

    glColor3f(0.24, 0.34, 0.56);
    glBegin(GL_TRIANGLES);
        glVertex2f(11.8, -3.5);
        glVertex2f(14.1, 5.7);
        glVertex2f(19.3, -5.4);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(11.8, -3.5);
        glVertex2f(19.3, -5.4);
        glVertex2f(25.3, -9.7);
    glEnd();

    glColor3f(0.61, 0.80, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(14.1, 5.7);
        glVertex2f(18.7, 10.0);
        glVertex2f(19.3, -5.4);
    glEnd();

    glColor3f(0.80, 0.92, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(19.3, -5.4);
        glVertex2f(18.7, 10.0);
        glVertex2f(24.0, -6.2);
    glEnd();

    glColor3f(0.63, 0.85, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(19.3, -5.4);
        glVertex2f(24.0, -6.2);
        glVertex2f(25.3, -9.7);
    glEnd();

    glColor3f(0.43, 0.66, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(24.0, -6.2);
        glVertex2f(25.3, -9.7);
        glVertex2f(29.2, -6.8);
    glEnd();

    glColor3f(0.0, 0.26, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(24.0, -6.2);
        glVertex2f(21.7, 1.0);
        glVertex2f(24.0, 2.9);
    glEnd();

    glColor3f(0.62, 0.79, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(21.7, 1.0);
        glVertex2f(18.7, 10.0);
        glVertex2f(24.0, 2.9);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.20, 0.31, 0.49);
        glVertex2f(24.0, -6.2);

        glColor3f(0.25, 0.43, 0.73);
        glVertex2f(24.0, 2.9);

        glColor3f(0.20, 0.27, 0.41);
        glVertex2f(29.2, -6.8);
    glEnd();

    glColor3f(0.21, 0.30, 0.49);
    glBegin(GL_TRIANGLES);
        glVertex2f(29.2, -6.8);
        glVertex2f(26.6, 1.3);
        glVertex2f(31.8, -5.9);
    glEnd();

    glColor3f(0.45, 0.59, 0.71);
    glBegin(GL_TRIANGLES);
        glVertex2f(26.6, 1.3);
        glVertex2f(32.1, 0.1);
        glVertex2f(31.8, -5.9);
    glEnd();

    glColor3f(0.30, 0.42, 0.55);
    glBegin(GL_TRIANGLES);
        glVertex2f(31.8, -5.9);
        glVertex2f(32.1, 0.1);
        glVertex2f(37.8, -6.3);
    glEnd();

    glColor3f(0.58, 0.80, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(26.6, 1.3);
        glVertex2f(28.1, 10.2);
        glVertex2f(32.1, 0.1);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(26.6, 1.3);
        glVertex2f(24.8, 7.8);
        glVertex2f(28.1, 10.2);
    glEnd();

    glColor3f(0.29, 0.47, 0.84);
    glBegin(GL_TRIANGLES);
        glVertex2f(37.8, -6.3);
        glVertex2f(33.8, 1.4);
        glVertex2f(36.7, 0.5);
    glEnd();

    glColor3f(0.58, 0.81, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(37.8, -6.3);
        glVertex2f(36.7, 0.5);
        glVertex2f(40.4, -4.8);
    glEnd();

    glColor3f(0.12, 0.36, 0.81);
    glBegin(GL_QUADS);
        glVertex2f(32.1, 0.1);
        glVertex2f(28.1, 10.2);
        glVertex2f(33.8, 1.4);
        glVertex2f(37.8, -6.3);
    glEnd();

    glColor3f(0.12, 0.36, 0.81);
    glBegin(GL_QUADS);
        glVertex2f(24.0, 2.9);
        glVertex2f(22.9, 14.0);
        glVertex2f(26.6, 1.3);
        glVertex2f(29.2, -6.8);
    glEnd();

    glColor3f(0.56, 0.70, 0.94);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(24.0, 2.9);
        glVertex2f(23.4, 8.6);
    glEnd();

    glColor3f(0.90, 0.97, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(22.2, 15.1);
        glVertex2f(23.4, 8.6);
    glEnd();

    glColor3f(0.77, 0.89, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(22.2, 15.1);
        glVertex2f(18.9, 17.9);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(18.7, 10.0);
        glVertex2f(18.9, 17.9);
        glVertex2f(15.4, 16.3);
    glEnd();

    glColor3f(0.28, 0.47, 0.85);
    glBegin(GL_QUADS);
        glVertex2f(14.1, 5.7);
        glVertex2f(13.7, 16.7);
        glVertex2f(15.4, 16.3);
        glVertex2f(18.7, 10.0);
    glEnd();

    glColor3f(0.0, 0.34, 0.69);
    glBegin(GL_QUADS);
        glVertex2f(15.1, 10.7);
        glVertex2f(13.7, 16.7);
        glVertex2f(15.4, 16.3);
        glVertex2f(18.7, 10.0);
    glEnd();

    glColor3f(0.57, 0.81, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(12.1, 6.0);
        glVertex2f(14.1, 5.7);
        glVertex2f(13.7, 16.7);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(12.1, 6.0);
        glVertex2f(10.9, 15.3);
        glVertex2f(13.7, 16.7);
    glEnd();

    glColor3f(0.70, 0.83, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(8.1, 7.4);
        glVertex2f(9.1, 13.0);
        glVertex2f(11.1, 13.2);
    glEnd();

    glColor3f(0.77, 0.92, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(6.1, 4.7);
        glVertex2f(9.1, 13.0);
        glVertex2f(8.1, 7.4);
    glEnd();

    glColor3f(0.27, 0.46, 0.83);
    glBegin(GL_TRIANGLES);
        glVertex2f(9.1, 13.0);
        glVertex2f(6.2, 22.0);
        glVertex2f(11.1, 13.2);
    glEnd();

    glColor3f(0.57, 0.81, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(6.7, 12.2);
        glVertex2f(6.2, 22.0);
        glVertex2f(9.1, 13.0);
    glEnd();

    glColor3f(0.85, 0.94, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(0.7, 1.3);
        glVertex2f(6.7, 12.2);
        glVertex2f(9.1, 13.0);
        glVertex2f(6.1, 4.7);
    glEnd();

    glColor3f(0.09, 0.31, 0.74);
    glBegin(GL_TRIANGLES);
        glVertex2f(6.7, 12.2);
        glVertex2f(2.9, 18.3);
        glVertex2f(6.2, 22.0);
    glEnd();

    glColor3f(0.29, 0.47, 0.86);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.3);
        glVertex2f(2.9, 18.3);
        glVertex2f(6.7, 12.2);
    glEnd();

    glColor3f(0.71, 0.87, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.3);
        glVertex2f(0.2, 14.3);
        glVertex2f(2.9, 18.3);
    glEnd();

    glColor3f(0.57, 0.81, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.2, 14.3);
        glVertex2f(-0.1, 17.4);
        glVertex2f(2.9, 18.3);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-1.3, 11.7);
        glVertex2f(-2.0, 13.6);
        glVertex2f(0.2, 14.3);
    glEnd();

    glColor3f(0.43, 0.6, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(0.2, 14.3);
        glVertex2f(0.7, 1.3);
    glEnd();

    glColor3f(0.56, 0.83, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-2.0, 13.6);
        glVertex2f(-1.3, 11.7);
    glEnd();

    glColor3f(0.44, 0.67, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-6.0, 11.0);
        glVertex2f(-3.9, 9.3);
    glEnd();

    glColor3f(0.57, 0.81, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-6.0, 11.0);
        glVertex2f(-9.9, 13.1);
    glEnd();

    glColor3f(0.73, 0.87, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-11.6, 10.0);
        glVertex2f(-9.9, 13.1);
    glEnd();

    glColor3f(0.30, 0.48, 0.81);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-14.9, 11.2);
        glVertex2f(-11.6, 10.0);
    glEnd();

    glColor3f(0.0, 0.30, 0.59);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5, 3.5);
        glVertex2f(-14.8, 5.6);
        glVertex2f(-14.9, 11.2);
    glEnd();


    glColor3f(0.36, 0.52, 0.77);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.7, 1.33);
        glVertex2f(-14.8, 5.9);
        glVertex2f(-12.7, -0.2);
    glEnd();

    glColor3f(0.38, 0.57, 0.81);
    glBegin(GL_TRIANGLES);
        glVertex2f(-15.5, -1.5);
        glVertex2f(-16.6, 5.7);
        glVertex2f(-14.8, 5.6);
    glEnd();

    glColor3f(0.38, 0.57, 0.81);
    glBegin(GL_TRIANGLES);
        glVertex2f(-16.6, 5.7);
        glVertex2f(-14.9, 11.2);
        glVertex2f(-14.8, 5.6);
    glEnd();

    glColor3f(0.07, 0.24, 0.53);
    glBegin(GL_TRIANGLES);
        glVertex2f(-15.5, -1.5);
        glVertex2f(-14.8, 5.6);
        glVertex2f(-12.7, -0.2);
    glEnd();

    glColor3f(0.23, 0.35, 0.57);
    glBegin(GL_TRIANGLES);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-15.5, -1.5);
        glVertex2f(-12.7, -0.2);
    glEnd();

    glColor3f(0.05, 0.28, 0.60);
    glBegin(GL_QUADS);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-18.4, 0.9);
        glVertex2f(-16.6, 5.7);
        glVertex2f(-15.5, -1.5);
    glEnd();

    glColor3f(0.05, 0.28, 0.60);
    glBegin(GL_QUADS);
        glVertex2f(-18.4, 0.9);
        glVertex2f(-21.5, 6.9);
        glVertex2f(-14.9, 11.2);
        glVertex2f(-16.6, 5.7);
    glEnd();

    glColor3f(0.29, 0.47, 0.86);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.5, 6.9);
        glVertex2f(-21.6, 13.6);
        glVertex2f(-14.9, 11.2);
    glEnd();

    glColor3f(0.09, 0.31, 0.75);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.6, 13.6);
        glVertex2f(-18.7, 19.0);
        glVertex2f(-14.9, 11.2);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.6, 13.6);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-18.7, 19.0);
    glEnd();

    glColor3f(0.81, 0.94, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-23.0, 25.2);
        glVertex2f(-20.7, 18.4);
    glEnd();

    glColor3f(0.69, 0.83, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-21.6, 13.6);
    glEnd();

    glColor3f(0.73, 0.88, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.5, 6.9);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-21.6, 13.6);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-24.6, 17.4);
        glVertex2f(-25.2, 21.0);
        glVertex2f(-23.0, 25.2);
    glEnd();

    glColor3f(0.8, 0.93, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-25.9, 18.0);
        glVertex2f(-25.2, 21.0);
    glEnd();

    glColor3f(0.57, 0.81, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-29.8, 14.0);
        glVertex2f(-25.2, 21.0);
        glVertex2f(-25.9, 18.0);
    glEnd();

    glColor3f(0.67, 0.82, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-27.2, 9.8);
        glVertex2f(-25.9, 18.0);
        glVertex2f(-23.5, 11.1);
    glEnd();

    glColor3f(0.84, 0.93, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-27.2, 9.8);
        glVertex2f(-23.5, 11.1);
    glEnd();

    glColor3f(0.76, 0.90, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-29.8, 14.0);
        glVertex2f(-25.9, 18.0);
    glEnd();

    glColor3f(0.45, 0.62, 0.92);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-25.5, 1.1);
    glEnd();

    glColor3f(0.72, 0.97, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2f(-25.5, 1.1);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-21.5, -1.1);
    glEnd();

    glColor3f(0.31, 0.49, 0.88);
    glBegin(GL_TRIANGLES);
        glVertex2f(-21.5, -1.1);
        glVertex2f(-23.5, 11.1);
        glVertex2f(-18.4, 0.9);
    glEnd();

    glColor3f(0.43, 0.67, 0.99);
    glBegin(GL_QUADS);
        glVertex2f(-21.3, -4.2);
        glVertex2f(-21.5, -1.1);
        glVertex2f(-18.4, 0.9);
        glVertex2f(-18.7, -7.6);
    glEnd();


    glColor3f(0.09, 0.31, 0.74);
    glBegin(GL_TRIANGLES);
        glVertex2f(-25.3, 1.1);
        glVertex2f(-21.5, -1.1);
        glVertex2f(-21.3, -4.2);
    glEnd();

    glColor3f(0.28, 0.47, 0.85);
    glBegin(GL_TRIANGLES);
        glVertex2f(-22.8, -7.8);
        glVertex2f(-25.3, 1.1);
        glVertex2f(-18.7, -7.6);
    glEnd();

    glColor3f(0.43, 0.67, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(-26.4, -6.8);
        glVertex2f(-25.3, 1.1);
        glVertex2f(-22.8, -7.8);
    glEnd();

    glColor3f(0.28, 0.47, 0.85);
    glBegin(GL_TRIANGLES);
        glVertex2f(-26.4, -6.8);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-25.3, 1.1);
    glEnd();

    glColor3f(0.58, 0.81, 0.98);
    glBegin(GL_TRIANGLES);
        glVertex2f(-31.4, -9.8);
        glVertex2f(-26.4, -6.8);
        glVertex2f(-22.8, -7.8);
    glEnd();

    glColor3f(0.43, 0.67, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-31.4, -9.8);
        glVertex2f(-22.8, -7.8);
        glVertex2f(-18.7, -7.6);
        glVertex2f(-11.8, -7.9);
    glEnd();

    glColor3f(0.0, 0.20, 0.32);
    glBegin(GL_TRIANGLES);
        glVertex2f(-32.6, -0.1);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-26.4, -6.8);
    glEnd();

    glColor3f(0.22, 0.36, 0.60);
    glBegin(GL_TRIANGLES);
        glVertex2f(-32.6, -0.1);
        glVertex2f(-30.2, 6.2);
        glVertex2f(-28.2, 3.5);
    glEnd();

    glColor3f(0.08, 0.29, 0.69);
    glBegin(GL_TRIANGLES);
        glVertex2f(-28.2, 3.5);
        glVertex2f(-30.2, 6.2);
        glVertex2f(-29.8, 14.0);
    glEnd();

 //Glaciar End

glPopMatrix();







    glColor3f(0.57, 0.78, 0.90);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5,-3.4);  //1
        glVertex2f(-4.5,3.8);   //2
        glVertex2f(0.4,-6.9);   //3
    glEnd();

    glColor3f(0.57, 0.78, 0.90);
    glBegin(GL_TRIANGLES);
        glVertex2f(-4.5,3.8);   //4
        glVertex2f(5.2,3.8);    //5
        glVertex2f(7.2,-3.4);   //6
    glEnd();

    glColor3f(0.57, 0.78, 0.90);
    glBegin(GL_TRIANGLES);
        glVertex2f(0.4,-6.9);
        glVertex2f(-4.5,3.8);
        glVertex2f(7.2,-3.4);
    glEnd();


    glColor3f(0.64, 0.83, 0.93);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.5,-3.4);
        glVertex2f(-7.0,1.9);
        glVertex2f(-5.0,1.9);
    glEnd();

    glColor3f(0.85, 0.94, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(-9.2,-3.9);
        glVertex2f(-7.0,1.9);
        glVertex2f(-6.5,-3.4);
    glEnd();

    glColor3f(0.85, 0.94, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(-6.8,-8.3);
        glVertex2f(-9.2,-3.9);
        glVertex2f(-6.5,-3.4);
    glEnd();

    glColor3f(0.49, 0.72, 0.87);
    glBegin(GL_QUADS);
        glVertex2f(-6.8,-8.3);
        glVertex2f(-6.5,-3.4);
        glVertex2f(0.4,-6.9);
        glVertex2f(-3.9,-10.3);
    glEnd();

    glColor3f(0.67, 0.87, 0.94);
    glBegin(GL_TRIANGLES);
        glVertex2f(-5.2,-11.8);
        glVertex2f(-6.8,-8.3);
        glVertex2f(-3.9,-10.3);
    glEnd();

    glColor3f(0.101, 0.109, 0.26);
    glBegin(GL_TRIANGLES);          // pie izquierdo
        glVertex2f(-5.38,-12.0);
        glVertex2f(-3.9,-10.3);
        glVertex2f(-1.4,-12.0);
    glEnd();

    glColor3f(0.36, 0.58, 0.80);
    glBegin(GL_TRIANGLES);
        glVertex2f(-3.9,-10.3);
        glVertex2f(0.4,-6.9);
        glVertex2f(-1.4,-12.0);
    glEnd();

    glColor3f(0.36, 0.58, 0.80);
    glBegin(GL_QUADS);
        glVertex2f(-1.4,-12.0);
        glVertex2f(0.4,-6.9);
        glVertex2f(4.5,-10.3);
        glVertex2f(1.9,-12.0);
    glEnd();

    glColor3f(0.101, 0.109, 0.26);
    glBegin(GL_TRIANGLES);          //pies derecho
        glVertex2f(1.9,-12.0);
        glVertex2f(4.5,-10.3);
        glVertex2f(6.0,-12.0);
    glEnd();

    glColor3f(0.49, 0.72, 0.87);
    glBegin(GL_QUADS);
        glVertex2f(0.4,-6.9);
        glVertex2f(7.2,-3.4);
        glVertex2f(7.4,-8.4);
        glVertex2f(4.5,-10.3);
    glEnd();

    glColor3f(0.67, 0.87, 0.94);
    glBegin(GL_TRIANGLES);
        glVertex2f(4.5,-10.3);
        glVertex2f(7.4,-8.4);
        glVertex2f(5.75,-11.85);
    glEnd();

    glColor3f(0.84, 0.93, 0.96);
    glBegin(GL_TRIANGLES);
        glVertex2f(7.4,-8.4);
        glVertex2f(7.2,-3.4);
        glVertex2f(9.9,-4.0);
    glEnd();

    glColor3f(0.84, 0.93, 0.96);
    glBegin(GL_TRIANGLES);
        glVertex2f(7.2,-3.4);
        glVertex2f(7.8,1.9);
        glVertex2f(9.9,-4.0);
    glEnd();

    glColor3f(0.65, 0.83, 0.92);
    glBegin(GL_TRIANGLES);
        glVertex2f(7.2,-3.4);
        glVertex2f(5.7,1.9);
        glVertex2f(7.8,1.9);
    glEnd();

    //Brazo Derecho

    glColor3f(0.55, 0.74, 0.89);
    glBegin(GL_TRIANGLES);
        glVertex2f(5.7,1.9);
        glVertex2f(5.2,3.8);
        glVertex2f(10.3+EjeXderecho,1.8+EjeYderecho);
    glEnd();

    glColor3f(0.88, 0.93, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(5.2, 3.8);
        glVertex2f(6.0, 7.0);
        glVertex2f(9.1+(EjeXderecho+0.1), 4.0+EjeYderecho);
    glEnd();

    glColor3f(0.78, 0.88, 0.95);
    glBegin(GL_TRIANGLES);
        glVertex2f(5.2,3.8);
        glVertex2f(9.1+(EjeXderecho+0.2), 4.0+EjeYderecho);
        glVertex2f(10.3+EjeXderecho,1.8+EjeYderecho);
    glEnd();

    glColor3f(0.86, 0.93, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(10.3+(EjeXderecho-0.1),1.8+EjeYderecho);
        glVertex2f(9.1+(EjeXderecho+0.2), 4.0+EjeYderecho);
        glVertex2f(12.9+(EjeXderecho-0.1), 1.7+EjeYderecho);
    glEnd();

    glColor3f(0.78, 0.98, 0.95);
    glBegin(GL_TRIANGLES);
        glVertex2f(10.3+(EjeXderecho-0.20),1.8+EjeYderecho);
        glVertex2f(12.9+(EjeXderecho-0.30), 1.7+EjeYderecho);
        glVertex2f(13.4+(EjeXderecho-0.40), -1.4+EjeYderecho);
    glEnd();

    glColor3f(0.86, 0.93, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(13.4+(EjeXderecho-0.40), -1.4+EjeYderecho);
        glVertex2f(12.9+(EjeXderecho-0.50), 1.7+EjeYderecho);
        glVertex2f(14.8+(EjeXderecho-0.60), -1.5+EjeYderecho);
    glEnd();


    //Brazo Derecho End


    //Brazo Izquierdo

    glColor3f(0.88, 0.94, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(-8.5+(EjeXizquierdo-0.4), 4.1+EjeYizquierdo);
        glVertex2f(-5.4, 7.1);
        glVertex2f(-4.5,3.8);
    glEnd();

    glColor3f(0.78, 0.89, 0.96);
    glBegin(GL_TRIANGLES);
        glVertex2f(-10.9+EjeXizquierdo, 1.8+EjeYizquierdo);
        glVertex2f(-8.5+(EjeXizquierdo-0.4), 4.1+EjeYizquierdo);
        glVertex2f(-4.5,3.8);
    glEnd();

    glColor3f(0.57, 0.75, 0.89);
    glBegin(GL_TRIANGLES);
        glVertex2f(-10.9+EjeXizquierdo, 1.8+EjeYizquierdo);
        glVertex2f(-4.5,3.8);
        glVertex2f(-5.0,1.9);
    glEnd();

    glColor3f(0.86, 0.94, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(-12.1+EjeXizquierdo, 1.8+EjeYizquierdo);
        glVertex2f(-8.5+(EjeXizquierdo-0.4), 4.1+EjeYizquierdo);
        glVertex2f(-10.9+(EjeXizquierdo+0.5), 1.8+EjeYizquierdo);
    glEnd();


    glColor3f(0.78, 0.89, 0.95);
    glBegin(GL_TRIANGLES);
        glVertex2f(-13.0+EjeXizquierdo, -1.5+EjeYizquierdo);
        glVertex2f(-12.1+(EjeXizquierdo+0.3), 1.8+EjeYizquierdo);
        glVertex2f(-10.9+(EjeXizquierdo+0.5), 1.8+EjeYizquierdo);
    glEnd();

    glColor3f(0.85, 0.96, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(-14.1+EjeXizquierdo, -1.5+EjeYizquierdo);
        glVertex2f(-12.1+(EjeXizquierdo+0.3), 1.8+EjeYizquierdo);
        glVertex2f(-13.0+(EjeXizquierdo+0.5), -1.5+EjeYizquierdo);
    glEnd();

    //Brazo Izquierdo End

    glColor3f(0.67, 0.87, 0.94);
    glBegin(GL_QUADS);
        glVertex2f(-4.5, 3.8);
        glVertex2f(-1.5, 9.0);
        glVertex2f(2.0, 9.0);
        glVertex2f(5.2, 3.8);
    glEnd();

    glColor3f(0.77, 0.91, 0.95);
    glBegin(GL_TRIANGLES);
        glVertex2f(-4.5, 3.8);
        glVertex2f(-5.4, 7.1);
        glVertex2f(-1.5, 9.0);
    glEnd();

    glColor3f(0.77, 0.91, 0.95);
    glBegin(GL_TRIANGLES);
        glVertex2f(5.2, 3.8);
        glVertex2f(2.0, 9.0);
        glVertex2f(6.0, 7.0);
    glEnd();

    //Cabeza

    glColor3f(0.30, 0.56, 0.77);
    glBegin(GL_QUADS);
        glVertex2f(-1.5, 9.0);
        glVertex2f(-1.2, 9.5);
        glVertex2f(1.8, 9.5);
        glVertex2f(2.0, 9.0);
    glEnd();

    glColor3f(0.52, 0.74, 0.87);
    glBegin(GL_QUADS);
        glVertex2f(-3.85, 10.4);
        glVertex2f(-3.4, 10.9);
        glVertex2f(-1.2, 9.5);
        glVertex2f(-1.5, 9.0);
    glEnd();


    glColor3f(0.52, 0.74, 0.87);
    glBegin(GL_QUADS);
        glVertex2f(2.0, 9.0);
        glVertex2f(1.8, 9.5);
        glVertex2f(4.0, 11.0);
        glVertex2f(4.3, 10.3);
    glEnd();

    glColor3f(0.67, 0.90, 0.93);
    glBegin(GL_TRIANGLES);
        glVertex2f(4.0, 11.0);
        glVertex2f(4.5, 11.9);
        glVertex2f(4.3, 10.3);
    glEnd();

    glColor3f(0.67, 0.90, 0.93);
    glBegin(GL_TRIANGLES);
        glVertex2f(-3.85, 10.4);
        glVertex2f(-3.8, 12.0);
        glVertex2f(-3.4, 10.9);
    glEnd();

    glColor3f(0.11, 0.20, 0.45);
    glBegin(GL_TRIANGLES);
        glVertex2f(-3.4, 10.9);
        glVertex2f(-3.8, 12.0);
        glVertex2f(-3.2, 11.9);
    glEnd();

    glColor3f(0.19, 0.36, 0.62);
    glBegin(GL_TRIANGLES);
        glVertex2f(-3.8, 12.0);
        glVertex2f(-3.35, 13.4);
        glVertex2f(-3.2, 11.9);
    glEnd();


    glColor3f(0.11, 0.20, 0.45);
    glBegin(GL_TRIANGLES);
        glVertex2f(4.0, 11.0);
        glVertex2f(3.9, 11.9);
        glVertex2f(4.5, 11.9);
    glEnd();

    glColor3f(0.19, 0.36, 0.62);
    glBegin(GL_TRIANGLES);
        glVertex2f(3.9, 11.9);
        glVertex2f(4.0, 13.5);
        glVertex2f(4.5, 11.9);
    glEnd();

    glColor3f(0.13, 0.21, 0.50);
    glBegin(GL_TRIANGLES);
        glVertex2f(-3.35, 13.4);
        glVertex2f(-2.6, 14.9);
        glVertex2f(-2.0, 14.1);
    glEnd();

    glColor3f(0.13, 0.21, 0.50);
    glBegin(GL_TRIANGLES);
        glVertex2f(4.0, 13.5);
        glVertex2f(3.2, 15.1);
        glVertex2f(2.8, 14.2);
    glEnd();

    glColor3f(0.10, 0.12, 0.37);
    glBegin(GL_POLYGON);
        glVertex2f(-2.6, 14.9);
        glVertex2f(-1.5, 13.5);
        glVertex2f(0.5, 14.4);
        glVertex2f(2.1, 13.5);
        glVertex2f(2.8, 14.2);
        glVertex2f(3.2, 15.1);
        glVertex2f(1.9, 16.1);
        glVertex2f(-1.2, 16.1);
    glEnd();

    glColor3f(0.13, 0.21, 0.50);
    glBegin(GL_POLYGON);
        glVertex2f(-1.5, 13.5);
        glVertex2f(0.5, 14.4);
        glVertex2f(2.0, 13.5);
        glVertex2f(1.6, 11.8);
        glVertex2f(0.4, 12.6);
        glVertex2f(-1, 11.6);
    glEnd();

    glColor3f(0.10, 0.12, 0.37);
    glBegin(GL_POLYGON);
        glVertex2f(0.4, 12.6);
        glVertex2f(1.6, 11.8);
        glVertex2f(2.01, 11.1);
        glVertex2f(0.4, 10.0);
        glVertex2f(-1.4, 11.1);
        glVertex2f(-1, 11.6);
    glEnd();


    //NARIZ
    glColor3f(0.13, 0.21, 0.50);
    glBegin(GL_QUADS);
        glVertex2f(0.4, 12.2);
        glVertex2f(1.05, 11.6);
        glVertex2f(0.4, 10.9);
        glVertex2f(-0.4, 11.6);
    glEnd();

    glColor3f(0.88, 0.93, 0.97);
    glBegin(GL_POLYGON);
        glVertex2f(-0.4, 11.6);
        glVertex2f(0, 11.6);
        glVertex2f(-0.25, 11.9);
        glVertex2f(0.4, 12.2);
        glVertex2f(0.7, 11.9);
        glVertex2f(0.6, 11.6);
        glVertex2f(1.05, 11.6);
    glEnd();
    //END NARIZ

    glColor3f(0.67, 0.87, 0.94);
    glBegin(GL_TRIANGLES);
        glVertex2f(1.8, 9.5);
        glVertex2f(0.4, 10.0);
        glVertex2f(-1.3, 9.5);
    glEnd();

    glColor3f(0.88, 0.93, 0.97);
    glBegin(GL_POLYGON);
        glVertex2f(2.01, 11.1);
        glVertex2f(3.9, 11.9);
        glVertex2f(4.0, 11.0);
        glVertex2f(1.8, 9.5);
        glVertex2f(0.4, 10.0);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(-1.4, 11.1);
        glVertex2f(-3.2, 11.9);
        glVertex2f(-3.4, 10.9);
        glVertex2f(-1.2, 9.5);
        glVertex2f(0.4, 10.0);
    glEnd();

    //OJOS
        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
            glVertex2f(-2.5, 12.3);
            glVertex2f(-2.5, 12.7);
            glVertex2f(-2.3, 12.9);
            glVertex2f(-2.0, 12.9);
            glVertex2f(-1.7, 12.7);
            glVertex2f(-1.7, 12.3);
            glVertex2f(-2.0, 11.9);
            glVertex2f(-2.3, 11.9);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2f(2.5, 12.3);
            glVertex2f(2.5, 12.7);
            glVertex2f(2.7, 12.9);
            glVertex2f(3.0, 12.9);
            glVertex2f(3.3, 12.7);
            glVertex2f(3.3, 12.3);
            glVertex2f(3.0, 11.9);
            glVertex2f(2.7, 11.9);
        glEnd();
    //END OJOS

    //Cabeza End




    glFlush();
}

void redimensionar(int w, int h)
{
    glViewport(0,0,w,h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-50,50,-50,50,-1,1);

}

void manejarTeclado(unsigned char key,int x, int y)
{
    switch(key)
    {
        case 'a':   angulo = angulo + 5;
                    break;
        case 'b':   angulo = angulo - 5;
                    break;
    }
    glutPostRedisplay();
}

void rotarTriangulo(int i)
{
    angulo = angulo + 5;
    glutPostRedisplay();
    glutTimerFunc(500,rotarTriangulo,1);
}
void trasladarEnX(int i)
{

    if(aux==0){
        if(EjeXderecho>-1.0){
            EjeXderecho = EjeXderecho - 0.15;
            EjeYderecho = EjeYderecho - 0.10;
            EjeXizquierdo = EjeXizquierdo + 0.15;
            EjeYizquierdo = EjeYizquierdo - 0.10;

            if(traslacionXderecha<80){
                traslacionXderecha = traslacionXderecha + 1;

            }else{
                traslacionXderecha = -88;
            }

            if(traslacionXizquierda<80){
                traslacionXizquierda = traslacionXizquierda +1;
            }else{
                traslacionXizquierda = -88;
            }

            if(traslacionXaux<80){
                traslacionXaux = traslacionXaux +1;
            }else{
                traslacionXaux = -88;
            }


            glutPostRedisplay();
            glutTimerFunc(50,trasladarEnX,2);
        }else{
            EjeXderecho = EjeXderecho + 0.15;
            EjeYderecho = EjeYderecho + 0.10;
            EjeXizquierdo = EjeXizquierdo - 0.15;
            EjeYizquierdo = EjeYizquierdo + 0.10;
            aux = 1;
        }
    }
    if(aux==1){
        if(EjeXderecho<=0.0){
            EjeXderecho = EjeXderecho + 0.15;
            EjeYderecho = EjeYderecho + 0.10;
            EjeXizquierdo = EjeXizquierdo - 0.15;
            EjeYizquierdo = EjeYizquierdo + 0.10;

             if(traslacionXderecha<80){
                traslacionXderecha = traslacionXderecha + 1;

            }else{
                traslacionXderecha = -88;
            }

            if(traslacionXizquierda<80){
                traslacionXizquierda = traslacionXizquierda +1;
            }else{
                traslacionXizquierda = -88;
            }

            if(traslacionXaux<80){
                traslacionXaux = traslacionXaux +1;
            }else{
                traslacionXaux = -88;
            }

            glutPostRedisplay();
            glutTimerFunc(50,trasladarEnX,2);
        }else{
            aux=0;
            EjeXderecho = EjeXderecho - 0.15;
            EjeYderecho = EjeYderecho - 0.10;
            EjeXizquierdo = EjeXizquierdo + 0.15;
            EjeYizquierdo = EjeYizquierdo - 0.10;
            glutTimerFunc(50,trasladarEnX,2);
        }
    }
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,400);
    glutInitWindowPosition(100,200);
    glutCreateWindow("CHRISTIAN VP");
    inicializar();

    glutDisplayFunc(graficar);
    glutReshapeFunc(redimensionar);
    glutKeyboardFunc(manejarTeclado);

    glutTimerFunc(500,rotarTriangulo,1);

    glutTimerFunc(50,trasladarEnX,2);


    glutMainLoop();

    return 0;
}
