#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int a , b , sum , num ;
    cout<<"Enter the number till which you want fibo series :"<<endl ;
    cin>>num ;
    a = 0 ;
    b = 1 ;
    sum = 0 ;
    if (num == 0)
    {
        cout<<a ;
        return 0 ;
    }
    if (num == 1 ){
        cout<<a<<" "<<b<<" ";
        return 0 ;
    }
    else {
        cout<<a<<" "<<b<<" ";

        while ((a+b) <= num)
        {   
            
            sum = a + b ;
            cout<<sum<<" ";

            a = b ;
            b = sum ;
        }
        




    }
}