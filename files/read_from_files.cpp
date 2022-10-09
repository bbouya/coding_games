#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
using std::vector;
using std::string;
using std::ifstream;


void ReadBoardFile(string path){
/*
myFile.open(path)
*/
        ifstream myFile(path);
        if (myFile){
            string line;
            while(getline(myFile, line)){
                cout << line << "\n";

            }
        }


}
// PrintBoard not used in this exercise
void PrintBoard(const std::vector<std::vector<int>> board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            std::cout << board[i][j];
        }
        std::cout << "\n";
    }
}

int main(){
    string path = ""; //your file path here
    ReadBoardFile(path);

    return 0;
    
}