#include<bits/stdc++.h>
using namespace std;
 int count=1;
 void cal(int);
int main(){
    int n=10;
    cal(n);
    return 0;
}
void cal(int n) {
    if(::count<=n) {
        cout<<::count<<" ";
        ::count++;
        cal(n);
    }
}

