#include <iostream>

int main(){

    int number1 {55};
    int number2 {60};


    bool result = number1 < number2;

/*
    std::cout << std::boolalpha << "result : " << result << std::endl;
    std::cout << std::endl;

    if (result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    } 
    if (!(result == true)){
        std::cout << number1 << " is not less than " << number2 << std::endl;
    }
*/
/*
    if (result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    } else{
        std::cout << number1 << " is not less than " << number2 << std::endl;
    }
*/
    std::cout << std::endl;
    std::cout << "Nesting If statements" << std::endl;

    bool red {false};
    bool green {true};
    bool yellow {false};
    bool police_stop {true};

    /*
    if (red){
        std::cout << "Stop" << std::endl;
    } 
    if (yellow) {
        std::cout << "Slow down" << std::endl;
    } 
    if (green) {
        std::cout << "Go" << std::endl;
    }
    */

   /*
    std::cout << "Police officer stops (verbose)" << std::endl;
    if (green){
        if (police_stop){
            std::cout << "Stop" << std::endl;
        } else{
            std::cout << "Go" << std::endl;
        }
    }
    */

    if (green && !police_stop) {
        std::cout << "go" << std::endl;
    } else{
        std::cout << "stop" << std::endl;
    }
    return 0;
    
}