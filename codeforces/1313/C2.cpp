// Problem: C2. Skyscrapers (hard version)
// Contest: Codeforces - Codeforces Round #622 (Div. 2)
// URL: https://codeforces.com/contest/1313/problem/C2
// Memory Limit: 512 MB
// Time Limit: 3000 ms
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
vll nge(vll arr){//next greater element
	int n=sz(arr);
    vll ngeElement(n,-1),ngeInd(n,-1);
    stack<ll>sEl,sInd;
    sEl.push(arr[0]);
    sInd.push(0);
    rep1(i,1,n-1){
        if(sEl.empty())
        {
            sEl.push(arr[i]);
            sInd.push(i);
            continue;
        }
        while(!sEl.empty() and sEl.top()>arr[i]){
            ngeElement[sInd.top()]=arr[i];
            ngeInd[sInd.top()]=i;
            sEl.pop();
            sInd.pop();
        }
        sEl.push(arr[i]);
        sInd.push(i);
    }
    return ngeInd;
}
void solve(){
    //cout<<"Case "<<++cs<<": ";
    int n;
    cin>>n;
    vll vec(n);
    rep(i,n){
    	cin>>vec[i];
    }
    vll pref(n,highest(int)),suff(n,highest(int));
    rep(i,n){
    	if(i==0) pref[i]=vec[i],suff[n-i-1]=vec[n-i-1];
    	else{
    		pref[i]=min(vec[i],pref[i-1]);
    		suff[n-i-1]=min(vec[n-i-1],suff[n-i]);
    	}
    }
    vll left(n),right(n),vec1(ALL(vec));
    reverse(ALL(vec1));
    vll nse=nge(vec1);
    vll nserev(nge(vec));
    reverse(ALL(nse));
    rep(i,n){
    	if(nse[i]!=-1){
    		nse[i]=n-nse[i]-1;
    	}
    }
    //forch(it,suff) debug(it);
    rep(i,n)
    {
    	if(vec[i]==pref[i]){
    		left[i]=(i+1)*vec[i];
    	}
    	else{
    		left[i]=left[nse[i]]+(i-nse[i])*vec[i];
    	}
    }
    irep(i,n-1,0){
    	if(vec[i]==suff[i]) right[i]=(n-i)*vec[i];
    	else{
    		//debug(nserev[i],right[nserev[i]],vec[i]);
    		right[i]=right[nserev[i]]+(nserev[i]-i)*vec[i];
    	}
    }
    int in=-1;
    ll maxi=-1;
    rep(i,n){
    	//debug(left[i],right[i],vec[i]);
    	if(left[i]+right[i]-vec[i]>maxi){
    		maxi=left[i]+right[i]-vec[i];
    		in=i;
    	}
    }
    deque<ll>q;
	q.pb(vec[in]);
	ll sum=vec[in];
	ll ind=in+1;
	ll prev=vec[in];
	while(ind<n){
		sum+=1ll*min(vec[ind],prev);
		q.pb(min(vec[ind],prev));
		prev=min(vec[ind],prev);
		ind++;
	}
	ind=in-1;
	prev=vec[in];
	while(ind>=0)
	{
		sum+=1ll*min(vec[ind],prev);
		q.push_front(min(vec[ind],prev));
		prev=min(vec[ind],prev);
		ind--;
	}
	forch(it,q) cout<<it<<" ";
    cout<<endl;
}
 
signed main()
 
{
    IOS;
    int t;
    t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
 
}
/*
deque<int>q;
	q.pb(vec[in]);
	ll sum=vec[in];
	int ind=in+1;
	int prev=vec[in];
	while(ind<n){
		sum+=1ll*min(vec[ind],prev);
		q.pb(min(vec[ind],prev));
		prev=min(vec[ind],prev);
		ind++;
	}
	ind=in-1;
	prev=vec[in];
	while(ind>=0)
	{
		sum+=1ll*min(vec[ind],prev);
		q.push_front(min(vec[ind],prev));
		prev=min(vec[ind],prev);
		ind--;
	}
	forch(it,q) cout<<it<<" ";
    cout<<endl;
*/