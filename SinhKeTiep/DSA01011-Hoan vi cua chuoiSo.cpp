#include<bits/stdc++.h>
using namespace std ;


int main(){
    int t ; cin >> t ;
    cin.ignore() ;
    while(t--){
        int n ; cin >> n ;
        cin.ignore() ;
        string s ; cin >> s ;
        if(next_permutation(s.begin(),s.end())){
            cout << n << " " << s << endl ;
        }else{
            cout << n << " " << "BIGGEST" << endl ;
        }
        cin.ignore() ;
    }
}