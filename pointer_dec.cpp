#include <iostream>

int main(){
    /*
    int* p_number {}; // will initialize with nullptr
    double* p_fractional_number{};
    */
    //Explicitly initialize with nullptr

    int* p_number{nullptr};
    int* p_fractional_number{nullptr};

    std::cout << "sizeof(int)        : " << sizeof(int) << std::endl;
    std::cout << "sizeof(double)     : "<< sizeof(double) << std::endl;
    std::cout << "sizeof (int*)      : " << sizeof(int*) << std::endl;
    std::cout << "sizeof (double*)   : " << sizeof(double*) << std::endl;
    std::cout << "sizeof(p_num)      : " << sizeof(p_number) << std::endl;
    std::cout << "sizeof(p_frac_num) : " << sizeof(p_fractional_number) << std::endl;
    std::cout << std::endl;


    //pointers to the different variables are of same size on ssame operating system
    // It might not be consistent over different os, but they 
    // are guaranteed to be of same size on same machine
    
    int* p_number5{},other_int_var{};
    // Here we don't know about other_int_var
    //Whether it would be initialized to pointer type or int type 
    std::cout << "sizeof(p_number5)     : " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    /*
    On my opertaing system, pointer occupy 4 bytes in memory
    but on the teacher's operating system pointer's occupied
    8 bytes in memory, now this made it easy to distinguish b/w
    pointers and integers, however it would not be so in my case
    So you have to take it on faith and accept that type of other_int_var
    is of type int and not of pointer type
    */

    int int_var{43};
    int* p_int {&int_var};

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Adress in memory) : " << p_int << std::endl;

    int int_var1 {65};
    p_int = &int_var1;
    std::cout << "p_int (with different address in memory) : " << p_int << std::endl;
    std::cout << std::endl;

    // We can't assign pointer of integer type variable an
    // address to double variable

    /*
    Defrencing a pointer : */
    int* p_int2 {nullptr};
    int int_data {45};
    p_int2 = &int_data;
    std::cout << "Derefrenced data : " << *p_int2 << std::endl;
    return 0;
}