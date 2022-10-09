#include <fstream>
#include <iostream>
#include <string>

int main(){
    std::ifstream myfile;
    myfile.open('path of file');

    if (myfile){
        std::cout << "The file stream  has been created??.§§§"
    }
}