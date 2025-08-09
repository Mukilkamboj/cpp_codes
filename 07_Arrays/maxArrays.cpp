#include<iostream>
using namespace std;
int main(){
    int arr[35];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>arr[0]){
            max=arr[i];
        }
        else max=arr[0];
    }
    cout<<max;
}