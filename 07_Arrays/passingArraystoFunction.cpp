#include<iostream>
using namespace std;
void change(int a[]){
    a[0]=12;
}
int main(){
    int arr[5]={1,89,3};
    for(int i=0;i<3;i++){
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;
    change(arr);
    for(int i=0;i<3;i++){
        cout<<arr[i];
        cout<<" ";
    }   
}