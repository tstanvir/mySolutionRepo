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
	unsigned n,k;
	while(cin>>n>>k)
    {
        unsigned a,b;
        int maxans=-1000000000;
        int ans;
       // cout<<"maxa: "<<maxa<<endl<<"maxb: "<<maxb<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if(b>k)
                ans=(a-(b-k));
            else ans=a;
            //cout<<ans<<endl;
            if(ans>maxans) maxans=ans;

        }
        cout<<maxans<<endl;

    }


	 return 0;

}

