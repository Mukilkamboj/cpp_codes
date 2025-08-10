#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a String : ";
    getline(cin,s);
    s.pop_back();
    cout<<s;
}