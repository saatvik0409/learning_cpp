#include <iostream>
#ifndef PERSON
#define PERSON

class person{
    
    public:
        friend std::ostream& operator<<(std::ostream& out, const person& person);
        person();
        person(std::string name_inp, std::string address_inp, int phone_num_inp);
        std::string get_name() const;
        std::string get_address() const;
        int get_phone_num() const;

    private:
        std::string name{};
        std::string address{};
        int phone_num {};

};

#endif