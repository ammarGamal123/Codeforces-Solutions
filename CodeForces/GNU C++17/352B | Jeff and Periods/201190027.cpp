#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
bool comp (pair <int,int> p1 , pair <int,int> p2){
    if (p1.first < p2.first){
        return p1.first < p2.first;
    }
    else {
        if (p1.second == 0 && p2.second == 0)
            return p1.first < p2.first;
        if (p1.second > 0 && p2.second > 0)
            return p1.first < p2.first;
 
    }
}
void solve () {
    int n;
    cin >> n;
    vector <int> a (n);
    vector < pair <int,int> > ans;
    map <int,vector <int> > mp;
    for (int i = 0;i < n; i++) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    for (auto i : mp){
        if (i.second.size() == 1){
            ans.emplace_back(i.first , 0);
        }
        else {
            int fixed = i.second[1] - i.second[0];
            bool valid = true;
            for (int j = 1; j < i.second.size(); j++){
                if (i.second[j] - i.second[j - 1] != fixed) {
                    valid = false;
                    break;
                }
            }
            if (valid){
                ans.emplace_back(i.first , i.second[1] - i.second[0]);
            }
        }
    }
    if (!ans.size() ){
        cout << 0 << endl;
        return;
    }
    sort (all(ans) , comp);
    cout << ans.size() << endl;
    for (auto i : ans){
        cout << i.first << " " << i.second << endl;
    }
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
 
    // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}