#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int a  , b , sum , num ;
    cout<<"How many numbers you want to print in fibo series :"<<endl ;
    cin>>num ;
    a = 0 ;
    b = 1 ;

    if (num == 1 ){
        cout<<a ;
        return 0 ;
    }
    if (num == 2){
        cout<<a<<" "<<b;
        return 0 ;
    }
    if (num >=3){
        num-=2 ;
        cout<<a<<" "<<b<<" ";
        while (num > 0 ){
            
            sum = a + b ;
            cout<<sum<<" ";
            a = b ;
            b = sum ;
            num -- ;
        }
        return 0 ;
    }
}