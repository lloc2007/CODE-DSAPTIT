#include<bits/stdc++.h>
using namespace std ;

int u , v , s ; 
vector<int> ke[10005] ;
int vs[100005] ;
void nhap(){
    cin >> u >> v >> s ;
    memset(vs,0,sizeof(vs)) ;
    for(int i=1;i<=u;i++) ke[i].clear() ;
    for(int i=1;i<=v;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back(y) ;
        ke[y].push_back(x) ;
    }

}
void DFS(int s){
    vs[s] = 1 ;
    cout << s << " " ;
    for(int v : ke[s]){
        if(!vs[v]){
            DFS(v) ;
        }
    }
}

int main(){
    int t ; cin >> t ;
    while(t--){
        nhap() ;
        DFS(s) ;
        cout << endl ;
    }
}