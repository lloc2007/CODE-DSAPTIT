#include <bits/stdc++.h>
using namespace std ;
vector<int> ke[1005] ;
int disc[1005] , low[1005] ,  vs[1005] ;
int n , m , timer = 0 ; 
vector<pair<int,int>> cau ;
void nhap(){
    cin >> n >> m ;
    memset(vs,0,sizeof(vs)) ;
    memset(disc,0,sizeof(disc)) ;
    memset(low,0,sizeof(low)) ;
    for(int i=1;i<=n;i++) ke[i].clear() ;
    timer = 0 ;
    cau.clear() ;
    for(int i=1;i<=m;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back(y) ;
        ke[y].push_back(x) ;
    }
}

void DFS(int u , int par){
    vs[u] = 1 ;
    disc[u] = low[u] = ++timer ;
    
    for(int v : ke[u]){
        if(v == par) continue ;
        if(!vs[v]){
            DFS(v,u) ;
            low[u] = min(low[v],low[u]) ;
            if(low[v] > disc[u]){
                cau.push_back({min(u,v),max(u,v)}) ;
            }
        }else{
            low[u] = min(low[u],disc[v]) ;
        }
    }
}

int main(){
    int t ; cin >> t ;
    while(t--){
        nhap() ;
        for(int i=1;i<=n;i++){
            if(!vs[i]){
                DFS(i,-1) ;
            }
        }
        sort(cau.begin(),cau.end()) ;
        for(auto [u,v] : cau){
            cout << u << " " << v << " " ;
        }
        cout << endl ;
    }
} 