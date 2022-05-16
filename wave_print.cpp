#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"enter the number::";
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    cout<<"the array is::"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }cout<<endl;
    }

    cout<<"wave printing of number is::"<<endl;
    for(int col=0;col<3;col++){
        if(col%2==0)
            {
                int row=0;
                while(row<3)
                {
                    cout<<arr[row][col]<<" ";
                    row++;
                }cout<<endl;
            }
         else
            {
                int row=2;
                while(row>=0)
                {
                    cout<<arr[row][col]<<" ";
                    row--;
                }cout<<endl;
            }
        }
    return 0;
}