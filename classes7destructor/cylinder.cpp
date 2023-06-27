#include "cylinder.h"
#include "constants.h"
#include <iostream>

cylinder::cylinder(double r,double h){
    base_radius = r;
    height = h;
}

cylinder::~cylinder(){
    //this is a destructor
    std::cout << "Hello I am in the destructor please help!" << std::endl;
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

