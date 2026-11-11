#include <bits/stdc++.h>
using namespace std ;

int n , k , a[100005] ;
int ok ; 
void sinh(){
    int i = k ;
    while( i>=1 && a[i] == a[i-1] + 1) i-- ;
    if(i==0) {
        ok  = 0 ;
        return ;
    }
    a[i]-- ;
    for(int j=i+1;j<=k;j++){
        a[j] = n -k + j ;
    }
}
int main(){
    int t ; cin >> t ;
    while(t--){
        cin >> n >> k ;
        a[0] = 0 ;
        for(int i=1;i<=k;i++) cin >> a[i] ;
        ok = 1 ;
        sinh() ;
        if(ok){
            for(int i=1;i<=k;i++) cout << a[i] << " " ;
            cout << endl ;
        }else{
            for(int i=1;i<=k;i++) a[i] = n - k + i ;
            for(int i=1;i<=k;i++) cout << a[i] << " " ;
            cout << endl ;
        }
    }
}