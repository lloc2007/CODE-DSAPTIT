#include <bits/stdc++.h>
using namespace std ;
int  n , k , ok    ;
vector<int> a  , v ;

void Try(int i , int sum){
    for(int j =i ;j<n;j++){
    	if(sum + a[j] > k) break ;
    	v.push_back(a[j]) ;
    	if(sum + a[j] == k){
    		ok = 1 ;
			cout << "[" ;
			for(int k=0;k<v.size();k++){
				cout << v[k]  ;
				if(k != v.size()-1) cout << " " ;
			}
			cout << "] " ;	
		}
		else Try(j+1,sum + a[j]) ;
		v.pop_back() ;
	}
}
int main(){
    int tc ; cin >> tc ;
    while(tc--){
        a.clear() ;
       cin >> n >> k  ;
       for(int i=0;i<n;i++){
       		int x ; cin >> x ;
       		a.push_back(x) ;
	   }
       ok = 0 ;
	   sort(begin(a),end(a)) ;
	   Try(0,0) ;
       if(!ok) cout << -1 ;
	   cout << endl ;
    }
}