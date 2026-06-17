#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int i , j , N ;
    cin>>N;
    for (i =N ; i >0 ; i--){
        for (j=i;j>=1;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }
    for (i = 2;i<=N;i++){
        for (j= i;j>= 1;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
	// Your code here
    return 0;
}