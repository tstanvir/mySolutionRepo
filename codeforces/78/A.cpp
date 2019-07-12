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

int main()

{
	IOS;
    string s[3];
    for(int i=0;i<3;i++) getline(cin,s[i]);
    map<int,int>mm;
    for(int i=0;i<3;i++){
            int cnt=0;
        for(int j=0;j<s[i].size();j++){
            if(s[i][j]=='a' or s[i][j]=='e' or s[i][j]=='i' or s[i][j]=='o' or s[i][j]=='u') cnt++;
        }
        mm[i+1]=cnt;
    }
    if(mm[1]==5&&mm[2]==7&&mm[3]==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
	 return 0;

}

