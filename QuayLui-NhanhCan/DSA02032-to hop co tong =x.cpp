#include <bits/stdc++.h>
using namespace std ;
int n , x , ok , a[1005] ;
vector<vector<int>> v ;
void Try(int i , int sum , vector<int> tmp){
    for(int j = i ; j < n ; j++){
        if(sum + a[j] > x) break ;
        tmp.push_back(a[j]) ;
        if(sum + a[j]  == x){
            ok = 1 ;
            v.push_back(tmp) ;
        }
        Try(j,sum+a[j], tmp) ;
        tmp.pop_back() ;
    }
}
int main(){
    int t ; cin >> t ;
    while(t--){
        v.clear() ;
        cin >> n >> x ;
        for(int i=0;i<n;i++) cin >> a[i] ;
        ok = 0 ; 
        vector<int> tmp ;
        Try(0,0,tmp) ;
        if(!ok) cout << -1 << endl ;
        else{
            cout << v.size() << " " ;
            for(int i=0;i<v.size();i++){
                cout << "{" ;
                for(int j=0;j<v[i].size();j++){
                    cout << v[i][j] ;
                    if(j != v[i].size() - 1 ) cout << " " ;
                }
                cout << "} " ;
            }
            cout << endl ;
        }
    }
}