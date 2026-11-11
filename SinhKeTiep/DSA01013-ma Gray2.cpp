#include<bits/stdc++.h>
using namespace std ;
int n ;
string bin(string g){
    string b = g ;
    for(int i=1;i<n;i++){
        if(b[i-1]==g[i]) b[i] = '0' ;
        else b[i] = '1' ;
    }
    return b ;
}
int main(){
    int t ; cin >> t ;
    cin.ignore() ;
    while(t--){
        string g ; cin >> g ;
        n=g.size() ;
        cout << bin(g) << endl ;
        cin.ignore() ;
    }
}