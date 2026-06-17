#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int i , j , n ;
    cin>>n ;
    for (i =1 ; i <= n ; i++){
        for (j = i ; j < n ;j++)
        {
            cout<<" ";
        }
        if (i==1){
        cout<<"*"<<endl;
        }
        else if (i >= 2 && i<=(n-1))  
         {
            cout<<"*";
        for (j=(i-2);j>0;j--){
                cout<<" ";
            }
            cout<<"*";
        for (j=(i-2);j>0;j--){
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
        
    }
        for (j = 0 ;j <(n*2 - 1 ); j++)
        {
            cout<<"*";
        }
        cout<<endl;


        for (i = 1 ; i <= (n - 2)  ; i++)
    {
        for (j = i ; j > 0; j--){
            cout<<" ";
        }
        cout<<"*";
            for (j = n-(i+2);j>0;j--){
                cout<<" ";
            }
        cout<<"*";
            for (j = n-(i+2);j>0;j--){
                cout<<" ";
            }
        cout<<"*"<<endl ;
    }
        for (j = 1 ; j < n ; j++){
            cout<<" ";
        }
        cout<<"*";
	// Your code here
    return 0;
}