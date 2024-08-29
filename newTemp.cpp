
#include<bits/stdc++.h>

#define bb "\n"
#define ull unsigned long long
#define ll long long int  
#define sandy ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

/* 
    template for the query type
    |
    |
    No test case one ( Input + n Query) 
*/
int findMinLength(vector<int>&arr,int i,int sum,int k,int prev)
{
    if(i>=arr.size())
    {
        if(sum>=k)
        {
            return 0;
        }

        return INT_MAX;
    }

    if(sum>=k)
    {
        return 0;
    }

    int len1=INT_MAX,len2=INT_MAX;

    if(prev<=arr[i])
    {
        len1 = findMinLength(arr,i+1,sum+arr[i],k,arr[i]);
        if(len1!=INT_MAX)len1++;
    }

    len2 = findMinLength(arr,i+1,sum,k,prev);

    if(len1==INT_MAX && len2==INT_MAX) return INT_MAX;

    return min(len1,len2) ;
}


int main() 
{
    sandy;

    int n,k;
    cin>>n>>k;
    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"min length ->"<<findMinLength(arr,0,0,k,-1);

    return 0;
}