/// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

const long long MOD = 1000000007;
#define SET(x) memset(x, 0, sizeof(x))
#define SET2d(x,m,n) memset(x, 0, sizeof(x[0][0]) * m * n)
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define pf printf

#define sf scanf

#define ALL(x) x.begin(),x.end()
#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos
#define for0(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=n-1;i>=0;i--)
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define cases(cs,t) for(int cs=1;cs<=t;cs++)
#define PI acos(-1)
#define no1 __builtin_popcount
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
typedef long long ll;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
const int maxx=100005;

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

template<typename T>inline T Bigmod(T base, T power, T MOD){
    T ret=1;
    while(power)
    {
        if(power & 1)ret=(ret*base)%MOD;
        base=(base*base)%MOD;
        power>>=1;
    }
    return ret;
}
double sq(double x) {return x*x;}

int main()

{
    IOS;
    //freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     int n,x,y;
     while(cin>>n>>x>>y){
        vector<int>edg[n+1];
        for(int i=1;i+1<=n;i++){
            edg[i].pb(i+1);
            edg[i+1].pb(i);
        }
     edg[x].pb(y);
     edg[y].pb(y);
     int arr[n+1];
     SET(arr);
     for(int i=1;i<=n;i++){
        int vis[n+1];
        SET(vis);
        int cost[n+1];
        SET(cost);
        queue<int>q;
        q.push(i);
        vis[i]=1;

        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int j=0;j<edg[u].size();j++){
                int v=edg[u][j];
                if(!vis[v]){
                    vis[v]=1;
                    q.push(v);
                    cost[v]=cost[u]+1;
                   // cout<<v<<" "<<cost[v]<<endl;
                    if(v>i) arr[cost[v]]++;
                }
            }
        }

     }
     for(int i=1;i<=n-1;i++)
    {
        cout<<arr[i]<<endl;
    }
     }

     return 0;

}
///Alhamdulillah
