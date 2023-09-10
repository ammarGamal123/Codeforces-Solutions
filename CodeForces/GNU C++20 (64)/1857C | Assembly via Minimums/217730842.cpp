#include <bits/stdc++.h>
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define ll long long
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define no return void (cout << "NO" << endl)
#define yes return void (cout << "YES" << endl)
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr = 27;
const int NN = 1000 + 5 , OO = 0x3F3F3F3F;
const int MAXN = 2e5 + 5;
 
void burn () {
    string s; cin >> s;
   // reverse(all(s));
    if (*max_element(all(s)) < '5')
        return void (cout << s << endl);
    if (s.front() >= '5'){
        cout << 1;
        for (int i = 0; i < s.size(); i++){
            cout << 0;
        }
        cout << endl;
        return;
    }
    int idx = -1;
    for (int i = 1; i < s.size(); i++){
        if (s.front() >= '5'){
            cout << 1;
            for (int i = 0; i < s.size(); i++){
                cout << 0;
            }
            cout << endl;
            return;
        }
        else if (s[i] >= '5'){
            for (int j = i;j >= 0; j--){
                while (s[j--] >= '5') idx = j;
            }
            int x = s[idx] - '0';
            x ++;
            s[idx] = x + '0';
        }
    }
    cout << s << endl;
}
void solve (){
    int n; cin >> n;
    int N = (n * (n - 1)) / 2;
    vector <int> a(N);
    map <int,int> mp;
    int Max = INT_MIN;
    for (auto &i : a){
        cin >> i;
        mp[i] ++;
        Max = max (i , Max);
    }
 
   /*
    vector<int> ans;
    int pos = n - 1;
    for (auto [el, cnt]: mp) {
        if (cnt != pos) {
            int x = 0, npos = pos;
            for (; npos > 0 and cnt != x; npos--) {
                ans.push_back(el);
                x += npos;
            }
            pos = npos;
            continue;
        }
        pos--;
        ans.push_back(el);
    }
    */
    int dist = n - 1;
    vector <int> need;
    for (auto i : mp) {
        if (i.second != dist) {
            int x = 0;
            int pos = dist;
            for (; pos > 0 && i.second != x; pos--) {
                need.emplace_back(i.first);
                x += pos;
            }
            dist = pos;
            continue;
        }
            dist--;
            need.emplace_back(i.first);
    }
    while (need.size() < n) need.push_back(Max);
    for (auto i: need) cout << i << " ";
    cout << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
     cin >> test_cases;
    while (test_cases--) {
        // burn();
        solve ();
    }
    return 0;
}