/*
streaming ints from string with istringstream 
in c++ strings can be streamed into temporary variable
similarly to how files can be streamed into strings,
One way to stream a string is to use an input string stream obkeect 
*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;
//using std::vector;
using std::string;

int main(){

    string a("19955 6 33 465 5");
    istringstream mystream(a);

    int n;
    mystream >> n;

    std::cout << n << "\n";
    return 0;
}