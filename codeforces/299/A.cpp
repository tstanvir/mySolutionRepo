#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
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
        ll arr[n];
        ll maxi=1e10;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<maxi) maxi=arr[i];
        }
        bool b=false;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%maxi!=0)
            {
                b=true;
                break;
            }
        }
        if(!b) cout<<maxi<<endl;
        else cout<<-1<<endl;
    }

	 return 0;

}

