#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{2,76},{5,74},{5,98},{9,96}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}