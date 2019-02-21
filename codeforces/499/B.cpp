#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define pf printf

#define sf scanf

#define ALL(x) x.begin(),x.end()
#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos
typedef long long ll;


//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
	int n,m;
	while(cin>>n>>m)
    {
        map<string,string>a1;
        for(int i=0;i<m;i++)
        {
            string a,b;
            cin>>a>>b;
            a1[a]=b;
        }
        string s[n];
        for(int i=0;i<n;i++)
        {
            string t;
            cin>>t;
            string tmp=a1[t];
            if(tmp.size()<t.size()) s[i].insert(0,tmp);
            else s[i].insert(0,t);
        }
        for(int i=0;i<n;i++) cout<<s[i]<<" ";
        cout<<endl;

    }

	 return 0;

}

