#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{3,8,5},{3,9,6}};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}