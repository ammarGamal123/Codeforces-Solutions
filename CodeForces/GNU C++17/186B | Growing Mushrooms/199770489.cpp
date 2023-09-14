#include <bits/stdc++.h>
#include <tr1/unordered_map>
 
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
struct result {
    double rank , ai , bi;
};
bool comp (pair <int,double> a , pair <int,double> b) {
    int fst = a.second * 100;
    int scd = b.second * 100;
    if (fst == scd) return a.first < b.first;
    else return a.second > b.second;
}
void solve () {
    double n , t1 , t2 , k;
    cin >> n >> t1 >> t2 >> k;
    vector <result> a (n);
    for (int i = 0; i < n;i++){
        double Ai , Bi;
        cin >> Ai >> Bi;
        a[i].rank = i + 1;
        a[i].ai = Ai , a[i].bi = Bi;
    }
    vector < pair <int,double> > ans;
 
    for (int i = 0;i < n; i++){
        int fst = a[i].ai * t1;
        double scd = (100 - k) / 100;
        int thrd = a[i].bi * t2;
        double total1 = (double (fst) * scd) + double (thrd);
 
        int fst2 = a[i].bi * t1;
        double scd2 = (100 - k) / 100;
        int thrd2 = a[i].ai * t2;
        double total2 = (double (fst2) * scd2) + double (thrd2);
        ans.emplace_back(a[i].rank , max (total1 , total2));
    }
    sort (all(ans) , comp);
    for (auto i : ans ){
        cout << i.first << " " << fixed << setprecision (2) << i.second << endl;
    }
    cout << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("mex.in" , "r" , stdin );
    //  cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}