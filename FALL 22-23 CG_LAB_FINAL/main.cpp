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



void display_summerDay(int b)
{
    glutDisplayFunc(summer);

}

void display_rainyDay(int b)
{
    glutDisplayFunc(rainDay);

}






///__________________________________________________________Summer Day_____________________________________________________________________________________________________________

void summer() {
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
	glColor3ub(175,238,238);

	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 1.0f);
	  glEnd();



    //first hill
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(.627, 0.322, 0.176); // Red
	glVertex2f(-0.80f, 0.20f);    // x, y
	glVertex2f(-0.90f, 0.40f);    // x, y
	glVertex2f(-0.90f, 0.40f);    // x, y
	glVertex2f(-1.0f, 0.20f);    // x, y
	glEnd();

	//2nd hill
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(.627, 0.322, 0.176);  // Red
	glVertex2f(-0.40f, 0.20f);    // x, y
	glVertex2f(-0.60f, 0.50f);    // x, y
	glVertex2f(-0.60f, 0.50f);    // x, y
	glVertex2f(-.90f, 0.20f);    // x, y
	glEnd();
    //3rd hill
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(.627, 0.322, 0.176);  // Red
	glVertex2f(0.0f, 0.20f);    // x, y
	glVertex2f(-0.30f, 0.40f);    // x, y
	glVertex2f(-0.30f, 0.40f);    // x, y
	glVertex2f(-.50f, 0.20f);    // x, y
	glEnd();
	//4th hill
	glBegin(GL_QUADS);
	glColor3f(.627, 0.322, 0.176);  // Red
	glVertex2f(0.50f, 0.20f);    // x, y
	glVertex2f(0.30f, 0.40f);    // x, y
	glVertex2f(0.30f, 0.40f);    // x, y
	glVertex2f(-0.10f, 0.20f);    // x, y
	glEnd();
	 //5th waterfall connected
	glBegin(GL_QUADS);
	glColor3f(.627, 0.322, 0.176);  // Red
	glVertex2f(0.80f, 0.20f);    // x, y
	glVertex2f(0.60f, 0.60f);    // x, y
	glVertex2f(0.50f, 0.60f);    // x, y
	glVertex2f(0.25f, 0.10f);    // x, y
	glEnd();
	//6th hill
	glBegin(GL_QUADS);
	glColor3f(.627, 0.322, 0.176);   // Red
	glVertex2f(1.0f, 0.20f);    // x, y
	glVertex2f(0.90f, 0.40f);    // x, y
	glVertex2f(0.90f, 0.40f);    // x, y
	glVertex2f(0.75f, 0.20f);    // x, y
	glEnd();

	////////////////////////////////
	///waterfall
	//////////////
    glBegin(GL_QUADS);
	glColor3f(0.118, 0.565, 1.0000);  // Red
	glVertex2f(0.70f, 0.20f);    // x, y
	glVertex2f(0.60f, 0.60f);    // x, y
	glVertex2f(0.50f, 0.60f);    // x, y
	glVertex2f(0.60f, 0.20f);    // x, y
	glEnd();


         //////waterfall line

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.52f ,0.58f);
        glVertex2d(0.54f ,0.50f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.56f ,0.55f);
        glVertex2d(0.58f ,0.49f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.59f ,0.59f);
        glVertex2d(0.60f ,0.54f);
        glEnd();

         glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.57f ,0.59f);
        glVertex2d(0.58f ,0.54f);
        glEnd();

        //2nd set

          glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.54f ,0.48f);
        glVertex2d(0.55f ,0.40f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.56f ,0.45f);
        glVertex2d(0.58f ,0.39f);
        glEnd();

        glBegin(GL_LINES);
       glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.59f ,0.49f);
        glVertex2d(0.60f ,0.44f);
        glEnd();

         glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.57f ,0.49f);
        glVertex2d(0.58f ,0.44f);
        glEnd();

          glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.60f ,0.49f);
        glVertex2d(0.61f ,0.42f);
        glEnd();

        ////3rd set

        glBegin(GL_LINES);
       glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.59f ,0.39f);
        glVertex2d(0.60f ,0.34f);
        glEnd();

         glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.57f ,0.39f);
        glVertex2d(0.58f ,0.34f);
        glEnd();

          glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.60f ,0.39f);
        glVertex2d(0.61f ,0.32f);
        glEnd();

           glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.62f ,0.38f);
        glVertex2d(0.63f ,0.30f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.64f ,0.39f);
        glVertex2d(0.65f ,0.35f);
        glEnd();

        //4th set



          glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.60f ,0.29f);
        glVertex2d(0.61f ,0.22f);
        glEnd();

           glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.62f ,0.28f);
        glVertex2d(0.63f ,0.20f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.64f ,0.29f);
        glVertex2d(0.65f ,0.25f);
        glEnd();


          glBegin(GL_LINES);
       glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.65f ,0.29f);
        glVertex2d(0.66f ,0.34f);
        glEnd();

     glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.67f ,0.29f);
        glVertex2d(0.68f ,0.24f);
        glEnd();



	///waterfall left circle
	 int iwcL;
    GLfloat wcL1=0.61f; GLfloat wcL2= 0.2f; GLfloat wcLr1 = 0.02f;
    int wcLtringle2=40;

    GLfloat tpwcL2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.0, 1.0, 1.0);
    glVertex2f (wcL1,wcL2);
    for(iwcL= 0;iwcL<=wcLtringle2; iwcL++)
    {
        glVertex2f (
                    wcL1+(wcLr1*cos(iwcL*tpwcL2/wcLtringle2)),
                    wcL2+(wcLr1*sin(iwcL*tpwcL2/wcLtringle2))
                    );


    }
    glEnd ();

//waterfall middle circle

	 int iwcM;
    GLfloat wcM1=0.64f; GLfloat wcM2= 0.2f; GLfloat wcMr1 = 0.02f;
    int wcMtringle2=40;

    GLfloat tpwcM2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.0, 1.0, 1.0);
    glVertex2f (wcM1,wcM2);
    for(iwcM= 0;iwcM<=wcMtringle2; iwcM++)
    {
        glVertex2f (
                    wcM1+(wcMr1*cos(iwcM*tpwcM2/wcMtringle2)),
                    wcM2+(wcMr1*sin(iwcM*tpwcM2/wcMtringle2))
                    );


    }
    glEnd ();

//waterfall right circle

	 int iwcR;
    GLfloat wcR1=0.68; GLfloat wcR2= 0.2f; GLfloat wcRr1 = 0.02f;
    int wcRtringle2=40;

    GLfloat tpwcR2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0, 1.0, 1.0);
    glVertex2f (wcR1,wcR2);
    for(iwcR= 0;iwcR<=wcRtringle2; iwcR++)
    {
        glVertex2f (
                    wcR1+(wcRr1*cos(iwcR*tpwcR2/wcRtringle2)),
                    wcR2+(wcRr1*sin(iwcR*tpwcR2/wcRtringle2))
                    );


    }
    glEnd ();

    ///waterfall top circle end

///next waterfall code line 444

//Hill part end




// sun part start


// Sun___________________________________________________________

    GLfloat p8=-0.3f; GLfloat q8= 0.66f; GLfloat r8 = 0.12f;
    int tringle8=40;

    GLfloat tp8 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    if(night==true){
        glColor3ub ( 194,197,204);
    }
    else{
    glColor3f(1.0f,0.9f,0.0f);
    }
    glVertex2f (p8,q8);
    for(int i= 0;i<=tringle8; i++)
    {
        glVertex2f (
                    p8+(r8*cos(i*tp8/tringle8)),
                    q8+(r8*sin(i*tp8/tringle8))
                    );


    }

 glEnd ();




    //sun part end



    /////////////////////////////////////////////////////


    //cloud start


    ////////////////////////////////////////////////////



      //left 1st cloud

    //left 1st cloud left circle start
