
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

int findMinLength(vector<int>&arr,int i,int sum,int k)
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

    int len1 = findMinLength(arr,i+1,sum+arr[i],k);
    int len2 = findMinLength(arr,i+1,sum,k);

    return min(len1,len2);
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


    return 0;
}