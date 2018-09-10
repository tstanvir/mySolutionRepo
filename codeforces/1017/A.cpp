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
#define mini -1

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
	int rol=1;vector<int>bal;
	int sum1;
	for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=1;j<=4;j++) {int a; cin>>a; sum+=a;}
        if(i==1) sum1=sum;
        bal.pb(sum);

    }
    sort(bal.begin(),bal.end(),greater<int>());
    for(int i=0;i<bal.size();i++) if(sum1==bal[i]) {cout<<i+1<<endl; break;}

    return 0;

}

