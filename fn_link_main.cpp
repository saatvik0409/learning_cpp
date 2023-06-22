#include <iostream>
#include "fn_link_comparison.h"

int main(){

    int a {5};
    int b {6};
    std::cout << "min(5,6) : " << min4(5,6) << std::endl;
    std::cout << "max(5,6) : " << max4(5,6) << std::endl;
    std::cout << std::endl;
    std::cout << "Note that definitions don't have to live in the file named same as .h file they can live like anywhere in any file you just have to write that file name in terminal. Or if you are compiling with VS Code you don't even have to do that compiler will look for the target file on its own!" << std::endl;
    
    return 0;
}