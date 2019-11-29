/// Bismillahir Rahmanir Rahim
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
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define cases(cs,t) for(int cs=1;cs<=t;cs++)
#define PI acos(-1)
typedef long long ll;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};

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
const int maxx=10004;
vector<int>edg[maxx];
int arr[maxx];
int size[maxx];
int visited[maxx];
int ans=1;
int brr[maxx];
int root(int x){
    while(x!=arr[x]){
        arr[x]=arr[arr[x]];
        x=arr[x];
    }
    return x;
}
void wei_union(int a,int b){
    int roota=root(a),rootb=root(b);
    if(roota==rootb) return ;
    if(size[roota]>size[rootb]){
        arr[rootb]=arr[roota];
        size[roota]+=size[rootb];
    }
    else {
        arr[roota]=arr[rootb];
        size[rootb]+=size[roota];
    }

}
void dfs(int src){
    //cout<<"src: "<<src<<endl;
    visited[src]=true;
    for(int i=0;i<edg[src].size();i++){
       // cout<<"inside: "<<edg[src][i]<<endl;
       // cout<<"ans: "<<ans<<endl;
        if(visited[edg[src][i]]==false){
            if(brr[edg[src][i]]!=brr[src]){
                ans++;
                //brr[edg[src][i]]=brr[src];
            }
            dfs(edg[src][i]);
        }
    }
}
int main()

{
	IOS;
	//freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     int n;
     while(cin>>n){

        for(int i=0;i<maxx;i++) edg[i].clear();
        SET(visited);
        //arr[1]=1;
        //size[1]=1;
        for(int i=2;i<=n;i++){
            int v;
            cin>>v;
            edg[i].pb(v);
            edg[v].pb(i);
            //wei_union(v,i);
        }
        for(int i=1;i<=n;i++) cin>>brr[i];
        ans=1;
        dfs(1);
        cout<<ans<<endl;

     }


	 return 0;

}
///Alhamdulillah