glPushMatrix();
glTranslated(position_cloud,0.0f,0.0f);
    int aL;

    GLfloat aL1=-0.84f; GLfloat aL2= 0.80f; GLfloat Lr1 = 0.10f;
    int tringleL2=40;

    GLfloat Ltp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
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
    glColor3f ( 1.0f,1.0f,1.0f);
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
   glColor3f ( 1.0f,1.0f,1.0f);
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
   glColor3f ( 1.0f,1.0f,1.0f);
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
    glColor3f ( 1.0f,1.0f,1.0f);
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
   glColor3f ( 1.0f,1.0f,1.0f);
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
    glColor3f ( 1.0f,1.0f,1.0f);
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
   glColor3f ( 1.0f,1.0f,1.0f);
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
    glColor3f ( 1.0f,1.0f,1.0f);
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
    ///////////////////////////

    ///cloud end


    //////////////////////////




    ///////green field

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.420, 0.557, 0.137); // blue
	glVertex2f(1.0f, -0.20f);    // x, y
	glVertex2f(1.0f, 0.20f);    // x, y
	glVertex2f(-1.0f, 0.20f);    // x, y
	glVertex2f(-1.0f, -0.40f);    // x, y

    glEnd ();


    //////////////////////
    ///waterfall
    ////////////////////





    //main waterfall code

      glBegin(GL_QUADS);
	glColor3f(0.118, 0.565, 1.0000);  // Red
	glVertex2f(0.90f, 0.00f);    // x, y
	glVertex2f(0.70f, 0.20f);    // x, y
	glVertex2f(0.60f, 0.20f);    // x, y
	glVertex2f(0.80f, 0.0f);    // x, y
	glEnd();



         //////waterfall line

         //1st set
        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.61f ,0.20f);
        glVertex2d(0.65f ,0.18f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.62f ,0.18f);
        glVertex2d(0.66f ,0.15f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.65f ,0.20f);
        glVertex2d(0.69f ,0.16f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.70f ,0.19f);
        glVertex2d(0.73f ,0.14f);
        glEnd();

        //2nd set
        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.74f ,0.10f);
        glVertex2d(0.77f ,0.08f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.78f ,0.09f);
        glVertex2d(0.79f ,0.05f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.79f ,0.05f);
        glVertex2d(0.81f ,0.01f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.82f ,0.04f);
        glVertex2d(0.83f ,0.00f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.84f ,0.05f);
        glVertex2d(0.87f ,0.00f);
        glEnd();

		//waterfall left circle


	 int iwcmL;
    GLfloat wcmL1=0.81f; GLfloat wcmL2= 0.0f; GLfloat wcmLr1 = 0.02f;
    int wcmLtringle2=40;

    GLfloat tpwcmL2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0, 1.0, 1.0);
    glVertex2f (wcmL1,wcmL2);
    for(iwcmL= 0;iwcmL<=wcmLtringle2; iwcmL++)
    {
        glVertex2f (
                    wcmL1+(wcmLr1*cos(iwcmL*tpwcmL2/wcmLtringle2)),
                    wcmL2+(wcmLr1*sin(iwcmL*tpwcmL2/wcmLtringle2))
                    );


    }
    glEnd ();

//waterfall middle circle

	 int iwcmM;
    GLfloat wcmM1=0.84f; GLfloat wcmM2= 0.0f; GLfloat wcmMr1 = 0.02f;
    int wcmMtringle2=40;

    GLfloat tpwcmM2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.0, 1.0, 1.0);
    glVertex2f (wcmM1,wcmM2);
    for(iwcmM= 0;iwcmM<=wcmMtringle2; iwcmM++)
    {
        glVertex2f (
                    wcmM1+(wcmMr1*cos(iwcmM*tpwcmM2/wcmMtringle2)),
                    wcmM2+(wcmMr1*sin(iwcmM*tpwcmM2/wcmMtringle2))
                    );


    }
    glEnd ();

