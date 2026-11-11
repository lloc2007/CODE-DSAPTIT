#include <bits/stdc++.h>
using namespace std ;
int n , vs[1005] , x[1005] ;
vector<vector<int>> v ;
bool check(vector<int> tmp){
    for(int i = 1 ; i<n;i++){
        if(abs(tmp[i]-tmp[i-1])==1) return false ;
    }
    return true ;
}

void Try(int i ){
    for(int j=1;j<=n;j++){
        if(!vs[j]){
            x[i] = j ;
            vs[j] = 1 ;
            if(i==n){
                vector<int> tmp ;
                for(int k=1;k<=n;k++) tmp.push_back(x[k]) ;
                if(check(tmp)) v.push_back(tmp) ;
                tmp.clear() ;
            }else Try(i+1) ;
            vs[j] = 0 ;
        }
    }
}
int main(){
    int t ; cin >> t ;
    while(t--){
        v.clear() ;
        cin >> n ;
        Try(1) ;
        sort(v.begin(),v.end()) ;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                cout << v[i][j] ;
            }
            cout << endl ;
        }
    }
}