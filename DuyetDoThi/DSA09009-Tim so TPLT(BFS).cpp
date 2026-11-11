#include <bits/stdc++.h>
using namespace std ;


vector<int> ke[1005] ;
int n , m , vs[1005] ;

void nhap(){
    cin >> n >> m ; 
    memset(vs,0,sizeof(vs)) ;
    memset(ke,0,sizeof(ke)) ;
    for(int i=1;i<=m;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back(y) ;
        ke[y].push_back(x) ;
    }
}

void BFS(int u){
    queue<int> q ;
    q.push(u) ;
    vs[u] = 1 ;
    while(!q.empty()){
        int v = q.front() ; q.pop() ;
        for(int x : ke[v]){
            if(!vs[x]){
                q.push(x) ;
                vs[x] = 1 ;
            }
        }
    }
}

int main(){
    int t ; cin >> t ;
    while(t--){
        nhap() ;
        int cnt = 0 ;
        for(int i=1;i<=n;i++){
            if(!vs[i]){
                BFS(i) ;
                ++cnt ;
            }
        }
        cout << cnt << endl ; 
    }
}