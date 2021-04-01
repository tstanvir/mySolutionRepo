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
int cntdif(string bal[],string sub,int lim){
    int mini=INT_MAX;
    for(int j=0;j<3;j++){
            int cnt=0;
    for(int i=0;i<sub.size();i++){
        if(sub[i]!=bal[j][i]) cnt++;
    }
    mini=min(mini,cnt);
    }
    return mini;
}

int main()

{
	IOS;

    int t;
    string whole="";
    for(int i=0;i<2005;i++){
        if(i%3==0) whole.pb('R');
        if(i%3==1) whole.pb('G');
        if(i%3==2) whole.pb('B');
    }
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==1) cout<<0<<endl;
        else {
            string tmp[3]="";
            for(int i=0;i<3;i++){
                for(int j=i;j<k+i;j++){
                    tmp[i].pb(whole[j]);
                }
            }
           // for(int i=0;i<3;i++) cout<<tmp[i]<<endl;
           // cout<<"bal"<<endl;
            int mini=INT_MAX;
            for(int i=0;i<=s.size()-k;i++){
                string bal=s.substr(i,k);
                mini=min(cntdif(tmp,bal,k),mini);

            }
            cout<<mini<<endl;


        }
    }
	 return 0;

}

