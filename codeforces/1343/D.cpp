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
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
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
int ext_gcd(int a, int b, int & x, int & y) {
    //for finding modular inverse
    //if its return 1 ,then a has a mod inverse x mod b.
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int d = ext_gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

int main()

{
    IOS;
    //freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     int t;
     cin>>t;
     while(t--){
            int n,k;

        cin>>n>>k;
        vi vec(n);
        rep(i,n) cin>>vec[i];
        vi cnt(2*k+1);
        rep(i,n/2){
            cnt[vec[i]+vec[n-i-1]]++;
        }
        vi pref(2*k+2);
        rep(i,n/2){
            int l1 = 1 + vec[i], r1 = k + vec[i];
			int l2 = 1 + vec[n - i - 1], r2 = k + vec[n - i - 1];
			assert(max(l1, l2) <= min(r1, r2));
			++pref[min(l1, l2)];
			--pref[max(r1, r2) + 1];
        }
        rep1(i,1,2*k+1){
            pref[i]+=pref[i-1];
        }
        int ans=highest(int);
        rep1(sum,2,2*k){
            ans=min(ans,pref[sum]-cnt[sum]+(n/2-pref[sum])*2);
        }

        cout<<ans<<endl;
     }

     return 0;

}
///Alhamdulillah
