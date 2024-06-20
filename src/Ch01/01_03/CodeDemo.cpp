// Learning C++ 
// Challenge 01_03
// Console Interaction, by Rob Swann 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Please Enter your Name: " << std::flush;
    std::cin >> str;
    std::cout << "You Entered: " << str << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
