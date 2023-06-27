class cylinder{

    public:
        cylinder(double r,double h);
        cylinder() = default;
        double volume();
        double r_getter();
        double h_getter();
        void r_setter(double inp_r);
        void h_setter(double inp_h);
    
    private:
        double base_radius {};
        double height {};

};

