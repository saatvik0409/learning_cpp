#include <iostream>

int main(){

    double a {13.45};
    double b {13.54};

    auto fun = [a,b](){
        return (a+b);
    };

    std::cout << std::endl;
    std::cout << "Before Increment : " << fun() << std::endl;

    auto fun2 = [a,b](){
        return (a+b);
    };

    a++;b++;

    std::cout << std::endl;
    std::cout << "After Increment : " << fun2() << std::endl;
   
    auto fun3 = [&a,&b](){
        return (a+b);
    };

    a++;b++;

    std::cout << std::endl;
    std::cout << "After Increment (Reference) : " << fun3() << std::endl;
       
    auto fun4 = [=](){
        return (a+b);
    };
    a++;b++;
    std::cout << "a : " << a << " b : " << b << " Sum : " << (a+b) << std::endl;
    std::cout << "After Increment (Capture All By Value) : " << fun4() << std::endl;

    auto fun5 = [&](){
        return (a+b);
    };
    a++;b++;
    std::cout << "a : " << a << "b : " << b << " Sum : " << (a+b) <<  std::endl;
    std::cout << "After Increment (Capture All by Reference) : " << fun5() << std::endl;


    return 0;
}