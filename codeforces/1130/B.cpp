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
	int n;
	while(cin>>n)
    {
        vector< pair<int,int> > vec;
        for(int i=1;i<=2*n;i++)
        {
            int x;
            cin>>x;
            vec.pb(mp(x,i));
        }
       // cout<<"vec: :"<<endl;
       // for(int i=0;i<vec.size();i++) cout<<vec[i].first<<" "<<vec[i].second<<endl;
        sort(ALL(vec));
        ll ans=(vec[0].second-1)+(vec[1].second-1);
       //cout<<ans<<endl;
        for(int i=2;i<vec.size();i+=2)
        {
            ans+=min((abs(vec[i].second-vec[i-2].second)+abs(vec[i+1].second-vec[i-1].second)),(abs(vec[i].second-vec[i-1].second)+abs(vec[i+1].second-vec[i-2].second)));
            //cout<<ans<<endl;
        }
       cout<<ans<<endl;
    }

	 return 0;

}

