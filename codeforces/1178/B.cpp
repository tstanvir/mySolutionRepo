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
	string s;
	while(cin>>s)
{
    ll pre[s.size()]={0},post[s.size()]={0};
    for(int i=0;i<s.size();i++){
        if(i==0) continue;
        if(s[i]=='v'&&s[i-1]=='v'){
            pre[i]=pre[i-1]+1;
        }
        else pre[i]=pre[i-1];
    }

    for(int i=s.size()-1;i>=0;i--){
            //cout<<post[i]<<endl;
        if(i==s.size()-1) continue;
        if(s[i]=='v'&&s[i+1]=='v'){
            post[i]=post[i+1]+1;
        }
        else post[i]=post[i+1];

    }
    //for(int i=0;i<s.size();i++) cout<<pre[i]<<" "<<post[i]<<endl;
    ll ans=0;
    for(int i=0;i<s.size();i++)
    {

        if(s[i]=='o'){
            ans+=pre[i]*post[i];
        }
    }
    cout<<ans<<endl;
    //for(int i=0;i<vec.size();i++) cout<<pre[i]<<" "<<post[i]<<endl;
}
return 0;

}

