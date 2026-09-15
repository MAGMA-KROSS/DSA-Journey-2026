#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums= {2,7,11,15};
    vector<int> pair;
    int target = 13;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i+1; j < nums.size(); j++)
        {
            if (nums[i]+nums[j]==target)
            {
                pair.push_back(i);
                pair.push_back(j);
            }
            
        }
        
    }
    for(int index:pair){
        cout<<index<<' ';
    }
    
    return 0;
}