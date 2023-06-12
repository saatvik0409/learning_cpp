#include <iostream>

int main(){

    int* p_number;
    std::cout << std::endl;
    std::cout << "Case1 : Uninitialized poitners" << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "Crash will happen here : " << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;
    
    std::cout << std::endl;

    int* p_number1 {new int{67}};

    std::cout << "Case 2 : Deleted pointer" << std::endl;
    std::cout << "*p_number1 before delete : " << *p_number1 << std::endl;
    delete p_number1;
    std::cout << "Program will crash here : " << std::endl;
    std::cout << "*p_number1 after delete : " << *p_number1 << std::endl;

    std::cout << std::endl;
    std::cout << "Case 3: Multiple pointers pointing towards the same address : " << std::endl;
    int* p_number3 {new int(83)};
    int* p_number4 = p_number3;

    std::cout << "p_number3 : " << p_number3 << " - " << *p_number3 << std::endl;
    std::cout << "p_number4 : " << p_number4 << " - " << *p_number4 << std::endl;

    delete p_number3;

    std::cout << "The program will crash here : " << std::endl;
    std::cout << "p_number4(after deleting p_number3) : " << p_number4 << " - " << *p_number4 << std::endl;

    std::cout << std::endl;
    std::cout << "Solution 1 : Use nullptr" << std::endl;

    int* p_number5 {};
    int* p_number6 {new int(69)};
    p_number6 = nullptr;
    if (p_number6 != nullptr){
        std::cout << "*p_number6 : " << *p_number6 << std::endl;
    } else {
        std::cout << "Invalid address" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Solution 2 : Use nullptr after deletion" << std::endl;

    int* p_number7{new int(69)};

    std::cout << "p_number7 : " << p_number7 << " - " << *p_number7 << std::endl;
    
    delete p_number7; 
    p_number7 = nullptr;

    if (p_number7!= nullptr){
        std::cout << "p_number7 : " << p_number7 << " - "<< *p_number7 << std::endl;
    }else{
        std::cout << "The memory you are looking for doesn't exist" << std::endl;

    }

    std::cout << std::endl;
    std::cout << "Solution 3 : Check for nullptr master pointer" << std::endl;

    int* p_number8 {new int(69)};
    int* p_number9 = p_number8;

    std::cout << "p_number8 : " << p_number8 << " - " << *p_number8 << std::endl;
    std::cout << "p_number9 : " << p_number9 << " - " << *p_number9 << std::endl;

    delete p_number8;
    p_number8 = nullptr;

    if (p_number8 != nullptr){
        std::cout << "p_number9 : " << p_number9 << " - " << *p_number9 << std::endl;
    } else {
        std::cout << "Invalid memory address" << std::endl;
    }

    return 0;
}