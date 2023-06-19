#include <iostream>

int max (int a,int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}

std::string max (std::string a,std::string b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}

void printer (int a,std::string b){
    std::cout << "String1 : " << b << std::endl;
    std::cout << "Interger1 : " << a << std::endl;
}

void printer (std::string a,int b){
    std::cout << "Integer2 : " << b << std::endl;
    std::cout << "String2 : " << a << std::endl;
}

int main(){
    std::cout << std::endl;
    std::cout << "When we define a function with same names and difference in parameters, they are called overloads of each other" << std::endl << std::endl;
    std::cout << "In one of the previous lectures I told that the function is identified by its signature. Its signature is made of its name and its parameters. If we change the parameters even after keeping it's name same, we still can treat and use it as a different function. Note that we can do this by changing the number of parameters, the type of parameters or even the order of parameters. " << std::endl << std::endl;
    int a{5};
    int b{7};
    std::string str1 {"Hello"};
    std::string str2 {"Ghello"};
    std::cout << "Max(int) : " << max(a,b) << std::endl;
    std::cout << "Max(str) : " << max(str1,str2) << std::endl;
    std::cout << std::endl;
    printer(a,str1);
    printer(str1,a);

    return 0;
}