//waterfall right circle

	 int iwcmR;
    GLfloat wcmR1=0.87; GLfloat wcmR2= 0.0f; GLfloat wcmRr1 = 0.023f;
    int wcmRtringle2=40;

    GLfloat tpwcmR2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0, 1.0, 1.0);
    glVertex2f (wcmR1,wcmR2);
    for(iwcmR= 0;iwcmR<=wcmRtringle2; iwcmR++)
    {
        glVertex2f (
                    wcmR1+(wcmRr1*cos(iwcmR*tpwcmR2/wcmRtringle2)),
                    wcmR2+(wcmRr1*sin(iwcmR*tpwcmR2/wcmRtringle2))
                    );


    }
    glEnd ();


    ///end waterfall middle circle
       glBegin(GL_QUADS);
	glColor3f(0.118, 0.565, 1.0000);  // Red
	glVertex2f(0.60f, -0.30f);    // x, y
	glVertex2f(0.90f, 0.00f);    // x, y
	glVertex2f(0.80f, 0.00f);    // x, y
	glVertex2f(0.50f, -0.30f);    // x, y
	glEnd();

	//1st set of dheo

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.89f ,0.01f);
            glVertex2d(0.84f ,-0.04f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.87f ,0.02f);
            glVertex2d(0.83f ,-0.06f);
            glEnd();
     glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.85f ,0.01f);
            glVertex2d(0.81f ,-0.04f);
            glEnd();

                 glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.82f ,0.01f);
            glVertex2d(0.78f ,-0.04f);
            glEnd();

            //2nd set

                        glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.79f ,-0.05f);
            glVertex2d(0.74f ,-0.08f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.77f ,-0.07f);
            glVertex2d(0.73f ,-0.09f);
            glEnd();
     glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.85f ,-0.05f);
            glVertex2d(0.81f ,-0.08f);
            glEnd();

                 glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.82f ,-0.05f);
            glVertex2d(0.78f ,-0.08f);
            glEnd();

            //3rd set


            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.82f ,-0.0f);
            glVertex2d(0.78f ,-0.08f);
            glEnd();

                glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.77f ,-0.08f);
            glVertex2d(0.72f ,-0.12f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.79f ,-0.06f);
            glVertex2d(0.74f ,-0.13f);
            glEnd();


            //4set
             glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.74f ,-0.14f);
            glVertex2d(0.70f ,-0.19f);
            glEnd();

             glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.72f ,-0.14f);
            glVertex2d(0.69f ,-0.19f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.68f ,-0.14f);
            glVertex2d(0.64f ,-0.19f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.67f ,-0.14f);
            glVertex2d(0.63f ,-0.19f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.70f ,-0.14f);
            glVertex2d(0.66f ,-0.19f);
            glEnd();

            //5th set
            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.70f ,-0.20f);
            glVertex2d(0.66f ,-0.24f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.68f ,-0.19f);
            glVertex2d(0.64f ,-0.26f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.66f ,-0.20f);
            glVertex2d(0.62f ,-0.24f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.64f ,-0.21f);
            glVertex2d(0.60f ,-0.27f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.62f ,-0.20f);
            glVertex2d(0.58f ,-0.24f);
            glEnd();



    /////green field end


    //////////////////////////////////

    ////1st house start

    ////////////////
   //body

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // blue
	glVertex2f(-0.30f, -0.23f);    // x, y
	glVertex2f(-0.30f, 0.06f);    // x, y
	glVertex2f(-0.60f, 0.06f);    // x, y
	glVertex2f(-0.60f, -0.23f);    // x, y

    glEnd ();


    //left windows
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 1.0f, 0.0f); // blue
	glVertex2f(-0.53f, -0.15f);    // x, y
	glVertex2f(-0.53f, -0.05f);    // x, y
	glVertex2f(-0.58f, -0.05f);    // x, y
	glVertex2f(-0.58f, -0.15f);    // x, y

    glEnd ();

    //door
     glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 1.0f, 0.0f); // blue
	glVertex2f(-0.40f, -0.23f);    // x, y
	glVertex2f(-0.40f, -0.05f);    // x, y
	glVertex2f(-0.50f, -0.05f);    // x, y
	glVertex2f(-0.50f, -0.23f);    // x, y

    glEnd ();

    //right window
     glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 1.0f, 0.0f); // blue
	glVertex2f(-0.33f, -0.15f);    // x, y
	glVertex2f(-0.33f, -0.05f);    // x, y
	glVertex2f(-0.38f, -0.05f);    // x, y
	glVertex2f(-0.38f, -0.15f);    // x, y

    glEnd ();


    //head
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, .99f); // blue
	glVertex2f(-0.26f, 0.06f);    // x, y
	glVertex2f(-0.30f, 0.15f);    // x, y
	glVertex2f(-0.60f, 0.15f);    // x, y
	glVertex2f(-0.64f, 0.06f);    // x, y

    glEnd ();



    ///////////////////
   ///// 1st house end
   ////////////////////



   ///////////////////
   /////2nd house
   ////////////////////

    //////1st house


    //body
        glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 0.0f, .99f); // blue
	glVertex2f(-0.60f, -0.28f);    // x, y
	glVertex2f(-0.60f, -0.04f);    // x, y
	glVertex2f(-0.90f, -0.04f);    // x, y
	glVertex2f(-0.90f, -0.28f);    // x,
    glEnd ();


    //left windows


      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 1.0f); // blue
	glVertex2f(-0.83f, -0.20f);    // x, y
	glVertex2f(-0.83f, -0.10f);    // x, y
	glVertex2f(-0.88f, -0.10f);    // x, y
	glVertex2f(-0.88f, -0.20f);    // x, y

    glEnd ();


    //door


      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 1.0f); // blue
	glVertex2f(-0.80f, -0.28f);    // x, y
	glVertex2f(-0.80f, -0.10f);    // x, y
	glVertex2f(-0.70f, -0.10f);    // x, y
	glVertex2f(-0.70f, -0.28f);    // x, y

     glEnd ();


	//right window

	  glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // blue
	glVertex2f(-0.63f, -0.20f);    // x, y
	glVertex2f(-0.63f, -0.10f);    // x, y
	glVertex2f(-0.68f, -0.10f);    // x, y
	glVertex2f(-0.68f, -0.20f);    // x, y
    glEnd ();


    //head
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 0.0f, .99f); // blue
	glVertex2f(-0.55f, -0.04f);    // x, y
	glVertex2f(-0.60f, 0.08f);    // x, y
	glVertex2f(-0.90f, 0.08f);    // x, y
	glVertex2f(-0.95f, -0.04f);    // x, y

    glEnd ();


    ////////////////////////////
    /////1st tree
    ///////////////////////////



      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.30f, 0.19f, .00f); // blue
	glVertex2f(-0.15f, -0.15f);    // x, y
	glVertex2f(-0.15f, -0.01f);    // x, y
	glVertex2f(-0.17f, -0.01f);    // x, y
	glVertex2f(-0.17f, -0.15f);    // x, y
    glEnd ();


    //bottom head


      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.06f, -0.01f);    // x, y
	glVertex2f(-0.16f, 0.10f);    // x, y
	glVertex2f(-0.16f, 0.10f);    // x, y
	glVertex2f(-0.28f, -0.01f);    // x, y
    glEnd ();

    //middle head

      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f);// blue
	glVertex2f(-0.06f, 0.05f);    // x, y
	glVertex2f(-0.16f, 0.18f);    // x, y
	glVertex2f(-0.16f, 0.18f);    // x, y
	glVertex2f(-0.28f, 0.05f);    // x, y
    glEnd ();

    //top head
     glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.06f, 0.10f);    // x, y
	glVertex2f(-0.16f, 0.25f);    // x, y
	glVertex2f(-0.16f, 0.25f);    // x, y
	glVertex2f(-0.28f, 0.10f);    // x, y
    glEnd ();


    /////////////////////////
    /////2nd tree
    ///////////////////////

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.30f, 0.19f, .00f); // blue
	glVertex2f(0.15f, -0.15f);    // x, y
	glVertex2f(0.15f, -0.01f);    // x, y
	glVertex2f(0.17f, -0.01f);    // x, y
	glVertex2f(0.17f, -0.15f);    // x, y
    glEnd ();

    //bottomhead

      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.10f, -0.01f);    // x, y
	glVertex2f(0.16f, 0.10f);    // x, y
	glVertex2f(0.16f, 0.10f);    // x, y
	glVertex2f(0.21f, -0.01f);    // x, y
    glEnd ();

    //middlehead

      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.10f, 0.05f);    // x, y
	glVertex2f(0.16f, 0.18f);    // x, y
	glVertex2f(0.16f, 0.18f);    // x, y
	glVertex2f(0.21f, 0.05f);    // x, y
    glEnd ();

    //top head
     glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.10f, 0.10f);    // x, y
	glVertex2f(0.16f, 0.25f);    // x, y
	glVertex2f(0.16f, 0.25f);    // x, y
	glVertex2f(0.21f, 0.10f);    // x, y
    glEnd ();


    ////////////////////////////////
    ///3rd house
    ///////////////////////////////

   //////////////////
    ///park
    ///////////////


    ////////////////////
    ///bench start
    ///////////////////


     glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.46f, 0.03f);    // x, y
	glVertex2f(0.42f, 0.10f);    // x, y
	glVertex2f(0.32f, 0.10f);    // x, y
	glVertex2f(0.25f, 0.03f);    // x, y
    glEnd ();



    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(0.46f, 0.01f);    // x, y
	glVertex2f(0.25f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_QUADS);
	 glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.31f, -0.03f);    // x, y
	glVertex2f(0.31f, 0.01f);    // x, y
	glVertex2f(0.29f, 0.01f);    // x, y
	glVertex2f(0.29f, -0.03f);    // x, y
    glEnd ();

    glBegin(GL_QUADS);
	 glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.42f, -0.03f);    // x, y
	glVertex2f(0.42f, 0.01f);    // x, y
	glVertex2f(0.40f, 0.01f);    // x, y
	glVertex2f(0.40f, -0.03f);    // x, y
    glEnd ();

    ///////////////////////
    ///beanch end
    //////////////////////


    /////////////////////
    ///slipper start
    //////////////////

     glBegin(GL_QUADS);
	 glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.70f, 0.00f);    // x, y
	glVertex2f(0.66f, 0.15f);    // x, y
	glVertex2f(0.60f, 0.15f);    // x, y
	glVertex2f(0.63f, 0.0f);    // x, y
    glEnd ();


    ///////////////////
    ///step
    //////////////////////

    //right

   glBegin(GL_QUADS);
	 glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.58f, 0.00f);    // x, y
	glVertex2f(0.64f, 0.10f);    // x, y
	glVertex2f(0.63f, 0.10f);    // x, y
	glVertex2f(0.57f, 0.00f);    // x, y
    glEnd ();

    //left

     glBegin(GL_QUADS);
	 glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.52f, 0.00f);    // x, y
	glVertex2f(0.59f, 0.15f);    // x, y
	glVertex2f(0.60f, 0.15f);    // x, y
	glVertex2f(0.51f, 0.00f);    // x, y
    glEnd ();

    //step line

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.51f, 0.01f);    // x, y
	glVertex2f(0.58f, 0.01f);    // x, y
	glEnd();



    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.53f, 0.03f);    // x, y
	glVertex2f(0.59f, 0.03f);    // x, y
	glEnd();


    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.54f, 0.05f);    // x, y
	glVertex2f(0.61f, 0.05f);    // x, y
	glEnd();


    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, 0.07f);    // x, y
	glVertex2f(0.62f, 0.07f);    // x, y
	glEnd();


    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.56f, 0.09f);    // x, y
	glVertex2f(0.61f, 0.09f);    // x, y
	glEnd();



    /////////////////////////
    ///3rd house end
    ////////////////////////

    /////////////////////////
    ///3rd tree
    /////////////////////////

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.30f, 0.19f, .00f); // blue
	glVertex2f(0.74f, 0.00f);    // x, y
	glVertex2f(0.74f, 0.12f);    // x, y
	glVertex2f(0.72f, 0.12f);    // x, y
	glVertex2f(0.72f, 0.00f);    // x, y
    glEnd ();

    //head

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.77f, 0.12f);    // x, y
	glVertex2f(0.73f, 0.40f);    // x, y
	glVertex2f(0.73f, 0.40f);    // x, y
	glVertex2f(0.70f, 0.12f);    // x, y
    glEnd ();







    ////////////////////////
    ///4th tree
    /////////////////////

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.30f, 0.19f, .00f);// blue
	glVertex2f(0.94f, 0.00f);    // x, y
	glVertex2f(0.94f, 0.12f);    // x, y
	glVertex2f(0.92f, 0.12f);    // x, y
	glVertex2f(0.92f, 0.00f);    // x, y
    glEnd ();

    //head
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f);  // blue
	glVertex2f(0.97f, 0.12f);    // x, y
	glVertex2f(0.93f, 0.40f);    // x, y
	glVertex2f(0.93f, 0.40f);    // x, y
	glVertex2f(0.90f, 0.12f);    // x, y
    glEnd ();


