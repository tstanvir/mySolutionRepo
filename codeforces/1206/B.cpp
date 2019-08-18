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
	int n;
	while(cin>>n){
        vector<int>neg,zero,pos;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==0) zero.pb(a);
            else if(a<0) neg.pb(a);
            else pos.pb(a);
        }
        ll ans=0;
        for(int i=0;i<pos.size();i++){
            ans+=(pos[i]-1);
        }
        for(int i=0;i<2*(neg.size()/2);i++){
            ans+=(abs(neg[i])-1);
        }int sz;
        sz=zero.size();
        if(neg.size()%2){

            if(zero.size()>0){
                ans+=(abs(neg[neg.size()-1])-1);
                ans++;
                sz--;
            }
            else{
                ans+=(abs(neg[neg.size()-1])+1);
            }

        }
        for(int i=0;i<sz;i++) ans++;
        /*if(zero.size()>0&&neg.size()%2){
                ans+=(abs(neg[neg.size()-1])-1);
                ans++;
                zero.erase(zero.begin());
        }
        else if(zero.size()==0&&neg.size()%2){
            ans+=(abs(neg[neg.size()-1])+1);
        }
        if(zero.size()>0){
            for(int i=0;i<zero.size();i++) ans++;
        }*/
        cout<<ans<<endl;
	}

	 return 0;

}

