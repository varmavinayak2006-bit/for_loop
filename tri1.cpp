#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int i , j , n ;
    cout<<"Enter the number to find a descending pattern of trisngle: " <<endl ;
    cin>>n ;
        for (i = n ; i >= 1 ; i --)
    {
        for (j = i ; j <= n ; j++){
            cout<<j<<" ";
        }
        cout<<endl ;

    }   

}