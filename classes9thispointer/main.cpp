#include <iostream>
#include "dog.h"
#include "cat.h"

int main(){

    dog dog1;
    dog1.set_age(15)->set_name("Dharampaal")->set_breed("German");
    dog1.print_info();
    
    cat cat1;
    cat1.set_age(15).set_name("Kit_Cat").set_breed("Pussy");
    cat1.print_info();

    return 0;
}