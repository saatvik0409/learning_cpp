#include <iostream>

int main(){

    int numbers[] {1,2,3,4,5,6,7,8,9,0};

    std::cout << "numbers[12] : " << numbers[12] << std::endl;


    numbers[1299999] = 1000;
    // This may or may not print what we desire as other programs 
    // may come and overwrite this memory location as it is not owned by us
    // also this memory location may by owned by some other program
    // which may restrict us from overwriting this location
    //causing our program to crash

    std::cout << "numbers[1299999] : " << numbers[1299999] << std::endl;
    std::cout << "Program ending....." << std::endl; // The program will crash
    
    return 0;
}