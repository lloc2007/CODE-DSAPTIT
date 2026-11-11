#include <bits/stdc++.h>
using namespace std ;

vector<int> ke[1005] ;
int disc[1005] , low[1005] , AP[1005] ;
int n , m , vs[1005] , timer = 0 ;

void nhap(){
    cin >> n >> m ;
    memset(vs,0,sizeof(vs)) ;
    memset(disc,0,sizeof(disc)) ;
    memset(low,0,sizeof(low)) ;
    memset(AP,0,sizeof(AP)) ;
    memset(ke,0,sizeof(ke)) ;
    for(int i=1;i<=m;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back(y) ;
        ke[y].push_back(x) ;
    }
}

void DFS(int u , int par){
    vs[u] = 1 ;
    disc[u] = low[u] = ++timer ;
    int cnt = 0 ;
    for(int v : ke[u]){
        if(!vs[v]){
            ++cnt ;
            DFS(v,u) ;
            low[u] = min(low[u],low[v]) ; 
            if(par != -1 && low[v] >= disc[u]) AP[u] = 1 ;
        }else{
            low[u] = min(low[u],disc[v]) ;
        }
    }
    if(par == -1 && cnt > 1) AP[u] = 1 ;
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
        for(int i=1;i<=n;i++){
            if(AP[i]) cout << i << " " ;
        }
        cout << endl ;
    }
}