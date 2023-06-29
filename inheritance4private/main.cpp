#include <iostream>
#include "person.cpp"
#include "engineer.cpp"
#include "elec_engineer.cpp"

int main(){
    
    std::cout << std::endl;

    person person1;
    engineer engineer1;
    electricalEngineer elec_engineer1;

    engineer1.print_info();
    elec_engineer1.print_info();

    return 0;
}