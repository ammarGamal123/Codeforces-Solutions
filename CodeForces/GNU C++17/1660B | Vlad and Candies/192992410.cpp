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
void solve (){
    int n;
    cin >> n;
    priority_queue<int> pq;
    vector <int> a;
    for (int i = 0;i < n;i++){
        int x;
        cin >> x;
        pq.push(x);
        a.emplace_back(x);
    }
    if (n == 1){
        if (a[0] != 1){
            cout << "NO" << endl;
            return;
        }
        else {
 
            cout << "YES" << endl;
            return;
        }
    }
    sort (all(a));
    if (a[n - 2] + 1 < a[n - 1]){
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;
 
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