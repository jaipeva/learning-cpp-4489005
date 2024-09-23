// Learning C++ 
// Exercise 06_02
// Opening a text file for writing, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::ofstream outFile, outFile2;
    float a = 4.333f, b = 5.302f;
    float c = 8.666f, d = 10.604f;

    outFile.open("calculations.txt");
    outFile2.open("calculations3.txt");
    if (outFile.fail())
        std::cout << std::endl << "Couldn't open the file!" << std::endl;
    else{
        outFile << "a = " << a << std::endl;
        outFile << "b = " << b << std::endl;
        outFile << "a + b = " << a + b << std::endl;
        outFile << "a * b = " << a * b << std::endl;
        outFile.close();
        std::cout << "File written successfully!" << std::endl;
    }
    if(outFile2.fail()){
        std::cout << "File not opened" << std::endl;
    }
    else {
        outFile2 << "c = " << c << std::endl;
        outFile2 << "d = " << d << std::endl;
        outFile2 << "c + d = " << c + d << std::endl;
    }
    std::cout << std::endl << std::endl;
   // outFile2.app("calculations2.txt");
    return (0);
}
