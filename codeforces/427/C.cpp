/// Bismillahir Rahmanir Rahim
//Author: Tanvir Hussain
//ICE,NSTU
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
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define cases(cs,t) for(int cs=1;cs<=t;cs++)
#define PI acos(-1)
#define no1 __builtin_popcount
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define uniq(vec) vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define sz(a) int(a.size())
#define ff first
#define ss second
#define endl "\n"
#define forch(it,s) for(auto it:s)
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define bits(n) __builtin_popcount(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >


int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vpii;
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
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
vi edg[maxx],rev[maxx],vis(maxx),color(maxx),components[maxx],cost(maxx);
stack<int>stk;
int n,m,mark;

void dfs(int u){
    color[u]=1;
    forch(it,edg[u]){
        if(color[it]==0){
            dfs(it);
        }
    }
    stk.push(u);
}
void dfs2(int u){
    components[mark].pb(u);
    vis[u]=1;
    forch(it,rev[u]){
        if(!vis[it]){
            dfs2(it);
        }
    }
}
void revers(){
    rep1(i,1,n){
        forch(it,edg[i]){
            rev[it].pb(i);
        }
    }
}
void findscc(){
    rep1(i,1,n){
        if(color[i]==0){
            color[i]=1;
            dfs(i);
        }
    }
    revers();
    while(!stk.empty()){
        int u=stk.top();
        stk.pop();
        if(vis[u]==0){
            mark++;
            dfs2(u);
        }

    }
}
void solve(){
    cin>>n;
    rep1(i,1,n) cin>>cost[i];
    cin>>m;
    rep(i,m){
        int u,v;
        cin>>u>>v;
        edg[u].pb(v);
    }
    findscc();
    ll tot=0,ans=1;
    rep1(i,1,mark){
        int mini=highest(int);
        map<int,int>mm;
        //cout<<i<<endl;
        forch(it,components[i]){
           // cout<<it<<" "<<cost[it]<<"    ";
            mm[cost[it]]++;
            mini=min(mini,cost[it]);
        }
       // cout<<endl<<endl;
        tot+=mini;
        ans=(ans%MOD*mm[mini]%MOD)%MOD;
    }
    cout<<tot<<" "<<ans<<endl;
}

signed main()

{
    IOS;
    /*#ifndef ONLINE_JUDGE
        freopen ("data.in","r",stdin);
        freopen ("data.out","w",stdout);
    #endif*/
    int t;
    t=1;
    while(t--){
        solve();
    }

     return 0;

}
///Alhamdulillah


