#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#define PI          3.141516
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

bool night = false;


//____________________________Cloud_________________________
GLfloat position_cloud = 1.0f;
GLfloat speed_cloud = 0.005f;

void update_cloud(int value) {

    if(position_cloud <-1.0)
        position_cloud = 1.0f;

    position_cloud -= speed_cloud;

glutPostRedisplay();
glutTimerFunc(100, update_cloud, 0);
}

//_______________________rain cloud__________________________

        GLfloat Rposition_cloud = 4.5f;
        GLfloat Rspeed_cloud = 0.02f;
        void Rupdate_cloud(int value) {
        if(Rposition_cloud < -0.0)
        Rposition_cloud = 1.0f;
    Rposition_cloud -= Rspeed_cloud;
	glutPostRedisplay();
	glutTimerFunc(100, Rupdate_cloud, 0);
}


//___________________________Boat____________________________
GLfloat position_Boat = 0.0f;
GLfloat speed_Boat = 0.01f;

void update_Boat(int value) {

    if(position_Boat <-1.0)
        position_Boat = 1.0f;

    position_Boat -= speed_Boat;

glutPostRedisplay();
glutTimerFunc(100, update_Boat, 0);
}


//____________________________Rain_____________________________
GLfloat position8 = 0.0f;
GLfloat Speed8= 0.02f;

GLfloat position9 = 0.0f;
GLfloat Speed9= 0.06f;

GLfloat position10 = 0.0f;
GLfloat Speed10= 0.02f;



void updateRain (int value)
{
    if(position8 <-1.0)
        position8 =0.2f;

    position8 -= Speed8;

    glutPostRedisplay();

    if(position9 >1.0)
        position9 =-1.0f;

    position9 += Speed9;

    glutPostRedisplay();


    if(position10 <1.0)
        position10 =-0.1f;

    position10 -= Speed10;

    glutPostRedisplay();

    glutTimerFunc(100,updateRain,0);
}




void summer();
void rainDay();






void Idle()
{
    glutPostRedisplay();
}




void display_rainyDay(int b)
{
    glutDisplayFunc(rainDay);
}



void rainDay() {
	// Display____________________________
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


//Sky___________________________
	glBegin(GL_POLYGON);
	if(night==true)

       {
       glColor3ub(19,24,98);

       }

       else
	glColor3ub(147, 185, 201);

	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 1.0f);
	  glEnd();

///cloud__________________


  glPushMatrix();
glTranslatef(Rposition_cloud, 0.0f,0.0f);
  int aL;

    GLfloat aL1=-0.84f; GLfloat aL2= 0.80f; GLfloat Lr1 = 0.10f;
    int tringleL2=40;

    GLfloat Ltp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(158, 161, 163);
    glVertex2f (aL1,aL2);
    for(aL= 0;aL<=tringleL2; aL++)
    {
        glVertex2f (
                    aL1+(Lr1*cos(aL*Ltp2/tringleL2)),
                    aL2+(Lr1*sin(aL*Ltp2/tringleL2))
                    );


    }
    glEnd ();

    // //left 1st cloud left circle end

    //left 1st middle cloud circle start
 int aM;

    GLfloat aM1=-0.70f; GLfloat aM2= .80f; GLfloat Mr1 = 0.14f; //am2 y axis
    int tringleM2=40;

    GLfloat Mtp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(158, 161, 163);
    glVertex2f (aM1,aM2);
    for(aM= 0;aM<=tringleM2; aM++)
    {
        glVertex2f (
                    aM1+(Mr1*cos(aM*Mtp2/tringleM2)),
                    aM2+(Mr1*sin(aM*Mtp2/tringleM2))
                    );


    }
    glEnd ();

 //left 1st middle cloud circle end

  //left 1st right cloud circle start

   int aR;

    GLfloat aR1=-0.55f; GLfloat aR2= .80f; GLfloat Rr1 = 0.10f; //am2 y axis
    int tringleR2=40;

    GLfloat Rtp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
   glColor3ub(158, 161, 163);
    glVertex2f (aR1,aR2);
    for(aR= 0;aR<=tringleR2; aR++)
    {
        glVertex2f (
                    aR1+(Rr1*cos(aR*Rtp2/tringleR2)),
                    aR2+(Rr1*sin(aR*Rtp2/tringleR2))
                    );


    }
    glEnd ();

