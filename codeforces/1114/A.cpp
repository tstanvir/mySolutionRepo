#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define p printf

#define s scanf

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
	int a,d,m;
	int g,p,b;
	int gp,gpb;
	int cnt=0;
	while(cin>>a>>d>>m)
    {
        cin>>g>>p>>b;
        if(g>=a)
        {
            cnt++;
            g-=a;
        }
        gp=g+p;
        if(gp>=d)
        {
            cnt++;
            gp-=d;
        }
        gpb=gp+b;
        if(gpb>=m)
        {
            cnt++;
        }
        if(cnt==3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

	 return 0;

}

