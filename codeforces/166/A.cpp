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
typedef long long ll;


//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.first==b.first) return a.second<b.second;
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

int main()

{
	IOS;
	int n,k;
	while(cin>>n>>k){
        vector<pair<int,int>>vec;
        map<pair<int,int>,int>mm;
        while(n--){
            int p,t;
            cin>>p>>t;
            vec.pb(mp(p,t));
        }
        sort(ALL(vec),sortinrev);
        for(int i=0;i<vec.size();i++) mm[{(int)vec[i].first,(int)vec[i].second}]++;
        cout<<mm[{(int)vec[k-1].first,(int)vec[k-1].second}]<<endl;
        //cout<<"vec: "<<endl;
        //for(int i=0;i<vec.size();i++) cout<<vec[i].first<<" "<<vec[i].second<<endl;

        //cout<<"vec2: "<<endl;
        //for(int i=0;i<vec.size();i++) cout<<vec2[i]<<endl;


	}

	 return 0;

}

