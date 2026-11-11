#include <bits/stdc++.h>
using namespace std ;

vector<int> ke[1005] ;
int n , m , vs[1005] , deg[1005]  ;
 vector<int> topo ;
void  nhap(){
    cin >> n >> m ; 
    memset(vs,0,sizeof(vs)) ;
    memset(deg,0,sizeof(deg)) ;
    memset(ke,0,sizeof(ke)) ;
    topo.clear() ;
    for(int i=1;i<=m;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back(y) ;
        deg[y]++ ;
    }
}

void Kahn(){
    queue<int> q ;
    for(int i=1;i<=n;i++){
        if(deg[i]==0){
            q.push(i) ;
        }
    }
   
    while(!q.empty()){
        int u = q.front() ; q.pop() ;
        topo.push_back(u) ;
        for(int v : ke[u]){
            deg[v]-- ;
            if(!deg[v]) q.push(v) ;
        }
    }
}

int main(){
    int t ; cin >> t ;
    while(t--){
        nhap() ;
        Kahn() ;
        if(topo.size()==n) cout << "NO\n" ;
        else cout << "YES\n" ;
    }
}