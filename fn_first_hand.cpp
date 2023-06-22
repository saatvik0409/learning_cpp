#include <iostream>
#include <string>

void enter_bar(size_t age){
    if (age < 10){
        std::cout << "Sorry, you're too young for this. No offense!" << std::endl;
    }else{
        std::cout << "You're " << age << " years old. Please proceed." << std::endl;
    } 
    return;
}

int max(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}

void say_hello(){
    std::cout << "say_hello" << std::endl;
    return;
}

int lucky_number(){
    return 69;
}

int main(){

    std::cout << std::endl;
    enter_bar(22);
    enter_bar(9);
    enter_bar(35);

    int a = 5;
    int b = 10;
    int max_val = max(a,b);
    std::cout << "------------------------------------" << std::endl;
    std::cout << "max("<< a << ',' << b << ") = " << max_val<< std::endl;
    std::cout << "max("<< a << ',' << b << ") = " << max(a,b)<< std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Say Hello ";
    say_hello();
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Lucky Number : " << lucky_number()<< std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "A function in cpp is identified by its signature. Signature of a function is made by its name and parameters. We cannot have two functions with same name and parameters. They may even have different return types, but it still wont be valid." << std::endl;
    std::cout << std::endl;
    std::cout << "The parameters that the functions take in are copies of original variable, whatever operations and manipulatiosn we apply to the paramenters inside the function body do not show up in original variable. Also these copies of the variables die as soon as the function ends."<<std::endl;
    return 0;
}