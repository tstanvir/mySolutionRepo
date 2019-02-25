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
	while(cin>>s)
    {
        bool b=false;
        if(s.size()<3) {cout<<"NO"<<endl;continue;}
        for(int i=0;i<s.size()-2;i++)
        {
            string t;
            t.pb(s[i]);t.pb(s[i+1]);t.pb(s[i+2]);
            //cout<<t<<endl;
            if(t=="ABC" or t=="ACB" or t=="BAC" or t=="BCA" or t=="CAB" or t=="CBA") {cout<<"YES"<<endl;b=true; break;}
        }
        if(!b) cout<<"NO"<<endl;
    }

	 return 0;

}

