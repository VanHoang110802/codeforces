#include <bits/stdc++.h>
using namespace std;

int a[299997], p[200007];
map<int, int>mp;

bool check(int n, int x)
{
    for(int i = 1; i <= n; i++)
    {
        p[i] = a[i];
    }
    int maxn = 0, pos, num = 0;
    for(int i = n; i >= 1; )
    {
        if(mp[p[i]] > maxn)
        {
            maxn = mp[p[i]];
            pos = i;
        }
        num++;
        i -= mp[p[i]];
    }
    if(maxn < x)
    {
        return false;
    }
    if(mp[p[pos]] == x)
    {
        num--;
    }
    return (num >= x);
}

void XuLy()
{
    int n;
    cin >> n;
    mp.clear();
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a + 1, a + n + 1);
    int l = 0, r = n, mid, ans;
    while(l < r)
    {
        mid = (l + r) / 2;
        if(check(n, mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid;
        }
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
