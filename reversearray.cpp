#include<bits/stdc++.h>
using namespace std;
void reverse(int low,int array[],int high) {
    if(low>high)
    return;
    int temp=array[low];
     array[low]=array[high];
     array[high]=temp;
     reverse(low+1,array,high-1);

}
int main() {
    int array[]={10,20,30,40,50,60};
    int low=0;
    int high=sizeof(array)/sizeof(int)-1;
    for(auto it:array) {
        cout<<it<<" ";
    }
    // while(low<high) {
    // int temp=array[low];
    // array[low]=array[high];
    // array[high]=temp;
    // low++;
    // high--;
    // }
    reverse(low,array,high);
    for(auto it:array) {
        cout<<it<<" ";
    }
    return 0;
}