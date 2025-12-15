// template for order_Set

#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
// Including tree_order_statistics_node_update
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define bb "\n"
// *** this orderset store duplicate value *** //
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
// change less_equal to less for only unique values
#define sandy ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;
using namespace __gnu_pbds;
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