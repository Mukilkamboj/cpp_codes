#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    while(n!=0){
        sum=sum+n;
        n--;
    }
    cout<<sum;
}