/*
compare two version numbers version1 and version2;
you may assiume that the version strings are non-empty and contain only digits and the . character,
the .character does not represent a decimal point and is used to seperate number squences,
for instance 
*/
#include <iostream>
#include <string>
using namespace std;
// namespace name

class solution{
    public:
    int compareVersion (string version1, string version2){
        int pos1=0, pos2=0, token1, token2;
        string delimiter = ".";

        pos1 = version1.find(delimiter);
        pos2 = version2.find(delimiter);    
    }
};