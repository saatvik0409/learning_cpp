#include <iostream>

class person{

    friend std::ostream& operator <<(std::ostream& out, const person& person);

    public:
        person() = default;
        person(std::string fn_inp,std::string ln_inp);
        ~person();
        std::string get_first_name() const;
        std::string get_last_name() const;
        void set_first_name(std::string inp_param);
        void set_last_name(std::string inp_param);

    protected:
        std::string first_name {"Mysterious"};
        std::string last_name {"Person"};

};