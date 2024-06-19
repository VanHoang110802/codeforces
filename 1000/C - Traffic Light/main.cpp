#include <bits/stdc++.h>
using namespace std;

void XuLy()
{
    int n;
    char c;
    string str;
    cin >> n >> c >> str;
    str += str;
    //cout << "\n\n" << str << '\n';
    int mx = -1;
    if(c == 'g')
    {
        cout << "0\n";
        return;
    }

    vector<int> freq_g;
    for (int i = 0; i < str.size(); ++i)
    {
        if(str[i] == 'g')
        {
            freq_g.push_back(i);
        }
    }

    for(int i = 0; i < n; ++i)
    {
        if(str[i] == c)
        {
            int Left = -1, Right = freq_g.size(), ans = -1;
            while(Right - Left > 1)
            {
                int mid = Left + ((Right - Left) >> 1);
                if(freq_g[mid] >= i)
                {
                    Right = mid;
                    ans = freq_g[Right];
                }
                else
                {
                    Left = mid;
                }
            }

            mx = max(mx, ans - i);
        }
    }
    cout << mx << '\n';
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
