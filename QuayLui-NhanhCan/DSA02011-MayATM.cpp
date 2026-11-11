#include <bits/stdc++.h>
using namespace std;

int n, s, so_to = INT_MAX, a[1005];
int sum, res , ok;
void Try(int i)
{
    if (sum == s)
    {
        so_to = min(so_to, res);
        ok = 1 ;
        return;
    }
    if (sum > s || i == n)
        return;

    for (int j = i; j < n; j++)
    {
        sum += a[j];
        res++;
        Try(j + 1);
        sum -= a[j];
        res--;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ok = 0 ;
        so_to = INT_MAX ;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a,a+n,greater<int>()) ;
        Try(0);
        if(!ok){
            cout << -1 << endl ;
        }else{
            cout << so_to << endl ;
        }

    }
}