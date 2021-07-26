#include <iostream>
#include "../include/vec3.h"
#include "../include/color.h"
#include "../include/ray.h"

int main(){

    // Image size
    const int img_w = 256;
    const int img_h = 256; 
    float r,g,b;

    // Render
    std::cout << "P3\n" << img_w << " " << img_h << "\n255\n\n";
    
    
    //vec3 v1(5,10,3);
    //vec3 v3 = v1.cross(v1);
    //std::cout << v3.x <<" "<< v3.y <<" "<< v3.z << std::endl;
    //std::cout << v1.x <<" "<< v1.y <<" "<< v1.z << std::endl;

    point3 ori(0,0,0);
    vec3 dir(2,4,3);
    ray ray1(ori, dir);

    point3 t(ray1.at(-1));

    std::cout << t.x << std::endl;
    
   //for(int y = 0; y < img_h; y++){
   //    std::cerr << "\rScanline remaining: " << y << std::flush;
   //    for(int x = 0; x < img_w; x++){
   //        r = float(y)/(img_h-1);
   //        g = float(x)/(img_w-1);
   //        b = 0.25f;
   //        color pixel_color(r, g, b);
   //        write_color(pixel_color);

   //    }
   //}   std::cerr << "\nFinished!";
}
