#include <iostream>

class cylinder{

    public:
        cylinder(double r,double h,std::string inp_name);
        cylinder() = default;
        ~cylinder();
        double volume();
        double r_getter();
        double h_getter();
        void r_setter(double inp_r);
        void h_setter(double inp_h);
    
    private:
        double base_radius {};
        double height {};
        std::string name {};

};

