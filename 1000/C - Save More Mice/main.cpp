#include <bits/stdc++.h>
using namespace std;

long long a[400010];

bool Check(int mid, int n, int k)
{
    long long sum = 1;
    for(int i = k - mid + 1; i <= k; ++i)
    {
        sum += (long long)n - a[i];
    }
    return (sum <= n);
}

void XuLy()
{
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= k; ++i)
    {
        cin >> a[i];
    }

    sort(a + 1, a + k + 1);

    int Left = 1, Right = k;
    while(Left < Right)
    {
        int mid = (Left + Right + 1) >> 1;
        if(Check(mid, n, k))
        {
            Left = mid;
        }
        else
        {
            Right = mid - 1;
        }
    }
    cout << Left << '\n';
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
