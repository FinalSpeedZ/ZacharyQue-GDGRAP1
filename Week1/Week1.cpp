#include <GLFW/glfw3.h>

#include "iostream"

#define PI 3.1416

#define SIDES 5

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 640, "Zachary Que", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        // Distance from center
        float fDistance = 0.5f;

        // inner angle
        float fInnerAngle = 360 / SIDES;

        glBegin(GL_POLYGON);

        for (int i = 0; i < SIDES; i++) {
            // x in polar is r * cos
            // y in polar is r * sin
            glVertex2f((GLfloat) (fDistance * cos(fInnerAngle * i * PI / 180)),
                       (GLfloat) (fDistance * sin(fInnerAngle * i * PI / 180)));
        }

        glEnd();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}