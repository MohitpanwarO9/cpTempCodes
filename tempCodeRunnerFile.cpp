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

void solve()
{
  int n;
  cin>>n;
  vector<int>arr(n,0);
  vector<int>post(n,0);

  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    if(i==0)
    {
      post[i]=arr[i];
    }
    else{
      post[i]=arr[i];
      post[i]^=post[i-1];
    }
  }

  string str;
  cin>>str;
  
  int str1=0,str0=0;

  for(int i=0;i<n;i++)
  {
    if(str[i]=='0')
    {
      str0^=arr[i];
    }
    else
    {
      str1^=arr[i];
    }
  }

  int q;
  cin>>q;

  while(q--)
  {
    int tq;
    cin>>tq;
    if(tq==1)
    {
      int l,r;
      cin>>l>>r;
      if(l!=1)
      {
        str0^=(post[l-2]^post[r-1]);
        str1^=(post[l-2]^post[r-1]);
      }
      else
      {
        str0^=(post[r-1]);
        str1^=(post[r-1]);
      }

    }
    else
    {
      int b;
      cin>>b;

      if(b==0) cout<<str0<<" ";
      else cout<<str1<<" ";
    }
  }

cout<<bb<<endl;

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