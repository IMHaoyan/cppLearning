#include <iostream>
#include <memory>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    
    vector<int> nums = {1,2,3,4,5,6};
    for(int i : nums){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;
    vector<int> b(6);
    copy(nums.begin(), nums.end(), b.begin());
    vector<int>().swap(b);
    for(int i : b){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
