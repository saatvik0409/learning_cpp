#include <iostream>

class dog{

    public:
        dog() = default;
        void method1(){
            std::cout << "HEHEHEHEHE" << std::endl;
        }

    private:
        int var1 {};
        long int var2{};
        double var3 {};
        std::string var4{};

};


int main(){

    std::cout << "sizeof(dog) : " << sizeof(dog) << std::endl;
    std::cout << "sizeof(dog) = sizeof(int)+sizeof(long int) + sizeof(double) + sizeof(std::string) = " << sizeof(int) + sizeof(long int) + sizeof(double) + sizeof(std::string) << std::endl;
    std::cout << "sizeof(std::string) : " << sizeof(std::string) << std::endl;
    std::cout << std::endl << "Please note that methods or functions do not take up any space in object size. Object size only depends upon the sizes of variables stored in it!" << std::endl;
    
    return 0;
}