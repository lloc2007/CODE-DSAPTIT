#include <bits/stdc++.h>
using namespace std ;
vector<int> ke[1005] ;
int n , m ; 

void nhap(){
    cin >> n >> m ;
    for(int i=1;i<=n;i++) ke[i].clear() ;
    for(int i=1;i<=m;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back(y) ;
        ke[y].push_back(x) ;
    }
}

int main(){
    int t ; cin >> t ;
    while(t--){
        nhap() ;
        for(int i=1;i<=n;i++){
            cout << i << ": " ;
            for(int j = 0 ;j<ke[i].size();j++){
                cout << ke[i][j] << " " ;
            }
            cout << endl ;
        }
        cout << endl ;
    }
}