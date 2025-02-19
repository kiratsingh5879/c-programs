#include<iostream>
using namespace std;
void fun (int n,int i) {
if(i>n)
return;
fun(n,i+1);
cout<<i<<" ";
}
int main() {
    int n;
    cin>>n;
    fun(n,1);
    return 0;
}