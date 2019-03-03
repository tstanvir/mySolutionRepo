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

int main()

{
	IOS;
	int n,m,k;
	while(cin>>n>>m>>k)
    {
        map<int,int>mp,mp22;
        for(int i=1;i<=n;i++) {int x;cin>>x;mp[i]=x;mp22[x]=i;}
        vector<int>vec[m+1];
        for(int i=1;i<=n;i++) {
            int x;
            cin>>x;
            vec[x].pb(mp[i]);
        }
        vector<int>kval;
        for(int i=1;i<=k;i++) {int x;cin>>x;kval.pb(x);}
        int cnt=0;
        for(int i=1;i<=m;i++)
        {
            sort(ALL(vec[i]));
            reverse(ALL(vec[i]));
            int x=vec[i][0];
            auto p=find(kval.begin(),kval.end(),mp22[x]);
            if(p!=kval.end()) cnt++;
        }
        cout<<kval.size()-cnt<<endl;

    }

	 return 0;

}

