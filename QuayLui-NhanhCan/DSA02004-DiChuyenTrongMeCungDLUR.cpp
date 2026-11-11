#include <bits/stdc++.h>
using namespace std ;
pair<int,int> dx[4] = {{1,0} ,{0,-1} ,{0,1},{-1,0}} ;
string S = "DLRU" , s ;
int n , a[1005][1005] , ok ;
void loang(int i , int j ){
    a[i][j] = 0 ;
    if(i==n-1 && j==n-1) {
        cout << s << " " ;
        ok = 1 ;
        return ;
    }
    for(int k=0 ; k<4 ;k++){
        int i1 = i + dx[k].first ;
        int j1 = j + dx[k].second ;
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1]==1){
            s += S[k] ;
            loang(i1,j1) ;
            a[i1][j1] =  1 ;
            s.pop_back() ;
        }
    }
}
int main(){
    int t ; cin >> t ;
    while(t--){
        cin >> n ; 
        for(int i=0;i<n;i++){
            for(int j=0 ;j<n ;j++) cin >> a[i][j] ;
        }
        s = "" ;
        ok = 0 ;
        if(a[0][0]==1) loang(0,0) ;
        if(!ok) cout << -1 ;
        cout << endl ;
    }
}