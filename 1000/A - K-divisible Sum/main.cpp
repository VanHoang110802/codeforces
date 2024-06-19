#include <bits/stdc++.h>
using namespace std;

void XuLy()
{
    long long n, k, Left = 0, Right = 1000000000;
    cin >> n >> k;
    long long cF = (long long)(ceil(double(n) / k));
    while(Right - Left > 1)
    {
        long long mid = Left + ((Right - Left) >> 1);
        if(mid >= cF)
        {
            Right = mid;
        }
        else
        {
            Left = mid;
        }
    }
    double s = double(Right) * k;
    cout << (long long)(ceil(s / n)) << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test; cin >> test; while(test--)
    {
        XuLy();
    }
    return 0;
}
