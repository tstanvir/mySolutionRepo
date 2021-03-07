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
int cs=0;vi valid(10,-1);
int h,m;
bool isOk(string s){
  //  debug(s);
    int hh=0;
    if(valid[s[4]-'0']==-1){
        return 0;
    }
    else hh+=valid[s[4]-'0']*10;
    if(valid[s[3]-'0']==-1){
        return 0;
    }
    else hh+=valid[s[3]-'0'];
    int mn=0;
    if(valid[s[1]-'0']==-1) return 0;
    else mn+=valid[s[1]-'0']*10;
    if(valid[s[0]-'0']==-1) return 0;
    else mn+=valid[s[0]-'0'];
    //debug("mirror",hh,mn);

    if(hh>=h or mn>=m) return 0;
    return 1;
}
void solve(){
    //cout<<"Case "<<++cs<<": ";
    
    valid[0]=0;
    valid[1]=1;
    valid[2]=5;
    valid[5]=2;
    valid[8]=8;
    
    cin>>h>>m;
    string s;
    cin>>s;
    int hh=(s[0]-'0')*10+(s[1]-'0'),mn=(s[3]-'0')*10+(s[4]-'0');
    int iniH=(s[0]-'0')*10+(s[1]-'0'),iniMn=(s[3]-'0')*10+(s[4]-'0');
    string hhh=to_string(hh),mmn=to_string(mn);
    if(hhh.size()==1) hhh='0'+hhh;
    if(mmn.size()==1) mmn='0'+mmn;
    string news=hhh+':'+mmn;
    while(!isOk(news)){
        
        mn++;
        if(mn%m==0) hh++;
        mn%=m;
        hh%=h;
        if(hh==iniH and mn==iniMn) break;
        hhh=to_string(hh),mmn=to_string(mn);
        if(hhh.size()==1) hhh='0'+hhh;
        if(mmn.size()==1) mmn='0'+mmn;
        news=hhh+':'+mmn;
        //debug(news);
    }
    cout<<news<<endl;
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
int hh=(s[0]-'0')*10+(s[1]-'0'),mn=(s[3]-'0')*10+(s[4]-'0');
        string hhh=to_string(hh),mmn=to_string(mn);
        if(hhh.size()==1) hhh='0'+hhh;
        if(mmn.size()==1) mmn='0'+mmn;
        reverse(ALL(hhh));
        reverse(ALL(mmn));
        if(stoi(hhh)<m and stoi(mmn)<h){
            string news=hhh+':'+mmn;
            //debug(news);
            if(isOk(news)){
                reverse(ALL(hhh));
                reverse(ALL(mmn));
                news=hhh+':'+mmn;
                //reverse(ALL(news));
                cout<<news<<endl;
                return;
            }
        }
    
         hh=(s[0]-'0')*10+(s[1]-'0'),mn=(s[3]-'0')*10+(s[4]-'0');
        int iniH=(s[0]-'0')*10+(s[1]-'0'),iniMn=(s[3]-'0')*10+(s[4]-'0');
        //debug(hh,mn);
        mn++;
        //debug(hh,mn);
        while(hh!=iniH or mn!=iniMn){
            //debug("duchi");
            if(mn%m==0) hh++;
            mn%=m;
            hh%=h;
            string hhh=to_string(hh),mmn=to_string(mn);
            if(hhh.size()==1) hhh='0'+hhh;
            if(mmn.size()==1) mmn='0'+mmn;
            reverse(ALL(hhh));
            reverse(ALL(mmn));
            if(stoi(hhh)>=m or stoi(mmn)>=h){
                mn++;
                continue;
            }
            string news=hhh+':'+mmn;
            //debug(news);
            if(isOk(news)){
                reverse(ALL(hhh));
                reverse(ALL(mmn));
                news=hhh+':'+mmn;
                //reverse(ALL(news));
                cout<<news<<endl;
                break;
            }
            mn++;

        }
        */