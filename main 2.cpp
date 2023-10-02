//Draw Line
//SHOHAN MOROL
//20-44038-2

#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);
	// Draw a Red 1x1 Square centered at origin

    //sky
    glBegin(GL_QUADS);
    glColor3ub(201,240,245);
    glVertex2f(-1,-0.5);
    glVertex2f( 1,-0.5);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();

    //main building
    glBegin(GL_QUADS);
    glColor3ub(164,164,164);
    glVertex2f(-0.32,-0.5);
    glVertex2f(0.6,-0.5);
    glVertex2f(0.6,0.5);
    glVertex2f(-0.32,0.5);
    glEnd();

    //left main building
    glBegin(GL_QUADS);
    glColor3ub(201,240,245);
    glVertex2f(-0.6,-0.5);
    glVertex2f(-0.32,-0.5);
    glVertex2f(-0.32,0.5);
    glVertex2f(-0.6,0.47);
    glEnd();

    //left side
    glBegin(GL_POLYGON);
    glColor3ub(86,194,245);
    glVertex2f(-0.59,-0.48);
    glVertex2f(-0.32,-0.48);
    glVertex2f(-0.32,0.18);
    glVertex2f(-0.4,0.17);
    glVertex2f(-0.4,0.47);
    glVertex2f(-0.59,0.45);
    glEnd();

    //middle side!
    glBegin(GL_QUADS);
    glColor3ub(87,60,61);
    glVertex2f(-0.15,0.42);
    glVertex2f(0.54,0.42);
    glVertex2f(0.54,0.48);
    glVertex2f(-0.15,0.48);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(57,60,61);
    glVertex2f(-0.15,0.42);
    glVertex2f(0.54,0.42);
    glVertex2f(0.54,0.48);
    glVertex2f(-0.15,0.48);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(87,60,61);
    glVertex2f(-0.15,0.42);
    glVertex2f(0.54,0.42);
    glVertex2f(0.54,0.48);
    glVertex2f(-0.15,0.48);
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(86,194,245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(86,194,245);
    glVertex2f(-0.28,0.12);
    glVertex2f(0.54,0.12);
    glVertex2f(0.54,0.18);
    glVertex2f(-0.28,0.18);
    glEnd();

   glLoadIdentity();

   //right side

   glBegin(GL_QUADS);
    glColor3ub(178,181,182);
    glVertex2f(0.6,-0.47);
    glVertex2f(0.68,-0.47);
    glVertex2f(0.68,0.45);
    glVertex2f(0.6,0.45);
    glEnd();


    //right quads
    glBegin(GL_QUADS);
    glColor3ub(57,60,61);
    glVertex2f(0.61,0.35);
    glVertex2f(0.67,0.35);
    glVertex2f(0.67,0.43);
    glVertex2f(0.61,0.43);
    glEnd();

    glLoadIdentity();

    //front floor
    glBegin(GL_QUADS);
    glColor3ub(119,123,124);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-0.5);
    glVertex2f(-1,-0.5);
    glEnd();

    //road side

    glBegin(GL_QUADS);
    glColor3ub(218,208,0);
    glVertex2f(-1,-0.55);
    glVertex2f(1,-0.55);
    glVertex2f(1,-0.5);
    glVertex2f(-1,-0.5);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(218,208,0);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-0.95);
    glVertex2f(-1,-0.95);
    glEnd();

    //cross
     glBegin(GL_QUADS);
    glColor3ub(222,222,222);
    glVertex2f(-0.28,-0.59);
    glVertex2f(0,-0.59);
    glVertex2f(0,-0.57);
    glVertex2f(-0.28,-0.57);
    glEnd();

    glLoadIdentity();

    //devider
     glBegin(GL_QUADS);
    glColor3ub(218,208,0);
    glVertex2f(-0.78,-0.75);
    glVertex2f(-0.50,-0.75);
    glVertex2f(-0.50,-0.73);
    glVertex2f(-0.78,-0.73);
    glEnd();

    glLoadIdentity();

    //TREE1
    glBegin(GL_QUADS);
    glColor3ub(156,139,102);
    glVertex2f(0.8,-0.5);
    glVertex2f(0.85,-0.5);
    glVertex2f(0.85,-0.25);
    glVertex2f(0.8,-0.25);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(35,174,43);
    glVertex2f(0.75,-0.25);
    glVertex2f(0.9,-0.25);
    glVertex2f(0.825,-0.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(36,211,47);
    glVertex2f(0.75,-0.2);
    glVertex2f(0.9,-0.2);
    glVertex2f(0.825,-0.05);
    glEnd();



	glFlush();  // Render now
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
