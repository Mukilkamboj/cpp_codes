#include<iostream>
using namespace std;
void greet(){
    cout<<"Hey"<<endl;
    greet();        //segmentation error
}
int main(){
    greet();
}