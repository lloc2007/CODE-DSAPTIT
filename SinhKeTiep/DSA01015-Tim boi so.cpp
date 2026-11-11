#include <bits/stdc++.h>
using namespace std ;

string solve(int n){
    for(int i=1; ;i++){
        string s = "" ;
        for(int x=i ;x >0 ;x/=2){
            s = (char)('0' +(x%2)*9) + s ;
        }
        int r = 0 ;
        for(char x : s) {
            r = (r*10 + (x-'0')) % n  ;
        }
        if(r==0) return s ;
    }
}
int main(){
    string ans[505] ;
    for(int i=1;i<=500;i++) ans[i] = solve(i) ;
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        cout << ans[n]<< endl ;
    }
}