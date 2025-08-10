#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a String : ";
    getline(cin,s);
    int end=0;
    for(int i=0;s[i]!='\0';i++){
        end++;
    }
    end = end-1;
    int start=0;
    while(start<end){
        int temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
    cout<<"reversed String is : "<<s;
}