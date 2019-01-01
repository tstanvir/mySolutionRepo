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
	cin>>n;
	string a;
	cin>>a;
	int l=1,r=1;
	char fst=a[0],lst=a[n-1];
	for(int i=1;;i++)
    {
        //cout<<l<<endl;
        if(a[i]==fst) l++;
        else break;

    }
    for(int i=n-2;;i--)
    {
       // cout<<r<<endl;
        if(a[i]==lst) r++;
        else break;
    }
    //cout<<endl<<l<<" "<<r<<endl;
    if(fst==lst) cout<<((1LL*r+1)*(1LL*l+1))%998244353<<endl;
    else cout<<((1LL*r+1LL*l)+1)%998244353<<endl;



	 return 0;

}

