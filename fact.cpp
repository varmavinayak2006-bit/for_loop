#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n , i , fact ;
    fact = 1 ;
    cout<<"Enter the number to find factorial : ";
    cin>>n;
    for (i = n ; i > 0 ; i --)
    {
        fact = fact * i ;
    }
    cout<<fact;
    return 0 ;
}