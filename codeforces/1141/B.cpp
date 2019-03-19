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
        for(int i=0;i<n;i++) cin>>arr[i];
        int cnt=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1) cnt++;
            else if(arr[i]==0)
            {
                if(maxi<=cnt) maxi=cnt;
                cnt=0;
            }
        }
        //cout<<maxi<<endl;
        int cn2=0,cn1=0;
        for(int i=0,j=n-1;i<n&&j>=0;)
        {
            if(arr[i]==1)
            {
                cn1++;
                i++;
            }
            if(arr[j]==1)
            {
                cn2++;
                j--;
            }
            else if(arr[i]==0&&arr[j]==0)
            {
                if(maxi<=(cn1+cn2)) {
                    maxi=(cn1+cn2);

                }
                 break;
            }
        }
        cout<<maxi<<endl;
    }

	 return 0;

}

