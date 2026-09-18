#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxArea = 0, i = 0, j = heights.size() - 1;
    while (i < j)
    {

        if (heights[i] < heights[j])
        {
            if (maxArea < (min(heights[i], heights[j]) * (j - i)))
            {
                maxArea = (min(heights[i], heights[j]) * (j - i));
            }
            i++;
        }
        else if (heights[i] >= heights[j])
        {
            if (maxArea < (min(heights[i], heights[j]) * (j - i)))
            {
                maxArea = (min(heights[i], heights[j]) * (j - i));
            }
            j--;
        }
    }

    cout << maxArea;

    return 0;
}