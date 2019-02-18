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
        int maxi=-1;
        int arr[n];
        for(int i=0;i<n;i++) {cin>>arr[i];if(arr[i]>=maxi) maxi=arr[i];}
        int cnt=0;
        int ma=-1;
        //cout<<maxi<<endl;
        for(int i=0;i<n;i++)
        {
            if(maxi==arr[i]) cnt++;
            else{
                if(cnt>=ma) ma=cnt;
                cnt=0;
            }
            if(i==n-1)
            {
                if(cnt>=ma) ma=cnt;
                cnt=0;
            }
        }
        cout<<ma<<endl;
    }

	 return 0;

}

