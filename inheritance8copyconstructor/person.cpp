#include <iostream>
#include "person.h"

std::ostream& operator<<(std::ostream& out, const person& person){
    out << "Name : " << person.name << "; address : " << person.address << "; Contact Number : " << person.phone_num << std::endl; 
    return out;
}

person::person(){
    std::cout << "Constructing perosn class ... " << std::endl;
}

person::person(std::string name_inp, std::string address_inp, int phone_num_inp){
    std::cout << "Custom constructor called for person..." << std::endl;
    name = name_inp;
    address = address_inp;
    phone_num = phone_num_inp;
}

person::person(const person& inp_person)
    : name(inp_person.get_name()),address(inp_person.get_address()),phone_num(inp_person.get_phone_num()){
        std::cout << "Copy constructor called for person!" << std::endl;
    }

std::string person::get_name() const{
    return name;
}

std::string person::get_address() const{
    return address;
}

int person::get_phone_num() const{
    return phone_num;
}


