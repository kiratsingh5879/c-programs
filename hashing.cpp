#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="ababcdefffgghhhhh";
    int array[26]={0};
    for(int i=0;i<s.size();i++) {
        array[s[i]-'a']++;
    }
    for(int i=0;i<26;i++) {
     cout<<char(i+'a')<<"="<<array[i]<<"  ";
    }

    return 0;
}