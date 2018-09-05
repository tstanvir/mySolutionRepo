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
	int n,zero,one;
	while(cin>>n>>zero>>one)
    {
        int arr[n+2];
        for(int i=1;i<=n;i++) cin>>arr[i];
        double limit=ceil((double)n/2);
        //cout<<limit<<endl;
        int sum=0;
        for(int i=1;i<=limit;i++,n--)
        {
            //cout<<arr[i]<<endl<<arr[n]<<endl;
            if(arr[i]==arr[n] && arr[n]==2)
            {
               // cout<<"ab"<<endl;
                if(i==n){
                    if(zero<one) sum+=zero;
                    else sum+=one;
                }
                else
                {
                    if(zero<one) sum+=2*zero;
                    else sum+=2*one;
                }
            }
            else if(arr[i]!=arr[n])
            {
                if(arr[i]==0 && arr[n]==1 || arr[i]==1 && arr[n]==0)
                {
                    sum=-1;
                    break;
                }
                else
                {
                    if(arr[i]==0 || arr[n]==0) sum+=zero;
                    else sum+=one;
                }
            }
        }
        cout<<sum<<endl;
    }

	 return 0;

}

