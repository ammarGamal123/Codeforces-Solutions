#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long long
#define lll __int128
//#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
 
void solve (){
    int n;
    cin >> n;
    vector < vector < int > > a (n , vector < int > (n - 1));
    map < int , int > freq;
    for (int i = 0;i < n;i++){
        for (int j = 0;j < n - 1;j++) {
            cin >> a[i][j];
        }
            freq[a[i][0]]++;
    }
    int p {};
    for (auto i : freq){
        if (i.second > 1){
            p = i.first;
            cout << i.first << " ";
        }
    }
    for (int i = 0;i < n;i++)
        if (a[i][0] != p)
            for (int j : a[i])
                cout << j << " ";
    cout << endl;
 
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}