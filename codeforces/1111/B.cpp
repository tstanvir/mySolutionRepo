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
	ll n,k,m;
	while(cin>>n>>k>>m)
    {
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        double ans=0;
        sort(arr,arr+n,greater<ll>());
        ll pre[n];
        for(ll i=0;i<n;i++){
            if(i==0) pre[i]=arr[i];
            else {
                pre[i]=arr[i]+pre[i-1];
            }
        }
        double ans2=0;
        for(ll i=0;i<=min(m,n-1);i++){
            ans2=((double)pre[n-i-1]+(double)min(m-i,k*(n-i)))/(double)(n-i);
            ans=max(ans,ans2);
        }

        cout<<fixed<<setprecision(20)<<ans<<endl;

    }

	 return 0;

}
