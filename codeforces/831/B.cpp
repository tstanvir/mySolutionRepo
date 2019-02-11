#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define p printf

#define s scanf

#define ALL(x) (x.begin(),x.end())
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
	string l1,l2,s,t;

	while(cin>>l1>>l2>>s)
    {
        map<char,int>m1;
        map<int,char>m2;
        t.clear();
        for(int i=0;i<26;i++) m1[l1[i]]=i;
        for(int i=0;i<26;i++) m2[i]=l2[i];
        for(int i=0;i<s.length();i++)
        {
            if(m1[tolower(s[i])]==0 && tolower(s[i])!=l1[0]) t.pb(s[i]);
            else if(isupper(s[i]))
            {
                t.pb(toupper(m2[m1[tolower(s[i])]]));
            }
            else t.pb(m2[m1[s[i]]]);

        }

        cout<<t<<endl;

    }


	 return 0;

}

