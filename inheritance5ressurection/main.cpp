#include <iostream>
#include "person.cpp"
#include "engineer.cpp"
#include "elec_engineer.cpp"

int main(){
    
    std::cout << std::endl;
    std::cout << "Suppose we do private inheritance in a class, however we want some variables to be public or portected so that we can use them in downstream classes or outside the class. For this we can use the 'using' keyword. In whatever scope we use the 'using' keyword, the variable or method would be ressucted to that scope. However you should note that if the variable is private to upstream class it cannot be resurrected in anydownstream class!" << std::endl;
    std::cout << std::endl;
    std::cout << "You know what's interesting!, we cannot resurrect even the protected variable unless we resurrect it in protected scope or private scope in any downstream class!" << std::endl;
    person person1;
    engineer engineer1;
    electricalEngineer elec_engineer1;

    engineer1.print_info();
    elec_engineer1.print_info();

    return 0;
}