#include<stdio.h>
#include<math.h>
int main() {
    int head;
    printf("enter the starting head position:");
    scanf("%d",&head);
    int n;
    printf("enter the no. of requests");
     scanf("%d",&n);
     int request[n];
     printf("enter requests:");
     for(int i=0;i<n;i++) {
        scanf("%d",&request[i]);
     }
     int seek_time=0;
     for(int i=0;i<n;i++) {
        int diff=abs(head-request[i]);
        seek_time=diff+seek_time;
        head=request[i];
     }
     printf("seek time=%d\n",seek_time);
     printf(" avg seek time=%.2f\n",(float)(seek_time/n));
    return 0;
}