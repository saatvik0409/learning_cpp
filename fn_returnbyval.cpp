#include <iostream>
#include <string>

int sum (int a, int b){
    int result {};
    result = a+b;
    std::cout << "Inside: &result : " << &result << std::endl << std::endl;
    return result;
}

std::string str_sum (std::string a, std::string b){
    std::string result {};
    result = a+b;
    std::cout << "In : &result : " << &result << std::endl << std::endl;
    return result;
}

int main(){
    std::cout << std::endl;
    int result{};
    int a {6};
    int b {4};
    result = sum(a,b);
    std::cout << "Out : &result : " << &result << std::endl;
    std::cout << "Result : " << result << std::endl;
    std::string inp1 {"Hello "};
    std::string inp2 {"World!"};
    std::string result2  {};
    result2 = str_sum(inp1,inp2);
    std::cout << "Out : &result : " << &result2 << std::endl;
    std::cout << "Out string : " << result2 << std::endl;
    std::cout << std::endl << "On some compilers this will have the same address as the address inside the function, this is because some compilers are smart enough to know that passing by value in cases such as string will waste a lot of time copying the result into output variable. Hence it improvises on the spot to convert the return method from pass by value into pass by reference automatically saving valuable time. However in case of my compiler it is not the case." << std::endl;
    
    return 0;
}