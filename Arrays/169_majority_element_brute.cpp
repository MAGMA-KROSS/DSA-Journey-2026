#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> nums={2,2,1,1,1,2,2};
    int count=0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i]==nums[j])
            {
                count++;
            }
            
        }
        if (count>(nums.size()/2))
        {
            cout<< nums[i]<<" is the majority element";
            break;
        }
        else
        {
            count = 0;
        }
        
    }
    
    return 0;
}