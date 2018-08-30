#include<bits/stdc++.h>
using namespace std;
#define p printf
#define s scanf
#define ll long long
#define pb push_back
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
	IOS;
	string a,b;
	while(cin>>a>>b)
	{
		bool cal=false;
		for(int i=0;i<a.size();i++)
		{
			int bal=a[i]-b[i];
			if(bal<0) {cout<<-1<<endl; cal=true; break;}
		}
		if(!cal) cout<<b<<endl;
	}

	return 0;
}
