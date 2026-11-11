#include<bits/stdc++.h>
using namespace std ;

int n , ok ;
vector<string> v ;
string s ;

void ktao(){
    s = string(n,'0') ;
}

void sinh(){
    int i = n - 1 ;
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

// đổi xâu nhị phân thường sang mã Gray (không dùng toán tử bit)
string gray(string b){
    string g = b ;                          // g[0] = b[0]
    for(int i=1;i<n;i++){
        if(b[i-1] == b[i]) g[i] = '0' ;
        else g[i] = '1' ;
    }
    return g ;
}

int main(){
    int t ; cin >> t ;
    while(t--){
        cin >> n ;
        v.clear() ;                         
        ktao() ;
        ok = 1 ;
        while(ok){
            v.push_back(gray(s)) ;          
            sinh() ;
        }
        for(auto x : v) cout << x << ' ' ;
        cout << endl ;
    }
}