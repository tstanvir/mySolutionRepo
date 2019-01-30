#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
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
	int n,k;
	while(cin>>n>>k)
    {
        int arr[1000];
        bool prime[n+1];
        SET(prime);
        //cout<<prime[0]<<endl;
        int limit=sqrt(n);
        for(int i=2;i<=n;i++)
        {
            if(!prime[i])
            {
                if(i<=limit)
                {
                    for(int j=i*i;j<=n;j+=i)
                        prime[j]=1;
                }

            }
        }
        int b=0;
        for(int i=2;i<=n;i++){
                if(!prime[i]) {arr[b]=i; b++;}

        }
        //for(int i=0;i<b;i++) cout<<arr[i]<<endl;
        map<int,bool>m;
        //int arr1[b+1];
        m[arr[0]]=1;
        for(int i=1;i<b;i++)
            m[arr[i]+arr[i-1]]=1;
        int cnt=0;
        for(int i=b-1;i>=0;i--)
        {
            int g=--arr[i];
            if(m[arr[i]]==1) cnt++;
            if(cnt==k) break;

        }
        if(cnt==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //for(int i=0;i<b;i++) cout<<arr1[i]<<endl;
    }

	 return 0;

}

