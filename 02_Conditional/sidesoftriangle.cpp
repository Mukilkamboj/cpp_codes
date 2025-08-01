#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a first side : ";
    cin>>a;
    cout<<"Enter a second side : ";
    cin>>b;
    cout<<"Enter a third side : ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"valid triangle";
    }
    else{
        cout<<"invalid triangle";
    }
    return 0;
}