#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a first number : ";
    cin>>a;
    cout<<"Enter a second number : ";
    cin>>b;
    cout<<"Enter a third number : " ;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is largest";
        }  
        else{
            cout<<c<<" is largest";
        }    
    }
    else{
        if(b>c){
            cout<<b<<" is largest";
        }
        else{
            cout<<c<<" is largest";
        }            
    }
}