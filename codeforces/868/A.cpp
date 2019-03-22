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
        int n;
        cin>>n;
        string t[n],tm,tm2;
        bool b=false;
        for(int i=0;i<n;i++)
        {
            cin>>t[i];
            tm.pb(t[i][0]);
            tm2.pb(t[i][1]);
            if(t[i]==s) b=true;
        }
        //cout<<tm<<endl<<tm2<<endl;
        size_t f=tm.find(s[1]),f2=tm2.find(s[0]);
        if((f!=np&&f2!=np)||b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

	 return 0;

}

