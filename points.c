#include <GL/glut.h>

void display()
{
glClear(GL_COLOR_BUFFER_BIT);

glBegin( GL_POINTS);
  glColor3f( 1.0f, 0.0f, 2.0f );
  glVertex2f( 0.0f,0.9f );
  glColor3f( 0.0f, 1.0f, 0.0f );
  glVertex2f( 0.9f, 0.5f);
  glColor3f( 0.0f, 0.0f, 1.0f );
  glVertex2f( -0.6f,0.0f );
glEnd();

glFlush();

}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutCreateWindow("Basic:Vertex,primitive &Color");
	glutInitWindowSize(320,320);
	glutInitWindowPosition(50,150);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
