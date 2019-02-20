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
int pow(int i,int n)
{
   int ans=1;
   for(int j=1;j<=n;j++) ans*=i;
   return ans;
}

int main()

{
	IOS;
	string s;
	while(cin>>s)
	{
	    int l=s.length();
	    int rem=(s[l-1]+(s[l-2]*10))%4;
	    int eq=(pow(1,rem)+pow(2,rem)+pow(3,rem)+pow(4,rem))%5;
	    cout<<eq<<endl;

	}
    return 0;

}
