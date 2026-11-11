#include <bits/stdc++.h>
using namespace std ;
vector<string> sv ;
set<string> ans ;          // sửa: dùng set luôn, khỏi cần res
set<string> se ;
string s , ss ;
int  k , m , n ;
char a[5][5] , vs[5][5] ;
pair<int,int> dx[8] = {{-1,-1} , {-1,0} ,{-1,1} ,{0,-1},{0,1},{1,-1},{1,0},{1,1}} ;
void loang(int i , int j){
	if(se.count(ss)==0) return ;
    for(int index=0 ; index<sv.size();index++){
        if(ss==sv[index]){
            ans.insert(ss) ;
            break ;
        }
    }
    for(int u= 0 ; u<8 ;u++){
        int i1 = i + dx[u].first ;
        int j1 = j + dx[u].second ;
        if(i1>=0 && i1 < m && j1 >=0 && j1 < n && !vs[i1][j1] ){
        	vs[i1][j1] = 1 ;
            ss += a[i1][j1] ;
            loang(i1,j1) ;
            vs[i1][j1] = 0 ;
            ss.pop_back() ;
        }
    }
}
int main(){
    int t ; cin >> t ;
    while(t--){
        se.clear() ;
        ans.clear() ;
        sv.clear() ;
        memset(vs, 0, sizeof(vs)) ;     
        cin >> k >> m >> n ;           
        while(k--){
            cin >> s ;
            sv.push_back(s) ;
			string pre = "";
			for(char c : s){
   			 pre += c;
    		se.insert(pre);
			}
        }
        for(int i =0 ;i<m;i++){
            for(int j=0;j<n;j++) cin >> a[i][j] ;
        }
        for(int i = 0 ; i<m;i++){
        	for(int j=0 ; j<n;j++){
        		ss = string(1,a[i][j]) ;
        		vs[i][j] = 1 ;
        		loang(i,j) ;
        		vs[i][j] =  0 ;
			}
		}
        if(ans.empty()) cout << -1 << endl ;
        else{
            bool first = true ;
            for(auto &it : ans){
                if(!first) cout << " " ;
                cout << it ;
                first = false ;
            }
            cout << endl ;
        }
    }
}