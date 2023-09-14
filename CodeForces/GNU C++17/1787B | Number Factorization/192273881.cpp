#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long long
#define lll __int128
//#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
vector<int> primeFactor (int n){
    vector<int> ret;
    for (int i = 2;i <= n / i;i+= 1 + (i & 1)){
        while (n % i == 0){
            ret.emplace_back(i);
            n /= i;
        }
    }
    if (n > 1) ret.emplace_back(n);
    return ret;
}
int p (int a , int b){
    for (int i = 1; i <= b; i++){
        a *= a;
    }
    return a;
}
void solve () {
    int n;
    cin >> n;
    vector<pair< int , int >> all;
    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            int count = 0;
            while (n % p == 0) {
                count++;
                n /= p;
            }
            all.emplace_back(p, count);
        }
    }
    if (n > 1) all.emplace_back(n , 1);
    int ans {};
    while (true){
        int product = 1;
        for (pair<int,int> & p : all){
            if (p.second > 0){
                product *= p.first;
                p.second--;
            }
        }
        if (product == 1) break;
 
        ans += product;
    }
    cout << ans << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve ();
    }
    return 0;
}