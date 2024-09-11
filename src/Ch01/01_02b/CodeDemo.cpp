// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
#include <iostream>
#include <string>
#include <cstring>


int main(){
    std::string str1;
    std::string str2;
    std::string str4 = "Hi Everybody! ";
    std::string str5 = "How's the going?";
    int str3,i, n=4;
    int x =4, y= 1;
    //for (i=n; i>0; i--){
        std::cout << "Hello To World" <<std::endl;
        std::cout << "Please enter a name :" << std::flush;
        std::cin >> str1; 
        std::cout << "Please enter a surname :" << std::flush;
        std::cin >> str2; 
        std::cout << "Please enter an age :" << std::flush;
        std::cin >> str3; 
        std::cout << "The name is = " << str1 << std::endl;
        std::cout << "The surname is = " << str2 << std::endl << std::endl;
        std::cout << "The age is = " << str3 << " years old" << std::endl;

    std::cout << str4 + str5 << std::endl;    
    //} 
    if (n ==0)
    {
        std::cout << "The cycle is completed" << std::endl;
    }
    if (x & y)
    {
        std::cout << "This is AND working" << std::endl;
    }
    if (x | y)
    {
        std::cout << "This is OR working" << std::endl;
    }return(0);
}