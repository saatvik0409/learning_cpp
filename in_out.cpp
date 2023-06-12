#include <iostream>
#include <string>

int main(){
    //Printing data
    /*
    std::cout << "Hello C++20" << std::endl;
    int age{21};
    std::cout << "Age : "<<age <<std::endl;
    std::cerr << "Error Message: Something is wrong"<< std::endl;
    std::clog << "Log message : Something happened"<<std::endl;
    */
    //
    int age3;
    std::string full_name;
    std::cout << "Please type your name and age : " << std::endl;
    //std::cin >> na-me;
    //std::cin >> age1;
    std::getline(std::cin, full_name);
    std::cin >> age3;

    std::cout << "Hello "<< full_name << " you are "
              << age3 << " years old!"<<std::endl;

    return 0;

}