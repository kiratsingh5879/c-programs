#include<stdio.h>
#include<math.h>
int main() {
    int head;
    printf("enter the starting head position:");
    scanf("%d",&head);
    int n;
    int seek_time=0;
    printf("enter the no. of requests");
     scanf("%d",&n);
     int request[n],processed[n];
     printf("enter requests:");
     for(int i=0;i<n;i++) {
        scanf("%d",&request[i]);
        processed[i]=0;
     }
     for(int count=0;count<n;count++) {
        int closest=-1;
        int mindistance=__INT_MAX__;
        for(int i=0;i<n;i++) {
            if(processed[i]==0 && abs(request[i]-head)<mindistance) {
                mindistance=abs(request[i]-head);
                closest=i;
            }
        }
        seek_time+=mindistance;
        head=request[closest];
        processed[closest]=1;
        printf("%d->",head);
     }
 printf("total seek time :%d",seek_time);
 printf("avg seek time:%.2f",(float)seek_time/n);

return 0;
}