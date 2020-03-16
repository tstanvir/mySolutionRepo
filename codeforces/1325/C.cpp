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
const int maxx=100005;

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
map<pair<int,int>,int>mm;
vector<int>edg[maxx];
int vis[maxx];
int cnt=1;
void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<edg[u].size();i++){
            int v=edg[u][i];

            if(!vis[v]){
               // cout<<u<<" "<<v<<endl;
               // cout<<edg[v].size()<<endl;
                if(edg[v].size()==1) {
                    mm[{u,v}]=cnt++;
                   // cout<<"inside: "<<mm[{u,v}]<<endl;
                }
                vis[v]=1;
                q.push(v);
            }
        }
    }
}

int main()

{
    IOS;
    //freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     int n;
     cin>>n;
     vector<pair<int,int>>vec;
     int deg[maxx];
     SET(deg);
     for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        deg[u]++,deg[v]++;
        edg[u].pb(v);
        edg[v].pb(u);
        vec.pb({u,v});
     }
    /* for(int i=1;i<=n;i++){
        if(deg[i]>=3){
            for(int j=0;j<edg[i].size();j++){
                mm[{i,edg[i][j]}]=cnt++;
            }
        }
     }
     for(int i=0;i<vec.size();i+=2){
            //cout<<vec[i].first<<" "<<vec[i].second<<endl;
           // cout<<vec[i+1].first<<" "<<vec[i+1].second<<endl<<endl;
            //cout<<endl<<mm[vec[i]]<<endl<<mm[vec[i+1]]<<endl;
        if(mm[vec[i]]==0 && mm[vec[i+1]]==0){
            cout<<(cnt-1)<<endl;
            cnt++;
        }
        else{
            if(mm[vec[i]]!=0) cout<<mm[vec[i]]-1<<endl;
            else if(mm[vec[i+1]]!=0) cout<<mm[vec[i+1]]-1<<endl;
        }
     }*/
     int cnt=0,cnt1=n-2;
     for(int i=0;i<vec.size();i++){
        if(deg[vec[i].first]==1 || deg[vec[i].second]==1) cout<<cnt++<<endl;
        else cout<<cnt1--<<endl;
     }


     return 0;

}
///Alhamdulillah
