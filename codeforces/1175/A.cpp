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
	ll n,k;
	int t;
	cin>>t;
	while(t--)
    {
        cin>>n>>k;
        ll ans=0;
        vector<ll>vec;
        vec.pb(n);
        while(n/k!=0)
        {
            ans++;
            n/=k;
            vec.pb(n);

        }
        int m=vec.size();
        ans+=vec[m-1];
      //  cout<<ans<<endl;
        for(int i=m-2;i>=0;i--){
            ll val=(vec[i+1]*k);
           // cout<<vec[]<<endl;
            ans+=(vec[i]-val);
        }
        cout<<ans<<endl;
    }

	 return 0;

}

