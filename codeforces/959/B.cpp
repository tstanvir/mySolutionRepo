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
typedef long long ll;


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

int main()

{
	IOS;
	int n,k,m;
	cin>>n>>k>>m;
	map<string,ll>mapp;
	for(int i=1;i<=n;i++) {
        string a;
        cin>>a;
        mapp[a]=i;
	}
	map<int,ll>mapp2;
	for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            mapp2[i]=a;
	}
	while(k--){
        int sz;
        cin>>sz;
        ll mini=INT_MAX;
        vector<int>vec;
        for(int i=0;i<sz;i++){
            int a;
            cin>>a;
            vec.pb(a);
            mini=min(mapp2[a],mini);
        }
        for(int i=0;i<vec.size();i++) mapp2[vec[i]]=mini;
        vec.clear();

	}
	ll ans=0;
	while(m--){
        string a;
        cin>>a;
        ans+=mapp2[mapp[a]];
	}
	cout<<ans<<endl;

	 return 0;

}

