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

void BFS(int u){
    queue<int> q ;
    q.push(u) ;
    vs[u] = true ;
    while(!q.empty()){
        int v = q.front() ;
        q.pop() ;
        for(int x : ke[v]){
            if(!vs[x]){
                parent[x] = v ;
                q.push(x) ;
                vs[x] = true ;
            }
        }
    }
}

int main(){
    int tc ; cin >> tc ;
    while(tc--){
        nhap() ;
        BFS(s) ;
        if(!vs[t]){
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
        for(auto it : v){
            cout << it << " " ;
        }
        cout << endl ;
    }
}