#include<iostream>
using namespace std;
int main() {
    int array[]={10,20,35,45,8,9,37};
    int largest=array[0];
    int second=0;
    for(int i=0;i<7;i++) {
        if(array[i]>largest) {
            second=largest;
            largest=array[i];
        }
         if(array[i]<largest && array[i]>second) {
            second=array[i];
        }
    }
    cout<<"second largest no is:"<<second<<endl;
    cout<<" largest no is:"<<largest;
    return 0;
}