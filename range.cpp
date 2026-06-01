#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    long low, high , i , j , prod ;
    cout<<"Enter high and low respectively ." ;
    cin>>high>>low ;
    j = high - low + 1 ;          // you will get product from range low to high 
    for (i = 1; i <= j ; i++)    // low * i that is 1 then i++ to high * j 
    {
        prod = low * i ;
        cout<<prod<<" ";
        low ++ ;  
    }
    return 0 ;

}