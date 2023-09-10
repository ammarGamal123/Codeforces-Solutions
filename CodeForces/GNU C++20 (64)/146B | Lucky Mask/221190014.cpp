#include <bits/stdc++.h>
using namespace std;
#define int    long long
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
 
int check (int n){
    string s = to_string(n);
    int mask = 0;
    for (auto i : s){
        if (i == '4' || i == '7'){
            mask *= 10 , mask += (i - '0');
        }
    }
    return mask;
}
void solve () {
    int a , b; cin >> a >> b;
    for (int i = a + 1; i < 1e9; i++){
        if (check(i) == b){
            return void (cout << i << endl);
        }
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