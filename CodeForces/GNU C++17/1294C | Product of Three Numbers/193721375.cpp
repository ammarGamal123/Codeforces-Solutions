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
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
vector<int> primeFactor (int n){
    vector<int> ret;
    for (int i = 2;i <= n / i;i+= 1 + (i & 1)){
        while (n % i == 0){
            n /= i;
            ret.emplace_back(i);
        }
    }
    if (n > 1) ret.emplace_back(n);
    return ret;
}
void solve (){
    int n;
    cin >> n;
    vector <int> a = primeFactor(n);
    if (a.size() >= 3) {
        if (a[0] == a[1]) {
            a[1] = a[1] * a[2];
            int lst = 1;
            for (int i = 3; i < a.size(); i++) {
                lst *= a[i];
            }
            if (lst == 1 || lst == a[1] || lst == a[0]) {
                cout << "NO" << endl;
                return;
            } else {
                cout << "YES" << endl;
                cout << a[0] << " " << a[1] << " " << lst << endl;
                return;
            }
        }
        else {
            int lst = 1;
            for (int i = 2; i < a.size(); i++){
                lst *= a[i];
            }
            if (lst == a[0] || lst == a[1]){
                cout << "NO" << endl;
                return;
            }
            else {
                cout << "YES" << endl;
                cout << a[0] << " " << a[1] << " " << lst << endl;
                return;
            }
        }
    }
    else {
        cout << "NO" << endl;
        return;
    }
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}