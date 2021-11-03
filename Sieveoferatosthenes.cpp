#include<bits/stdc++.h>

//#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
//#define goog(tno) cout << "Case #" << tno <<": "

using namespace std;
//
//    fast_io;
//    #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    #endif 


  

int main()
{
//  t_code();
int N;
cin>>N;
  	int prime[N] = {0};
  
  for (int i = 2; i<= pow(N,0.5);i++)
  {
    if(prime[i]==0)
    {
      for (int j = i * i; j <= N;j+=i)
      {
        prime[j] = 1;
      }
    }
  }
  for (int i = 2; i <= N;i++)
  {
    if(prime[i]==0)
    {
      cout << i << endl;
    }
  }
}
