#include<bits/stdc++.h>
using namespace std;
bool check(string s,int len,int i) {
    if(i>=len/2)
    return true;
    if(s[i]!=s[len-i-1])
    return false;
 return check(s,len,i+1);
}
int main() {
    bool val;
    string s="madam";
    val=check(s,s.length(),0);
    if(val)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    return 0;
}