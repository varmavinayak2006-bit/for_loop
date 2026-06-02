#include <bits/stdc++.h> 
using namespace std;

int main() {
    int i , j, n ;
    cin>>n ;
    for ( i = 1 ; i < n ; i ++)
    {
        for (j = n-i;j>0;j-- ){
            cout<<" ";
        }
        for (j= i*2 -1 ;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for (i = 1 ; i <=2*n-1;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for (i = n ; i > 1 ; i--){
        for (j = n ;j>=i ; j--){
            cout<<" ";
        }
        for (j =((i-1)*2 - 1);j>=1;j--){
            cout<<"*";
        }
        cout<<endl;  
    }
    return 0;
}