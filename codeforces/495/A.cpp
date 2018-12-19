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
	string s;
	cin>>s;
	int bal,cal;
	if(s.at(0)=='1') bal=7;
	if(s.at(0)=='0' ) bal=2;
	if(s.at(0)=='2' ) bal=2;
	if(s.at(0)=='3' ) bal=3;
	if(s.at(0)=='4' ) bal=3;
    if(s.at(0)=='5' ) bal=4;
    if(s.at(0)=='6' ) bal=2;
    if(s.at(0)=='7' ) bal=5;
    if(s.at(0)=='8' ) bal=1;
    if(s.at(0)=='9') bal=2;
    if(s.at(1)=='1') cal=7;
	if(s.at(1)=='0' ) cal=2;
	if(s.at(1)=='2' ) cal=2;
	if(s.at(1)=='3' ) cal=3;
	if(s.at(1)=='4' ) cal=3;
    if(s.at(1)=='5' ) cal=4;
    if(s.at(1)=='6' ) cal=2;
    if(s.at(1)=='7' ) cal=5;
    if(s.at(1)=='8' ) cal=1;
    if(s.at(1)=='9') cal=2;
    cout<<bal*cal<<endl;
	 return 0;

}

