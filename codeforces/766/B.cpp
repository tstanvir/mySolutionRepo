#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define p printf

#define s scanf

#define ALL(x) x.begin(),x.end()
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
        ll arr1[n+7];
        for(int i=1;i<=n;i++) cin>>arr[i];
        sort(arr+1,arr+n+1);
        for(int i=1,j=3;i<=n;i++)
        {
            if(i!=1)
            {
                arr1[j]=arr[i]+arr[i-1];
                j++;
            }
        }
        //for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
        //cout<<endl;
        //for(int i=3;i<=n;i++) cout<<arr[i]<<" "<<arr1[i]<<endl;
        bool b=false;
        for(int i=3;i<=n;i++)
        {
            if(arr1[i]>arr[i]) {b=true;break;}
        }
        if(b)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

	 return 0;

}

