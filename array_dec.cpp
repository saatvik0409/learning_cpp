#include <iostream>

int main(){

    int scores [10];

    std::cout << "scores[0] : " << scores[0] << " (Garbage Value) " << std::endl;
    std::cout << "scores[1] : " << scores[1] << " (Garbage Value) " << std::endl;
    
    std::cout << std::endl;

    for (size_t i {0} ; i <10 ; i++){
        std::cout << "scores[" << i << "]" << " : " << scores[i] << std::endl;
    }

    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    std::cout << std::endl;

    for (size_t i {0} ; i <10 ; i++){
        std::cout << "scores[" << i << "]" << " : " << scores[i] << std::endl;
    }

    for (size_t i {0}; i<10;i++){
        scores[i] = i*10;
    }

    std::cout << std::endl;
    for (size_t i {0} ; i <10 ; i++){
        std::cout << "scores[" << i << "]" << " : " << scores[i] << std::endl;
    }

    std::cout << std::endl;
    double salaries[5] {12.7, 7.5, 13.2, 8.1,9.3};

    for (size_t i{0}; i <5; i++){
        std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
    }

    std::cout << std::endl;
    int families[5] {12,7,5};

    for (size_t i{0}; i<5; i++){
        std::cout << "families[" << i << "] : " << families[i] << std::endl;
    }
    std::cout << "(Uninitialized values get assigned automatically to 0)" << std::endl;

    
    std::cout << std::endl;
    int class_sizes[] {10,12,15,11,18,17,23,56};

    for (auto value: class_sizes){
        std::cout << "value : " << value << std::endl;
    }
    std::cout << std::endl;

    const int birds[] {10,12,15,11,18,17,23,56};


    int mainp [] {2,5,8,2,5,6,9};
    int sum{0};

    for (int element: mainp){
        sum+= element;
    }
    std::cout << "Sum : " << sum << std::endl;

    return 0;
}