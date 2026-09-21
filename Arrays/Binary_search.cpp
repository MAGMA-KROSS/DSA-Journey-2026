#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 69, 7};
    int st = 0, end = arr1.size() - 1, tar = 69;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar > arr1[mid])
        {
            st = mid + 1;
        }
        else if (tar < arr1[mid])
        {
            end = mid - 1;
        }
        else
        {
            cout << mid;
            break;
        }
    }
    return 0;
}