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


//this fuction sorts arrtor pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	int n;
	while(cin>>n)
    {
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int>vec;
        int cur=arr[0];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==cur) cnt++;
            if(arr[i]!=cur)
            {
                cur=arr[i];
                vec.pb(cnt);
                cnt=1;
            }
            if(i==n-1)
            {
                vec.pb(cnt);
            }
            //cout<<"cur: "<<cur<<endl;
        }
        int ans=INT_MIN;
        for(int i=0;i<vec.size()-1;i++)
        {
           int mini=min(vec[i],vec[i+1]);
           ans=max(ans,mini*2);
        }
        cout<<ans<<endl;

    }

	 return 0;

}

