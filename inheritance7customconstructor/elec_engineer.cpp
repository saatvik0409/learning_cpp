#include "elec_engineer.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out, const electricalEngineer& ee1){
    out << "Name : " << ee1.get_name() << "; address : " << ee1.get_address() << "; Contact Number : " << ee1.get_phone_num() << "; Salary : " << ee1.get_salary() << "; Specialization : " << ee1.specialization <<  std::endl; 
    return out;
}

electricalEngineer::electricalEngineer() = default;

electricalEngineer::electricalEngineer(std::string name_inp, std::string address_inp, int phone_num_inp, int salary_inp,std::string specialization_inp)
    : engineer(name_inp,address_inp,phone_num_inp,salary_inp),specialization(specialization_inp){
        std::cout << "Custom constructor for electrical engineer..." << std::endl;
}