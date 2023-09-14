#include <bits/stdc++.h>
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
//#define int    long long
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
/*
 *                _,.---.---.---.--.._
           _.-' `--.`---.`---'-. _,`--.._
          /`--._ .'.     `.     `,`-.`-._\
         ||   \  `.`---.__`__..-`. ,'`-._/
    _  ,`\ `-._\   \    `.    `_.-`-._,``-.
 ,`   `-_ \/ `-.`--.\    _\_.-'\__.-`-.`-._`.
(_.o> ,--. `._/'--.-`,--`  \_.-'       \`-._ \
 `---'    `._ `---._/__,----`           `-. `-\
           /_, ,  _..-'                    `-._\
           \_, \/ ._(
            \_, \/ ._\
             `._,\/ ._\
               `._// ./`-._
                 `-._-_-_.-'
 
*/
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1000 + 5 , OO = 0x3F3F3F3F;
 
void burn () {
    string l, r;
    cin >> l >> r;
    while (l.size() < r.size()){
        l = "0" + l;
    }
    while (r.size() < l.size()){
        r = "0" + r;
    }
    int ans = 0;
    for (int i = 0;i < r.size(); i++){
        ans += abs (l[i] - r[i]);
        if (l[i] != r[i]){
            ans += 9 * (l.size() - i - 1);
            break;
        }
    }
    cout << ans << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    cin >> test_cases;
    while (test_cases--) {
 
        burn();
    }
    return 0;
}