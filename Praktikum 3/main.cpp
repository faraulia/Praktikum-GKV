#include <GL/glut.h> 

static int shoulder = 0, elbow = 0, palm = 0, thumb = 0, index = 0, middle = 0, ring = 0, little = 0, jari = 0, atas = 0, ruas = 0;

void init(void) {
    glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
    glShadeModel (GL_FLAT);
}

void lengan(void) {
    glClear (GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef (-4.0, 0.0, 0.0);
    glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef (2.0, 1.0, 1.0);
    glutWireCube (1.0);
    glPopMatrix();
    glTranslatef (1.0, 0.0, 0.0);
    glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
    glRotatef ((GLfloat) palm, 1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef (2.0, 1.0, 1.0);
    glutWireCube (1.0);
    glPopMatrix();
    glPushMatrix();
    glRotatef ((GLfloat) atas, 0.0, 1.0, 0.0);
    glTranslatef (1.4, 0.0, 0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef (1.8, 2.7, 0.6);
    glutWireCube (1.0);
    glPopMatrix();
    
    //ibu jari
    glTranslatef (0.3, 1.3, 0);
    glRotatef ((GLfloat) jari, 0.0, 1.0, 0.0);
    glPushMatrix();
    glRotatef ((GLfloat) thumb, 0.0, 1.0, 0.0);
    glTranslatef (0.1, 0.28, 0.0);
    glPushMatrix();
    glScalef (0.5, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glPushMatrix();
    glTranslatef (0.3, 0.01, 0);
    glTranslatef (0.2, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.5, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glPushMatrix();
    glRotatef ((GLfloat) ruas, 0.0, 1.0, 0.0);
    glTranslatef (0.3, 0.01, 0);
    glTranslatef (0.2, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.5, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    
    //telunjuk
    glPushMatrix();
    glRotatef ((GLfloat) index, 0.0, 1.0, 0.0);
    glTranslatef (-0.05, -0.52, 0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.7, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glTranslatef (0.2, 0.01, 0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glRotatef ((GLfloat) ruas, 0.0, 1.0, 0.0);
    glPushMatrix();
    glScalef (0.7, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glTranslatef (0.2, 0.01, 0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.7, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    
    //jari tengah
    glPushMatrix();
    glRotatef ((GLfloat) middle, 0.0, 1.0, 0.0);
    glTranslatef (0.0, -1.2, 0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.8, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glTranslatef (0.3, 0.01, 0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glRotatef ((GLfloat) ruas, 0.0, 1.0, 0.0);
    glPushMatrix();
    glScalef (0.8, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glTranslatef (0.3, 0.01, 0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.8, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    
    //jari manis
    glPushMatrix();
    glRotatef ((GLfloat) ring, 0.0, 1.0, 0.0);
    glTranslatef (-0.01, -1.8, 0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.78, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glTranslatef (0.24, 0.01, 0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glRotatef ((GLfloat) ruas, 0.0, 1.0, 0.0);
    glPushMatrix();
    glScalef (0.7, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glTranslatef (0.2, 0.01, 0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.7, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    
    //kelingking
    glPushMatrix();
    glRotatef ((GLfloat) little, 0.0, 1.0, 0.0);
    glTranslatef (-0.07, -2.45, 0);
    glTranslatef (1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.65, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glTranslatef (0.15, 0.01, 0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glRotatef ((GLfloat) ruas, 0.0, 1.0, 0.0);
    glPushMatrix();
    glScalef (0.65, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glTranslatef (0.15, 0.01, 0);
    glTranslatef (0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef (0.65, 0.4, 0.5);
    glutWireCube (1.0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(80.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef (0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'B':
            shoulder = (shoulder + 5) % 360;
            glutPostRedisplay();
            break;
        case 'b':
            shoulder = (shoulder - 5) % 360;
            glutPostRedisplay();
            break;
        case 'S':
            elbow = (elbow + 5) % 120;
            glutPostRedisplay();
            break;
        case 'Z':
            elbow = (elbow - 5) % 120;
            glutPostRedisplay();
            break;
        case 'P':
            palm = (palm + 5) % 100;
            glutPostRedisplay();
            break;
        case 'p':
            palm = (palm - 5) % 100;
            glutPostRedisplay();
            break;
        case 'j':
            thumb = (thumb - 5) % 90;
            glutPostRedisplay();
            break;
        case 'J':
            thumb = (thumb + 5) % 20;
            glutPostRedisplay();
            break;
        case 'i':
            index = (index - 5) % 90;
            glutPostRedisplay();
            break;
        case 'I':
            index = (index + 5) % 20;
            glutPostRedisplay();
            break;
        case 'm':
            middle = (middle - 5) % 90;
            glutPostRedisplay();
            break;
        case 'M':
            middle = (middle + 5) % 20;
            glutPostRedisplay();
            break;
        case 'r':
            ring = (ring - 5) % 90;
            glutPostRedisplay();
            break;
        case 'R':
            ring = (ring + 5) % 20;
            glutPostRedisplay();
            break;
        case 'l':
            little = (little - 5) % 90;
            glutPostRedisplay();
            break;
        case 'L':
            little = (little + 5) % 20;
            glutPostRedisplay();
            break;
        case 'F':
            jari = (jari + 5) % 20;
            glutPostRedisplay();
            break;
        case 'f':
            jari = (jari - 5) % 100;
            glutPostRedisplay();
            break;
        case 'a':
            atas = (atas - 5) % 70;
            glutPostRedisplay();
            break;
        case 'A':
            atas = (atas + 5) % 40;
            glutPostRedisplay();
            break;
        case 'u':
            ruas = (ruas - 5) % 90;
            glutPostRedisplay();
            break;
        case 'U':
            ruas = (ruas + 5) % 20;
            glutPostRedisplay();
            break;
        case 27:
            exit(0);
            break;
        default:
            break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (900, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Lengan dan Jari");
    init();
    glutDisplayFunc(lengan);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
