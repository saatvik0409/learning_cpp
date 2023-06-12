#include <iostream>

int main(){
    std::cout << std::endl;
    int* data {nullptr};

    // std::cout << "Here the code will crash due to exhaustion of heap memory : " << std::endl;
    // std::cout << std::endl;

    // for (int i = 0; i < 1000000000000000; i++){
    //     int* data = new int [1000000];

    // }

    try{

        for (int i = 0; i < 1000000000000000; i++){
            int* data = new int [1000000];
        }

    } catch (std::exception& ex){
        std::cout << "Something went wrong : " << ex.what() << std::endl;
    }

    //std::nothrow
    int i;
    for (int i = 0; i < 1000000000000000; i++){
        data = new(std::nothrow) int [1000000];
    }
    if (i< 1000000000000000 - 1){
        data = nullptr;
    }
    if (data!=nullptr){
        std::cout << "Data allocated" << std::endl;
    } else{
        std::cout << "Data allocation failed" << std::endl;
    }


    return 0;
}