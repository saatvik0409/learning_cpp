#include <iostream>

int main(){

    for (unsigned int i {}; i < 10; ++i){
        std::cout << "I love C++" << std::endl;
    }
    
    // instead of unsigned int, we can also use size_t which is used to declare usigned int data type

    std::cout << std::endl;

    for (size_t i {} ; i < 10 ; ++i){
        std::cout << i<< " : I love C++" << std::endl;
    } 

    std::cout << std::endl;

    //note that i is locally scoped

    size_t j {};

    for ( ; j < 10 ; ++j){
        std::cout << j<< " : I love C++" << std::endl;
    } 
    std::cout << "Finally the value of j is : " << j << std::endl;

    const size_t count {10};
    size_t m{};
    std::cout << std::endl;

    for ( ; m < count ; ++m){
        std::cout << m<< " : I love C++" << std::endl;
    } 
    std::cout << "Finally the value of m is : " << j << std::endl;
 
    return 0;
}