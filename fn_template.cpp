#include <iostream>

template <typename type>  
type maximum(type a, type b){
    return (a>b)? a:b;
}
int main(){

    int x{5};
    int y{6};

    double a{1.2};
    double b{3.141};

    std::string str1 {"Hello "};
    std::string str2 {"Jello "};

    std::cout << "Max (int) : " <<maximum(x,y) << std::endl;
    std::cout << "Max (str) : " <<maximum(str1,str2) << std::endl;
    std::cout << "Max (dub) : " <<maximum(a,b) << std::endl;

    std::cout << std::endl;
    std::cout << "You must ensure that whatever operations you apply inside a template generated function, they must be supported by whatever type you are calling the template for else the code will crash (compiler error) " << std::endl;
   
    std::cout << std::endl;
    std::cout << "In fucntion template, you are forced to use same type for arguements as well as return type!" << std::endl;
    
    std::cout << std::endl;
    std::cout << "Function templates can be really risky to use with pointers. Using them with pointers is strongly discouraged!" << std::endl;

    std::cout << std::endl;
    std::cout << "Websites like cppinsights.io can be really useful in understanding this with depp clarity" << std::endl;
    return 0;
}