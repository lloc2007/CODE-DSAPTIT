#include<bits/stdc++.h>
using namespace std ;
int  a[1005][1005] , x[1005] , cot[1005] , xuoi[1005] , nguoc[1005] ;
int ans = 0;

void Try(int i){
    for(int j = 1 ; j<=8;j++){
        if(cot[j]==0 && xuoi[i-j+8] ==0 && nguoc[i+j-1]==0){
            x[i] = j ;
            cot[j] = 1 , xuoi[i-j+8] = 1 , nguoc[i+j-1] = 1 ;
            if(i==8){
                int res = 0 ;
                for(int k = 1 ; k<=8;k++) res +=a[k][x[k]] ;
                ans = max(ans,res) ;
            }else Try(i+1) ;
            cot[j] =0 , xuoi[i-j+8] = 0 , nguoc[i+j-1] = 0 ;
        }
    }
}
int main(){
    int t; cin >> t ;
    while(t--){ 
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++) cin >> a[i][j] ;
        }
        ans = 0;
        Try(1) ;
        cout << ans << endl ;
    }
}