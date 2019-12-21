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
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        ll n,x,y,d;
        cin>>n>>x>>y>>d;
        if(abs(x-y)%d==0) cout<<abs(x-y)/d<<endl;
        else{
            if((y-1)%d==0 || (n-y)%d==0){
                ll ans1=numeric_limits<ll>::max(),ans2=numeric_limits<ll>::max();
               if((y-1)%d==0) ans1=((y-1)/d)+(((x-1)/d)+((x-1)%d!=0));
                if((n-y)%d==0) ans2=((n-y)/d)+(((n-x)/d)+((n-x)%d!=0));
                cout<<min(ans1,ans2)<<endl;
            }
            else cout<<-1<<endl;
        }

    }
	 return 0;

}

