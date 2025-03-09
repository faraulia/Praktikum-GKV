#include <GL/glut.h>
#include <cmath>

void drawBeachBackground() { // background pantai
    // langit
    glColor3f(0.5, 0.8, 1.0); // biru muda
    glBegin(GL_POLYGON);
        glVertex2f(-1.0, 1.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(1.0, 0.3);
        glVertex2f(-1.0, 0.3);
    glEnd();

    // laut
    glColor3f(0.0, 0.5, 0.8); // biru tua
    glBegin(GL_POLYGON);
        glVertex2f(-1.0, 0.3);
        glVertex2f(1.0, 0.3);
        glVertex2f(1.0, 0.0);
        glVertex2f(-1.0, 0.0);
    glEnd();

    // pasir
    glColor3f(0.9, 0.8, 0.6); // coklat muda
    glBegin(GL_POLYGON);
        glVertex2f(-1.0, 0.0);
        glVertex2f(1.0, 0.0);
        glVertex2f(1.0, -1.0);
        glVertex2f(-1.0, -1.0);
    glEnd();
}

void drawCar() { // mobil
    // badan
    glColor3f(0.5, 0.0, 0.0); // merah tua
    glBegin(GL_POLYGON);
        glVertex2f(-0.4, -0.17);
        glVertex2f(0.4, -0.17);
        glVertex2f(0.4, 0.02);
        glVertex2f(-0.4, 0.07);
    glEnd();

    // atap
    glColor3f(0.5, 0.0, 0.0); // merah tua juga
    glBegin(GL_POLYGON);
        glVertex2f(-0.25, 0.01);
        glVertex2f(0.27, 0.01);
        glVertex2f(0.2, 0.19);
        glVertex2f(-0.2, 0.2);
    glEnd();

    // jendela
    glColor3f(0.8, 0.9, 1.0); // biru cyan
    	// kanan
    glBegin(GL_POLYGON);
        glVertex2f(-0.19, 0.06);
        glVertex2f(-0.02, 0.06);
        glVertex2f(-0.02, 0.17);
        glVertex2f(-0.17, 0.17);
    glEnd();
    	// kiri
    glBegin(GL_POLYGON);
        glVertex2f(0.02, 0.06);
        glVertex2f(0.2, 0.06);
        glVertex2f(0.17, 0.17);
        glVertex2f(0.02, 0.17);
    glEnd();

	// lampu depan
	glColor3f(1.0, 1.0, 0.0); // kuning
	float rad;
	glBegin(GL_TRIANGLE_FAN);
    	glVertex2f(0.39, -0.05);
	    for (int i = 0; i <= 360; i += 5) {
	        rad = i * 3.14159 / 180;
	        glVertex2f(0.39 + 0.02 * cos(rad), -0.05 + 0.02 * sin(rad));
	    }
	glEnd();
	
    // roda
    // kiri
    glColor3f(0.0, 0.0, 0.0); // hitam
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(-0.25, -0.20);
        for (int i = 0; i <= 360; i += 5) {
            rad = i * 3.14159 / 180;
            glVertex2f(-0.25 + 0.08 * cos(rad), -0.20 + 0.08 * sin(rad));
        }
    glEnd();
    	// bagian pusat roda
    glColor3f(0.75, 0.75, 0.75); // abu silver
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(-0.25, -0.20);
        for (int i = 0; i <= 360; i += 5) {
            rad = i * 3.14159 / 180;
            glVertex2f(-0.25 + 0.035 * cos(rad), -0.20 + 0.035 * sin(rad));
        }
    glEnd();
    // kanan
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.25, -0.20);
        for (int i = 0; i <= 360; i += 5) {
            rad = i * 3.14159 / 180;
            glVertex2f(0.25 + 0.08 * cos(rad), -0.20 + 0.08 * sin(rad));
        }
    glEnd();
    	// bagian pusat roda
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.25, -0.20);
        for (int i = 0; i <= 360; i += 5) {
            rad = i * 3.14159 / 180;
            glVertex2f(0.25 + 0.035 * cos(rad), -0.20 + 0.035 * sin(rad));
        }
    glEnd();
}

// menampilkan fungsi yang sudah dibuat di atas
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    drawBeachBackground();
    drawCar();
    glFlush();
}

// supaya mobil tidak penyok (aspek rasio)
void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Mobil di Pantai");

    glClearColor(0.5, 0.8, 1.0, 1.0);

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
