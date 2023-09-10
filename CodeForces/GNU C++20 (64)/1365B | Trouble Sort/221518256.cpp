#include <bits/stdc++.h>
using namespace std;
#define int    long long
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
 
void solve () {
    int n; cin >> n;
    vector <pair <int,int>> a(n);
    for (auto &i : a) cin >> i.first;
    for (auto &i :a) cin >> i.second;
    vector <int> v(n);
    for (int i = 0;i < n;i++){
        v[i] = a[i].first;
    }
    if (is_sorted(v.begin() , v.end())) {
        return void(cout << "YES" << endl);
    }
    bool one = 0 , zero = 0;
    for (auto i : a){
        if (i.second) one = 1;
        if (!i.second) zero = 1;
    }
    if (one && zero) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
 
    // freopen("milk.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
     cin >> test_cases;
    while (test_cases--) {
        // burn();
        solve ();
    }
    return 0;
}