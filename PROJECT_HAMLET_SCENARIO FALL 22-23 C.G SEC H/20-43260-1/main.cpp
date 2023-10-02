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
	// Draw a Red 1x1 Square centered at origin



	//sky

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.118, 0.565, 1.0000); // blue
	glVertex2f(1.0f, 0.20f);    // x, y
	glVertex2f(1.0f, 1.0f);    // x, y
	glVertex2f(-1.0f, 1.0f);    // x, y
	glVertex2f(-1.0f, 0.20f);    // x, y
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
	glColor3f(.627, 0., 0.176);  // Red
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
	//5th
	glBegin(GL_QUADS);
	glColor3f(.627, 0.322, 0.176);  // Red
	glVertex2f(0.80f, 0.20f);    // x, y
	glVertex2f(0.60f, 0.60f);    // x, y
	glVertex2f(0.60f, 0.60f);    // x, y
	glVertex2f(0.25f, 0.10f);    // x, y
	glEnd();


	////////////////////////////////
	///waterfall
	//////////////





	//6th hill
	glBegin(GL_QUADS);
	glColor3f(.627, 0.322, 0.176);   // Red
	glVertex2f(1.0f, 0.20f);    // x, y
	glVertex2f(0.90f, 0.40f);    // x, y
	glVertex2f(0.90f, 0.40f);    // x, y
	glVertex2f(0.75f, 0.20f);    // x, y
	glEnd();

//Hill part end




// sun part start

    int i;
    GLfloat p1=-0.3f; GLfloat q1= 0.8f; GLfloat r1 = 0.15f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,0.0f);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();




    //sun part end



    /////////////////////////////////////////////////////


    //cloud start


    ////////////////////////////////////////////////////

    ///////////////////////////
    ///animation start
    //////////////////////////







 //////////////////////////////
    ///animation end
    //////////////////////////


      //left 1st cloud

    //left 1st cloud left circle start

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



////////////////////////////////////
///1st cloud end
///////////////////////




//  left 2nd left cloud circle start


    int bL;

    GLfloat bL1=0.24f; GLfloat bL2= 0.80f; GLfloat bLr1 = 0.10f;
    int tringlebL2=40;

    GLfloat bLtp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
   glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (bL1,bL2);
    for(bL= 0;bL<=tringlebL2; bL++)
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
