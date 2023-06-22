#include <iostream>
#include <cstring>

int main(){
    std::cout << std::endl;
    const char message[] {"The sky is blue."};
    const char* message_p {"The sky is blue."};

    std::cout << "message : " << message << std::endl;
    std::cout << "strlen(message) : " << std::strlen(message) << std::endl;
    std::cout << "sizeof(message) : " << sizeof(message) << std::endl;
    std::cout << "strlen(message_p) : " << std::strlen(message_p) << std::endl;
    std::cout << "sizoef(message_p) : " << sizeof(message_p) << std::endl;
    std::cout << "The size of operator includes the null termination character array for char array,however for pointer it simply prints out the size of the pointer." << std::endl;

    std::cout << std::endl;
    std::cout << "std::strcmp : " << std::endl;
    std::cout << std::endl;
    std::cout << "std::strcmp(a,b) returns : " << std::endl;
    std::cout << "1) A negative value if a comes before b in lexicographical order" << std::endl;
    std::cout << "2) A positive value if b comes before a ih lexicographical order" << std::endl;
    std::cout << "3) 0 if both the string are equal." << std::endl;
    std::cout << std::endl;
    const char* string_p_1  {"Ty Tame is Tarun Soni"};
    const char* string_p_2  {"I live in shalimar Ba"};

    const char string_1[]  {"alaeama"};
    const char string_2[]  {"alacama"};

    std::cout << "std::strlen("<< string_p_1 << ", " << string_p_2 << ") : " << std::strcmp(string_p_1,string_p_2) << std::endl;
    std::cout << "std::strlen(" << string_1 << ", " << string_2 << ") : " << std::strcmp(string_1,string_2) << std::endl;
    std::cout << std::endl << "Lexicographical Order : " << std::endl;
    std::cout << "1) Digits" << std::endl;
    std::cout << "2) Capital Alphabets" << std::endl;
    std::cout << "3) Lowercase Alphabets" << std::endl;

    int n = 3;
    std::cout << std::endl;
    std::cout << "std::strncmp : " << std::endl;
    std::cout << "std::strncmp(" << string_p_1 << ", " << string_p_2 << ", " << n << ") : "<< std::strncmp(string_p_1,string_p_2,n) << std::endl;
    std::cout << "std::strncmp(" << string_1 << ", " << string_2 << ", " << n << ") : "<< std::strncmp(string_1,string_2,n) << std::endl;
    
    std::cout << std::endl;
    std::cout << "std::strchr : " << std::endl;
    char target = 'T';
    const char* result = string_p_1;
    size_t iterations {};
    std::cout << "input string : " << string_p_1 << std::endl;
    std::cout << "target : " << target << std::endl;
    while ((result = std::strchr(string_p_1,target))!=nullptr){
        std::cout << "Found : " << target << std::endl;
        string_p_1 = result+1;
        iterations++;
    }
    std::cout << string_p_1 << std::endl;
    std::cout << std::endl;

    std::cout << "std::strrchr : " << std::endl;
    std::cout << "Message : " << string_p_2 << std::endl;
    char* char_add = std::strrchr(string_p_2,'n');
    if (char_add){
        std::cout << char_add+1 << std::endl;
    }
    
    return 0;
}