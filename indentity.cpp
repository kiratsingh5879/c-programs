#include<iostream>

using namespace std;
int main() {
    int a[3][3];
    int var=1;
cout<<"enter the matrix:";
for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
        cin>>a[i][j];
    }
}
cout<<"entered matrix is:"<<endl;
for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
}
for(int i=0;i<3;i++) {
    for(int j=0;i<3;j++) {
        if(i==j && a[i][j]!=1 || i!=j && a[i][j]!=0)
        {
            var=0;
        }
    }
}
if(var==1)
cout<<"identity matrix";
else
cout<<"not identty matrix";
    return 0;
}