///////River
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.255, 0.412, 0.882); // blue
	glVertex2f(1.0f, -1.0f);    // x, y
	glVertex2f(1.0f, -0.20f);    // x, y
	glVertex2f(-1.0f, -0.40f);    // x, y
	glVertex2f(-1.0f, -1.0f);    // x, y

    glEnd ();

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

//PADDY_FIELD

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 1.0f, 0.0f); // blue
	glVertex2f(-0.06f, 0.05f);    // x, y
	glVertex2f(-0.06f, 0.19f);    // x, y
	glVertex2f(0.1f, 0.19f);
	glVertex2f(0.1f, 0.05f);    // x, y
	   // x, y
    glEnd ();
glFlush();

      // x, y
    glEnd ();
glFlush();
//PaddyWater
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.118, 0.565, 1.0000); // blue
	    // x, y
	glVertex2f(-0.06f, 0.05f);    // x, y
	glVertex2f(-0.06f, 0.03f);
	glVertex2f(0.1f, 0.03f);
	glVertex2f(0.1f, 0.05f);    // x, y
	   // x, y
    glEnd ();
glFlush();

//PADDYFIELD tree1
glBegin(GL_POLYGON);            // These vertices form a closed polygon              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.04f, 0.07f);
	    // x, y// x, y
	glVertex2f(-0.03f, 0.07f);


	glVertex2f(-0.03f, 0.13f);

	  glVertex2f(-0.035f, 0.09f); // x, y
	glVertex2f(-0.04f, 0.13f);

	  // x, y
    glEnd ();
glFlush();

//PADDYFIELD tree2
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.01f, 0.07f);    // x, y// x, y
	glVertex2f(0.0f, 0.07f);
	glVertex2f(0.0f, 0.13f);
	glVertex2f(-0.005f, 0.09f);    // x, y
	glVertex2f(-0.01f, 0.13f);   // x, y
    glEnd ();
glFlush();
//PADDYFIELD tree3
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.01f, 0.07f);    // x, y// x, y
	glVertex2f(0.02f, 0.07f);
	glVertex2f(0.02f, 0.13f);
	glVertex2f(0.015f, 0.09f);    // x, y
	glVertex2f(0.01f, 0.13f);   // x, y
    glEnd ();
glFlush();

//PADDYFIELD tree4
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.03f, 0.07f);    // x, y// x, y
	glVertex2f(0.04f, 0.07f);
	glVertex2f(0.04f, 0.13f);
	glVertex2f(0.035f, 0.09f);    // x, y
	glVertex2f(0.03f, 0.13f);   // x, y
    glEnd ();
glFlush();

//PADDYFIELD tree5
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.05f, 0.07f);    // x, y// x, y
	glVertex2f(0.06f, 0.07f);
	glVertex2f(0.06f, 0.13f);
	glVertex2f(0.055f, 0.09f);    // x, y
	glVertex2f(0.05f, 0.13f);   // x, y
    glEnd ();
glFlush();

//PADDYFIELD tree6
glBegin(GL_POLYGON);               // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.07f, 0.07f);    // x, y// x, y
	glVertex2f(0.08f, 0.07f);
	glVertex2f(0.08f, 0.13f);
	glVertex2f(0.075f, 0.09f);   // x, y
	glVertex2f(0.07f, 0.13f);   // x, y
    glEnd ();
glFlush();

//PADDYFIELD tree7
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.04f, 0.15f);    // x, y// x, y
	glVertex2f(-0.03f, 0.15f);
	glVertex2f(-0.03f, 0.18f);
	glVertex2f(-0.035f, 0.16f);	    // x, y
	glVertex2f(-0.04f, 0.18f);   // x, y
    glEnd ();
glFlush();

//PADDYFIELD tree8
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.01f, 0.15f);    // x, y// x, y
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.0f, 0.18f);
	glVertex2f(-0.005f, 0.16f);   // x, y
	glVertex2f(-0.01f, 0.18f);   // x, y
    glEnd ();
glFlush();
//PADDYFIELD tree9
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.01f, 0.15f);    // x, y// x, y
	glVertex2f(0.02f, 0.15f);
	glVertex2f(0.02f, 0.18f);
	 glVertex2f(0.015f, 0.16f);   // x, y
	glVertex2f(0.01f, 0.18f);   // x, y
    glEnd ();
glFlush();
//PADDYFIELD tree10
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.03f, 0.15f);    // x, y// x, y
	glVertex2f(0.04f, 0.15f);
	glVertex2f(0.04f, 0.18f);
    glVertex2f(0.035f, 0.16f);    // x, y
	glVertex2f(0.03f, 0.18f);   // x, y
    glEnd ();
glFlush();
//PADDYFIELD tree11
glBegin(GL_POLYGON);               // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.05f, 0.15f);    // x, y// x, y
	glVertex2f(0.06f, 0.15f);
	glVertex2f(0.06f, 0.18f);
		 glVertex2f(0.055f, 0.16f);    // x, y
	glVertex2f(0.05f, 0.18f);   // x, y
    glEnd ();
