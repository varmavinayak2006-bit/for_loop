#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int i , j,m;
    cout<<"Enter the number to get s descending pattern in triangle : ";
    cin>>m;
    for (i = 0 ; i < m ;i++){
        for ( j = m -i ;j <=m;j++){
            cout<<j<<" ";
        }
        cout<<endl ;
    }
}