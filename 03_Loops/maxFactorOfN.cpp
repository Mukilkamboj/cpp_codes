#include<iostream>
using namespace std;
int main(){
    int i,n,max;
    cout<<"enter n : ";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0){
            max=i;
        }
    }
    cout<<max;
}