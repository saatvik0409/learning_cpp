#include <iostream>
#include <cmath>

//you can go and read documentation from cppreference.com

int main(){
    double weight {7.7};

    //floor and ceil
    std::cout << "Weight : " << weight << std::endl;
    std::cout << "The floor of weight is : " << std::floor(weight) << std::endl;
    std::cout << "The ceil of weight is  : " << std::ceil(weight) << std::endl;

    double savings {-5000};
    std::cout << std::endl;
    std::cout <<  "Abs of weight is : " << std::abs(weight) << std::endl;
    std::cout <<  "Abs of saving is : " << std::abs(savings) << std::endl;

    double exponential = std::exp(10);
    std::cout << std::endl;
    std::cout << "e^10 : " << exponential << std::endl;

    int num1 = 3;
    int num2 = 4;

    std::cout << std::endl;
    std::cout << "3^4 : " << std::pow(num1,num2) << std::endl;
    std::cout << "4^3 : " << std::pow(num2,num1) << std::endl;

    std::cout << std::endl;
    std::cout << "The natural log of 54.59    : " << std::log(54.59) << std::endl;
    std::cout << "The log of 10000 to base 10 : " << std::log10(10000) << std::endl;

    std::cout << std::endl;
    std::cout << "The square root of 25 is : " << std::sqrt(25) << std::endl;
    std::cout << "The square root of 31 is : " << std::sqrt(31) << std::endl;
    
    std::cout << std::endl;
    std::cout << "Rounded value of 30.5 : " << std::round(30.5) << std::endl;
    std::cout << "Rounded value of 30.8 : " << std::round(30.8) << std::endl;
    std::cout << "Rounded value of 30.2 : " << std::round(30.2) << std::endl;
    
    return 0;
}