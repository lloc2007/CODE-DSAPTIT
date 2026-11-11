#include <bits/stdc++.h>
using namespace std ;

vector<int> ke[1005] ;
int n , m , vs[1005] , check ;
int parent[1005] ;
void nhap(){
    cin >> n >> m ;
    memset(vs,0,sizeof(vs)) ;
    memset(ke,0,sizeof(ke)) ;
    memset(parent,0,sizeof(parent)) ;
    check = 0 ;
    for(int i=1;i<=m;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back(y) ;
        ke[y].push_back(x) ;
    }
}

void DFS(int u){
    vs[u] = 1 ;
    for(int v : ke[u]){
        if(vs[v]==1 && parent[u] != v){
            check = 1 ;
        }
        if(!vs[v]){
            parent[v] = u ;
            DFS(v) ;
        }
    }

}

int main(){
    int t ; cin >> t ;
    while(t--){
        nhap() ;
        for(int i=1;i<=n;i++){
            if(!vs[i]) DFS(i) ;
        }
        if(check) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
}