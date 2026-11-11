#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int a[n] ;
        for(int &x : a) cin >> x ;
        if(next_permutation(a,a+n)){
            for(int x : a) cout << x << " " ;
            cout << endl ;
        }else{
            for(int i=0;i<n;i++) a[i] = i+1 ;
            for(int x : a) cout << x << " " ;
            cout << endl ;
        }
    }
}