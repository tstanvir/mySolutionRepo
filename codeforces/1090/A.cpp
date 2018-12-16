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
#define INF Ox3f3f3f3f

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
	int n;
	cin>>n;ll maxi[n+1];CLR(maxi);ll mm[n+1];
	for(int j=0;j<n;j++)
    {
        int m;
        cin>>m;
        //int arr[n+1][m+1];

        mm[j]=m;


        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            if(a>maxi[j]) maxi[j]=a;
            //cout<<maxi[i]<<endl;
        }
    }
   // for(int i=0;i<n;i++) cout<<maxi[i]<<endl;
   ll maxiel=-1;
   int maxindex;
   for(int i=0;i<n;i++)
   {
       if(maxi[i]>maxiel) {maxiel=maxi[i];maxindex=i;}
   }
   mm[maxindex]=1LL;
   //cout<<*maxiel<<endl;
   ll ans=0;
   for(int i=0;i<n;i++)
   {
       ans+=((maxiel-maxi[i])*mm[i]);
   }
   cout<<ans<<endl;

	 return 0;

}

