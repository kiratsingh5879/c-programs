#include<stdio.h>
int main() {
    int n=132;
    int i=1;
    int count=0;
    int array[n];
    while(i!=n) {
       if(n%i==0) 
       array[count]=i;
       count++;
       i++;
    }
    for(int i=0;i<count;i++) {
        for(int j=i+1;j<count;j++) {
            if(array[j]-array[i]==1 && array[j]*array[i]==n) {
                printf("%d--%d",array[i],array[j]);
            }
        }
    }
    return 0;

}