#include<bits/stdc++.h>

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
typedef long long ll;
int fx[]={0,0,-1,1,+1,-1,-1,+1};
int fy[]={1,-1,0,0,+1,+1,-1,-1};


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
vector<int>arr[(int)(2*1e5+5)];
int main()

{
	IOS;
	int n,k;
	while(cin>>n>>k){
        int ar[n];
        for(int i=0;i<(int)(2*1e5+5);i++) arr[i].clear();

        for0(i,n) {
            cin>>ar[i];
            int x=ar[i],cnt=0;
            while(x>0){
                arr[x].pb(cnt);
                x/=2;
                cnt++;
            }
        }
        ll mini=highest(ll);
        for(int i=1;i<=(int)2*1e5;i++){
            sort(ALL(arr[i]));
            if((int)arr[i].size()<k) continue;
            ll sum=accumulate(arr[i].begin(),arr[i].begin()+k,0);
            mini=min(sum,mini);
        }
        cout<<mini<<endl;

	}


	 return 0;

}

