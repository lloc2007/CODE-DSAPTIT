#include <bits/stdc++.h>
using namespace std ;
int n  ;
string s , ss ;
set<string> se ;
void Try(int i){
    for(int j = i ; j < n ; j ++){
    
        	ss += s[j] ;
        if(ss.size() <= n){
           se.insert(ss) ;
        }
        Try(j+1) ;
        
        ss.pop_back() ;
		
    }
}
int main(){
    int t; cin >> t ;
    while(t--){
        se.clear() ;
        cin >> n >> s ;
        ss ="" ;
        Try(0) ;
        for(auto it : se) cout << it << " " ;
        cout << endl ;
    }
}