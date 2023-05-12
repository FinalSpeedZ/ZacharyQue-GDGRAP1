#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 640, "Hello World", NULL, NULL);
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

        ///* Make a triangle */
        ///*
        //    Center of window is 0, 0
        //    Left is -1, Right is 1
        //    Top is 1, Bottom -1
        //*/
        //glBegin(GL_TRIANGLES);
        //glVertex2f(0.f, 1.f);
        //glVertex2f(-1.f, -1.f);
        //glVertex2f(1.f, -1.f);
        //glEnd();

        /* Make a pentagon */
        glBegin(GL_POLYGON);
        

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}