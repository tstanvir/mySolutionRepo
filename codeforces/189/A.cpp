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
	int n,a,b,c;
	while(cin>>n)
    {
        int arr[3];
        for(int i=0;i<3;i++) cin>>arr[i];
        sort(arr,arr+3);
        int maxi=0;
        int cnt;
        bool b=false;
        for(int i=0;i<=n/arr[2];i++)
        {
            
            for(int j=0;j<=n/arr[1];j++)
            {
                for(int k=0;k<=n/arr[0];k++)
                {
                    if(((arr[0]*k)+(arr[1]*j)+(arr[2]*i))==n) {cnt=i+j+k; b=true;break;}
                }
                if(b) break;

            }
            maxi=max(cnt,maxi);
        }
        cout<<maxi<<endl;

    }

	 return 0;

}

