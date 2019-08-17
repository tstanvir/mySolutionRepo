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
#define for1(i,n) for(int i=1;i<=n;i++)
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
vector<int>emp[2005];
vector<int>roots;
int level[2005];
int n;
int bfs(int src){
    level[src]=1;
    int depth=1;
    queue<int>q;
    q.push(src);
    while(!q.empty()){

        int u=q.front();
        //cout<<"u: "<<u<<endl<<"depth: "<<depth<<endl;
        q.pop();
        //depth++;
        for(int v=0;v<emp[u].size();v++){
            level[emp[u][v]]=level[u]+1;
            depth=level[u]+1;
            q.push(emp[u][v]);
        }
    }
    return depth;
}

int main()

{
	IOS;
	while(cin>>n){
        for1(i,n){
        int a;
        cin>>a;
        if(a==-1) {roots.pb(i); continue;}
        emp[a].pb(i);
        }
       // cout<<"baL"<<endl;
       /*for(int i=1;i<=n;i++){
            for(int j=0;j<emp[i].size();j++) cout<<"I: "<<i<<" "<<emp[i][j]<<" ";
            cout<<endl;
       }*/
        /*for(int i=1;i<=n;i++){
            for(int j=0;j<emp[i].size();j++) cout<<emp[i][j]<<" ";
            cout<<endl;
        }*/
        int maxi=-1;
        for(int i=0;i<roots.size();i++){
            maxi=max(maxi,bfs(roots[i]));
        }
        cout<<maxi<<endl;
        for(int i=0;i<2005;i++) emp[i].clear();
        roots.clear();
        SET(level);
	}

	 return 0;



}

