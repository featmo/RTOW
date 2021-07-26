#ifndef COLOR_H
#define COLOR_H

#include "../include/vec3.h"
#include <iostream>

void write_color(color pixel_color){
    
    int ir = static_cast<int>(pixel_color.x*255);
    int ig = static_cast<int>(pixel_color.y*255);
    int ib = static_cast<int>(pixel_color.z*255);
    std::cout << ir << " " << ig << " " << ib << "\n";
}

#endif