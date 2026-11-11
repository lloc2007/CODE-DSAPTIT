#include<bits/stdc++.h>
using namespace std ;
vector<string> v ;
int n , k , ok ;
string s ;
void ktao() {
    s = "" ;
    for(int i=0;i<n;i++) s += 'A' ;
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

bool check(string t){
    int cnt = 0 , dem = 0 ;
    for(int i=0;i<n;i++){
        if(t[i]=='A'){
            cnt++ ;
        }else{
            if(cnt==k) dem++ ;
            cnt = 0 ;
        }
    }
    if(cnt==k) dem++ ;
    if(dem==1) return true ;
    else return false ;
}

int main(){
    cin >> n >> k ;
    ktao() ;
    ok = 1 ;
    while(ok){
        if(check(s)) {
            v.push_back(s) ;
        }
        sinh() ;
    }
    cout << v.size() << endl ;
    for(auto it : v) cout << it << endl ;
}