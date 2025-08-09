#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number : ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        a[i]=(i+1)*(i+1);
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}