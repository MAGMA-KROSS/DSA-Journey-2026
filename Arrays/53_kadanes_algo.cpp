#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
    int max = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (currSum >= 0)
        {
            currSum = currSum + arr[i];
            if (max < currSum)
            {
                max = currSum;
            }
        }
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << max;
    return 0;
}