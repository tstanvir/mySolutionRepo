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
#define for0(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=n-1;i>=0;i--)
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
typedef long long ll;
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
     int n;
     while(cin>>n){
        ll sum=0;
        for(int i=1;i<=n;i++){
            if(i%3==0) continue;
            if(i%5==0) continue;
            sum+=i;
        }
        cout<<sum<<endl;
     }

     return 0;

}
///Alhamdulillah
