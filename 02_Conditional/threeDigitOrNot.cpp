#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"3 Digit Number";
    }
    else{
        cout<<"Not a 3 Digit Number";
    }
    return 0;
}