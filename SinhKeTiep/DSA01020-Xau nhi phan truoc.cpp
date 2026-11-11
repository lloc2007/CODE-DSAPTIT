#include <bits/stdc++.h>
using namespace std ;

int n , ok  ;
string s ;

void sinh(){
    int i = s.size() - 1  ;
    while(i >=0 && s[i] == '0') s[i--] = '1' ;
    if(i==-1){
        ok = 0 ;
        return ;
    }
    s[i] = '0' ;
}

int main(){
    int t ; cin >> t ;
    cin.ignore() ;
    while(t--){
        cin >> s ;
        sinh() ;
        cout << s << endl ;
    }
}