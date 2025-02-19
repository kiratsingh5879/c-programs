#include<stdio.h>
#include<ctype.h>
int main() {
    int array[26];
    for(int i=0;i<26;i++) {
        array[i]=0;
    }
    int i=0;
    char st[]="hello";
    while(st[i]!='\0') {
     array[tolower(st[i])-97]++;
     if(array[tolower(st[i])-97]==2) {
        printf("%c",(char)(99-(array[(tolower(st[i])-97)])));
     }
     i++;
    }  
    for(int i=0;i<26;i++) {
        printf("%d--%d\n",i,array[i]);
    }

    return 0;
}