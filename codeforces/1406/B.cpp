/// Bismillahir Rahmanir Rahim
//Author: Tanvir Hussain
//ICE,NSTU
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
const long long MOD = 1000000007;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
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
void solve(){
    int n;
    cin>>n;
    ll fin=lowest(ll);
    vi vec(n);
    rep(i,n) cin>>vec[i];
    sort(ALL(vec));
    rep1(i,0,5){
        ll inner=1;
        rep(j,i){
            inner*=vec[j];
        }
        rep1(j,n-(5-i),n-1){
            inner*=vec[j];
        }
        fin=max(fin,inner);
        i++;
    }
    cout<<fin<<endl;
}

signed main()

{
    IOS;
    /*#ifndef ONLINE_JUDGE
        freopen ("input.txt","r",stdin);
        freopen ("output.txt","w",stdout);
    #endif*/
    int t;
    cin>>t;
    while(t--){
        solve();
    }

     return 0;

}
///Alhamdulillah

/*
ll fin=1;
    ll nichi=0;
    rep1(i,1,2){
        ll p=1;
        rep(j,min(2,(int)pos.size())){
            p*=pos[j];
        }
        ll ng=1;
        rep(j,min(2,(int)neg.size())){
            ng*=neg[j];
        }
        if(p>=ng){
            fin*=p;
            ll val=min(2,(int)pos.size());
            nichi+=val;
            while(val--) pos.pop_front();
        }
        else{
                //cout<<ng<<endl;

            ll val=min(2,(int)neg.size());
            if(val!=2){
                val=0;
            }
            fin*=ng;
            nichi+=val;
            while(val--) neg.pop_front();
        }
    }
    //cout<<fin<<" "<<nichi<<endl;
    int i=0;
    int px=pos.size();
    while(i<px and nichi<5){
        fin*=pos[i];
        i++;
        nichi++;

    }

    ll val=((5-nichi)/2)*2;
    //cout<<val<<endl;
    while(val){
        fin*=(-1*neg.front());
        neg.pop_front();
        val--;
        nichi++;
    }
    //cout<<fin<<endl;
    while(nichi<5 and zero.size()){
            zero.pop_back();
        fin*=0;
        nichi++;
    }
    while(nichi<5){
        fin*=(-1*neg.front());
        neg.pop_front();
        nichi++;
    }


    cout<<fin<<endl;
*/
