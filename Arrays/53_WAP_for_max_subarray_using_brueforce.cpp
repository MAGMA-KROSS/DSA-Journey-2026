#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
    int max = 0;
    for (int st = 0; st < arr.size(); st++)
    {
        int sum = 0;
        for (int end = st; end < arr.size(); end++)
        {
            sum = sum + arr[end];
            if (sum > max)
            {
                max = sum;
            }
        }
        }
    cout << max;

    return 0;
}