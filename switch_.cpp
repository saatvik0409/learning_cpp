#include <iostream>

const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};

int main(){

    int tool {Pen};

    switch (tool){

        case Pen :{
            std::cout << "Active Tool is Pen" << std::endl;   
        }
        break;
        case Marker : {
            std::cout << "Active Tool is Marker" << std::endl;
        }
        break;
        case Eraser :{
            std::cout << "Active Tool is Pen" << std::endl;   
        }
        break;
        case Rectangle : {
            std::cout << "Active Tool is Marker" << std::endl;
        }
        break; 
        case Circle :{
            std::cout << "Active Tool is Pen" << std::endl;   
        }
        break;
        case Ellipse : {
            std::cout << "Active Tool is Marker" << std::endl;
        }
        break;
        default:{
            std::cout << "Active tool unknown" << std::endl;
        }
        break;
        
    }

//if we remove the break statement,everything is gonna cascade

    switch (tool){

        case Pen :{
            std::cout << "Active Tool is Pen" << std::endl;   
        }
        case Marker : {
            std::cout << "Active Tool is Marker" << std::endl;
        }
        case Eraser :{
            std::cout << "Active Tool is Pen" << std::endl;   
        }
        case Rectangle : {
            std::cout << "Active Tool is Marker" << std::endl;
        }
        case Circle :{
            std::cout << "Active Tool is Pen" << std::endl;   
        }
        case Ellipse : {
            std::cout << "Active Tool is Marker" << std::endl;
        }
        default:{
            std::cout << "Active tool unknown" << std::endl;
        }
        break;
    }

//note that switch can only work with integral or enum arguements. string and any other data types are not allowed
    return 0;
}