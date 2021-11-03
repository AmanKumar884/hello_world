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
unordered_map<char, int> symbol = {{'[', -1}, {'(', -2}, {'{', -3},{']', 1}, {')', 2}, {'}', 3}};
string isBalanced(string s)
{
  stack<char> st;
  for(char bracket:s){
    if(symbol[bracket]<0){
      st.push(bracket);
    }else{
      if(st.empty()) return "NO";
      char top = st.top();
      st.top();
      if(symbol[top]+symbol[bracket]){
        return "NO";
      }
    }
  }
  if(st.empty()) return "YES";
  return "NO";
}
int main()
{
  t_code();
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin >> s;
    cout << isBalanced(s) << endl;
  }
  
  
}