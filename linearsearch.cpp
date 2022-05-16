#include<bits/stdc++.h>
using namespace std;
bool isPossible(int arr[][4],int key,int row,int col){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(key==arr[i][j])
                return 1;
        }
    }
    return 0;    
}
int main(){

    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int key;
    cout<<"enter the number to search::";
    cin>>key;
    if(isPossible(arr,key,3,4))
        cout<<"Element found";
    else
        cout<<"Element not found";
    return 0;
}