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
	int n,m;
	while(cin>>n>>m){
        ll arr[n],prefix[n];
        for0(i,n) {
            cin>>arr[i];
            if(i==0) {
                    prefix[i]=arr[i];
                    continue;
            }
            prefix[i]=prefix[i-1]+arr[i];
        }
        ll letter[m];
        for0(i,m) cin>>letter[i];
        for0(i,m){
            int low=lower_bound(prefix,prefix+n,letter[i])-prefix;
            cout<<low+1<<" "<<arr[low]-(prefix[low]-letter[i])<<endl;
        }

	}

	 return 0;

}

