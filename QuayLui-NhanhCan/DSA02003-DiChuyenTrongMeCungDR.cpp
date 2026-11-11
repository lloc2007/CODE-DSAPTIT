#include <bits/stdc++.h>
using namespace std;

int n, a[1005][1005];
int dx[] = {1, 0}, dy[] = {0, 1};   // D rồi R -> thứ tự từ điển
string S = "DR", s;
bool found;

void loang(int i, int j) {
    if (i == n - 1 && j == n - 1) {
        cout << s << ' ' ;
        found = true;
        return;
    }
    for (int k = 0; k < 2; k++) {
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 < n && j1 < n && a[i1][j1] == 1) {   // <-- chỗ sửa
            s += S[k];
            loang(i1, j1);
            s.pop_back();
        }
    }
}

int main() {
    
    int t; cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) cin >> a[i][j];

        found = false; s = "";
        if (a[0][0] == 1) loang(0, 0);   // ô xuất phát phải là 1
        if (!found) cout << -1;
        cout << '\n';
    }
}
