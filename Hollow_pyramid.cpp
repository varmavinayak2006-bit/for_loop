#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n , i , j; 
    cin>>n;
    for (i = 1 ; i <= 2;i++){
        for (j = 1 ;j <= i ;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for (i = 3 ; i < n; i ++)
	{   
        cout<<"1 ";
        for (j = 1 ; j<= i - 2 ;j++){
            cout<<"  ";
        }
        for ( j= i ; j <=i ; j++)
        {
        cout<<j<<" ";
        }
        cout<<endl ;

    }
    for ( i = 1 ; i <=n ; i++){
        cout<<i<<" ";
    }
    return 0;
}