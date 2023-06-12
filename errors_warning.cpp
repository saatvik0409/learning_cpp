#include <iostream>

int main(){

    //compile error
    std::cout << "Hello World!"<<std::endl;

    //Run time error
    int val = 7/0;
    std::cout << "Value : "<<value << std::endl;
    /*During compilation, it would throw a warnign (0 division)
    but the program would compile anyways*/
    /*When we try to print the value of val variable
    it skips that line and does nothing*/
    return 0;
}

//compilation error (You may forget to add semicolon )
// Run Time error, it would throw error during execution
// Division by 0 is a run time error