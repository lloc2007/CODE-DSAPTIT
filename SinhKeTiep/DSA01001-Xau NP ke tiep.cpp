#include <bits/stdc++.h>
using namespace std ;

string s ;
int ok ;
void sinh(){
    int i = s.size() - 1 ;
    while(i>=0 && s[i] == '1' ){
        s[i] = '0' ;
        i-- ;
    }
    if(i==-1) {
        ok = 0 ;
        return ;
    }
    s[i] = '1' ;
}
int main(){
    int t ; cin >> t ;
    cin.ignore() ;
    while(t--){
        cin >> s ;
        ok = 1;
        sinh() ;
        cout << s << endl ;
        cin.ignore() ;
    }
}