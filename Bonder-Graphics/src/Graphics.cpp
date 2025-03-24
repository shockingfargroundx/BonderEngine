#include "BonderGraphics/Graphics.h"
#include <iostream>
#define LOG(x) std::cout << x << std::endl;


namespace BonderGraphics {

    Graphics::Graphics() : window(nullptr) {}

    Graphics::~Graphics() {
        cleanup();
    }

    bool Graphics::init() {
        /* Initialize the library */
        if (!glfwInit()) {
            std::cerr << "Failed to initialize GLFW!" << std::endl;
            return false;
        }

        /* Create a windowed mode window and its OpenGL context */
        window = glfwCreateWindow(640, 480, "Bonder", NULL, NULL);
        if (!window) {
            std::cerr << "Failed to create GLFW window!" << std::endl;
            glfwTerminate();
            return false;
        }

        /* Make the window's context current */
        glfwMakeContextCurrent(window);
        std::cout << "Window and OpenGL context initialized!" << std::endl;

        return true;
    }

    void Graphics::Run() {
        if (!window) return;  // Ensure window is initialized

    }
    void Graphics::Render() {
        while (!glfwWindowShouldClose(window)) {
            /* Render here */
            glClearColor(0.1f, 0.2f, 0.3f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
            //EDITOR: Use the verticies below on the triangle test
            float verticies[] {
                -0.5f, 0.5f, 0.0f,
                -0.5f, 0.5f, 0.0f,
                -0.5f, 0.5f, 0.0f};
// Triangle should be an object later so move it to Bonder-Scene??
            //OpenGL sucks ass
            /* Swap front and back buffers */
            glfwSwapBuffers(window);

            /* Poll for and process events */
            glfwPollEvents();
        }
    }


    void Graphics::cleanup() {
        if (window) {
            glfwDestroyWindow(window);
            window = nullptr;
        }
        glfwTerminate();
        std::cout << "GLFW terminated and resources cleaned up." << std::endl;
    }

}

