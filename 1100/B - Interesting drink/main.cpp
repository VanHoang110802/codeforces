#include <bits/stdc++.h>
using namespace std;

int a[100007], p[100007];

void XuLy()
{
    int n, m;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    cin >> m;
    for(int i = 1; i <= m; i++)
    {
        int ans = 0, x, L = 1, R = n, mid;
        cin >> x;
        while(L <= R)
        {
            mid = (L + R) / 2;
            if(a[mid] <= x)
            {
                L = mid + 1;
                ans = mid;
            }
            else R = mid - 1;
        }
        cout << ans << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    //int test; cin >> test; while(test--)
    {
        XuLy();
    }
    return 0;
}
