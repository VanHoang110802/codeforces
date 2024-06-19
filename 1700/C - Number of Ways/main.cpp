#include <bits/stdc++.h>
using namespace std;

void XuLy()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] *= 3;
    }

    long long x = accumulate(a.begin(), a.end(), 0LL);
    x /= 3;

    vector<long long> c, d;
    long long z = 0;

    for(int i = 0; i < n - 1; i++)
    {
        z += a[i];
        if(z == x)
        {
            c.push_back(i);
        }
        if(z == 2 * x)
        {
            d.push_back(i);
        }
    }

    long long res = 0;
    for(long long _x : c) res += d.end() - upper_bound(d.begin(), d.end(), _x);

    cout << res;
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
