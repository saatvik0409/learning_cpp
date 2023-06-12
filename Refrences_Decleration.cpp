#include <iostream>
#include <iomanip>

int main(){
    int int_data {33};
    double double_data {9.9};
    std::cout << std::endl << "We can think of references as const pointers!" << std::endl;

    //Refrences
    int& ref_int_data {int_data};
    double& ref_double_data {double_data};
    std::cout << std::endl;

    std::cout << std::left << std::setw(20)<< "Int data" << int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "&Int data" << &int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "Double data" << double_data << std::endl;
    std::cout << std::left << std::setw(20)<<"&Double data" << &double_data << std::endl;

    std::cout << std::left << std::setw(20)<<"ref_int_data" << ref_int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "&ref_int_data" << &ref_int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "ref_double_data" << ref_double_data << std::endl;
    std::cout << std::left << std::setw(20)<< "&ref_double_data" << &ref_double_data << std::endl;

    int_data = 69;
    double_data = 69.69;

    std::cout << std::endl;

    std::cout << std::left << std::setw(20)<< "Int data" << int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "&Int data" << &int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "Double data" << double_data << std::endl;
    std::cout << std::left << std::setw(20)<<"&Double data" << &double_data << std::endl;

    std::cout << std::left << std::setw(20)<<"ref_int_data" << ref_int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "&ref_int_data" << &ref_int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "ref_double_data" << ref_double_data << std::endl;
    std::cout << std::left << std::setw(20)<< "&ref_double_data" << &ref_double_data << std::endl;

    ref_int_data = 6969;
    ref_double_data = 0.69;

    std::cout << std::endl;

    std::cout << std::left << std::setw(20)<< "Int data" << int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "&Int data" << &int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "Double data" << double_data << std::endl;
    std::cout << std::left << std::setw(20)<<"&Double data" << &double_data << std::endl;

    std::cout << std::left << std::setw(20)<<"ref_int_data" << ref_int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "&ref_int_data" << &ref_int_data << std::endl;
    std::cout << std::left << std::setw(20)<< "ref_double_data" << ref_double_data << std::endl;
    std::cout << std::left << std::setw(20)<< "&ref_double_data" << &ref_double_data << std::endl;

    return 0;
}