//LARGEST SUM CONTIGOUS AUBARRAY...
//IMPORTANT 
#include<bits/stdc++.h>
using namespace std;
int maxSumSubArray(int a[],int n)
{
  int maxsum = -1000000;
  int cursum = 0;
  for (int i = 0;i<n;i++)
  {
    cursum += a[i];
    if(cursum>maxsum)
    {
      maxsum = cursum;
    }
    if(cursum<0)
    {
      cursum = 0;
    }
  }
  return maxsum;
}
int main()
{
  int n, i;
  cin >> n;
  int a[n];
  for (i = 0; i < n;i++)
  {
    cin >> a[i];
  }
  cout << "THE MAXIMUM SUM IS : " << maxSumSubArray(a, n) << "\n";
}