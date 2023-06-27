#include <iostream>
#include "cylinder.h"

void pass_by_value(cylinder inp){
    return;
}

cylinder return_by_val(){
    cylinder cylinder2(10,10);
    std::cout << "Not yet returned!" << std::endl;
    return cylinder2;
}

int main(){

  std::cout << std::endl;
  std::cout << "If we want to use pointer with classes, then we can do this, because doing it the regular way is ugly, refer code!" << std::endl;
  cylinder* p_cylinder = new cylinder(10,10);
  //std::cout << "Volume of cylinder : " << (*p_cylinder).volume()<< std::endl;
  //std::cout << "Volume of cylinder : " << p_cylinder->volume() << std::endl;
  std::cout << "A destructor is a method which is executed before a object is destoryed!." << std::endl;
  std::cout << "One should be careful with destructor, as it might be called at places which might not seem so obvious" << std::endl;
  std::cout << "For example a constructor is also called when a object is passed by value" << std::endl;
  std::cout << "It is also called when an object is returned from fucntion! We demonstrate it all!" << std::endl;
  std::cout << "However there are some obvious places where destructors will be called like when we delete a dynamically allocated object or scope of a stack object expires!" << std::endl;
  std::cout << std::endl;

  if (true){
    cylinder cylinder1(10,10);
    std::cout << "Destructor call due to expiration of scope : " << std::endl;
  }
  std::cout << std::endl;

  std::cout << "Destructor call due to deletion of dynamically allocated object : " << std::endl;
  delete p_cylinder;
  p_cylinder = nullptr;
  std::cout << std::endl;

  std::cout << "Destructor call due to pass by value : " << std::endl;
  cylinder cylinder3(10,10);
  std::cout << "Not yet passed!" << std::endl;
  pass_by_value(cylinder3);
  std::cout << std::endl;

  std::cout << "Destructor call due to return by value : " << std::endl;
  cylinder new_c = return_by_val();
  std::cout << std::endl;


  return 0;

}