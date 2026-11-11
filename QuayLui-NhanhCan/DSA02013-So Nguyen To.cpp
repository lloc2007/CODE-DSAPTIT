#include<bits/stdc++.h>
using namespace std ;
int n , p , s ;
const int N = 1e6 + 1 ;
int a[N] ;
vector<int> Prime ;
vector<vector<int>> v ;
void sang(){
	for(int i=0 ;i<=N;i++) a[i] = 1 ;
	a[0] = a[1] = 0 ;
	for(int i = 2 ; i<=sqrt(N) ;i++){
		if(a[i]==1){
			for(int j =i*i ; j<=N ;j+=i){
				a[j]=0 ;
			}
		}
	}
	for(int i = 2 ; i <= sqrt(N) ;i++) {
		if(a[i]) Prime.push_back(i) ;
	}
}
void Try(int i , int sum , vector<int> tmp , int idx ){
	if(i==n){
		if(sum == s) {
			v.push_back(tmp) ;
			return ;
		}
	}
	for(int j = idx ; j < Prime.size() ; j++){
		if(sum + Prime[j] > s) break ;
		if(Prime[j] > p){
			tmp.push_back(Prime[j]) ;
		Try(i+1,sum + Prime[j] , tmp , j + 1 ) ;
		tmp.pop_back() ;
		}
	
	}
}
int main(){
	sang() ;
	int t ; cin >> t ;
	while(t--){
		v.clear() ;
		cin >>  n >> p >> s ;
		vector<int> dx ;
		Try(0,0,dx,0) ;
		cout << v.size() << endl ;
		for(int i = 0 ; i < v.size();i++){
			for(int j=0;j<v[i].size() ;j++){
				cout << v[i][j] << " ";
			}
			cout << endl ;
		}
		cout << endl ;
	}
}