/**
 * 三角形
 * 
 * 有n根棍子，棍子i的长度为ai，想要从中选出3根棍子组成周长尽可能长的三角形。
 * 请输出最大的周长，若不行输出0
 * 
 * 3 ≤ n ≤ 100
 * 1 ≤ ai ≤ 10^6 
*/
#include <bits/stdc++.h>
#define MAXNUM 100
using namespace std;

int n, a[MAXNUM];

int main()
{
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    for (int i = 0; i < n - 2; i++)
    {
        if ((a[i] + a[i + 1]) > a[i + 2])
        {
            int l = a[i] + a[i + 1] + a[i + 2];
            ans = max(l, ans);
        }
    }
    cout << ans;
    return 0;
}