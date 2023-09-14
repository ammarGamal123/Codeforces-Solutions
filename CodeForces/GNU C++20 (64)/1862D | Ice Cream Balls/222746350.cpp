#include <bits/stdc++.h>
using namespace std;
#define int  unsigned long long
#define endl '\n'
#define ll long long
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
int n;
bool can (int mid){
    return (((unsigned long long)mid * (mid - 1)) / 2  <= n);
}
void solve () {
     cin >> n;
    int l = 0 , r = 3e9 + 5;
    int ans = LONG_LONG_MAX;
    while (l <= r){
        const int mid = (l + r) / 2;
        if (can(mid) ){
            //cout << mid << endl;
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans + (n - (ans * (ans - 1) / 2)) << endl;
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