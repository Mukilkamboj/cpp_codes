#include<iostream>
using namespace std;
int main(){
    int n=6;
    int a[n]={1,2,3,4,5,6};
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}