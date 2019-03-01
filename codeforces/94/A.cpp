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
	string s;
	map<string,int>m;
	while(cin>>s)
    {
        for(int i=0;i<10;i++) {string t;cin>>t;m[t]=i;}
        for(int j=0;j<80;j+=10)
        {
            string p;
            for(int k=j;k<j+10;k++) p.pb(s[k]);//cout<<"DUKHCHE"<<endl; cout<<s[k];}
            cout<<m[p];
            p.clear();
        }
        cout<<endl;
    }

	 return 0;

}

