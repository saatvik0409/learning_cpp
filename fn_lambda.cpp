#include <iostream>


int main(){

    auto ret = [](double a,double b){
        return a+b;
    };//(13.4,6.6);
    auto result1 = ret(41,314);
    auto result2 = ret(12,13);
    std::cout << "Result1 : " << result1 << std::endl;
    std::cout << "Result2 : " << result2 << std::endl;
    
    [](){
       std::cout << "Print Here" << std::endl; 
    }();

    [](int a,int b){
        std::cout << "a+b : " << a+b<< std::endl;
    }(5,8);

    auto ret2 = [](double a1,double b1) -> int{
        return a1+b1;
    };
    std::cout << ret2(5,4) << std::endl;
    

    return 0;

}