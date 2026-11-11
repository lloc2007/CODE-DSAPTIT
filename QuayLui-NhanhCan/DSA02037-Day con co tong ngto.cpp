#include<bits/stdc++.h>
using namespace std ;
int n , a[1005] ;
set<vector<int>> se ;
const int N = 1e6 + 7 ;
int x[N] ; 
void sang(){
    for(int i=0;i<=N;i++) x[i] = 1 ;
    x[0] = x[1] = 0 ;
    for(int i=2 ; i<=sqrt(N) ;i++){
        if(x[i]){
            for(int j=i*i ; j<=N ; j+=i) x[j] = 0 ;
        }
    }
}
void Try(int i , int sum , vector<int> tmp){
    for(int j = i ; j <n ; j++){
        tmp.push_back(a[j]) ;
        if(x[sum + a[j]]){
            vector<int> res = tmp  ;
            sort(begin(res),end(res),greater<int>()) ;
            se.insert(res) ;
        }
        Try(j+1,sum + a[j] , tmp) ;
        tmp.pop_back() ;
    }
}
int main(){
    int t ; cin >> t ;
    sang() ;
    while(t--){
        se.clear() ;
        cin >> n ;
        for(int i=0;i<n;i++) cin >> a[i] ;
        vector<int> tmp ;
        Try(0,0,tmp) ;
        for(auto it : se){
            for(int x : it){
                cout << x << " " ;
            }
            cout << endl ;
        }
    }
}