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
        vector<int>div;
        int lim=sqrt(n);
        for(int i=1;i<=lim;i++)
        {
            if(n%i==0)
            {
                if(n/i==i) div.pb(n/i);
                else {
                    div.pb(i);div.pb(n/i);
                }
            }
        }
        sort(ALL(div));
        //reverse(ALL(div));
        string s;
        cin>>s;
        for(int i=0;i<div.size();i++)
        {
            string tmp=s.substr(0,div[i]),tmp1=s.substr(div[i],n-div[i]);
            reverse(ALL(tmp));
            s=tmp+tmp1;
        }
        cout<<s<<endl;
    }

	 return 0;

}

