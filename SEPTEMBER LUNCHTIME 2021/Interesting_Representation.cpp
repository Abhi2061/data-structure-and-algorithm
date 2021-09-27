// Problem link : https://www.codechef.com/LTIME100B/problems/INTREP


#include <bits/stdc++.h>
#define ed "\n"
#define all(x) x.begin(), x.end()
#define input(x)       \
    for (auto &it : x) \
    cin >> it
#define output(x, y)  \
    for (auto it : x) \
    cout << it << y
#define MOD 1e9 + 7

using namespace std;
using ll = long long;

int power(ll x, ll y, ll p)
{
    int res = 1;

    x = x % p;

    if (x == 0)
        return 0;

    while (y > 0)
    {

        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

vector<int> Primes;

void sieve(int n = 1000000)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            Primes.push_back(p);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int T;
    cin >> T;

    while (T--)
    {
        ll N;
        cin>>N;

        ll A, B;

        if(N%2)
        {
            ll p = 1;

            for(; p < 1000000; p++)
            {
                if(N%Primes[p])
                break;
            }

            A = N*Primes[p];
            B = N*(Primes[p]-1);
        }
        else
        {
            A = 2*N;
            B = N;
        }

        cout<<A<<" "<<B<<ed;
    }
    
    return 0;
}