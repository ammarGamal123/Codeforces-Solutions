#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbeg    in(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 7000000 , OO = 0x3F3F3F3F;
 
void solve () {
 
    int n;
    cin >> n;
 
    vector <int> a(n);
    for (auto &i : a)
        cin >> i;
 
    if (n == 1){
        cout << -1 << endl;
        return;
    }
    set <int> st;
 
    for (auto i : a)
        st.insert(i);
 
    vector <int> ans;
    for (int i = 0;i < n - 2; i++){
        for (auto it : st){
            if (it != a[i]){
                ans.emplace_back(it);
                st.erase(it);
                break;
            }
        }
    }
    int x = *st.begin();
    st.erase(st.begin());
    int y = *st.begin();
    if (a[n - 2] != x && a[n - 1] != y)
        ans.push_back(x) , ans.push_back(y);
    else ans.push_back(y) , ans.push_back(x);
 
    for (auto i : ans )
        cout << i << " ";
    cout << endl;
}
void solve1 (){
 
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
      cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}