#include "cylinder.h"
#include "constants.h"

cylinder::cylinder(double r,double h){
    base_radius = r;
    height = h;
}

double cylinder::volume(){
    return base_radius*base_radius*height*pi;
}

double cylinder::r_getter(){
    return base_radius;
}

double cylinder::h_getter(){
    return height;
}

void cylinder::r_setter(double r){
    base_radius = r;
}

void cylinder::h_setter(double h){
    height = h;
}

