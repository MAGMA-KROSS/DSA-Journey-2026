#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    bool IsUnique = true;
    for (int i = 0; i < nums.size(); i++)
    {

        for (int j = 0; j < nums.size(); j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                if (nums[i] == nums[j])
                {
                    IsUnique = false;
                }
            }
        }
    }
    cout<<IsUnique;
    return 0;
}