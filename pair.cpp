#include <bits/stdc++.h>
using namespace std;
int main() {
    // pair<int,int>p={10,20};
    // cout<<p.first<<"  "<<p.second;
    // pair<int,pair<int,int>>p1={1,{2,3}};
    // cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;
    // cout<<endl;
    // pair<int,int>a[]={{10,20},{30,40},{50,60}};
    // for(int i=0;i<3;i++) {
    //     cout<<a[i].first<<" "<<a[i].second;
    //     cout<<endl;
    // }
    vector<int>v(5,100);
    // 
    vector<pair<int,int>>v1;
    v1.push_back({1,2});
    v1.emplace_back(10,20);
    for(int j=0;j<v1.size();j++) {
        cout<<v1[j].first<<"   "<<v1[j].second;
        cout<<endl;
    }
     
        //v.erase(v.begin()+1);
       /* for(auto it : v) {
        cout<<it<<" ";
     }*/

    return 0;
}