#include<bits/stdc++.h>
using namespace std ;
int n , m  , vs[1005];
int sum , ans ;
vector<pair<int,int>> ke[1005] ;
void nhap(){
    cin >> n >> m ;
    for(int i=0;i<n;i++) ke[i].clear() ;   // thay cho memset
    for(int i=0;i<m;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back({y,i}) ;
        ke[y].push_back({x,i}) ;
    }
}
void DFS(int u){
    ans = max(ans,sum) ;
    for(auto [v,id] : ke[u]){
        if(!vs[id]){
            sum++ ;
            vs[id] = 1 ;
            DFS(v) ;
            sum-- ;
            vs[id] = 0 ;
        }
    }
}
int main(){
    int t; cin >> t ;
    while(t--){
        nhap() ;
        ans = 0 ;
        memset(vs,0,sizeof(vs)) ;
        for(int i = 0 ; i < n ;i++){
            sum = 0 ;
            DFS(i) ;
        }
        cout << ans << endl ;
    }
}