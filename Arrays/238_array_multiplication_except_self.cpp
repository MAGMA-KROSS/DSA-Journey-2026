#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4};
    vector<int> nums_multiplication;
    for (int i = 0; i < nums.size(); i++)
    {
        int temp=1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i==j)
            {
                continue;
            }
            else{
                temp=temp*nums[j];
            }
        }
        nums_multiplication.push_back(temp);
    }
    for(int val:nums_multiplication){
        cout<<val<<" ";
    }
    return 0;
}