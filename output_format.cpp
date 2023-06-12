#include <iostream>
#include <iomanip>

// U can go to cppreference.com for reading the documentation for each manipulator

int main(){


    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "---------------" << std::endl;

    std::cout << "Hello" <<std::endl;
    std::cout << "World" <<std::endl;

    std::cout << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";

    //std::endl and \n work very differently, however we are not learned enough currently to understand the difference
    // For now assume them as two different things who do the same thing

    std::cout << std::endl;

    std::cout << "This is a nice message ...." << std::endl << std::flush;
    //After this std::flush, we're sure that at this line, the message has been sent to terminal
    //For flushing. This may be important in some applciations

    std::cout << std::endl;

    std::cout << "Unformatted Table" << std::endl;
    std::cout << std::endl;
    std::cout << "Name " << "Roll No " << "Branch " << std::endl;
    std::cout << "Saatvik " << "B22232 " << "Electrical"<<std::endl;
    std::cout << "Jatin " << "B22266 " << "Physics" << std::endl;
    std::cout << "Vanshika " << "B22336 " << "Mechanical" << std::endl;
    std::cout << "Vinay " << "B22250 " << "Electrical" << std::endl;
    std::cout << "Divyanshu " << "B22108 " << "Computer" << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted Table : " <<std::endl;

    std::cout << std::endl;
    std::cout << std::setw(10) << "Name" << std::setw(10) << "Roll No" << std::setw(12) << "Branch" << std::endl;
    std::cout << std::setw(10) << "Saatvik " << std::setw(10) << "B22232 " << std::setw(12) <<  "Electrical"<<std::endl;
    std::cout << std::setw(10) <<  "Jatin " << std::setw(10) << "B22266 " << std::setw(12) <<  "Physics" << std::endl;
    std::cout << std::setw(10) <<  "Vanshika " << std::setw(10) <<"B22336 " << std::setw(12) <<  "Mechanical" << std::endl;
    std::cout << std::setw(10) <<  "Vinay " << std::setw(10) <<"B22250 " << std::setw(12) <<  "Electrical" << std::endl;
    std::cout << std::setw(10) <<  "Divyanshu " << std::setw(10) <<"B22108 " << std::setw(12) <<  "Computer" << std::endl;

    std::cout << std::endl;
    std::cout << std::left;
    std::cout << std::setw(10) << "Name" << std::setw(10) << "Roll No" << std::setw(12) << "Branch" << std::endl;
    std::cout << std::setw(10) << "Saatvik " << std::setw(10) << "B22232 " << std::setw(12) <<  "Electrical"<<std::endl;
    std::cout << std::setw(10) <<  "Jatin " << std::setw(10) << "B22266 " << std::setw(12) <<  "Physics" << std::endl;
    std::cout << std::setw(10) <<  "Vanshika " << std::setw(10) <<"B22336 " << std::setw(12) <<  "Mechanical" << std::endl;
    std::cout << std::setw(10) <<  "Vinay " << std::setw(10) <<"B22250 " << std::setw(12) <<  "Electrical" << std::endl;
    std::cout << std::setw(10) <<  "Divyanshu " << std::setw(10) <<"B22108 " << std::setw(12) <<  "Computer" << std::endl;

    float num = -5.61;
    
    //internal justification
    std::cout << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << num << std::endl;
    std::cout << std::endl << "Internal Justification : " << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << num << std::endl;

    std::cout << std::endl;
    std::cout << std::left;
    std::cout << std::setfill('-'); //Here double inverteds won't work for some reason :/
    std::cout << std::setw(10) << "Name" << std::setw(10) << "Roll No" << std::setw(12) << "Branch" << std::endl;
    std::cout << std::setw(10) << "Saatvik " << std::setw(10) << "B22232 " << std::setw(12) <<  "Electrical"<<std::endl;
    std::cout << std::setw(10) <<  "Jatin " << std::setw(10) << "B22266 " << std::setw(12) <<  "Physics" << std::endl;
    std::cout << std::setw(10) <<  "Vanshika " << std::setw(10) <<"B22336 " << std::setw(12) <<  "Mechanical" << std::endl;
    std::cout << std::setw(10) <<  "Vinay " << std::setw(10) <<"B22250 " << std::setw(12) <<  "Electrical" << std::endl;
    std::cout << std::setw(10) <<  "Divyanshu " << std::setw(10) <<"B22108 " << std::setw(12) <<  "Computer" << std::endl;

    bool var1 = true;
    bool var2 = false;

    std::cout << std::endl;
    std::cout << "Without Boolalpha : "<<std::endl;
    std::cout << "Var1 : " << var1 << std::endl;
    std::cout << "Var2 : " << var2 << std::endl;
    std::cout << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Without Boolalpha : "<<std::endl;
    std::cout << "Var1 : " << var1 << std::endl;
    std::cout << "Var2 : " << var2 << std::endl;
    std::cout << std::endl;   

    std::cout << std::noboolalpha;
    std::cout << "After noboolalpha : "<<std::endl;
    std::cout << "Var1 : " << var1 << std::endl;
    std::cout << "Var2 : " << var2 << std::endl;
    std::cout << std::endl;   

    int num1 = 56514;
    int num2 = -10;

    std::cout << "Without showpos : " << std::endl;
    std::cout << "Num1 : " << num1 << std::endl;
    std::cout << "Num2 : " << num2 << std::endl;
    std::cout << std::endl;

    std::cout << std::showpos;
    std::cout << "After showpos : " << std::endl;
    std::cout << "Num1 : " << num1 << std::endl;
    std::cout << "Num2 : " << num2 << std::endl;
    std::cout << std::endl;

    std::cout << std::noshowpos;
    std::cout << "After noshowpos : " << std::endl;
    std::cout << "Num1 : " << num1 << std::endl;
    std::cout << "Num2 : " << num2 << std::endl;
    std::cout << std::endl;  

    std::cout << "Various Systems : " << std::endl;
    std::cout << "Decimal : " << std::dec << num1 << std::endl;
    std::cout << "HexaDec : " << std::hex << num1 << std::endl;
    std::cout << "Octal   : " << std::oct << num1 << std::endl;
    std::cout << std::endl;

    //if we do this for double variable, it would drop the decimal point and do for remaining 
   
    std::cout << "Various Systems : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "Decimal : " << std::dec << num1 << std::endl;
    std::cout << "HexaDec : " << std::hex << num1 << std::endl;
    std::cout << "Octal   : " << std::oct << num1 << std::endl;
    std::cout << std::endl;

    double a {3.14159265358979323846264338327950288419716939937510};
    double b {1.34e-10};
    double c {34};

    std::cout << "Double values (default) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    std::cout << std::endl;

    std::cout << "Double values (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    std::cout << std::endl;

    std::cout << "Double values (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    std::cout << std::endl;

    //to back to default
    std::cout << "Double values (Reset) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); //hack
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    std::cout << std::endl;

    std::cout << "Precision : " << std::endl;
    std::cout << "Default Precision : " <<std::setprecision(10) << a << std::endl;
    std::cout << "Precision (20)    : " <<std::setprecision(20) << a << std::endl;
    std::cout << "Precision (40)    : " <<std::setprecision(40) << a << std::endl;
    std::cout << std::endl;

    a = 5.0;
    b = 6;

    std::cout << std::setprecision(5);
    std::cout << "Double (without showpoint) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << std::endl;

    std::cout << "Double (showpoint) : " << std::endl;
    std::cout << std::showpoint;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << std::endl;

    std::cout << "Double (after noshowpoint) : " << std::endl;
    std::cout << std::noshowpoint;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << std::endl;   
    return 0;

    
}