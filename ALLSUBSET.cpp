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
void subset(int a[],int n)
{
  for (int i = 0; i < (1<<n);i++)
  {
    
    for (int j = 0; j < n;j++)
    {
      if(i&(1<<j ))//logic
      {
        cout << a[j] << " ";
      }
      
    }
    
    cout << endl;
  }
}
int main()
{
  t_code();
  int a[4] = {1, 2, 3, 4};
  subset(a, 4);
}