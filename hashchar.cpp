#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abbbcabcdefghi";
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    return 0;
}