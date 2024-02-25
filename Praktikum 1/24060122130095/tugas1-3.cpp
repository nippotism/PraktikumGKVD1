/*  Nama         : Syariful Hanif
    Nama File    : tugas1-3.cpp
    Deskripsi    : Membuat tampilan 2d kubus bertingkat warna-warni kreatif
*/

#include <gl/glut.h>

void Stacked(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3ub(29, 53, 87); //warna biru dongker
    glRectf(-0.1, -0.5, 0.1, -0.3);

    glColor3ub(69, 123, 157); //warna biru tua
    glRectf(-0.15, -0.25, 0.05, -0.05);

    glColor3ub(168, 218, 220); //warna biru muda
    glRectf(-0.1, 0.0, 0.1, 0.2);

    glColor3ub(241, 250, 238); //warna putih
    glRectf(-0.15, 0.25, 0.05, 0.45);

    glColor3ub(230, 57, 70); //warna merah
    glRectf(-0.1, 0.5, 0.1, 0.7);









    // glColor3ub(189, 154, 207); //warna ungu
    // glRectf(-0.35, 0.1, -0.15, -0.1);
    // glRectf(0.15, 0.1, 0.35, -0.1);

    // glColor3ub(236, 200, 155); //warna salmon
    // glRectf(-0.225, 0.35, -0.025, 0.15);
    // glRectf(0.025, 0.35, 0.225, 0.15);

    // glColor3ub(203, 112, 87); //warna bata
    // glRectf(-0.1, 0.6, 0.1, 0.4);

    glFlush();
}



int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Kubus Bertingkat");
    glutDisplayFunc(Stacked);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();
    return 0;
}
