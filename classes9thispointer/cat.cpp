#include "cat.h"
#include <iostream>

cat& cat::set_name(std::string cat_name){
    this->cat_name = cat_name;
    return *this;
}
cat& cat::set_age(int cat_age){
    this->cat_age = cat_age;
    return *this;
}
cat& cat::set_breed(std::string cat_breed){
    this->cat_breed = cat_breed;
    return *this;
}

void cat::print_info(){
    std::cout << "Cat Name : " << cat_name << "; Cat Age : " << cat_age << "; Cat Breed : " << cat_breed<< std::endl << std::endl; 
}
