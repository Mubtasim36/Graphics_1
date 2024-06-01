#include<GL/gl.h> //opengl header library
#include<GL/glu.h>
#include<GL/glut.h>

void display();

void init(){
     glClearColor(1,0,0.0,0.0); //here the 1 and 0 are the intensity(brightness) of the colors(red,green,blue,alpha) 1 is most, 0 is least

    /* glClearColor(1,0.5,0.0,0.0);
     glClearColor(1,0.5,1.0,0.0);
     glClearColor(1,0.5,0.5,0.0); */
     //(red,green,blue,alpha) if (1,1,0,0) is used then red+green=yellow will be shown, (1,0,1,0) will be red+blue=purple, if (0,0,0,0) is used then it will show black
}

int main(int argc, char**argv) //arguments that initialize glut
{

    glutInit(&argc,argv); //passing the arguments in int main()
    glutInitDisplayMode(GLUT_RGB); // color mode is RGB


    glutInitWindowPosition(200,100); //(x,y) position


    glutInitWindowSize(1000,500); //defines the width and height of the output window


    glutCreateWindow("First window"); //this will create the window and the argument text(string) will show as the window name

    glutDisplayFunc(display); //display function which calls the void display()
    init(); //to call the void init(),
    glutMainLoop(); //this will keep the main function in a loop so that it keeps showing
}

void display()
{
   glClear(GL_COLOR_BUFFER_BIT);   //glClear function is used to clear buffers, here the buffer is color buffer which stores the colors
   glLoadIdentity(); //resets co-ordinate system from previous frame

   //drawings

   glFlush();  //used to display the screen
}
