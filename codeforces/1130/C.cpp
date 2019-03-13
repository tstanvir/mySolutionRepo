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
string s[52];int n;
int fx[]={0,0,1,-1};
int fy[]={1,-1,0,0};
void DFS(int i,int j, vector< pair<int ,int> > &v)
{
    //cout<<"I: "<<i<<" J: "<<j<<endl;
    v.pb(mp(i,j));
    s[i][j]='1';
    for(int k=1;k<=4;k++)
    {
        int x,y;
        x=i+fx[k-1];
        y=j+fy[k-1];
        if(x>=0&&x<n&&y>=0&&y<n&&s[x][y]=='0')
        {
            DFS(x,y,v);
        }
    }
}

int main()

{
	IOS;

	while(cin>>n)
    {
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        for(int i=0;i<n;i++) cin>>s[i];
        vector< pair<int,int> > u,v;
        DFS(r1-1,c1-1,u);
        DFS(r2-1,c2-1,v);
        //cout<<u.size()<<endl;
        //cout<<v.size()<<endl;
        int cost=INT_MAX;
        for(auto p:u)
        {
            for(auto q:v)
            {
                cost=min(cost,(((p.first-q.first)*(p.first-q.first))+((p.second-q.second)*(p.second-q.second))));
            }
        }
        cout<<cost<<endl;


    }

	 return 0;

}

