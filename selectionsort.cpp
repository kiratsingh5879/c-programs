#include<bits/stdc++.h>
using namespace std;
// void swap(int &a,int &b) {
//     int temp=a;
//     a=b;
//     b=temp;
// }
void selectionsort(int array[],int size) {
 
for(int i=0;i<=size-2;i++) {
    int min=i;
   for(int j=i;j<=size-1;j++) {
     if(array[j]<array[min])
     min=j;
   } 
   int temp= array[i];
    array[i]=array[min];
    array[min]=temp; 
}
}
int main() {
    int array[]={40,20,10,45,5,6,4,8};
    int size=sizeof(array)/sizeof(int);
    selectionsort(array,size);
    for(auto it:array)
    cout<<it<<" ";
    return 0;

}