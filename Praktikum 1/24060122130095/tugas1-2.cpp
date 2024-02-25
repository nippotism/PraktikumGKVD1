/*  Nama         : Syariful Hanif
	Nama File    : tugas1-2.cpp
	Deskripsi    : Membentuk tampilan 2d primitif dengan memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP
	GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP.
*/

#include <gl/glut.h>

void kelinci(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	//fungsi : GL_LINE_STRIP
	glLineWidth(6.0f);

	glBegin(GL_LINE_STRIP);
	glColor3ub(255, 0, 0);
	glVertex2f(-0.7, 0.5);
	glVertex2f(-0.65, 0.9);
	glVertex2f(-0.6, 0.5);
	glVertex2f(-0.75, 0.8);
	glVertex2f(-0.55, 0.8);
	glVertex2f(-0.7, 0.5);
	glEnd();


	//fungsi : GL_LINE_LOOP
	glLineWidth(6.0f);
	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 185, 203);
	glVertex2f(-0.9, 0.1);
	glVertex2f(-0.9, 0.3);
	glVertex2f(-0.75, 0.45);
	glVertex2f(-0.6, 0.3);
	glVertex2f(-0.6, 0.1);
	glEnd();

	//fungsi : GL_TRIANGLE_FAN
	glLineWidth(5.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 64, 125); //first triangle
	glVertex2f(0.1, 0.7);
	glVertex2f(0.4, 0.3);
	glVertex2f(0.1, 0.3);
	glColor3ub(255, 202, 212); //second triangle
	glVertex2f(0.1, 0.7);
	glVertex2f(0.4, 0.7);
	glVertex2f(0.1, 0.3);
	glEnd();

	//fungsi : GL_TRIANGLE_STRIP
	glLineWidth(6.0f);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3ub(155, 207, 83); //first triangle
	glVertex2f(-0.90, -0.50);
	glVertex2f(-0.60, -0.50);
	glVertex2f(-0.60, -0.10);
	glColor3ub(191, 234, 124); //second triangle
	glVertex2f(-0.90, -0.10);
	glVertex2f(-0.90, -0.50);
	glVertex2f(-0.60, -0.50);
	glEnd();

	//fungsi : GL_QUADS
	glLineWidth(4.0f);

	glBegin(GL_QUADS);

	glColor3ub(77, 27, 123);
	glVertex2f(0.05, -0.45);
	glVertex2f(0.45, -0.45);
	glVertex2f(0.45, -0.20);
	glVertex2f(0.05, -0.20);
	glVertex2f(0.10, -0.40);
	glVertex2f(0.40, -0.40);
	glVertex2f(0.40, -0.10);
	glColor3ub(199, 157, 215);
	glVertex2f(0.10, -0.10);

	glEnd();

	// fungsi: GL_QUAD_STRIP
	glBegin(GL_QUAD_STRIP);

	glColor3ub(255, 89, 143);
	glVertex3f(0.60, 0.30, 0.0);
	glVertex3f(0.60, 0.00, 0.0);

	glColor3ub(224, 227, 0);
	glVertex3f(0.90, 0.30, 0.0);
	glVertex3f(0.90, 0.00, 0.0);
	glVertex3f(0.60, 0.00, 0.0);
	glVertex3f(0.60, 0.30, 0.0);

	glEnd();
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(720, 640);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("2D Primitif");
	glutDisplayFunc(kelinci);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glutMainLoop();
	return 0;
}
