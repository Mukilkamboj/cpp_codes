#include<iostream>
using namespace std;
int swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    x = temp;
}
int main(){
    int x = 5;
    int y = 10;
    cout<<"Before swappng x and y : "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After swappig x and y : "<<x<<" "<<y<<endl;
}