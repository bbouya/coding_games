#include <iostream>
#include <cstring>
#include <string>
#include <array>
using  namespace std;
using std::cout;
//using std::vector;
//using std:string;



bool isUnique(string s){
    if(s.length() > 256) return false;

    bool values[256] = {false};
    for(int i = 0; i < s.length(); i++){
        if(values[s[i]]) return false;
        values[s[i]] = true;
    }

    return true;
}

//check permutation: given two strings, write a method to decide if one is a permutation of the other

bool checkPermutation(string s1, string s2){
    if(s1.length() != s2.length()) return false;

    int values[256] = {0};
    for(int i = 0; i<s1.length(); i ++) 
    {values[s1[i]]++;
        cout<<values[s1[i]]<< "\n";
    }
    for (int i = 0; i < s2.length(); i++) 
    {
        values[s2[i]]--;
        cout<<values[s2[i]]<< "\n";
        if(values[s2[i]]<0){
            return false;
        }
        
    }
    return true;
    
}




int main(){
    cout << "isUnique:" << isUnique("asdghj") << endl;
    	cout << "checkPermutation: " << checkPermutation("asdfgh", "hgfdab") << endl;


}