//left 1st right cloud circle start





//  left 2nd left cloud circle start


    int bL;

    GLfloat bL1=0.24f; GLfloat bL2= 0.80f; GLfloat bLr1 = 0.10f;
    int tringlebL2=40;

    GLfloat bLtp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
   glColor3ub(158, 161, 163);
    glVertex2f (bL1,bL2);
    for(bL= 0;bL<=tringleL2; bL++)
    {
        glVertex2f (
                    bL1+(bLr1*cos(bL*bLtp2/tringlebL2)),
                    bL2+(bLr1*sin(bL*bLtp2/tringlebL2))
                    );


    }
    glEnd ();
//  left 2nd left cloud circle end

//  left 2nd middle cloud circle start
     int bM;
    GLfloat bM1=0.30f; GLfloat bM2= .75f; GLfloat bMr1 = 0.14f; //am2 y axis
    int tringlebM2=40;

    GLfloat bMtp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(158, 161, 163);
    glVertex2f (bM1,bM2);
    for(bM= 0;bM<=tringlebM2; bM++)
    {
        glVertex2f (
                    bM1+(bMr1*cos(bM*bMtp2/tringlebM2)),
                    bM2+(bMr1*sin(bM*bMtp2/tringlebM2))
                    );
    }
    glEnd ();
    //  left 2nd middle cloud circle end


    //  left 2nd right cloud circle start
     int bR;
    GLfloat bR1=0.40f; GLfloat bR2= .65f; GLfloat bRr1 = 0.12f; //am2 y axis
    int tringlebR2=40;
    GLfloat bRtp2 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
   glColor3ub(158, 161, 163);
    glVertex2f (bR1,bR2);
    for(bR= 0;bR<=tringlebR2; bR++)
    {
        glVertex2f (
                    bR1+(bRr1*cos(bR*bRtp2/tringlebR2)),
                    bR2+(bRr1*sin(bR*bRtp2/tringlebR2))
                    );
    }
    glEnd ();

    // left 2nd cloud left circle end






//  left 3rd left cloud circle start


    int cL;

    GLfloat cL1=0.60f; GLfloat cL2= 0.80f; GLfloat cLr1 = 0.10f;
    int tringlecL2=40;

    GLfloat cLtp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(158, 161, 163);
    glVertex2f (cL1,cL2);
    for(cL= 0;cL<=tringlecL2; cL++)
    {
        glVertex2f (
                    cL1+(cLr1*cos(cL*cLtp2/tringlecL2)),
                    cL2+(cLr1*sin(cL*cLtp2/tringlecL2))
                    );


    }
    glEnd ();
//  left 3rd left cloud circle end

//  left 3rd middle cloud circle start
     int cM;
    GLfloat cM1=0.70f; GLfloat cM2= .80f; GLfloat cMr1 = 0.14f; //am2 y axis
    int tringlecM2=40;

    GLfloat cMtp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
   glColor3ub(158, 161, 163);
    glVertex2f (cM1,cM2);
    for(cM= 0;cM<=tringlecM2; cM++)
    {
        glVertex2f (
                    cM1+(cMr1*cos(cM*cMtp2/tringlecM2)),
                    cM2+(cMr1*sin(cM*cMtp2/tringlecM2))
                    );
    }
    glEnd ();
    //  left 3rd middle cloud circle end


    //  left 3rd right cloud circle start
     int cR;
    GLfloat cR1=0.80f; GLfloat cR2= .80f; GLfloat cRr1 = 0.12f; //am2 y axis
    int tringlecR2=40;
    GLfloat cRtp2 =2.0f * PI  ;
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(158, 161, 163);
    glVertex2f (cR1,cR2);
    for(cR= 0;cR<=tringlecR2; cR++)
    {
        glVertex2f (
                    cR1+(cRr1*cos(cR*cRtp2/tringlecR2)),
                    cR2+(cRr1*sin(cR*cRtp2/tringlecR2))
                    );
    }
    glEnd ();

    // left 3rd cloud left circle end

