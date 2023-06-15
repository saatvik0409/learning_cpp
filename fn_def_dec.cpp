#include <iostream>

int max(int a, int b); //The declartion of a funciton
//We can define it after the main function
// Note that declearation of function shall preceed the first instance of its call

//int max(int,int) is also a valid decleration because in decleartion we dont care about variable names
int main(){
    
    return 0;
}

int max(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}