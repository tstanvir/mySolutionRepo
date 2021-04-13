// Problem: D. GCD and MST
// Contest: Codeforces - Divide by Zero 2021 and Codeforces Round #714 (Div. 2)
// URL: https://codeforces.com/contest/1513/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;
using namespace std;

//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

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
#define di deque<int>
#define dll deque<ll>
#define pf push_front
#define ppf pop_front
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
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vpii;
typedef vector<pair<ll,ll>> vpll;
//typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> omst;
//typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> ost; 
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
const int maxx=100005;
const long long MOD = 1000000007;
const double rad=(acos(-1)/180.00);
const int INF    = 0x3f3f3f3f;
const ll LL_INF  = 0x3f3f3f3f3f3f3f3f;
#define EPS  0.000000001

 
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
bool get_bit(int mask,int pos) {return mask&(1<<pos);}
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
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

int cs=0;
void solve(){
    //cout<<"Case "<<++cs<<": ";
    ll n,p;
    cin>>n>>p;
    vpll vec(n);
    vll arr(n+1);
    rep(i,n){
    	cin>>vec[i].ff;
    	vec[i].ss=i+1;
    	arr[i+1]=vec[i].ff;
    }
    DSU d(n);
    sort(ALL(vec));
   /* rep(i,n){
    	cout<<vec[i].ss<<" ";
   }
    cout<<endl;
    rep(i,n){
    	cout<<vec[i].ff<<" ";
   }
    cout<<endl;*/
    ll ans=0;
    
    rep(i,n){
    	ll g=vec[i].ff,l=vec[i].ss-1,r=vec[i].ss+1;
    	if(g>=p) break;
    	if(d.szz[d.root(vec[i].ss)]==1){
	    	while(l>=1){
	    		int s=d.szz[d.root(l)];
	    		if(arr[l]%g==0){
	    			ans+=g;
	    		
	    			d.merge(l,vec[i].ss);
	    		}
	    		else break;
	    		if(s>1) break;
	    		l--;
	    	}
	    	//debug(r);
	    	while(r<=n ){
	    		int s=d.szz[d.root(r)];
	    		if(arr[r]%g==0){
	    			ans+=g;
	    		
	    			d.merge(r,vec[i].ss);
	    		}
	    		else break;
	    		//debug(r,g);
	    		if(s>1) break;
	    		r++;
	    		//debug(r);
	    	}
    	}
    }
   // debug(ans);
    rep1(i,1,n-1){
    	if(d.root(i)!=d.root(i+1)){
    		d.merge(i,i+1);
    		ans+=p;
    	}
    }
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
sort(ALL(vec));
    //rep(i,n){
    	//cout<<vec[i].ss<<" ";
  //  }
   // cout<<endl;
   // rep(i,n){
    	//cout<<vec[i].ff<<" ";
  // }
    //cout<<endl;
    rep(i,n){
    	ll g=vec[i].ff;
    	int l=vec[i].ss-1;
    	if(vec[i].ff>=p) break;
    	//debug(vec[i].ff);
    	while(l>=0 and gcd(arr[l],g)==g and d.szz[d.root(vec[i].ss)]==1){
    		//cout<<vec[l].ss<<" "<<d.szz[d.root(vec[l].ss)]<<endl;
    		ans+=g;
    		d.merge(l,vec[i].ss);
    		l--;
    	}
    	int r=vec[i].ss+1;
    	while(r<n and gcd(arr[r],g)==g and d.szz[d.root(vec[i].ss)]==1){
    		ans+=g;
    		
    		d.merge(r,vec[i].ss);
    		r++;
    	}
    	//debug(ans);
    }
    //debug(ans);
    rep(i,n-1){
    	if(d.root(i+1)!=d.root(i+2)){
    		d.merge(i+1,i+2);
    		ans+=p;
    	}
    }
    cout<<ans<<endl;
    */