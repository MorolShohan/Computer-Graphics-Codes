#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#define PI          3.141516
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(.5);


	//sky

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.118, 0.565, 1.0000); // blue
	glVertex2f(1.0f, 0.20f);    // x, y
	glVertex2f(1.0f, 1.0f);    // x, y
	glVertex2f(-1.0f, 1.0f);    // x, y
	glVertex2f(-1.0f, 0.20f);    // x, y
	glEnd();

///////green field

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.420, 0.557, 0.137); // blue
	glVertex2f(1.0f, -0.20f);    // x, y
	glVertex2f(1.0f, 0.20f);    // x, y
	glVertex2f(-1.0f, 0.20f);    // x, y
	glVertex2f(-1.0f, -0.40f);    // x, y

    glEnd ();





    //////River
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.255, 0.412, 0.882); // blue
	glVertex2f(1.0f, -1.0f);    // x, y
	glVertex2f(1.0f, -0.20f);    // x, y
	glVertex2f(-1.0f, -0.40f);    // x, y
	glVertex2f(-1.0f, -1.0f);    // x, y

    glEnd ();

    ////Boat body

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0, 0.0, 0.502); // blue
	glVertex2f(-0.85f, -0.8f);    // x, y
	glVertex2f(-0.35f, -0.8f);    // x, y
	glVertex2f(-0.45f, -0.95f);    // x, y
	glVertex2f(-0.75f, -0.95f);    // x, y

    glEnd ();

/////////Sail
  glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0, 0.0, 0.0); // blue
	glVertex2f(-0.55f, -0.8f);    // x, y
	glVertex2f(-0.95f, -0.8f);    // x, y
	glVertex2f(-0.95f, -0.8f);    // x, y
	glVertex2f(-0.55f, -0.65f);    // x, y

    glEnd ();


    /////// ||
      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0, 0.10, 1.00); // blue
	glVertex2f(-0.54f, -0.8f);    // x, y
	glVertex2f(-0.53f, -0.8f);    // x, y
	glVertex2f(-0.53f, -0.60f);    // x, y
	glVertex2f(-0.54f, -0.60f);    // x, y

    glEnd ();


    //////// ||

         glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0, 0.10, 1.00); // blue
	glVertex2f(-0.51f, -0.8f);    // x, y
	glVertex2f(-0.50f, -0.8f);    // x, y
	glVertex2f(-0.50f, -0.60f);    // x, y
	glVertex2f(-0.51f, -0.60f);    // x, y

    glEnd ();


    //////// stand


    ////boat body2

              glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.90, 0.80, 1.00); // blue
	glVertex2f(0.30f, -0.45f);    // x, y
	glVertex2f(0.20f, -0.55f);    // x, y
	glVertex2f(0.05f, -0.55f);    // x, y
	glVertex2f(-0.05f, -0.45f);    // x, y

    glEnd ();


      ////boat sail

              glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.90, 1.00, 0.0); // blue
	glVertex2f(0.15f, -0.45f);    // x, y
	glVertex2f(-0.20f, -0.45f);    // x, y
	glVertex2f(-0.20f, -0.45f);    // x, y
	glVertex2f(0.15f, -0.35f);    // x, y

    glEnd ();


      ////boat ||

              glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.90, 1.00, 0.0); // blue
	glVertex2f(0.17f, -0.45f);    // x, y
	glVertex2f(0.17f, -0.35f);    // x, y
	glVertex2f(0.16f, -0.35f);    // x, y
	glVertex2f(0.16f, -0.45f);    // x, y

    glEnd ();

    //ghat1
                 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.30, 0.19, 0.0); // blue
	glVertex2f(0.25f, -0.22f);    // x, y
	glVertex2f(0.25f, -0.28f);    // x, y
	glVertex2f(0.45f, -0.28f);    // x, y
	glVertex2f(0.45f, -0.22f);    // x, y

    glEnd ();


    //ghat2

                 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.30, 0.19, 0.0); // blue
	glVertex2f(0.28f, -0.28f);    // x, y
	glVertex2f(0.28f, -0.33f);    // x, y
	glVertex2f(0.42f, -0.33f);    // x, y
	glVertex2f(0.42f, -0.28f);    // x, y

    glEnd ();


    ////rope

                     glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0, 1.0, 0.0); // blue
	glVertex2f(0.28f, -0.28f);    // x, y
	glVertex2f(0.24f, -0.45f);    // x, y
	glVertex2f(0.25f, -0.45f);    // x, y
	glVertex2f(0.29f, -0.28f);    // x, y

    glEnd ();

    //////////////////////////
	glFlush();  // Render now
    //////////////////////////////

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}


