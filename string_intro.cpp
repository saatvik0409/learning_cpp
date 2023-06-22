#include <iostream>
#include <string>

int main(){

    std::string full_name;
    std::string planet {"Earth. Where the sky is blue"};
    std::string preffered_planet {planet};
    std::string message{"Hello World",5};

    std::string weird_message(4,'e');

    std::string greeting{"Hello World!"};
    std::string saying_hello{greeting,5};

    std::cout << "full_name : " << full_name << std::endl;
    std::cout << "Planet    : " << planet << std::endl;
    std::cout << "Preferred Planet : " << preffered_planet << std::endl;
    std::cout << "Weird message : " << weird_message << std::endl;
    std::cout << "saying_hello : " << saying_hello << std::endl;

    planet = "Earth, where the sky is blue and I live in shalimar bagh delhi 110088";
    std::cout << planet << std::endl;
   
    //std::string is good at memory management, when we reassign planet, the earlier planet memory is returned to the operating system and new memory is allocatted for new string.
    return 0;
}