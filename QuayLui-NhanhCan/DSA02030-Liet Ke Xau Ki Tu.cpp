#include <bits/stdc++.h>
using namespace std ;
int k ;
char c ;
string s ;
vector<char> v  ;
vector<string> ss ;
void Try(int i){
    for(int j = i ; j < v.size() ;j++ ){
        s += v[j] ;
        if(s.size()==k){
            ss.push_back(s) ;
        }
        else Try(j) ;
        s.pop_back() ;
    }
}
int main(){
    cin >> c >> k ;
    
    for(char i = 'A' ; i <= c ;i++){
        v.push_back(i) ;
    }
    Try(0) ;
	sort(ss.begin(),ss.end()) ;
	for(auto it : ss) cout << it << endl;
}