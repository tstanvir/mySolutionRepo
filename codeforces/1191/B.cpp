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
pair<int,int> howmanyseq(vector<int>bal){
    int cnt=0;
    if(bal.size()>0) cnt=1;
    sort(ALL(bal));
    int mini=10;
    for(int i=1;i<bal.size();i++){
        if(bal[i]-bal[i-1]==1) cnt++;
        mini=min(mini,bal[i]-bal[i-1]-1);
        mini=max(1,mini);
    }
    pair<int,int>pp(cnt,mini);
    return pp;
}

int main()

{
	IOS;
	string a,b,c;
	while(cin>>a>>b>>c){
        vector<int>p,m,s;
        if(a[1]=='p') p.pb(a[0]-'0');
        else if(a[1]=='m') m.pb(a[0]-'0');
        else s.pb(a[0]-'0');
         if(b[1]=='p') p.pb(b[0]-'0');
        else if(b[1]=='m') m.pb(b[0]-'0');
        else s.pb(b[0]-'0');
         if(c[1]=='p') p.pb(c[0]-'0');
        else if(c[1]=='m') m.pb(c[0]-'0');
        else s.pb(c[0]-'0');
        int maxi=max(p.size(),max(s.size(),m.size()));
        if(maxi==p.size()){
            pair<int,int> aa=howmanyseq(p);
            set<int>st(ALL(p));
            int bb=p.size()-st.size()+1;
            cout<<min(3-aa.first,min(aa.second,3-bb))<<endl;
        }
        else if(maxi==s.size()){
            pair<int,int> aa=howmanyseq(s);
            set<int>st(ALL(s));
            int bb=s.size()-st.size()+1;
            cout<<min(3-aa.first,min(aa.second,3-bb))<<endl;
        }
        else if(maxi==m.size()){
            pair<int,int> aa=howmanyseq(m);
            set<int>st(ALL(m));
            int bb=m.size()-st.size()+1;
            cout<<min(3-aa.first,min(aa.second,3-bb))<<endl;
        }
}

	 return 0;

}

