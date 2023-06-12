#include <iostream>
//terenary operators provide shorthand or syntactic sugar
//for if else statements

int main(){


    int max{};
    
    int a {39};
    int b {36};

    max = (a>b) ? a: b;
    std::cout << "The meximum of a(" << a << ") and b(" << b << ") is : " << max << std::endl;

    // note that both the options of terenary operators must be of the same type
    // Or they should be atleast of convertible type, else the program won't work
    // Also if option on right differs from option on left, the type of 
    // option on right would automatically converted to type of option on left
    // If that conversion is possible


    max = (a<b) ? a: 40.5f;
    std::cout << "The meximum of a(" << a << ") and b(" << b << ") is : " << max << std::endl;

    return 0;
}