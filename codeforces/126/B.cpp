// Problem: B. Password
// Contest: Codeforces - Codeforces Beta Round #93 (Div. 1 Only)
// URL: https://codeforces.com/problemset/problem/126/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
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



const pll M=mp(1e9+7, 1e9+9);   ///Should be large primes
const ll base=347;              ///Should be a prime larger than highest value
const int N = 1e6+7;            ///Highest length of string

ostream& operator<<(ostream& os, pll hash) {
    return os<<"("<<hash.ff<<", "<<hash.ss<<")";
}

pll operator+ (pll a, ll x)     {return mp(a.ff + x, a.ss + x);}
pll operator- (pll a, ll x)     {return mp(a.ff - x, a.ss - x);}
pll operator* (pll a, ll x)     {return mp(a.ff * x, a.ss * x);}
pll operator+ (pll a, pll x)    {return mp(a.ff + x.ff, a.ss + x.ss);}
pll operator- (pll a, pll x)    {return mp(a.ff - x.ff, a.ss - x.ss);}
pll operator* (pll a, pll x)    {return mp(a.ff * x.ff, a.ss * x.ss);}
pll operator% (pll a, pll m)    {return mp(a.ff % m.ff, a.ss % m.ss);}

pll power (pll a, ll p) {
    if (p==0)   return mp(1,1);
    pll ans = power(a, p/2);
    ans = (ans * ans)%M;
    if (p%2)    ans = (ans*a)%M;
    return ans;
}

///Magic!!!!!!!
pll inverse(pll a)  {
    return power(a, (M.ff-1)*(M.ss-1)-1);
}

pll pb[N];      ///powers of base mod M
pll invb;

///Call pre before everything
void hashPre() {
    pb[0] = mp(1,1);
    for (int i=1; i<N; i++)
        pb[i] = (pb[i-1] * base)%M;
    invb = inverse(pb[1]);
}

///Calculates Hash of a string
pll Hash (string s) {
    pll ans = mp(0,0);
    for (int i=0; i<s.size(); i++)
        ans=(ans*base + s[i])%M;
    return ans;
}

///appends c to string
pll append(pll cur, char c) {
    return (cur*base + c)%M;
}

///prepends c to string with size k
pll prepend(pll cur, int k, char c) {
    return (pb[k]*c + cur)%M;
}

///replaces the i-th (0-indexed) character from right from a to b;
pll replace(pll cur, int i, char a, char b) {
    cur = (cur + pb[i] * (b-a))%M;
    return (cur + M)%M;
}

///Erases c from the back of the string
pll pop_back(pll hash, char c) {
    return (((hash-c)*invb)%M+M)%M;
}

///Erases c from front of the string with size len
pll pop_front(pll hash, int len, char c) {
    return ((hash - pb[len-1]*c)%M+M)%M;
}

///concatenates two strings where length of the right is k
pll concat(pll left, pll right, int k) {
    return (left*pb[k] + right)%M;
}

///Calculates hash of string with size len repeated cnt times
///This is O(log n). For O(1), pre-calculate inverses
pll repeat(pll hash, int len, ll cnt) {
    pll mul = (pb[len*cnt] - 1) * inverse(pb[len]-1);
    mul = (mul%M+M)%M;
    pll ans = (hash*mul)%M;

    if (pb[len].ff == 1)    ans.ff = hash.ff*cnt;
    if (pb[len].ss == 1)    ans.ss = hash.ss*cnt;
    return ans;
}

///Calculates hashes of all prefixes of s including empty prefix
vector<pll> hashList(string s) {
    int n = s.size();
    vector<pll> ans(n+1);
    ans[0] = mp(0,0);

    for (int i=1; i<=n; i++)
        ans[i] = (ans[i-1] * base + s[i-1])%M;
    return ans;
}

///Calculates hash of substring s[l..r] (1 indexed)
pll substringHash(const vector<pll> &hashlist, int l, int r) {
    int len = (r-l+1);
    return ((hashlist[r] - hashlist[l-1]*pb[len])%M+M)%M;
}


int cs=0;
void solve(){
    //cout<<"Case "<<++cs<<": ";
    string s;
    cin>>s;
    vpll hashL=hashList(s);
    int n=sz(s);
    vector<int>vec;
    rep(i,n-1){
    	int preL=1,preR=i+1,sufL=n-i,sufR=n;
    	if(substringHash(hashL,preL,preR)==substringHash(hashL,sufL,sufR)){
    		vec.pb(preR-preL+1);
    	}
    }
    auto valid=[&](int len){
    	pll p=substringHash(hashL,1,len);
    	for (int i=2; i+len-1<=n-1; i++)
            if (substringHash(hashL, i, i+len-1) == p){
            	return 1;
            }
        return 0;
    };
    sort(ALL(vec));
    int ans=-1;
    int l=0,r=sz(vec)-1;
    while(l<=r){
    	int mid=l+(r-l)/2;
    	if(valid(vec[mid])){
    		ans=vec[mid];
    		l=mid+1;
    	}
    	else r=mid-1;
    }
    if(ans==-1){
    	cout<<"Just a legend"<<endl;
    }
    else{
    	rep(i,ans){
    		cout<<s[i];
    	}
    	cout<<endl;
    }
}
 
signed main()
 
{
    IOS;
    int t;
    t=1;
    //cin>>t;
    hashPre();
    while(t--){
        solve();
    }
    return 0;
 
}