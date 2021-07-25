#include <iostream>
#include "../include/vec3.h"
using namespace std;

int main(){

    // Image size
    const int img_w = 256;
    const int img_h = 256; 

    // Render

    std::cout << "P3\n" << img_w << " " << img_h << "\n255\n";

     
    for(int y = 0; y < img_h; y++){
        std::cerr << "\rScanline remaining: " << y << std::flush;
        for(int x = 0; x < img_w; x++){

            vec3 color(double(y)/(img_h-1), double(x)/(img_w-1), 0.25);

            /**
            auto r = double(y)/(img_h-1);
            auto g = double(x)/(img_w-1);
            auto b = 0.25;
            **/

            int ir = static_cast<int>(color.x*255);
            int ig = static_cast<int>(color.y*255);
            int ib = static_cast<int>(color.z*255);

            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }   std::cerr << "\nFinished!";
}