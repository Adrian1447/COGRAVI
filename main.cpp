#include <GL/glut.h>
bool salto, agacha, pasoDer, pasoIzq, libre = true;
float traslacionX=20, traslacionY=10, angulo=24;
int aux=0;

void inicializar(){
    glClearColor(1.0,1.0,1.0,1.0);
}

void graficarEjes(){
    glColor3f(0,0,0);
    glBegin(GL_LINES);
        glVertex2f(-50,0);
        glVertex2f(50,0);
        glVertex2f(0,-50);
        glVertex2f(0,50);
    glEnd();
}

void graficar(){
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    graficarEjes();

    if (libre){
        // Agregar aqui animacion cuando esta libre
    }
    if (salto) {
        glTranslatef(0,traslacionY,0);
    }
    if (agacha) {
        glScalef(1,.5,1);
        glTranslatef(0,-traslacionY,0);
    }
    if (pasoDer) {
        glTranslatef(traslacionX,0,0);
        glRotatef(-angulo,0,0,1);
    }
    if (pasoIzq) {
        glTranslatef(-traslacionX,0,0);
        glRotatef(angulo,0,0,1);
    }

    glRotatef(0,0,0,1);

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

    glColor3f(0.55, 0.74, 0.89);
    glBegin(GL_TRIANGLES);    //Brazo Derecho
        glVertex2f(5.7,1.9);
        glVertex2f(5.2,3.8);
        glVertex2f(10.3,1.8);
    glEnd();

    glColor3f(0.88, 0.93, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(5.2,3.8);
        glVertex2f(6.0, 7.0);
        glVertex2f(9.1, 4.0);
    glEnd();

    glColor3f(0.78, 0.88, 0.95);
    glBegin(GL_TRIANGLES);
        glVertex2f(5.2,3.8);
        glVertex2f(9.1, 4.0);
        glVertex2f(10.3,1.8);
    glEnd();

    glColor3f(0.86, 0.93, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(10.3,1.8);
        glVertex2f(9.1, 4.0);
        glVertex2f(12.9, 1.7);
    glEnd();

    glColor3f(0.78, 0.98, 0.95);
    glBegin(GL_TRIANGLES);
        glVertex2f(10.3,1.8);
        glVertex2f(12.9, 1.7);
        glVertex2f(13.4, -1.4);
    glEnd();

    glColor3f(0.86, 0.93, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(13.4, -1.4);
        glVertex2f(12.9, 1.7);
        glVertex2f(14.8, -1.5);
    glEnd();


    //Brazo Derecho End

    //Brazo Izquierdo

    glColor3f(0.88, 0.94, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(-8.5, 4.1);
        glVertex2f(-5.4, 7.1);
        glVertex2f(-4.5,3.8);
    glEnd();

    glColor3f(0.78, 0.89, 0.96);
    glBegin(GL_TRIANGLES);
        glVertex2f(-10.9, 1.8);
        glVertex2f(-8.5, 4.1);
        glVertex2f(-4.5,3.8);
    glEnd();

    glColor3f(0.57, 0.75, 0.89);
    glBegin(GL_TRIANGLES);
        glVertex2f(-10.9, 1.8);
        glVertex2f(-4.5,3.8);
        glVertex2f(-5.0,1.9);
    glEnd();

    glColor3f(0.86, 0.94, 0.97);
    glBegin(GL_TRIANGLES);
        glVertex2f(-12.1, 1.8);
        glVertex2f(-8.5, 4.1);
        glVertex2f(-10.9, 1.8);
    glEnd();


    glColor3f(0.78, 0.89, 0.95);
    glBegin(GL_TRIANGLES);
        glVertex2f(-13.0, -1.5);
        glVertex2f(-12.1, 1.8);
        glVertex2f(-10.9, 1.8);
    glEnd();

    glColor3f(0.85, 0.96, 0.99);
    glBegin(GL_TRIANGLES);
        glVertex2f(-14.1, -1.5);
        glVertex2f(-12.1, 1.8);
        glVertex2f(-13.0, -1.5);
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

void redimensionar(int w, int h){
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-50,50,-50,50,-1,1);
}

void regresarPosicion(int i){
    salto = false;
    agacha = false;
    pasoDer = false;
    pasoIzq = false;
    libre = true;
    glutPostRedisplay();
}

void manejarTeclado(unsigned char key,int x, int y){
    switch(key){
        case 'a':
        pasoIzq = true;
        break;
        case 'd':
        pasoDer = true;
        break;
        case 'w':
        salto = true;
        break;
        case 's':
        agacha = true;
        break;
    }
    libre = false;
    glutTimerFunc(200,regresarPosicion,0);
    glutPostRedisplay();
}


int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,400);
    glutInitWindowPosition(100,200);
    glutCreateWindow("COGRAVI GRUPAL SEMANA 04");
    inicializar();

    glutDisplayFunc(graficar);
    glutReshapeFunc(redimensionar);
    glutKeyboardFunc(manejarTeclado);

    glutMainLoop();

    return 0;
}
