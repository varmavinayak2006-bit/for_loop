#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    long Num , l ;
    cin>>Num ;
    int i =  -1 ;
    while (Num>0){
        l = Num % 10 ;
        if (l%2==0){
        
        i = i * l ;
        }
        else {
           
        }
         l = 0 ;
        Num = Num / 10 ;
    }
        i = -i ;
    if (i == 1){
        cout<<"-1";
    }
    else  {
        cout<<i;
    }
	// Your code here
    return 0;
}