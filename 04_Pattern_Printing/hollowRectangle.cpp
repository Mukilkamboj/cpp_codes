#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the value of rows : ";
    cin>>m;
    cout<<"Enter the value of columns : ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 or i==m ) cout<<"* ";
            else if(j==1 or j==n) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}