#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    for (int i = 4; i > 0; i--)
    {
        for (int k = 0; k < n-1; k++)
        {
            cout << " ";
        }

        for (int j = 1; j < i + 1; j++)
        {
            cout << n;
        }
        n++;
        cout << endl;
    }

    return 0;
}