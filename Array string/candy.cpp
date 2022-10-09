/*
there are N children in a line, each children
is assigned a rating value

*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

class Solution {
    public:
        int candy(vector<int>& ratings){
            int size = ratings.size();
            vector<int> ans(size, 1);
            for(int i = 1; i < size; i++){
                if(ratings[i-1] < ratings[i]){
                        ans[i] = ans[i-1] + 1;
                }
            }
            int sum  = 0;
            for (int i = 0; i < count; i++)
            {
                /* code */
            }
            

        }
};