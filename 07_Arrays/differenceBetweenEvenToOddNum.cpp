#include<iostream>
using namespace std;
int main(){
    int arr[]={5,2,9,6,4,7};
    int sumeven=0,sumodd=0,d;
    for(int i=0;i<6;i++){
        if(i%2==0){
            sumeven+=arr[i];
        }
        else{
            sumodd+=arr[i];
        }
    }
    d=sumeven-sumodd;
    cout<<d;
}