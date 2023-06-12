#include <iostream>

int main(){

    std::cout << std::endl;
    std::cout << "Non const reference : " << std::endl;
    int age {27};
    int& ref_age{age};

    std::cout << "Age : " << age << std::endl;
    std::cout << "Ref_age : " << ref_age << std::endl;

    std::cout << std::endl;

    const int& const_ref_age{age};
    //const_ref_age++;
    
    std::cout << "Const_ref_age : " << const_ref_age << std::endl;
    age = 50;
    std::cout << "Const_ref_age : " << const_ref_age << std::endl;

    std::cout << "We can make a reference const which stops us from modifying data using a reference. However we cannot change a constant variable by using a non constant reference. This means that we cannot make a non constant reference of a constatnt variable, it will throw an error." << std::endl;

    const int* const p_age {&age};
    std::cout << "We can use pointers like references by using the syntax const int* const" << std::endl;
    return 0;
}