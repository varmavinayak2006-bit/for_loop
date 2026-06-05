#include<bits/stdc++.h>
using namespace std ;
int main ()
{


int i ,N ,   j; 
cin>>N;
    for (i = 0 ; i <  N ;i ++){
        cout<<i*6<<" " ;
        for (j =  (i*6 + 4); j <=((N-1)*4 + i*6 ); j+=4 ){
            cout<<j<<" ";
        }
        cout <<endl ;
    }
}