#include <bits/stdc++.h>
using namespace std;

int n;
string s;

bool check(int d)
{
    int i = 0, j = d;
    while(i < j && i <= n)
    {
        i++;
        if(i <= n && s[i - 1] == 'R')
        {
            j = max(j, i + d);
        }
    }
    return i == n + 1;
}

void XuLy()
{
    cin >> s;
    n = s.size();
    int l = 0, r = n + 1;
    while(l < r)
    {
        int m = (l + r) / 2;
        if(check(m))
        {
            r = m;
        }
        else
        {
            l = m + 1;
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
