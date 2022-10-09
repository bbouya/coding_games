#include <iostream>
#include <vector>
using namespace std;

using std::vector;

void PrintBoard(const vector<vector<int>> board)
{
    cout << "\n";
    for(auto v: board){
        for (auto i: v){
            cout<< i;

        }
        cout << "\n";
    }
}

int main(){
    vector<vector<int>> board {{0, 1, 0, 0, 0, 0},
                                        {0, 1, 0, 0, 0, 0},
                                        {0, 1, 0, 0, 0, 0},
                                        {0, 1, 0, 0, 0, 0},
                                        {0, 0, 0, 0, 1, 0}};
                    
                PrintBoard(board);
                return 0;
}