#include <bits/stdc++.h>
using namespace std;

void XuLy()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    long long ans = 0;
    for(int j = 1; j < n; j++)
    {
        long long wl = lower_bound(a.begin(), a.begin() + j, (long long)l - a[j]) - a.begin();
        long long wr = upper_bound(a.begin(), a.begin() + j, (long long)r - a[j]) - a.begin();
        ans += (wr - wl);
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int test; cin >> test; while(test--)
    {
        XuLy();
    }
    return 0;
}
