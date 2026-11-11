#include <bits/stdc++.h>
using namespace std ;
vector<vector<int>> v ;
int n , k , a[1005] , ok ;
const int N = 1e6 + 7 ;
int x[N] ;
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i] = j ;
        if(i==k){
            vector<int> tmp ;
            for(int u = 1 ; u<=k;u++){
                tmp.push_back(a[u]) ;
            }
            v.push_back(tmp) ;
        }else{
            Try(i+1) ;
        }
    }
}
void sang(){
    for(int i=0;i<=N;i++) x[i] = 1 ;
    x[0] = x[1] = 0 ;
    for(int i=2 ; i<=sqrt(N) ; i++){
        if(x[i]==1){
            for(int j = i*i ; j<=N ; j+=i){
                x[j] = 0 ;
            }
        }
    }
}
int main(){
    sang() ;
    cin >> n >> k ;
    Try(1) ;
    for(int i = 0 ; i < v.size() - 1 ;i++){
        if(x[i+1]){
            cout << i+1 << ": " ;
            for(int j =0 ;j<v[i].size() ;j++){
                cout << v[i][j] << " " ;
            }
            cout << endl ;
        }
    }
}