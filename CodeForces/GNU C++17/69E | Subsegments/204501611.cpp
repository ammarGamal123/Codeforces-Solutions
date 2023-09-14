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
 
    int n , k;
    cin >> n >> k;
 
    vector <int> a(n);
    map <int,int> mp;
    set <int> st;
 
    for (int i = 0;i < n; i++){
        cin >> a[i];
    }
 
    for (int i = 0; i < k; i++){
        mp[a[i]]++;
        if (mp[a[i]] == 1){
            st.insert(a[i]);
        }
        else if (mp[a[i]] == 2) st.erase(a[i]);
    }
 
    int i = 0 , j = k;
 
    while (true){
        if (st.size()){
            cout << *st.rbegin() << endl;
        }
        else {
            cout << "Nothing" << endl;
        }
 
        if (j == n) break;
 
        mp[a[j]]++;
 
        if (mp[a[j]] == 1) st.insert(a[j]);
        else if (mp[a[j]] == 2) st.erase(a[j]);
 
        j++;
 
        mp[a[i]]--;
 
        if (mp[a[i]] == 1) st.insert(a[i]);
        else if (mp[a[i]] == 0) st.erase(a[i]);
 
        i++;
    }
 
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