#include <bits/stdc++.h>
using namespace std;
#define int  long long
#define endl '\n'
#define ll long long
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
 
void solve () {
    int n; cin >> n;
    vector <int> b (n);
    for (auto &i : b) cin >> i;
 
    vector <int> a {b.front()};
 
    for (int i = 1; i < n; i++){
        if (b[i] >= a.back())
            a.emplace_back(b[i]);
        else {
            a.emplace_back(b[i]);
            a.emplace_back(b[i]);
        }
    }
    cout << a.size() << endl;
    for (auto i : a) cout << i << " ";
    cout << endl;
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