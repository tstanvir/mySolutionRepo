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
	ll n,k;
	while(cin>>n>>k)
    {
        if(n>k) cout<<1<<endl;
        else
        {
            ll ans=k/n;
            if(((k/n)*n)<k) ans++;
            cout<<ans<<endl;
        }
    }

	 return 0;

}

