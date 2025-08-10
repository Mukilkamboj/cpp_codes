#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{7,9,4},{3,8,5},{3,9,6}};
    int min=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    cout<<min;
}