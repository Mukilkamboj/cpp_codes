#include<iostream>
using namespace std;
int main(){
    int rem,n,count=0;
    cout<<"Enter n : ";
    cin>>n;
    while(n!=0){
        rem=n%10;
        if(rem%2==0){
            count=count+rem;
        }
        n=n/10;
    }
    cout<<count;
}