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
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
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
bool isSub(string str1, string  str2, int m, int n)
{
   int j = 0;
   for (int i=0; i<n&&j<m; i++)
       if (str1[j] == str2[i])
         j++;
   return (j==m);
}

int main()

{
	IOS;
	int t;
	cin>>t;
	while(t--){
        string s,t,p;
        cin>>s>>t>>p;
        if(!isSub(s,t,s.size(),t.size())){cout<<"NO"<<endl;continue;}
        map<char,int>mm,mm2;
        for(int i=0;i<t.size();i++) {
            mm[t[i]]++;
        }
        for(int i=0;i<s.size();i++){
            mm[s[i]]--;
        }
        for(int i=0;i<p.size();i++){
            mm2[p[i]]++;
        }
        bool bb=false;
        for(auto i=mm.begin();i!=mm.end();i++){
            if((*i).second>0){
                if(mm2[(*i).first]>=(*i).second) continue;
                else {bb=true;break;}
            }
        }
        if(bb) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
	}

	 return 0;

}

