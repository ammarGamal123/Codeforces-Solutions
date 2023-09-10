#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n, k, x;
    cin >> n >> k >> x;
    if (x >= 2){
      cout << "YES" << endl;
      cout << n << endl;
      for (int j = 0; j < n; j++){
        cout << 1;
        if (j < n - 1){
          cout << ' ';
        }
      }
      cout << endl;
    } else if (n == 1){
      cout << "NO" << endl;
    } else if (n % 2 == 0){
      if (k == 1){
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        for (int j = 0; j < n / 2; j++){
          cout << 2;
          if (j < n / 2 - 1){
            cout << ' ';
          }
        }
        cout << endl;
      }
    } else {
      if (k <= 2){
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
        cout << (n - 1) / 2 << endl;
        cout << 3;
        for (int j = 0; j < (n - 3) / 2; j++){
          cout << ' ' << 2;
        }
        cout << endl;
      }
    }
  }
}