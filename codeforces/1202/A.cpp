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
string sum(string a,string b){
    int lim=min(a.size(),b.size());
    int carry=0;
    string tmp="";
    reverse(ALL(a)),reverse(ALL(b));
    for(int i=0;i<lim;i++){
        int bal=(a[i]-'0')+(b[i]-'0')+carry;
        tmp.pb((bal%2)+'0');
        carry=bal/2;
    }
    int maxi=max(a.size(),b.size());
    if(maxi==a.size()){
        for(int i=lim;i<a.size();i++){
            int bal=(a[i]-'0')+carry;
            tmp.pb((bal%2)+'0');
            carry=bal/2;
        }
        if(carry>0) tmp.pb(carry+'0');
    }
    else{
        for(int i=lim;i<b.size();i++){
            int bal=(b[i]-'0')+carry;
            tmp.pb((bal%2)+'0');
            carry=bal/2;
        }
        if(carry>0) tmp.pb(carry+'0');
    }
    return tmp;
}

int main()

{
	IOS;
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        reverse(ALL(a)),reverse(ALL(b));
        int n=0;
        while(b[n]!='1') n++;
        int m=n;
        while(a[m]!='1') m++;
        cout<<m-n<<endl;
    }
	 return 0;

}

