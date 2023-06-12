#include <iostream>

int main(){
    
    int number1 = 15;          //decimal representation
    int number2 = 017;         //Octal Representation
    int number3 = 0x0F;        //Hexadecimal representation
    int number4 = 0b00001111;  //Binary representation

    std::cout << "Number 1 : "<<number1 << std::endl;
    std::cout << "Number 2 : "<<number2 << std::endl;
    std::cout << "Number 3 : "<<number3 << std::endl;
    std::cout << "Number 4 : "<<number4 << std::endl;

    return 0;
}