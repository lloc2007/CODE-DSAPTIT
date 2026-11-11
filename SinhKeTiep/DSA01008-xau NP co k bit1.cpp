#include<bits/stdc++.h>
using namespace std ;

int n , k  , ok  ;
string s ;
vector<string> v ;
void ktao(){
    s="" ;
    for(int i=0;i<n;i++) s+='0' ;
}
void sinh(){
    int i = n - 1 ; 
    while(i >=0 && s[i] == '1') s[i--] = '0' ;
    if(i==-1) {
        ok =0 ;
        return ;
    }
    s[i]='1' ;
}

bool check(string t){
    int cnt = 0 ;
    for(int i=0;i<n;i++){
        if(t[i]=='1') cnt++ ;
    }
    if(cnt==k) return true ;
    else return false ;
}
int main(){
    int t ; cin >> t ;
    while(t--){
        cin >> n >> k ;
        ok = 1 ;
        ktao() ;
        while(ok){
            if(check(s)) {
                cout << s << endl ; 
            }
            sinh() ;
        }
        cout << endl ;
    }
}