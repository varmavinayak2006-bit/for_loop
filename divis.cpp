#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int N , i ,j ;
    cin>>N ;
    for (i = 1 ; i<=(2*N);i++){
        if (i%2!=0){
        for (j = i ; j > 0;j--){
            
                cout<<"*";
            
        }
        cout<<endl;
        }
        
        if (i%2==0){
        for (j=2*(i-1) ;j>0;j--){
            cout<<"#";

        }
        cout<<endl;
        }


    }
	// Your code here
    return 0;
}