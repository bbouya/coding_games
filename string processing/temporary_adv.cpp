/*
The isstringstream object can also be used as a boolean to determine if the last extraction operation failed
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
using std::cout;
using std::string;

int main(){

    string a("12 3 5 4 6");
    istringstream ss(a);
    int n;

    while (ss >> n)
    {
        cout << n << "\n";
        /* code */
    }
    
}