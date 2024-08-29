#include<bits/stdc++.h>

#define bb "\n"
#define ull unsigned long long
#define ll long long int  
#define sandy ios_base::sync_with_stdio(false);cin.tie(NULL)


typedef pair<int,int> pr;

/*
     for priority_queue (min) with pair<int,int>
     Comparision on Second element of pair<int,int>
*/

struct myComp{
    constexpr bool operator()(pair<int,int>const&a, pair<int,int>const&b) const noexcept
    {
        return a.second > b.second;
    }
};

/* default comparision of priority_queue with pair in on first element */

/*
    priority_queue (min) definition
        
        priority_queue < Type , vector<Type> , greater<type> >     
        // we can put custome Comprator at in the definition

        :- example
        priority_queue< pr , vector<pr> , myComp> pq;
        // pr == pair<int,int> typeDefine 
*/


using namespace std;


void solve()
{ 
    
}


int main() 
{
    sandy;

    ll tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }

    return 0;
}