//In the name of God
 
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;
#define mp make_pair
#define lol long long
 
int main()
{
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int ans=0,now=0;
  for(int i=1;i<=n;i++)
    {
      int x,y;
      cin>>x>>y;
      now-=x;
      now+=y;
      ans=max(ans,now);
    }
  cout<<ans<<endl;
  return 0;
}