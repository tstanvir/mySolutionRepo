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
	while(cin>>n>>k){
        string s;
        cin>>s;
        ll maxi=0;
        for(int i=0;i<n;i++){
            maxi+=(max(s[i]-'a','z'-s[i]));
        }
        if(maxi<k) cout<<"-1"<<endl;
        else{
                int i=0;
            while(k>0&&i<n){
                maxi=(max(s[i]-'a','z'-s[i]));
                int mini=min((int)maxi,k);
                //cout<<mini<<endl;
                //cout<<(int)s[i]<<endl;
                if(mini=='z'-s[i]) s[i]+=mini;
                else if(mini==s[i]-'a') s[i]-=mini;
                else {
                    if(mini<=s[i]-'a') s[i]-=mini;
                    else if(mini<='z'-s[i]) s[i]+=mini;
                }
                k-=mini;
                i++;
            }
            cout<<s<<endl;
        }


	}

	 return 0;

}

