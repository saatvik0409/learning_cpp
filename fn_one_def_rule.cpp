#include <iostream>

int main(){

    std::cout << "One definition rule" << std::endl;
    std::cout << "1) You can't redefine variables within single file or over multiple files!" << std::endl;
    std::cout << "2) You can't redefine functions within single file or over multiple files!" << std::endl;
    std::cout << "3) You can redefine classes in different files but not within same file!" << std::endl;
    
    return 0;
}