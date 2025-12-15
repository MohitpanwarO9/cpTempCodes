#include <bits/stdc++.h>

#define bb "\n"
#define ull unsigned long long
#define ll long long int
#define sandy                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

using namespace std;

int mode=1000000007;

int Find_hcf(int a,int b)
{
  int r = a%b;
  if(r==0) return b;
  return Find_hcf(b,r);
}

bool checkEven(char c){
  vector<char> ch = {'a','e','i','o','u','A','E','I','O','U'};
  for(char item : ch){
    if(item == c) return true;
  }
  return false;
}

void solve()
{
  
}


int main()
{
  sandy;

  ll tc;
  cin >> tc;
  while (tc--)
  {
    
    solve();
  }
  return 0;
}