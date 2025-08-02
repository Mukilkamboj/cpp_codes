#include<iostream>
using namespace std;
int main(){
    int c,n,rem,rev=0;
    cout<<"Enter a number : ";
    cin>>n;
    c=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<rev+c;
}