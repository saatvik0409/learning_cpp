//dynamic memory allocation

#include <iostream>

int main(){

    int number {22};

    int* p_number = &number;

    std::cout << std::endl;

    std::cout << "Declaring pointer and assigning adress : " << std::endl;

    std::cout << "Number : " << number << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "&number : " << &number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;

    int* p_number1;
    int number1 = {12};
    std::cout << "Unitialized pointer (int* p_number1;) : " << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    std::cout << "We gave p_number1 the adress of var 12, but it shows something else" << std::endl << "This shows that we should be careful" << std::endl;

    /*
    int* p_number3 = {};
    std::cout << "This won't work beacuse we cannot write into pointer pointing nowhere"<< std::endl;
    std::cout << "The program will now crash : " << std::endl;
    *p_number3 = 33;

    std::cout << std::endl;
    std::cout << "Reading and writing through nullptr : " << std::endl;
    */
   
    int* p_number4 {nullptr};
    p_number4 = new int;
    *p_number4 = 77;
    std::cout << std::endl;
    std::cout << "Dynamically allocating memory : " << std::endl;
    std::cout << "*p_number4 : " << *p_number4 << std::endl;

    std::cout << "What new int line does it allocates memory required for storing " <<std::endl <<
    "an integer To the program, this memory now belongs to the program" << std::endl << 
    "Now we have a pointer initialized with an adress to the memory " << std::endl <<
    "which can potentially store an integer, hence code will work" << std::endl;

    std::cout << "Another benefit of using dynamically allocated memory is " << std::endl
    << "That we cam kill the memory whenever we are done with it : " << std::endl;

    //return memory to OS
    delete p_number4;
    p_number4 = nullptr;

    //This is a good practice to set the pointer to null pointer once you are done using your pointer
    //please please remember to set pointer to nullptr please please

    int* p_number5 {new int};
    int* p_number6 {new int (22)};
    int* p_number7 {new int {23}};

    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declearation : " << std::endl << std::endl;

    std::cout << "p_number5 : " << p_number5 << std::endl;
    std::cout << "*p_number5 : " << *p_number5 << std::endl;

    std::cout << "p_number6 : " << p_number6 << std::endl;
    std::cout << "*p_number6 : " << *p_number6 << std::endl;

    std::cout << "p_number7 : " << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl;

    delete p_number5;
    p_number5 = nullptr;

    delete p_number6; 
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

    std::cout << "Please note that once you return memory back to OS, you can still" << std::endl
    << "use the pointer by allocating it new memory again" << std::endl;

    p_number5 = new int(25);
    std::cout << "*p_numner5 : " << *p_number5 << std::endl;

    delete p_number5;
    p_number5 = nullptr;

    std::cout << "Calling delete twice may land you into big problems (on same variable) : " << std::endl;

    
    p_number5 = new int(25);
    std::cout << "*p_numner5 : " << *p_number5 << std::endl;

    delete p_number5;
    std::cout << "Program crashes here : " << std::endl;

    delete p_number5;
    std::cout << "Program executed successfully" << std::endl;


    return 0;

}