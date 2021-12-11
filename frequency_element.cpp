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
  vector<int> v(n);
  for (int i = 0;i<n;i++)
  {
    cin >> v[i];
  }
  unordered_map<int, int> fr;
  /*
  map->
1 5
2 4
3 4
4 2

unordered_map->
4 2
3 4
2 4
1 5

  */
  for (int i = 0;i<n;i++)
  {
    fr[v[i]]++;
  }
  unordered_map<int, int>::iterator it;
  for (it = fr.begin(); it != fr.end();it++)
  {
    cout << it->first << " " << it->second << endl;
  }
}