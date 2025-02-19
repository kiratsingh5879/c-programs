#include<stdio.h>
int main() {
    char st[]="hellllLLOOjdj";
printf("%s\n",st);
    int i=0;
    while(st[i]!='\0') {
       if(st[i]>='a' && st[i]<='z') {
        st[i]=st[i]-32;
        //printf("%c",st[i]);
       }
       else if(st[i]>='A' && st[i]<='Z') {
        st[i]=st[i]+32;
        //printf("%c",st[i]);
       }
       i++;

    }
    printf("\n");
    printf("%s",st);
    
    return 0;
}