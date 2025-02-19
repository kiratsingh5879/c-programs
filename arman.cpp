#include<stdio.h>
int main() {
    int array[]={10,20,30,10,50,10,20};
    int size=sizeof(array)/sizeof(int);
    int max=array[0];
    for(int i=0;i<size;i++) {
        if(array[i]>max)
        max=array[i];
    }
    printf("%d\n",max);
    int newarray[max+1]={0};
    for(int i=0;i<size;i++) {
        newarray[array[i]]++;
    }
    for(int i=0;i<max+1;i++) {
        if(newarray[i]>0){
            printf("%d is %d times\n",i,newarray[i]);
        }
    }
    return 0;
}