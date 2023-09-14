#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
 
std::map<int, int> primeFactorization(int n) {
    std::map<int, int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 1) {
        factors[n]++;
    }
    return factors;
}
 
int numberOfDivisors(const std::map<int, int>& factors) {
    int numOfDivisors = 1;
    for (const auto& factor : factors) {
        numOfDivisors *= (factor.second + 1);
    }
    return numOfDivisors;
}
 
void generateDivisorsHelper(const std::map<int, int>& factors, std::vector<int>& divisors, int currentDivisor, const std::map<int, int>::const_iterator& it) {
    if (it == factors.end()) {
        divisors.push_back(currentDivisor);
        return;
    }
    for (int i = 0; i <= it->second; ++i) {
        generateDivisorsHelper(factors, divisors, currentDivisor, std::next(it));
        currentDivisor *= it->first;
    }
}
 
std::vector<int> generateDivisors(const std::map<int, int>& factors) {
    std::vector<int> divisors;
    generateDivisorsHelper(factors, divisors, 1, factors.begin());
    return divisors;
}
 
void solve () {
    int a , b , c;
    cin >> a >> b >> c;
    int mod = 1073741824;
    long long ans = 0;
    for (int i = 1;i <= a; i++){
        for (int j = 1; j <= b; j ++){
            for (int k = 1; k <= c; k++){
                map <int,int> primefactor = primeFactorization(i * j * k);
                int NumOfDivisors = numberOfDivisors(primefactor);
                ans += NumOfDivisors;
                ans %= mod;
            }
        }
    }
    cout << ans << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}