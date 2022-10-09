#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std; 
using std::vector;
using std::string;


vector<int> ParseLine(string line){
    istringstream sline(line);
    int n ;
    char c;
    vector<int> row;
    while(sline >> n >> c){
        row.push_back(n);
    }
}

void ReadBoardFile(string path){
    // streaming variable
    ifstream myFile(path);
    if(myFile){
        string line;
        while (getline(myFile, line))
        {

            cout << line << "\n"; 
        }
        
    }
}

int main(){
    ReadBoardFile("file pathh");
    string a(" 1 2 3 5");
    ParseLine(a); // For testo
    cout<<"\n printing from int main(";

    return 0;
}