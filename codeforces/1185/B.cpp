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
        while(n--)
        {
            string a,b;
            cin>>a>>b;
            if(a.size()>b.size()) {cout<<"NO"<<endl;continue;}
            if(a[0]!=b[0]){cout<<"NO"<<endl;continue;}
            int acnt=1,bcnt=1;
            bool bb=false;
            while(bcnt<b.size()){
                if(a[acnt]==b[bcnt]){
                    acnt++;
                    bcnt++;
                }
                else if(a[acnt]!=b[bcnt]&&b[bcnt]==b[bcnt-1])
                {
                    bcnt++;
                }
                else
                {
                    bb=true;
                    break;
                }
            }
            if(acnt<a.size()) bb=true;
            if(bb) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;




        }
    }

	 return 0;

}

