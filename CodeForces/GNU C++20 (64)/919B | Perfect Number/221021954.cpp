#include <bits/stdc++.h>
using namespace std;
#define int    long long
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
 
int sum_digits(int n){
    string s = to_string(n);
    int sum {};
    for (auto &i : s) sum += (i - '0');
    return sum;
}
void solve () {
    int n; cin >> n;
    int cnt = 1;
    for (int i = 19; i < (int)2e7; i++){
        if (sum_digits(i) == 10 && (cnt == n)){
            return void (cout << i << endl);
        }
        else if (sum_digits(i) == 10) cnt ++;
    }
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
 
    // freopen("milk.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    // cin >> test_cases;
    while (test_cases--) {
        // burn();
        solve ();
    }
    return 0;
}