#include <bits/stdc++.h>
using namespace std;

int n, k, s, cnt, sum;
int a[20];

void Try(int i) {
    for (int j = a[i-1] + 1; j <= n - k + i; j++) {   // cận 2 nằm ngay ở điều kiện vòng for
        if (sum + j > s) break;                       // cận 1
        a[i] = j;
        sum += j;
        if (i == k) {
            if (sum == s) cnt++;
        } else {
            Try(i + 1);
        }
        sum -= j;                                     // quay lui: trả lại tổng
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (cin >> n >> k >> s) {
        if (n == 0 && k == 0 && s == 0) break;
        cnt = 0;
        sum = 0;
        a[0] = 0;          // để a[0] + 1 = 1 cho phần tử đầu tiên
        Try(1);
        cout << cnt << "\n";
    }
}