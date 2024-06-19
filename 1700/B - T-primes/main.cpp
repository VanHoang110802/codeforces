#include <bits/stdc++.h>
using namespace std;

vector<bool> is_prime(1000007, true);
vector<long long> primes;

void sieve()
{
    for (int i = 2; i * i <= 1000007; i++)
    {
        if(is_prime[i])
        {
            for (int j = i * i; j <= 1000007; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for(int i = 2; i <= 1000007; i++)
    {
        if(is_prime[i])
        {
            primes.push_back(i);
        }
    }
}

void XuLy()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];

    for(int x = 0; x < v.size(); ++x)
    {
        int lo = 0, hi = primes.size() - 1;
        while(hi - lo > 1)
        {
            int mid = (hi + lo) / 2;
            if(primes[mid] * primes[mid] > v[x]) hi = mid - 1;
            else lo = mid;
        }

        if(primes[lo] * primes[lo] == v[x] || primes[hi] * primes[hi] == v[x]) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    //int test; cin >> test; while(test--)
    {
        sieve();
        XuLy();
    }
    return 0;
}
