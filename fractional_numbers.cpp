#include <iostream>
#include <iomanip>

int main(){

    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    //Print out the sizes
 
    std::cout << "sizeof float : " <<sizeof(number1) << std::endl;
    std::cout << "sizeof double : "<<sizeof(number2) << std::endl;
    std::cout << "sizeof long double : "<< sizeof(number3) << std::endl;

    //Preciscion

    std::cout << std::setprecision(20);
    std::cout << "number1 is : " << number1 << std::endl; //precision : 7
    std::cout << "number2 is : " << number2 << std::endl; //precision : 17
    std::cout << "number3 is : " << number3 << std::endl; //precision : 20

    //Float problems : The precision is usually too limited
    float number4 {19240023.0f}; //Error narrowing conversion
    
    std::cout << "number4 is : " << number4 << std::endl;

    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};
    double number8 {0.00000000003498};
    double number9 {3.498e-11};

    std::cout << "number5 is : "<<number5<<std::endl;
    std::cout << "number6 is : "<<number6<<std::endl;
    std::cout << "number7 is : "<<number7<<std::endl;
    std::cout << "number8 is : "<<number8<<std::endl;
    std::cout << "number9 is : "<<number9<<std::endl;

    //Infinity and NaN

    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;

    double number10 {5.6};
    double number11 {};
    double number12 {};

    //Infinity
    double result {number10/number11};

    std::cout << number10 << "/" << number11 << " yields " <<result << std::endl;
    std::cout << result << " + "<<number10 << " yields " << result + number10 << std::endl;

    //NaN
    result = number11/number12;
    std::cout << std::endl << number11 << "/" << number12 << " yields " <<result << std::endl;

    return 0;
    
}