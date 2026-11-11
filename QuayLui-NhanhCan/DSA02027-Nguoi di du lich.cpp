#include <bits/stdc++.h>
using namespace std ;

int n , a[1005][1005] , vs[1005], x[1005] ;
int sum , ans = INT_MAX , cmin = INT_MAX ;
void nhap(){
    cin >> n ;
    for(int i=1 ;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j] ;
            if(a[i][j]!=0) cmin=min(cmin,a[i][j]) ;
        }
    }
}
void Try(int i){
    for(int j=2 ;j<=n;j++){
        if(vs[j]==0){
            x[i]=j ;
            sum += a[x[i-1]][x[i]] ;
            vs[j] = 1 ;
            if(i==n){
                ans = min(ans,sum + a[x[n]][1]) ;
            }
            else if(sum + (n-i+1)*cmin < ans){
                Try(i+1) ;
            }
            vs[j] = 0 ;
            sum -=a[x[i-1]][x[i]] ;
        }

    }
}
int main(){
    nhap() ;
    vs[1] = 1 ;
    x[1] = 1 ;
    Try(2) ;
    cout << ans << endl ;
}