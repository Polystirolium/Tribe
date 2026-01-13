#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    if (!glfwInit())
    {
        std::cerr << "Failed to initialize GLFW\n";
        return -1;
    }

    GLFWwindow *window = glfwCreateWindow(800, 600, "My GLFW Window", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

   
    glfwMakeContextCurrent(window);

    
    while (!glfwWindowShouldClose(window))
    {
        // Render here (e.g. clear the screen)
        glClear(GL_COLOR_BUFFER_BIT); // Requires OpenGL headers (like GL/glew.h)

        
        glfwSwapBuffers(window);

        // Опрос и обработка событий (клавиатура, мышь и т.д.)
        glfwPollEvents();
    }

    // Завершение работы GLFW, очистив все ранее выделенные ресурсы
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
