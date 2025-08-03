#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of n : ";
    cin>>n;
    int mid=(n/2)+1;
    for(int i=1;i<=n;i++){
        if(mid>=i){
           for(int j=1;j<=mid-i;j++){
            cout<<"  ";
           }
           for(int j=1;j<=i;j++){
            cout<<"* ";
           }
           for(int j=1;j<=i-1;j++){
            cout<<"* ";
             } 
        }
        else{
            for(int j=1;j<=i-mid;j++){
            cout<<"  ";
            }
            for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
            }
            for(int j=1;j<=n-i;j++){
                cout<<"* ";
            }
            
        }
        cout<<endl; 
    }
}