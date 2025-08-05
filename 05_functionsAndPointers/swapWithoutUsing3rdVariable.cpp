#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 10;
    cout<<"Before swappng x and y : "<<x<<" "<<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"After swappig x and y : "<<x<<" "<<y<<endl;
}