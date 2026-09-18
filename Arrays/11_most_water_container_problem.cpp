#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxArea = 0;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            if ((min(height[i],height[j])*(j-i))>maxArea)
            {
                maxArea=(min(height[i],height[j])*(j-i));
            }
            
        }
        
    }
    cout<<maxArea;
    return 0;
}