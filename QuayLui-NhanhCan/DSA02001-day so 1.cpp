#include <bits/stdc++.h>
using namespace std ;
int n ; 
vector<vector<int>> day ;
void Try(int i){
    if(day[i].size()==1) return ;
    vector<int> v ;
    for(int j=0;j<day[i].size() - 1 ;j++){
        v.push_back(day[i][j+1] + day[i][j]) ;
    }
    day.push_back(v) ;
    Try(i+1) ;
}
int main(){
    int t ; cin >> t ;
    while(t--){
        day.clear() ;
        cin >> n ;
        vector<int> tmp ;
        for(int i=1;i<=n;i++){
            int x ; cin >> x ;
            tmp.push_back(x) ;
        }
        day.push_back(tmp) ;
        Try(0) ;
        for(int i=0;i<day.size() ;i++){
            cout << "[" ;
            for(int j=0;j<day[i].size();j++){
                cout << day[i][j] ;
                if(j!=day[i].size()-1) cout << " " ;
            }
            cout << "]" << endl ;
        }
        cout << endl ;
    }
}