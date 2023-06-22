#include <iostream>

bool isblank(char inp_char){
    if (inp_char == ' '){
        return true;
    }else{
        return false;
    }
}

int main(){

    std::cout << std::endl;

    std::cout << "std::isalnum : " << std::endl;
    std::cout <<"C is alphanumeric : " << std::isalnum('C') << std::endl;
    std::cout <<"^ is alphanumeric : " << std::isalnum('^') << std::endl;
    
    char text_char = '*';

    if (std::isalnum(text_char)){
        std::cout << "Text_char is alphanumeric" << std::endl;
    }else{
        std::cout << "text_char is not alphanumeric" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "std::isalpha" << std::endl;

    std::cout << "C is alphabetic : " << std::isalpha('C') <<std::endl;
    std::cout << "9 is alphabetic : " << std::isalpha('9') << std::endl;
    std::cout << "^ is alphabetic : " << std::isalpha('^') << std::endl;
    std::cout << "e is alphabetic : " << std::isalpha('e') << std::endl;
    std::cout << "Note : Hence the isalpha function does not always give one for \nalphabetic values, it just gives a non zero value for the same" << std::endl;
    
    
    std::cout << std::endl;
    std::cout << "std::isblank" << std::endl;
    std::cout << "C is blank : " << isblank('C') << std::endl;
    std::cout << "  is blank : " << isblank(' ') << std::endl;
    char message[] {"Hello there, how are you doing? I am doing fine!"};

    size_t blank_count {};
    for (size_t i = 0; i<sizeof(message)/sizeof(message[0]); i++){
        if (isblank(message[i])){
            blank_count++;
        }
    }
    std::cout << "Message : " << message << std::endl;
    std::cout << "Total blank spaces found : " << blank_count << std::endl << std::endl;
    std::cout << "For some reason isblank is not present in my system, hence I cre\narted a isblank function myself!." << std::endl;
    
    std::cout << std::endl;
    std::cout << "std::isupper and std::islower" << std::endl;
    std::cout << "Message : " << message << std::endl;
    size_t upper_count{};
    size_t lower_count{};
    for (size_t i = 0; i<sizeof(message)/sizeof(message[0]);i++){
        if (std::islower(message[i])){
            lower_count++;
        }else if (std::isupper(message[i])){
            upper_count++;
        }else{

        }
    }
    std::cout << "Message has " << lower_count << " lower case characters and " << upper_count << " uppercase characters." << std::endl;
    
    std::cout << std::endl;
    std::cout << "std::isdigit : " << std::endl;
    char message2[] {"I scored AIR 5544 in Joint Entrance Examination 2022."};
    size_t digit_count {};
    for (size_t i = 0; i< sizeof(message2)/sizeof(message2[0]); i++){
        if (std::isdigit(message2[i])){
            digit_count++;
        }
    }
    std::cout << "message : " << message2 << std::endl;
    std::cout << "Digit count : " << digit_count << std::endl;

    std::cout << std::endl;
    std::cout << "std::toupper and std::tolower" << std::endl;
    
    char message_out[sizeof(message2)/sizeof(message2[0])];
    for (size_t i = 0; i<sizeof(message2)/sizeof(message2[0]); i++ ){
        if (std::islower(message2[i])){
            message_out[i] = std::toupper(message2[i]);
        }else if (std::isupper(message2[i])){
            message_out[i] = std::tolower(message2[i]);
        } else{
            message_out[i] = message2[i];
        }
    }
    std::cout << "Input Message : " << message2 << std::endl;
    std::cout << "Output Message : " << message_out << std::endl;
    return 0;
}