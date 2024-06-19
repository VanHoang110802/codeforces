#include <bits/stdc++.h>
using namespace std;

string s;
int sum1[200009], sum2[200009], sum3[200009];

int check(int x)
{
    for (int i = 1; i <= s.size() - x; i++)
    {
        if (sum1[i + x - 1] - sum1[i - 1] && sum2[i + x - 1] - sum2[i - 1] && sum3[i + x - 1] - sum3[i - 1])
        {
            return 1;
        }
    }
    return 0;
}

void XuLy()
{
    cin >> s;
    s = " " + s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            sum1[i] = sum1[i - 1] + 1;
            sum2[i] = sum2[i - 1];
            sum3[i] = sum3[i - 1];
        }
        else if(s[i]=='2')
        {
            sum1[i] = sum1[i - 1];
            sum2[i] = sum2[i - 1] + 1;
            sum3[i] = sum3[i - 1];
        }
        else
        {
            sum1[i] = sum1[i - 1];
            sum2[i] = sum2[i - 1] ;
            sum3[i] = sum3[i - 1]+1;
        }
    }
    int l = 0, r = s.size();
    while(r - l > 1)
    {
        int mid = (l + r) / 2;
        if(check(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    if(r == s.size())
    {
        cout << "0\n";
    }
    else
    {
        cout << r << '\n';
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
