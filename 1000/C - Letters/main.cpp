#include <bits/stdc++.h>
using namespace std;

long long sp[200007], ktx[200007], pre[200007];
int n, m;

bool Check(long long x, long long y)
{
    return (x >= y);
}

void XuLy()
{
    cin >> n >> m;

    for(int i = 1; i <= n; ++i)
    {
        cin >> sp[i];
        pre[i] = pre[i - 1] + sp[i];
    }

    for(int i = 1; i <= m; ++i)
    {
        cin >> ktx[i];

        int Left = 1, Right = n;

        while(Left + 1 <= Right)
        {
            int mid = Left + ((Right - Left) >> 1);

            if(Check(pre[mid], ktx[i]))
            {
                Right = mid;
            }
            else
            {
                Left = mid + 1;
            }
        }

        cout << Right << ' ' << ktx[i] - pre[Right - 1] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    XuLy();
    return 0;
}
