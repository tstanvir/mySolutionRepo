// Problem: B. Chess Cheater
// Contest: Codeforces - Codeforces Global Round 11
// URL: https://codeforces.com/problemset/problem/1427/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define ALL(x) x.begin(),x.end()
#define pb push_back
#define ppb pop_back
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define PI acos(-1)
#define border(i, j , row, column) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define uniq(vec) vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define endl "\n"
#define forch(it,s) for(auto it:s)
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define no1(n) __builtin_popcount(n)
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

#define XOX
#ifdef XOX
#define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
#define debug(...) 42
#endif
 
 

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vpii;
typedef vector<pair<ll,ll>> vpll;
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> omst;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> ost; 
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
const int maxx=100005;
const long long MOD = 1000000007;
const double rad=(acos(-1)/180.00);
const int INF    = 0x3f3f3f3f;
const ll LL_INF  = 0x3f3f3f3f3f3f3f3f;

 
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }  /// When MOD is prime.
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
ll gcd(ll a, ll b) { if (a == 0) return b; return gcd(b % a, a);}
ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
double sq(double x) {return x*x;} 
ll po(ll b,ll p){ ll res=1; while(p){ res*=b; p--;} return res;}
ll lg2(ll x){ ll res=0; while(x>1){ res++; x/=2ll;} return res;}
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
int cs=0;
void solve(){
    //cout<<"Case "<<++cs<<": ";
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int last=-1;
    vi vec;
    int tot=0;
    int lose=0;
    rep(i,n){
    	if(s[i]=='W'){
    		tot++;
    		if(last!=-1){
    			vec.pb(i-last-1);
    		}
    		last=i;
    	}
    	if(s[i]=='L'){
    		lose++;
    	}
    }
    if(k>=lose){
    	cout<<2*n-1<<endl;
    	return;
    }
    if(tot==0){
    	if(k==0) cout<<0<<endl;
    	else cout<<2*k-1<<endl;
    	return;
    }
    sort(ALL(vec));
    int szz=sz(vec);
    int win_st=szz+1;
    int ans=0;
    tot+=k;
    //debug(tot);
    rep(i,szz){
    	if(k>=vec[i]){
    		k-=vec[i];
    		win_st--;
    	}
    	else break;
    }
    ans=2*tot-win_st;
    cout<<ans<<endl;
    
    
}
 
signed main()
 
{
    IOS;
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
 
}
/*
bool ok=0;
    rep(i,n){
    	if(ok==1 and s[i]=='L' and k>0) s[i]='W',k--;
    	if(s[i]=='W') ok=1;
    }
    if(k){
    	rep(i,n){
    		if(k>0 and s[i]=='L') k--,s[i]='W';
    	}
    }
    int ans=0;
    rep(i,n){
    	if(i==0 and s[i]=='W'){
    		ans++;
    		continue;
    	}
    	if(s[i]=='W' and s[i-1]=='W') ans+=2;
    	else if(s[i]=='W' and s[i-1]=='L') ans++;
    }
    cout<<ans<<endl;*/