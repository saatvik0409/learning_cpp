#include <iostream>
#include "person.h"
#include "engineer.h"
#include "elec_engineer.h"

int main(){

    std::cout << "Copy constructors are used for copying already existing objects. If you don't use a copy constructor, the compiler will generate a copy constructor on it's own, however this copy consturctor copies each method one by one, which can be challenging and problem causing if our class uses dynamic memory allocation. This is because it will simply copy the original pointer which will make things ummmmmm. So it is highly encouraged to use custom copy constructors whenever possible." << std::endl << std::endl;

    
    person person1("Saatvik","AM 81 First Floor",95126);
    engineer engineer1("Ramesh","Sport Villa",69699,10000);
    electricalEngineer ee1("Yeh Buddha","Mere Beech mein",426069,50500,"bahut bolta hai");

    std::cout << std::endl;

    person person2(person1);
    std::cout << std::endl;
    engineer engineer2(engineer1);
    std::cout << std::endl;
    electricalEngineer ee2(ee1);
    std::cout << std::endl;

    std::cout << std::endl;

    std::cout << person2 << std::endl;
    std::cout << engineer2 << std::endl;
    std::cout << ee2 << std::endl;

    return 0;
}