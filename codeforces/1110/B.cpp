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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll ans=0;
        //cout<<samne<<endl<<pichone<<endl<<endl;
        vector<int>vec;
        for(int i=0;i<n-1;i++) vec.pb(arr[i+1]-arr[i]-1);
        sort(vec.begin(),vec.end(),greater<ll>());
        ans=arr[n-1]-arr[0]+1;
        //cout<<ans<<endl;
        for(int i=0;i<k-1;i++)
        {
            ans-=vec[i];
        }
        cout<<ans<<endl;
    }

	 return 0;

}

