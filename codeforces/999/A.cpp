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
	int n,k;
	while(cin>>n>>k)
    {
        vector<int>v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.pb(a);
        }
        int cnt=0;
        while(v.size())
        {
            if(v[0]>k&&v[v.size()-1]>k) break;
            if(v[0]<=k)
            {
                cnt++;
                v.erase(v.begin());
            }
            else if(v[v.size()-1]<=k)
            {
                cnt++;
                auto it=v.end();
                it--;
                v.erase(it);
            }
        }
        cout<<cnt<<endl;
    }

	 return 0;

}

