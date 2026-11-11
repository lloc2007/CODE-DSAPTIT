#include <bits/stdc++.h>
using namespace std ;
char c ;
int ok , vs[1005] ;
vector<char> v ;
string s ;
vector<string> ss ;
void Try(int i){
    for(int j = 0 ; j < v.size() ; j++){
       if(!vs[j]){
        vs[j] = 1 ;
         s += v[j] ;
        if(s.size()==v.size()){
            ok = 0 ;
            int n = s.size() - 1 ;
            if((s[0]=='A'&&s[n]=='E') || (s[0] == 'E' && s[n] == 'A')){
                ss.push_back(s) ;
            }else if((s[0]=='A' && s[1]=='E')||(s[0]=='E'&&s[1]=='A')||(s[n]=='A' && s[n-1]=='E')||(s[n]=='E'&&s[n-1]=='A')){
                ss.push_back(s) ;
            }
            else{
                for(int k = 1 ; k < n ; k++){
                    if(s[k]=='A'&&(s[k-1]=='E'||s[k+1]=='E')){
                        ok = 1 ;
                        break ;
                    }
                }
                if(ok) ss.push_back(s) ;
            }
        }else Try(i+1) ;
        vs[j] = 0 ;
        s.pop_back() ;
       }
    }
}
int main(){
    cin >> c ;
    for(char i = 'A' ; i<=c ;i++){
        v.push_back(i) ;
    }
    Try(0) ;
    sort(ss.begin(),ss.end()) ;
    for(auto it : ss) cout << it << endl ;
}