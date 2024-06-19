#include <bits/stdc++.h>
using namespace std;

int n, k, Sum_problems, Sum_times, Begin, End;
struct Team
{
    int Problems, Time;
} ara[55];

bool cmp(const Team &x, const Team &y)
{
    if(x.Problems == y.Problems)
    {
        return x.Time < y.Time;
    }
    return x.Problems > y.Problems;
}

int Types(bool check)
{
    int ans, lo = -1, hi = n;
    while(hi - lo > 1)
    {
        int mid = lo + ((hi - lo) >> 1);
        if(ara[mid].Problems == Sum_problems && ara[mid].Time == Sum_times)
        {
            ans = mid;
            if(check == false)
            {
                hi = mid;
            }
            else
            {
                lo = mid;
            }
        }
        else if(ara[mid].Problems > Sum_problems || ara[mid].Problems == Sum_problems && ara[mid].Time < Sum_times)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    return ans;
}

void XuLy()
{

    cin >> n >> k;
    for(int i = 0; i < n; ++i)
    {
        cin >> ara[i].Problems >> ara[i].Time;
    }

    sort(ara, ara + n, cmp);

    Sum_problems = ara[k - 1].Problems;
    Sum_times = ara[k - 1].Time;


    Begin = Types(false);
    End = Types(true);
    // true - upper_bound, false - lower_bound

    cout << End - Begin + 1 << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //int test; cin >> test; while(test--)
    {
        XuLy();
    }
    return 0;
}
