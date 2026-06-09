#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < j; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}