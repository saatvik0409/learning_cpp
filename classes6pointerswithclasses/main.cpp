#include <iostream>
#include "cylinder.h"

void pass_by_value(cylinder inp){
    return;
}

cylinder return_by_val(){
    cylinder cylinder2(10,10);
    return cylinder2;
}

int main(){

  std::cout << std::endl;
  std::cout << "If we want to use pointer with classes, then we can do this, because doing it the regular way is ugly, refer code!" << std::endl;
  cylinder* p_cylinder = new cylinder(10,10);
  std::cout << "Volume of cylinder : " << (*p_cylinder).volume()<< std::endl;
  std::cout << "Volume of cylinder : " << p_cylinder->volume() << std::endl;


  return 0;

}