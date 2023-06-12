#include <iostream>

int main(){

    char *p_char_var {nullptr};
    char char_var {'A'};


    p_char_var = &char_var;

    std::cout << "The value stored in char_var is : " << char_var << std::endl;
    std::cout << "Tha value stored in char_var is : " << *p_char_var << std::endl;

    //char* p_message {"Hello World!"};

    /* what this does is convert the string into character array and then the pointer
    points towards the first character of the array.*/

    /*Some compilers will refuse to compile this code, because the compiler is gonna convert
    the string into const char array and here we are not declaring a const char pointer */

    //Here our compiler threw error, hence our presumption was correct!

    const char* p_message {"Hello World!"};

    std::cout << "The message is : " << p_message << std::endl;
    std::cout << "The value stored at p_message is : " << *p_message << std::endl;

    /* Now since the array is of constant characters, so we cannot change the value by
    dereferencing it, it would throw an error, or even worse, it can cause a runtime crash*/


    // if we want to create a modifiable array, we should use char array
}