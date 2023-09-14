#include <bits/stdc++.h>
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
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
const int N1 = 2e5 + 7, Mod = 1e7 , inf = 1e9 , bitstr= 27;
const int NN = 1000 + 5 , OO = 0x3F3F3F3F;
 
void burn () {
    int n; cin >> n;
    vector <int> a (n);
    for (auto &i : a) cin >> i;
    sort (a.begin() , a.end());
    int times = 0;
    map <int,int> cur;
    if (a[0] != 1) times += a[0] - 1;
    cur[1] ++;
    for (int i = 1; i < n ;i++){
        auto last = cur.end();
        --last;
        int prev = last->first;
        if (a[i] - prev > 1){
            times += a[i] - prev - 1;
            cur[prev + 1];
 
        }
        else {
            cur[a[i]] ++;
        }
    }
 
    cout << times << endl;
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