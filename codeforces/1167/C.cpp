#include<bits/stdc++.h>

using namespace std;

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
const int maxN=5e5+100;
int roots[maxN];
int cnts[maxN];
int Find(int x)
{
    if(x==roots[x]) return x;
    return roots[x]=Find(roots[x]);
}
void Union(int u,int v)
{
    u=Find(u),v=Find(v);
    if(u!=v)
    {
        roots[u]=v;
        cnts[v]+=cnts[u];
    }
}
int main()
{
	IOS;
	int n,m;
	while(cin>>n>>m)
    {
        iota(roots,roots+n+1,0);
        fill_n(cnts,n+1,1);
        while(m--)
        {
            int num;
            cin>>num;
            if(!num) continue;
            int f;
            cin>>f;
            for(int i=0;i<num-1;i++)
            {
                int l;
                cin>>l;
                Union(f,l);
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout<<cnts[Find(i)]<<" ";
        }
        cout<<endl;
    }

	 return 0;

}

