#include <GL/glut.h>
#include <GL/gl.h>
void display() {
    // First :The Background Color
    glClearColor(0.0f,0.0f, 0.0f, 1.0f); // Set background color to black (Red, Green and Blue values=zeros)
    glClear(GL_COLOR_BUFFER_BIT);  //To Clear the color buffer
     //Second :Set the below line width to 3 (As it required)
    glLineWidth(3.0f);    
    //Third :Line Drawing Using Line Primitive
    glBegin(GL_LINE_LOOP);   
    glColor3f(1.0f, 0.0f, 0.0f);          //bottom left line color
    glVertex3f(-0.5f, -0.5f, 0.0f);      //The bottom left corner       (x,y Negative)
    glColor3f(1.0f, 0.0f, 0.0f);        //top left line color
    glVertex3f(-0.5f, 0.5f, 0.0f);     //The top left corner       (x Negative)&&(y Positive)
    glColor3f(1.0f, 0.0f, 0.0f);      //top right line color
    glVertex3f(0.5f, 0.5f, 0.0f);    //The top right corner             (x,y Positive)
    glColor3f(1.0f, 0.0f, 0.0f);    //bottom right line color
    glVertex3f(0.5f, -0.5f, 0.0f); //The bottom right corner   (x Postive)&& (y Negative)
    glEnd();
 //Diagonal Creation
//Note: Each Diagonal should have 2 vertices as we use "GL_LINE_LOOP" and here each vertex connected to next one Automatically
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 0.0f, 0.0f);         //Color of Diagonal two (1st Vertex)
    glVertex3f(-0.5f, 0.5f, 0.0f);      // Diagonal one (First Vertex) from Top Left
    glColor3f(1.0f, 0.0f, 0.0f);       //Color of Diagonal two(2nd Vertex)
    glVertex3f(0.5f, -0.5f, 0.0f);    //Diagonal one (Second Vertex) To Bottom Right 

    glColor3f(1.0f, 0.0f, 0.0f);        //Color of Diagonal two (1st Vertex)
    glVertex3f(0.5f, 0.5f, 0.0f);      // Diagonal two (First Vertex) from Top Right
    glColor3f(1.0f, 0.0f, 0.0f);      //Color of Diagonal two(2nd Vertex)
    glVertex3f(-0.5f, -0.5f, 0.0f);   //Diagonal two (Second Vertex) To Bottom Left 
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("Assignment 1 Task2 _Mark Fady 41810042"); // Create a window with the given title
    glutInitWindowSize(400, 400);   // Set the window's initial width & height
    glutInitWindowPosition(100, 100); // Position the window's initial top-left corner
    glutDisplayFunc(display); // Call the void display function
    glutMainLoop();  // Enter the infinitely event-processing loop
    return 0;
}