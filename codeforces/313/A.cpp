#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
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
        int n;
        n=s.length();
        if(s[0]=='-')
        {
            if(s[n-1]-'0' > s[n-2]-'0') s.erase(s.begin()+(n-1));
            else s.erase(s.begin()+(n-2));
            if(s[1]=='0') s.erase(s.begin());
        }
        cout<<s<<endl;
    }

	 return 0;

}

