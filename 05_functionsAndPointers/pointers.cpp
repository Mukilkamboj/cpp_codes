#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<x<<endl;
    cout<<*p<<endl; //D Reference operator
    cout<<&p<<endl;
}