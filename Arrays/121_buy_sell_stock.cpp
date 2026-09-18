#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    int best_buy = prices[0];
    int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (best_buy>prices[i])
        {
            best_buy=prices[i];
        }
        else if (i>0)
        {
            maxProfit = max(maxProfit, (prices[i]-best_buy));
        }
        
    }
    cout << maxProfit;
    return 0;
}