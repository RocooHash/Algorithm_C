#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> f = {3, 4, 5};
    auto it = lower_bound(f.begin(), f.end(), 2);
    cout<<(it - f.begin())<<endl;
    return 0;
}