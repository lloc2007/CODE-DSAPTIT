#include <bits/stdc++.h>
using namespace std ;

int n , k , a[100005] , ok ;

void sinh(){
    int i = k ;
    while(i > 0 && a[i] == n - k + i){
        i-- ;
    }
    if(i==0){
        ok = 0 ;
        return ;
    }
    a[i]++  ;
    for(int j = i+1 ;j<=k;j++){
        a[j] = a[j-1] + 1 ;
    }
}

int main(){
    int t ; cin >> t ;
    while(t--){
        cin >> n >> k ;
        for(int i=1;i<=k;i++) cin >> a[i] ;
        ok = 1 ;
        sinh() ;
        if(ok){
            for(int i=1;i<=k;i++) cout << a[i] << " " ;
            cout << endl ;
        }else{
            for(int i=1;i<=k;i++) a[i] = i ;
            for(int i=1;i<=k;i++) cout << a[i] << " " ;
            cout << endl ;
        }
    }
}