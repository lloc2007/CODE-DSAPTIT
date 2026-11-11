#include <bits/stdc++.h>
using namespace std ;

vector<pair<int,int>> canh ;

int main(){
    int n ; cin >> n ;
    cin.ignore() ;
    for(int i=1;i<=n;i++){
        string s ; getline(cin,s) ;
        stringstream ss(s) ;
        string w ;
        while(ss >> w){
            int x = stoi(w) ;
            if(i<x) canh.push_back({i,x}) ;
        }
    }
   for(auto it : canh){
    cout << it.first << " " << it.second << endl ;
   }
}