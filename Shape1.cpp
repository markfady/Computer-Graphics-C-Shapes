#include <GL/glut.h> 
void display() {
    // First :The Background Color
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f); // Set background color to green (Red and Blue values=zeros)
    glClear(GL_COLOR_BUFFER_BIT);  //To Clear the color buffer

    //Second: The White Square    
    glBegin(GL_QUADS);    //Square shape got 4 Vertices so we use "GL_QUADS"
    glColor3f(1.0f, 1.0f, 1.0f); //Set each 3 values "RGB" to 1 = White 

    glVertex2f(-0.5f, -0.5f);      // Set dimension of First vertex  
    glVertex2f(0.5f, -0.5f);      // Set the dimension of Second  vertex 
    glVertex2f(0.5f, 0.5f);      // Set the dimension of Thrid vertex
    glVertex2f(-0.5f, 0.5f);    //  Set the dimension of Fourth vertex
    glEnd();
    glFlush();           
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("Assignment 1 Task1 _Mark Fady 41810042"); // Create a window with the given title
    glutInitWindowSize(400, 400);   // Set the window's initial width & height
    glutInitWindowPosition(100, 100); // Position the window's initial top-left corner
    glutDisplayFunc(display); // Call the void display function
    glutMainLoop();  // Enter the infinitely event-processing loop
    return 0;
}