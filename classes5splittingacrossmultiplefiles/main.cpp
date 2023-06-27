#include <iostream>
#include "cylinder.h"


 int main(){

   std::cout << std::endl;
   cylinder cylinder1(10,10);
   std::cout << "Radius 1 : " << cylinder1.r_getter() << std::endl;
   std::cout << "Height 1 : " << cylinder1.h_getter() << std::endl; 
   std::cout << "Volume : " << cylinder1.volume()<< std::endl;

   cylinder1.r_setter(100);
   cylinder1.h_setter(100);
   std::cout << std::endl;
   std::cout << "Radius 1 : " << cylinder1.r_getter() << std::endl;
   std::cout << "Height 1 : " << cylinder1.h_getter() << std::endl; 
   std::cout << "Volume : " << cylinder1.volume()<< std::endl;


    return 0;
 }