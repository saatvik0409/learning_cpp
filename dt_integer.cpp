#include <iostream>

//Braced initialization
//Functional initialization
//Assignment initialization


int main(){

    int elephant_count;

    int lion_count {10};
    int dog_count {10};
    int cat_count {15};
    
    int domestic_animals {dog_count+cat_count};
    int narrowing_conversion_functional(2.9); //silently chops off the value after decimal point

    std::cout << "Elephant Count : " << elephant_count << std::endl;
    std::cout << "Lion Count     : " << lion_count << std::endl;
    std::cout << "Dog count      : " << dog_count << std::endl;
    std::cout << "Cat count      : " << cat_count << std::endl;
    std::cout << "Domesticated animal count : "<<domestic_animals<<std::endl;
    std::cout << "Narrowing      : "<<narrowing_conversion_functional<<std::endl;

    std::cout << "sizeof int : "<<sizeof(int) <<std::endl;
    std::cout << "sizepf dog_count : "<<sizeof(dog_count)<<std::endl;

    return 0;
}
