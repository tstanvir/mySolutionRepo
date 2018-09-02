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
    int n,s;
    while(cin>>n>>s)
    {
        int arr[n+10];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll bal=0;
        sort(arr,arr+n);

        if(arr[n/2]<s)
        {
            for(int i=n/2;i<n;i++)
                if(arr[i]<s) {bal+=s-arr[i];  if(arr[i]>s) break; }
        }
        else
            for(int i=n/2;i>=0;i--)
                if(arr[i]>s) {bal+=arr[i]-s; if(arr[i]<s) break; }
        cout<<bal<<endl;



        //cout<<bal<<endl;
    }
	 return 0;

}

