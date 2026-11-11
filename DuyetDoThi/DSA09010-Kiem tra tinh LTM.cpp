#include <bits/stdc++.h>
using namespace std ;

vector<int> ke[1005] , t_ke[1005] ;
int n , m , vs[1005] ;
stack<int> st ;

void nhap(){
    cin >> n >> m ; 
    memset(vs,0,sizeof(vs)) ;
    memset(ke,0,sizeof(ke)) ;
    memset(t_ke,0,sizeof(t_ke)) ;
    for(int i=1 ;i<=m;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back(y) ;
        t_ke[y].push_back(x) ;
    }
}
void DFS(int u){
    vs[u] = 1 ; 
    for(int v : ke[u]){
        if(!vs[v]){
            DFS(v) ;
        }
    }
    st.push(u) ;
}

void DFS2(int u){
    vs[u] = 1 ;
    for(int v : t_ke[u]){
       if(!vs[v]){
        DFS2(v) ;
       }
    }
}
int main(){
    int t; cin >> t ;
    while(t--){
        nhap() ;
        int cnt = 0 ;
        for(int i=1;i<=n;i++){
            if(!vs[i]){
                DFS(i) ;
            }
        }
        memset(vs,0,sizeof(vs)) ;
        while(!st.empty()){
            int s = st.top() ; st.pop() ;
            if(!vs[s]){
                DFS2(s) ;
                ++cnt ;
            }

        }
        if(cnt==1) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
}