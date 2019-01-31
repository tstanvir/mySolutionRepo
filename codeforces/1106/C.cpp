#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
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
	int n;
	while(cin>>n)
    {
        int arr[n+1];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        ll ans=0;
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            ans+=((arr[i]+arr[j])*(arr[i]+arr[j]));
            //cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }

	 return 0;

}

