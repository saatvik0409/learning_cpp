 #include <iostream>

class cylinder{

   public:
      cylinder() = default;

      cylinder(int r,int h){
         base_radius = r;
         height = h;
      }

      double r_getter(){
         return base_radius;
      }

      double h_getter(){
         return height;
      }

      void r_setter(double inp_radius){
         base_radius = inp_radius;
      }

      void h_setter(double inp_height){
         height = inp_height;
      }

      double volume(){
         return base_radius*base_radius*height*3.141;
      }

   private:
      double base_radius {};
      double height {};
};

 int main(){

   cylinder cylinder1(10,10);
   std::cout << "Radius 1 : " << cylinder1.r_getter() << std::endl;
   std::cout << "Height 1 : " << cylinder1.h_getter() << std::endl; 
   std::cout << "Volume : " << cylinder1.volume()<< std::endl;

   cylinder1.r_setter(100);
   cylinder1.h_setter(100);
   std::cout << std::endl;
   std::cout << "Radius 1 : " << cylinder1.r_getter() << std::endl;
   std::cout << "Height 1 : " << cylinder1.h_getter() << std::endl; 
   std::cout << "Volume : " << cylinder1.volume()<< std::endl;


    return 0;
 }