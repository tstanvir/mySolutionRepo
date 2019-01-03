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
	int maxi=-1;int exit[n],enter[n];
	for(int i=0;i<n;i++) {

            cin>>exit[i]>>enter[i];
    }
    int current=enter[0]-exit[1]+enter[1];
    maxi=enter[0];
    for(int i=1;i<n-1;i++)
    {
        if((current)>=maxi) maxi=current;
        current=current-exit[i+1]+enter[i+1];
        //cout<<maxi<<endl<<endl;
    }
    cout<<maxi<<endl;

	 return 0;

}

