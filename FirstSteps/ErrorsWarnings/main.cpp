#include <iostream>

int main(){
    // Compile time error...missing semicolon after std::endl
    std::cout << "Hello World!" << std::endl;

    //Runtime error will still build with a warning.
    // int value = 7/0;
    // std::cout << "value: " << value << std::endl;
    return 0;
}