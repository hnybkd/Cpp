#include <iostream>

int addNumbers(int first_number, int second_number){
    int sum = first_number + second_number;
    return sum;
}

int main(int argc, char **argv){

    int firstNumber {12};
    int secondNumber {9};

    int sum = firstNumber + secondNumber;

    sum = addNumbers(firstNumber, secondNumber);
    
    sum = addNumbers(34, 7);

    std::cout << "sum : " << sum << std::endl;
    std::cout << "sum : " << addNumbers(23, 8) << std::endl;
    // Testing declaring variables with {}.
    std::cout << "first number : " << firstNumber << std::endl;
    std::cout << "second number : " << secondNumber << std::endl;
    
    return 0;
}