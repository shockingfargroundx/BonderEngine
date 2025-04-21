#include "BonderGraphics"
#include <iostream>
#define LOG(x) std::cout << x << std::endl;


namespace BonderGraphics {
    unsigned int VBO, VAO, shaderProgram;
    const char* vertexShaderSource = R"(
        #version 330 core
        layout (location = 0) in vec3 aPos;  // position attribute

        void main() {
            gl_Position = vec4(aPos, 1.0);  // Pass position to clip space
        }
    )";
    const char* fragmentShaderSource = R"(
        #version 330 core
        out vec4 FragColor;

        void main() {
            FragColor = vec4(1.0, 0.5, 0.2, 1.0);  // Orange-ish color
        }
    )";

    Graphics::Graphics() : window(nullptr) {}

    Graphics::~Graphics() {
        cleanup();
        glfwDestroyWindow(window);
    }

    bool Graphics::init() {

        if (!glfwInit()) {
            LOG("Failed to initialize GLFW!")
            return false;
        }

        /* Create a windowed mode window and its OpenGL context */
        window = glfwCreateWindow(640, 480, "Bonder", NULL, NULL);
        if (!window) {
            LOG("Failed to create GLFW window!")
            glfwTerminate();
            return false;
        }

        /* Make the window's context current */
        glfwMakeContextCurrent(window);
        LOG("Window and OpenGL context initialized!")

        return true;
    }

    void Graphics::Run() {
        if (!window) return;  // Ensure window is initialized

    }
    void CompileShaders() {

    }

    void setupTriangle() {
        float verticies[] {
            -0.5f, 0.5f, 0.0f,
            -0.5f, 0.5f, 0.0f,
            -0.5f, 0.5f, 0.0f};

    }
    void Graphics::Render() {
        while (!glfwWindowShouldClose(window)) {

            glClearColor(0.1f, 0.2f, 0.3f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            /* Swap front and back buffers */
            glfwSwapBuffers(window);

            glfwPollEvents();
        }
    }


    void Graphics::cleanup() {
        if (window) {
            glfwDestroyWindow(window);
            window = nullptr;
        }
        glfwTerminate();
        LOG("GLFW terminated and resources cleaned up.")
    }

}

