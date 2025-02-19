#include<bits/stdc++.h>
using namespace std;
int main() {
    int a=20;
    int b=15;
    while(a>0 && b>0) {
        if(a>b) {
            a=a%b;
        }
        else 
        b=b%a;
        if(a==0) {
            cout<<"gcd="<<b;
        }
        if(b==0) {
            cout<<"gcd="<<a;
        }
    }
    return 0;
}