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
int un(int a[],int n)
{
  int xorsum = 0,i;
  for (i = 0;i<n;i++)
  {
    xorsum = xorsum ^ a[i];
  }
  return xorsum;
}
int main()
{
  t_code();
  //array{2,4,6,3,4,6,2} then ans is 3
  //xor operator A^B
  int a[] = {1, 2, 3, 4, 1, 2, 3,9};
  cout << un(a, 7) << endl;
}