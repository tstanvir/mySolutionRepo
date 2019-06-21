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
vector<pair<int,int>>vp;
int n;
void solve(int pos)
{
    vector<int>test;
    for(int i=0;i<n;i++) if(i!=pos) test.pb(vp[i].first);

    if(test.size()>2)
    {
    int dis=test[1]-test[0];
    for(int i=0;i<test.size()-1;i++)
    {
        if(test[i+1]-test[i]!=dis)
            return;
    }
    }
    cout<<vp[pos].second<<endl;
    exit(0);
}

int main()

{
	IOS;
	cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vp.pb(mp(a,i+1));

    }
    sort(ALL(vp));
    solve(0);
    solve(n-1);
    int maxi=0;
    for(int i=0;i<n-1;i++)
    {
        maxi=max(maxi,vp[i+1].first-vp[i].first);
    }
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(vp[i+1].first-vp[i].first!=maxi)
        {
            solve(i);
            solve(i+1);
            cnt++;
            if(cnt>2)
                break;
        }
    }
    cout<<-1<<endl;

    return 0;

}

