#include "glfw3.h"
#ifndef GRAPHICS_H
#define GRAPHICS_H


namespace BonderGraphics {

    class Graphics {
    public:
        Graphics();
        ~Graphics();
    bool init();
    void Run();
    void cleanup();
    private:
        GLFWwindow* window;
    };
}



#endif //GRAPHICS_H
