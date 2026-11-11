#include<bits/stdc++.h>
using namespace std ;
long long  n , res, ans=INT_MAX;
int uoc(long long  m){
    int sum = 0 ;
    for(int i = 1 ; i<=sqrt(m);i++){
        if(m%i==0){
            sum++ ;
        }
        if(m/i!=i) sum++ ;
    }
    return sum ;
}
void Try(long long i){
    if(uoc(i) >= n){
        res = i ;
        ans = min(ans,res) ;
    }
    else Try(i+1) ;
}
int main(){
    int t ; cin >> t ;
    while(t--){
        ans = INT_MAX ;
        cin >> n ;
        Try(n+1) ;
        cout << ans << endl ;
    }
}