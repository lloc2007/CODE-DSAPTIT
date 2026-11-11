#include <bits/stdc++.h>
using namespace std ;

int n , ok ;
string s ;
void ktao(){
    s="" ;
    for(int i=0;i<n;i++) s+= 'A' ;
}
void sinh(){
    int i = n - 1 ;
    while( i >=0 && s[i] == 'B'){
        s[i--] = 'A' ;
    }
    if(i==-1){
        ok = 0 ; return ;
    }
    s[i] = 'B' ;
}
int main(){
    int t ; cin >> t ;
    while(t--){
        cin >> n ;
        ktao() ;
        ok = 1 ;
        while(ok){
            cout << s << " " ;
            sinh() ;
        }
        cout << endl ;
    }
}