#include <iostream>

int main(){

    size_t size {10};

    double* p_salaries {new double[size]};
    int* p_students {new(std::nothrow) int[size] {}};
    double* p_scores {new (std::nothrow) double[size]{1,2,3,4,5}};  

    std::cout << std::endl <<
    "While allocating the array size statically we had " << std::endl <<
    "to ensure that the size variable was of const type" << std::endl <<
    "however, this is not the case here and we can omit" << std::endl << 
    "the keyword const here for our convenience." << std::endl << std::endl;

    if (p_scores){
        std::cout << "size of scores (it's a regular pointer) : " <<sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores." << std::endl;

        for (size_t i{}; i < size; ++i){
            std::cout << "value : " << p_scores[i] << " : " << *(p_scores+i) << std::endl;
        }

    }

    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_students;
    p_students = nullptr;

    delete[] p_scores;
    p_scores = nullptr;

    int scores[10] {1,2,3,4,5,6,7,8,9,10};
    for (auto s: scores) {
        std::cout << "value : " << s << std::endl;
    }

    int* p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,10};
    //you cannot use range based forloop for p_scores
    // for (auto s: p_scores){
    //     std::cout << "values : " << s << std::endl;
    // } This will throw an error
    return 0;
}