#include <bits/stdc++.h>
using namespace std ;
int n , a[100005] , check  ;
void sinh(){
    int i = n ;
    while(i>0&&a[i]==1){
        a[i--]=0 ;
    }
    if(i==0){
        check = 1 ; return ;
    }
    a[i] = 1 ;
}

int main(){
    int n , k ; cin >> n >> k ;
    check = 0 ;
    int cnt = 0 ;
    while(!check){
        vector<int> v ;
        for(int i=1;i<=k;i++){
            for(int i=1 ;i<=n;i++){
                
            }
        }
    }
}