#include<iostream>
using namespace std;
int main(){
    int i,n,flag;
    cout<<"enter a number : ";
    cin>>n;
    flag=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            flag++;
        }
    }
    if(flag==2) cout<<"Prime number";
    else cout<<"Not a prime number";
}