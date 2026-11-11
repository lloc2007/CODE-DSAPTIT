#include <bits/stdc++.h>
using namespace std ;
int  vs[1005] ;
string s , t ;
void Try(int i){
    for(int j=0;j<s.size();j++){
        if(vs[j] == 0){
            t += s[j] ;
        vs[j] = 1 ;
        if(i==s.size()-1){
            cout << t << " " ;
        }else Try(i+1) ;
        t.pop_back() ;
        vs[j] = 0 ;
        }
    }
}
int main(){
    int tc ; cin >> tc ;
    while(tc--){
        cin >> s ;
        t = "" ;
        Try(0) ;
        cout << endl ;
    }
}