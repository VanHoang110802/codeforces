#include <bits/stdc++.h>
using namespace std;

int Binary_search(vector<int> &a, int x)
{
    if(x >= a.back())
    {
        return a.size() - 1;
    }
    if(x < a.front())
    {
        return -1;
    }

    int l = 0, r = a.size() - 1;

    int res = 0;
    while(l < r)
    {
        int mid = (l + r) / 2;

        if (a[mid] <= x)
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }

    return res;
}

void XuLy()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (auto &i : a)
    {
        cin >> i;
    }

    for (auto &i : b)
    {
        cin >> i;
    }

    sort(a.begin(), a.end());

    for (auto i : b)
    {
        cout << Binary_search(a, i) + 1 << ' ';
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
