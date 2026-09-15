#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> nums= {2,7,11,15};
    int target =13;
    int i=0,j=nums.size()-1;
    int sum = 0;
    while (i<j)
    {
        sum = nums[i]+nums[j];
        if (sum<target)
        {
            i++;
        }
        else if(sum>target)
        {
            j--;
        }
        else{
            cout<<i<<','<<j;
            break;
        }
        
    }
    
    return 0;
}