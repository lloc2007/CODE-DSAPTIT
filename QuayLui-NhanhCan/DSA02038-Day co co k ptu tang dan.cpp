#include<bits/stdc++.h>
using namespace std ;
int n , k , a[1005] ;
set<vector<int>> se ;
bool check(vector<int> tmp){
    for(int i=1;i<tmp.size();i++){
        if(tmp[i] < tmp[i-1]) return false ;
    }
    return true ;
}
void Try(int i , vector<int> tmp){
    for(int j=i; j<n ; j++){
        if(tmp.size() > k ) break ;
        tmp.push_back(a[j]) ;
        if(tmp.size()==k){
            if(check(tmp)) se.insert(tmp) ;

        }
        Try(j+1,tmp) ;
        tmp.pop_back() ; 
    }
}
int main(){
    int t ; cin >> t ;
    while(t--){
        se.clear() ;
        cin >> n >> k ;
        for(int i=0;i<n;i++){
            cin >> a[i] ;
        }
        sort(a,a+n) ;
        vector<int> tmp ;
        Try(0,tmp) ;
        for(auto it : se){
            for(int x : it) cout << x << " " ;
            cout << endl ;
        }
    }
}