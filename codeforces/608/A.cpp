#include<bits/stdc++.h>

using namespace std;

#define PI 3.1415926535897932384626433832795
#define REP(i,n) for(int i=0;i<(n);i++)
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define mp make_pair
#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#define np std::string::npos

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
	int n,s;
	while(cin>>n>>s)
    {
        int state=s;
        vector<pair<int,int> > bal;
        for(int i=0;i<n;i++) {int a,b; cin>>a>>b; bal.pb(mp(a,b));  }
        sort(bal.begin(),bal.end(),sortinrev);
        //for(int i=0;i<n;i++) cout<<bal[i].second<<endl;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=state-bal[i].first;
            state=bal[i].first;
            if(bal[i].second>(sum)) sum+=bal[i].second-(sum);
            //cout<<sum<<endl;
        }
        sum+=state-0;
        cout<<sum<<endl;
    }

	 return 0;

}

