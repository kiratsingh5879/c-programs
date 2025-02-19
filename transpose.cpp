#include<iostream>
using namespace std;
int main() {
int a[3][3];
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
    for(int j=0;j<3;j++) {
       int temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
    }
}
cout<<"transpose is:"<<endl;
for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
}
return 0;
}