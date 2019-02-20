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
	int n,m;
	while(cin>>n>>m)
    {
        ll a[5],b[5];
        for(int i=0;i<5;i++)
        {
            a[i]=n/5;b[i]=m/5;
        }
        int vn=n%5,vm=m%5;
        for(int i=1;i<=vn;i++) a[i]++;
        for(int i=1;i<=vm;i++) b[i]++;
        ll ans=a[0]*b[0];
        //for(int i=0;i<5;i++) cout<<a[i]<<" "<<b[i]<<endl;
        for(int i=1,j=4;i<5;i++,j--)
        {
            ans+=a[i]*b[j];
        }
        cout<<ans<<endl;

    }

	 return 0;

}

