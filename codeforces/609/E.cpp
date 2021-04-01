/// Bismillahir Rahmanir Rahim
//Author: Tanvir Hussain
//ICE,NSTU
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

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
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define cases(cs,t) for(int cs=1;cs<=t;cs++)
#define PI acos(-1)
#define no1 __builtin_popcount
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define uniq(vec) vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define sz(a) int(a.size())
#define ff first
#define ss second
//#define endl "\n"
#define forch(it,s) for(auto it:s)
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef tree<pair<int, int>,null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
const int maxx=200005;

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
double sq(double x) {return x*x;}
int ext_gcd(int a, int b, int & x, int & y) {
    //for finding modular inverse
    //if its return 1 ,then a has a mod inverse x mod b.
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int d = ext_gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}
void solve(){

}
struct node{
    ll u,v,w,id;
    bool operator<(const node o)const{
        return w<o.w;
    }
};
struct node2{
    ll v,w;
};
vector<node>edg;
vector<node>mst,extra;
vector<node2>g[maxx];
vll deg(maxx);
vll Size(maxx);
vll arr(maxx);
vll pred(maxx,-1);
vll height(maxx,highest(ll));
vll vis(maxx,0);
int Log;
vector<vector<ll>>sparT(maxx,vector<ll>(50,-1)),maxie(maxx,vector<ll>(50,-1));
map<pair<ll,ll>,ll>mm;

ll n,m;
int root(int i){
    while(i!=arr[i]){
        arr[i]=arr[arr[i]];
        i=arr[i];
    }
    return i;
}
void wei_uni(int a,int b){
    int roota=root(a),rootb=root(b);
    if(Size[roota]>Size[rootb]){
        arr[rootb]=roota;
        Size[roota]+=Size[rootb];
    }
    else{
        arr[roota]=rootb;
        Size[rootb]+=Size[roota];
    }
}
void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=1;
    height[src]=0;
    pred[src]=-1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        forch(it,g[u]){
            int v=it.v;
            if(!vis[v]){
                vis[v]=1;
                height[v]=height[u]+1;
                q.push(v);
                pred[v]=u;
            }
        }

    }
}
void lca_build(){
    rep1(i,1,n){
        sparT[i][0]=pred[i];
        maxie[i][0]=max(mm[{i,pred[i]}],mm[{pred[i],i}]);
    }
    //cout<<"heda4"<<endl;
    for(int j=1;1<<j<=n;j++){
        rep1(i,1,n){
            //cout<<"heda "<<i<<" "<<j<<endl;
            if(sparT[i][j-1]!=-1){
                sparT[i][j]=sparT[sparT[i][j-1]][j-1];
                maxie[i][j]=max(maxie[i][j-1],maxie[sparT[i][j-1]][j-1]);
            }
        }
    }
}
int lca_qu(int a,int b){
    //cout<<a<< " "<<b<<endl;

    if(height[a]<height[b]) swap(a,b);
    Log =1;
    while(1){
        int next=Log+1;
        if(1<<next>height[a]) break;
        Log++;
    }
   // cout<<"log: "<<log<<endl;
   ll hd=height[a]-height[b];
    irep(i,Log,0){
        if(hd<1<<i) continue;
        hd-=(1<<i);
        a=sparT[a][i];
    }
   // cout<<a<<" "<<b<<endl;
   //cout<<"heda: "<<maxia<<endl;
    if(a==b){
        return a;
    }
   // cout<<"log: "<<log<<endl;
    irep(i,Log,0){
        if(sparT[a][i]!=-1 && sparT[a][i]!=sparT[b][i]){
            a=sparT[a][i],b=sparT[b][i];
            //cout<<"inner: "<<a<<" "<<b<<endl;
        }
    }
    return pred[a];

}
int getMaxUp(int v, int dh)
{
    ll res = 0;
    for (int k = Log; k >= 0; k--)
    {
        if (dh < (1 << k)) continue;
        dh -= 1 << k;
        res = max(res, maxie[v][k]);
        v = sparT[v][k];
    }
    return res;
}
int getMax(int v, int u)
{
    int w = lca_qu(v, u);
    return max(getMaxUp(v, height[v] - height[w]), getMaxUp(u, height[u] - height[w]));
}
int main()

{
    IOS;
    /*#ifndef ONLINE_JUDGE
        freopen ("data.in","r",stdin);
        freopen ("data.out","w",stdout);
    #endif*/
    rep(i,maxx) arr[i]=i,Size[i]=1;
    cin>>n>>m;
    rep(i,m){
        int u,v,w;
        cin>>u>>v>>w;
        edg.pb({u,v,w,i});
    }
    //cout<<"heda1"<<endl;
    sort(ALL(edg));
    vll ans(m,0);
    ll mstw=0;
    rep(i,m){
        int u=edg[i].u,v=edg[i].v,w=edg[i].w,id=edg[i].id;
        if(root(u)!=root(v)){
            mm[{u,v}]=w;
            mm[{v,u}]=w;
            mstw+=w;
            wei_uni(u,v);
            mst.pb({u,v,w,id});
            g[u].pb({v,w});
            g[v].pb({u,w});
            deg[u]++;
            deg[v]++;
        }
        else{
            extra.pb({u,v,w,id});
        }
    }
    //cout<<"heda2"<<endl;
    //forch(it,mst){
        ////cout<<it.u<<" "<<it.v<<" "<<it.w<<endl;
    //}
    rep1(i,1,n){
        if(deg[i]==1){
               // cout<<i<<endl;
            bfs(i);
            break;
        }
    }
    forch(it,mst){
       //cout<<it.u<<" "<<it.v<<" "<<it.w<<" "<<it.id<<endl;
        ans[it.id]=mstw;
    }

    lca_build();
    //cout<<"heda3"<<endl;
    //rep1(i,1,n){
        //  cout<<height[i]<<" "<<pred[i]<<endl;
  //  }
    /*rep1(i,1,n){
        cout<<i<<": \n";
        rep(j,3){
            cout<<sparT[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    rep1(i,1,n){
        cout<<i<<": \n";
        rep(j,3){
            cout<<maxie[i][j]<<" ";
        }
        cout<<endl;

    }*/

    //cout<<"heda"<<endl;
    forch(it,extra){
        ll u=it.u,v=it.v,w=it.w,id=it.id;
       // cout<<u<<" "<<v<<" "<<lca_qu(u,v)<<endl;
        ans[id]=mstw-getMax(v,u)+w;
    }
    rep(i,m){
        cout<<ans[i]<<endl;
    }


    return 0;

}
///Alhamdulillah

