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
	bool bal=false;
	string s,t[6];
	cin>>s;
	for(int i=0;i<5;i++)
    {
        cin>>t[i];
    }
    for(int i=0;i<5;i++)
    {
        if(t[i].at(0)==s[0] || t[i].at(1)==s[1]) {cout<<"YES"<<endl; bal=true; break;}
    }
    if(!bal) cout<<"NO"<<endl;


	 return 0;

}

