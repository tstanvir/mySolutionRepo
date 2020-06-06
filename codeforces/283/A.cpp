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
const int maxx=200005;

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
long double sq(long double x) {return x*x;}
long double n=1;
long double sum=0;
vector<long double> BIT(maxx);
void update(ll idx,long double val){
    while(idx<maxx){
        BIT[idx]+=val;
        idx+=(idx&-idx);
    }
}
long double query(ll idx){
    long double res=0;
    while(idx>0){
        res+=BIT[idx];
        idx-=(idx&-idx);
    }
    return res;
}
void solve(){
    int q;
    cin>>q;
    while(q--){
        int op;
        cin>>op;
        if(op==1){
            long double x,a;
            cin>>x>>a;
            sum+=(x*a);
            update(1,a);
            update(x+1,-a);
            long double ans=(long double)((long double)sum/(long double)n);
            cout<<fixed<<setprecision(6)<<ans<<endl;
        }
        else if(op==2){
            n++;
            long double k;
            cin>>k;
            sum+=k;
            update(n,k);
           // cout<<"N: "<<n<<endl;
            update(n+1,-k);
            long double ans=(long double)((long double)sum/(long double)n);
            cout<<fixed<<setprecision(6)<<ans<<endl;
        }
        else {
            long double val=query(n);
            //cout<<"n: "<<n<<endl;
            //cout<<"sum: "<<sum<<endl;
            //cout<<val<<endl;
            sum-=val;
            update(n,-val);
            update(n+1,val);
            n--;
            long double ans=(long double)((long double)sum/(long double)n);
            cout<<fixed<<setprecision(6)<<ans<<endl;
        }
        //cout<<"shawwa: "<<endl;
        //rep1(i,1,n+1){
           // cout<<BIT[i]<<" ";
        //}
        //cout<<endl;
    }
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

