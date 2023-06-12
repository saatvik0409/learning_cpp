#include <iostream>

int main(){

    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;
    std::cout << "a : " <<a <<std::endl;
    std::cout << "b : " <<b <<std::endl;
    std::cout << "c : " <<c <<std::endl;

    std::cout << std::endl;
    std::cout << "Basic AND Operations" << std::endl;
    std::cout << "a && b : " << (a&&b) << std::endl;
    std::cout << "b && c : " << (b&&c) << std::endl;
    std::cout << "a && b && c: " << (a&&b&&c) << std::endl;

    std::cout << std::endl;
    std::cout << "Basoc OR Operations"<<std::endl;
    std::cout << "a || b : " << (a||b) <<std::endl;
    std::cout << "b || c : " << (b||c) <<std::endl;
    std::cout << "a || b || c : " << (a||b||c) <<std::endl;

    std::cout << std::endl;
    std::cout << "Basic NOT Operations" <<std::endl;
    std::cout << "!a : " << (!a) << std::endl;
    std::cout << "!b : " << (!b) << std::endl;
    std::cout << "!c : " << (!c) << std::endl;

    std::cout << std::endl;
    std::cout << "Combining logical Operators" << std::endl;
    std::cout << "!(a && b) || c : " << (!(a&&b) || c) << std::endl;

    //We can also combine logical operators with relational operators, not adding the code here as it is exhuastive to type unnescesarily
    
    return 0;
}