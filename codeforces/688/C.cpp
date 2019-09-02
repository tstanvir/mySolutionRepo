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
int fx[]={0,0,-1,1,+1,-1,-1,+1};
int fy[]={1,-1,0,0,+1,+1,-1,-1};


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
const int max_id=(int)1e5+5;
int color[max_id];
vector<int>edg[max_id],ans1,ans2;
//int vis[max_id];
void init(){
    for(int i=0;i<max_id;i++) edg[i].clear();
    for(int i=0;i<max_id;i++) color[i]=-1;
    ans1.clear(),ans2.clear();
    //SET(vis);
}
bool bfs(int src){
    color[src]=1;
   // vis[src]=1;
    ans1.pb(src);
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<edg[u].size();i++){
            if(color[edg[u][i]]==-1){
                color[edg[u][i]]=1-color[u];
                q.push(edg[u][i]);
               // vis[edg[u][i]]=1;
                if(color[edg[u][i]]==1)  ans1.pb(edg[u][i]);
                else if(color[edg[u][i]]==0) ans2.pb(edg[u][i]);
            }
            else if(color[edg[u][i]]==color[u]) return false;
        }
    }
    return true;
}
int main()

{
	IOS;
	int n,m;
	while(cin>>n>>m){
            init();
            set<int>st;
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            edg[a].pb(b);
            edg[b].pb(a);
            st.insert(a),st.insert(b);
        }
       // vec.resize(unique(ALL(vec))-vec.begin());
       // for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
       // cout<<endl;
       bool ok=false;
       for(auto i=st.begin();i!=st.end();i++){
         if(color[*i]==-1){
            if(!bfs(*i)){
                cout<<-1<<endl;
                ok=true;
                break;
            }
         }
       }
        if(!ok){
            cout<<ans1.size()<<endl;
            for(int i=0;i<ans1.size();i++) cout<<ans1[i]<<" ";
            cout<<endl<<ans2.size()<<endl;
            for(int i=0;i<ans2.size();i++){
                cout<<ans2[i]<<" ";
            }
            cout<<endl;
        }


	}
	 return 0;

}

