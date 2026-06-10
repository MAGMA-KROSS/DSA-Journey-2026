#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < i+1; k++)
        {
            cout << k+1<<" ";
        }
        for (int l = 0; l <i; l++)
        {
            cout << l+1<<" ";
        }
        cout << endl;
    }
    

    return 0;
}