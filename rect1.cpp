#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int m , n , i , j ;
    cin>>m;
    cin>>n;
    for (i = 1 ; i<=n;i++ ){
        cout<<"*";
    }
    cout<<endl;
    for (i = 1 ;i <= m - 2 ;i ++){
        cout<<"*";
        for (j = 1 ; j <=n - 2 ; j++){
           cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    for (i = 1 ; i<=n;i++ ){
        cout<<"*";
    }
	// Your code here
    return 0;
}