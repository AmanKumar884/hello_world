#include<bits/stdc++.h>

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)


using namespace std;
void t_code(){

    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main()
{
  t_code();

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n;i++)
  {
    cin >> a[i];
  }
  map<int, int> cnt;
  int preSum = 0;
  for (int i = 0; i < n;i++)
  {
    preSum += a[i];
    cnt[preSum]++;
  }
  int ans = 0;
  map<int, int>::iterator it;
  for (it = cnt.begin(); it != cnt.end();it++)
  {
    int c = it->second;
    ans += (c * (c - 1)) / 2;
    if(it->first==0)
    {
      ans += it->second;
    }
    
  }
  cout << ans << endl;
}