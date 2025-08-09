#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int a[50];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        sum+=a[i];
    }
    cout<<sum;
}