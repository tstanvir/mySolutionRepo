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
#define INF Ox3f3f3f3f

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
        sort(arr,arr+n,greater<int>());
        int bal=arr[0]-arr[n-1];
        ll arr1st=0,arrsec=0;
        bool heda=false;
        for(int i=0;i<n;i++) if(arr[i]!=arr[0]) heda=true;
        if(!heda) cout<<arr[0]-arr[1]<<" "<<(ll)pow((ll)n,2)/2-(n/2)<<endl;
        else{
        for(int i=0;i<n;i++)
        {
            if( arr[i]==arr[0]) arr1st++;
            if( arr[i]==arr[n-1]) arrsec++;
        }
        ll chal=arr1st*arrsec;
        //cout<<arr1st<<endl<<arrsec<<endl;
        cout<<bal<<" "<<chal<<endl;
        }
    }

	 return 0;

}

