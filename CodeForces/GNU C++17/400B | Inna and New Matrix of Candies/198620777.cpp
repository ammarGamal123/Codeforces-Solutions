#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
 
void solve (){
    int n , m;
    cin >> n >> m;
    vector < vector <char>> a(n , vector <char> (m));
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m; j++){
            cin >> a[i][j];
        }
    }
    set <int> st;
    for (int i = 0;i < n; i ++){
        int idx_G {-1} , idx_S {-1};
        for (int j = 0; j < m;j++){
            if (a[i][j] == 'S' && idx_G == -1){
                cout << -1 << endl;
                return;
            }
            if (a[i][j] == 'G') idx_G = j;
            if (a[i][j] == 'S') idx_S = j;
        }
        st.insert(idx_S - idx_G);
    }
    cout << st.size() << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("mex.in" , "r" , stdin );
    // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}