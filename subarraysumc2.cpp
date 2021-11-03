//1.PREVIOUS COMMON DIFFERENCE (PD)
//2.CURRENT ARITHEMATIC SUBARRAY LENGTH(CUR)
//3.MAX ARITHEMATIC SUBARRAY LENGTH(ANS)
#include<bits/stdc++.h>

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define goog(tno) cout << "Case #" << tno <<": "

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
  int n,i;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  {
    cin >> a[i];
  }
  int ans = 2;
  int pd = a[1] - a[0];
  int j = 2;
  int curr = 2;

  while(j<n)
  {
    if(pd==a[j]-a[j-1])
    {
      curr++;
    }
    else
    {
      pd = a[j] - a[j - 1];
      curr = 2;
    }
    ans = max(ans, curr);
    j++;
  }
  cout << ans << endl;
  return 0;
}