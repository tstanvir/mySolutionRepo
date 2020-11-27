/// Bismillahir Rahmanir Rahim
//Author: Tanvir Hussain
//ICE,NSTU
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
const long long MOD = 1000000007;
const double rad=(acos(-1)/180.00);
#define IOS ios::sync_with_stdio(false);
#define SET(x) memset(x, 0, sizeof(x))
#define SET2d(x,m,n) memset(x, 0, sizeof(x[0][0]) * m * n)
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define CLR2d(x,m,n) memset(x, -1, sizeof(x[0][0]) * m * n)
#define mp make_pair
#define PII pair<int, int>
#define pf printf
#define sf scanf
#define ALL(x) x.begin(),x.end()
#define pb push_back
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
#define preci cout<<fixed<<setprecision(9);


vector<string> vec_splitter(string s) {
    s += ',';
    vector<string> res;
    while(!s.empty()) {
        res.push_back(s.substr(0, s.find(',')));
        s = s.substr(s.find(',') + 1);
    }
    return res;
}
void debug_out(
vector<string> __attribute__ ((unused)) args,
__attribute__ ((unused)) int idx,
__attribute__ ((unused)) int LINE_NUM) { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
    if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
    stringstream ss; ss << H;
    cerr << args[idx] << " = " << ss.str();
    debug_out(args, idx + 1, LINE_NUM, T...);
}


int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vpii;
typedef vector<pair<ll,ll>> vpll;
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
const int maxx=100005;

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }




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
ll po(ll b,ll p){
    ll res=1;
    while(p){
        res*=b;
        p--;
    }
    return res;
}
ll lg2(ll x){
    ll res=0;
    while(x>1){
        res++;
        x/=2ll;
    }
    return res;
}

#define XOX
#ifdef XOX
#define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
#define debug(...) 42
#endif
struct DSU{
    vector <int> arr, szz;//arr[i]=j means j is the root of  i; //
    DSU(int n) {
        arr.resize(n + 1); szz.resize(n + 1, 1);
        for(int i = 1; i <= n; i++) {
            arr[i] = i; //initially ith node's root is i itself
        }
    }
    int root(int i) { //this func returns the root of ith node
        while(i!=arr[i]){
            arr[i]=arr[arr[i]];
            i=arr[i];
        }
        return i;
    }
    void merge(int a, int b) { //this func merges two nodes a and b.
        int root_a=root(a),root_b=root(b);
        if(root_a==root_b) return;
        if(szz[root_a]<szz[root_b]){
            arr[root_a]=arr[root_b];
            szz[root_b]+=szz[root_a];
        }
        else{
            arr[root_b]=arr[root_a];
            szz[root_a]+=szz[root_b];
        }
    }
};

void solve(){
    // dfs implementation
    int n,m;
    cin>>n>>m;
    vpii edg[n+1];
    rep(i,m){
        int u,v,c;
        cin>>u>>v>>c;
        edg[u].pb({v,c});
        edg[v].pb({u,c});
    }
    vi ans(n+1);
    vi vis(n+1);
    function<void(int,int,int)>dfs=[&](int ch,int par,int c){
        vis[ch]=1;
        if(ans[par]!=c) ans[ch]=c;
        else ans[ch]=ans[par]==1?n:ans[par]-1;
        forch(it,edg[ch]){
            int v=it.ff,cost=it.ss;
            if(!vis[v]){
                dfs(v,ch,cost);
            }
        }
    };
    dfs(1,0,1);
    rep1(i,1,n) cout<<ans[i]<<endl;

}

signed main()

{
    /*#ifndef ONLINE_JUDGE
        freopen ("input.txt","r",stdin);
        freopen ("output.txt","w",stdout);
    #endif*/
    IOS;
    int t;
    t=1;
    while(t--){
        solve();
    }

     return 0;

}
///Alhamdulillah

/*
dsu implementation




int n,m;
cin>>n>>m;
vpii edg[n+1];
DSU d(n);
rep(i,m){
    int u,v,c;
    cin>>u>>v>>c;
    if(d.root(u)==d.root(v)) continue;
    d.merge(u,v);
    edg[u].pb({v,c});
    edg[v].pb({u,c});
}
int r=d.root(1);
vi vis(n+1);
vi ans(n+1);
ans[r]=1;
queue<int>q;
q.push(r);
vis[r]=1;
int trace=1;
while(!q.empty()){
    int u=q.front();
    q.pop();
    forch(it,edg[u]){
        int v=it.ff,c=it.ss;
        if(!vis[v]){
            vis[v]=1;
            q.push(v);
            if(ans[u]==c ) ans[v]=ans[u]==1?n:ans[u]-1;
            else ans[v]=c;

        }
    }
}
rep1(i,1,n) cout<<ans[i]<<endl;
*/
