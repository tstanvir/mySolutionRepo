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
	string s;
	while(cin>>s)
    {
        int cur=0,ln=s.length();
        int ans=0;
        for(int i=0;i<ln;i++)
        {
            int protom=cur-(s[i]-'a'),ditio=(s[i]-'a')-cur;
            if(protom<0) protom+=26;
            if(ditio<0) ditio+=26;
            if(protom<ditio) ans+=protom;
            else ans+=ditio;
            cur=s[i]-'a';
        }
        cout<<ans<<endl;
    }

	 return 0;

}

