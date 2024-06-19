#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m, a;
    cin >> n >> m >> a;
    long long x = n / a, y = m / a;

    if(n % a) x++;
    
    if(m % a) y++;

    cout << x * y;
    return 0;
}
