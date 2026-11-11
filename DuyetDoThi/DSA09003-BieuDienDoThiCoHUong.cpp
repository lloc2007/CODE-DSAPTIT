#include <bits/stdc++.h>
using namespace std ;

int n , m ; 
vector<int> ke[1005] ;
void nhap(){
    cin >> n >> m ; 
    for(int i=1;i<=n;i++) ke[i].clear() ;
    for(int i=1;i<=m;i++){
        int x , y ; cin >> x >> y ;
        ke[x].push_back(y) ;
    }
    for(int i=1;i<=n;i++) sort(ke[i].begin(),ke[i].end()) ;
}


int main(){
    int t ; cin >> t ;
    while(t--){
        nhap() ;
        for(int i=1;i<=n;i++){
            cout << i << ": " ;
            for(int j=0;j<ke[i].size();j++){
                cout << ke[i][j] << " " ;
            }
            cout << endl ;
        }
    }
}