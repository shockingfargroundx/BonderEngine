#include <iostream>
#include "BonderGraphics/Graphics.h"
#define LOG(x) std::cout << x << std::endl;

int main(void) {
    BonderGraphics::Graphics graphics;

    if (!graphics.init()) {
        return -1;  // Exit if initialization fails
    }

    //graphics.Run();  // Run the render loop (Not anymore. Use this later on...)

    graphics.Render();  //Run Render loop

    return 0;

}