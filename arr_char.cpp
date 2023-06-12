#include <iostream>

int main(){

    char message[5] {'H','e','l','l','o'};

    std::cout << "Message : ";
    for (auto c : message){
        std::cout << c;
    }
    std::cout << std::endl << std::endl;

    //change characters in our array
    message[1] = 'a';
    std::cout << "Message : ";
    for (auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;
    
    std::cout << "message : " << message << std::endl; // We get some garbage values trailing the original string
    // this happens because for cout to know that string has terminated
    // It must encounter /0 character which implies string termination
    // So if the array is missing it, cout continues to print unless it hits the /0

    char new_message[6] {'H','e','l','l','o','\0'};
    std::cout << "New Message : ";
    for (auto c : new_message){
        std::cout << c;
    }
    std::cout << std::endl;

    char message1 [] {'H','e','l','l','o','\0'};
    std::cout << "C string message  : " << message1 << std::endl;
    std::cout << std::endl;

    char message2 [6] {'H','e','l','l','o'};
    std::cout << "Initializing 6 sized array with 5 elements, all unitialized elements are initialized to null string character : " <<std::endl;
    std::cout << "New Message : ";
    for (auto c : message2){
        std::cout << c;
    }
    std::cout << std::endl<<std::endl;

    char message3[] {'H','e','l','l','o'};
    std::cout << "If we initialize char array without size and don't add null terminator : ";
    for (auto c: message3){
        std::cout << c;
    }
    std::cout << std::endl << std::endl;

    //string literal

    char message4 [] {"Hello"};
    size_t size_msg4 {sizeof(message4)/sizeof(message4)[0]};
    std::cout << "message4 : " << message4 << std::endl;
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;
    std::cout << std::endl;

    int numbers [] {1,2,3,4,5};
    std::cout << "numbers : " << numbers << std::endl;
    std::cout << "You can't print this way for any data type except char :)" << std::endl;
    
    return 0;
}