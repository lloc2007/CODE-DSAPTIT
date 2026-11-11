#include <bits/stdc++.h>
using namespace std ;

int n , ok  ;
string s ;
void ktao(){
    s = string(n,'A') ;
}
void sinh(){
    int i = n -1 ;
    while( i>=0 && s[i] == 'H'  ) s[i--] = 'A' ;
    if(i==-1) {
        ok = 0 ;
        return ;
    }
    s[i] = 'H' ;
}
bool check(string s){
    if(s[0]!='H' ) return false ;
    if(s[n-1]!='A') return false ;
    int cnt = 0 ;
    for(int i=0 ;i<n-1;i++){
        if(s[i]=='H' && s[i+1] == 'H') cnt++ ;
    }
    if(cnt >0) return false ;
    else return true ;
}
int main(){
    int t ; cin >> t ;
    while(t--){
        cin >> n ;
        ktao() ;
        ok = 1 ;
        while(ok){
            if(check(s)){
                cout << s << endl ;
            }
            sinh() ;
        }
    }
}