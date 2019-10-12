
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
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};

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
	//freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     int n,m,k;
     while(sf("%d%d%d",&n,&m,&k)!=EOF){
        int arr[m+1];
        int maxi=-1;
        for(int i=0;i<m+1;i++){
            sf("%d",&arr[i]);
            maxi=max(maxi,arr[i]);
        }
        int ans=0;
        vector<int>ideal;
        int nn=(int)log2((double)maxi);
        nn++;
        int idd=arr[m];
        while(idd>0){
            ideal.pb(idd%2);
            idd/=2;
        }
        //cout<<ideal.size()<<endl;
        for(int i=ideal.size();i<nn;i++) ideal.pb(0);
       // for(int i=0;i<ideal.size();i++) cout<<ideal[i]<<" ";
       // cout<<endl;
        for(int i=0;i<m;i++){
            int x=arr[i];
            vector<int>bakira;
            int freq=0;
            while(x>0){
                    bakira.pb(x%2);
            x/=2;
            }
            for(int j=bakira.size();j<nn;j++) bakira.pb(0);
            //for(int j=0;j<bakira.size();j++) cout<<bakira[j]<<" ";
            //cout<<endl;
            for(int j=0;j<ideal.size();j++){
                freq+=(ideal[j]^bakira[j]);
            }
            //cout<<freq<<" "<<k<<endl;
            if(freq<=k) ans++;
        }
        pf("%d\n",ans);
     }

	 return 0;

}
