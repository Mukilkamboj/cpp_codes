#include<iostream>
using namespace std;
int main(){
    int n=7;
    int flag=0;
    int arr[n]={1,2,3,4,3,2,1};
    int start=0;
    int end=n-1;
    while(start<end){
        if(arr[start]!=arr[end]){
            flag++;
            break;
        }
        start++;
        end--;
    }
    if(flag==1){
        cout<<"Not Palindrome";
    }
    else{
        cout<<"Palindrome";
    }
}