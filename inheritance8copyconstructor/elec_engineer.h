#include "engineer.h"
#ifndef ELECTRICALENGINEER
#define ELECTRICALENGINEER

class electricalEngineer : public engineer{

    public:
        friend std::ostream& operator<<(std::ostream& out, const electricalEngineer& ee1);
        electricalEngineer();
        electricalEngineer(std::string name_inp, std::string address_inp, int phone_num_inp, int salary_inp,std::string specialization);
        electricalEngineer(const electricalEngineer& inp_ee);
        std::string get_specialization() const;

    private:
        std::string specialization {"VLSI"};
            
        

    
};

#endif