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
	int a,b,c,d;
	while(cin>>a>>b>>c>>d)
    {
        vector<int>v;
        v.pb(a);
        v.pb(b);
        v.pb(c);
        sort(ALL(v));
        int e=v[1]-v[0];
        int f=v[2]-v[1];
        int ans=0;
        if(e<=d) ans+=(d-e);
        if(f<=d) ans+=(d-f);
        cout<<ans<<endl;
    }

	 return 0;

}

