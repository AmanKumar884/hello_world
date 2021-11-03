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
  int a, b;
  cin >> a >> b;
  int temp;
  while(temp!=0)

  {
    temp = a % b;
    if(a%b==0)
    {
      cout<<b<<endl;
      break;
    }
    a=b;
    b = temp;
  }
}