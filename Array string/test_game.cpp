#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int x_0;
    int y_0;
    cin >> x_0 >> y_0; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    vector<vector<int>> point;

    for (int i = 0; i < n; i++) {
        int x;
        int y;
        cin >> x >> y; cin.ignore();
        point.push_back({x,y});
    }
    vector<int> distance_list;
    int distance = 0;
    int x_f, y_f;

    for(int i = 0; i<n; i++){
        distance_list.push_back(distance);
        distance = sqrt((x_0 - point[i][0])^2 +(y_0 - point[i][1])^2);
        
        if(distance_list[i]< distance_list[i-1] && i>1){
            x_f = point[i][0];
            y_f = point[i][1];
        }
        
    }
    


    //find the point closet



    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << x_f<<" "<< y_f<< endl;
}