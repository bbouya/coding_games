#include <iostream>
#include <vector>

using namespace std;
using std::cout;
using std::vector;

int main(){

    vector<int> a = {1,2,3,4};
    // Add some code here to access and print elements of a.
    std::cout << "a = \n" ;

    for(int i=0; i< a.size(); i++){
        cout<< a[i]<< " ";
    }
    cout << "\n\n";

    vector<vector<int>> b = {
        {1,1,2,3},
        {2,1,2,3},
        {3,1,2,3},
    };
    cout << "b = \n";
    for (int i = 0; i<b.size(); i++){
        for(int j = 0; j<b[0].size(); j++){
            cout << b[i][j] <<"\n";

        }

    }
    cout << "\n";
    // Range based for loop : 
    cout << "Range based for loop \n";
    for (auto v:b){
        for (int i:v){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}
