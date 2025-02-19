#include<bits/stdc++.h>
using namespace std;
int main() {
    int array[]={1,2,3};
    int res=0;
    for(int i=2;i>=0;i--) {
         res=array[i]+pow(10,i);
    }
    cout<<res;
    return 0;
}