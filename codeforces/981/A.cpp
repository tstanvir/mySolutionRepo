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
bool isPalin(string s)
{
    int n=s.size();
    for(int i=0,j=n-1;i<=n/2;i++,j--)
    {
        if(s[i]==s[j]) continue;
        else return 0;
    }
    return 1;
}

int main()

{
	IOS;
	string s;

	while(cin>>s)
    {
        set<char>st(s.begin(),s.end());
        if(st.size()==1) cout<<0<<endl;
        else if(isPalin(s)) cout<<s.size()-1<<endl;
        else cout<<s.size()<<endl;
    }

	 return 0;

}

