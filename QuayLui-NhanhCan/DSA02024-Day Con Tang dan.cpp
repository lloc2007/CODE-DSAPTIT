#include <bits/stdc++.h>
using namespace std ;
int a[1005] ;
int n ;
vector<string> v ;

void Try(int i , vector<int> tmp){
	for(int j = i ; j <= n ; j++){
		if(tmp.size()==0 || a[j] > tmp.back() ){
			tmp.push_back(a[j]) ;
			if(tmp.size() >=2){
				string s ="" ;
				for(int k = 0 ; k<tmp.size();k++){
					if(k) s += " " ;
					s += to_string(tmp[k]) ;
				}
				v.push_back(s) ;
			}
		 Try(j+1,tmp) ;
			tmp.pop_back() ;
		}
	}
}
int main(){
	cin >> n ;
	for(int i=1;i<=n;i++){
		cin >> a[i] ;
	}
	vector<int> dx ;
	Try(1,dx) ;
	sort(v.begin(),v.end()) ;
	for(int i=0;i<v.size();i++){
		cout << v[i] << endl ;
	}
	}