#include <iostream>

class Solution{
    public : 
    int maxDays(int arr[], int n){
        sort(arr, arr+ n);
        return arr[n-1];
    }
};