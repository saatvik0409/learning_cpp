#include <iostream>
#include <limits>

// you can also read the documentation for limits library if you want to explore more


int main(){
    std::cout << "The range for short is from  : " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "The range for long is from   : " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "The range for float is from  : " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "The range for double is from : " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "The range for long (d) is    : " << std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << std::endl;
    
    
    return 0;
}