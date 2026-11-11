#include<bits/stdc++.h>
using namespace std ;
int n , ans    , cot[1005] , xuoi[1005] , nguoc[1005]; 
void Try(int i){
    for(int j = 1 ; j<=n;j++){
       if(cot[j]==0 && xuoi[i-j+n]==0 && nguoc[i+j-1] ==0 ){
        
            cot[j] = 1 , xuoi[i-j+n] = 1 , nguoc[i+j-1] = 1 ;
            if(i==n){
                ans++ ;
            }else{
                Try(i+1) ;
            }
            cot[j] = 0 , xuoi[i-j+n] = 0 , nguoc[i+j-1] = 0 ;
       }
    }
}
int main(){
    int t ; cin >> t ;
    while(t--){
        ans = 0 ;
        cin >> n ; 
        Try(1) ;
        cout << ans << endl ;
    }
}