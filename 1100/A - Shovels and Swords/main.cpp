#include <bits/stdc++.h>
using namespace std;

void XuLy()
{
    long long a, b;
    cin >> a >> b;
    long long l = 0, r = min(a, b);
    while(l < r)
    {
        long long w = (l + r + 1) / 2;
        long long o = a - w, p = b - w;
        if(p + o < w)
        {
            r = w - 1;
        }
        else
        {
            l = w;
        }
    }
    cout << l << '\n';
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
