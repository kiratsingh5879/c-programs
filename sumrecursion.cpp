#include<bits/stdc++.h>
using namespace std;
int  fact(int n) {
    if(n==0) {
        return 1;
    }
    return n=n*fact(n-1);
}
int main() {
    cout<<"enter a number";
    int n;
    cin>>n;
   int res=fact(n);
   cout<<res;
    return 0;
}