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
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1000 + 5 , OO = 0x3F3F3F3F;
int check_Num_Pow_Of_2_Or_Not(int num){
    return !(num & num -1);
}
int countBits(int number) {
    int count = 0;
 
    while (number != 0) {
        number >>= 1;  // Right shift by 1 bit
        count++;
    }
 
    return count;
}
void print_Number(int n){
    if (n <= 1) {
        cout << n;
        return;
    }
    print_Number(n >> 1);
    cout << (n & 1) ;
}
 
void burn () {
    int n , k , g;
    cin >> n >> k >> g;
    int total = k * g;
    int equal = (g + 1) / 2;
    equal --;
    if (!equal){
        return void (cout << 0 << endl);
    }
    int can = (total / equal);
    int people = min (can , (n - 1));
    int last = (total - (people * equal));
    if (last % g < (equal + 1)){
        cout << total - (last - (last % g)) << endl;
    }
    else cout << total - (last + (g - (last % g))) << endl;
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