glFlush();
//PADDYFIELD tree12
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.07f, 0.15f);    // x, y// x, y
	glVertex2f(0.08f, 0.15f);
	glVertex2f(0.08f, 0.18f);
	   glVertex2f(0.075f, 0.16f);// x, y
	glVertex2f(0.07f, 0.18f);   // x, y
    glEnd ();


glutTimerFunc(5000,display_rainyDay,0);
Idle();
glFlush();



}



///__________________________________________________________________Rainy Day ___________________________________________________________________________________________________________
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


    //////////////////////////



    //first hill
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(.627, 0.322, 0.176); // Red
	glVertex2f(-0.80f, 0.20f);    // x, y
	glVertex2f(-0.90f, 0.40f);    // x, y
	glVertex2f(-0.90f, 0.40f);    // x, y
	glVertex2f(-1.0f, 0.20f);    // x, y
	glEnd();

	//2nd hill
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(.627, 0.322, 0.176);  // Red
	glVertex2f(-0.40f, 0.20f);    // x, y
	glVertex2f(-0.60f, 0.50f);    // x, y
	glVertex2f(-0.60f, 0.50f);    // x, y
	glVertex2f(-.90f, 0.20f);    // x, y
	glEnd();
    //3rd hill
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(.627, 0.322, 0.176);  // Red
	glVertex2f(0.0f, 0.20f);    // x, y
	glVertex2f(-0.30f, 0.40f);    // x, y
	glVertex2f(-0.30f, 0.40f);    // x, y
	glVertex2f(-.50f, 0.20f);    // x, y
	glEnd();
	//4th hill
	glBegin(GL_QUADS);
	glColor3f(.627, 0.322, 0.176);  // Red
	glVertex2f(0.50f, 0.20f);    // x, y
	glVertex2f(0.30f, 0.40f);    // x, y
	glVertex2f(0.30f, 0.40f);    // x, y
	glVertex2f(-0.10f, 0.20f);    // x, y
	glEnd();
	 //5th waterfall connected
	glBegin(GL_QUADS);
	glColor3f(.627, 0.322, 0.176);  // Red
	glVertex2f(0.80f, 0.20f);    // x, y
	glVertex2f(0.60f, 0.60f);    // x, y
	glVertex2f(0.50f, 0.60f);    // x, y
	glVertex2f(0.25f, 0.10f);    // x, y
	glEnd();
	//6th hill
	glBegin(GL_QUADS);
	glColor3f(.627, 0.322, 0.176);   // Red
	glVertex2f(1.0f, 0.20f);    // x, y
	glVertex2f(0.90f, 0.40f);    // x, y
	glVertex2f(0.90f, 0.40f);    // x, y
	glVertex2f(0.75f, 0.20f);    // x, y
	glEnd();

	////////////////////////////////
	///waterfall
	//////////////
    glBegin(GL_QUADS);
	glColor3f(0.118, 0.565, 1.0000);  // Red
	glVertex2f(0.70f, 0.20f);    // x, y
	glVertex2f(0.60f, 0.60f);    // x, y
	glVertex2f(0.50f, 0.60f);    // x, y
	glVertex2f(0.60f, 0.20f);    // x, y
	glEnd();


         //////waterfall line

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.52f ,0.58f);
        glVertex2d(0.54f ,0.50f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.56f ,0.55f);
        glVertex2d(0.58f ,0.49f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.59f ,0.59f);
        glVertex2d(0.60f ,0.54f);
        glEnd();

         glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.57f ,0.59f);
        glVertex2d(0.58f ,0.54f);
        glEnd();

        //2nd set

          glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.54f ,0.48f);
        glVertex2d(0.55f ,0.40f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.56f ,0.45f);
        glVertex2d(0.58f ,0.39f);
        glEnd();

        glBegin(GL_LINES);
       glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.59f ,0.49f);
        glVertex2d(0.60f ,0.44f);
        glEnd();

         glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.57f ,0.49f);
        glVertex2d(0.58f ,0.44f);
        glEnd();

          glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.60f ,0.49f);
        glVertex2d(0.61f ,0.42f);
        glEnd();

        ////3rd set

        glBegin(GL_LINES);
       glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.59f ,0.39f);
        glVertex2d(0.60f ,0.34f);
        glEnd();

         glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.57f ,0.39f);
        glVertex2d(0.58f ,0.34f);
        glEnd();

          glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.60f ,0.39f);
        glVertex2d(0.61f ,0.32f);
        glEnd();

           glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.62f ,0.38f);
        glVertex2d(0.63f ,0.30f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.64f ,0.39f);
        glVertex2d(0.65f ,0.35f);
        glEnd();

        //4th set



          glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.60f ,0.29f);
        glVertex2d(0.61f ,0.22f);
        glEnd();

           glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.62f ,0.28f);
        glVertex2d(0.63f ,0.20f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.64f ,0.29f);
        glVertex2d(0.65f ,0.25f);
        glEnd();


          glBegin(GL_LINES);
       glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.65f ,0.29f);
        glVertex2d(0.66f ,0.34f);
        glEnd();

     glBegin(GL_LINES);
         glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.67f ,0.29f);
        glVertex2d(0.68f ,0.24f);
        glEnd();



	///waterfall left circle
	 int iwcL;
    GLfloat wcL1=0.61f; GLfloat wcL2= 0.2f; GLfloat wcLr1 = 0.02f;
    int wcLtringle2=40;

    GLfloat tpwcL2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.0, 1.0, 1.0);
    glVertex2f (wcL1,wcL2);
    for(iwcL= 0;iwcL<=wcLtringle2; iwcL++)
    {
        glVertex2f (
                    wcL1+(wcLr1*cos(iwcL*tpwcL2/wcLtringle2)),
                    wcL2+(wcLr1*sin(iwcL*tpwcL2/wcLtringle2))
                    );


    }
    glEnd ();

//waterfall middle circle

	 int iwcM;
    GLfloat wcM1=0.64f; GLfloat wcM2= 0.2f; GLfloat wcMr1 = 0.02f;
    int wcMtringle2=40;

    GLfloat tpwcM2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.0, 1.0, 1.0);
    glVertex2f (wcM1,wcM2);
    for(iwcM= 0;iwcM<=wcMtringle2; iwcM++)
    {
        glVertex2f (
                    wcM1+(wcMr1*cos(iwcM*tpwcM2/wcMtringle2)),
                    wcM2+(wcMr1*sin(iwcM*tpwcM2/wcMtringle2))
                    );


    }
    glEnd ();

//waterfall right circle

	 int iwcR;
    GLfloat wcR1=0.68; GLfloat wcR2= 0.2f; GLfloat wcRr1 = 0.02f;
    int wcRtringle2=40;

    GLfloat tpwcR2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0, 1.0, 1.0);
    glVertex2f (wcR1,wcR2);
    for(iwcR= 0;iwcR<=wcRtringle2; iwcR++)
    {
        glVertex2f (
                    wcR1+(wcRr1*cos(iwcR*tpwcR2/wcRtringle2)),
                    wcR2+(wcRr1*sin(iwcR*tpwcR2/wcRtringle2))
                    );


    }
    glEnd ();

    ///waterfall top circle end

///next waterfall code line 444

//Hill part end




// sun part start


