/*
in this stations and airports you often see this type of screen : 
Have you ever asked yourself how it might be possible to simulate 
this display
The mission of this programm that can display a line of text in ASCII art


*/



#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);
    vector<string>S;
    for (int i = 0; i < H; i++) {
        string ROW;
        getline(cin, ROW);
        S.push_back(ROW);
    }        
            
    vector<int>Pos;
    for(int i = 0; i < T.length(); i++)
    {
        int x = 100;
        if((T[i]>='a'&& T[i]<='z') || (T[i]>='A' && T[i]<='Z'))
        {
            if(isupper(T[i]))
            {
               x = int(T[i]) - int('A');
            }
            else
            {
                x = int(T[i]) - int('a');
            }
        }
        if(x != 100)
        {
            Pos.push_back(x);
        }
        else
        {
            x = int('z') -  int('a') + 1; 
            Pos.push_back(x);
        }
    }
    for(int k = 0; k < H; k++)
    {
        for(int j = 0; j < Pos.size(); j++)
        {
            for(int l = 0; l < L; l++)
            {
                int index = (Pos[j] * L) + l;
                string ascii_art = S[k];
                cout<<ascii_art[index];
            }
            
        }
        cout<<endl;
    }
}