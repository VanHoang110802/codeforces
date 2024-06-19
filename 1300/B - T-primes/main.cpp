#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long int

const int N = 1e6+5;
vector<bool> is_prime(N,1);

void sieve()
{
    for (int i = 2; i*i<=N; i++)
    {
        if(is_prime[i])
        {
            for (int j = i*i; j<=N; j+=i)
            {
                is_prime[j] = 0;
            }
        }
    }
}

void solve()
{
    sieve();
    vector<int> primes;
    for(int i = 2; i<=N; i++)
    {
        if(is_prime[i]) primes.push_back(i);
    }
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &_xx : v) cin >> _xx;
    for(auto &x: v)
    {
        int lo = 0, hi = primes.size()-1;
        while(hi-lo>1)
        {
            int mid = (hi+lo)/2;
            if(primes[mid]*primes[mid] > x) hi = mid-1;
            else lo = mid;
        }
        if(primes[lo]*primes[lo] == x or primes[hi]*primes[hi] == x) cout << "YES\n";
        else cout << "NO\n";
    }
}

signed main()
{
    fastio();
    solve();
}