/* Sun___________________________________________________________

    GLfloat p8=-0.3f; GLfloat q8= 0.66f; GLfloat r8 = 0.12f;
    int tringle8=40;

    GLfloat tp8 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    if(night==true){
        glColor3ub ( 194,197,204);
    }
    else{
    glColor3f(1.0f,0.9f,0.0f);
    }
    glVertex2f (p8,q8);
    for(int i= 0;i<=tringle8; i++)
    {
        glVertex2f (
                    p8+(r8*cos(i*tp8/tringle8)),
                    q8+(r8*sin(i*tp8/tringle8))
                    );


    }

 glEnd ();




    //sun part end
*/


    /////////////////////////////////////////////////////


    //cloud start


    ////////////////////////////////////////////////////



      //left 1st cloud

    //left 1st cloud left circle start



    ///////green field

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.420, 0.557, 0.137); // blue
	glVertex2f(1.0f, -0.20f);    // x, y
	glVertex2f(1.0f, 0.20f);    // x, y
	glVertex2f(-1.0f, 0.20f);    // x, y
	glVertex2f(-1.0f, -0.40f);    // x, y

    glEnd ();


    //////////////////////
    ///waterfall
    ////////////////////





    //main waterfall code

      glBegin(GL_QUADS);
	glColor3f(0.118, 0.565, 1.0000);  // Red
	glVertex2f(0.90f, 0.00f);    // x, y
	glVertex2f(0.70f, 0.20f);    // x, y
	glVertex2f(0.60f, 0.20f);    // x, y
	glVertex2f(0.80f, 0.0f);    // x, y
	glEnd();



         //////waterfall line

         //1st set
        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.61f ,0.20f);
        glVertex2d(0.65f ,0.18f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.62f ,0.18f);
        glVertex2d(0.66f ,0.15f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.65f ,0.20f);
        glVertex2d(0.69f ,0.16f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.70f ,0.19f);
        glVertex2d(0.73f ,0.14f);
        glEnd();

        //2nd set
        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.74f ,0.10f);
        glVertex2d(0.77f ,0.08f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.78f ,0.09f);
        glVertex2d(0.79f ,0.05f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.79f ,0.05f);
        glVertex2d(0.81f ,0.01f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.82f ,0.04f);
        glVertex2d(0.83f ,0.00f);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2d(0.84f ,0.05f);
        glVertex2d(0.87f ,0.00f);
        glEnd();

		//waterfall left circle


	 int iwcmL;
    GLfloat wcmL1=0.81f; GLfloat wcmL2= 0.0f; GLfloat wcmLr1 = 0.02f;
    int wcmLtringle2=40;

    GLfloat tpwcmL2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0, 1.0, 1.0);
    glVertex2f (wcmL1,wcmL2);
    for(iwcmL= 0;iwcmL<=wcmLtringle2; iwcmL++)
    {
        glVertex2f (
                    wcmL1+(wcmLr1*cos(iwcmL*tpwcmL2/wcmLtringle2)),
                    wcmL2+(wcmLr1*sin(iwcmL*tpwcmL2/wcmLtringle2))
                    );


    }
    glEnd ();

//waterfall middle circle

	 int iwcmM;
    GLfloat wcmM1=0.84f; GLfloat wcmM2= 0.0f; GLfloat wcmMr1 = 0.02f;
    int wcmMtringle2=40;

    GLfloat tpwcmM2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.0, 1.0, 1.0);
    glVertex2f (wcmM1,wcmM2);
    for(iwcmM= 0;iwcmM<=wcmMtringle2; iwcmM++)
    {
        glVertex2f (
                    wcmM1+(wcmMr1*cos(iwcmM*tpwcmM2/wcmMtringle2)),
                    wcmM2+(wcmMr1*sin(iwcmM*tpwcmM2/wcmMtringle2))
                    );


    }
    glEnd ();

