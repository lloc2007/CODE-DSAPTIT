#include<bits/stdc++.h>

using namespace std ;

int n , a[100005] ;
int check ;
void sinh(){
    int i = n ;
    while(i>0 && a[i] ==1 ){
        a[i]=0;
        i-- ;
    }
    if(i==0) {
        check = 1 ; 
        return ;
    }
    a[i] = 1 ;
}
bool rv(int b[]){
    int l = 1 , r = n ;
    while(l<=r){
        if(b[l]!=b[r]) return false ;
        l++ , r-- ;
    }
    return true ;
}
int main(){
    cin >> n ;
    check = 0 ;
    while(!check){
        if(rv(a)){
            for(int i=1;i<=n;i++){
                cout << a[i] << " " ;
            }
            cout << endl ;
        }
        sinh() ;
       
    }
}