#include <iostream>

class cylinder{

    public:
        cylinder(){
            base_radius = 5;
            height = 5;
        }

        cylinder(int r,int h){
            base_radius = r;
            height = h;
        }

        double volume(){
            return base_radius*base_radius*height*3.141;
        }

    private:
        int base_radius {};
        int height {};

};

int main(){
    std::cout << std::endl;
    cylinder cylinder1;
    cylinder cylinder2(3,4);
    std::cout << "Volume of cylinder 1 : " << cylinder1.volume() << std::endl;
    std::cout << "Volume of cylinder 2 : " << cylinder2.volume() << std::endl;
    std::cout << std::endl;

    std::cout << "If the constructor is so necessary, why did the code in previous lecture work? This is because when we don't put a constructor in a class compiler automatically adds a empty constructor which does nothing" << std::endl;

    return 0;
}