glPopMatrix();

/////////////////////

    ///cloud end


    ////Boat body
glPushMatrix();
glTranslated(position_Boat,0.0f,0.0f);
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

glPopMatrix();

    //Rain___________________________________________________



           glPushMatrix();  // Duplicates current matrix down by one

    glTranslatef(position9,position8,0.0f);
    glColor3ub(174,214,241);
    glLineWidth(2);

    glBegin(GL_LINES);

        glVertex2f(-.85,1.9);glVertex2f(-.8,1.8);
    glVertex2f(-.55,1.9);glVertex2f(-.5,1.8);
    glVertex2f(-.25,1.9);glVertex2f(-.2,1.8);
            glVertex2f(.05,1.9);glVertex2f(.1,1.8);
            glVertex2f(.35,1.9);glVertex2f(.4,1.8);
            glVertex2f(.65,1.9);glVertex2f(.7,1.8);
            glVertex2f(.95,1.9);glVertex2f(1.0,1.8);

     glVertex2f(-1.0,1.6);glVertex2f(-.95,1.5);
    glVertex2f(-.7,1.6);glVertex2f(-.65,1.5);
    glVertex2f(-.4,1.6);glVertex2f(-.35,1.5);
    glVertex2f(-.1,1.6);glVertex2f(-.05,1.5);
            glVertex2f(.2,1.6);glVertex2f(.25,1.5);
            glVertex2f(.5,1.6);glVertex2f(.55,1.5);
            glVertex2f(.8,1.6);glVertex2f(.85,1.5);


    glVertex2f(-.85,1.3);glVertex2f(-.8,1.2);
    glVertex2f(-.55,1.3);glVertex2f(-.5,1.2);
    glVertex2f(-.25,1.3);glVertex2f(-.2,1.2);
             glVertex2f(.05,1.3);glVertex2f(.1,1.2);
            glVertex2f(.35,1.3);glVertex2f(.4,1.2);
            glVertex2f(.65,1.3);glVertex2f(.7,1.2);
            glVertex2f(.95,1.3);glVertex2f(1.0,1.2);

    glVertex2f(-1.0,1.0);glVertex2f(-.95,.9);
    glVertex2f(-.7,1.0);glVertex2f(-.65,0.9);
    glVertex2f(-.4,1.0);glVertex2f(-.35,0.9);
    glVertex2f(-.1,1.0);glVertex2f(-.05,0.9);
                 glVertex2f(.2,1.0);glVertex2f(.25,.9);
                 glVertex2f(.5,1.0);glVertex2f(.55,0.9);
                 glVertex2f(.8,1.0);glVertex2f(.85,0.9);



    glVertex2f(-.85,.7);glVertex2f(-.8,.6);
    glVertex2f(-.55,.7);glVertex2f(-.5,0.6);
    glVertex2f(-.25,.7);glVertex2f(-.2,0.6);
              glVertex2f(.05,.7);glVertex2f(.1,.6);
            glVertex2f(.35,.7);glVertex2f(.4,.6);
            glVertex2f(.65,.7);glVertex2f(.7,.6);
            glVertex2f(.95,.7);glVertex2f(1.0,.6);

    glVertex2f(-1.0,.4);glVertex2f(-.95,.3);
    glVertex2f(-.7,.4);glVertex2f(-.65,0.3);
    glVertex2f(-.4,.4);glVertex2f(-.35,0.3);
    glVertex2f(-.1,.4);glVertex2f(-.05,0.3);
                 glVertex2f(.2,.4);glVertex2f(.25,.3);
                 glVertex2f(.5,.4);glVertex2f(.55,0.3);
                 glVertex2f(.8,.40);glVertex2f(.85,0.3);

    glVertex2f(-.85,.1);glVertex2f(-.8,0.0);
    glVertex2f(-.55,.1);glVertex2f(-.5,0.0);
    glVertex2f(-.25,.1);glVertex2f(-.2,0.0);
              glVertex2f(.05,.1);glVertex2f(.1,.0);
            glVertex2f(.35,.1);glVertex2f(.4,.0);
            glVertex2f(.65,.1);glVertex2f(.7,.0);
            glVertex2f(.95,.1);glVertex2f(1.0,.0);


    glVertex2f(-1.0,-.2);glVertex2f(-.95,-.3);
    glVertex2f(-.7,-.2);glVertex2f(-.65,-0.3);
    glVertex2f(-.4,-.2);glVertex2f(-.35,-0.3);
    glVertex2f(-.1,-.2);glVertex2f(-.05,-0.3);
                 glVertex2f(.2,-.2);glVertex2f(.25,-.3);
                 glVertex2f(.5,-.2);glVertex2f(.55,-.3);
                 glVertex2f(.8,-.2);glVertex2f(.85,-.3);

    glVertex2f(-.85,-.5);glVertex2f(-.8,-.6);
    glVertex2f(-.55,-.5);glVertex2f(-.5,-.6);
    glVertex2f(-.25,-.5);glVertex2f(-.2,-.6);
              glVertex2f(.05,-.5);glVertex2f(.1,-.6);
            glVertex2f(.35,-.5);glVertex2f(.4,-.6);
            glVertex2f(.65,-.5);glVertex2f(.7,-.6);
            glVertex2f(.95,-.5);glVertex2f(1.0,-.6);

    glVertex2f(-1.0,-.8);glVertex2f(-.95,-.9);
    glVertex2f(-.7,-.8);glVertex2f(-.65,-0.9);
    glVertex2f(-.4,-.8);glVertex2f(-.35,-0.9);
    glVertex2f(-.1,-.8);glVertex2f(-.05,-0.9);
                 glVertex2f(.2,-.8);glVertex2f(.25,-.9);
                 glVertex2f(.5,-.8);glVertex2f(.55,-.9);
                 glVertex2f(.8,-.8);glVertex2f(.85,-.9);

    glVertex2f(-.85,-1.1);glVertex2f(-.8,-1.2);
    glVertex2f(-.55,-1.1);glVertex2f(-.5,-1.2);
    glVertex2f(-.25,-1.1);glVertex2f(-.2,-1.2);
              glVertex2f(.05,-1.1);glVertex2f(.1,-1.2);
            glVertex2f(.35,-1.1);glVertex2f(.4,-1.2);
            glVertex2f(.65,-1.1);glVertex2f(.7,-1.2);
            glVertex2f(.95,-1.1);glVertex2f(1.0,-1.2);

    glVertex2f(-1.0,-1.4);glVertex2f(-.95,-1.5);
    glVertex2f(-.7,-1.4);glVertex2f(-.65,-1.5);
    glVertex2f(-.4,-1.4);glVertex2f(-.35,-1.5);
    glVertex2f(-.1,-1.4);glVertex2f(-.05,-1.5);
                 glVertex2f(.2,-1.4);glVertex2f(.25,-1.5);
                 glVertex2f(.5,-1.4);glVertex2f(.55,-1.5);
                 glVertex2f(.8,-1.4);glVertex2f(.85,-1.5);


        glEnd();

    glLoadIdentity();

    glPopMatrix();


Idle();
glFlush();



}

void handleKeypress(unsigned char key, int x, int y) {
switch (key) {
case 'n':
        night=true;
    break;
case 'd':
        night=false;
    break;


Idle();
}
}
    //////////////////////////////



/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("A Village"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height

	glutTimerFunc(100, update_cloud, 0);
   glutTimerFunc(100, Rupdate_cloud, 0);
   glutTimerFunc(100, update_Boat, 0);
   glutTimerFunc(100,updateRain,0);
	glutDisplayFunc(rainDay); // Register display callback handler for window re-paint
	glutKeyboardFunc(handleKeypress);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