//waterfall right circle

	 int iwcmR;
    GLfloat wcmR1=0.87; GLfloat wcmR2= 0.0f; GLfloat wcmRr1 = 0.023f;
    int wcmRtringle2=40;

    GLfloat tpwcmR2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0, 1.0, 1.0);
    glVertex2f (wcmR1,wcmR2);
    for(iwcmR= 0;iwcmR<=wcmRtringle2; iwcmR++)
    {
        glVertex2f (
                    wcmR1+(wcmRr1*cos(iwcmR*tpwcmR2/wcmRtringle2)),
                    wcmR2+(wcmRr1*sin(iwcmR*tpwcmR2/wcmRtringle2))
                    );


    }
    glEnd ();


    ///end waterfall middle circle
       glBegin(GL_QUADS);
	glColor3f(0.118, 0.565, 1.0000);  // Red
	glVertex2f(0.60f, -0.30f);    // x, y
	glVertex2f(0.90f, 0.00f);    // x, y
	glVertex2f(0.80f, 0.00f);    // x, y
	glVertex2f(0.50f, -0.30f);    // x, y
	glEnd();

	//1st set of dheo

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.89f ,0.01f);
            glVertex2d(0.84f ,-0.04f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.87f ,0.02f);
            glVertex2d(0.83f ,-0.06f);
            glEnd();
     glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.85f ,0.01f);
            glVertex2d(0.81f ,-0.04f);
            glEnd();

                 glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.82f ,0.01f);
            glVertex2d(0.78f ,-0.04f);
            glEnd();

            //2nd set

                        glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.79f ,-0.05f);
            glVertex2d(0.74f ,-0.08f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.77f ,-0.07f);
            glVertex2d(0.73f ,-0.09f);
            glEnd();
     glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.85f ,-0.05f);
            glVertex2d(0.81f ,-0.08f);
            glEnd();

                 glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.82f ,-0.05f);
            glVertex2d(0.78f ,-0.08f);
            glEnd();

            //3rd set


            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.82f ,-0.0f);
            glVertex2d(0.78f ,-0.08f);
            glEnd();

                glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.77f ,-0.08f);
            glVertex2d(0.72f ,-0.12f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.79f ,-0.06f);
            glVertex2d(0.74f ,-0.13f);
            glEnd();


            //4set
             glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.74f ,-0.14f);
            glVertex2d(0.70f ,-0.19f);
            glEnd();

             glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.72f ,-0.14f);
            glVertex2d(0.69f ,-0.19f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.68f ,-0.14f);
            glVertex2d(0.64f ,-0.19f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.67f ,-0.14f);
            glVertex2d(0.63f ,-0.19f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.70f ,-0.14f);
            glVertex2d(0.66f ,-0.19f);
            glEnd();

            //5th set
            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.70f ,-0.20f);
            glVertex2d(0.66f ,-0.24f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.68f ,-0.19f);
            glVertex2d(0.64f ,-0.26f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.66f ,-0.20f);
            glVertex2d(0.62f ,-0.24f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.64f ,-0.21f);
            glVertex2d(0.60f ,-0.27f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.0f, 1.0f, 1.0f);
            glVertex2d(0.62f ,-0.20f);
            glVertex2d(0.58f ,-0.24f);
            glEnd();



    /////green field end


    //////////////////////////////////

    ////1st house start

    ////////////////
   //body

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // blue
	glVertex2f(-0.30f, -0.23f);    // x, y
	glVertex2f(-0.30f, 0.06f);    // x, y
	glVertex2f(-0.60f, 0.06f);    // x, y
	glVertex2f(-0.60f, -0.23f);    // x, y

    glEnd ();


    //left windows
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 1.0f, 0.0f); // blue
	glVertex2f(-0.53f, -0.15f);    // x, y
	glVertex2f(-0.53f, -0.05f);    // x, y
	glVertex2f(-0.58f, -0.05f);    // x, y
	glVertex2f(-0.58f, -0.15f);    // x, y

    glEnd ();

    //door
     glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 1.0f, 0.0f); // blue
	glVertex2f(-0.40f, -0.23f);    // x, y
	glVertex2f(-0.40f, -0.05f);    // x, y
	glVertex2f(-0.50f, -0.05f);    // x, y
	glVertex2f(-0.50f, -0.23f);    // x, y

    glEnd ();

    //right window
     glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 1.0f, 0.0f); // blue
	glVertex2f(-0.33f, -0.15f);    // x, y
	glVertex2f(-0.33f, -0.05f);    // x, y
	glVertex2f(-0.38f, -0.05f);    // x, y
	glVertex2f(-0.38f, -0.15f);    // x, y

    glEnd ();


    //head
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, .99f); // blue
	glVertex2f(-0.26f, 0.06f);    // x, y
	glVertex2f(-0.30f, 0.15f);    // x, y
	glVertex2f(-0.60f, 0.15f);    // x, y
	glVertex2f(-0.64f, 0.06f);    // x, y

    glEnd ();



    ///////////////////
   ///// 1st house end
   ////////////////////



   ///////////////////
   /////2nd house
   ////////////////////

    //////1st house


    //body
        glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 0.0f, .99f); // blue
	glVertex2f(-0.60f, -0.28f);    // x, y
	glVertex2f(-0.60f, -0.04f);    // x, y
	glVertex2f(-0.90f, -0.04f);    // x, y
	glVertex2f(-0.90f, -0.28f);    // x,
    glEnd ();


    //left windows


      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 1.0f); // blue
	glVertex2f(-0.83f, -0.20f);    // x, y
	glVertex2f(-0.83f, -0.10f);    // x, y
	glVertex2f(-0.88f, -0.10f);    // x, y
	glVertex2f(-0.88f, -0.20f);    // x, y

    glEnd ();


    //door


      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 1.0f); // blue
	glVertex2f(-0.80f, -0.28f);    // x, y
	glVertex2f(-0.80f, -0.10f);    // x, y
	glVertex2f(-0.70f, -0.10f);    // x, y
	glVertex2f(-0.70f, -0.28f);    // x, y

     glEnd ();


	//right window

	  glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // blue
	glVertex2f(-0.63f, -0.20f);    // x, y
	glVertex2f(-0.63f, -0.10f);    // x, y
	glVertex2f(-0.68f, -0.10f);    // x, y
	glVertex2f(-0.68f, -0.20f);    // x, y
    glEnd ();


    //head
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 0.0f, .99f); // blue
	glVertex2f(-0.55f, -0.04f);    // x, y
	glVertex2f(-0.60f, 0.08f);    // x, y
	glVertex2f(-0.90f, 0.08f);    // x, y
	glVertex2f(-0.95f, -0.04f);    // x, y

    glEnd ();


    ////////////////////////////
    /////1st tree
    ///////////////////////////



      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.30f, 0.19f, .00f); // blue
	glVertex2f(-0.15f, -0.15f);    // x, y
	glVertex2f(-0.15f, -0.01f);    // x, y
	glVertex2f(-0.17f, -0.01f);    // x, y
	glVertex2f(-0.17f, -0.15f);    // x, y
    glEnd ();


    //bottom head


      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.06f, -0.01f);    // x, y
	glVertex2f(-0.16f, 0.10f);    // x, y
	glVertex2f(-0.16f, 0.10f);    // x, y
	glVertex2f(-0.28f, -0.01f);    // x, y
    glEnd ();

    //middle head

      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f);// blue
	glVertex2f(-0.06f, 0.05f);    // x, y
	glVertex2f(-0.16f, 0.18f);    // x, y
	glVertex2f(-0.16f, 0.18f);    // x, y
	glVertex2f(-0.28f, 0.05f);    // x, y
    glEnd ();

    //top head
     glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.06f, 0.10f);    // x, y
	glVertex2f(-0.16f, 0.25f);    // x, y
	glVertex2f(-0.16f, 0.25f);    // x, y
	glVertex2f(-0.28f, 0.10f);    // x, y
    glEnd ();


    /////////////////////////
    /////2nd tree
    ///////////////////////

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.30f, 0.19f, .00f); // blue
	glVertex2f(0.15f, -0.15f);    // x, y
	glVertex2f(0.15f, -0.01f);    // x, y
	glVertex2f(0.17f, -0.01f);    // x, y
	glVertex2f(0.17f, -0.15f);    // x, y
    glEnd ();

    //bottomhead

      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.10f, -0.01f);    // x, y
	glVertex2f(0.16f, 0.10f);    // x, y
	glVertex2f(0.16f, 0.10f);    // x, y
	glVertex2f(0.21f, -0.01f);    // x, y
    glEnd ();

    //middlehead

      glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.10f, 0.05f);    // x, y
	glVertex2f(0.16f, 0.18f);    // x, y
	glVertex2f(0.16f, 0.18f);    // x, y
	glVertex2f(0.21f, 0.05f);    // x, y
    glEnd ();

    //top head
     glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.10f, 0.10f);    // x, y
	glVertex2f(0.16f, 0.25f);    // x, y
	glVertex2f(0.16f, 0.25f);    // x, y
	glVertex2f(0.21f, 0.10f);    // x, y
    glEnd ();


    ////////////////////////////////
    ///3rd house
    ///////////////////////////////

   //////////////////
    ///park
    ///////////////


    ////////////////////
    ///bench start
    ///////////////////


     glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.46f, 0.03f);    // x, y
	glVertex2f(0.42f, 0.10f);    // x, y
	glVertex2f(0.32f, 0.10f);    // x, y
	glVertex2f(0.25f, 0.03f);    // x, y
    glEnd ();



    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(0.46f, 0.01f);    // x, y
	glVertex2f(0.25f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_QUADS);
	 glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.31f, -0.03f);    // x, y
	glVertex2f(0.31f, 0.01f);    // x, y
	glVertex2f(0.29f, 0.01f);    // x, y
	glVertex2f(0.29f, -0.03f);    // x, y
    glEnd ();

    glBegin(GL_QUADS);
	 glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.42f, -0.03f);    // x, y
	glVertex2f(0.42f, 0.01f);    // x, y
	glVertex2f(0.40f, 0.01f);    // x, y
	glVertex2f(0.40f, -0.03f);    // x, y
    glEnd ();

    ///////////////////////
    ///beanch end
    //////////////////////


    /////////////////////
    ///slipper start
    //////////////////

     glBegin(GL_QUADS);
	 glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.70f, 0.00f);    // x, y
	glVertex2f(0.66f, 0.15f);    // x, y
	glVertex2f(0.60f, 0.15f);    // x, y
	glVertex2f(0.63f, 0.0f);    // x, y
    glEnd ();


    ///////////////////
    ///step
    //////////////////////

    //right

   glBegin(GL_QUADS);
	 glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.58f, 0.00f);    // x, y
	glVertex2f(0.64f, 0.10f);    // x, y
	glVertex2f(0.63f, 0.10f);    // x, y
	glVertex2f(0.57f, 0.00f);    // x, y
    glEnd ();

    //left

     glBegin(GL_QUADS);
	 glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex2f(0.52f, 0.00f);    // x, y
	glVertex2f(0.59f, 0.15f);    // x, y
	glVertex2f(0.60f, 0.15f);    // x, y
	glVertex2f(0.51f, 0.00f);    // x, y
    glEnd ();

    //step line

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.51f, 0.01f);    // x, y
	glVertex2f(0.58f, 0.01f);    // x, y
	glEnd();



    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.53f, 0.03f);    // x, y
	glVertex2f(0.59f, 0.03f);    // x, y
	glEnd();


    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.54f, 0.05f);    // x, y
	glVertex2f(0.61f, 0.05f);    // x, y
	glEnd();


    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, 0.07f);    // x, y
	glVertex2f(0.62f, 0.07f);    // x, y
	glEnd();


    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.56f, 0.09f);    // x, y
	glVertex2f(0.61f, 0.09f);    // x, y
	glEnd();



    /////////////////////////
    ///3rd house end
    ////////////////////////

    /////////////////////////
    ///3rd tree
    /////////////////////////

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.30f, 0.19f, .00f); // blue
	glVertex2f(0.74f, 0.00f);    // x, y
	glVertex2f(0.74f, 0.12f);    // x, y
	glVertex2f(0.72f, 0.12f);    // x, y
	glVertex2f(0.72f, 0.00f);    // x, y
    glEnd ();

    //head

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.77f, 0.12f);    // x, y
	glVertex2f(0.73f, 0.40f);    // x, y
	glVertex2f(0.73f, 0.40f);    // x, y
	glVertex2f(0.70f, 0.12f);    // x, y
    glEnd ();







    ////////////////////////
    ///4th tree
    /////////////////////

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.30f, 0.19f, .00f);// blue
	glVertex2f(0.94f, 0.00f);    // x, y
	glVertex2f(0.94f, 0.12f);    // x, y
	glVertex2f(0.92f, 0.12f);    // x, y
	glVertex2f(0.92f, 0.00f);    // x, y
    glEnd ();

    //head
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f);  // blue
	glVertex2f(0.97f, 0.12f);    // x, y
	glVertex2f(0.93f, 0.40f);    // x, y
	glVertex2f(0.93f, 0.40f);    // x, y
	glVertex2f(0.90f, 0.12f);    // x, y
    glEnd ();


