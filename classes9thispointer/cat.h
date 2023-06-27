#include <iostream>

class cat{

    public:

        cat& set_name(std::string cat_name);
        cat& set_age(int cat_age);
        cat& set_breed(std::string cat_breed);
        void print_info();

    private:

        std::string cat_name{};
        int cat_age{};
        std::string cat_breed{};



};