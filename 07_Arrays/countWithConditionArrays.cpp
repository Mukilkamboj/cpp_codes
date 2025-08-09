#include<iostream>
using namespace std;
int main(){
    int arr[]={2,8,6,1,7,9};
    int x=4;
    int flag=0;
    for(int i=1;i<6;i++){
        if(arr[i]>4)
           flag++; 
    }
    cout<<flag;
}