#include<iostream>
using namespace std;

int main(){
    int sp;
    cout<<"Enter selling price :  ";
    cin>>sp;
    int cp;
    cout<<"Enter cost price : ";
    cin>>cp;
    if(sp>cp){
        cout<<"profit : "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"loss : "<<cp-sp;
    }
    else{
        cout<<"no profit no loss";
    }
    return 0;
}