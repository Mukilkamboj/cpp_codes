#include<iostream>
using namespace std;
int main(){
    int rem,n,count=1;
    cout<<"Enter the number : ";
    cin>>n;
    while(n!=0){
        rem=n%10;
        count=count*rem;
        n=n/10;
    }
    cout<<count;
}