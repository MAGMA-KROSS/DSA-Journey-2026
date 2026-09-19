#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int temp = 1;
    vector<int> nums_multiplication;
    for (int i = 0; i < nums.size(); i++)
    {
        nums_multiplication.push_back(temp);
        temp = temp * nums[i];
    }
    temp=1;
    for (int i = nums.size()-1; i >= 0; i--)
    {
        nums_multiplication[i]=nums_multiplication[i]*temp;
        temp=temp*nums[i];
    }
    
    for (int val : nums_multiplication)
    {
        cout << val << ' ';
    }

    return 0;
}