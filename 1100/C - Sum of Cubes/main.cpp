#include <bits/stdc++.h>
using namespace std;

long long x;

long long val(long long a, long long b)
{
    return (pow(a, 3) + pow(b, 3));
}

bool good(long long a)
{
    long long s = 1, e = 100000;
    while(e > s + 1)
    {
        long long mid = (s + e) / 2;
        if(val(a, mid) <= x)
        {
            s = mid;
        }
        else e = mid;
    }
    if(val(a, s) == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void XuLy()
{
    cin >> x;
    bool flag = false;
    for(long long i = 1; i <= 10000; i++)
    {
        if(good(i))
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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
