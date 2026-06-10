#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 4;
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << "  ";
        }
        cout << "* ";
        for (int k = 0; k < 2*i + 1; k++)
        {
            if(k/2!=0){
                cout<<"  ";
            }
        }
        if(i!=0){

            cout<<"* "<<endl;
        }
        else{
            cout<<endl;
        }
        
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < i + 2; j++)
        {
            cout<<"  ";
        }
        cout<<"*";
        for (int j = 0; j < 5 - i; j++ )
        {
            if(i==0&&j%2==0){
                cout<<"  ";
            }
            else if(i==1&&j%2==0){
                cout<<" ";
            }
        }
        if (i!=2)
        {
            cout<<" *"<<endl;
        }
        else{
            cout<<endl;
        }
        
    }
    
    

    return 0;
}

/*
Output:

        * 
      *   * 
    *       * 
  *           * 
    *       *
      *   *
        *

*/