#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a String : ";
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<"reversed String : "<<s;
}