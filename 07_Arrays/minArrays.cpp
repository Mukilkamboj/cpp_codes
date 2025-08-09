#include<iostream>
using namespace std;
int main(){
    int arr[35];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<arr[0]){
            min=arr[i];
        }
        else min=arr[0];
    }
    cout<<min;
}