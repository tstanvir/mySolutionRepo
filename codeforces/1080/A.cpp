#include<bits/stdc++.h>

using namespace std;

#define PI 3.1415926535897932384626433832795
#define REP(i,n) for(int i=0;i<(n);i++)
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define mp make_pair
#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#define np std::string::npos
#define INF Ox3f3f3f3f

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
	ll n,k,r,g,b;
	cin>>n>>k;
    r=2*n;g=5*n;b=8*n;
    ll res=0;
    res=(r/k)+(g/k)+(b/k);
    if(((r/k)*k)<r) res++;
    if(((g/k)*k)<g) res++;
    if(((b/k)*k)<b) res++;
    cout<<res<<endl;
	 return 0;

}

