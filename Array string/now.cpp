#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <istream>
#include <sstream>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    string s;
    getline(cin, s);

    int sum = 0;
    
    std::stringstream ss(s);
    int a;
    char e;
    while(ss >> a){
        if(a == 0){
            sum = 0;
        }
       sum = a + a;
       ss >> e;
        

    }
    cout<<sum<<"\n";


}