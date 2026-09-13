#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {4,1,2,1,2};
    vector<int> unique;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            if(vec[i]==vec[j]){
                unique.push_back(vec[i]);
            }
        }
        
    }
    for(int val : unique){
        cout<<val<<" ";
    }
    return 0;
}