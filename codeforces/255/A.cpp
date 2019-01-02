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
	int chest=0,biceps=0,back=0;
	int arr[n+1];
	for(int i=1;i<=n;i++) cin>>arr[i];
	for(int i=1;i<=n;i++)
    {
        if(i%3==1) chest+=arr[i];
        else if(i%3==2) biceps+=arr[i];
        else if(i%3==0) back+=arr[i];
    }
  //  cout<<chest<<endl<<biceps<<endl<<back<<endl;
    if(chest>biceps && chest>back) cout<<"chest"<<endl;
    else if(back>chest && back>biceps) cout<<"back"<<endl;
    else cout<<"biceps"<<endl;


	 return 0;

}

