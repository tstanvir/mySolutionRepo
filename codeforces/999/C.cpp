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
    return a.second<b.second;
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
	while(cin>>n>>k)
    {
        string s;
        cin>>s;
        vector<pair<char,int>>v;
        for(int i=0;i<n;i++)
        {
            v.pb(mp(s[i],i));
        }

        sort(ALL(v));
        sort(v.begin()+k,v.end(),sortinrev);
        for(int i=k;i<n;i++)
        {
            cout<<v[i].first;

        }
        cout<<endl;
       // for(int i=97;i<=122;i++) cout<<(char)i<<" "<<m[i]<<endl;

    }

	 return 0;

}

