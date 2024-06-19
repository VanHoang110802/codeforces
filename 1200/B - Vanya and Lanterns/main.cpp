#include <bits/stdc++.h>
using namespace std;

double a[1007];

bool Check(double mid, int n, int m)
{
    if(mid < a[0])
    {
        return false;
    }

    if(mid < m - a[n - 1])
    {
        return false;
    }
    for(int i = 1; i < n; ++i)
    {
        if((a[i] - a[i - 1]) / 2.0 > mid)
        {
            return false;
        }
    }
    return true;
}

void XuLy()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    double Left = 0, Right = (double)m;
    for(int i = 0; i < 70; ++i)
    {
        double mid = (Left + Right) / 2;
        if(Check(mid, n, m))
        {
            Right = mid;
        }
        else
        {
            Left = mid;
        }
    }
    cout << fixed << setprecision(10) << Right << '\n';
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
