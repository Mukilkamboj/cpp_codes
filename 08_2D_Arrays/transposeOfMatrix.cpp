#include<iostream>
using namespace std;
int main(){
    int a[3][3]={{1,2,3},{3,8,5},{3,9,6}};
    int t[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            t[i][j]=a[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}