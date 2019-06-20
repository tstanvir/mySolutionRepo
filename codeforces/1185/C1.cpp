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
	int n,m;
	while(cin>>n>>m)
    {
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.pb(a);
        }
        int prefix[n];
        int ans[n];
        prefix[0]=v[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+v[i];
        }
        ans[0]=0;
        for(int i=1;i<n;i++)
        {

            if(prefix[i]<=m){
                ans[i]=0;
            }
            else
            {
                int cnt=0;
                sort(v.begin(),v.begin()+i);
                int diff=prefix[i];
                int j=i-1;
                while(j>=0 && diff>m){

                        diff-=v[j];
                        cnt++;
                        j--;
                }
                if(diff<=m)
                {
                    ans[i]=cnt;

                }

            }
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }

	 return 0;

}

