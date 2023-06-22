#include <iostream>
#include <cstring>

int main(){

    std::cout << std::endl;
    std::cout << "std::strcat : " << std::endl;

    char des[50] = "Hello ";
    char str[50] = "World!";
    std::strcat(des,str);
    std::cout << "Final string : " << des << std::endl;

    std::strcat(des," Goodbye World!");
    std::cout << des << std::endl;

    std::cout << std::endl;
    std::cout << "More std::strcat : " << std::endl;
    char *dest1 = new char[30] {'H','e','l','l','o','\0'};
    char *src1 = new char [30] {'!',' ','W','o','r','l','d','!',' ','\0'};

    std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << std::endl;
    std::cout << "std::strlen(src1) : " << std::strlen(src1) << std::endl;
    std::cout << std::endl;
    std::cout << "Concatinating...." << std::endl;
    std::strcat(dest1,src1);
    std::cout << "dest1 : " << dest1 << std::endl; 
    std::cout << std::endl;

    char dest3[50] {"Hello World!"};
    char src3[50] {"What are you ?"};
    std::cout << "std::strncat : " << std::endl;
    std::strncat(dest3,src3,4);
    std::cout << dest3 << std::endl;

    std::cout << std::endl;
    std::cout << "std::strcpy : " << std::endl;

    char* dest4 = new char[std::strlen(src3)+1];//+1 for null terminator character;
    std::strcpy(dest4,src3);
    std::cout << dest4 << std::endl;

    int n = 6;
    std::cout << std::endl;
    std::cout << "std::strncpy : " << std::endl;
    char* dest5 = new char[n+1];
    std::strncpy(dest5,src3,n);
    *(dest5+n) = '\0';
    std::cout << dest5 << std::endl;
    return 0;
}