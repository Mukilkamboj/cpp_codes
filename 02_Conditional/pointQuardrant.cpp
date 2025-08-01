#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the point x and y : ";
    cin>>x >>y;
    if(x>0 && y>0){
        cout<<"1st quardrant";
    }
    else if(x<0 && y>0){
        cout<<"2nd quardrant";
    }
    else if(x<0 && y<0){
        cout<<"3rd quardrant";
    }
    else if(x>0 && y<0){
        cout<<"4th quardrant";
    }
    else{
        cout<<"point is at the origin/axis";
    }
    return 0;
}