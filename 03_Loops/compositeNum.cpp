#include<iostream>
using namespace std;
int main(){
    int i,n,flag;
    cout<<"enter the number : ";
    cin>>n;
    flag=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            flag=flag+1;
        }
    }
    if(flag>=3) cout<<"composite";
    else cout<<"not composite";
}