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
#define no1 __builtin_popcount
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
double sq(double x) {return x*x;}
int rals[405],road[405];
int G[405][405];
int Grd[405][405];
int visrl[405];
int visrd[405];
void bfs1(int src,int dest){
    queue<int>q;
    q.push(src);
    visrl[src]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=1;i<=dest;i++){
            if(u==i) continue;
            if(G[u][i] && !visrl[i]){
                visrl[i]=1;
                rals[i]=rals[u]+1;
                q.push(i);
                if(i==dest) return;
            }
        }
    }
}
void bfs2(int src,int dest){
    queue<int>q;
    q.push(src);
    visrd[src]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=1;i<=dest;i++){
            if(u==i) continue;
            if(Grd[u][i] && !visrd[i]){
                visrd[i]=1;
                road[i]=road[u]+1;
                q.push(i);
                if(i==dest) return;
            }
        }
    }
}

int main()

{
    IOS;
    //freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     int n,m;
     while(cin>>n>>m){
        SET(rals),SET(road);
        SET2d(G,405,405);
        SET2d(Grd,405,405);
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            G[u][v]=1;
            G[v][u]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j) continue;
                if(G[i][j]==0){
                    Grd[i][j]=1;
                    Grd[j][j]=1;
                }

            }
        }
        SET(visrd);
        SET(visrl);
        bfs1(1,n);
        bfs2(1,n);
        if(road[n]==0 || rals[n]==0) cout<<-1<<endl;
        else cout<<max(road[n],rals[n])<<endl;
     }

     return 0;

}
///Alhamdulillah
