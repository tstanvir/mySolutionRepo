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

int main()

{
	IOS;
	string s,t;
	while(cin>>s)
    {
        int cnt=1;
        t=s;
        char ch=s[s.size()-1];
        t.insert(t.begin(),ch);
        t.pop_back();
        while(t!=s)
        {
            cnt++;
            ch=t[t.size()-1];
            t.insert(t.begin(),ch);
            t.pop_back();
        }
        cout<<cnt<<endl;

    }

	 return 0;

}

