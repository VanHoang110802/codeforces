#include <bits/stdc++.h>
using namespace std;

long long n, k;
char res[300007];

void XuLy()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        res[i] = 'a';
    }

    long long l = 1, r = n - 1, ans = 0, sum = 0;
    while(l <= r)
    {
        long long m = (l + r) / 2, x = n - m;
        if(1LL * x * (x + 1) / 2 >= k)
        {
            ans = m;
            sum = 1LL * x * (x + 1) / 2;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    res[ans] = 'b';
    sum = 1LL * (n - ans) * (n - ans - 1) / 2 + 1;
    int i = n;
    while(sum < k)
    {
        i--, sum++;
    }
    res[i] = 'b';

    for(int i = 1; i <= n; i++)
    {
        cout << res[i];
    }
    cout << '\n';
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
