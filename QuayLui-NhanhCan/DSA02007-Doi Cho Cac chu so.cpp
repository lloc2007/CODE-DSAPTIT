#include <bits/stdc++.h>
using namespace std ;
int n ;
string ans ; 
void Try(string &s , int k , int i ){
    if(s > ans) ans = s ;
    if(k==0 || i >= s.size()) {
        return ;
    }
    char max_val = *max_element(s.begin() + i ,s.end()) ;
    if(s[i]==max_val){
        Try(s,k,i+1) ;
    }
    for(int j = i+1 ; j<s.size();j++){
        if(s[j]==max_val){
            swap(s[i],s[j]) ;
            Try(s,k-1,i+1) ;
            swap(s[i],s[j]) ;
        }
    }

}
int main(){
    int t ; cin >> t ;
    while(t--){
        ans="" ;
        cin >> n;
        string s ; cin >> s ;
        Try(s,n,0) ;
        cout << ans << endl ;
    }
}