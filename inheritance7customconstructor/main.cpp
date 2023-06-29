#include <iostream>
#include "person.h"
#include "engineer.h"
#include "elec_engineer.h"

int main(){
    
    person person1("Saatvik","AM 81 First Floor",95126);
    std::cout << person1 << std::endl << std::endl;

    engineer engineer1("Ramesh","Sport Villa",69699,10000);
    std::cout << engineer1 << std::endl << std::endl;

    electricalEngineer ee1("Yeh Buddha","Mere Beech mein",426069,50500,"bahut bolta hai");
    std::cout << ee1 << std::endl << std::endl;

    return 0;
}