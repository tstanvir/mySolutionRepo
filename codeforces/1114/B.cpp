#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos

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
        vector< pair<ll,int> > vec;
        for(int i=1;i<=n;i++) {
            int x;
            cin>>x;
            vec.pb({x,i});
        }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        ll ans=0;
        vector<int> index;
        for(int i=0;i<m*k;i++)
        {
            ans+=vec[i].first;
            index.pb(vec[i].second);
        }
        sort(index.begin(),index.end());
        cout<<ans<<endl;
        for(int i=m-1;i<m*k-1;i+=m)
            cout<<index[i]<<" ";

        cout<<endl;

    }

	 return 0;

}

