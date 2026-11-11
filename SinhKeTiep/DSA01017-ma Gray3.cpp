#include<bits/stdc++.h>
using namespace std ;
int n ; 
string gray(string b){
    string g = b ;
    for(int i=1;i<n;i++){
        if(b[i-1]==b[i]) g[i] ='0' ;
        else g[i] = '1' ;
    }
    return g ;
}
int main(){
    int t ; cin >> t ;
    cin.ignore() ;
    while(t--){
        string b ; cin >> b ;
        n = b.size() ;
        cout << gray(b) << endl ;
    }
}