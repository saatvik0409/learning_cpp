#include <iostream>

class dog{

    public:

        dog* set_name(std::string dog_name);
        dog* set_age(int dog_age);
        dog* set_breed(std::string dog_breed);
        void print_info();


    private:

        std::string dog_name {};
        std::string dog_breed {};
        int dog_age {};


};