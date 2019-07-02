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
	int q;
	cin>>q;
	map<string,string>mm,mm1;
	map<string,int>mm3;
	vector<string>vec;
	vector<pair<string,string>>ans;
	forn(i,q){
	    string a,b;
	    cin>>a>>b;
	    mm[a]=b;
	    vec.pb(a);
    }
    for0(i,vec.size()){
        string tmp=mm[vec[i]];
        //cout<<tmp<<endl;
        while(mm[tmp]!="\0"){
               // cout<<"i: "<<i<<endl;
                //cout<<"v[i]: "<<vec[i]<<" "<<tmp<<endl;
            mm[vec[i]]=mm[tmp];
            string tmp1=tmp;
            //cout<<"tmp1: "<<tmp1<<"vec[i]: "<<vec[i]<<endl;
            tmp=mm[tmp];
             mm.erase(tmp1);
            //cout<<"mm[tmp1]: "<<mm[tmp1]<<endl;
        }
        if(mm[vec[i]]!="\0") ans.pb(mp(vec[i],mm[vec[i]]));
        //cout<<endl;
    }
    cout<<ans.size()<<endl;
    for0(i,ans.size()){
        cout<<ans[i].first<<' '<<ans[i].second<<endl;
    }

	 return 0;

}

