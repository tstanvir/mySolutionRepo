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
        int x=ceil((double)n/2);
        int pos=0,neg=0,zero=0;
        int arr[n];
        int negmaxi=-10001,posmini=100001;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                neg++;
                if(arr[i]>negmaxi) negmaxi=arr[i];
            }
            else if(arr[i]>0) {
                    pos++;
                    if(arr[i]<posmini) posmini=arr[i];

        }


    }
    if(pos>=x) cout<<posmini<<endl;
        else if(neg>=x) cout<<negmaxi<<endl;
        else cout<<0<<endl;
    }

	 return 0;

}

