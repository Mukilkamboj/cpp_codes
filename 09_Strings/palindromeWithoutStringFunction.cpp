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
    end=end-1;
    int start=0;
    int flag=0;
    while(start<end){
        if(s[start]!=s[end]){
            flag++;
            break;
        }
        start++;
        end--;
    }
    if(flag==1){
        cout<<s<<" is "<<"Not Palindrome";
    }
    else{
        cout<<s<<" is "<<"Palindrome";
    }
}