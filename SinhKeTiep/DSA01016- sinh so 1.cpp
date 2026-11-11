#include <bits/stdc++.h>
using namespace std ;
int n , a[10005] , ok , dem ;
void ktao(){
    a[1]= n ;
    dem = 1 ;
}
void sinh(){
    int i = dem ;
    while(i >=1 && a[i] == 1){
        i-- ;
    }
    if(i==0) ok = 0 ;
    else{
        a[i]-- ;
        int cnt = dem - i + 1 ;
        dem = i ;
        int q = cnt/a[i] , r =cnt%a[i] ;
        if(q!=0){
            for(int j=1;j<=q;j++){
                a[++dem] = a[i] ;
            }
        }
        if(r!=0){
            a[++dem] = r ;
        }
    }
}
int main(){
    int t ; cin >> t ;
    while(t--){
        cin >> n ;
        ktao() ;
        ok = 1 ;
        while(ok){
            cout << '(' ;
            for(int i=1;i<=dem;i++){
                cout << a[i] ;
                if(i!=dem) cout << ' ' ;
            }
            cout << ") " ;
            sinh() ;
        }
        cout << endl ;
    }
}