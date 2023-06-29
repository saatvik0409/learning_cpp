#include "engineer.cpp"
#ifndef ELECTRICALENGINEER
#define ELECTRICALENGINEER

class electricalEngineer : public engineer{

    public:
        electricalEngineer(){
            std::cout << "Constructing electrical Engineer class ... "<< std::endl;
        }
        void print_info(){
            std::cout << "Trying to access any private, public or protected method of person class would throw an error here. (In electrical engineer class. Because during private inheritance, the engineer class made all these things private to itself.)" << std::endl;
            std::cout << "After resurrection : " << public_var;

            //std::cout << public_var << std::endl;
            //std::cout << protected_var << std::endl;
            //Both of these lines would throw an error
        }

    protected:
            
        

    
};

#endif