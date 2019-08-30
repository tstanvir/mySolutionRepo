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
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define cases(cs,t) for(int cs=1;cs<=t;cs++)
#define PI acos(-1)
typedef long long ll;
int fx[]={0,0,-1,1,+1,-1,-1,+1};
int fy[]={1,-1,0,0,+1,+1,-1,-1};


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
	int t;
	cin>>t;
	while(t--){
        ll n,pipe,pilar;
        cin>>n>>pipe>>pilar;
        string s;
        cin>>s;
        ll ans=((n+1)*pilar)+(n*pipe);
        int one=0;
        for(int i=0;i<s.size();i++) one+=s[i]-'0';
        if(one==0){
            cout<<ans<<endl;
            continue;
        }
        ans=(2*(n+1)*pilar)+(n*pipe);
        int first_one=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') {

                first_one=i;
                break;
            }
        }
        ans-=(first_one*pilar);
        int lastone=-1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                lastone=i;
                break;
            }
        }
        ans-=((n-lastone-1)*pilar);
        ans+=(2*pipe);
        for(int i=first_one;i<lastone;i++){
            if(s[i]=='1') continue;
            int l=i,r=i;
            for(int j=i+1;j<lastone;j++){
                if(s[j]=='0') r=j;
                else break;
            }
            if(l==r) continue;
            ll choice1=(r-l)*pilar;
            ll choice2=2*pipe;
            if(choice1>choice2) ans+=(choice2-choice1);
            //else ans+=choice2;
            i = r;

        }
        cout<<ans<<endl;
	}

	 return 0;

}

