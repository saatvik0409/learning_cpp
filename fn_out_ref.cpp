#include <iostream>

void str_max(const std::string& input1, const std::string& input2, std::string& output){
    if (input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}

void int_max(const int& inp1,const int& inp2,int* output){
    if (inp1 > inp2) {
        *output = inp1;
    }else{
        *output = inp2;
    }
}

int main(){
    std::cout << std::endl;
    std::cout << "We also tend to pass by reference because it saves memory rather than creating copies!" << std::endl;
    std::string input1 {"Hello World!"};
    std::string input2 {"Hfllo World!"};
    std::string output {};
    str_max(input1,input2,output);
    std::cout << std::endl;
    std::cout << "Max of two strings : " << output << std::endl;
    std::cout << std::endl;
    int inp1 {5};
    int inp2 {7};
    int out {};
    int_max(inp1,inp2,&out);
    std::cout << "Max of two integers : " << out << std::endl;
    
    return 0;
}