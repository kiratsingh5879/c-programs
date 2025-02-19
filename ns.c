
   #include<stdio.h>
int main(){
    int  m,n,rowsum,colsum,matrix[m][n]
    scanf("%d",&m);
    scanf("%d",&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",& matrix[i][j]);
        }
    }
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
        rowsum+=matrix[i][j];
        colsum+=matrix[j][i];
        }
    }
    int flag=1;
    int pd,sd;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                pd+=matrix[i][j];
            }
            if(i+j=n-1){
                sd+=matrix[i][j];
            }
        }

    }
    if (rowsum!=colsum){
        flag=0;
    }
    if(pd!=sd){
        flag=0;
    }
    if(flag=1){
        printf("magic mtrix");
    }


    return 0;
}