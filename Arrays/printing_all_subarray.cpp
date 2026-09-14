#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5};
    for (int st = 0; st < arr.size(); st++)
    {
        for (int end = st; end < arr.size(); end++)
        {
            cout<< " [ ";
            for (int k = st; k < end +1; k++)
            {
                cout << arr[k] << ' ';
            }
            cout<<"], ";
            
        }
        cout<<endl;
        
    }
    
    return 0;
}