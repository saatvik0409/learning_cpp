#include "dog.h"
#include <iostream>

dog* dog::set_name(std::string dog_name){
    this->dog_name = dog_name;
    return this;
}

dog* dog::set_age(int dog_age){
    this->dog_age = dog_age;
    return this;
}

dog* dog::set_breed(std::string dog_breed){
    this->dog_breed = dog_breed;
    return this;
}

void dog::print_info(){
    std::cout << "Dog Name : " << dog_name << "; Dog Age : " << dog_age << "; Dog Breed : " << dog_breed << std::endl << std::endl; 
}
