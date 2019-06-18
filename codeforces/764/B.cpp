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
	int n;
	while(cin>>n)
    {
        int arr[n+1];
        int ans[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        if(n%2)
        {
            int lim=n/2;
            int i=1;
            ans[lim+1]=arr[lim+1];
            while(lim)
            {

                if(i%2)
                {
                    ans[i]=arr[n-i+1];
                    ans[n-i+1]=arr[i];
                }
                else
                {
                    ans[i]=arr[i];
                    ans[n-i+1]=arr[n-i+1];
                }
                i++;
                lim--;
            }
        }
        else
        {
            int lim=n/2;
            int i=1;
            while(lim)
            {
                if(i%2)
                {
                    ans[i]=arr[n-i+1];
                    ans[n-i+1]=arr[i];
                }
                else
                {
                    ans[i]=arr[i];
                    ans[n-i+1]=arr[n-i+1];
                }
                i++;
                lim--;
            }
        }
        for(int i=1;i<=n;i++ ) cout<<ans[i]<<" ";
        cout<<endl;
    }

	 return 0;

}

