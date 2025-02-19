#include<stdio.h>
#include<stdbool.h>
int main() {
    int sum;
    for(int i=11;i<=20;i++){
        int sum=0;
        int rem=0;
        int n=i;
        while(n!=0) {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        printf("%d\t",sum);
        if(i%sum==0){
            printf("%d\t",i);
        }
        printf("\n");

    }
    return 0;
}