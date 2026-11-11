#include<bits/stdc++.h>
using namespace std ;
vector<int> ke[100005] ;
int n , m  , s ;
int vs[100005] ;

void nhap(){
    cin >> n >> m >> s ;
    for(int i=1;i<=n;i++){
        ke[i].clear() ;
    }
    for(int i=1;i<=m;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back(y) ;
        ke[y].push_back(x) ;
    }
    for(int i=1;i<=n;i++){
        sort(ke[i].begin(),ke[i].end()) ;
    }

}

void BFS(int u){
    queue<int> q ;
    q.push(u) ;
    vs[u] = 1 ;
    while(!q.empty()){
        int x = q.front() ; q.pop() ;
        cout << x << " " ;
        for(int y : ke[x]){
            if(!vs[y]){
                vs[y] = 1 ;
                q.push(y) ;
            }
        }
    }
}

int main(){
    int t ; cin >> t ;
    while(t--){
        nhap() ;
         BFS(s) ;
         memset(vs,0,sizeof(vs)) ;
         cout << endl ; 
    }
}