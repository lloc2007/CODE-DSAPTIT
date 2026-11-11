#include<bits/stdc++.h>
using namespace std ;
int n , m , a[1005][1005] ;
long long  ans   ;
pair<int,int> p[2] = {{1,0} ,{0,1}} ;
void Try(int i , int j){
    if(i==n-1&&j==m-1){
        ans++ ;
        return ;
    }
    for(int k = 0 ; k<2 ;k++){
        int i1 = i + p[k].first ;
        int j1 = j + p[k].second ;
        if(i1 < n && j1 < m){
            Try(i1,j1) ;
        }
    }

}
int main(){
    int t ; cin >> t ;
    while(t--){
        ans = 0  ;
        cin >> n >> m ;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin >> a[i][j] ;
        }
        Try(0,0) ;
        cout << ans << endl ;
    }
}