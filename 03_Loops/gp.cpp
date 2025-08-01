#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter n : ";
    cin>>n;
    int a=1;
    for(i=1;i<=n;i++){
        cout<<a<<" ";
        a = a*2;
    }
}