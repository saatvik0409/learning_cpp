#include <iostream>

class cylinder{

    private:
        int radius {5};
        int height {6};

    public:
        double volume(){
            return radius*height*3.14*radius;
        }

};

int main(){

    cylinder cylinder1;
    cylinder cylinder2;
    
    std::cout << "Volume of cylinder 1 : " << cylinder1.volume() << std::endl;
    // cylinder1.radius = 5;
    // cylinder1.height = 6;
    std::cout << "Volume of cylinder 1 : " << cylinder1.volume() << std::endl;
    std::cout << "Volume of cylinder 2 : " << cylinder2.volume() << std::endl;
    std::cout << std::endl << "All the variables and functions are private by default in cpp class. If we want to make something public we can add public keyword but after public keyword everything below it will become public, to make somevariables private, we can add private keyword." << std::endl;
    std::cout << std::endl;
    std::cout << "1) Class members can either be raw stack variables or pointers, they can never be references. This is because references can never be left uninitialized which is very important property of class functions. " << std::endl;
    
    return 0;
}