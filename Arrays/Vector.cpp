#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec = {1, 2, 3, 4, 5};
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    vector<int> vec2(5, 10); // vector of size 5 with all elements initialized to 10
    cout << endl;
    for(int val:vec2){
        cout << val << " ";

    }
    vec.push_back(5);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout<<endl<<vec.size()<<endl<<vec.front()<<endl<<vec.back();
}