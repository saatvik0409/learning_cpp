#include "person.h"
#include <iostream>

std::ostream& operator <<(std::ostream& out, const person& person){
    out << "Player name : [" << person.first_name << " " << person.last_name <<"]";
    return out;
}

person::person(std::string fn_inp,std::string ln_inp){
    first_name = fn_inp;
    last_name = ln_inp;
}

std::string person::get_first_name() const{
    return first_name;
}

std::string person::get_last_name() const{
    return last_name;
}

void person::set_first_name(std::string inp_param){
    first_name = inp_param;
}
void person::set_last_name(std::string inp_param){
    last_name = inp_param;
}
person::~person(){
    
}
