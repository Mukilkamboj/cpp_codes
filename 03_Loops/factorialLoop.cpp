#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter the number : ";
    cin>>n;
    while(n!=0){
        fact=fact*n;
        n--;
    }
    cout<<fact;
}