///////River
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.255, 0.412, 0.882); // blue
	glVertex2f(1.0f, -1.0f);    // x, y
	glVertex2f(1.0f, -0.20f);    // x, y
	glVertex2f(-1.0f, -0.40f);    // x, y
	glVertex2f(-1.0f, -1.0f);    // x, y

    glEnd ();

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

//PADDY_FIELD

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.1f, 1.0f, 0.0f); // blue
	glVertex2f(-0.06f, 0.05f);    // x, y
	glVertex2f(-0.06f, 0.19f);    // x, y
	glVertex2f(0.1f, 0.19f);
	glVertex2f(0.1f, 0.05f);    // x, y
	   // x, y
    glEnd ();
//glFlush();

      // x, y
    glEnd ();
glFlush();
//PaddyWater
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.118, 0.565, 1.0000); // blue
	    // x, y
	glVertex2f(-0.06f, 0.05f);    // x, y
	glVertex2f(-0.06f, 0.03f);
	glVertex2f(0.1f, 0.03f);
	glVertex2f(0.1f, 0.05f);    // x, y
	   // x, y
    glEnd ();
//glFlush();

//PADDYFIELD tree1
glBegin(GL_POLYGON);            // These vertices form a closed polygon              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.04f, 0.07f);
	    // x, y// x, y
	glVertex2f(-0.03f, 0.07f);


	glVertex2f(-0.03f, 0.13f);

	  glVertex2f(-0.035f, 0.09f); // x, y
	glVertex2f(-0.04f, 0.13f);

	  // x, y
    glEnd ();
//glFlush();

//PADDYFIELD tree2
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.01f, 0.07f);    // x, y// x, y
	glVertex2f(0.0f, 0.07f);
	glVertex2f(0.0f, 0.13f);
	glVertex2f(-0.005f, 0.09f);    // x, y
	glVertex2f(-0.01f, 0.13f);   // x, y
    glEnd ();
//glFlush();
//PADDYFIELD tree3
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.01f, 0.07f);    // x, y// x, y
	glVertex2f(0.02f, 0.07f);
	glVertex2f(0.02f, 0.13f);
	glVertex2f(0.015f, 0.09f);    // x, y
	glVertex2f(0.01f, 0.13f);   // x, y
    glEnd ();
//glFlush();

//PADDYFIELD tree4
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.03f, 0.07f);    // x, y// x, y
	glVertex2f(0.04f, 0.07f);
	glVertex2f(0.04f, 0.13f);
	glVertex2f(0.035f, 0.09f);    // x, y
	glVertex2f(0.03f, 0.13f);   // x, y
    glEnd ();
//glFlush();

//PADDYFIELD tree5
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.05f, 0.07f);    // x, y// x, y
	glVertex2f(0.06f, 0.07f);
	glVertex2f(0.06f, 0.13f);
	glVertex2f(0.055f, 0.09f);    // x, y
	glVertex2f(0.05f, 0.13f);   // x, y
    glEnd ();
//glFlush();

//PADDYFIELD tree6
glBegin(GL_POLYGON);               // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.07f, 0.07f);    // x, y// x, y
	glVertex2f(0.08f, 0.07f);
	glVertex2f(0.08f, 0.13f);
	glVertex2f(0.075f, 0.09f);   // x, y
	glVertex2f(0.07f, 0.13f);   // x, y
    glEnd ();
//glFlush();

//PADDYFIELD tree7
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.04f, 0.15f);    // x, y// x, y
	glVertex2f(-0.03f, 0.15f);
	glVertex2f(-0.03f, 0.18f);
	glVertex2f(-0.035f, 0.16f);	    // x, y
	glVertex2f(-0.04f, 0.18f);   // x, y
    glEnd ();
//glFlush();

//PADDYFIELD tree8
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(-0.01f, 0.15f);    // x, y// x, y
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.0f, 0.18f);
	glVertex2f(-0.005f, 0.16f);   // x, y
	glVertex2f(-0.01f, 0.18f);   // x, y
    glEnd ();
//glFlush();
//PADDYFIELD tree9
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.01f, 0.15f);    // x, y// x, y
	glVertex2f(0.02f, 0.15f);
	glVertex2f(0.02f, 0.18f);
	 glVertex2f(0.015f, 0.16f);   // x, y
	glVertex2f(0.01f, 0.18f);   // x, y
    glEnd ();
//glFlush();
//PADDYFIELD tree10
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.03f, 0.15f);    // x, y// x, y
	glVertex2f(0.04f, 0.15f);
	glVertex2f(0.04f, 0.18f);
    glVertex2f(0.035f, 0.16f);    // x, y
	glVertex2f(0.03f, 0.18f);   // x, y
    glEnd ();
//glFlush();
//PADDYFIELD tree11
glBegin(GL_POLYGON);               // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.05f, 0.15f);    // x, y// x, y
	glVertex2f(0.06f, 0.15f);
	glVertex2f(0.06f, 0.18f);
		 glVertex2f(0.055f, 0.16f);    // x, y
	glVertex2f(0.05f, 0.18f);   // x, y
    glEnd ();
//glFlush();
//PADDYFIELD tree12
glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.43f, 0.0f); // blue
	glVertex2f(0.07f, 0.15f);    // x, y// x, y
	glVertex2f(0.08f, 0.15f);
	glVertex2f(0.08f, 0.18f);
	   glVertex2f(0.075f, 0.16f);// x, y
	glVertex2f(0.07f, 0.18f);   // x, y
    glEnd ();


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


glutTimerFunc(7000,display_summerDay,0);
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
case 'r':
    display_rainyDay;


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
	glutDisplayFunc(summer); // Register display callback handler for window re-paint
	glutKeyboardFunc(handleKeypress);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}


