#include <bits/stdc++.h>
using namespace std;
#define int  long long
#define endl '\n'
#define ll long long
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
 
void solve () {
    int n; cin >> n;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    if (n == 1 && a.front() != 1)
        return void (cout << "NO" << endl);
    if (n == 1 && a.front() == 1){
        return void (cout << "YES" << endl);
    }
    if (a.size() != a.front())
        return void (cout << "NO" << endl);
 
    vector <int> hor;
 
    for (int i = n - 1; i >= 0; i--){
        while (hor.size() < a[i]){
            hor.emplace_back(i + 1);
        }
    }
 
    for (int i = 0;i < n;i++){
        if (a[i] != hor[i]){
            return void (cout << "NO" << endl);
        }
    }
    cout << "YES" << endl;
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