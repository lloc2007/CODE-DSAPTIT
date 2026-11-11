#include <bits/stdc++.h>
using namespace std ;
string s ;
vector<string> v ;
int n , k ; 
int x[1005] ;
set<string> se ;
void Try(int i){
    for(int j=x[i-1] + 1 ; j <=n-k+i ;j++){
        x[i] = j ;
        if(i==k){
            for(int u= 1 ; u<=k ;u++){
                
                	cout << v[x[u]] << " " ;
				
            }
            cout << endl ;
        } else{
            Try(i+1) ;
        }

    }
}
int main(){
    cin >> n >> k ;
    cin.ignore() ;
    getline(cin,s) ;
    stringstream ss(s) ;
    string tmp ;
    v.push_back("@") ;
    while(ss >> tmp){
        se.insert(tmp) ;
    }
    for(auto it : se) v.push_back(it) ;
    n = v.size() - 1 ;
    Try(1) ;
}