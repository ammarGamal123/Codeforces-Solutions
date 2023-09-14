#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
bool check_palindrome (const string &s){
    int n = s.size();
    for (int i = 0; i < n;i ++){
        if (s[i] != s[n - i - 1]) return false;
    }
    return true;
}
void solve () {
    int n , m;
    cin >> n >> m;
    int twos ;
    int div = n / m;
    int rem = n % m;
    int num = m - rem;
    twos = div * m * (div - 1) / 2;
    if (n % m ){
        twos += div * rem;
    }
    int kmax = n - (m - 1);
    kmax = (kmax * (kmax - 1)) / 2;
    cout << twos << " " << kmax << endl;    
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}