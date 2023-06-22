#include <iostream>

void increment(int& var){
    
    ++var;
    std::cout << "The value of var is : " << var << std::endl;
    std::cout << "&var : " << &var << std::endl;
}

int main(){

    int var {5};
    std::cout << "Var before increment : " << var << "; &var : " << &var << std::endl;
    increment(var);
    std::cout << "Var after  increment : " << var << "; &var : " << &var << std::endl;    
    return 0;
}