#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a first number : ";
    cin>>a;
    cout<<"Enter a second number : ";
    cin>>b;
    cout<<"Enter a third number : ";
    cin>>c;
    if(a>b && b>c){
        cout<<a<<" is largest";
    }
    else if (b>c && b>a){
        cout<<b<<" is largest";
    }
    else{
        cout<<c<<" is largest";
    }
    return 0;
}