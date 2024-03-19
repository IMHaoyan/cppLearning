#include<iostream>
#include<unordered_map>
#include <memory>
using namespace std;
int main(){
    unique_ptr<int> pInt(new int(5));
    int a =1;
    shared_ptr<int> p = make_shared<int>(1);
    return 0;
}
