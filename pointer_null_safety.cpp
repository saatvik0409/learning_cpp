#include <iostream>

int main(){
    std::cout << std::endl;

    int* p_number = {};
    //p_number = new int(65);
    std::cout << "Verbose nullptr check : " << std::endl;
    if (p_number){
        std::cout << "The pointer points towards valid memory address : " << p_number << std::endl;
    }else{
        std::cout << "The pointer points towards invalid memory address" << std::endl;
    }
    delete p_number;
    p_number = nullptr;

    int *p_number1 {};

    delete p_number1;
    p_number1 = nullptr;
    // It's ok to delete a ptr containing nullptr
    // IT won't throw an error and work perfectly fine
    
    return 0;
}   