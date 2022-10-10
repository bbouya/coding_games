#include <iostream>
#include <vector>

using namespace std;
using std::vector;


vector<char> permute(string &elems, int mid, int end)
{
    end = end -1;
    vector<char> perms;
    //perms.push_back(elems);
    if (mid == end) {
        //perms.push_back(elems);
        return perms;
    }
    for (int i = mid; i <= end; i++) {
        swap(elems[mid + i], elems[end - i]);
        
        //permute(elems, mid + 1, end);
        //swap(elems[mid], elems[i]);
        
        cout << elems[mid] <<" " <<elems[end - i]<< "\n";
    }
    string c;
    for (int i = 0; i < elems.size(); i++)
    {
        perms.push_back(elems[i]);
    }
    
    
    return perms;

}


int main(){
    string n = "ayouuub";
    vector<char> k = permute(n, 0, n.size());
    // cout << n << endl;
    for(int i = 0; i < k.size(); ++i){
        cout << k[i] << endl;
    }
    return 0;
}