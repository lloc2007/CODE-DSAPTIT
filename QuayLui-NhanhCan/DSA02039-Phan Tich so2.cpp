#include <bits/stdc++.h>
using namespace std ;
int n , a[1005] , dem  , ok ;
vector<vector<int>> v ;
void ktao(){
    a[1] = n ;
    dem = 1 ;
}
void sinh(){
    int i = dem ;
    while(i>0 && a[i]==1) i-- ;
    if(i==0) ok = 0 ;
    else{
        a[i]-- ;
        int cnt = dem - i + 1 ;
        dem = i ;
        int q = cnt / a[i] , r = cnt % a[i] ;
        if(q!=0){
            for(int j = 1 ; j <= q ; j++) a[++dem] = a[i] ;
        }
        if(r!=0) a[++dem] = r ;
    }
}
int main(){
    int t ; cin >> t ;
    while(t--){
        v.clear() ;
        cin >> n ;
        ktao() ;
        ok = 1 ;
        while(ok){
            vector<int> tmp ;
            for(int i=1;i<=dem ;i++) tmp.push_back(a[i]) ;
            v.push_back(tmp) ;
            sinh() ;
        }
        cout << v.size() << '\n' ;
        for(auto it : v){
            cout << "(" ;
            for(int i = 0 ; i<it.size();i++){
                cout << it[i] ;
                if(i!=it.size() -1) cout << " " ;
            }
            cout << ") " ;
        }
        cout << endl ;
    }
}
