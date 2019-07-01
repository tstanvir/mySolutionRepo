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
	int n;
	cin>>n;
	string s;
	cin>>s;
	int m;
	cin>>m;
	map<pair<char,int>,int>mmm;
	string in[m];
	for(int i=0;i<m;i++) cin>>in[i];
	map<char,int>mmm2;
	for(int i=0;i<n;i++){
        mmm2[s[i]]++;
        mmm[{s[i],mmm2[s[i]]}]=i;
	}

	for(int i=0;i<m;i++){
        map<char,int>mmm3;
        for(int j=0;j<in[i].size();j++){
            mmm3[in[i][j]]++;
        }
        int ans=0;
        for(auto j=mmm3.begin();j!=mmm3.end();j++){
            ans=max(ans,mmm[{(*j).first,(*j).second}]);
        }
        cout<<ans+1<<endl;
	}


	 return 0;

}

