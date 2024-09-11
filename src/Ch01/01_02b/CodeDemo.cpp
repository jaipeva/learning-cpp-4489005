// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
#include <iostream>

int main(){
    std::string str;
    
    std::cout << "Hello To World" <<std::endl;
    std::cout << "Please enter a name :" << std::flush;
    std::cin >> str; 
    std::cout << "The name is = " << str << std::endl << std::endl;
    return(0);
}