#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
 
const int MAXLEN = 1000000;
const int MAXN = 100000;
 
typedef pair<int,pair<int,int> > Interval;
#define s first
#define e second.first
#define ix second.second
 
int bit[MAXLEN+5];
char str[MAXLEN+5];
int len;
int n;
Interval arr[MAXN+6];
int mate[MAXLEN+5];
int ret;
int from,to;
vector<int> closed,opened;
int ci,oi;
 
void update(int i,int v)
{
 for (i++;i<=len;i+=i&-i)
  bit[i]+=v;
 return ;
}
int query(int i)
{
 if (i < 0)return 0;
 int ret = 0;
 for (i++;i>0;i-=i&-i)
  ret+=bit[i];
 return ret;
}
 
void solve()
{
 memset(bit,0,sizeof(bit));
 memset(mate,-1,sizeof(mate));
 stack<int> open;
 for (int c=0;c<len;c++){
  if (str[c] == '(')
   open.push(c);
  else if (open.empty())continue;
  else {
   int v = open.top();
   mate[v] = c;
   mate[c] = v;
   open.pop();
   ret+=2;
   update(c,1);
   closed.push_back(c);
   opened.push_back(v);
  }
 } 
 reverse(closed.begin(),closed.end());
 sort(opened.begin(),opened.end());
}
void remove(int j)
{
 if (mate[j] == -1)return ;
 if (str[j] == ')')return ;
 update(mate[j],-1); 
}
int ans[MAXN+5];
 
int main()
{
// freopen("brackets.in","r",stdin);
 int c,c2;
 scanf("%s%d",str,&n);
 len = strlen(str);
 solve();
 for (c=0;c<n;c++){
  scanf("%d%d",&arr[c].s,&arr[c].e);
  arr[c].s--;
  arr[c].e--;
  arr[c].ix = c;
 }
 sort(arr,arr+n);
 int i=0,j=0;
 ci=oi=0;
 while (i<n && j<len){
  if (arr[i].s != j){
   remove(j);
   j++;
  }
  else {
   ans[arr[i].ix] = query(arr[i].e);
   i++;
  }
 }
 for (c=0;c<n;c++)
  printf("%d\n",ans[c]*2);
 return 0;
}