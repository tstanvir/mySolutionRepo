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
    while(cin>>n){
        ll arr[n/2];
        for(int i=0;i<n/2;i++) cin>>arr[i];
        ll ans[n];
        ans[0]=arr[0];
        arr[0]=0;
        ll maxi=0;
        for(int i=1;i<n/2;i++){
           //cout<<maxi<<endl;
           // cout<<arr[i]<<" "<<ans[i-1]<<endl;
            if(arr[i]<=ans[i-1]) ans[i]=arr[i]-maxi,arr[i]=maxi;
            else {
                    //cout<<"heda"<<endl;
                     maxi=max(maxi,arr[i]-ans[i-1]);
                    ans[i]=arr[i]-maxi,arr[i]=maxi;
            }

        }
        for(int i=(n/2)-1,j=n/2;i>=0;i--,j++){
            ans[j]=arr[i];
        }
        reverse(ans,ans+(n));
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;

}

