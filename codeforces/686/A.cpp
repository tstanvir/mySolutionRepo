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
    ll n,x;
    while(cin>>n>>x)
    {
        char c;ll d,cnt=0;
        for(int i=1;i<=n;i++)
        {
            //getchar();
            cin>>c>>d;
            //cout<<c<<endl;

            if(c=='+') x+=d;
            else {
                if(x>=d) x-=d;
                else
                    cnt++;
            }
            //cout<<x<<endl;
        }
        cout<<x<<" "<<cnt<<endl;
    }
	 return 0;

}

