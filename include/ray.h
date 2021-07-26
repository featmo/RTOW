#ifndef RAY_H
#define RAY_H

#include "../include/vec3.h"

class ray{
    public:
        ray();
        ray(point3& origin, vec3& direction);
        point3 origin();
        vec3 direction();
        point3 at(float t);

        point3 ori;
        vec3 dir;

};

ray::ray(){}
ray::ray(point3& origin, vec3& direction): ori(origin), dir(direction){}

point3 ray::origin(){ return ori; }
vec3 ray::direction(){  return dir; }

point3 ray::at(float t){
    vec3 d(dir*t);
    return point3( ori + d);
}

#endif