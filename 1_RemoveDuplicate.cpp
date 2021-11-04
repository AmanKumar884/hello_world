#include<bits/stdc++.h>

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define goog(tno) cout << "Case #" << tno <<": "
#include<bits/stdc++.h>
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

  unordered_set<int> s;
  for (int i = 0; i < n;i++)
  {
    int x;
    cin >> x;
    s.insert(x);
  }
  for(auto v:s)
  {
    cout << v << " ";
  }
  cout << endl;
}
