#include<bits/stdc++.h>

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define goog(tno) cout << "Case #" << tno <<": "

using namespace std;

void t_code()
{

  fast_io;
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
int maxSubArraySum(int a[], int size)
{
  int max_so_far = a[0];
  int curr_max = a[0];

  for (int i = 1; i < size; i++)
  {
    curr_max = max(a[i], curr_max + a[i]);
    max_so_far = max(max_so_far, curr_max);
  }
  return max_so_far;
}
int main()
{
  t_code();
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout<< maxSubArraySum(a, n);
}
