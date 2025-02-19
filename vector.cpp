#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v(5,20);
    for(auto x:v) {
        cout<<x<<" ";
    }
    cout<<endl;
    // v.erase(v.begin(),v.begin()+2);
    // for(auto x:v) {
    //     cout<<x<<" ";
    // }
    v.insert(v.begin(),300);
    v.insert(v.begin()+2,5500);
     for(auto x:v) {
        cout<<x<<" ";
    }
    return 0;
}