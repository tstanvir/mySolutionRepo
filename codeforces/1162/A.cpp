#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
#define SET(x) memset(x, 0, sizeof(x))
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
	int n,h,m;
	while(cin>>n>>h>>m)
    {
        vector<int>v[n+1];
        for(int i=1;i<=n;i++) v[i].pb(h);
        for(int i=0;i<m;i++)
        {
            int l,r,x;
            cin>>l>>r>>x;
            for(int j=l;j<=r;j++)
            {
                v[j].pb(x);
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            auto mini=min_element(v[i].begin(),v[i].end());
            ans+=((*mini)*(*mini));
        }
        cout<<ans<<endl;
    }

	 return 0;

}

