#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}