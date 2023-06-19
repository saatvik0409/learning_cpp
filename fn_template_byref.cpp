#include <iostream>

template <typename type> 
type& temp1(type,type);

template <typename type> 
type& temp2(type&,type&);
int main(){
    std::cout << std::endl;
    double a {1.414};
    double b {3.141};
    std::cout << "OUT : &a : " << &a << std::endl;
    std::cout << "OUT : &b : " << &b << std::endl;
    std::cout << std::endl;
    temp1(a,b);
    temp2(a,b);

    return 0;
}
template <typename type> 
type& temp1(type a,type b){
    
    std::cout << "IN : &a : " << &a  << std::endl;
    std::cout << "IN : &b : " << &b << std::endl;
    std::cout <<std::endl;

}

template <typename type> 
type& temp2(type& a,type& b){
    
    std::cout << "IN : &a : " << &a  << std::endl;
    std::cout << "IN : &b : " << &b << std::endl;
    std::cout <<std::endl;

}