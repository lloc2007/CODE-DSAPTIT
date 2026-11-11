#include<bits/stdc++.h>
using namespace std ;
int a[1000007] , n ;
int ok ;
void sinh(){
	int i =n ;
	while(i>0&&a[i]==1){
		a[i] = 0 ;
		i-- ;
	}
	if(i==0) ok = 0 ;
	a[i]=1 ;
}
int main(){
	cin >> n ;
	int k ; cin >> k ;
	int b[n+1] ;
	for(int i=1;i<=n;i++) cin >> b[i] ;
	ok =1 ;
	int dem = 0 ;
	while(ok){
			vector<int> v ;
	long long sum = 0 ;
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			sum += b[i] ;
			v.push_back(b[i]) ;
		}
	}
	if(sum==k){
		for(int x : v) cout << x << ' ' ;
		cout << endl ;
		dem++ ;
	}
	sinh() ;
	}
	cout << dem ;
}