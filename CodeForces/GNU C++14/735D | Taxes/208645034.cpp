#include <bits/stdc++.h>
using namespace std;
 
#define loop(i,n) for(int i = 0;i < int(n);i++)
#define rloop(i,n) for(int i = int(n);i >= 0;i--)
#define range(i,a,b) for(int i = int(a);i <= int(b);i++)
#define INF 1e9
#define SZ(c) int(c.size())
#define ALL(c) c.begin(), c.end()
#define RALL(c) c.rbegin(), c.rend()
#define PI acos(-1)
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
 
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;
typedef long long ll;
typedef pair<int, int> pii;
 
const int N = 1e8;
bool prime[N+5];
vi primes;
 
 
void sieve() {
    memset(prime, -1, N * sizeof(prime[0]));
    prime[0] = prime[1] = false;
    int sqrtN = (int) sqrt((double) N);
    for (int i = 2; i <= sqrtN; i++)
    if (prime[i])
        for (int j = i * i; j < N; j += i)
    prime[j] = false;
 
    loop(i,N)
        if(prime[i])
            primes.pb(i);
 
}
 
 
bool is_prime(ll r){
 
    if(r < N)return prime[r];
 
    if(r %2 == 0)return 0;
    loop(i,SZ(primes))
        if(r%primes[i] == 0)
            return 0;
 
    return 1;
}
 
 
 
int main()
{
 
#ifndef ONLINE_JUDGE
 freopen("in.in", "r", stdin);
 //freopen("out.in", "w", stdout);
#endif
 
    sieve();
    ll n , ans = 0;
    cin >> n;
 
    if(is_prime(n))puts("1");
    else if(n%2 == 0)puts("2");
    else{
        int ans = 3;
        range(i,2,1e8){
            if(i > n-i)break;
            if(is_prime(i) && is_prime(n-i)){
                ans = 2;
                break;
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}
 