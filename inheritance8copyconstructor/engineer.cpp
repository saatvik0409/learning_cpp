#include "engineer.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out, const engineer& engi1){
    out << "Name : " << engi1.get_name() << "; address : " << engi1.get_address() << "; Contact Number : " << engi1.get_phone_num() << "; Salary : " << engi1.salary << std::endl; 
    return out;
}

engineer::engineer()=default;

engineer::engineer(std::string name_inp, std::string address_inp, int phone_num_inp, int salary_inp):
    person(name_inp,address_inp,phone_num_inp), salary(salary_inp){
        std::cout << "Custom constructor called for engineer..." << std::endl;
}

engineer::engineer(const engineer& inp_engineer)
    : person(inp_engineer),salary(inp_engineer.get_salary()){
        std::cout << "Custom copy constructor called for engineer..." << std::endl;
}

int engineer::get_salary() const{
    return salary;
}
