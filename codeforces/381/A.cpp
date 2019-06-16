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
        vector<int>v;
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            v.pb(a);
        }
        int s=0,d=0;
        int i=0,j=n-1,t=1;
        while((int)v.size()>0)
        {
            if(t%2)
            {
                if(v[i]>=v[j])
                {
                    s+=v[i];v.erase(v.begin());
                }
                else
                {
                    s+=v[j]; v.erase(v.end()-1);
                }
            }
            else
            {
                if(v[i]>=v[j])
                {
                    d+=v[i];v.erase(v.begin());
                }
                else
                {
                    d+=v[j]; v.erase(v.end()-1);
                }
            }
            //cout<<"getin"<<endl;
            //cout<<s<<" "<<d<<endl;

            t++;
            i=0,j=v.size()-1;
        }
        cout<<s<<" "<<d<<endl;
    }

	 return 0;

}

