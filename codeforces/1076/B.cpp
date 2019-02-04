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
	ll n;
	while(cin>>n)
    {
        if(n%2==0) cout<<n/2LL<<endl;
        else
        {
            int lim=sqrt(n);
            bool b=true;;
            for(int i=3;i<=lim;i+=2)
            {
                if(n%i==0)
                {
                    n-=i;
                    b=false;
                    break;
                }
            }
            if(b) cout<<1<<endl;
            else cout<<(n/2)+1LL<<endl;
        }
    }

	 return 0;

}

