#include <iostream>

int main(){
    int* p_number {new int(69)};

    int number{55};

    p_number = &number;

    std::cout << std::endl <<
    "We have lost access to dynamic memory 69" << std::endl <<
    "It still belongs to our program but we can't access it" << std::endl <<
    "Classic example of a memory leak." << std::endl;
    return 0;
} 