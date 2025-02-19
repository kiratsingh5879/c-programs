#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++){
        float numerator=pow(7,i);
        float denomenator=pow(10,i-1);
        sum=numerator/denomenator;
    }
    printf("%f",sum+5);
    return 0;

}