#include <iostream>

template <typename type> type maximum(type a,type b){
    return(a>b) ? a : b;
}

int main(){

    std::cout << std::endl;
    //int result1 = maximum(4,78.3);
    //std::cout << "Result : " << result1 << std::endl; This will throw an error!
    auto result = maximum<double>(5.4,5);
    std::cout << "Result : " << result << std::endl;
    //auto result = maximum<double>(8,"Happy!");
    std::cout << "Giving double and string will also throw an error because!" << std::endl;
    
    return 0;
}