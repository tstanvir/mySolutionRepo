#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define pf printf

#define sf scanf

#define ALL(x) x.begin(),x.end()
#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos
typedef long long ll;


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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int cnt=1;
        int maxi=-1;
        for(int i=0;i<n;i++)
        {
            if(i+1<n&& arr[i]==arr[i+1]) cnt++;
            if(arr[i]!=arr[i+1]||i==n-1)
            {
                if(cnt>maxi) maxi=cnt;
                cnt=1;
            }
        }
        cout<<maxi<<endl;

    }
	 return 0;

}

