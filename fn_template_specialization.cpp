#include <iostream>
#include <cstring>

template <typename type> 
type maximum(type a,type b){
    return (a>b)? a : b;
}

template <> 
const char* maximum( const char* a,const char* b){
    if (std::strcmp(a,b) > 0){
        return a;
    }else{
        return b;
    }
}

int main(){

    std::cout << std::endl;
    const char* a {"Hello Xorld!"};
    const char* b {"Hello World!"};
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << std::endl;

    std::cout << "Max String : " << maximum(a,b) << std::endl;
    std::cout << std::endl;
    std::cout << "Using this method we can create personalized templates which can help us to avoid overloading functions and create and use custom templates." << std::endl;
    
    return 0;
}