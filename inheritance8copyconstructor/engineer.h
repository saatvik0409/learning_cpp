#include "person.h"
#include <iostream>
#ifndef ENGINEER
#define ENGINEER

class engineer : public person{

    public:
        friend std::ostream& operator<<(std::ostream& out, const engineer& engineer);
        engineer();
        engineer(std::string name_inp, std::string address_inp, int phone_num_inp, int salary_inp);
        engineer(const engineer& inp_engineer);
        int get_salary() const;
    
    private:
        int salary{};
};

#endif