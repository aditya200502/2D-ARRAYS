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
    
    cout<<"the Array is::"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        } cout<<endl;
    }

    int sum=0;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            sum += arr[row][col];
        }
        cout<<"the sum of elements of row"<<row<<"is"<<sum<<endl;
        sum=0;
    }

    for(int col=0;col<3;col++){
        for(int row=0;row<3;row++){
            sum += arr[row][col];
        }
        cout<<"the sum of elements of col"<<col<<"is"<<sum<<endl;
        sum=0;
    }

    return 0;
}