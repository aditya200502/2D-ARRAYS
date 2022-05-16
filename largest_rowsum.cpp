#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter row and column num::";
    cin>>m>>n;
    int arr[m][n];
    cout<<"enter the number::";
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cin>>arr[row][col];
        }
    }
    
    cout<<"the Array is::"<<endl;
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cout<<arr[row][col]<<" ";
        } cout<<endl;
    }

    int sum=0,ans=0,maxrow;
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            sum += arr[row][col];
        }
        if(ans<sum){
            ans=sum;
            maxrow=row;
        }
        sum=0;
    }
    cout<<"the row with max sum is::"<<maxrow<<" "<<ans;
    return 0;
}