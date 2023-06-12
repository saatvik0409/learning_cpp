#include <iostream>

int main(){

    signed int value1 {10};
    signed int value2 {-300};

    std::cout << "Value1 : "<< value1 << std::endl;
    std::cout << "Value2 : "<< value2 << std::endl;
    std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2) : " <<sizeof(value2) << std::endl;

    unsigned int value3 {4};
    // unsigned int value4 {-5}; //compiler Error

    //short and long 
    long long int long_int {40000000000000000};

    std::cout << "sizeof(longint) : " <<sizeof(long_int) << std::endl;


    return 0;

}