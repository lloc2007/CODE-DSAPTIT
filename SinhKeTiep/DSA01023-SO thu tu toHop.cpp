#include<bits/stdc++.h>
using namespace std ;
int n , k , ok , a[10005] , x[10005];
vector<vector<int>> v ;
void ktao(){
    for(int i=1;i<=k;i++) a[i] = i ;
}
void sinh(){
    int i = k ;
    while(i>0 && a[i] == n - k + i){
        i-- ;
    }
    if(i==0){
        ok = 0 ;
        return ;
    }
    a[i]++ ;
    for(int j=i+1;j<=k;j++){
        a[j] = a[j-1] + 1 ;
    }
}
void nhap(){
    cin >> n >> k ;
    ktao() ;
    ok = 1 ;
    v.clear() ;
    for(int i=1;i<=k;i++) cin >> x[i] ;
    while(ok){
        vector<int> tmp ;
        for(int i=1;i<=k;i++){
            tmp.push_back(a[i]) ;
        }
        v.push_back(tmp) ;
        sinh() ;
    }
}

int main(){
    int t ; cin >> t ;
    while(t--){
        nhap() ;
        int stt = 0 ;
        for(int i = 0 ; i<(int)v.size();i++){
           stt++ ;
           bool check = true ;
           for(int j=0;j<k;j++){
            if(v[i][j]!=x[j+1]){
                check = false ;
                break ;
            }
           }
           if(check) break ;
        }
        cout << stt << endl ;
    }
}