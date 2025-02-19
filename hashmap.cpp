#include<bits/stdc++.h>
using namespace std;
int main() {
    map<int,int>mp;
    int array[]={1,2,1,3,4,2,3,5,6,4,5,3};
    for(int i=0;i<(sizeof(array)/sizeof(int));i++){
        mp[array[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<":"<<it.second<<endl;
    }
    return 0;
}