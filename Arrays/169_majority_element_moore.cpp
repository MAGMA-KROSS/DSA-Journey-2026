#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> nums={1,2,2,1,1,1};
    int freq=0;
    int ans=0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq==0)
        {
            ans=nums[i];
        }
        if (ans!=nums[i])
        {
            freq--;
        }
        if (ans==nums[i])
        {
            freq++;
        }
    }
    cout<<ans<<" is the majority element";
    return 0;
}