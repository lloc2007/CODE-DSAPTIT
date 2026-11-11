#include<bits/stdc++.h>
using namespace std ;

int n , a[1005] , ans  ;
set<vector<int>> se ;
void Try(int i , int sum , vector<int> tmp){
    for(int j = i ; j<n ; j++){
        tmp.push_back(a[j]) ;
        if((sum + a[j]) %2 ==1){
            vector<int> res = tmp ;
            sort(begin(res),end(res),greater<int>()) ;
            se.insert(res) ;
        }
        Try(j+1,sum + a[j] , tmp) ;
        tmp.pop_back() ;
    }
}
int main(){
    int t ; cin >> t ;
    while(t--){
        se.clear() ;
        cin >> n ;
        for(int i=0;i<n;i++) cin >> a[i] ;
        vector<int> tmp ;
        Try(0,0,tmp) ;
        for(auto it : se){
            for(int x : it) cout << x << " " ;
            cout << endl ;
        }
    }
}