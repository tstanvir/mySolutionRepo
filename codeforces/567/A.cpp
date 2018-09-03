#include<bits/stdc++.h>

using namespace std;

#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#define np std::string::npos

int main()

{
	IOS;
	int n;
	while(cin>>n)
    {
        long long arr[n+1];
        for(int i=1;i<=n;i++) cin>>arr[i];
        vector<ll>maxi,mini;
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            {
                mini.pb(abs(arr[i]-arr[i+1]));
                maxi.pb(abs(arr[i]-arr[n]));
            }
            else if(i==n)
            {
               mini.pb(abs(arr[i]-arr[i-1]));
               maxi.pb(abs(arr[i]-arr[1]));
            }
            else
            {
                ll mn;
                mn=min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
                mini.pb(mn);

                ll mx;
                mx=max(abs(arr[i]-arr[1]),abs(arr[i]-arr[n]));
                maxi.pb(mx);
            }

        }
        for(int i=0;i<n;i++) cout<<mini[i]<<" "<<maxi[i]<<endl;
    }

	 return 0;

}

