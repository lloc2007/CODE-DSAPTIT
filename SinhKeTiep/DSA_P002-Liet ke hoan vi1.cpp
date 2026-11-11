#include <bits/stdc++.h>
using namespace std;

int n, a[1005], ok;

void ktao() {
    for (int i = 1; i <= n; i++) a[i] = i;
}

void sinh() {
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1]) i--;
    if (i == 0) {
        ok = 0;
        return;                     
    }
    int j = n;
    while (a[j] < a[i]) j--;
    swap(a[i], a[j]);
    reverse(a + i + 1, a + n + 1);  
}

int main() {
    cin >> n;
    ok = 1;
    ktao();
    int cnt = 1;
    while (ok) {
        cout << cnt << ": ";
        for (int i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << "\n";
        cnt++;
        sinh();
    }
}