#include<bits/stdc++.h>
using namespace std ;

int n , k , ok , a[100005] , b[100005] ;
set<int> se ;
void sinh(){
    int i = k ;
    while(i >0 && a[i] == n-k+i) i-- ;
    if(i==0){
        ok = 0 ;
        return ;
    }
    a[i]++ ;
    for(int j=i+1;j<=k;j++){
        a[j] = a[j-1] + 1 ;
    }
}

int main(){
    int t ; cin >> t ;
    while(t--){
        se.clear() ;
        cin >> n >> k ;
        for(int i=1;i<=k;i++) {
            cin >> a[i] ;
            b[i]=a[i] ;
            se.insert(b[i]) ;
        }
        ok = 1 ;
        int cnt = 0 ;
        sinh() ;
        if(!ok){
            cout << k << endl ;
        }else{
            for(int i=1;i<=k;i++){
                if(se.find(a[i])==se.end()){
                    cnt++ ;
                }
            }
            cout << cnt << endl ;
        }
    }
}