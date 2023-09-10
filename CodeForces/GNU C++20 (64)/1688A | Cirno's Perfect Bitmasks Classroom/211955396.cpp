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
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1000 + 5 , OO = 0x3F3F3F3F;
const int MAXN = 2e5 + 5;
 
int find_leftmost_bit (int Xor){
    int cnt {};
    while (Xor){
        if (Xor & 1) break;
        cnt ++;
        Xor >>= 1;
    }
    return cnt;
}
int setBit_1(int num , int index){
    return num | ( 1 << index);
}
int check_Num_Pow_Of_2_Or_Not(int num){
    return !(num & num -1);
}
bool checkBit_index(int num  , int index){
    return (num >> index) & 1;
}
void burn () {
    int n;
    cin >> n;
    if (n == 1 || n == 2) return void (cout << 3 << endl);
    if (n & 1) return void (cout << 1 << endl);
    int x = n , cnt = 0 , bits = 0;
    if (check_Num_Pow_Of_2_Or_Not(n)) return void (cout << n + 1 << endl);
 
    for (int bits = 0; bits < 31; bits ++){
        if (checkBit_index(n , bits) == 1)
            return void (cout << (1 << bits) << endl);
    }
 
 
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
     cin >> test_cases;
    while (test_cases--) {
        burn();
        // solve ();
    }
    return 0;
}