#include<iostream>
using namespace std;
int main(){
    int i=65;
    while(i<=90){
        char y = (int) i;
        cout<<y<<" ";
        int b = (char) y;
        cout<<b<<endl;
        i++;
    }
}