#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main(){
    vector<int> nums={1,2,3,1};
    unordered_set<int> seen;
    for(int num:nums){
        if(seen.count(num)){
            return true;   
        }
        seen.insert(num);
    }
    return false;
}