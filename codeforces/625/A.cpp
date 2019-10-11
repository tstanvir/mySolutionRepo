
#include<bits/stdc++.h>

using namespace std;

#define PI 3.1415926535897932384626433832795
#define REP(i,n) for(int i=0;i<(n);i++)
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define mp make_pair
#define pf printf

#define sf scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#define np std::string::npos
#define INF Ox3f3f3f3f

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
	ll n;
	while(sf("%I64d",&n)!=EOF)
    {
        ll a,b,c;
        sf("%I64d%I64d%I64d",&a,&b,&c);

        ll dif=b-c;
        if(dif<a&&n>=b){

           // cout<<bleft<<endl;
           // cout<<n-bleft<<endl;
            //cout<<dif<<endl;
            ll glass=(n-c)/(dif);
            pf("%I64d\n",(glass+((n-(glass*dif))/a)));
        }
        else {
            ll ans=n/a;
           // pf("%lld",ans);
            //ll baki=n%a;
            pf("%I64d\n",ans);
        }
    }

	 return 0;

}

