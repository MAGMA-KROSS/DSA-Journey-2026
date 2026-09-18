#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    double x=3;
    int ans=1;
    int n=5;
    int binform=n;
    while (binform>0)
    {
        if (binform%2==1)
        {
            ans=ans*x;
            x = x*x;
        }
        if (binform%2==0)
        {
            x =x*x;
        }
        binform/=2;
    }
    cout<<ans;
    return 0;
}