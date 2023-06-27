#include "cylinder.h"
#include "constants.h"
#include <iostream>

cylinder::cylinder(double r,double h,std::string inp_name){
    base_radius = r;
    height = h;
    name = inp_name;
    std::cout << "Construct : " << name << std::endl;
}

cylinder::~cylinder(){
    //this is a destructor
    std::cout << "Destruct : " << name << std::endl;    
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

