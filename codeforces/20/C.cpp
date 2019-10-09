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
int n,m;
vector<pair<int,int>>edg[100005];
int parent[100005];
int vis[100005];
int dist[100005];
void init(){
    for(int i=0;i<100005;i++) dist[i]=INT_MAX;
    for(int i=0;i<100005;i++) edg[i].clear();
    SET(vis);
  //  ans.clear();
    SET(parent);
}
void Print(int j){
    if(parent[j]==-1)
        return;
    Print(parent[j]);
    cout<<j<<" ";
}
void path(int st){
    dist[st]=0;
    multiset < pair <int,int> >s;
    s.insert({0,1});
   parent[0]=-1;
  //  bool ok=false;
    while(!s.empty()){
        pair<int,int>pp=*s.begin();
        s.erase(s.begin());
        int u=pp.second;
        //if(vis[u]) continue;
        vis[u]=1;
        //int next=-1;

        for(int i=0;i<edg[u].size();i++){
            int v=edg[u][i].first,w=edg[u][i].second;
            if(!vis[v]&&dist[u]+w<dist[v]){
                //if(dist[v]!=INT_MAX) s.erase(s.find({dist[v],v}));
                dist[v]=dist[u]+w;
                s.insert({dist[v],v});
                parent[v]=u;
            }
    }
}
}



int main()

{
	IOS;
	//freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     while(cin>>n>>m){
            init();
        while(m--){
            int u,v,w;
            cin>>u>>v>>w;
            edg[u].pb({v,w});
            edg[v].pb({u,w});

        }
        path(1);
        if(dist[n]==INT_MAX) {cout<<-1<<endl;continue;}
        Print(n);
        cout<<endl;

     }


	 return 0;
}
