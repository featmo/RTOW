#include <cmath>

using std::sqrt;

class vec3 {
    public:
        vec3();
        vec3(float x, float y, float z);
        bool operator==(vec3 val);
        vec3 operator+(vec3 val);
        vec3 operator-(vec3 val);
        vec3 operator*(float scalar);
        vec3 operator/(float scalar);
        vec3 cross(vec3 val);
        float dot(vec3 val);
        float length();

        float x;
        float y;
        float z; 
};
//type alias
using point3 = vec3;
using color = vec3;

vec3::vec3(){
    x = 0;
    y = 0;
    z = 0;
}

//globals assigned to value of passed values
vec3::vec3(float x, float y, float z) : x(x), y(y), z(z) {}

bool vec3::operator==(vec3 val){
    return(x == val.x && y == val.y && z == val.z);
}

vec3 vec3::operator+(vec3 val){
    /*Vector addition simply returns new vector*/
    return vec3(
        x + val.x,
        y + val.y,
        z + val.z
    );
}

vec3 vec3::operator-(vec3 val){
    /*Vector subtraction simply returns new vector*/
    return vec3(
        x - val.x,
        y - val.y,
        z - val.z
    );
}

vec3 vec3::operator*(float scalar){
    /*vector scalar multiplication*/
    return vec3(
        x * scalar,
        y * scalar,
        z * scalar
    );
}

vec3 vec3::operator/(float scalar){
    /*vector scalar division*/
    return vec3(
        x / scalar,
        y / scalar,
        z / scalar
    );
}

vec3 vec3::cross(vec3 val){
    /*cross product*/
    return vec3(
        y * val.z - z * val.y,
        z * val.x - x * val.z,
        x * val.y - y * val.x
    );
}

float vec3::dot(vec3 val){
    /*dot product*/
    return (
        x * val.x+
        y * val.y+
        z * val.z
    );
}

float vec3::length(){
    return float(sqrt(x*x + y*y + z*z));
}