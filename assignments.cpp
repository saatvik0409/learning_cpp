#include <iostream>

int main(){
    int var1{123}; //declare and initialize
    std::cout << "var1 : " << var1 << std::endl;

    var1 = 55; //Assign
    std::cout << "var1 : " << var1 << std::endl;

    std::cout << std::endl;
    std::cout << "-------------------" << std::endl;

    double var2 {44.55}; //Declare and initialize
    std::cout << "var2 : " << var2 <<std::endl;

    var2 = 99.99;
    std::cout << "var2 : " << var2 << std::endl;
    std::cout << std::endl;

    auto var3{333u}; //Auto type deduction can cause error

    var3 = -22;//Assign Negative number. DANGER!

    std::cout << "var3 : " << var3 << std::endl;
    //Puts a garbage value 
    
    return 0;
}