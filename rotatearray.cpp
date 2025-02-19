#include<bits/stdc++.h>
using namespace std;
int main() {
    int array[]={3,5,4,7,1};
    int size=5;
        int temp=0;
        for(int i=1;i<size;i++) {
            temp=array[size-1];
            for(int j=size-1;j>0;j--) {
              array[j]=array[j-1];
            }
            array[0]=temp;
            }
for(auto it:array) {
    cout<<it<<" ";
}
    return 0;
}