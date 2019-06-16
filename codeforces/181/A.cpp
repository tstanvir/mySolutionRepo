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
        int r[n+1],c[k+1];
        SET(r),SET(c);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                char a;
                cin>>a;
                if(a=='*') r[i+1]++,c[j+1]++;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(r[i]==1){
                cout<<i<<" ";
                break;
            }
        }
        for(int i=1;i<=k;i++)
        {
            if(c[i]==1){
                cout<<i<<endl;
                break;
            }
        }


    }

	 return 0;

}

