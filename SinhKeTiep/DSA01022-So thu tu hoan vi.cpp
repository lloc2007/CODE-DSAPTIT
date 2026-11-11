#include <bits/stdc++.h>
using namespace std ;

int main(){
    long long fact[21] ;
    fact[0] = 1 ;
    for(int i = 1 ; i <= 20 ; i++) fact[i] = fact[i-1] * i ;

    int tc ; cin >> tc ;
    while(tc--){
        int n ; cin >> n ;

        vector<int> p(n) ;
        for(int i = 0 ; i < n ; i++) cin >> p[i] ;   // hoan vi cho duoi dang n so

        // dem so hoan vi dung truoc p
        long long rank = 1 ;
        for(int i = 0 ; i < n ; i++){
            int nho = 0 ;
            for(int j = i+1 ; j < n ; j++)
                if(p[j] < p[i]) nho++ ;
            rank += nho * fact[n-1-i] ;
        }
        cout << rank << '\n' ;
    }
}
