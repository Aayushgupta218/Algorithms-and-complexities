/*
  Given two strings, we've to find the longest common subsequence among that. 
  We start with the iteration of both the strings and keep moving our pointers according to the condition they satisfy.
*/

#include<bits/stdc++.h>
using namespace std ;
int main () 
{
  string s , t ;
  cout << "Enter string one : " ;
  cin >> s ;
  cout << "Enter string two : " ;
  cin >> t ;
  int n = s.length() ;
  int m = t.length() ;
  vector<vector<int>> dp (n+1 , vector<int> (m+1,0));

  for(int i=1; i<=n ; i++)
  {
    for(int j=1; j<=m ; j++)
    {
      if(s[i-1] == t[j-1])
      {
        dp[i][j] = dp[i-1][j-1] + 1 ;
      }
      else{
        dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
      }
    }
  }

  cout << "Length of LCS is :- " << dp[n][m] << endl ;
  string ans="" ;
  while(n>0 && m>0)
  {
    if(s[n-1]==t[m-1])
    {
      ans+=s[n-1] ;
      n-- ; m-- ;
    }
    else
    {
      if(dp[n][m-1] > dp[n-1][m])
      {
        m-- ;
      }
      else n-- ;
    }
  }
  reverse(ans.begin(),ans.end());
  cout << "LCS is :- " << ans << endl;

}
