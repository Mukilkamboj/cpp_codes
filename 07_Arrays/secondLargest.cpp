#include<iostream>
using namespace std;
int main(){
    int arr[]={3,9,4,8,10};
    int largest=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>arr[0]){
            largest=arr[i];
        }
        else largest=arr[0];
    }
    int slargest=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]!=largest){
            if(arr[i]>slargest)
               slargest=arr[i];
        }    
    }
    cout<<slargest;
}