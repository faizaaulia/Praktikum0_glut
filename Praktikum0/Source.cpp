#include <Windows.h>
#include <GL\freeglut.h>
#include <iostream>

void render() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPointSize(50);
	glBegin(GL_POINTS);
	glColor3f(1, 0, 1);
	glVertex3f(100, 200, 0);
	glEnd();
	glutSwapBuffers();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutCreateWindow("XIIRPL6-14-Faiza Aulia Rahma Putra");
	gluOrtho2D(0, 800, 0, 600);
	glClearColor(1,1,1,0);
	glutDisplayFunc(render);

	glutMainLoop();
	return 0;
}