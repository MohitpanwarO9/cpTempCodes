#include <bits/stdc++.h>

#define bb "\n"
#define ull unsigned long long
#define ll long long int
#define sandy                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

using namespace std;

int mode=1000000007;

// Disjoint set Union Class template
class DisjointSet{
    vector<int> rank,parent;
    public:
    
    DisjointSet(int n)
    {
        rank.resize(n+1,0);
        parent.resize(n+1);

        for(int i = 0; i<=n; i++)
        {
            parent[i] = i;
        }
    }

    //find ultimate parent; 

    int findUPar(int node)
    {
        if(parent[node] == node) return node;

        return parent[node] = findUPar(parent[node]);
    }

    // union by rank
    
    void unionByRank(int u,int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if(ulp_u == ulp_v) return;

        if(rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        } 
        else if(rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_u] = ulp_v;;
            rank[ulp_v]++;
        }
    }
};
