#include <bits/stdc++.h>
using namespace std ;
vector<int> ke[1005] ;
int n , m , s , t ; 
int vs[1005] , parent[1005] ;
void nhap(){
    cin >> n >> m >> s >> t ;
    memset(vs,0,sizeof(vs)) ;
    memset(parent,0,sizeof(parent)) ;
    for(int i=1;i<=n;i++) ke[i].clear() ;
    for(int i=1;i<=m;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back(y) ;
        ke[y].push_back(x) ;
    }
}
void DFS(int u){
    vs[u] = true ;
    for(int v : ke[u]){
       if(!vs[v]){
        parent[v] = u ;
        DFS(v) ;
       }
    }
}
int main(){
    int tc ; cin >> tc ;
    while(tc--){
        nhap() ;
        DFS(s) ;
        if(vs[t]==0){
            cout << -1 << endl ;
            continue ;
        }
        int w = t ;
        vector<int> v ;
        while(w!=s){
            v.push_back(w) ;
            w = parent[w] ;
        }
        v.push_back(s) ;
        reverse(v.begin(),v.end()) ;
        for(int x : v){
            cout << x << " " ;
        }
        cout << endl ;
    }
}